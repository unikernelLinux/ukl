#include "src/objects/js-promise-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=13&c=1
bool IsJSPromise_NonInline(HeapObject o) {
  return o.IsJSPromise();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSPromise<JSPromise, JSObjectWithEmbedderSlots>::JSPromiseVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSPromiseVerify(JSPromise::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
