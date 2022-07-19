#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_PROTOTYPE_INFO_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_PROTOTYPE_INFO_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=9&c=1
TNode<PrototypeInfo> Cast_PrototypeInfo_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=14&c=3
TNode<HeapObject> LoadPrototypeInfoModuleNamespace_0(compiler::CodeAssemblerState* state_, TNode<PrototypeInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=14&c=3
void StorePrototypeInfoModuleNamespace_0(compiler::CodeAssemblerState* state_, TNode<PrototypeInfo> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=18&c=3
TNode<Object> LoadPrototypeInfoPrototypeUsers_0(compiler::CodeAssemblerState* state_, TNode<PrototypeInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=18&c=3
void StorePrototypeInfoPrototypeUsers_0(compiler::CodeAssemblerState* state_, TNode<PrototypeInfo> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=20&c=3
TNode<Object> LoadPrototypeInfoPrototypeChainEnumCache_0(compiler::CodeAssemblerState* state_, TNode<PrototypeInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=20&c=3
void StorePrototypeInfoPrototypeChainEnumCache_0(compiler::CodeAssemblerState* state_, TNode<PrototypeInfo> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=24&c=3
TNode<Smi> LoadPrototypeInfoRegistrySlot_0(compiler::CodeAssemblerState* state_, TNode<PrototypeInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=24&c=3
void StorePrototypeInfoRegistrySlot_0(compiler::CodeAssemblerState* state_, TNode<PrototypeInfo> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=26&c=3
TNode<Smi> LoadPrototypeInfoBitField_0(compiler::CodeAssemblerState* state_, TNode<PrototypeInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=26&c=3
void StorePrototypeInfoBitField_0(compiler::CodeAssemblerState* state_, TNode<PrototypeInfo> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=29&c=3
TNode<MaybeObject> LoadPrototypeInfoObjectCreateMap_0(compiler::CodeAssemblerState* state_, TNode<PrototypeInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=29&c=3
void StorePrototypeInfoObjectCreateMap_0(compiler::CodeAssemblerState* state_, TNode<PrototypeInfo> p_o, TNode<MaybeObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=9&c=1
TNode<PrototypeInfo> DownCastForTorqueClass_PrototypeInfo_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_PROTOTYPE_INFO_TQ_CSA_H_
