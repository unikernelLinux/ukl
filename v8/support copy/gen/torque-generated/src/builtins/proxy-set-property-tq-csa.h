#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_PROXY_SET_PROPERTY_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_PROXY_SET_PROPERTY_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/proxy-set-property.tq?l=13&c=1
void CallThrowTypeErrorIfStrict_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, MessageTemplate p_message);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/proxy-set-property.tq?l=26&c=10
TNode<BoolT> Is_Name_AnyName_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Name> p_o);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_PROXY_SET_PROPERTY_TQ_CSA_H_
