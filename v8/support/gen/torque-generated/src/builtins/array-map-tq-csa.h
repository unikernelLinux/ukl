#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_MAP_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_MAP_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-map.tq?l=180&c=1
TorqueStructVector_0 NewVector_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Smi> p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-map.tq?l=193&c=1
TNode<JSArray> FastArrayMap_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSArray> p_fastO, TNode<Smi> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, compiler::CodeAssemblerLabel* label_Bailout, compiler::TypedCodeAssemblerVariable<JSArray>* label_Bailout_parameter_0, compiler::TypedCodeAssemblerVariable<Smi>* label_Bailout_parameter_1);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-map.tq?l=137&c=13
TNode<Object> UnsafeCast_HeapNumber_OR_Smi_OR_TheHole_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-map.tq?l=256&c=37
TNode<JSArray> Cast_FastJSArrayForRead_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_MAP_TQ_CSA_H_
