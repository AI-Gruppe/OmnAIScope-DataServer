// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: sample.proto
// Protobuf C++ Version: 5.29.1

#include "sample.pb.h"

#include <algorithm>
#include <type_traits>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;

inline constexpr Sample::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : values_{},
        timestamp_{0},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR Sample::Sample(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct SampleDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SampleDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~SampleDefaultTypeInternal() {}
  union {
    Sample _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SampleDefaultTypeInternal _Sample_default_instance_;
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_sample_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_sample_2eproto = nullptr;
const ::uint32_t
    TableStruct_sample_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::Sample, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::Sample, _impl_.timestamp_),
        PROTOBUF_FIELD_OFFSET(::Sample, _impl_.values_),
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::Sample)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::_Sample_default_instance_._instance,
};
const char descriptor_table_protodef_sample_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n\014sample.proto\"+\n\006Sample\022\021\n\ttimestamp\030\001 "
    "\001(\001\022\016\n\006values\030\002 \003(\001b\006proto3"
};
static ::absl::once_flag descriptor_table_sample_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_sample_2eproto = {
    false,
    false,
    67,
    descriptor_table_protodef_sample_2eproto,
    "sample.proto",
    &descriptor_table_sample_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_sample_2eproto::offsets,
    file_level_enum_descriptors_sample_2eproto,
    file_level_service_descriptors_sample_2eproto,
};
// ===================================================================

class Sample::_Internal {
 public:
};

Sample::Sample(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:Sample)
}
inline PROTOBUF_NDEBUG_INLINE Sample::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::Sample& from_msg)
      : values_{visibility, arena, from.values_},
        _cached_size_{0} {}

Sample::Sample(
    ::google::protobuf::Arena* arena,
    const Sample& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  Sample* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  _impl_.timestamp_ = from._impl_.timestamp_;

  // @@protoc_insertion_point(copy_constructor:Sample)
}
inline PROTOBUF_NDEBUG_INLINE Sample::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : values_{visibility, arena},
        _cached_size_{0} {}

inline void Sample::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.timestamp_ = {};
}
Sample::~Sample() {
  // @@protoc_insertion_point(destructor:Sample)
  SharedDtor(*this);
}
inline void Sample::SharedDtor(MessageLite& self) {
  Sample& this_ = static_cast<Sample&>(self);
  this_._internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  ABSL_DCHECK(this_.GetArena() == nullptr);
  this_._impl_.~Impl_();
}

inline void* Sample::PlacementNew_(const void*, void* mem,
                                        ::google::protobuf::Arena* arena) {
  return ::new (mem) Sample(arena);
}
constexpr auto Sample::InternalNewImpl_() {
  constexpr auto arena_bits = ::google::protobuf::internal::EncodePlacementArenaOffsets({
      PROTOBUF_FIELD_OFFSET(Sample, _impl_.values_) +
          decltype(Sample::_impl_.values_)::
              InternalGetArenaOffset(
                  ::google::protobuf::Message::internal_visibility()),
  });
  if (arena_bits.has_value()) {
    return ::google::protobuf::internal::MessageCreator::ZeroInit(
        sizeof(Sample), alignof(Sample), *arena_bits);
  } else {
    return ::google::protobuf::internal::MessageCreator(&Sample::PlacementNew_,
                                 sizeof(Sample),
                                 alignof(Sample));
  }
}
PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::internal::ClassDataFull Sample::_class_data_ = {
    ::google::protobuf::internal::ClassData{
        &_Sample_default_instance_._instance,
        &_table_.header,
        nullptr,  // OnDemandRegisterArenaDtor
        nullptr,  // IsInitialized
        &Sample::MergeImpl,
        ::google::protobuf::Message::GetNewImpl<Sample>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
        &Sample::SharedDtor,
        ::google::protobuf::Message::GetClearImpl<Sample>(), &Sample::ByteSizeLong,
            &Sample::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
        PROTOBUF_FIELD_OFFSET(Sample, _impl_._cached_size_),
        false,
    },
    &Sample::kDescriptorMethods,
    &descriptor_table_sample_2eproto,
    nullptr,  // tracker
};
const ::google::protobuf::internal::ClassData* Sample::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 0, 2> Sample::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    _class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::Sample>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // repeated double values = 2;
    {::_pbi::TcParser::FastF64P1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(Sample, _impl_.values_)}},
    // double timestamp = 1;
    {::_pbi::TcParser::FastF64S1,
     {9, 63, 0, PROTOBUF_FIELD_OFFSET(Sample, _impl_.timestamp_)}},
  }}, {{
    65535, 65535
  }}, {{
    // double timestamp = 1;
    {PROTOBUF_FIELD_OFFSET(Sample, _impl_.timestamp_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kDouble)},
    // repeated double values = 2;
    {PROTOBUF_FIELD_OFFSET(Sample, _impl_.values_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kPackedDouble)},
  }},
  // no aux_entries
  {{
  }},
};

PROTOBUF_NOINLINE void Sample::Clear() {
// @@protoc_insertion_point(message_clear_start:Sample)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.values_.Clear();
  _impl_.timestamp_ = 0;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* Sample::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const Sample& this_ = static_cast<const Sample&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* Sample::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const Sample& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:Sample)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          // double timestamp = 1;
          if (::absl::bit_cast<::uint64_t>(this_._internal_timestamp()) != 0) {
            target = stream->EnsureSpace(target);
            target = ::_pbi::WireFormatLite::WriteDoubleToArray(
                1, this_._internal_timestamp(), target);
          }

          // repeated double values = 2;
          if (this_._internal_values_size() > 0) {
            target = stream->WriteFixedPacked(2, this_._internal_values(), target);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:Sample)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t Sample::ByteSizeLong(const MessageLite& base) {
          const Sample& this_ = static_cast<const Sample&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t Sample::ByteSizeLong() const {
          const Sample& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:Sample)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

          ::_pbi::Prefetch5LinesFrom7Lines(&this_);
           {
            // repeated double values = 2;
            {
              std::size_t data_size = std::size_t{8} *
                  ::_pbi::FromIntSize(this_._internal_values_size());
              std::size_t tag_size = data_size == 0
                  ? 0
                  : 1 + ::_pbi::WireFormatLite::Int32Size(
                                      static_cast<int32_t>(data_size));
              total_size += tag_size + data_size;
            }
          }
           {
            // double timestamp = 1;
            if (::absl::bit_cast<::uint64_t>(this_._internal_timestamp()) != 0) {
              total_size += 9;
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void Sample::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<Sample*>(&to_msg);
  auto& from = static_cast<const Sample&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Sample)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_values()->MergeFrom(from._internal_values());
  if (::absl::bit_cast<::uint64_t>(from._internal_timestamp()) != 0) {
    _this->_impl_.timestamp_ = from._impl_.timestamp_;
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Sample::CopyFrom(const Sample& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Sample)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void Sample::InternalSwap(Sample* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.values_.InternalSwap(&other->_impl_.values_);
        swap(_impl_.timestamp_, other->_impl_.timestamp_);
}

::google::protobuf::Metadata Sample::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ PROTOBUF_UNUSED =
        (::_pbi::AddDescriptors(&descriptor_table_sample_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
