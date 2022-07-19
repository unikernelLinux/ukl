#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_TYPED_ARRAY_REDUCERIGHT_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_TYPED_ARRAY_REDUCERIGHT_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array-reduceright.tq?l=8&c=1
const char* kBuiltinNameReduceRight_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array-reduceright.tq?l=12&c=1
TNode<Object> ReduceRightAllElements_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructAttachedJSTypedArrayAndLength_0 p_attachedArrayAndLength, TNode<JSReceiver> p_callbackfn, TNode<Object> p_initialValue);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_TYPED_ARRAY_REDUCERIGHT_TQ_CSA_H_
