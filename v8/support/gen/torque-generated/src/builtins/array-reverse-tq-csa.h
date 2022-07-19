#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_REVERSE_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_REVERSE_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-reverse.tq?l=9&c=1
TNode<Smi> LoadElement_FastPackedSmiElements_Smi_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArrayBase> p_elements, TNode<Smi> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-reverse.tq?l=15&c=1
TNode<Object> LoadElement_FastPackedObjectElements_JSAny_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArrayBase> p_elements, TNode<Smi> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-reverse.tq?l=21&c=1
TNode<Float64T> LoadElement_FastPackedDoubleElements_float64_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArrayBase> p_elements, TNode<Smi> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-reverse.tq?l=33&c=1
void StoreElement_FastPackedSmiElements_Smi_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArrayBase> p_elements, TNode<Smi> p_index, TNode<Smi> p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-reverse.tq?l=39&c=1
void StoreElement_FastPackedObjectElements_JSAny_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArrayBase> p_elements, TNode<Smi> p_index, TNode<Object> p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-reverse.tq?l=45&c=1
void StoreElement_FastPackedDoubleElements_float64_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArrayBase> p_elements, TNode<Smi> p_index, TNode<Float64T> p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-reverse.tq?l=70&c=1
TNode<Object> GenericArrayReverse_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-reverse.tq?l=142&c=1
void TryFastPackedArrayReverse_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, compiler::CodeAssemblerLabel* label_Slow);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-reverse.tq?l=12&c=10
TNode<Smi> UnsafeCast_Smi_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-reverse.tq?l=144&c=30
TNode<JSArray> Cast_FastJSArray_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-reverse.tq?l=149&c=5
void FastPackedArrayReverse_FastPackedSmiElements_Smi_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArrayBase> p_elements, TNode<Smi> p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-reverse.tq?l=153&c=5
void FastPackedArrayReverse_FastPackedObjectElements_JSAny_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArrayBase> p_elements, TNode<Smi> p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-reverse.tq?l=156&c=5
void FastPackedArrayReverse_FastPackedDoubleElements_float64_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArrayBase> p_elements, TNode<Smi> p_length);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_REVERSE_TQ_CSA_H_
