#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_PROMISE_FINALLY_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_PROMISE_FINALLY_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-finally.tq?l=11&c=1
TNode<IntPtrT> FromConstexpr_PromiseValueThunkOrReasonContextSlot_constexpr_kValueSlot_0(compiler::CodeAssemblerState* state_, PromiseBuiltins::PromiseValueThunkOrReasonContextSlot p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-finally.tq?l=11&c=1
TNode<IntPtrT> FromConstexpr_PromiseValueThunkOrReasonContextSlot_constexpr_kPromiseValueThunkOrReasonContextLength_0(compiler::CodeAssemblerState* state_, PromiseBuiltins::PromiseValueThunkOrReasonContextSlot p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-finally.tq?l=11&c=1
TNode<IntPtrT> kValueSlot_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-finally.tq?l=18&c=1
TNode<IntPtrT> FromConstexpr_PromiseFinallyContextSlot_constexpr_kOnFinallySlot_0(compiler::CodeAssemblerState* state_, PromiseBuiltins::PromiseFinallyContextSlot p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-finally.tq?l=18&c=1
TNode<IntPtrT> FromConstexpr_PromiseFinallyContextSlot_constexpr_kConstructorSlot_0(compiler::CodeAssemblerState* state_, PromiseBuiltins::PromiseFinallyContextSlot p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-finally.tq?l=18&c=1
TNode<IntPtrT> FromConstexpr_PromiseFinallyContextSlot_constexpr_kPromiseFinallyContextLength_0(compiler::CodeAssemblerState* state_, PromiseBuiltins::PromiseFinallyContextSlot p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-finally.tq?l=18&c=1
TNode<IntPtrT> kOnFinallySlot_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-finally.tq?l=18&c=1
TNode<IntPtrT> kConstructorSlot_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-finally.tq?l=41&c=1
TNode<JSFunction> CreateThrowerFunction_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<NativeContext> p_nativeContext, TNode<Object> p_reason);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-finally.tq?l=86&c=1
TNode<JSFunction> CreateValueThunkFunction_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<NativeContext> p_nativeContext, TNode<Object> p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-finally.tq?l=138&c=1
TorqueStructPromiseFinallyFunctions_0 CreatePromiseFinallyFunctions_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<NativeContext> p_nativeContext, TNode<JSReceiver> p_onFinally, TNode<JSReceiver> p_constructor);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-finally.tq?l=29&c=11
TorqueStructReference_JSAny_0 ContextSlot_PromiseValueThunkOrReasonContext_PromiseValueThunkOrReasonContext_JSAny_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-finally.tq?l=48&c=3
void InitContextSlot_PromiseValueThunkOrReasonContext_PromiseValueThunkOrReasonContext_JSAny_JSAny_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index, TNode<Object> p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-finally.tq?l=63&c=8
TorqueStructReference_Callable_0 ContextSlot_PromiseFinallyContext_PromiseFinallyContext_Callable_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-finally.tq?l=70&c=8
TorqueStructReference_Constructor_0 ContextSlot_PromiseFinallyContext_PromiseFinallyContext_Constructor_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-finally.tq?l=145&c=3
void InitContextSlot_PromiseFinallyContext_PromiseFinallyContext_Callable_Callable_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index, TNode<JSReceiver> p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-finally.tq?l=147&c=3
void InitContextSlot_PromiseFinallyContext_PromiseFinallyContext_Constructor_Constructor_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index, TNode<JSReceiver> p_value);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_PROMISE_FINALLY_TQ_CSA_H_
