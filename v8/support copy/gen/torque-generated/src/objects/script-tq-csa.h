#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_SCRIPT_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_SCRIPT_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=17&c=1
TNode<Script> Cast_Script_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=19&c=3
TNode<PrimitiveHeapObject> LoadScriptSource_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=19&c=3
void StoreScriptSource_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<PrimitiveHeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=22&c=3
TNode<Object> LoadScriptName_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=22&c=3
void StoreScriptName_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=25&c=3
TNode<Smi> LoadScriptLineOffset_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=25&c=3
void StoreScriptLineOffset_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=29&c=3
TNode<Smi> LoadScriptColumnOffset_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=29&c=3
void StoreScriptColumnOffset_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=32&c=3
TNode<Object> LoadScriptContextData_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=32&c=3
void StoreScriptContextData_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=34&c=3
TNode<Smi> LoadScriptScriptType_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=34&c=3
void StoreScriptScriptType_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=37&c=3
TNode<HeapObject> LoadScriptLineEnds_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=37&c=3
void StoreScriptLineEnds_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=40&c=3
TNode<Smi> LoadScriptId_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=40&c=3
void StoreScriptId_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=46&c=3
TNode<HeapObject> LoadScriptEvalFromSharedOrWrappedArgumentsOrSfiTable_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=46&c=3
void StoreScriptEvalFromSharedOrWrappedArgumentsOrSfiTable_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=48&c=3
TNode<Object> LoadScriptEvalFromPosition_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=48&c=3
void StoreScriptEvalFromPosition_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=49&c=3
TNode<HeapObject> LoadScriptSharedFunctionInfos_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=49&c=3
void StoreScriptSharedFunctionInfos_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=52&c=3
TNode<Smi> LoadScriptFlags_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=52&c=3
void StoreScriptFlags_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=55&c=3
TNode<PrimitiveHeapObject> LoadScriptSourceUrl_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=55&c=3
void StoreScriptSourceUrl_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<PrimitiveHeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=58&c=3
TNode<Object> LoadScriptSourceMappingUrl_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=58&c=3
void StoreScriptSourceMappingUrl_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=61&c=3
TNode<FixedArray> LoadScriptHostDefinedOptions_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=61&c=3
void StoreScriptHostDefinedOptions_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<FixedArray> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=17&c=1
TNode<Script> DownCastForTorqueClass_Script_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_SCRIPT_TQ_CSA_H_
