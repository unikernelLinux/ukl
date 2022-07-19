#include "src/objects/descriptor-array-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=5&c=1
bool IsEnumCache_NonInline(HeapObject o) {
  return o.IsEnumCache();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedEnumCache<EnumCache, Struct>::EnumCacheVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::EnumCacheVerify(EnumCache::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=17&c=1
bool IsDescriptorArray_NonInline(HeapObject o) {
  return o.IsDescriptorArray();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedDescriptorArray<DescriptorArray, HeapObject>::DescriptorArrayVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::DescriptorArrayVerify(DescriptorArray::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
