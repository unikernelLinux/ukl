#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_REGEXP_STRING_ITERATOR_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_REGEXP_STRING_ITERATOR_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp-string-iterator.tq?l=11&c=1
TNode<JSRegExpStringIterator> Cast_JSRegExpStringIterator_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp-string-iterator.tq?l=13&c=3
TNode<JSReceiver> LoadJSRegExpStringIteratorIteratingRegExp_0(compiler::CodeAssemblerState* state_, TNode<JSRegExpStringIterator> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp-string-iterator.tq?l=13&c=3
void StoreJSRegExpStringIteratorIteratingRegExp_0(compiler::CodeAssemblerState* state_, TNode<JSRegExpStringIterator> p_o, TNode<JSReceiver> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp-string-iterator.tq?l=15&c=3
TNode<String> LoadJSRegExpStringIteratorIteratedString_0(compiler::CodeAssemblerState* state_, TNode<JSRegExpStringIterator> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp-string-iterator.tq?l=15&c=3
void StoreJSRegExpStringIteratorIteratedString_0(compiler::CodeAssemblerState* state_, TNode<JSRegExpStringIterator> p_o, TNode<String> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp-string-iterator.tq?l=16&c=3
TNode<Smi> LoadJSRegExpStringIteratorFlags_0(compiler::CodeAssemblerState* state_, TNode<JSRegExpStringIterator> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp-string-iterator.tq?l=16&c=3
void StoreJSRegExpStringIteratorFlags_0(compiler::CodeAssemblerState* state_, TNode<JSRegExpStringIterator> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp-string-iterator.tq?l=11&c=1
TNode<JSRegExpStringIterator> DownCastForTorqueClass_JSRegExpStringIterator_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_REGEXP_STRING_ITERATOR_TQ_CSA_H_
