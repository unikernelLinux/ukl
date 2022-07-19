#include "src/objects/js-objects-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=6&c=1
bool IsJSReceiver_NonInline(HeapObject o) {
  return o.IsJSReceiver();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSReceiver<JSReceiver, HeapObject>::JSReceiverVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSReceiverVerify(JSReceiver::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=14&c=1
bool IsJSObject_NonInline(HeapObject o) {
  return o.IsJSObject();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSObject<JSObject, JSReceiver>::JSObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSObjectVerify(JSObject::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=46&c=1
bool IsJSObjectWithEmbedderSlots_NonInline(HeapObject o) {
  return o.IsJSObjectWithEmbedderSlots();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSObjectWithEmbedderSlots<JSObjectWithEmbedderSlots, JSObject>::JSObjectWithEmbedderSlotsVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSObjectWithEmbedderSlotsVerify(JSObjectWithEmbedderSlots::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=50&c=1
bool IsJSCustomElementsObject_NonInline(HeapObject o) {
  return o.IsJSCustomElementsObject();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSCustomElementsObject<JSCustomElementsObject, JSObject>::JSCustomElementsObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSCustomElementsObjectVerify(JSCustomElementsObject::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=57&c=1
bool IsJSSpecialObject_NonInline(HeapObject o) {
  return o.IsJSSpecialObject();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSSpecialObject<JSSpecialObject, JSCustomElementsObject>::JSSpecialObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSSpecialObjectVerify(JSSpecialObject::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=43&c=1
bool IsJSExternalObject_NonInline(HeapObject o) {
  return o.IsJSExternalObject();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSExternalObject<JSExternalObject, JSObject>::JSExternalObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSExternalObjectVerify(JSExternalObject::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=103&c=1
bool IsJSGlobalProxy_NonInline(HeapObject o) {
  return o.IsJSGlobalProxy();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSGlobalProxy<JSGlobalProxy, JSSpecialObject>::JSGlobalProxyVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSGlobalProxyVerify(JSGlobalProxy::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=109&c=1
bool IsJSGlobalObject_NonInline(HeapObject o) {
  return o.IsJSGlobalObject();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSGlobalObject<JSGlobalObject, JSSpecialObject>::JSGlobalObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSGlobalObjectVerify(JSGlobalObject::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=117&c=1
bool IsJSPrimitiveWrapper_NonInline(HeapObject o) {
  return o.IsJSPrimitiveWrapper();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSPrimitiveWrapper<JSPrimitiveWrapper, JSCustomElementsObject>::JSPrimitiveWrapperVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSPrimitiveWrapperVerify(JSPrimitiveWrapper::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=119&c=1
bool IsJSMessageObject_NonInline(HeapObject o) {
  return o.IsJSMessageObject();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSMessageObject<JSMessageObject, JSObject>::JSMessageObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSMessageObjectVerify(JSMessageObject::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=138&c=1
bool IsJSDate_NonInline(HeapObject o) {
  return o.IsJSDate();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSDate<JSDate, JSObject>::JSDateVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSDateVerify(JSDate::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=158&c=1
bool IsJSAsyncFromSyncIterator_NonInline(HeapObject o) {
  return o.IsJSAsyncFromSyncIterator();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSAsyncFromSyncIterator<JSAsyncFromSyncIterator, JSObject>::JSAsyncFromSyncIteratorVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSAsyncFromSyncIteratorVerify(JSAsyncFromSyncIterator::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=165&c=1
bool IsJSStringIterator_NonInline(HeapObject o) {
  return o.IsJSStringIterator();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSStringIterator<JSStringIterator, JSObject>::JSStringIteratorVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSStringIteratorVerify(JSStringIterator::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
