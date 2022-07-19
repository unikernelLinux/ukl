#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_PROMISE_MISC_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_PROMISE_MISC_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=37&c=1
TNode<BoolT> PromiseHasHandler_0(compiler::CodeAssemblerState* state_, TNode<JSPromise> p_promise);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=42&c=1
void PromiseInit_0(compiler::CodeAssemblerState* state_, TNode<JSPromise> p_promise);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=55&c=1
TNode<JSPromise> InnerNewJSPromise_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=75&c=1
TNode<PromiseFulfillReactionJobTask> NewPromiseFulfillReactionJobTask_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Context> p_handlerContext, TNode<Object> p_argument, TNode<HeapObject> p_handler, TNode<HeapObject> p_promiseOrCapability);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=92&c=1
TNode<PromiseRejectReactionJobTask> NewPromiseRejectReactionJobTask_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Context> p_handlerContext, TNode<Object> p_argument, TNode<HeapObject> p_handler, TNode<HeapObject> p_promiseOrCapability);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=109&c=1
void RunContextPromiseHookInit_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSPromise> p_promise, TNode<Object> p_parent);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=125&c=1
void RunContextPromiseHookResolve_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSPromise> p_promise);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=137&c=1
void RunContextPromiseHookResolve_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSPromise> p_promise, TNode<Uint32T> p_flags);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=144&c=1
void RunContextPromiseHookBefore_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_promiseOrCapability);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=156&c=1
void RunContextPromiseHookBefore_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_promiseOrCapability, TNode<Uint32T> p_flags);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=165&c=1
void RunContextPromiseHookAfter_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_promiseOrCapability);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=177&c=1
void RunContextPromiseHookAfter_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_promiseOrCapability, TNode<Uint32T> p_flags);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=186&c=1
void RunContextPromiseHook_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_slot, TNode<HeapObject> p_promiseOrCapability, TNode<Uint32T> p_flags);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=220&c=1
void RunAnyPromiseHookInit_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSPromise> p_promise, TNode<Object> p_parent);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=240&c=1
TNode<JSPromise> NewJSPromise_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_parent);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=251&c=1
TNode<JSPromise> NewJSPromise_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=258&c=1
TNode<JSPromise> NewJSPromise_2(compiler::CodeAssemblerState* state_, TNode<Context> p_context, Promise::PromiseState p_status, TNode<Object> p_result);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=271&c=1
TNode<PromiseReaction> NewPromiseReaction_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Context> p_handlerContext, TNode<Object> p_next, TNode<HeapObject> p_promiseOrCapability, TNode<HeapObject> p_fulfillHandler, TNode<HeapObject> p_rejectHandler);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=292&c=1
TNode<PromiseResolveThenableJobTask> NewPromiseResolveThenableJobTask_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSPromise> p_promiseToResolve, TNode<JSReceiver> p_thenable, TNode<JSReceiver> p_then);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=358&c=1
TNode<Object> InvokeThen_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<NativeContext> p_nativeContext, TNode<Object> p_receiver, TNode<Object> p_arg);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=365&c=1
TNode<Object> InvokeThen_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<NativeContext> p_nativeContext, TNode<Object> p_receiver, TNode<Object> p_arg1, TNode<Object> p_arg2);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=373&c=1
void BranchIfAccessCheckFailed_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<NativeContext> p_nativeContext, TNode<Object> p_promiseConstructor, TNode<Object> p_executor, compiler::CodeAssemblerLabel* label_IfNoAccess);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=45&c=19
TNode<Smi> SmiTag_JSPromiseFlags_0(compiler::CodeAssemblerState* state_, TNode<Uint32T> p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=87&c=10
TorqueStructReference_HeapObject_0 ContextSlot_NativeContext_NativeContext_HeapObject_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=112&c=22
TorqueStructReference_Undefined_OR_CallableApiObject_OR_CallableJSProxy_OR_JSWrappedFunction_OR_JSBoundFunction_OR_JSFunction_0 NativeContextSlot_Context_Undefined_OR_CallableApiObject_OR_CallableJSProxy_OR_JSWrappedFunction_OR_JSBoundFunction_OR_JSFunction_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=115&c=24
TNode<BoolT> Is_JSPromise_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=115&c=48
TNode<JSPromise> Cast_JSPromise_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=361&c=10
TNode<Object> InvokeThen_InvokeThenOneArgFunctor_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<NativeContext> p_nativeContext, TNode<Object> p_receiver, TNode<Object> p_arg1, TNode<Object> p_arg2, TorqueStructInvokeThenOneArgFunctor_0 p_callFunctor);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=369&c=10
TNode<Object> InvokeThen_InvokeThenTwoArgFunctor_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<NativeContext> p_nativeContext, TNode<Object> p_receiver, TNode<Object> p_arg1, TNode<Object> p_arg2, TorqueStructInvokeThenTwoArgFunctor_0 p_callFunctor);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=345&c=8
TNode<BoolT> Is_Smi_JSAny_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_PROMISE_MISC_TQ_CSA_H_
