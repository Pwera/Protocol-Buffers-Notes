// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MyMessage.proto

#include "MyMessage.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2ftimestamp_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Timestamp_google_2fprotobuf_2ftimestamp_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_MyMessage_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_MyMessage_MyMessage_2eproto;
namespace me {
namespace piotr {
namespace wera {
class MyMessageDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<MyMessage> _instance;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr value1_;
  ::PROTOBUF_NAMESPACE_ID::int32 value2_;
} _MyMessage_default_instance_;
class MyMessageWrapperDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<MyMessageWrapper> _instance;
} _MyMessageWrapper_default_instance_;
}  // namespace wera
}  // namespace piotr
}  // namespace me
static void InitDefaultsscc_info_MyMessage_MyMessage_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::me::piotr::wera::_MyMessage_default_instance_;
    new (ptr) ::me::piotr::wera::MyMessage();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::me::piotr::wera::MyMessage::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_MyMessage_MyMessage_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_MyMessage_MyMessage_2eproto}, {
      &scc_info_Timestamp_google_2fprotobuf_2ftimestamp_2eproto.base,}};

static void InitDefaultsscc_info_MyMessageWrapper_MyMessage_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::me::piotr::wera::_MyMessageWrapper_default_instance_;
    new (ptr) ::me::piotr::wera::MyMessageWrapper();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::me::piotr::wera::MyMessageWrapper::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_MyMessageWrapper_MyMessage_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_MyMessageWrapper_MyMessage_2eproto}, {
      &scc_info_MyMessage_MyMessage_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_MyMessage_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_MyMessage_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_MyMessage_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_MyMessage_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::me::piotr::wera::MyMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  PROTOBUF_FIELD_OFFSET(::me::piotr::wera::MyMessage, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::me::piotr::wera::MyMessage, name_),
  PROTOBUF_FIELD_OFFSET(::me::piotr::wera::MyMessage, numbers_),
  PROTOBUF_FIELD_OFFSET(::me::piotr::wera::MyMessage, context_),
  PROTOBUF_FIELD_OFFSET(::me::piotr::wera::MyMessage, timestamp_),
  offsetof(::me::piotr::wera::MyMessageDefaultTypeInternal, value1_),
  offsetof(::me::piotr::wera::MyMessageDefaultTypeInternal, value2_),
  PROTOBUF_FIELD_OFFSET(::me::piotr::wera::MyMessage, variant_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::me::piotr::wera::MyMessageWrapper, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::me::piotr::wera::MyMessageWrapper, messages_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::me::piotr::wera::MyMessage)},
  { 12, -1, sizeof(::me::piotr::wera::MyMessageWrapper)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::me::piotr::wera::_MyMessage_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::me::piotr::wera::_MyMessageWrapper_default_instance_),
};

const char descriptor_table_protodef_MyMessage_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017MyMessage.proto\022\rme.piotr.wera\032\021Contex"
  "tEnum.proto\032\037google/protobuf/timestamp.p"
  "roto\"\265\001\n\tMyMessage\022\014\n\004name\030\001 \001(\t\022\017\n\007numb"
  "ers\030\002 \003(\005\022+\n\007context\030\003 \001(\0162\032.me.piotr.we"
  "ra.ContextEnum\022-\n\ttimestamp\030\004 \001(\0132\032.goog"
  "le.protobuf.Timestamp\022\020\n\006value1\030\005 \001(\tH\000\022"
  "\020\n\006value2\030\006 \001(\005H\000B\t\n\007variant\">\n\020MyMessag"
  "eWrapper\022*\n\010messages\030\001 \003(\0132\030.me.piotr.we"
  "ra.MyMessageb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_MyMessage_2eproto_deps[2] = {
  &::descriptor_table_ContextEnum_2eproto,
  &::descriptor_table_google_2fprotobuf_2ftimestamp_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_MyMessage_2eproto_sccs[2] = {
  &scc_info_MyMessage_MyMessage_2eproto.base,
  &scc_info_MyMessageWrapper_MyMessage_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_MyMessage_2eproto_once;
static bool descriptor_table_MyMessage_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_MyMessage_2eproto = {
  &descriptor_table_MyMessage_2eproto_initialized, descriptor_table_protodef_MyMessage_2eproto, "MyMessage.proto", 340,
  &descriptor_table_MyMessage_2eproto_once, descriptor_table_MyMessage_2eproto_sccs, descriptor_table_MyMessage_2eproto_deps, 2, 2,
  schemas, file_default_instances, TableStruct_MyMessage_2eproto::offsets,
  file_level_metadata_MyMessage_2eproto, 2, file_level_enum_descriptors_MyMessage_2eproto, file_level_service_descriptors_MyMessage_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_MyMessage_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_MyMessage_2eproto)), true);
