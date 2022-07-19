#include "src/objects/js-collection-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=5&c=1
bool IsJSCollection_NonInline(HeapObject o) {
  return o.IsJSCollection();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSCollection<JSCollection, JSObject>::JSCollectionVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSCollectionVerify(JSCollection::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=10&c=1
bool IsJSSet_NonInline(HeapObject o) {
  return o.IsJSSet();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSSet<JSSet, JSCollection>::JSSetVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSSetVerify(JSSet::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=11&c=1
bool IsJSMap_NonInline(HeapObject o) {
  return o.IsJSMap();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSMap<JSMap, JSCollection>::JSMapVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSMapVerify(JSMap::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=13&c=1
bool IsJSWeakCollection_NonInline(HeapObject o) {
  return o.IsJSWeakCollection();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSWeakCollection<JSWeakCollection, JSObject>::JSWeakCollectionVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSWeakCollectionVerify(JSWeakCollection::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=18&c=1
bool IsJSWeakSet_NonInline(HeapObject o) {
  return o.IsJSWeakSet();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSWeakSet<JSWeakSet, JSWeakCollection>::JSWeakSetVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSWeakSetVerify(JSWeakSet::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=19&c=1
bool IsJSWeakMap_NonInline(HeapObject o) {
  return o.IsJSWeakMap();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSWeakMap<JSWeakMap, JSWeakCollection>::JSWeakMapVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSWeakMapVerify(JSWeakMap::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
