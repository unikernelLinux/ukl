#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_LIST_FORMAT_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_LIST_FORMAT_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=14&c=1
TNode<JSListFormat> Cast_JSListFormat_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=15&c=3
TNode<String> LoadJSListFormatLocale_0(compiler::CodeAssemblerState* state_, TNode<JSListFormat> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=15&c=3
void StoreJSListFormatLocale_0(compiler::CodeAssemblerState* state_, TNode<JSListFormat> p_o, TNode<String> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=16&c=3
TNode<Foreign> LoadJSListFormatIcuFormatter_0(compiler::CodeAssemblerState* state_, TNode<JSListFormat> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=16&c=3
void StoreJSListFormatIcuFormatter_0(compiler::CodeAssemblerState* state_, TNode<JSListFormat> p_o, TNode<Foreign> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=17&c=3
TNode<Smi> LoadJSListFormatFlags_0(compiler::CodeAssemblerState* state_, TNode<JSListFormat> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=17&c=3
void StoreJSListFormatFlags_0(compiler::CodeAssemblerState* state_, TNode<JSListFormat> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=14&c=1
TNode<JSListFormat> DownCastForTorqueClass_JSListFormat_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_LIST_FORMAT_TQ_CSA_H_