namespace me {
namespace piotr {
namespace wera {

// ===================================================================

void MyMessage::InitAsDefaultInstance() {
  ::me::piotr::wera::_MyMessage_default_instance_._instance.get_mutable()->timestamp_ = const_cast< PROTOBUF_NAMESPACE_ID::Timestamp*>(
      PROTOBUF_NAMESPACE_ID::Timestamp::internal_default_instance());
  ::me::piotr::wera::_MyMessage_default_instance_.value1_.UnsafeSetDefault(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::me::piotr::wera::_MyMessage_default_instance_.value2_ = 0;
}
class MyMessage::_Internal {
 public:
  static const PROTOBUF_NAMESPACE_ID::Timestamp& timestamp(const MyMessage* msg);
};

const PROTOBUF_NAMESPACE_ID::Timestamp&
MyMessage::_Internal::timestamp(const MyMessage* msg) {
  return *msg->timestamp_;
}
void MyMessage::clear_timestamp() {
  if (GetArenaNoVirtual() == nullptr && timestamp_ != nullptr) {
    delete timestamp_;
  }
  timestamp_ = nullptr;
}
MyMessage::MyMessage()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:me.piotr.wera.MyMessage)
}
MyMessage::MyMessage(const MyMessage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      numbers_(from.numbers_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_name().empty()) {
    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from._internal_has_timestamp()) {
    timestamp_ = new PROTOBUF_NAMESPACE_ID::Timestamp(*from.timestamp_);
  } else {
    timestamp_ = nullptr;
  }
  context_ = from.context_;
  clear_has_variant();
  switch (from.variant_case()) {
    case kValue1: {
      _internal_set_value1(from._internal_value1());
      break;
    }
    case kValue2: {
      _internal_set_value2(from._internal_value2());
      break;
    }
    case VARIANT_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:me.piotr.wera.MyMessage)
}

void MyMessage::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_MyMessage_MyMessage_2eproto.base);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&timestamp_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&context_) -
      reinterpret_cast<char*>(&timestamp_)) + sizeof(context_));
  clear_has_variant();
}

MyMessage::~MyMessage() {
  // @@protoc_insertion_point(destructor:me.piotr.wera.MyMessage)
  SharedDtor();
}

void MyMessage::SharedDtor() {
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete timestamp_;
  if (has_variant()) {
    clear_variant();
  }
}

void MyMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const MyMessage& MyMessage::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_MyMessage_MyMessage_2eproto.base);
  return *internal_default_instance();
}


void MyMessage::clear_variant() {
// @@protoc_insertion_point(one_of_clear_start:me.piotr.wera.MyMessage)
  switch (variant_case()) {
    case kValue1: {
      variant_.value1_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
      break;
    }
    case kValue2: {
      // No need to clear
      break;
    }
    case VARIANT_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = VARIANT_NOT_SET;
}


void MyMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:me.piotr.wera.MyMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  numbers_.Clear();
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == nullptr && timestamp_ != nullptr) {
    delete timestamp_;
  }
  timestamp_ = nullptr;
  context_ = 0;
  clear_variant();
  _internal_metadata_.Clear();
}

const char* MyMessage::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "me.piotr.wera.MyMessage.name"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated int32 numbers = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt32Parser(_internal_mutable_numbers(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16) {
          _internal_add_numbers(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .me.piotr.wera.ContextEnum context = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_context(static_cast<::me::piotr::wera::ContextEnum>(val));
        } else goto handle_unusual;
        continue;
      // .google.protobuf.Timestamp timestamp = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_timestamp(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string value1 = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          auto str = _internal_mutable_value1();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "me.piotr.wera.MyMessage.value1"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 value2 = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          _internal_set_value2(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* MyMessage::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:me.piotr.wera.MyMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "me.piotr.wera.MyMessage.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // repeated int32 numbers = 2;
  {
    int byte_size = _numbers_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteInt32Packed(
          2, _internal_numbers(), byte_size, target);
    }
  }

  // .me.piotr.wera.ContextEnum context = 3;
  if (this->context() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      3, this->_internal_context(), target);
  }

  // .google.protobuf.Timestamp timestamp = 4;
  if (this->has_timestamp()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        4, _Internal::timestamp(this), target, stream);
  }

  // string value1 = 5;
  if (_internal_has_value1()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_value1().data(), static_cast<int>(this->_internal_value1().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "me.piotr.wera.MyMessage.value1");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_value1(), target);
  }

  // int32 value2 = 6;
  if (_internal_has_value2()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(6, this->_internal_value2(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:me.piotr.wera.MyMessage)
  return target;
}

size_t MyMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:me.piotr.wera.MyMessage)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int32 numbers = 2;
  {
    size_t data_size = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      Int32Size(this->numbers_);
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _numbers_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // .google.protobuf.Timestamp timestamp = 4;
  if (this->has_timestamp()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *timestamp_);
  }

  // .me.piotr.wera.ContextEnum context = 3;
  if (this->context() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_context());
  }

  switch (variant_case()) {
    // string value1 = 5;
    case kValue1: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_value1());
      break;
    }
    // int32 value2 = 6;
    case kValue2: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->_internal_value2());
      break;
    }
    case VARIANT_NOT_SET: {
      break;
    }
  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MyMessage::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:me.piotr.wera.MyMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const MyMessage* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<MyMessage>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:me.piotr.wera.MyMessage)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:me.piotr.wera.MyMessage)
    MergeFrom(*source);
  }
}

