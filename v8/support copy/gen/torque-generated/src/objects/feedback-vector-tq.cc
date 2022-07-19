#include "src/objects/feedback-vector-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=18&c=1
bool IsFeedbackVector_NonInline(HeapObject o) {
  return o.IsFeedbackVector();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedFeedbackVector<FeedbackVector, HeapObject>::FeedbackVectorVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::FeedbackVectorVerify(FeedbackVector::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
