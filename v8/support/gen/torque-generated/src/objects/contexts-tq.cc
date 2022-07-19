#include "src/objects/contexts-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=5&c=1
bool IsContext_NonInline(HeapObject o) {
  return o.IsContext();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedContext<Context, HeapObject>::ContextVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::ContextVerify(Context::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
