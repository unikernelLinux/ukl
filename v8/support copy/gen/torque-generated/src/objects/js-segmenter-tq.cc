#include "src/objects/js-segmenter-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=13&c=1
bool IsJSSegmenter_NonInline(HeapObject o) {
  return o.IsJSSegmenter();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSSegmenter<JSSegmenter, JSObject>::JSSegmenterVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSSegmenterVerify(JSSegmenter::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
