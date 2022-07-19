#ifndef V8_GEN_TORQUE_GENERATED_SRC_IC_HANDLER_CONFIGURATION_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_IC_HANDLER_CONFIGURATION_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/ic/handler-configuration.tq?l=7&c=1
TNode<LoadHandler> Cast_LoadHandler_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/ic/handler-configuration.tq?l=8&c=1
TNode<StoreHandler> Cast_StoreHandler_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/ic/handler-configuration.tq?l=7&c=1
TNode<LoadHandler> DownCastForTorqueClass_LoadHandler_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/ic/handler-configuration.tq?l=8&c=1
TNode<StoreHandler> DownCastForTorqueClass_StoreHandler_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_IC_HANDLER_CONFIGURATION_TQ_CSA_H_
