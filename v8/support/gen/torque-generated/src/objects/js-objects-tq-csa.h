#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_OBJECTS_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_OBJECTS_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=6&c=1
TNode<JSReceiver> Cast_JSReceiver_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=14&c=1
TNode<JSObject> Cast_JSObject_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=36&c=1
TNode<JSObject> NewJSObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=43&c=1
TNode<JSExternalObject> Cast_JSExternalObject_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=46&c=1
TNode<JSObjectWithEmbedderSlots> Cast_JSObjectWithEmbedderSlots_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=50&c=1
TNode<JSCustomElementsObject> Cast_JSCustomElementsObject_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=57&c=1
TNode<JSSpecialObject> Cast_JSSpecialObject_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=62&c=1
TNode<Map> GetDerivedMap_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSFunction> p_target, TNode<JSReceiver> p_newTarget);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=80&c=1
TNode<Map> GetDerivedRabGsabMap_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSFunction> p_target, TNode<JSReceiver> p_newTarget);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=85&c=1
TNode<JSObject> AllocateFastOrSlowJSObjectFromMap_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Map> p_map);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=103&c=1
TNode<JSGlobalProxy> Cast_JSGlobalProxy_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=109&c=1
TNode<JSGlobalObject> Cast_JSGlobalObject_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=117&c=1
TNode<JSPrimitiveWrapper> Cast_JSPrimitiveWrapper_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=119&c=1
TNode<JSMessageObject> Cast_JSMessageObject_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=138&c=1
TNode<JSDate> Cast_JSDate_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=158&c=1
TNode<JSAsyncFromSyncIterator> Cast_JSAsyncFromSyncIterator_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=165&c=1
TNode<JSStringIterator> Cast_JSStringIterator_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=9&c=3
TNode<Object> LoadJSReceiverPropertiesOrHash_0(compiler::CodeAssemblerState* state_, TNode<JSReceiver> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=9&c=3
void StoreJSReceiverPropertiesOrHash_0(compiler::CodeAssemblerState* state_, TNode<JSReceiver> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=33&c=3
TNode<FixedArrayBase> LoadJSObjectElements_0(compiler::CodeAssemblerState* state_, TNode<JSObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=33&c=3
void StoreJSObjectElements_0(compiler::CodeAssemblerState* state_, TNode<JSObject> p_o, TNode<FixedArrayBase> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=43&c=50
TNode<ExternalPointerT> LoadJSExternalObjectValue_0(compiler::CodeAssemblerState* state_, TNode<JSExternalObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=43&c=50
void StoreJSExternalObjectValue_0(compiler::CodeAssemblerState* state_, TNode<JSExternalObject> p_o, TNode<ExternalPointerT> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=106&c=3
TNode<Object> LoadJSGlobalProxyNativeContext_0(compiler::CodeAssemblerState* state_, TNode<JSGlobalProxy> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=106&c=3
void StoreJSGlobalProxyNativeContext_0(compiler::CodeAssemblerState* state_, TNode<JSGlobalProxy> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=111&c=3
TNode<NativeContext> LoadJSGlobalObjectNativeContext_0(compiler::CodeAssemblerState* state_, TNode<JSGlobalObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=111&c=3
void StoreJSGlobalObjectNativeContext_0(compiler::CodeAssemblerState* state_, TNode<JSGlobalObject> p_o, TNode<NativeContext> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=114&c=3
TNode<JSGlobalProxy> LoadJSGlobalObjectGlobalProxy_0(compiler::CodeAssemblerState* state_, TNode<JSGlobalObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=114&c=3
void StoreJSGlobalObjectGlobalProxy_0(compiler::CodeAssemblerState* state_, TNode<JSGlobalObject> p_o, TNode<JSGlobalProxy> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=117&c=66
TNode<Object> LoadJSPrimitiveWrapperValue_0(compiler::CodeAssemblerState* state_, TNode<JSPrimitiveWrapper> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=117&c=66
void StoreJSPrimitiveWrapperValue_0(compiler::CodeAssemblerState* state_, TNode<JSPrimitiveWrapper> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=121&c=3
TNode<Smi> LoadJSMessageObjectMessageType_0(compiler::CodeAssemblerState* state_, TNode<JSMessageObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=121&c=3
void StoreJSMessageObjectMessageType_0(compiler::CodeAssemblerState* state_, TNode<JSMessageObject> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=123&c=3
TNode<Object> LoadJSMessageObjectArgument_0(compiler::CodeAssemblerState* state_, TNode<JSMessageObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=123&c=3
void StoreJSMessageObjectArgument_0(compiler::CodeAssemblerState* state_, TNode<JSMessageObject> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=125&c=3
TNode<Script> LoadJSMessageObjectScript_0(compiler::CodeAssemblerState* state_, TNode<JSMessageObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=125&c=3
void StoreJSMessageObjectScript_0(compiler::CodeAssemblerState* state_, TNode<JSMessageObject> p_o, TNode<Script> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=127&c=3
TNode<Object> LoadJSMessageObjectStackFrames_0(compiler::CodeAssemblerState* state_, TNode<JSMessageObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=127&c=3
void StoreJSMessageObjectStackFrames_0(compiler::CodeAssemblerState* state_, TNode<JSMessageObject> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=128&c=3
TNode<HeapObject> LoadJSMessageObjectSharedInfo_0(compiler::CodeAssemblerState* state_, TNode<JSMessageObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=128&c=3
void StoreJSMessageObjectSharedInfo_0(compiler::CodeAssemblerState* state_, TNode<JSMessageObject> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=132&c=3
TNode<Smi> LoadJSMessageObjectBytecodeOffset_0(compiler::CodeAssemblerState* state_, TNode<JSMessageObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=132&c=3
void StoreJSMessageObjectBytecodeOffset_0(compiler::CodeAssemblerState* state_, TNode<JSMessageObject> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=133&c=3
TNode<Smi> LoadJSMessageObjectStartPosition_0(compiler::CodeAssemblerState* state_, TNode<JSMessageObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=133&c=3
void StoreJSMessageObjectStartPosition_0(compiler::CodeAssemblerState* state_, TNode<JSMessageObject> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=134&c=3
TNode<Smi> LoadJSMessageObjectEndPosition_0(compiler::CodeAssemblerState* state_, TNode<JSMessageObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=134&c=3
void StoreJSMessageObjectEndPosition_0(compiler::CodeAssemblerState* state_, TNode<JSMessageObject> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=135&c=3
TNode<Smi> LoadJSMessageObjectErrorLevel_0(compiler::CodeAssemblerState* state_, TNode<JSMessageObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=135&c=3
void StoreJSMessageObjectErrorLevel_0(compiler::CodeAssemblerState* state_, TNode<JSMessageObject> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=142&c=3
TNode<Object> LoadJSDateValue_0(compiler::CodeAssemblerState* state_, TNode<JSDate> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=142&c=3
void StoreJSDateValue_0(compiler::CodeAssemblerState* state_, TNode<JSDate> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=145&c=3
TNode<Object> LoadJSDateYear_0(compiler::CodeAssemblerState* state_, TNode<JSDate> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=145&c=3
void StoreJSDateYear_0(compiler::CodeAssemblerState* state_, TNode<JSDate> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=146&c=3
TNode<Object> LoadJSDateMonth_0(compiler::CodeAssemblerState* state_, TNode<JSDate> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=146&c=3
void StoreJSDateMonth_0(compiler::CodeAssemblerState* state_, TNode<JSDate> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=147&c=3
TNode<Object> LoadJSDateDay_0(compiler::CodeAssemblerState* state_, TNode<JSDate> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=147&c=3
void StoreJSDateDay_0(compiler::CodeAssemblerState* state_, TNode<JSDate> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=148&c=3
TNode<Object> LoadJSDateWeekday_0(compiler::CodeAssemblerState* state_, TNode<JSDate> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=148&c=3
void StoreJSDateWeekday_0(compiler::CodeAssemblerState* state_, TNode<JSDate> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=149&c=3
TNode<Object> LoadJSDateHour_0(compiler::CodeAssemblerState* state_, TNode<JSDate> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=149&c=3
void StoreJSDateHour_0(compiler::CodeAssemblerState* state_, TNode<JSDate> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=150&c=3
TNode<Object> LoadJSDateMin_0(compiler::CodeAssemblerState* state_, TNode<JSDate> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=150&c=3
void StoreJSDateMin_0(compiler::CodeAssemblerState* state_, TNode<JSDate> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=151&c=3
TNode<Object> LoadJSDateSec_0(compiler::CodeAssemblerState* state_, TNode<JSDate> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=151&c=3
void StoreJSDateSec_0(compiler::CodeAssemblerState* state_, TNode<JSDate> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=155&c=3
TNode<Object> LoadJSDateCacheStamp_0(compiler::CodeAssemblerState* state_, TNode<JSDate> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=155&c=3
void StoreJSDateCacheStamp_0(compiler::CodeAssemblerState* state_, TNode<JSDate> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=159&c=3
TNode<JSReceiver> LoadJSAsyncFromSyncIteratorSyncIterator_0(compiler::CodeAssemblerState* state_, TNode<JSAsyncFromSyncIterator> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=159&c=3
void StoreJSAsyncFromSyncIteratorSyncIterator_0(compiler::CodeAssemblerState* state_, TNode<JSAsyncFromSyncIterator> p_o, TNode<JSReceiver> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=162&c=3
TNode<Object> LoadJSAsyncFromSyncIteratorNext_0(compiler::CodeAssemblerState* state_, TNode<JSAsyncFromSyncIterator> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=162&c=3
void StoreJSAsyncFromSyncIteratorNext_0(compiler::CodeAssemblerState* state_, TNode<JSAsyncFromSyncIterator> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=167&c=3
TNode<String> LoadJSStringIteratorString_0(compiler::CodeAssemblerState* state_, TNode<JSStringIterator> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=167&c=3
void StoreJSStringIteratorString_0(compiler::CodeAssemblerState* state_, TNode<JSStringIterator> p_o, TNode<String> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=169&c=3
TNode<Smi> LoadJSStringIteratorIndex_0(compiler::CodeAssemblerState* state_, TNode<JSStringIterator> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=169&c=3
void StoreJSStringIteratorIndex_0(compiler::CodeAssemblerState* state_, TNode<JSStringIterator> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=6&c=1
TNode<JSReceiver> DownCastForTorqueClass_JSReceiver_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=14&c=1
TNode<JSObject> DownCastForTorqueClass_JSObject_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=43&c=1
TNode<JSExternalObject> DownCastForTorqueClass_JSExternalObject_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=46&c=1
TNode<JSObjectWithEmbedderSlots> DownCastForTorqueClass_JSObjectWithEmbedderSlots_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=50&c=1
TNode<JSCustomElementsObject> DownCastForTorqueClass_JSCustomElementsObject_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=57&c=1
TNode<JSSpecialObject> DownCastForTorqueClass_JSSpecialObject_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=103&c=1
TNode<JSGlobalProxy> DownCastForTorqueClass_JSGlobalProxy_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=109&c=1
TNode<JSGlobalObject> DownCastForTorqueClass_JSGlobalObject_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=117&c=1
TNode<JSPrimitiveWrapper> DownCastForTorqueClass_JSPrimitiveWrapper_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=119&c=1
TNode<JSMessageObject> DownCastForTorqueClass_JSMessageObject_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=138&c=1
TNode<JSDate> DownCastForTorqueClass_JSDate_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=158&c=1
TNode<JSAsyncFromSyncIterator> DownCastForTorqueClass_JSAsyncFromSyncIterator_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=165&c=1
TNode<JSStringIterator> DownCastForTorqueClass_JSStringIterator_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_OBJECTS_TQ_CSA_H_
