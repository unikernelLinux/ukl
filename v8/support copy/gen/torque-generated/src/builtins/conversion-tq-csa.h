#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_CONVERSION_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_CONVERSION_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/conversion.tq?l=160&c=1
TNode<Object> TryGetExoticToPrimitive_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_input, compiler::CodeAssemblerLabel* label_OrdinaryToPrimitive);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/conversion.tq?l=169&c=1
TNode<Object> CallExoticToPrimitive_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_input, TNode<Object> p_exoticToPrimitive, TNode<String> p_hint);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/conversion.tq?l=213&c=1
TNode<Object> TryToPrimitiveMethod_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_input, TNode<String> p_name, compiler::CodeAssemblerLabel* label_Continue);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/conversion.tq?l=103&c=7
TNode<Name> Cast_Name_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/conversion.tq?l=150&c=22
TNode<Map> UnsafeCast_Map_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_CONVERSION_TQ_CSA_H_
