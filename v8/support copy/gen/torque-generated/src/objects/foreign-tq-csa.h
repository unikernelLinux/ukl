#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_FOREIGN_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_FOREIGN_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/foreign.tq?l=5&c=1
TNode<Foreign> Cast_Foreign_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/foreign.tq?l=7&c=3
TNode<ExternalPointerT> LoadForeignForeignAddress_0(compiler::CodeAssemblerState* state_, TNode<Foreign> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/foreign.tq?l=7&c=3
void StoreForeignForeignAddress_0(compiler::CodeAssemblerState* state_, TNode<Foreign> p_o, TNode<ExternalPointerT> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/foreign.tq?l=5&c=1
TNode<Foreign> DownCastForTorqueClass_Foreign_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_FOREIGN_TQ_CSA_H_
