//
// PROJECT:         Aspia
// FILE:            host/host_server.cc
// LICENSE:         GNU General Public License 3
// PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
//

#include "host/host_server.h"

#include <QCoreApplication>
#include <QDebug>

#include "host/win/host.h"
#include "host/host_settings.h"
#include "host/host_user_authorizer.h"
#include "network/firewall_manager.h"
#include "network/network_channel.h"

namespace aspia {

namespace {

const char kFirewallRuleName[] = "Aspia Host Service";

} // namespace

HostServer::HostServer(QObject* parent)
    : QObject(parent)
{
    // Nothing
}

HostServer::~HostServer()
{
    stop();
}

bool HostServer::start()
{
    if (!network_server_.isNull())
    {
        qWarning("An attempt was start an already running server.");
        return false;
    }

    HostSettings settings;

    user_list_ = settings.userList();
    if (user_list_.isEmpty())
    {
        qWarning("Empty user list");
        return false;
    }

    int port = settings.tcpPort();

    FirewallManager firewall(QCoreApplication::applicationFilePath());
    if (firewall.isValid())
    {
        firewall.addTcpRule(kFirewallRuleName,
                            QCoreApplication::tr("Allow incoming TCP connections"),
                            port);
    }

    network_server_ = new NetworkServer(this);

    connect(network_server_, &NetworkServer::newChannelReady,
            this, &HostServer::onNewConnection);

    if (!network_server_->start(port))
        return false;

    return true;
}

void HostServer::stop()
{
    if (!network_server_.isNull())
    {
        network_server_->stop();
        delete network_server_;
    }

    user_list_.clear();

    FirewallManager firewall(QCoreApplication::applicationFilePath());
    if (firewall.isValid())
        firewall.deleteRuleByName(kFirewallRuleName);
}

void HostServer::setSessionChanged(quint32 event, quint32 session_id)
{
    emit sessionChanged(event, session_id);
}

void HostServer::onNewConnection()
{
    while (network_server_->hasReadyChannels())
    {
        NetworkChannel* channel = network_server_->nextReadyChannel();
        if (!channel)
            continue;

        HostUserAuthorizer* authorizer = new HostUserAuthorizer(this);

        authorizer->setNetworkChannel(channel);
        authorizer->setUserList(user_list_);

        connect(authorizer, &HostUserAuthorizer::finished,
                this, &HostServer::onAuthorizationFinished);

        authorizer->start();
    }
}

void HostServer::onAuthorizationFinished(HostUserAuthorizer* authorizer)
{
    QScopedPointer<HostUserAuthorizer> authorizer_deleter(authorizer);

    if (authorizer->status() != proto::auth::STATUS_SUCCESS)
        return;

    NetworkChannel* network_channel = authorizer->networkChannel();
    if (!network_channel)
        return;

    Host* host = new Host(authorizer->sessionType(), network_channel, this);

    connect(this, &HostServer::sessionChanged, host, &Host::sessionChanged);
    connect(host, &Host::finished, this, &HostServer::onHostFinished);

    host->start();
}

void HostServer::onHostFinished(Host* host)
{
    delete host;
}

} // namespace aspia