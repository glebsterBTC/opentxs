// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Generics.proto

#pragma once

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>   // IWYU pragma: export
// @@protoc_insertion_point(includes)

namespace protobuf_Generics_2eproto
{
// Internal implementation detail -- do not use these members.
struct TableStruct {
    static const ::google::protobuf::internal::ParseTableField entries[];
    static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
    static const ::google::protobuf::internal::ParseTable schema[4];
    static const ::google::protobuf::internal::FieldMetadata field_metadata[];
    static const ::google::protobuf::internal::SerializationTable
        serialization_table[];
    static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsString_InternalPBImpl();
void InitDefaultsString_InternalPB();
void InitDefaultsKeyValue_InternalPBImpl();
void InitDefaultsKeyValue_InternalPB();
void InitDefaultsStringMap_InternalPBImpl();
void InitDefaultsStringMap_InternalPB();
void InitDefaultsBlob_InternalPBImpl();
void InitDefaultsBlob_InternalPB();
inline void InitDefaults()
{
    InitDefaultsString_InternalPB();
    InitDefaultsKeyValue_InternalPB();
    InitDefaultsStringMap_InternalPB();
    InitDefaultsBlob_InternalPB();
}
}  // namespace protobuf_Generics_2eproto
namespace opentxs
{
namespace OTDB
{
class Blob_InternalPB;
class Blob_InternalPBDefaultTypeInternal;
extern Blob_InternalPBDefaultTypeInternal _Blob_InternalPB_default_instance_;
class KeyValue_InternalPB;
class KeyValue_InternalPBDefaultTypeInternal;
extern KeyValue_InternalPBDefaultTypeInternal
    _KeyValue_InternalPB_default_instance_;
class StringMap_InternalPB;
class StringMap_InternalPBDefaultTypeInternal;
extern StringMap_InternalPBDefaultTypeInternal
    _StringMap_InternalPB_default_instance_;
class String_InternalPB;
class String_InternalPBDefaultTypeInternal;
extern String_InternalPBDefaultTypeInternal
    _String_InternalPB_default_instance_;
}  // namespace OTDB
}  // namespace opentxs
namespace opentxs
{
namespace OTDB
{

// ===================================================================

class String_InternalPB : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.OTDB.String_InternalPB)
                                                                  */
{
public:
    String_InternalPB();
    virtual ~String_InternalPB();

    String_InternalPB(const String_InternalPB& from);

    inline String_InternalPB& operator=(const String_InternalPB& from)
    {
        CopyFrom(from);
        return *this;
    }
#if LANG_CXX11
    String_InternalPB(String_InternalPB&& from) noexcept
        : String_InternalPB()
    {
        *this = ::std::move(from);
    }

    inline String_InternalPB& operator=(String_InternalPB&& from) noexcept
    {
        if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
            if (this != &from) InternalSwap(&from);
        } else {
            CopyFrom(from);
        }
        return *this;
    }
#endif
    inline const ::std::string& unknown_fields() const
    {
        return _internal_metadata_.unknown_fields();
    }
    inline ::std::string* mutable_unknown_fields()
    {
        return _internal_metadata_.mutable_unknown_fields();
    }

    static const String_InternalPB& default_instance();

    static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
    static inline const String_InternalPB* internal_default_instance()
    {
        return reinterpret_cast<const String_InternalPB*>(
            &_String_InternalPB_default_instance_);
    }
    static PROTOBUF_CONSTEXPR int const kIndexInFileMessages = 0;

    void Swap(String_InternalPB* other);
    friend void swap(String_InternalPB& a, String_InternalPB& b) { a.Swap(&b); }

    // implements Message ----------------------------------------------

    inline String_InternalPB* New() const PROTOBUF_FINAL { return New(NULL); }

    String_InternalPB* New(::google::protobuf::Arena* arena) const
        PROTOBUF_FINAL;
    void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
        PROTOBUF_FINAL;
    void CopyFrom(const String_InternalPB& from);
    void MergeFrom(const String_InternalPB& from);
    void Clear() PROTOBUF_FINAL;
    bool IsInitialized() const PROTOBUF_FINAL;

