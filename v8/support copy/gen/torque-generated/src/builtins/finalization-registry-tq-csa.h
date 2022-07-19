#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_FINALIZATION_REGISTRY_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_FINALIZATION_REGISTRY_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/finalization-registry.tq?l=18&c=1
TNode<HeapObject> SplitOffTail_0(compiler::CodeAssemblerState* state_, TNode<WeakCell> p_weakCell);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/finalization-registry.tq?l=32&c=1
TNode<HeapObject> PopClearedCell_0(compiler::CodeAssemblerState* state_, TNode<JSFinalizationRegistry> p_finalizationRegistry);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/finalization-registry.tq?l=57&c=1
void PushCell_0(compiler::CodeAssemblerState* state_, TNode<JSFinalizationRegistry> p_finalizationRegistry, TNode<WeakCell> p_cell);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/finalization-registry.tq?l=70&c=1
void FinalizationRegistryCleanupLoop_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSFinalizationRegistry> p_finalizationRegistry, TNode<JSReceiver> p_callback);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/finalization-registry.tq?l=111&c=32
TNode<JSFinalizationRegistry> UnsafeCast_JSFinalizationRegistry_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/finalization-registry.tq?l=119&c=7
TNode<Smi> SmiTag_FinalizationRegistryFlags_0(compiler::CodeAssemblerState* state_, TNode<Uint32T> p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/finalization-registry.tq?l=133&c=32
TNode<JSFinalizationRegistry> Cast_JSFinalizationRegistry_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_FINALIZATION_REGISTRY_TQ_CSA_H_
