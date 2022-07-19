#include "src/objects/arguments-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=5&c=1
bool IsJSArgumentsObject_NonInline(HeapObject o) {
  return o.IsJSArgumentsObject();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSArgumentsObject<JSArgumentsObject, JSObject>::JSArgumentsObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSArgumentsObjectVerify(JSArgumentsObject::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=77&c=1
bool IsSloppyArgumentsElements_NonInline(HeapObject o) {
  return o.IsSloppyArgumentsElements();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedSloppyArgumentsElements<SloppyArgumentsElements, FixedArrayBase>::SloppyArgumentsElementsVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::SloppyArgumentsElementsVerify(SloppyArgumentsElements::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=91&c=1
bool IsAliasedArgumentsEntry_NonInline(HeapObject o) {
  return o.IsAliasedArgumentsEntry();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedAliasedArgumentsEntry<AliasedArgumentsEntry, Struct>::AliasedArgumentsEntryVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::AliasedArgumentsEntryVerify(AliasedArgumentsEntry::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
