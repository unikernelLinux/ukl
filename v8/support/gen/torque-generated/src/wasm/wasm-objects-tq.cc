#include "src/wasm/wasm-objects-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=31&c=1
bool IsWasmInternalFunction_NonInline(HeapObject o) {
  return o.IsWasmInternalFunction();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmInternalFunction<WasmInternalFunction, Foreign>::WasmInternalFunctionVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmInternalFunctionVerify(WasmInternalFunction::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=20&c=1
bool IsWasmApiFunctionRef_NonInline(HeapObject o) {
  return o.IsWasmApiFunctionRef();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmApiFunctionRef<WasmApiFunctionRef, HeapObject>::WasmApiFunctionRefVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmApiFunctionRefVerify(WasmApiFunctionRef::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=46&c=1
bool IsWasmFunctionData_NonInline(HeapObject o) {
  return o.IsWasmFunctionData();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmFunctionData<WasmFunctionData, HeapObject>::WasmFunctionDataVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmFunctionDataVerify(WasmFunctionData::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=54&c=1
bool IsWasmExportedFunctionData_NonInline(HeapObject o) {
  return o.IsWasmExportedFunctionData();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmExportedFunctionData<WasmExportedFunctionData, WasmFunctionData>::WasmExportedFunctionDataVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmExportedFunctionDataVerify(WasmExportedFunctionData::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=72&c=1
bool IsWasmJSFunctionData_NonInline(HeapObject o) {
  return o.IsWasmJSFunctionData();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmJSFunctionData<WasmJSFunctionData, WasmFunctionData>::WasmJSFunctionDataVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmJSFunctionDataVerify(WasmJSFunctionData::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=78&c=1
bool IsWasmCapiFunctionData_NonInline(HeapObject o) {
  return o.IsWasmCapiFunctionData();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmCapiFunctionData<WasmCapiFunctionData, WasmFunctionData>::WasmCapiFunctionDataVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmCapiFunctionDataVerify(WasmCapiFunctionData::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=83&c=1
bool IsWasmOnFulfilledData_NonInline(HeapObject o) {
  return o.IsWasmOnFulfilledData();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmOnFulfilledData<WasmOnFulfilledData, HeapObject>::WasmOnFulfilledDataVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmOnFulfilledDataVerify(WasmOnFulfilledData::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=87&c=1
bool IsWasmIndirectFunctionTable_NonInline(HeapObject o) {
  return o.IsWasmIndirectFunctionTable();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmIndirectFunctionTable<WasmIndirectFunctionTable, Struct>::WasmIndirectFunctionTableVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmIndirectFunctionTableVerify(WasmIndirectFunctionTable::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=97&c=1
bool IsWasmContinuationObject_NonInline(HeapObject o) {
  return o.IsWasmContinuationObject();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmContinuationObject<WasmContinuationObject, Struct>::WasmContinuationObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmContinuationObjectVerify(WasmContinuationObject::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=103&c=1
bool IsWasmSuspenderObject_NonInline(HeapObject o) {
  return o.IsWasmSuspenderObject();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmSuspenderObject<WasmSuspenderObject, JSObject>::WasmSuspenderObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmSuspenderObjectVerify(WasmSuspenderObject::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=110&c=1
bool IsWasmExceptionTag_NonInline(HeapObject o) {
  return o.IsWasmExceptionTag();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmExceptionTag<WasmExceptionTag, Struct>::WasmExceptionTagVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmExceptionTagVerify(WasmExceptionTag::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=117&c=1
bool IsWasmModuleObject_NonInline(HeapObject o) {
  return o.IsWasmModuleObject();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmModuleObject<WasmModuleObject, JSObject>::WasmModuleObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmModuleObjectVerify(WasmModuleObject::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=123&c=1
bool IsWasmTableObject_NonInline(HeapObject o) {
  return o.IsWasmTableObject();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmTableObject<WasmTableObject, JSObject>::WasmTableObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmTableObjectVerify(WasmTableObject::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=138&c=1
bool IsWasmMemoryObject_NonInline(HeapObject o) {
  return o.IsWasmMemoryObject();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmMemoryObject<WasmMemoryObject, JSObject>::WasmMemoryObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmMemoryObjectVerify(WasmMemoryObject::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=144&c=1
bool IsWasmGlobalObject_NonInline(HeapObject o) {
  return o.IsWasmGlobalObject();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmGlobalObject<WasmGlobalObject, JSObject>::WasmGlobalObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmGlobalObjectVerify(WasmGlobalObject::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=159&c=1
bool IsWasmTagObject_NonInline(HeapObject o) {
  return o.IsWasmTagObject();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmTagObject<WasmTagObject, JSObject>::WasmTagObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmTagObjectVerify(WasmTagObject::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=166&c=1
bool IsAsmWasmData_NonInline(HeapObject o) {
  return o.IsAsmWasmData();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedAsmWasmData<AsmWasmData, Struct>::AsmWasmDataVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::AsmWasmDataVerify(AsmWasmData::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=172&c=1
bool IsWasmTypeInfo_NonInline(HeapObject o) {
  return o.IsWasmTypeInfo();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmTypeInfo<WasmTypeInfo, Foreign>::WasmTypeInfoVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmTypeInfoVerify(WasmTypeInfo::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=189&c=1
bool IsWasmObject_NonInline(HeapObject o) {
  return o.IsWasmObject();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmObject<WasmObject, JSReceiver>::WasmObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmObjectVerify(WasmObject::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=193&c=1
bool IsWasmStruct_NonInline(HeapObject o) {
  return o.IsWasmStruct();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmStruct<WasmStruct, WasmObject>::WasmStructVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmStructVerify(WasmStruct::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=197&c=1
bool IsWasmArray_NonInline(HeapObject o) {
  return o.IsWasmArray();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmArray<WasmArray, WasmObject>::WasmArrayVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmArrayVerify(WasmArray::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
