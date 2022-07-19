#include "src/objects/js-number-format-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=7&c=1
bool IsJSNumberFormat_NonInline(HeapObject o) {
  return o.IsJSNumberFormat();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSNumberFormat<JSNumberFormat, JSObject>::JSNumberFormatVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSNumberFormatVerify(JSNumberFormat::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