    size_t ByteSizeLong() const PROTOBUF_FINAL;
    bool MergePartialFromCodedStream(
        ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
    void SerializeWithCachedSizes(
        ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
    void DiscardUnknownFields();
    int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }

private:
    void SharedCtor();
    void SharedDtor();
    void SetCachedSize(int size) const;
    void InternalSwap(String_InternalPB* other);

private:
    inline ::google::protobuf::Arena* GetArenaNoVirtual() const { return NULL; }
    inline void* MaybeArenaPtr() const { return NULL; }

public:
    ::std::string GetTypeName() const PROTOBUF_FINAL;

    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------

    // optional string value = 1;
    bool has_value() const;
    void clear_value();
    static const int kValueFieldNumber = 1;
    const ::std::string& value() const;
    void set_value(const ::std::string& value);
#if LANG_CXX11
    void set_value(::std::string&& value);
#endif
    void set_value(const char* value);
    void set_value(const char* value, size_t size);
    ::std::string* mutable_value();
    ::std::string* release_value();
    void set_allocated_value(::std::string* value);

    // @@protoc_insertion_point(class_scope:opentxs.OTDB.String_InternalPB)
private:
    void set_has_value();
    void clear_has_value();

    ::google::protobuf::internal::InternalMetadataWithArenaLite
        _internal_metadata_;
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable int _cached_size_;
    ::google::protobuf::internal::ArenaStringPtr value_;
    friend struct ::protobuf_Generics_2eproto::TableStruct;
    friend void ::protobuf_Generics_2eproto::
        InitDefaultsString_InternalPBImpl();
};
// -------------------------------------------------------------------

class KeyValue_InternalPB : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.OTDB.KeyValue_InternalPB)
                                                                    */
{
public:
    KeyValue_InternalPB();
    virtual ~KeyValue_InternalPB();

    KeyValue_InternalPB(const KeyValue_InternalPB& from);

    inline KeyValue_InternalPB& operator=(const KeyValue_InternalPB& from)
    {
        CopyFrom(from);
        return *this;
    }
#if LANG_CXX11
    KeyValue_InternalPB(KeyValue_InternalPB&& from) noexcept
        : KeyValue_InternalPB()
    {
        *this = ::std::move(from);
    }

    inline KeyValue_InternalPB& operator=(KeyValue_InternalPB&& from) noexcept
    {
        if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
            if (this != &from) InternalSwap(&from);
        } else {
            CopyFrom(from);
        }
        return *this;
    }
#endif
    inline const ::std::string& unknown_fields() const
    {
        return _internal_metadata_.unknown_fields();
    }
    inline ::std::string* mutable_unknown_fields()
    {
        return _internal_metadata_.mutable_unknown_fields();
    }

    static const KeyValue_InternalPB& default_instance();

    static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
    static inline const KeyValue_InternalPB* internal_default_instance()
    {
        return reinterpret_cast<const KeyValue_InternalPB*>(
            &_KeyValue_InternalPB_default_instance_);
    }
    static PROTOBUF_CONSTEXPR int const kIndexInFileMessages = 1;

    void Swap(KeyValue_InternalPB* other);
    friend void swap(KeyValue_InternalPB& a, KeyValue_InternalPB& b)
    {
        a.Swap(&b);
    }

    // implements Message ----------------------------------------------

    inline KeyValue_InternalPB* New() const PROTOBUF_FINAL { return New(NULL); }

    KeyValue_InternalPB* New(::google::protobuf::Arena* arena) const
        PROTOBUF_FINAL;
    void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
        PROTOBUF_FINAL;
    void CopyFrom(const KeyValue_InternalPB& from);
    void MergeFrom(const KeyValue_InternalPB& from);
    void Clear() PROTOBUF_FINAL;
    bool IsInitialized() const PROTOBUF_FINAL;

