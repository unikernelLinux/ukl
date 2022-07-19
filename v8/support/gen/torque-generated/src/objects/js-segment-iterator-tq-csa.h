#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_SEGMENT_ITERATOR_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_SEGMENT_ITERATOR_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=11&c=1
TNode<JSSegmentIterator> Cast_JSSegmentIterator_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=12&c=3
TNode<Foreign> LoadJSSegmentIteratorIcuBreakIterator_0(compiler::CodeAssemblerState* state_, TNode<JSSegmentIterator> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=12&c=3
void StoreJSSegmentIteratorIcuBreakIterator_0(compiler::CodeAssemblerState* state_, TNode<JSSegmentIterator> p_o, TNode<Foreign> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=13&c=3
TNode<Foreign> LoadJSSegmentIteratorUnicodeString_0(compiler::CodeAssemblerState* state_, TNode<JSSegmentIterator> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=13&c=3
void StoreJSSegmentIteratorUnicodeString_0(compiler::CodeAssemblerState* state_, TNode<JSSegmentIterator> p_o, TNode<Foreign> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=14&c=3
TNode<Smi> LoadJSSegmentIteratorFlags_0(compiler::CodeAssemblerState* state_, TNode<JSSegmentIterator> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=14&c=3
void StoreJSSegmentIteratorFlags_0(compiler::CodeAssemblerState* state_, TNode<JSSegmentIterator> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=11&c=1
TNode<JSSegmentIterator> DownCastForTorqueClass_JSSegmentIterator_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_SEGMENT_ITERATOR_TQ_CSA_H_
