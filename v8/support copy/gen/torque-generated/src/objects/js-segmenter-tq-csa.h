#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_SEGMENTER_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_SEGMENTER_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=13&c=1
TNode<JSSegmenter> Cast_JSSegmenter_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=14&c=3
TNode<String> LoadJSSegmenterLocale_0(compiler::CodeAssemblerState* state_, TNode<JSSegmenter> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=14&c=3
void StoreJSSegmenterLocale_0(compiler::CodeAssemblerState* state_, TNode<JSSegmenter> p_o, TNode<String> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=15&c=3
TNode<Foreign> LoadJSSegmenterIcuBreakIterator_0(compiler::CodeAssemblerState* state_, TNode<JSSegmenter> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=15&c=3
void StoreJSSegmenterIcuBreakIterator_0(compiler::CodeAssemblerState* state_, TNode<JSSegmenter> p_o, TNode<Foreign> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=16&c=3
TNode<Smi> LoadJSSegmenterFlags_0(compiler::CodeAssemblerState* state_, TNode<JSSegmenter> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=16&c=3
void StoreJSSegmenterFlags_0(compiler::CodeAssemblerState* state_, TNode<JSSegmenter> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=13&c=1
TNode<JSSegmenter> DownCastForTorqueClass_JSSegmenter_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_SEGMENTER_TQ_CSA_H_
