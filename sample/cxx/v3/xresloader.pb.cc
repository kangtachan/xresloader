// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: xresloader.proto

#include "xresloader.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

extern PROTOBUF_INTERNAL_EXPORT_xresloader_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_IndexDescriptor_xresloader_2eproto;
namespace org {
namespace xresloader {
class IndexDescriptorDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<IndexDescriptor> _instance;
} _IndexDescriptor_default_instance_;
}  // namespace xresloader
}  // namespace org
static void InitDefaultsIndexDescriptor_xresloader_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::org::xresloader::_IndexDescriptor_default_instance_;
    new (ptr) ::org::xresloader::IndexDescriptor();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::org::xresloader::IndexDescriptor::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_IndexDescriptor_xresloader_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsIndexDescriptor_xresloader_2eproto}, {}};

void InitDefaults_xresloader_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_IndexDescriptor_xresloader_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_xresloader_2eproto[1];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_xresloader_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_xresloader_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_xresloader_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::org::xresloader::IndexDescriptor, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::org::xresloader::IndexDescriptor, name_),
  PROTOBUF_FIELD_OFFSET(::org::xresloader::IndexDescriptor, fields_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::org::xresloader::IndexDescriptor)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::org::xresloader::_IndexDescriptor_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_xresloader_2eproto = {
  {}, AddDescriptors_xresloader_2eproto, "xresloader.proto", schemas,
  file_default_instances, TableStruct_xresloader_2eproto::offsets,
  file_level_metadata_xresloader_2eproto, 1, file_level_enum_descriptors_xresloader_2eproto, file_level_service_descriptors_xresloader_2eproto,
};

const char descriptor_table_protodef_xresloader_2eproto[] =
  "\n\020xresloader.proto\022\016org.xresloader\032 goog"
  "le/protobuf/descriptor.proto\"/\n\017IndexDes"
  "criptor\022\014\n\004name\030\001 \001(\t\022\016\n\006fields\030\002 \003(\t:7\n"
  "\020file_description\022\034.google.protobuf.File"
  "Options\030\351\007 \001(\t:9\n\017msg_description\022\037.goog"
  "le.protobuf.MessageOptions\030\351\007 \001(\t:S\n\010kv_"
  "index\022\037.google.protobuf.MessageOptions\030\375"
  "\007 \003(\0132\037.org.xresloader.IndexDescriptor:S"
  "\n\010kl_index\022\037.google.protobuf.MessageOpti"
  "ons\030\376\007 \003(\0132\037.org.xresloader.IndexDescrip"
  "tor:0\n\010verifier\022\035.google.protobuf.FieldO"
  "ptions\030\351\007 \001(\t:9\n\021field_description\022\035.goo"
  "gle.protobuf.FieldOptions\030\363\007 \001(\t:9\n\021oneo"
  "f_description\022\035.google.protobuf.OneofOpt"
  "ions\030\351\007 \001(\t:7\n\020enum_description\022\034.google"
  ".protobuf.EnumOptions\030\351\007 \001(\t:=\n\021enumv_de"
  "scription\022!.google.protobuf.EnumValueOpt"
  "ions\030\351\007 \001(\tb\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_xresloader_2eproto = {
  false, InitDefaults_xresloader_2eproto, 
  descriptor_table_protodef_xresloader_2eproto,
  "xresloader.proto", &assign_descriptors_table_xresloader_2eproto, 699,
};

void AddDescriptors_xresloader_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
    ::AddDescriptors_google_2fprotobuf_2fdescriptor_2eproto,
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_xresloader_2eproto, deps, 1);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_xresloader_2eproto = []() { AddDescriptors_xresloader_2eproto(); return true; }();
namespace org {
namespace xresloader {

// ===================================================================

void IndexDescriptor::InitAsDefaultInstance() {
}
class IndexDescriptor::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int IndexDescriptor::kNameFieldNumber;
const int IndexDescriptor::kFieldsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

IndexDescriptor::IndexDescriptor()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:org.xresloader.IndexDescriptor)
}
IndexDescriptor::IndexDescriptor(const IndexDescriptor& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr),
      fields_(from.fields_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  // @@protoc_insertion_point(copy_constructor:org.xresloader.IndexDescriptor)
}

void IndexDescriptor::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_IndexDescriptor_xresloader_2eproto.base);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

IndexDescriptor::~IndexDescriptor() {
  // @@protoc_insertion_point(destructor:org.xresloader.IndexDescriptor)
  SharedDtor();
}

void IndexDescriptor::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void IndexDescriptor::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const IndexDescriptor& IndexDescriptor::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_IndexDescriptor_xresloader_2eproto.base);
  return *internal_default_instance();
}


