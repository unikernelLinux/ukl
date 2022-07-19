#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_CALL_SITE_INFO_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_CALL_SITE_INFO_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=17&c=1
TNode<CallSiteInfo> Cast_CallSiteInfo_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=18&c=3
TNode<Object> LoadCallSiteInfoReceiverOrInstance_0(compiler::CodeAssemblerState* state_, TNode<CallSiteInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=18&c=3
void StoreCallSiteInfoReceiverOrInstance_0(compiler::CodeAssemblerState* state_, TNode<CallSiteInfo> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=19&c=3
TNode<Object> LoadCallSiteInfoFunction_0(compiler::CodeAssemblerState* state_, TNode<CallSiteInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=19&c=3
void StoreCallSiteInfoFunction_0(compiler::CodeAssemblerState* state_, TNode<CallSiteInfo> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=20&c=3
TNode<HeapObject> LoadCallSiteInfoCodeObject_0(compiler::CodeAssemblerState* state_, TNode<CallSiteInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=20&c=3
void StoreCallSiteInfoCodeObject_0(compiler::CodeAssemblerState* state_, TNode<CallSiteInfo> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=21&c=3
TNode<Smi> LoadCallSiteInfoCodeOffsetOrSourcePosition_0(compiler::CodeAssemblerState* state_, TNode<CallSiteInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=21&c=3
void StoreCallSiteInfoCodeOffsetOrSourcePosition_0(compiler::CodeAssemblerState* state_, TNode<CallSiteInfo> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=22&c=3
TNode<Smi> LoadCallSiteInfoFlags_0(compiler::CodeAssemblerState* state_, TNode<CallSiteInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=22&c=3
void StoreCallSiteInfoFlags_0(compiler::CodeAssemblerState* state_, TNode<CallSiteInfo> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=23&c=3
TNode<FixedArray> LoadCallSiteInfoParameters_0(compiler::CodeAssemblerState* state_, TNode<CallSiteInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=23&c=3
void StoreCallSiteInfoParameters_0(compiler::CodeAssemblerState* state_, TNode<CallSiteInfo> p_o, TNode<FixedArray> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=17&c=1
TNode<CallSiteInfo> DownCastForTorqueClass_CallSiteInfo_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_CALL_SITE_INFO_TQ_CSA_H_