    size_t ByteSizeLong() const PROTOBUF_FINAL;
    bool MergePartialFromCodedStream(
        ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
    void SerializeWithCachedSizes(
        ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
    void DiscardUnknownFields();
    int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }

private:
    void SharedCtor();
    void SharedDtor();
    void SetCachedSize(int size) const;
    void InternalSwap(KeyValue_InternalPB* other);

private:
    inline ::google::protobuf::Arena* GetArenaNoVirtual() const { return NULL; }
    inline void* MaybeArenaPtr() const { return NULL; }

public:
    ::std::string GetTypeName() const PROTOBUF_FINAL;

    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------

    // optional string key = 1;
    bool has_key() const;
    void clear_key();
    static const int kKeyFieldNumber = 1;
    const ::std::string& key() const;
    void set_key(const ::std::string& value);
#if LANG_CXX11
    void set_key(::std::string&& value);
#endif
    void set_key(const char* value);
    void set_key(const char* value, size_t size);
    ::std::string* mutable_key();
    ::std::string* release_key();
    void set_allocated_key(::std::string* key);

    // optional string value = 2;
    bool has_value() const;
    void clear_value();
    static const int kValueFieldNumber = 2;
    const ::std::string& value() const;
    void set_value(const ::std::string& value);
#if LANG_CXX11
    void set_value(::std::string&& value);
#endif
    void set_value(const char* value);
    void set_value(const char* value, size_t size);
    ::std::string* mutable_value();
    ::std::string* release_value();
    void set_allocated_value(::std::string* value);

    // @@protoc_insertion_point(class_scope:opentxs.OTDB.KeyValue_InternalPB)
private:
    void set_has_key();
    void clear_has_key();
    void set_has_value();
    void clear_has_value();

    ::google::protobuf::internal::InternalMetadataWithArenaLite
        _internal_metadata_;
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable int _cached_size_;
    ::google::protobuf::internal::ArenaStringPtr key_;
    ::google::protobuf::internal::ArenaStringPtr value_;
    friend struct ::protobuf_Generics_2eproto::TableStruct;
    friend void ::protobuf_Generics_2eproto::
        InitDefaultsKeyValue_InternalPBImpl();
};
// -------------------------------------------------------------------

class StringMap_InternalPB : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.OTDB.StringMap_InternalPB)
                                                                     */
{
public:
    StringMap_InternalPB();
    virtual ~StringMap_InternalPB();

    StringMap_InternalPB(const StringMap_InternalPB& from);

    inline StringMap_InternalPB& operator=(const StringMap_InternalPB& from)
    {
        CopyFrom(from);
        return *this;
    }
#if LANG_CXX11
    StringMap_InternalPB(StringMap_InternalPB&& from) noexcept
        : StringMap_InternalPB()
    {
        *this = ::std::move(from);
    }

    inline StringMap_InternalPB& operator=(StringMap_InternalPB&& from) noexcept
    {
        if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
            if (this != &from) InternalSwap(&from);
        } else {
            CopyFrom(from);
        }
        return *this;
    }
#endif
    inline const ::std::string& unknown_fields() const
    {
        return _internal_metadata_.unknown_fields();
    }
    inline ::std::string* mutable_unknown_fields()
    {
        return _internal_metadata_.mutable_unknown_fields();
    }

    static const StringMap_InternalPB& default_instance();

    static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
    static inline const StringMap_InternalPB* internal_default_instance()
    {
        return reinterpret_cast<const StringMap_InternalPB*>(
            &_StringMap_InternalPB_default_instance_);
    }
    static PROTOBUF_CONSTEXPR int const kIndexInFileMessages = 2;

    void Swap(StringMap_InternalPB* other);
    friend void swap(StringMap_InternalPB& a, StringMap_InternalPB& b)
    {
        a.Swap(&b);
    }

    // implements Message ----------------------------------------------

    inline StringMap_InternalPB* New() const PROTOBUF_FINAL
    {
        return New(NULL);
    }

    StringMap_InternalPB* New(::google::protobuf::Arena* arena) const
        PROTOBUF_FINAL;
    void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
        PROTOBUF_FINAL;
    void CopyFrom(const StringMap_InternalPB& from);
    void MergeFrom(const StringMap_InternalPB& from);
    void Clear() PROTOBUF_FINAL;
    bool IsInitialized() const PROTOBUF_FINAL;

    size_t ByteSizeLong() const PROTOBUF_FINAL;
    bool MergePartialFromCodedStream(
        ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
    void SerializeWithCachedSizes(
        ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
    void DiscardUnknownFields();
    int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }

private:
    void SharedCtor();
    void SharedDtor();
    void SetCachedSize(int size) const;
    void InternalSwap(StringMap_InternalPB* other);

private:
    inline ::google::protobuf::Arena* GetArenaNoVirtual() const { return NULL; }
    inline void* MaybeArenaPtr() const { return NULL; }

public:
    ::std::string GetTypeName() const PROTOBUF_FINAL;

    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------

    // repeated .opentxs.OTDB.KeyValue_InternalPB node = 1;
    int node_size() const;
    void clear_node();
    static const int kNodeFieldNumber = 1;
    const ::opentxs::OTDB::KeyValue_InternalPB& node(int index) const;
    ::opentxs::OTDB::KeyValue_InternalPB* mutable_node(int index);
    ::opentxs::OTDB::KeyValue_InternalPB* add_node();
    ::google::protobuf::RepeatedPtrField<::opentxs::OTDB::KeyValue_InternalPB>*
    mutable_node();
    const ::google::protobuf::RepeatedPtrField<
        ::opentxs::OTDB::KeyValue_InternalPB>&
    node() const;

    // @@protoc_insertion_point(class_scope:opentxs.OTDB.StringMap_InternalPB)
private:
    ::google::protobuf::internal::InternalMetadataWithArenaLite
        _internal_metadata_;
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable int _cached_size_;
    ::google::protobuf::RepeatedPtrField<::opentxs::OTDB::KeyValue_InternalPB>
        node_;
    friend struct ::protobuf_Generics_2eproto::TableStruct;
    friend void ::protobuf_Generics_2eproto::
        InitDefaultsStringMap_InternalPBImpl();
};
// -------------------------------------------------------------------

