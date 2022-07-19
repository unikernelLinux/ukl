#include "src/objects/debug-objects-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=5&c=1
bool IsBreakPoint_NonInline(HeapObject o) {
  return o.IsBreakPoint();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedBreakPoint<BreakPoint, Struct>::BreakPointVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::BreakPointVerify(BreakPoint::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=10&c=1
bool IsBreakPointInfo_NonInline(HeapObject o) {
  return o.IsBreakPointInfo();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedBreakPointInfo<BreakPointInfo, Struct>::BreakPointInfoVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::BreakPointInfoVerify(BreakPointInfo::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=33&c=1
bool IsDebugInfo_NonInline(HeapObject o) {
  return o.IsDebugInfo();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedDebugInfo<DebugInfo, Struct>::DebugInfoVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::DebugInfoVerify(DebugInfo::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=66&c=1
bool IsCoverageInfo_NonInline(HeapObject o) {
  return o.IsCoverageInfo();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedCoverageInfo<CoverageInfo, HeapObject>::CoverageInfoVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::CoverageInfoVerify(CoverageInfo::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=76&c=1
bool IsStackFrameInfo_NonInline(HeapObject o) {
  return o.IsStackFrameInfo();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedStackFrameInfo<StackFrameInfo, Struct>::StackFrameInfoVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::StackFrameInfoVerify(StackFrameInfo::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=117&c=1
bool IsErrorStackData_NonInline(HeapObject o) {
  return o.IsErrorStackData();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedErrorStackData<ErrorStackData, Struct>::ErrorStackDataVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::ErrorStackDataVerify(ErrorStackData::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=131&c=1
bool IsPromiseOnStack_NonInline(HeapObject o) {
  return o.IsPromiseOnStack();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedPromiseOnStack<PromiseOnStack, Struct>::PromiseOnStackVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::PromiseOnStackVerify(PromiseOnStack::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