void MyMessage::MergeFrom(const MyMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:me.piotr.wera.MyMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  numbers_.MergeFrom(from.numbers_);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.has_timestamp()) {
    _internal_mutable_timestamp()->PROTOBUF_NAMESPACE_ID::Timestamp::MergeFrom(from._internal_timestamp());
  }
  if (from.context() != 0) {
    _internal_set_context(from._internal_context());
  }
  switch (from.variant_case()) {
    case kValue1: {
      _internal_set_value1(from._internal_value1());
      break;
    }
    case kValue2: {
      _internal_set_value2(from._internal_value2());
      break;
    }
    case VARIANT_NOT_SET: {
      break;
    }
  }
}

void MyMessage::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:me.piotr.wera.MyMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MyMessage::CopyFrom(const MyMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:me.piotr.wera.MyMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MyMessage::IsInitialized() const {
  return true;
}

void MyMessage::InternalSwap(MyMessage* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  numbers_.InternalSwap(&other->numbers_);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(timestamp_, other->timestamp_);
  swap(context_, other->context_);
  swap(variant_, other->variant_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
}

::PROTOBUF_NAMESPACE_ID::Metadata MyMessage::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void MyMessageWrapper::InitAsDefaultInstance() {
}
class MyMessageWrapper::_Internal {
 public:
};

MyMessageWrapper::MyMessageWrapper()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:me.piotr.wera.MyMessageWrapper)
}
MyMessageWrapper::MyMessageWrapper(const MyMessageWrapper& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      messages_(from.messages_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:me.piotr.wera.MyMessageWrapper)
}

void MyMessageWrapper::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_MyMessageWrapper_MyMessage_2eproto.base);
}

MyMessageWrapper::~MyMessageWrapper() {
  // @@protoc_insertion_point(destructor:me.piotr.wera.MyMessageWrapper)
  SharedDtor();
}

void MyMessageWrapper::SharedDtor() {
}

void MyMessageWrapper::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const MyMessageWrapper& MyMessageWrapper::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_MyMessageWrapper_MyMessage_2eproto.base);
  return *internal_default_instance();
}


void MyMessageWrapper::Clear() {
// @@protoc_insertion_point(message_clear_start:me.piotr.wera.MyMessageWrapper)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  messages_.Clear();
  _internal_metadata_.Clear();
}

const char* MyMessageWrapper::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .me.piotr.wera.MyMessage messages = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_messages(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* MyMessageWrapper::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:me.piotr.wera.MyMessageWrapper)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .me.piotr.wera.MyMessage messages = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_messages_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_messages(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:me.piotr.wera.MyMessageWrapper)
  return target;
}

size_t MyMessageWrapper::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:me.piotr.wera.MyMessageWrapper)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .me.piotr.wera.MyMessage messages = 1;
  total_size += 1UL * this->_internal_messages_size();
  for (const auto& msg : this->messages_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MyMessageWrapper::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:me.piotr.wera.MyMessageWrapper)
  GOOGLE_DCHECK_NE(&from, this);
  const MyMessageWrapper* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<MyMessageWrapper>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:me.piotr.wera.MyMessageWrapper)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:me.piotr.wera.MyMessageWrapper)
    MergeFrom(*source);
  }
}

void MyMessageWrapper::MergeFrom(const MyMessageWrapper& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:me.piotr.wera.MyMessageWrapper)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  messages_.MergeFrom(from.messages_);
}

void MyMessageWrapper::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:me.piotr.wera.MyMessageWrapper)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MyMessageWrapper::CopyFrom(const MyMessageWrapper& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:me.piotr.wera.MyMessageWrapper)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MyMessageWrapper::IsInitialized() const {
  return true;
}

void MyMessageWrapper::InternalSwap(MyMessageWrapper* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  messages_.InternalSwap(&other->messages_);
}

::PROTOBUF_NAMESPACE_ID::Metadata MyMessageWrapper::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace wera
}  // namespace piotr
}  // namespace me
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::me::piotr::wera::MyMessage* Arena::CreateMaybeMessage< ::me::piotr::wera::MyMessage >(Arena* arena) {
  return Arena::CreateInternal< ::me::piotr::wera::MyMessage >(arena);
}
template<> PROTOBUF_NOINLINE ::me::piotr::wera::MyMessageWrapper* Arena::CreateMaybeMessage< ::me::piotr::wera::MyMessageWrapper >(Arena* arena) {
  return Arena::CreateInternal< ::me::piotr::wera::MyMessageWrapper >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
