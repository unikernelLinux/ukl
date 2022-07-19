#include "src/objects/js-function-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=5&c=1
bool IsJSFunctionOrBoundFunctionOrWrappedFunction_NonInline(HeapObject o) {
  return o.IsJSFunctionOrBoundFunctionOrWrappedFunction();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSFunctionOrBoundFunctionOrWrappedFunction<JSFunctionOrBoundFunctionOrWrappedFunction, JSObject>::JSFunctionOrBoundFunctionOrWrappedFunctionVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSFunctionOrBoundFunctionOrWrappedFunctionVerify(JSFunctionOrBoundFunctionOrWrappedFunction::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=21&c=1
bool IsJSWrappedFunction_NonInline(HeapObject o) {
  return o.IsJSWrappedFunction();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSWrappedFunction<JSWrappedFunction, JSFunctionOrBoundFunctionOrWrappedFunction>::JSWrappedFunctionVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSWrappedFunctionVerify(JSWrappedFunction::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=9&c=1
bool IsJSBoundFunction_NonInline(HeapObject o) {
  return o.IsJSBoundFunction();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSBoundFunction<JSBoundFunction, JSFunctionOrBoundFunctionOrWrappedFunction>::JSBoundFunctionVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSBoundFunctionVerify(JSBoundFunction::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=31&c=1
bool IsJSFunction_NonInline(HeapObject o) {
  return o.IsJSFunction();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSFunction<JSFunction, JSFunctionOrBoundFunctionOrWrappedFunction>::JSFunctionVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSFunctionVerify(JSFunction::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
