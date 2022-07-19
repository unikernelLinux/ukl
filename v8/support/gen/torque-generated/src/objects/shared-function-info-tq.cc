#include "src/objects/shared-function-info-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=5&c=1
bool IsPreparseData_NonInline(HeapObject o) {
  return o.IsPreparseData();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedPreparseData<PreparseData, HeapObject>::PreparseDataVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::PreparseDataVerify(PreparseData::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=11&c=1
bool IsInterpreterData_NonInline(HeapObject o) {
  return o.IsInterpreterData();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedInterpreterData<InterpreterData, Struct>::InterpreterDataVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::InterpreterDataVerify(InterpreterData::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=50&c=1
bool IsSharedFunctionInfo_NonInline(HeapObject o) {
  return o.IsSharedFunctionInfo();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedSharedFunctionInfo<SharedFunctionInfo, HeapObject>::SharedFunctionInfoVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::SharedFunctionInfoVerify(SharedFunctionInfo::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=112&c=1
bool IsUncompiledData_NonInline(HeapObject o) {
  return o.IsUncompiledData();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedUncompiledData<UncompiledData, HeapObject>::UncompiledDataVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::UncompiledDataVerify(UncompiledData::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=119&c=1
bool IsUncompiledDataWithoutPreparseData_NonInline(HeapObject o) {
  return o.IsUncompiledDataWithoutPreparseData();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedUncompiledDataWithoutPreparseData<UncompiledDataWithoutPreparseData, UncompiledData>::UncompiledDataWithoutPreparseDataVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::UncompiledDataWithoutPreparseDataVerify(UncompiledDataWithoutPreparseData::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=125&c=1
bool IsUncompiledDataWithPreparseData_NonInline(HeapObject o) {
  return o.IsUncompiledDataWithPreparseData();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedUncompiledDataWithPreparseData<UncompiledDataWithPreparseData, UncompiledData>::UncompiledDataWithPreparseDataVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::UncompiledDataWithPreparseDataVerify(UncompiledDataWithPreparseData::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=132&c=1
bool IsUncompiledDataWithoutPreparseDataWithJob_NonInline(HeapObject o) {
  return o.IsUncompiledDataWithoutPreparseDataWithJob();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedUncompiledDataWithoutPreparseDataWithJob<UncompiledDataWithoutPreparseDataWithJob, UncompiledDataWithoutPreparseData>::UncompiledDataWithoutPreparseDataWithJobVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::UncompiledDataWithoutPreparseDataWithJobVerify(UncompiledDataWithoutPreparseDataWithJob::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=141&c=1
bool IsUncompiledDataWithPreparseDataAndJob_NonInline(HeapObject o) {
  return o.IsUncompiledDataWithPreparseDataAndJob();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedUncompiledDataWithPreparseDataAndJob<UncompiledDataWithPreparseDataAndJob, UncompiledDataWithPreparseData>::UncompiledDataWithPreparseDataAndJobVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::UncompiledDataWithPreparseDataAndJobVerify(UncompiledDataWithPreparseDataAndJob::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=150&c=1
bool IsOnHeapBasicBlockProfilerData_NonInline(HeapObject o) {
  return o.IsOnHeapBasicBlockProfilerData();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedOnHeapBasicBlockProfilerData<OnHeapBasicBlockProfilerData, HeapObject>::OnHeapBasicBlockProfilerDataVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::OnHeapBasicBlockProfilerDataVerify(OnHeapBasicBlockProfilerData::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
