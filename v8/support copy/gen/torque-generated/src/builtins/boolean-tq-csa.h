#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_BOOLEAN_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_BOOLEAN_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/boolean.tq?l=6&c=1
TNode<Oddball> ThisBooleanValue_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, const char* p_method);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/boolean.tq?l=8&c=10
TNode<Oddball> UnsafeCast_Boolean_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/boolean.tq?l=22&c=37
TNode<JSReceiver> UnsafeCast_JSReceiver_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/boolean.tq?l=25&c=7
TNode<JSPrimitiveWrapper> UnsafeCast_JSPrimitiveWrapper_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_BOOLEAN_TQ_CSA_H_