void IndexDescriptor::Clear() {
// @@protoc_insertion_point(message_clear_start:org.xresloader.IndexDescriptor)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  fields_.Clear();
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* IndexDescriptor::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<IndexDescriptor*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // string name = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("org.xresloader.IndexDescriptor.name");
        object = msg->mutable_name();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      // repeated string fields = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 18) goto handle_unusual;
        do {
          ptr = ::google::protobuf::io::ReadSize(ptr, &size);
          GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
          ctx->extra_parse_data().SetFieldName("org.xresloader.IndexDescriptor.fields");
          object = msg->add_fields();
          if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
            parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
            goto string_till_end;
          }
          GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
          ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
          ptr += size;
          if (ptr >= end) break;
        } while ((::google::protobuf::io::UnalignedLoad<::google::protobuf::uint64>(ptr) & 255) == 18 && (ptr += 1));
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool IndexDescriptor::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:org.xresloader.IndexDescriptor)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "org.xresloader.IndexDescriptor.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string fields = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (18 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_fields()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->fields(this->fields_size() - 1).data(),
            static_cast<int>(this->fields(this->fields_size() - 1).length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "org.xresloader.IndexDescriptor.fields"));
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:org.xresloader.IndexDescriptor)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:org.xresloader.IndexDescriptor)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void IndexDescriptor::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:org.xresloader.IndexDescriptor)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "org.xresloader.IndexDescriptor.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // repeated string fields = 2;
  for (int i = 0, n = this->fields_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->fields(i).data(), static_cast<int>(this->fields(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "org.xresloader.IndexDescriptor.fields");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->fields(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:org.xresloader.IndexDescriptor)
}

::google::protobuf::uint8* IndexDescriptor::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:org.xresloader.IndexDescriptor)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "org.xresloader.IndexDescriptor.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // repeated string fields = 2;
  for (int i = 0, n = this->fields_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->fields(i).data(), static_cast<int>(this->fields(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "org.xresloader.IndexDescriptor.fields");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(2, this->fields(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:org.xresloader.IndexDescriptor)
  return target;
}

size_t IndexDescriptor::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:org.xresloader.IndexDescriptor)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string fields = 2;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->fields_size());
  for (int i = 0, n = this->fields_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->fields(i));
  }

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void IndexDescriptor::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:org.xresloader.IndexDescriptor)
  GOOGLE_DCHECK_NE(&from, this);
  const IndexDescriptor* source =
      ::google::protobuf::DynamicCastToGenerated<IndexDescriptor>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:org.xresloader.IndexDescriptor)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:org.xresloader.IndexDescriptor)
    MergeFrom(*source);
  }
}

void IndexDescriptor::MergeFrom(const IndexDescriptor& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:org.xresloader.IndexDescriptor)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  fields_.MergeFrom(from.fields_);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
}

void IndexDescriptor::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:org.xresloader.IndexDescriptor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void IndexDescriptor::CopyFrom(const IndexDescriptor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:org.xresloader.IndexDescriptor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool IndexDescriptor::IsInitialized() const {
  return true;
}

void IndexDescriptor::Swap(IndexDescriptor* other) {
  if (other == this) return;
  InternalSwap(other);
}
void IndexDescriptor::InternalSwap(IndexDescriptor* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  fields_.InternalSwap(CastToBase(&other->fields_));
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::google::protobuf::Metadata IndexDescriptor::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_xresloader_2eproto);
  return ::file_level_metadata_xresloader_2eproto[kIndexInFileMessages];
}

const ::std::string file_description_default("");
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  file_description(kFileDescriptionFieldNumber, file_description_default);
const ::std::string msg_description_default("");
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  msg_description(kMsgDescriptionFieldNumber, msg_description_default);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::RepeatedMessageTypeTraits< ::org::xresloader::IndexDescriptor >, 11, false >
  kv_index(kKvIndexFieldNumber, *::org::xresloader::IndexDescriptor::internal_default_instance());
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::RepeatedMessageTypeTraits< ::org::xresloader::IndexDescriptor >, 11, false >
  kl_index(kKlIndexFieldNumber, *::org::xresloader::IndexDescriptor::internal_default_instance());
const ::std::string verifier_default("");
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  verifier(kVerifierFieldNumber, verifier_default);
const ::std::string field_description_default("");
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  field_description(kFieldDescriptionFieldNumber, field_description_default);
const ::std::string oneof_description_default("");
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::OneofOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  oneof_description(kOneofDescriptionFieldNumber, oneof_description_default);
const ::std::string enum_description_default("");
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::EnumOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  enum_description(kEnumDescriptionFieldNumber, enum_description_default);
const ::std::string enumv_description_default("");
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::EnumValueOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  enumv_description(kEnumvDescriptionFieldNumber, enumv_description_default);

// @@protoc_insertion_point(namespace_scope)
}  // namespace xresloader
}  // namespace org
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::org::xresloader::IndexDescriptor* Arena::CreateMaybeMessage< ::org::xresloader::IndexDescriptor >(Arena* arena) {
  return Arena::CreateInternal< ::org::xresloader::IndexDescriptor >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
