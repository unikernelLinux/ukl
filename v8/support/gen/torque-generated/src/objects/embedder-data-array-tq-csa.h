#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_EMBEDDER_DATA_ARRAY_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_EMBEDDER_DATA_ARRAY_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/embedder-data-array.tq?l=5&c=1
TNode<EmbedderDataArray> Cast_EmbedderDataArray_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/embedder-data-array.tq?l=7&c=3
TNode<Smi> LoadEmbedderDataArrayLength_0(compiler::CodeAssemblerState* state_, TNode<EmbedderDataArray> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/embedder-data-array.tq?l=7&c=3
void StoreEmbedderDataArrayLength_0(compiler::CodeAssemblerState* state_, TNode<EmbedderDataArray> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/embedder-data-array.tq?l=5&c=1
TNode<EmbedderDataArray> DownCastForTorqueClass_EmbedderDataArray_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_EMBEDDER_DATA_ARRAY_TQ_CSA_H_
