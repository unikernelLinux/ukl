#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_FREE_SPACE_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_FREE_SPACE_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/free-space.tq?l=5&c=1
TNode<FreeSpace> Cast_FreeSpace_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/free-space.tq?l=6&c=3
TNode<Smi> LoadFreeSpaceSize_0(compiler::CodeAssemblerState* state_, TNode<FreeSpace> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/free-space.tq?l=6&c=3
void StoreFreeSpaceSize_0(compiler::CodeAssemblerState* state_, TNode<FreeSpace> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/free-space.tq?l=7&c=3
TNode<MaybeObject> LoadFreeSpaceNext_0(compiler::CodeAssemblerState* state_, TNode<FreeSpace> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/free-space.tq?l=7&c=3
void StoreFreeSpaceNext_0(compiler::CodeAssemblerState* state_, TNode<FreeSpace> p_o, TNode<MaybeObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/free-space.tq?l=5&c=1
TNode<FreeSpace> DownCastForTorqueClass_FreeSpace_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_FREE_SPACE_TQ_CSA_H_
