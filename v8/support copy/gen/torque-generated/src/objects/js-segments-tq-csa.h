#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_SEGMENTS_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_SEGMENTS_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=11&c=1
TNode<JSSegments> Cast_JSSegments_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=12&c=3
TNode<Foreign> LoadJSSegmentsIcuBreakIterator_0(compiler::CodeAssemblerState* state_, TNode<JSSegments> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=12&c=3
void StoreJSSegmentsIcuBreakIterator_0(compiler::CodeAssemblerState* state_, TNode<JSSegments> p_o, TNode<Foreign> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=13&c=3
TNode<Foreign> LoadJSSegmentsUnicodeString_0(compiler::CodeAssemblerState* state_, TNode<JSSegments> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=13&c=3
void StoreJSSegmentsUnicodeString_0(compiler::CodeAssemblerState* state_, TNode<JSSegments> p_o, TNode<Foreign> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=14&c=3
TNode<Smi> LoadJSSegmentsFlags_0(compiler::CodeAssemblerState* state_, TNode<JSSegments> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=14&c=3
void StoreJSSegmentsFlags_0(compiler::CodeAssemblerState* state_, TNode<JSSegments> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=11&c=1
TNode<JSSegments> DownCastForTorqueClass_JSSegments_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_SEGMENTS_TQ_CSA_H_
