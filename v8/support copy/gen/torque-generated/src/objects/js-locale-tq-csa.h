#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_LOCALE_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_LOCALE_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-locale.tq?l=7&c=1
TNode<JSLocale> Cast_JSLocale_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-locale.tq?l=8&c=3
TNode<Foreign> LoadJSLocaleIcuLocale_0(compiler::CodeAssemblerState* state_, TNode<JSLocale> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-locale.tq?l=8&c=3
void StoreJSLocaleIcuLocale_0(compiler::CodeAssemblerState* state_, TNode<JSLocale> p_o, TNode<Foreign> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-locale.tq?l=7&c=1
TNode<JSLocale> DownCastForTorqueClass_JSLocale_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_LOCALE_TQ_CSA_H_
