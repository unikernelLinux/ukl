#include "src/objects/js-array-buffer-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=55&c=1
bool IsJSArrayBufferView_NonInline(HeapObject o) {
  return o.IsJSArrayBufferView();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSArrayBufferView<JSArrayBufferView, JSObjectWithEmbedderSlots>::JSArrayBufferViewVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSArrayBufferViewVerify(JSArrayBufferView::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=90&c=1
bool IsJSTypedArray_NonInline(HeapObject o) {
  return o.IsJSTypedArray();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSTypedArray<JSTypedArray, JSArrayBufferView>::JSTypedArrayVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSTypedArrayVerify(JSTypedArray::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=14&c=1
bool IsJSArrayBuffer_NonInline(HeapObject o) {
  return o.IsJSArrayBuffer();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSArrayBuffer<JSArrayBuffer, JSObjectWithEmbedderSlots>::JSArrayBufferVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSArrayBufferVerify(JSArrayBuffer::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=103&c=1
bool IsJSDataView_NonInline(HeapObject o) {
  return o.IsJSDataView();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSDataView<JSDataView, JSArrayBufferView>::JSDataViewVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSDataViewVerify(JSDataView::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
