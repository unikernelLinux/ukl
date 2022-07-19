#include "src/objects/js-proxy-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=5&c=1
bool IsJSProxy_NonInline(HeapObject o) {
  return o.IsJSProxy();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSProxy<JSProxy, JSReceiver>::JSProxyVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSProxyVerify(JSProxy::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
