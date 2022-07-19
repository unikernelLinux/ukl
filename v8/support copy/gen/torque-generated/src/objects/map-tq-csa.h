#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_MAP_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_MAP_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=37&c=1
TNode<Map> Cast_Map_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=80&c=1
TNode<PrototypeInfo> LoadMapPrototypeInfo_0(compiler::CodeAssemblerState* state_, TNode<Map> p_m, compiler::CodeAssemblerLabel* label_HasNoPrototypeInfo);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=87&c=1
TNode<BoolT> IsSimpleObjectMap_0(compiler::CodeAssemblerState* state_, TNode<Map> p_map);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=59&c=3
TNode<Uint8T> LoadMapInstanceSizeInWords_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=59&c=3
void StoreMapInstanceSizeInWords_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o, TNode<Uint8T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=60&c=3
TNode<Uint8T> LoadMapInobjectPropertiesStartOrConstructorFunctionIndex_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=60&c=3
void StoreMapInobjectPropertiesStartOrConstructorFunctionIndex_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o, TNode<Uint8T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=61&c=3
TNode<Uint8T> LoadMapUsedOrUnusedInstanceSizeInWords_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=61&c=3
void StoreMapUsedOrUnusedInstanceSizeInWords_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o, TNode<Uint8T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=62&c=3
TNode<Uint8T> LoadMapVisitorId_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=62&c=3
void StoreMapVisitorId_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o, TNode<Uint8T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=63&c=3
TNode<Uint16T> LoadMapInstanceType_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=63&c=3
void StoreMapInstanceType_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o, TNode<Uint16T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=64&c=3
TNode<Uint8T> LoadMapBitField_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=64&c=3
void StoreMapBitField_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o, TNode<Uint8T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=65&c=3
TNode<Uint8T> LoadMapBitField2_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=65&c=3
void StoreMapBitField2_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o, TNode<Uint8T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=66&c=3
TNode<Uint32T> LoadMapBitField3_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=66&c=3
void StoreMapBitField3_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o, TNode<Uint32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=71&c=3
TNode<HeapObject> LoadMapPrototype_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=71&c=3
void StoreMapPrototype_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=72&c=3
TNode<Object> LoadMapConstructorOrBackPointerOrNativeContext_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=72&c=3
void StoreMapConstructorOrBackPointerOrNativeContext_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=73&c=3
TNode<DescriptorArray> LoadMapInstanceDescriptors_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=73&c=3
void StoreMapInstanceDescriptors_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o, TNode<DescriptorArray> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=74&c=3
TNode<WeakFixedArray> LoadMapDependentCode_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=74&c=3
void StoreMapDependentCode_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o, TNode<WeakFixedArray> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=75&c=3
TNode<Object> LoadMapPrototypeValidityCell_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=75&c=3
void StoreMapPrototypeValidityCell_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=76&c=3
TNode<MaybeObject> LoadMapTransitionsOrPrototypeInfo_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=76&c=3
void StoreMapTransitionsOrPrototypeInfo_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o, TNode<MaybeObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=38&c=3
TNode<PrototypeInfo> Method_Map_PrototypeInfo_0(compiler::CodeAssemblerState* state_, TNode<Map> p_this, compiler::CodeAssemblerLabel* label_HasNoPrototypeInfo);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=55&c=3
TNode<BoolT> Method_Map_IsUndetectable_0(compiler::CodeAssemblerState* state_, TNode<Map> p_this);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=37&c=1
TNode<Map> DownCastForTorqueClass_Map_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=40&c=7
TNode<MaybeObject> Cast_Weak_Map_0(compiler::CodeAssemblerState* state_, TNode<MaybeObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_MAP_TQ_CSA_H_
