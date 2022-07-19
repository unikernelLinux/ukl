#include "src/objects/primitive-heap-object-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/primitive-heap-object.tq?l=5&c=1
bool IsPrimitiveHeapObject_NonInline(HeapObject o) {
  return o.IsPrimitiveHeapObject();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedPrimitiveHeapObject<PrimitiveHeapObject, HeapObject>::PrimitiveHeapObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::PrimitiveHeapObjectVerify(PrimitiveHeapObject::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
