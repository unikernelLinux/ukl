#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_PROMISE_ABSTRACT_OPERATIONS_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_PROMISE_ABSTRACT_OPERATIONS_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=29&c=1
TNode<Symbol> kPromiseForwardingHandlerSymbol_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=32&c=1
TNode<Symbol> kPromiseHandledBySymbol_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=34&c=1
TNode<String> kResolveString_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=49&c=1
TNode<Context> ExtractHandlerContextInternal_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_handler, compiler::CodeAssemblerLabel* label_NotFound);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=72&c=1
TNode<Context> ExtractHandlerContext_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_handler);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=82&c=1
TNode<Context> ExtractHandlerContext_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_primary, TNode<HeapObject> p_secondary);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=94&c=1
void MorphAndEnqueuePromiseReaction_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<PromiseReaction> p_promiseReaction, TNode<Object> p_argument, PromiseReaction::Type p_reactionType);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=151&c=1
void TriggerPromiseReactions_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_reactions, TNode<Object> p_argument, PromiseReaction::Type p_reactionType);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=268&c=1
TNode<IntPtrT> FromConstexpr_PromiseResolvingFunctionContextSlot_constexpr_kPromiseSlot_0(compiler::CodeAssemblerState* state_, PromiseBuiltins::PromiseResolvingFunctionContextSlot p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=268&c=1
TNode<IntPtrT> FromConstexpr_PromiseResolvingFunctionContextSlot_constexpr_kAlreadyResolvedSlot_0(compiler::CodeAssemblerState* state_, PromiseBuiltins::PromiseResolvingFunctionContextSlot p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=268&c=1
TNode<IntPtrT> FromConstexpr_PromiseResolvingFunctionContextSlot_constexpr_kDebugEventSlot_0(compiler::CodeAssemblerState* state_, PromiseBuiltins::PromiseResolvingFunctionContextSlot p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=268&c=1
TNode<IntPtrT> FromConstexpr_PromiseResolvingFunctionContextSlot_constexpr_kPromiseContextLength_0(compiler::CodeAssemblerState* state_, PromiseBuiltins::PromiseResolvingFunctionContextSlot p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=268&c=1
TNode<IntPtrT> kPromiseSlot_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=268&c=1
TNode<IntPtrT> kAlreadyResolvedSlot_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=268&c=1
TNode<IntPtrT> kDebugEventSlot_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=277&c=1
TNode<IntPtrT> FromConstexpr_FunctionContextSlot_constexpr_kCapabilitySlot_0(compiler::CodeAssemblerState* state_, PromiseBuiltins::FunctionContextSlot p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=277&c=1
TNode<IntPtrT> FromConstexpr_FunctionContextSlot_constexpr_kCapabilitiesContextLength_0(compiler::CodeAssemblerState* state_, PromiseBuiltins::FunctionContextSlot p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=277&c=1
TNode<IntPtrT> kCapabilitySlot_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=283&c=1
TNode<Context> CreatePromiseCapabilitiesExecutorContext_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_nativeContext, TNode<PromiseCapability> p_capability);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=296&c=1
TNode<PromiseCapability> CreatePromiseCapability_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_promise, TNode<HeapObject> p_resolve, TNode<HeapObject> p_reject);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=314&c=1
TorqueStructPromiseResolvingFunctions CreatePromiseResolvingFunctions_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSPromise> p_promise, TNode<Oddball> p_debugEvent, TNode<NativeContext> p_nativeContext);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=332&c=1
TNode<PromiseCapability> InnerNewPromiseCapability_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_constructor, TNode<Oddball> p_debugEvent);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=444&c=1
void PerformPromiseThenImpl_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSPromise> p_promise, TNode<HeapObject> p_onFulfilled, TNode<HeapObject> p_onRejected, TNode<HeapObject> p_resultPromiseOrCapability);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=542&c=1
TNode<BoolT> IsPromiseResolveLookupChainIntact_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<NativeContext> p_nativeContext, TNode<JSReceiver> p_constructor);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=551&c=1
TNode<Object> GetPromiseResolve_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<NativeContext> p_nativeContext, TNode<JSReceiver> p_constructor);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=577&c=1
TNode<Object> CallResolve_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_constructor, TNode<Object> p_resolve, TNode<Object> p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=121&c=6
TorqueStructReference_Map_0 UnsafeConstCast_Map_0(compiler::CodeAssemblerState* state_, TorqueStructReference_Map_0 p_r);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=124&c=9
TNode<PromiseFulfillReactionJobTask> UnsafeCast_PromiseFulfillReactionJobTask_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=139&c=9
TNode<PromiseRejectReactionJobTask> UnsafeCast_PromiseRejectReactionJobTask_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=203&c=7
TNode<Object> UnsafeCast_Zero_OR_PromiseReaction_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=291&c=3
void InitContextSlot_PromiseCapabilitiesExecutorContext_PromiseCapabilitiesExecutorContext_PromiseCapability_PromiseCapability_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index, TNode<PromiseCapability> p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=320&c=16
TorqueStructReference_Map_0 NativeContextSlot_Map_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=337&c=8
TorqueStructReference_JSFunction_0 NativeContextSlot_JSFunction_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=359&c=32
TNode<JSReceiver> UnsafeCast_Constructor_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=363&c=10
TNode<BoolT> Is_Callable_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=394&c=8
TorqueStructReference_JSPromise_0 ContextSlot_PromiseResolvingFunctionContext_PromiseResolvingFunctionContext_JSPromise_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=397&c=28
TorqueStructReference_Boolean_0 ContextSlot_PromiseResolvingFunctionContext_PromiseResolvingFunctionContext_Boolean_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=504&c=23
TorqueStructReference_JSFunction_0 NativeContextSlot_NativeContext_JSFunction_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=531&c=8
TorqueStructReference_PromiseCapability_0 ContextSlot_PromiseCapabilitiesExecutorContext_PromiseCapabilitiesExecutorContext_PromiseCapability_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_PROMISE_ABSTRACT_OPERATIONS_TQ_CSA_H_
