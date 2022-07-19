#ifndef V8_GEN_TORQUE_GENERATED_SRC_DEBUG_DEBUG_WASM_OBJECTS_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_DEBUG_DEBUG_WASM_OBJECTS_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/debug/debug-wasm-objects.tq?l=7&c=1
TNode<WasmValueObject> Cast_WasmValueObject_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/debug/debug-wasm-objects.tq?l=7&c=1
TNode<WasmValueObject> DownCastForTorqueClass_WasmValueObject_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_DEBUG_DEBUG_WASM_OBJECTS_TQ_CSA_H_
