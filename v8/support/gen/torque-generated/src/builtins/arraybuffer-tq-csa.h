#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAYBUFFER_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAYBUFFER_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/arraybuffer.tq?l=13&c=13
TNode<JSArrayBuffer> Cast_JSArrayBuffer_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/arraybuffer.tq?l=129&c=5
TNode<JSArrayBufferView> Cast_JSArrayBufferView_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAYBUFFER_TQ_CSA_H_
