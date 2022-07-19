#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_IC_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_IC_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic.tq?l=9&c=1
void CollectCallFeedback_1(compiler::CodeAssemblerState* state_, TNode<Object> p_maybeTarget, std::function<TNode<Object>()> p_maybeReceiver, TNode<Context> p_context, TNode<HeapObject> p_maybeFeedbackVector, TNode<UintPtrT> p_slotId);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic.tq?l=17&c=1
void CollectInstanceOfFeedback_1(compiler::CodeAssemblerState* state_, TNode<Object> p_maybeTarget, TNode<Context> p_context, TNode<HeapObject> p_maybeFeedbackVector, TNode<UintPtrT> p_slotId);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic.tq?l=25&c=1
void CollectConstructFeedback_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_target, TNode<Object> p_newTarget, TNode<HeapObject> p_maybeFeedbackVector, TNode<UintPtrT> p_slotId, UpdateFeedbackMode p_updateFeedbackMode, compiler::CodeAssemblerLabel* label_ConstructGeneric, compiler::CodeAssemblerLabel* label_ConstructArray, compiler::TypedCodeAssemblerVariable<AllocationSite>* label_ConstructArray_parameter_0);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic.tq?l=42&c=1
TNode<Symbol> kMegamorphicSymbol_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic.tq?l=43&c=1
TNode<Symbol> kUninitializedSymbol_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic.tq?l=45&c=1
TNode<BoolT> IsMegamorphic_0(compiler::CodeAssemblerState* state_, TNode<MaybeObject> p_feedback);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic.tq?l=49&c=1
TNode<BoolT> IsUninitialized_0(compiler::CodeAssemblerState* state_, TNode<MaybeObject> p_feedback);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_IC_TQ_CSA_H_
