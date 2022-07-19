#include "src/objects/js-weak-refs-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=21&c=1
bool IsWeakCell_NonInline(HeapObject o) {
  return o.IsWeakCell();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWeakCell<WeakCell, HeapObject>::WeakCellVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WeakCellVerify(WeakCell::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=9&c=1
bool IsJSFinalizationRegistry_NonInline(HeapObject o) {
  return o.IsJSFinalizationRegistry();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSFinalizationRegistry<JSFinalizationRegistry, JSObject>::JSFinalizationRegistryVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSFinalizationRegistryVerify(JSFinalizationRegistry::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=42&c=1
bool IsJSWeakRef_NonInline(HeapObject o) {
  return o.IsJSWeakRef();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSWeakRef<JSWeakRef, JSObject>::JSWeakRefVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSWeakRefVerify(JSWeakRef::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
