#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_MICROTASK_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_MICROTASK_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=5&c=1
TNode<Microtask> Cast_Microtask_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=9&c=1
TNode<CallbackTask> Cast_CallbackTask_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=14&c=1
TNode<CallableTask> Cast_CallableTask_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=10&c=3
TNode<Foreign> LoadCallbackTaskCallback_0(compiler::CodeAssemblerState* state_, TNode<CallbackTask> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=10&c=3
void StoreCallbackTaskCallback_0(compiler::CodeAssemblerState* state_, TNode<CallbackTask> p_o, TNode<Foreign> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=11&c=3
TNode<Foreign> LoadCallbackTaskData_0(compiler::CodeAssemblerState* state_, TNode<CallbackTask> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=11&c=3
void StoreCallbackTaskData_0(compiler::CodeAssemblerState* state_, TNode<CallbackTask> p_o, TNode<Foreign> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=15&c=3
TNode<JSReceiver> LoadCallableTaskCallable_0(compiler::CodeAssemblerState* state_, TNode<CallableTask> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=15&c=3
void StoreCallableTaskCallable_0(compiler::CodeAssemblerState* state_, TNode<CallableTask> p_o, TNode<JSReceiver> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=16&c=3
TNode<Context> LoadCallableTaskContext_0(compiler::CodeAssemblerState* state_, TNode<CallableTask> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=16&c=3
void StoreCallableTaskContext_0(compiler::CodeAssemblerState* state_, TNode<CallableTask> p_o, TNode<Context> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=5&c=1
TNode<Microtask> DownCastForTorqueClass_Microtask_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=9&c=1
TNode<CallbackTask> DownCastForTorqueClass_CallbackTask_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=14&c=1
TNode<CallableTask> DownCastForTorqueClass_CallableTask_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_MICROTASK_TQ_CSA_H_
