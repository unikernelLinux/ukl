#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_DISPLAY_NAMES_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_DISPLAY_NAMES_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=18&c=1
TNode<JSDisplayNames> Cast_JSDisplayNames_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=19&c=3
TNode<Foreign> LoadJSDisplayNamesInternal_0(compiler::CodeAssemblerState* state_, TNode<JSDisplayNames> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=19&c=3
void StoreJSDisplayNamesInternal_0(compiler::CodeAssemblerState* state_, TNode<JSDisplayNames> p_o, TNode<Foreign> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=20&c=3
TNode<Smi> LoadJSDisplayNamesFlags_0(compiler::CodeAssemblerState* state_, TNode<JSDisplayNames> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=20&c=3
void StoreJSDisplayNamesFlags_0(compiler::CodeAssemblerState* state_, TNode<JSDisplayNames> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=18&c=1
TNode<JSDisplayNames> DownCastForTorqueClass_JSDisplayNames_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_DISPLAY_NAMES_TQ_CSA_H_
