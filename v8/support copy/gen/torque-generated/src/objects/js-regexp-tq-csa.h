#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_REGEXP_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_REGEXP_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=16&c=1
TNode<JSRegExp> Cast_JSRegExp_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=17&c=3
TNode<HeapObject> LoadJSRegExpData_0(compiler::CodeAssemblerState* state_, TNode<JSRegExp> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=17&c=3
void StoreJSRegExpData_0(compiler::CodeAssemblerState* state_, TNode<JSRegExp> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=18&c=3
TNode<PrimitiveHeapObject> LoadJSRegExpSource_0(compiler::CodeAssemblerState* state_, TNode<JSRegExp> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=18&c=3
void StoreJSRegExpSource_0(compiler::CodeAssemblerState* state_, TNode<JSRegExp> p_o, TNode<PrimitiveHeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=19&c=3
TNode<Object> LoadJSRegExpFlags_0(compiler::CodeAssemblerState* state_, TNode<JSRegExp> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=19&c=3
void StoreJSRegExpFlags_0(compiler::CodeAssemblerState* state_, TNode<JSRegExp> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=44&c=3
TNode<Object> LoadJSRegExpResultIndex_0(compiler::CodeAssemblerState* state_, TNode<JSArray> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=44&c=3
void StoreJSRegExpResultIndex_0(compiler::CodeAssemblerState* state_, TNode<JSArray> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=45&c=3
TNode<Object> LoadJSRegExpResultInput_0(compiler::CodeAssemblerState* state_, TNode<JSArray> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=45&c=3
void StoreJSRegExpResultInput_0(compiler::CodeAssemblerState* state_, TNode<JSArray> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=46&c=3
TNode<Object> LoadJSRegExpResultGroups_0(compiler::CodeAssemblerState* state_, TNode<JSArray> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=46&c=3
void StoreJSRegExpResultGroups_0(compiler::CodeAssemblerState* state_, TNode<JSArray> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=49&c=3
TNode<HeapObject> LoadJSRegExpResultNames_0(compiler::CodeAssemblerState* state_, TNode<JSArray> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=49&c=3
void StoreJSRegExpResultNames_0(compiler::CodeAssemblerState* state_, TNode<JSArray> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=50&c=3
TNode<String> LoadJSRegExpResultRegexpInput_0(compiler::CodeAssemblerState* state_, TNode<JSArray> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=50&c=3
void StoreJSRegExpResultRegexpInput_0(compiler::CodeAssemblerState* state_, TNode<JSArray> p_o, TNode<String> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=51&c=3
TNode<Smi> LoadJSRegExpResultRegexpLastIndex_0(compiler::CodeAssemblerState* state_, TNode<JSArray> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=51&c=3
void StoreJSRegExpResultRegexpLastIndex_0(compiler::CodeAssemblerState* state_, TNode<JSArray> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=55&c=3
TNode<Object> LoadJSRegExpResultWithIndicesIndices_0(compiler::CodeAssemblerState* state_, TNode<JSRegExpResult> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=55&c=3
void StoreJSRegExpResultWithIndicesIndices_0(compiler::CodeAssemblerState* state_, TNode<JSRegExpResult> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=61&c=3
TNode<Object> LoadJSRegExpResultIndicesGroups_0(compiler::CodeAssemblerState* state_, TNode<JSArray> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=61&c=3
void StoreJSRegExpResultIndicesGroups_0(compiler::CodeAssemblerState* state_, TNode<JSArray> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=16&c=1
TNode<JSRegExp> DownCastForTorqueClass_JSRegExp_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_REGEXP_TQ_CSA_H_
