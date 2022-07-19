#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_TYPED_ARRAY_SORT_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_TYPED_ARRAY_SORT_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array-sort.tq?l=8&c=1
const char* kBuiltinNameSort_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array-sort.tq?l=12&c=1
TNode<Number> CallCompare_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<JSReceiver> p_comparefn, TNode<Object> p_a, TNode<Object> p_b);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array-sort.tq?l=27&c=1
void TypedArrayMerge_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<JSReceiver> p_comparefn, TNode<FixedArray> p_source, TNode<UintPtrT> p_from, TNode<UintPtrT> p_middle, TNode<UintPtrT> p_to, TNode<FixedArray> p_target);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array-sort.tq?l=153&c=28
TNode<Numeric> UnsafeCast_Numeric_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_TYPED_ARRAY_SORT_TQ_CSA_H_
