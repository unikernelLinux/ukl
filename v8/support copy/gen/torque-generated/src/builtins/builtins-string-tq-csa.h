#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_BUILTINS_STRING_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_BUILTINS_STRING_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-string.tq?l=13&c=1
TNode<String> ToStringImpl_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-string.tq?l=100&c=1
void GenerateStringAt_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, TNode<Object> p_position, const char* p_methodName, compiler::CodeAssemblerLabel* label_IfInBounds, compiler::TypedCodeAssemblerVariable<String>* label_IfInBounds_parameter_0, compiler::TypedCodeAssemblerVariable<UintPtrT>* label_IfInBounds_parameter_1, compiler::TypedCodeAssemblerVariable<UintPtrT>* label_IfInBounds_parameter_2, compiler::CodeAssemblerLabel* label_IfOutOfBounds);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-string.tq?l=188&c=26
TNode<IntPtrT> Convert_intptr_intptr_0(compiler::CodeAssemblerState* state_, TNode<IntPtrT> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-string.tq?l=215&c=9
TNode<Symbol> Cast_Symbol_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-string.tq?l=274&c=14
TorqueStructReference_char8_0 AddOffset_char8_0(compiler::CodeAssemblerState* state_, TorqueStructReference_char8_0 p_ref, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-string.tq?l=276&c=14
TorqueStructReference_char16_0 AddOffset_char16_0(compiler::CodeAssemblerState* state_, TorqueStructReference_char16_0 p_ref, TNode<IntPtrT> p_offset);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_BUILTINS_STRING_TQ_CSA_H_
