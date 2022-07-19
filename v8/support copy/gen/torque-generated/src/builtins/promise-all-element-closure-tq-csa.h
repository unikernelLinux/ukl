#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_PROMISE_ALL_ELEMENT_CLOSURE_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_PROMISE_ALL_ELEMENT_CLOSURE_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all-element-closure.tq?l=66&c=1
TNode<IntPtrT> FromConstexpr_PromiseAllResolveElementContextSlots_constexpr_kPromiseAllResolveElementRemainingSlot_0(compiler::CodeAssemblerState* state_, PromiseBuiltins::PromiseAllResolveElementContextSlots p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all-element-closure.tq?l=66&c=1
TNode<IntPtrT> FromConstexpr_PromiseAllResolveElementContextSlots_constexpr_kPromiseAllResolveElementCapabilitySlot_0(compiler::CodeAssemblerState* state_, PromiseBuiltins::PromiseAllResolveElementContextSlots p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all-element-closure.tq?l=66&c=1
TNode<IntPtrT> FromConstexpr_PromiseAllResolveElementContextSlots_constexpr_kPromiseAllResolveElementValuesSlot_0(compiler::CodeAssemblerState* state_, PromiseBuiltins::PromiseAllResolveElementContextSlots p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all-element-closure.tq?l=66&c=1
TNode<IntPtrT> FromConstexpr_PromiseAllResolveElementContextSlots_constexpr_kPromiseAllResolveElementLength_0(compiler::CodeAssemblerState* state_, PromiseBuiltins::PromiseAllResolveElementContextSlots p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all-element-closure.tq?l=66&c=1
TNode<IntPtrT> kPromiseAllResolveElementRemainingSlot_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all-element-closure.tq?l=66&c=1
TNode<IntPtrT> kPromiseAllResolveElementCapabilitySlot_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all-element-closure.tq?l=66&c=1
TNode<IntPtrT> kPromiseAllResolveElementValuesSlot_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all-element-closure.tq?l=189&c=10
TNode<Object> PromiseAllResolveElementClosure_PromiseAllWrapResultAsFulfilledFunctor_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_value, TNode<JSFunction> p_function, TorqueStructPromiseAllWrapResultAsFulfilledFunctor_0 p_wrapResultFunctor, bool p_hasResolveAndRejectClosures);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all-element-closure.tq?l=199&c=10
TNode<Object> PromiseAllResolveElementClosure_PromiseAllSettledWrapResultAsFulfilledFunctor_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_value, TNode<JSFunction> p_function, TorqueStructPromiseAllSettledWrapResultAsFulfilledFunctor_0 p_wrapResultFunctor, bool p_hasResolveAndRejectClosures);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all-element-closure.tq?l=209&c=10
TNode<Object> PromiseAllResolveElementClosure_PromiseAllSettledWrapResultAsRejectedFunctor_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_value, TNode<JSFunction> p_function, TorqueStructPromiseAllSettledWrapResultAsRejectedFunctor_0 p_wrapResultFunctor, bool p_hasResolveAndRejectClosures);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all-element-closure.tq?l=120&c=33
TorqueStructReference_Smi_0 ContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_Smi_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all-element-closure.tq?l=125&c=17
TorqueStructReference_FixedArray_0 ContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_FixedArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all-element-closure.tq?l=169&c=25
TorqueStructReference_PromiseCapability_0 ContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_PromiseCapability_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_PROMISE_ALL_ELEMENT_CLOSURE_TQ_CSA_H_
