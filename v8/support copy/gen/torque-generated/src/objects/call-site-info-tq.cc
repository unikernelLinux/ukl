#include "src/objects/call-site-info-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=17&c=1
bool IsCallSiteInfo_NonInline(HeapObject o) {
  return o.IsCallSiteInfo();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedCallSiteInfo<CallSiteInfo, Struct>::CallSiteInfoVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::CallSiteInfoVerify(CallSiteInfo::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
