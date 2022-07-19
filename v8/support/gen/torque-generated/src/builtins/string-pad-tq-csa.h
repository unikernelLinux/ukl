#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_STRING_PAD_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_STRING_PAD_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/string-pad.tq?l=12&c=1
int31_t kStringPadStart_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/string-pad.tq?l=13&c=1
int31_t kStringPadEnd_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/string-pad.tq?l=15&c=1
TNode<String> StringPad_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, TorqueStructArguments p_arguments, const char* p_methodName, int31_t p_variant);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_STRING_PAD_TQ_CSA_H_
