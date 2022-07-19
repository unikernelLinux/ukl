#include "src/objects/js-list-format-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=14&c=1
bool IsJSListFormat_NonInline(HeapObject o) {
  return o.IsJSListFormat();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSListFormat<JSListFormat, JSObject>::JSListFormatVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSListFormatVerify(JSListFormat::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
