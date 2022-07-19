#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_LASTINDEXOF_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_LASTINDEXOF_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-lastindexof.tq?l=10&c=1
TNode<Object> LoadWithHoleCheck_FixedArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArrayBase> p_elements, TNode<Smi> p_index, compiler::CodeAssemblerLabel* label_IfHole);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-lastindexof.tq?l=19&c=1
TNode<Object> LoadWithHoleCheck_FixedDoubleArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArrayBase> p_elements, TNode<Smi> p_index, compiler::CodeAssemblerLabel* label_IfHole);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-lastindexof.tq?l=59&c=1
TNode<Number> GetFromIndex_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Number> p_length, TorqueStructArguments p_arguments);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-lastindexof.tq?l=79&c=1
TNode<Object> TryFastArrayLastIndexOf_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_receiver, TNode<Object> p_searchElement, TNode<Number> p_from, compiler::CodeAssemblerLabel* label_Slow);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-lastindexof.tq?l=98&c=1
TNode<Object> GenericArrayLastIndexOf_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_object, TNode<Object> p_searchElement, TNode<Number> p_from);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-lastindexof.tq?l=90&c=12
TNode<Smi> FastArrayLastIndexOf_FixedArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSArray> p_array, TNode<Smi> p_from, TNode<Object> p_searchElement);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-lastindexof.tq?l=94&c=10
TNode<Smi> FastArrayLastIndexOf_FixedDoubleArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSArray> p_array, TNode<Smi> p_from, TNode<Object> p_searchElement);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-lastindexof.tq?l=47&c=16
TNode<BoolT> Is_FastJSArray_JSArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSArray> p_o);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_LASTINDEXOF_TQ_CSA_H_
