// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: system_info_session_message.proto

#include "system_info_session_message.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace aspia {
namespace proto {
class Services_ItemDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Services_Item>
      _instance;
} _Services_Item_default_instance_;
class ServicesDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Services>
      _instance;
} _Services_default_instance_;
}  // namespace proto
}  // namespace aspia
namespace protobuf_system_5finfo_5fsession_5fmessage_2eproto {
void InitDefaultsServices_ItemImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::aspia::proto::_Services_Item_default_instance_;
    new (ptr) ::aspia::proto::Services_Item();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::aspia::proto::Services_Item::InitAsDefaultInstance();
}

void InitDefaultsServices_Item() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsServices_ItemImpl);
}

void InitDefaultsServicesImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_system_5finfo_5fsession_5fmessage_2eproto::InitDefaultsServices_Item();
  {
    void* ptr = &::aspia::proto::_Services_default_instance_;
    new (ptr) ::aspia::proto::Services();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::aspia::proto::Services::InitAsDefaultInstance();
}

void InitDefaultsServices() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsServicesImpl);
}

}  // namespace protobuf_system_5finfo_5fsession_5fmessage_2eproto
namespace aspia {
namespace proto {
bool Services_Item_Status_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Services_Item_Status Services_Item::STATUS_UNKNOWN;
const Services_Item_Status Services_Item::STATUS_CONTINUE_PENDING;
const Services_Item_Status Services_Item::STATUS_PAUSE_PENDING;
const Services_Item_Status Services_Item::STATUS_PAUSED;
const Services_Item_Status Services_Item::STATUS_RUNNING;
const Services_Item_Status Services_Item::STATUS_START_PENDING;
const Services_Item_Status Services_Item::STATUS_STOP_PENDING;
const Services_Item_Status Services_Item::STATUS_STOPPED;
const Services_Item_Status Services_Item::Status_MIN;
const Services_Item_Status Services_Item::Status_MAX;
const int Services_Item::Status_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
bool Services_Item_StartupType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Services_Item_StartupType Services_Item::STARTUP_TYPE_UNKNOWN;
const Services_Item_StartupType Services_Item::STARTUP_TYPE_AUTO_START;
const Services_Item_StartupType Services_Item::STARTUP_TYPE_DEMAND_START;
const Services_Item_StartupType Services_Item::STARTUP_TYPE_DISABLED;
const Services_Item_StartupType Services_Item::STARTUP_TYPE_BOOT_START;
const Services_Item_StartupType Services_Item::STARTUP_TYPE_SYSTEM_START;
const Services_Item_StartupType Services_Item::StartupType_MIN;
const Services_Item_StartupType Services_Item::StartupType_MAX;
const int Services_Item::StartupType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void Services_Item::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Services_Item::kNameFieldNumber;
const int Services_Item::kDisplayNameFieldNumber;
const int Services_Item::kDescriptionFieldNumber;
const int Services_Item::kStatusFieldNumber;
const int Services_Item::kStartupTypeFieldNumber;
const int Services_Item::kBinaryPathFieldNumber;
const int Services_Item::kStartNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Services_Item::Services_Item()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_system_5finfo_5fsession_5fmessage_2eproto::InitDefaultsServices_Item();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:aspia.proto.Services.Item)
}
Services_Item::Services_Item(const Services_Item& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  display_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.display_name().size() > 0) {
    display_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.display_name_);
  }
  description_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.description().size() > 0) {
    description_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.description_);
  }
  binary_path_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.binary_path().size() > 0) {
    binary_path_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.binary_path_);
  }
  start_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.start_name().size() > 0) {
    start_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.start_name_);
  }
  ::memcpy(&status_, &from.status_,
    static_cast<size_t>(reinterpret_cast<char*>(&startup_type_) -
    reinterpret_cast<char*>(&status_)) + sizeof(startup_type_));
  // @@protoc_insertion_point(copy_constructor:aspia.proto.Services.Item)
}

void Services_Item::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  display_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  description_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  binary_path_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  start_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&status_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&startup_type_) -
      reinterpret_cast<char*>(&status_)) + sizeof(startup_type_));
  _cached_size_ = 0;
}

Services_Item::~Services_Item() {
  // @@protoc_insertion_point(destructor:aspia.proto.Services.Item)
  SharedDtor();
}

void Services_Item::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  display_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  description_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  binary_path_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  start_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Services_Item::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const Services_Item& Services_Item::default_instance() {
  ::protobuf_system_5finfo_5fsession_5fmessage_2eproto::InitDefaultsServices_Item();
  return *internal_default_instance();
}

Services_Item* Services_Item::New(::google::protobuf::Arena* arena) const {
  Services_Item* n = new Services_Item;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Services_Item::Clear() {
// @@protoc_insertion_point(message_clear_start:aspia.proto.Services.Item)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  display_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  binary_path_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  start_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&status_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&startup_type_) -
      reinterpret_cast<char*>(&status_)) + sizeof(startup_type_));
  _internal_metadata_.Clear();
}

