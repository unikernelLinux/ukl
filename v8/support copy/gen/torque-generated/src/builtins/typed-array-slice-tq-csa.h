#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_TYPED_ARRAY_SLICE_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_TYPED_ARRAY_SLICE_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array-slice.tq?l=8&c=1
const char* kBuiltinNameSlice_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array-slice.tq?l=13&c=1
void FastCopy_0(compiler::CodeAssemblerState* state_, TNode<JSTypedArray> p_src, TNode<JSTypedArray> p_dest, TNode<UintPtrT> p_k, TNode<UintPtrT> p_count, compiler::CodeAssemblerLabel* label_IfSlow);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array-slice.tq?l=50&c=1
void SlowCopy_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSTypedArray> p_src, TNode<JSTypedArray> p_dest, TNode<UintPtrT> p_k, TNode<UintPtrT> p_final);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_TYPED_ARRAY_SLICE_TQ_CSA_H_
