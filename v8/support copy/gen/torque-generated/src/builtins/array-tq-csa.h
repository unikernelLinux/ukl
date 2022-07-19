#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array.tq?l=19&c=1
void EnsureWriteableFastElements_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSArray> p_array);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array.tq?l=36&c=1
TNode<Object> LoadElementOrUndefined_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArray> p_a, TNode<Smi> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array.tq?l=42&c=1
TNode<Object> LoadElementOrUndefined_1(compiler::CodeAssemblerState* state_, TNode<FixedDoubleArray> p_a, TNode<Smi> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array.tq?l=47&c=1
void StoreArrayHole_0(compiler::CodeAssemblerState* state_, TNode<FixedDoubleArray> p_elements, TNode<Smi> p_k);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array.tq?l=51&c=1
void StoreArrayHole_1(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_elements, TNode<Smi> p_k);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array.tq?l=62&c=1
void EnsureArrayLengthWritable_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Map> p_map, compiler::CodeAssemblerLabel* label_Bailout);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array.tq?l=83&c=1
TNode<JSArray> CreateJSArrayWithElements_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArray> p_array);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_TQ_CSA_H_
