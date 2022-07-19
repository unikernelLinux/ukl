#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_CONCAT_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_CONCAT_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-concat.tq?l=15&c=7
TNode<JSArray> Cast_FastJSArrayForConcat_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-concat.tq?l=31&c=9
TNode<JSArray> Cast_FastJSArrayForCopy_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_CONCAT_TQ_CSA_H_
