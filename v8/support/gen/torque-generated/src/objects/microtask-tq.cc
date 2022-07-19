#include "src/objects/microtask-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=5&c=1
bool IsMicrotask_NonInline(HeapObject o) {
  return o.IsMicrotask();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedMicrotask<Microtask, Struct>::MicrotaskVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::MicrotaskVerify(Microtask::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=9&c=1
bool IsCallbackTask_NonInline(HeapObject o) {
  return o.IsCallbackTask();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedCallbackTask<CallbackTask, Microtask>::CallbackTaskVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::CallbackTaskVerify(CallbackTask::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=14&c=1
bool IsCallableTask_NonInline(HeapObject o) {
  return o.IsCallableTask();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedCallableTask<CallableTask, Microtask>::CallableTaskVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::CallableTaskVerify(CallableTask::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