class Blob_InternalPB : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.OTDB.Blob_InternalPB)
                                                                */
{
public:
    Blob_InternalPB();
    virtual ~Blob_InternalPB();

    Blob_InternalPB(const Blob_InternalPB& from);

    inline Blob_InternalPB& operator=(const Blob_InternalPB& from)
    {
        CopyFrom(from);
        return *this;
    }
#if LANG_CXX11
    Blob_InternalPB(Blob_InternalPB&& from) noexcept
        : Blob_InternalPB()
    {
        *this = ::std::move(from);
    }

    inline Blob_InternalPB& operator=(Blob_InternalPB&& from) noexcept
    {
        if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
            if (this != &from) InternalSwap(&from);
        } else {
            CopyFrom(from);
        }
        return *this;
    }
#endif
    inline const ::std::string& unknown_fields() const
    {
        return _internal_metadata_.unknown_fields();
    }
    inline ::std::string* mutable_unknown_fields()
    {
        return _internal_metadata_.mutable_unknown_fields();
    }

    static const Blob_InternalPB& default_instance();

    static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
    static inline const Blob_InternalPB* internal_default_instance()
    {
        return reinterpret_cast<const Blob_InternalPB*>(
            &_Blob_InternalPB_default_instance_);
    }
    static PROTOBUF_CONSTEXPR int const kIndexInFileMessages = 3;

    void Swap(Blob_InternalPB* other);
    friend void swap(Blob_InternalPB& a, Blob_InternalPB& b) { a.Swap(&b); }

    // implements Message ----------------------------------------------

    inline Blob_InternalPB* New() const PROTOBUF_FINAL { return New(NULL); }

    Blob_InternalPB* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
    void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
        PROTOBUF_FINAL;
    void CopyFrom(const Blob_InternalPB& from);
    void MergeFrom(const Blob_InternalPB& from);
    void Clear() PROTOBUF_FINAL;
    bool IsInitialized() const PROTOBUF_FINAL;

    size_t ByteSizeLong() const PROTOBUF_FINAL;
    bool MergePartialFromCodedStream(
        ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
    void SerializeWithCachedSizes(
        ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
    void DiscardUnknownFields();
    int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }

private:
    void SharedCtor();
    void SharedDtor();
    void SetCachedSize(int size) const;
    void InternalSwap(Blob_InternalPB* other);

private:
    inline ::google::protobuf::Arena* GetArenaNoVirtual() const { return NULL; }
    inline void* MaybeArenaPtr() const { return NULL; }

public:
    ::std::string GetTypeName() const PROTOBUF_FINAL;

    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------

    // optional bytes value = 1;
    bool has_value() const;
    void clear_value();
    static const int kValueFieldNumber = 1;
    const ::std::string& value() const;
    void set_value(const ::std::string& value);
#if LANG_CXX11
    void set_value(::std::string&& value);
#endif
    void set_value(const char* value);
    void set_value(const void* value, size_t size);
    ::std::string* mutable_value();
    ::std::string* release_value();
    void set_allocated_value(::std::string* value);

    // @@protoc_insertion_point(class_scope:opentxs.OTDB.Blob_InternalPB)
private:
    void set_has_value();
    void clear_has_value();

    ::google::protobuf::internal::InternalMetadataWithArenaLite
        _internal_metadata_;
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable int _cached_size_;
    ::google::protobuf::internal::ArenaStringPtr value_;
    friend struct ::protobuf_Generics_2eproto::TableStruct;
    friend void ::protobuf_Generics_2eproto::InitDefaultsBlob_InternalPBImpl();
};
// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// String_InternalPB

