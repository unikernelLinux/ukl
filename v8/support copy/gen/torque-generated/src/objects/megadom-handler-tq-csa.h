#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_MEGADOM_HANDLER_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_MEGADOM_HANDLER_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=5&c=1
TNode<MegaDomHandler> Cast_MegaDomHandler_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=7&c=3
TNode<MaybeObject> LoadMegaDomHandlerAccessor_0(compiler::CodeAssemblerState* state_, TNode<MegaDomHandler> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=7&c=3
void StoreMegaDomHandlerAccessor_0(compiler::CodeAssemblerState* state_, TNode<MegaDomHandler> p_o, TNode<MaybeObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=8&c=3
TNode<MaybeObject> LoadMegaDomHandlerContext_0(compiler::CodeAssemblerState* state_, TNode<MegaDomHandler> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=8&c=3
void StoreMegaDomHandlerContext_0(compiler::CodeAssemblerState* state_, TNode<MegaDomHandler> p_o, TNode<MaybeObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=5&c=1
TNode<MegaDomHandler> DownCastForTorqueClass_MegaDomHandler_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_MEGADOM_HANDLER_TQ_CSA_H_
