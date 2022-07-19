#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_CELL_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_CELL_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=5&c=1
TNode<Cell> Cast_Cell_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=5&c=40
TNode<Object> LoadCellValue_0(compiler::CodeAssemblerState* state_, TNode<Cell> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=5&c=40
void StoreCellValue_0(compiler::CodeAssemblerState* state_, TNode<Cell> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=5&c=1
TNode<Cell> DownCastForTorqueClass_Cell_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_CELL_TQ_CSA_H_
