#include "src/objects/heap-number-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/heap-number.tq?l=5&c=1
bool IsHeapNumber_NonInline(HeapObject o) {
  return o.IsHeapNumber();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedHeapNumber<HeapNumber, PrimitiveHeapObject>::HeapNumberVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::HeapNumberVerify(HeapNumber::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
