#include "src/objects/string-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=7&c=1
bool IsString_NonInline(HeapObject o) {
  return o.IsString();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedString<String, Name>::StringVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::StringVerify(String::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=38&c=1
bool IsConsString_NonInline(HeapObject o) {
  return o.IsConsString();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedConsString<ConsString, String>::ConsStringVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::ConsStringVerify(ConsString::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=54&c=1
bool IsExternalString_NonInline(HeapObject o) {
  return o.IsExternalString();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedExternalString<ExternalString, String>::ExternalStringVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::ExternalStringVerify(ExternalString::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=76&c=1
bool IsExternalOneByteString_NonInline(HeapObject o) {
  return o.IsExternalOneByteString();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedExternalOneByteString<ExternalOneByteString, ExternalString>::ExternalOneByteStringVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::ExternalOneByteStringVerify(ExternalOneByteString::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=87&c=1
bool IsExternalTwoByteString_NonInline(HeapObject o) {
  return o.IsExternalTwoByteString();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedExternalTwoByteString<ExternalTwoByteString, ExternalString>::ExternalTwoByteStringVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::ExternalTwoByteStringVerify(ExternalTwoByteString::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=98&c=1
bool IsInternalizedString_NonInline(HeapObject o) {
  return o.IsInternalizedString();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedInternalizedString<InternalizedString, String>::InternalizedStringVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::InternalizedStringVerify(InternalizedString::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=102&c=1
bool IsSeqString_NonInline(HeapObject o) {
  return o.IsSeqString();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedSeqString<SeqString, String>::SeqStringVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::SeqStringVerify(SeqString::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=106&c=1
bool IsSeqOneByteString_NonInline(HeapObject o) {
  return o.IsSeqOneByteString();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedSeqOneByteString<SeqOneByteString, SeqString>::SeqOneByteStringVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::SeqOneByteStringVerify(SeqOneByteString::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=111&c=1
bool IsSeqTwoByteString_NonInline(HeapObject o) {
  return o.IsSeqTwoByteString();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedSeqTwoByteString<SeqTwoByteString, SeqString>::SeqTwoByteStringVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::SeqTwoByteStringVerify(SeqTwoByteString::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=117&c=1
bool IsSlicedString_NonInline(HeapObject o) {
  return o.IsSlicedString();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedSlicedString<SlicedString, String>::SlicedStringVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::SlicedStringVerify(SlicedString::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=124&c=1
bool IsThinString_NonInline(HeapObject o) {
  return o.IsThinString();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedThinString<ThinString, String>::ThinStringVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::ThinStringVerify(ThinString::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