bool Services_Item::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:aspia.proto.Services.Item)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "aspia.proto.Services.Item.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string display_name = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_display_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->display_name().data(), static_cast<int>(this->display_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "aspia.proto.Services.Item.display_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string description = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_description()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->description().data(), static_cast<int>(this->description().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "aspia.proto.Services.Item.description"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .aspia.proto.Services.Item.Status status = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_status(static_cast< ::aspia::proto::Services_Item_Status >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .aspia.proto.Services.Item.StartupType startup_type = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_startup_type(static_cast< ::aspia::proto::Services_Item_StartupType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string binary_path = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_binary_path()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->binary_path().data(), static_cast<int>(this->binary_path().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "aspia.proto.Services.Item.binary_path"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string start_name = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_start_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->start_name().data(), static_cast<int>(this->start_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "aspia.proto.Services.Item.start_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:aspia.proto.Services.Item)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:aspia.proto.Services.Item)
  return false;
#undef DO_
}

void Services_Item::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:aspia.proto.Services.Item)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "aspia.proto.Services.Item.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // string display_name = 2;
  if (this->display_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->display_name().data(), static_cast<int>(this->display_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "aspia.proto.Services.Item.display_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->display_name(), output);
  }

  // string description = 3;
  if (this->description().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->description().data(), static_cast<int>(this->description().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "aspia.proto.Services.Item.description");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->description(), output);
  }

  // .aspia.proto.Services.Item.Status status = 4;
  if (this->status() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->status(), output);
  }

  // .aspia.proto.Services.Item.StartupType startup_type = 5;
  if (this->startup_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      5, this->startup_type(), output);
  }

  // string binary_path = 6;
  if (this->binary_path().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->binary_path().data(), static_cast<int>(this->binary_path().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "aspia.proto.Services.Item.binary_path");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->binary_path(), output);
  }

  // string start_name = 7;
  if (this->start_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->start_name().data(), static_cast<int>(this->start_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "aspia.proto.Services.Item.start_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      7, this->start_name(), output);
  }

  output->WriteRaw((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).data(),
                   static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size()));
  // @@protoc_insertion_point(serialize_end:aspia.proto.Services.Item)
}

size_t Services_Item::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aspia.proto.Services.Item)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size();

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // string display_name = 2;
  if (this->display_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->display_name());
  }

  // string description = 3;
  if (this->description().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->description());
  }

  // string binary_path = 6;
  if (this->binary_path().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->binary_path());
  }

  // string start_name = 7;
  if (this->start_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->start_name());
  }

  // .aspia.proto.Services.Item.Status status = 4;
  if (this->status() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->status());
  }

  // .aspia.proto.Services.Item.StartupType startup_type = 5;
  if (this->startup_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->startup_type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Services_Item::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Services_Item*>(&from));
}

void Services_Item::MergeFrom(const Services_Item& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aspia.proto.Services.Item)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.display_name().size() > 0) {

    display_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.display_name_);
  }
  if (from.description().size() > 0) {

    description_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.description_);
  }
  if (from.binary_path().size() > 0) {

    binary_path_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.binary_path_);
  }
  if (from.start_name().size() > 0) {

    start_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.start_name_);
  }
  if (from.status() != 0) {
    set_status(from.status());
  }
  if (from.startup_type() != 0) {
    set_startup_type(from.startup_type());
  }
}

void Services_Item::CopyFrom(const Services_Item& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aspia.proto.Services.Item)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Services_Item::IsInitialized() const {
  return true;
}

void Services_Item::Swap(Services_Item* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Services_Item::InternalSwap(Services_Item* other) {
  using std::swap;
  name_.Swap(&other->name_);
  display_name_.Swap(&other->display_name_);
  description_.Swap(&other->description_);
  binary_path_.Swap(&other->binary_path_);
  start_name_.Swap(&other->start_name_);
  swap(status_, other->status_);
  swap(startup_type_, other->startup_type_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string Services_Item::GetTypeName() const {
  return "aspia.proto.Services.Item";
}


// ===================================================================

void Services::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Services::kItemFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Services::Services()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_system_5finfo_5fsession_5fmessage_2eproto::InitDefaultsServices();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:aspia.proto.Services)
}
Services::Services(const Services& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      item_(from.item_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:aspia.proto.Services)
}

void Services::SharedCtor() {
  _cached_size_ = 0;
}

Services::~Services() {
  // @@protoc_insertion_point(destructor:aspia.proto.Services)
  SharedDtor();
}

void Services::SharedDtor() {
}

void Services::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const Services& Services::default_instance() {
  ::protobuf_system_5finfo_5fsession_5fmessage_2eproto::InitDefaultsServices();
  return *internal_default_instance();
}

Services* Services::New(::google::protobuf::Arena* arena) const {
  Services* n = new Services;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Services::Clear() {
// @@protoc_insertion_point(message_clear_start:aspia.proto.Services)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  item_.Clear();
  _internal_metadata_.Clear();
}

bool Services::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:aspia.proto.Services)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .aspia.proto.Services.Item item = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_item()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:aspia.proto.Services)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:aspia.proto.Services)
  return false;
#undef DO_
}

void Services::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:aspia.proto.Services)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .aspia.proto.Services.Item item = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->item_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->item(static_cast<int>(i)), output);
  }

  output->WriteRaw((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).data(),
                   static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size()));
  // @@protoc_insertion_point(serialize_end:aspia.proto.Services)
}

size_t Services::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aspia.proto.Services)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size();

  // repeated .aspia.proto.Services.Item item = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->item_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->item(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Services::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Services*>(&from));
}

void Services::MergeFrom(const Services& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aspia.proto.Services)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  item_.MergeFrom(from.item_);
}

void Services::CopyFrom(const Services& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aspia.proto.Services)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Services::IsInitialized() const {
  return true;
}

void Services::Swap(Services* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Services::InternalSwap(Services* other) {
  using std::swap;
  item_.InternalSwap(&other->item_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string Services::GetTypeName() const {
  return "aspia.proto.Services";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace aspia

// @@protoc_insertion_point(global_scope)
