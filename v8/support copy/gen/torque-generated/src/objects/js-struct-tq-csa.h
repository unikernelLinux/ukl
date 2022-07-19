#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_STRUCT_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_STRUCT_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-struct.tq?l=5&c=1
TNode<JSSharedStruct> Cast_JSSharedStruct_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-struct.tq?l=5&c=1
TNode<JSSharedStruct> DownCastForTorqueClass_JSSharedStruct_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_STRUCT_TQ_CSA_H_
