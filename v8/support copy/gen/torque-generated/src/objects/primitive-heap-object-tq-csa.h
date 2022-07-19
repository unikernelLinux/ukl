#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_PRIMITIVE_HEAP_OBJECT_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_PRIMITIVE_HEAP_OBJECT_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/primitive-heap-object.tq?l=5&c=1
TNode<PrimitiveHeapObject> Cast_PrimitiveHeapObject_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/primitive-heap-object.tq?l=5&c=1
TNode<PrimitiveHeapObject> DownCastForTorqueClass_PrimitiveHeapObject_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_PRIMITIVE_HEAP_OBJECT_TQ_CSA_H_
