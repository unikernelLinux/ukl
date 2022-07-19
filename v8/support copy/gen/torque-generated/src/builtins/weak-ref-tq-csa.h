#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_WEAK_REF_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_WEAK_REF_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/weak-ref.tq?l=29&c=19
TNode<JSWeakRef> UnsafeCast_JSWeakRef_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/weak-ref.tq?l=42&c=19
TNode<JSWeakRef> Cast_JSWeakRef_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_WEAK_REF_TQ_CSA_H_
