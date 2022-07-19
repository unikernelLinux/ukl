#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_FROM_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_FROM_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from.tq?l=37&c=10
TNode<BoolT> Is_Callable_JSAny_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from.tq?l=53&c=7
TNode<JSReceiver> Cast_Constructor_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from.tq?l=112&c=29
TNode<JSReceiver> UnsafeCast_Callable_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_FROM_TQ_CSA_H_
