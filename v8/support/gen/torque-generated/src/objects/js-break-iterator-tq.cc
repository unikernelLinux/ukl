#include "src/objects/js-break-iterator-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=7&c=1
bool IsJSV8BreakIterator_NonInline(HeapObject o) {
  return o.IsJSV8BreakIterator();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSV8BreakIterator<JSV8BreakIterator, JSObject>::JSV8BreakIteratorVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSV8BreakIteratorVerify(JSV8BreakIterator::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
