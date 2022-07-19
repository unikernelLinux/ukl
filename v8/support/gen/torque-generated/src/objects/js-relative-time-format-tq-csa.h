#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_RELATIVE_TIME_FORMAT_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_RELATIVE_TIME_FORMAT_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=13&c=1
TNode<JSRelativeTimeFormat> Cast_JSRelativeTimeFormat_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=14&c=3
TNode<String> LoadJSRelativeTimeFormatLocale_0(compiler::CodeAssemblerState* state_, TNode<JSRelativeTimeFormat> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=14&c=3
void StoreJSRelativeTimeFormatLocale_0(compiler::CodeAssemblerState* state_, TNode<JSRelativeTimeFormat> p_o, TNode<String> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=15&c=3
TNode<String> LoadJSRelativeTimeFormatNumberingSystem_0(compiler::CodeAssemblerState* state_, TNode<JSRelativeTimeFormat> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=15&c=3
void StoreJSRelativeTimeFormatNumberingSystem_0(compiler::CodeAssemblerState* state_, TNode<JSRelativeTimeFormat> p_o, TNode<String> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=16&c=3
TNode<Foreign> LoadJSRelativeTimeFormatIcuFormatter_0(compiler::CodeAssemblerState* state_, TNode<JSRelativeTimeFormat> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=16&c=3
void StoreJSRelativeTimeFormatIcuFormatter_0(compiler::CodeAssemblerState* state_, TNode<JSRelativeTimeFormat> p_o, TNode<Foreign> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=17&c=3
TNode<Smi> LoadJSRelativeTimeFormatFlags_0(compiler::CodeAssemblerState* state_, TNode<JSRelativeTimeFormat> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=17&c=3
void StoreJSRelativeTimeFormatFlags_0(compiler::CodeAssemblerState* state_, TNode<JSRelativeTimeFormat> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=13&c=1
TNode<JSRelativeTimeFormat> DownCastForTorqueClass_JSRelativeTimeFormat_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_RELATIVE_TIME_FORMAT_TQ_CSA_H_
