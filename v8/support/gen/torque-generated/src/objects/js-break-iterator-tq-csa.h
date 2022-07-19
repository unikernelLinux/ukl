#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_BREAK_ITERATOR_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_BREAK_ITERATOR_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=7&c=1
TNode<JSV8BreakIterator> Cast_JSV8BreakIterator_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=8&c=3
TNode<String> LoadJSV8BreakIteratorLocale_0(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=8&c=3
void StoreJSV8BreakIteratorLocale_0(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o, TNode<String> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=9&c=3
TNode<Foreign> LoadJSV8BreakIteratorBreakIterator_0(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=9&c=3
void StoreJSV8BreakIteratorBreakIterator_0(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o, TNode<Foreign> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=10&c=3
TNode<Foreign> LoadJSV8BreakIteratorUnicodeString_0(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=10&c=3
void StoreJSV8BreakIteratorUnicodeString_0(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o, TNode<Foreign> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=11&c=3
TNode<HeapObject> LoadJSV8BreakIteratorBoundAdoptText_0(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=11&c=3
void StoreJSV8BreakIteratorBoundAdoptText_0(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=12&c=3
TNode<HeapObject> LoadJSV8BreakIteratorBoundFirst_0(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=12&c=3
void StoreJSV8BreakIteratorBoundFirst_0(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=13&c=3
TNode<HeapObject> LoadJSV8BreakIteratorBoundNext_0(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=13&c=3
void StoreJSV8BreakIteratorBoundNext_0(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=14&c=3
TNode<HeapObject> LoadJSV8BreakIteratorBoundCurrent_0(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=14&c=3
void StoreJSV8BreakIteratorBoundCurrent_0(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=15&c=3
TNode<HeapObject> LoadJSV8BreakIteratorBoundBreakType_0(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=15&c=3
void StoreJSV8BreakIteratorBoundBreakType_0(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=7&c=1
TNode<JSV8BreakIterator> DownCastForTorqueClass_JSV8BreakIterator_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_BREAK_ITERATOR_TQ_CSA_H_
