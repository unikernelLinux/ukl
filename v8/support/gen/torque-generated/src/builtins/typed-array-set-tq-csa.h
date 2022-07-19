#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_TYPED_ARRAY_SET_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_TYPED_ARRAY_SET_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array-set.tq?l=8&c=1
const char* kBuiltinNameSet_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array-set.tq?l=112&c=1
void TypedArrayPrototypeSetArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, TNode<JSTypedArray> p_target, TNode<UintPtrT> p_targetLength, TNode<Object> p_arrayArg, TNode<UintPtrT> p_targetOffset, TNode<BoolT> p_targetOffsetOverflowed, compiler::CodeAssemblerLabel* label_IfOffsetOutOfBounds);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array-set.tq?l=173&c=1
void TypedArrayPrototypeSetTypedArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, TorqueStructAttachedJSTypedArrayAndLength_0 p_attachedTargetAndLength, TorqueStructAttachedJSTypedArrayAndLength_0 p_attachedSourceAndLength, TNode<UintPtrT> p_targetOffset, TNode<BoolT> p_targetOffsetOverflowed, compiler::CodeAssemblerLabel* label_IfOffsetOutOfBounds);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_TYPED_ARRAY_SET_TQ_CSA_H_
