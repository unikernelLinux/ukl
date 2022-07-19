#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_EVERY_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_EVERY_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-every.tq?l=86&c=1
TNode<Object> FastArrayEvery_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, compiler::CodeAssemblerLabel* label_Bailout, compiler::TypedCodeAssemblerVariable<Smi>* label_Bailout_parameter_0);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-every.tq?l=17&c=22
TNode<JSReceiver> Cast_JSReceiver_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-every.tq?l=18&c=22
TNode<JSReceiver> Cast_Callable_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_EVERY_TQ_CSA_H_