// optional string value = 1;
inline bool String_InternalPB::has_value() const
{
    return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void String_InternalPB::set_has_value() { _has_bits_[0] |= 0x00000001u; }
inline void String_InternalPB::clear_has_value()
{
    _has_bits_[0] &= ~0x00000001u;
}
inline void String_InternalPB::clear_value()
{
    value_.ClearToEmptyNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
    clear_has_value();
}
inline const ::std::string& String_InternalPB::value() const
{
    // @@protoc_insertion_point(field_get:opentxs.OTDB.String_InternalPB.value)
    return value_.GetNoArena();
}
inline void String_InternalPB::set_value(const ::std::string& value)
{
    set_has_value();
    value_.SetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
    // @@protoc_insertion_point(field_set:opentxs.OTDB.String_InternalPB.value)
}
#if LANG_CXX11
inline void String_InternalPB::set_value(::std::string&& value)
{
    set_has_value();
    value_.SetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
        ::std::move(value));
    // @@protoc_insertion_point(field_set_rvalue:opentxs.OTDB.String_InternalPB.value)
}
#endif
inline void String_InternalPB::set_value(const char* value)
{
    GOOGLE_DCHECK(value != NULL);
    set_has_value();
    value_.SetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
        ::std::string(value));
    // @@protoc_insertion_point(field_set_char:opentxs.OTDB.String_InternalPB.value)
}
inline void String_InternalPB::set_value(const char* value, size_t size)
{
    set_has_value();
    value_.SetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
        ::std::string(reinterpret_cast<const char*>(value), size));
    // @@protoc_insertion_point(field_set_pointer:opentxs.OTDB.String_InternalPB.value)
}
inline ::std::string* String_InternalPB::mutable_value()
{
    set_has_value();
    // @@protoc_insertion_point(field_mutable:opentxs.OTDB.String_InternalPB.value)
    return value_.MutableNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* String_InternalPB::release_value()
{
    // @@protoc_insertion_point(field_release:opentxs.OTDB.String_InternalPB.value)
    clear_has_value();
    return value_.ReleaseNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void String_InternalPB::set_allocated_value(::std::string* value)
{
    if (value != NULL) {
        set_has_value();
    } else {
        clear_has_value();
    }
    value_.SetAllocatedNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
    // @@protoc_insertion_point(field_set_allocated:opentxs.OTDB.String_InternalPB.value)
}

// -------------------------------------------------------------------

// KeyValue_InternalPB

// optional string key = 1;
inline bool KeyValue_InternalPB::has_key() const
{
    return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void KeyValue_InternalPB::set_has_key() { _has_bits_[0] |= 0x00000001u; }
inline void KeyValue_InternalPB::clear_has_key()
{
    _has_bits_[0] &= ~0x00000001u;
}
inline void KeyValue_InternalPB::clear_key()
{
    key_.ClearToEmptyNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
    clear_has_key();
}
inline const ::std::string& KeyValue_InternalPB::key() const
{
    // @@protoc_insertion_point(field_get:opentxs.OTDB.KeyValue_InternalPB.key)
    return key_.GetNoArena();
}
inline void KeyValue_InternalPB::set_key(const ::std::string& value)
{
    set_has_key();
    key_.SetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
    // @@protoc_insertion_point(field_set:opentxs.OTDB.KeyValue_InternalPB.key)
}
#if LANG_CXX11
inline void KeyValue_InternalPB::set_key(::std::string&& value)
{
    set_has_key();
    key_.SetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
        ::std::move(value));
    // @@protoc_insertion_point(field_set_rvalue:opentxs.OTDB.KeyValue_InternalPB.key)
}
#endif
inline void KeyValue_InternalPB::set_key(const char* value)
{
    GOOGLE_DCHECK(value != NULL);
    set_has_key();
    key_.SetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
        ::std::string(value));
    // @@protoc_insertion_point(field_set_char:opentxs.OTDB.KeyValue_InternalPB.key)
}
inline void KeyValue_InternalPB::set_key(const char* value, size_t size)
{
    set_has_key();
    key_.SetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
        ::std::string(reinterpret_cast<const char*>(value), size));
    // @@protoc_insertion_point(field_set_pointer:opentxs.OTDB.KeyValue_InternalPB.key)
}
inline ::std::string* KeyValue_InternalPB::mutable_key()
{
    set_has_key();
    // @@protoc_insertion_point(field_mutable:opentxs.OTDB.KeyValue_InternalPB.key)
    return key_.MutableNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* KeyValue_InternalPB::release_key()
{
    // @@protoc_insertion_point(field_release:opentxs.OTDB.KeyValue_InternalPB.key)
    clear_has_key();
    return key_.ReleaseNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void KeyValue_InternalPB::set_allocated_key(::std::string* key)
{
    if (key != NULL) {
        set_has_key();
    } else {
        clear_has_key();
    }
    key_.SetAllocatedNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
    // @@protoc_insertion_point(field_set_allocated:opentxs.OTDB.KeyValue_InternalPB.key)
}

// optional string value = 2;
inline bool KeyValue_InternalPB::has_value() const
{
    return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void KeyValue_InternalPB::set_has_value()
{
    _has_bits_[0] |= 0x00000002u;
}
inline void KeyValue_InternalPB::clear_has_value()
{
    _has_bits_[0] &= ~0x00000002u;
}
inline void KeyValue_InternalPB::clear_value()
{
    value_.ClearToEmptyNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
    clear_has_value();
}
inline const ::std::string& KeyValue_InternalPB::value() const
{
    // @@protoc_insertion_point(field_get:opentxs.OTDB.KeyValue_InternalPB.value)
    return value_.GetNoArena();
}
inline void KeyValue_InternalPB::set_value(const ::std::string& value)
{
    set_has_value();
    value_.SetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
    // @@protoc_insertion_point(field_set:opentxs.OTDB.KeyValue_InternalPB.value)
}
#if LANG_CXX11
inline void KeyValue_InternalPB::set_value(::std::string&& value)
{
    set_has_value();
    value_.SetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
        ::std::move(value));
    // @@protoc_insertion_point(field_set_rvalue:opentxs.OTDB.KeyValue_InternalPB.value)
}
#endif
inline void KeyValue_InternalPB::set_value(const char* value)
{
    GOOGLE_DCHECK(value != NULL);
    set_has_value();
    value_.SetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
        ::std::string(value));
    // @@protoc_insertion_point(field_set_char:opentxs.OTDB.KeyValue_InternalPB.value)
}
inline void KeyValue_InternalPB::set_value(const char* value, size_t size)
{
    set_has_value();
    value_.SetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
        ::std::string(reinterpret_cast<const char*>(value), size));
    // @@protoc_insertion_point(field_set_pointer:opentxs.OTDB.KeyValue_InternalPB.value)
}
inline ::std::string* KeyValue_InternalPB::mutable_value()
{
    set_has_value();
    // @@protoc_insertion_point(field_mutable:opentxs.OTDB.KeyValue_InternalPB.value)
    return value_.MutableNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* KeyValue_InternalPB::release_value()
{
    // @@protoc_insertion_point(field_release:opentxs.OTDB.KeyValue_InternalPB.value)
    clear_has_value();
    return value_.ReleaseNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void KeyValue_InternalPB::set_allocated_value(::std::string* value)
{
    if (value != NULL) {
        set_has_value();
    } else {
        clear_has_value();
    }
    value_.SetAllocatedNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
    // @@protoc_insertion_point(field_set_allocated:opentxs.OTDB.KeyValue_InternalPB.value)
}

// -------------------------------------------------------------------

// StringMap_InternalPB

// repeated .opentxs.OTDB.KeyValue_InternalPB node = 1;
inline int StringMap_InternalPB::node_size() const { return node_.size(); }
inline void StringMap_InternalPB::clear_node() { node_.Clear(); }
inline const ::opentxs::OTDB::KeyValue_InternalPB& StringMap_InternalPB::node(
    int index) const
{
    // @@protoc_insertion_point(field_get:opentxs.OTDB.StringMap_InternalPB.node)
    return node_.Get(index);
}
inline ::opentxs::OTDB::KeyValue_InternalPB* StringMap_InternalPB::mutable_node(
    int index)
{
    // @@protoc_insertion_point(field_mutable:opentxs.OTDB.StringMap_InternalPB.node)
    return node_.Mutable(index);
}
inline ::opentxs::OTDB::KeyValue_InternalPB* StringMap_InternalPB::add_node()
{
    // @@protoc_insertion_point(field_add:opentxs.OTDB.StringMap_InternalPB.node)
    return node_.Add();
}
inline ::google::protobuf::RepeatedPtrField<
    ::opentxs::OTDB::KeyValue_InternalPB>*
StringMap_InternalPB::mutable_node()
{
    // @@protoc_insertion_point(field_mutable_list:opentxs.OTDB.StringMap_InternalPB.node)
    return &node_;
}
inline const ::google::protobuf::RepeatedPtrField<
    ::opentxs::OTDB::KeyValue_InternalPB>&
StringMap_InternalPB::node() const
{
    // @@protoc_insertion_point(field_list:opentxs.OTDB.StringMap_InternalPB.node)
    return node_;
}

// -------------------------------------------------------------------

// Blob_InternalPB

// optional bytes value = 1;
inline bool Blob_InternalPB::has_value() const
{
    return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Blob_InternalPB::set_has_value() { _has_bits_[0] |= 0x00000001u; }
inline void Blob_InternalPB::clear_has_value()
{
    _has_bits_[0] &= ~0x00000001u;
}
inline void Blob_InternalPB::clear_value()
{
    value_.ClearToEmptyNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
    clear_has_value();
}
inline const ::std::string& Blob_InternalPB::value() const
{
    // @@protoc_insertion_point(field_get:opentxs.OTDB.Blob_InternalPB.value)
    return value_.GetNoArena();
}
inline void Blob_InternalPB::set_value(const ::std::string& value)
{
    set_has_value();
    value_.SetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
    // @@protoc_insertion_point(field_set:opentxs.OTDB.Blob_InternalPB.value)
}
#if LANG_CXX11
inline void Blob_InternalPB::set_value(::std::string&& value)
{
    set_has_value();
    value_.SetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
        ::std::move(value));
    // @@protoc_insertion_point(field_set_rvalue:opentxs.OTDB.Blob_InternalPB.value)
}
#endif
inline void Blob_InternalPB::set_value(const char* value)
{
    GOOGLE_DCHECK(value != NULL);
    set_has_value();
    value_.SetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
        ::std::string(value));
    // @@protoc_insertion_point(field_set_char:opentxs.OTDB.Blob_InternalPB.value)
}
inline void Blob_InternalPB::set_value(const void* value, size_t size)
{
    set_has_value();
    value_.SetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
        ::std::string(reinterpret_cast<const char*>(value), size));
    // @@protoc_insertion_point(field_set_pointer:opentxs.OTDB.Blob_InternalPB.value)
}
inline ::std::string* Blob_InternalPB::mutable_value()
{
    set_has_value();
    // @@protoc_insertion_point(field_mutable:opentxs.OTDB.Blob_InternalPB.value)
    return value_.MutableNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Blob_InternalPB::release_value()
{
    // @@protoc_insertion_point(field_release:opentxs.OTDB.Blob_InternalPB.value)
    clear_has_value();
    return value_.ReleaseNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Blob_InternalPB::set_allocated_value(::std::string* value)
{
    if (value != NULL) {
        set_has_value();
    } else {
        clear_has_value();
    }
    value_.SetAllocatedNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
    // @@protoc_insertion_point(field_set_allocated:opentxs.OTDB.Blob_InternalPB.value)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// @@protoc_insertion_point(namespace_scope)

}  // namespace OTDB
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)
