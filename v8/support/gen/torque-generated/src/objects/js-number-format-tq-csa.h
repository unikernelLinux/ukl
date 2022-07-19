#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_NUMBER_FORMAT_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_NUMBER_FORMAT_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=7&c=1
TNode<JSNumberFormat> Cast_JSNumberFormat_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=8&c=3
TNode<String> LoadJSNumberFormatLocale_0(compiler::CodeAssemblerState* state_, TNode<JSNumberFormat> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=8&c=3
void StoreJSNumberFormatLocale_0(compiler::CodeAssemblerState* state_, TNode<JSNumberFormat> p_o, TNode<String> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=9&c=3
TNode<Foreign> LoadJSNumberFormatIcuNumberFormatter_0(compiler::CodeAssemblerState* state_, TNode<JSNumberFormat> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=9&c=3
void StoreJSNumberFormatIcuNumberFormatter_0(compiler::CodeAssemblerState* state_, TNode<JSNumberFormat> p_o, TNode<Foreign> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=11&c=3
TNode<Foreign> LoadJSNumberFormatIcuNumberRangeFormatter_0(compiler::CodeAssemblerState* state_, TNode<JSNumberFormat> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=11&c=3
void StoreJSNumberFormatIcuNumberRangeFormatter_0(compiler::CodeAssemblerState* state_, TNode<JSNumberFormat> p_o, TNode<Foreign> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=13&c=3
TNode<HeapObject> LoadJSNumberFormatBoundFormat_0(compiler::CodeAssemblerState* state_, TNode<JSNumberFormat> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=13&c=3
void StoreJSNumberFormatBoundFormat_0(compiler::CodeAssemblerState* state_, TNode<JSNumberFormat> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=7&c=1
TNode<JSNumberFormat> DownCastForTorqueClass_JSNumberFormat_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_NUMBER_FORMAT_TQ_CSA_H_
