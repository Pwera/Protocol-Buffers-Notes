// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MyMessage.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_MyMessage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_MyMessage_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3008000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3008000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "ContextEnum.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_MyMessage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_MyMessage_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_MyMessage_2eproto;
namespace me {
namespace piotr {
namespace wera {
class MyMessage;
class MyMessageDefaultTypeInternal;
extern MyMessageDefaultTypeInternal _MyMessage_default_instance_;
class MyMessageWrapper;
class MyMessageWrapperDefaultTypeInternal;
extern MyMessageWrapperDefaultTypeInternal _MyMessageWrapper_default_instance_;
}  // namespace wera
}  // namespace piotr
}  // namespace me
PROTOBUF_NAMESPACE_OPEN
template<> ::me::piotr::wera::MyMessage* Arena::CreateMaybeMessage<::me::piotr::wera::MyMessage>(Arena*);
template<> ::me::piotr::wera::MyMessageWrapper* Arena::CreateMaybeMessage<::me::piotr::wera::MyMessageWrapper>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace me {
namespace piotr {
namespace wera {

// ===================================================================

class MyMessage :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:me.piotr.wera.MyMessage) */ {
 public:
  MyMessage();
  virtual ~MyMessage();

  MyMessage(const MyMessage& from);
  MyMessage(MyMessage&& from) noexcept
    : MyMessage() {
    *this = ::std::move(from);
  }

  inline MyMessage& operator=(const MyMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline MyMessage& operator=(MyMessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const MyMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MyMessage* internal_default_instance() {
    return reinterpret_cast<const MyMessage*>(
               &_MyMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MyMessage& a, MyMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(MyMessage* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MyMessage* New() const final {
    return CreateMaybeMessage<MyMessage>(nullptr);
  }

  MyMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MyMessage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MyMessage& from);
  void MergeFrom(const MyMessage& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(MyMessage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "me.piotr.wera.MyMessage";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_MyMessage_2eproto);
    return ::descriptor_table_MyMessage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNumbersFieldNumber = 2,
    kNameFieldNumber = 1,
    kContextFieldNumber = 3,
  };
  // repeated int32 numbers = 2;
  int numbers_size() const;
  void clear_numbers();
  ::PROTOBUF_NAMESPACE_ID::int32 numbers(int index) const;
  void set_numbers(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  void add_numbers(::PROTOBUF_NAMESPACE_ID::int32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      numbers() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_numbers();

  // string name = 1;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);

  // .me.piotr.wera.ContextEnum context = 3;
  void clear_context();
  ::me::piotr::wera::ContextEnum context() const;
  void set_context(::me::piotr::wera::ContextEnum value);

  // @@protoc_insertion_point(class_scope:me.piotr.wera.MyMessage)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > numbers_;
  mutable std::atomic<int> _numbers_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  int context_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_MyMessage_2eproto;
};
// -------------------------------------------------------------------

class MyMessageWrapper :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:me.piotr.wera.MyMessageWrapper) */ {
 public:
  MyMessageWrapper();
  virtual ~MyMessageWrapper();

  MyMessageWrapper(const MyMessageWrapper& from);
  MyMessageWrapper(MyMessageWrapper&& from) noexcept
    : MyMessageWrapper() {
    *this = ::std::move(from);
  }

  inline MyMessageWrapper& operator=(const MyMessageWrapper& from) {
    CopyFrom(from);
    return *this;
  }
  inline MyMessageWrapper& operator=(MyMessageWrapper&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const MyMessageWrapper& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MyMessageWrapper* internal_default_instance() {
    return reinterpret_cast<const MyMessageWrapper*>(
               &_MyMessageWrapper_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(MyMessageWrapper& a, MyMessageWrapper& b) {
    a.Swap(&b);
  }
  inline void Swap(MyMessageWrapper* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MyMessageWrapper* New() const final {
    return CreateMaybeMessage<MyMessageWrapper>(nullptr);
  }

  MyMessageWrapper* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MyMessageWrapper>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MyMessageWrapper& from);
  void MergeFrom(const MyMessageWrapper& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(MyMessageWrapper* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "me.piotr.wera.MyMessageWrapper";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_MyMessage_2eproto);
    return ::descriptor_table_MyMessage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMessagesFieldNumber = 1,
  };
  // repeated .me.piotr.wera.MyMessage messages = 1;
  int messages_size() const;
  void clear_messages();
  ::me::piotr::wera::MyMessage* mutable_messages(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::me::piotr::wera::MyMessage >*
      mutable_messages();
  const ::me::piotr::wera::MyMessage& messages(int index) const;
  ::me::piotr::wera::MyMessage* add_messages();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::me::piotr::wera::MyMessage >&
      messages() const;

  // @@protoc_insertion_point(class_scope:me.piotr.wera.MyMessageWrapper)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::me::piotr::wera::MyMessage > messages_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_MyMessage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MyMessage

// string name = 1;
inline void MyMessage::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& MyMessage::name() const {
  // @@protoc_insertion_point(field_get:me.piotr.wera.MyMessage.name)
  return name_.GetNoArena();
}
inline void MyMessage::set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:me.piotr.wera.MyMessage.name)
}
inline void MyMessage::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:me.piotr.wera.MyMessage.name)
}
inline void MyMessage::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:me.piotr.wera.MyMessage.name)
}
inline void MyMessage::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:me.piotr.wera.MyMessage.name)
}
inline std::string* MyMessage::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:me.piotr.wera.MyMessage.name)
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* MyMessage::release_name() {
  // @@protoc_insertion_point(field_release:me.piotr.wera.MyMessage.name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void MyMessage::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:me.piotr.wera.MyMessage.name)
}

// repeated int32 numbers = 2;
inline int MyMessage::numbers_size() const {
  return numbers_.size();
}
inline void MyMessage::clear_numbers() {
  numbers_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MyMessage::numbers(int index) const {
  // @@protoc_insertion_point(field_get:me.piotr.wera.MyMessage.numbers)
  return numbers_.Get(index);
}
inline void MyMessage::set_numbers(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  numbers_.Set(index, value);
  // @@protoc_insertion_point(field_set:me.piotr.wera.MyMessage.numbers)
}
inline void MyMessage::add_numbers(::PROTOBUF_NAMESPACE_ID::int32 value) {
  numbers_.Add(value);
  // @@protoc_insertion_point(field_add:me.piotr.wera.MyMessage.numbers)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
MyMessage::numbers() const {
  // @@protoc_insertion_point(field_list:me.piotr.wera.MyMessage.numbers)
  return numbers_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
MyMessage::mutable_numbers() {
  // @@protoc_insertion_point(field_mutable_list:me.piotr.wera.MyMessage.numbers)
  return &numbers_;
}

// .me.piotr.wera.ContextEnum context = 3;
inline void MyMessage::clear_context() {
  context_ = 0;
}
inline ::me::piotr::wera::ContextEnum MyMessage::context() const {
  // @@protoc_insertion_point(field_get:me.piotr.wera.MyMessage.context)
  return static_cast< ::me::piotr::wera::ContextEnum >(context_);
}
inline void MyMessage::set_context(::me::piotr::wera::ContextEnum value) {
  
  context_ = value;
  // @@protoc_insertion_point(field_set:me.piotr.wera.MyMessage.context)
}

// -------------------------------------------------------------------

// MyMessageWrapper

// repeated .me.piotr.wera.MyMessage messages = 1;
inline int MyMessageWrapper::messages_size() const {
  return messages_.size();
}
inline void MyMessageWrapper::clear_messages() {
  messages_.Clear();
}
inline ::me::piotr::wera::MyMessage* MyMessageWrapper::mutable_messages(int index) {
  // @@protoc_insertion_point(field_mutable:me.piotr.wera.MyMessageWrapper.messages)
  return messages_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::me::piotr::wera::MyMessage >*
MyMessageWrapper::mutable_messages() {
  // @@protoc_insertion_point(field_mutable_list:me.piotr.wera.MyMessageWrapper.messages)
  return &messages_;
}
inline const ::me::piotr::wera::MyMessage& MyMessageWrapper::messages(int index) const {
  // @@protoc_insertion_point(field_get:me.piotr.wera.MyMessageWrapper.messages)
  return messages_.Get(index);
}
inline ::me::piotr::wera::MyMessage* MyMessageWrapper::add_messages() {
  // @@protoc_insertion_point(field_add:me.piotr.wera.MyMessageWrapper.messages)
  return messages_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::me::piotr::wera::MyMessage >&
MyMessageWrapper::messages() const {
  // @@protoc_insertion_point(field_list:me.piotr.wera.MyMessageWrapper.messages)
  return messages_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace wera
}  // namespace piotr
}  // namespace me

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_MyMessage_2eproto
