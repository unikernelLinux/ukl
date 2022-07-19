#include "src/objects/js-generator-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=5&c=1
bool IsJSGeneratorObject_NonInline(HeapObject o) {
  return o.IsJSGeneratorObject();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSGeneratorObject<JSGeneratorObject, JSObject>::JSGeneratorObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSGeneratorObjectVerify(JSGeneratorObject::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=28&c=1
bool IsJSAsyncFunctionObject_NonInline(HeapObject o) {
  return o.IsJSAsyncFunctionObject();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSAsyncFunctionObject<JSAsyncFunctionObject, JSGeneratorObject>::JSAsyncFunctionObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSAsyncFunctionObjectVerify(JSAsyncFunctionObject::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=32&c=1
bool IsJSAsyncGeneratorObject_NonInline(HeapObject o) {
  return o.IsJSAsyncGeneratorObject();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSAsyncGeneratorObject<JSAsyncGeneratorObject, JSGeneratorObject>::JSAsyncGeneratorObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSAsyncGeneratorObjectVerify(JSAsyncGeneratorObject::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=40&c=1
bool IsAsyncGeneratorRequest_NonInline(HeapObject o) {
  return o.IsAsyncGeneratorRequest();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedAsyncGeneratorRequest<AsyncGeneratorRequest, Struct>::AsyncGeneratorRequestVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::AsyncGeneratorRequestVerify(AsyncGeneratorRequest::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
