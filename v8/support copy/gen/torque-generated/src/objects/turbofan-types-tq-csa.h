#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_TURBOFAN_TYPES_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_TURBOFAN_TYPES_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=12&c=1
TNode<TurbofanType> Cast_TurbofanType_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=59&c=1
TNode<TurbofanBitsetType> Cast_TurbofanBitsetType_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=65&c=1
TNode<TurbofanUnionType> Cast_TurbofanUnionType_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=71&c=1
TNode<TurbofanRangeType> Cast_TurbofanRangeType_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=77&c=1
TNode<TurbofanHeapConstantType> Cast_TurbofanHeapConstantType_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=82&c=1
TNode<TurbofanOtherNumberConstantType> Cast_TurbofanOtherNumberConstantType_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=87&c=1
TNode<BoolT> IsMinusZero_0(compiler::CodeAssemblerState* state_, TNode<Float64T> p_x);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=91&c=1
TNode<BoolT> TestTurbofanBitsetType_0(compiler::CodeAssemblerState* state_, TNode<Object> p_value, TNode<Uint32T> p_bitsetLow, TNode<Uint32T> p_bitsetHigh);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=61&c=3
TNode<Uint32T> LoadTurbofanBitsetTypeBitsetLow_0(compiler::CodeAssemblerState* state_, TNode<TurbofanBitsetType> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=61&c=3
void StoreTurbofanBitsetTypeBitsetLow_0(compiler::CodeAssemblerState* state_, TNode<TurbofanBitsetType> p_o, TNode<Uint32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=62&c=3
TNode<Uint32T> LoadTurbofanBitsetTypeBitsetHigh_0(compiler::CodeAssemblerState* state_, TNode<TurbofanBitsetType> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=62&c=3
void StoreTurbofanBitsetTypeBitsetHigh_0(compiler::CodeAssemblerState* state_, TNode<TurbofanBitsetType> p_o, TNode<Uint32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=67&c=3
TNode<TurbofanType> LoadTurbofanUnionTypeType1_0(compiler::CodeAssemblerState* state_, TNode<TurbofanUnionType> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=67&c=3
void StoreTurbofanUnionTypeType1_0(compiler::CodeAssemblerState* state_, TNode<TurbofanUnionType> p_o, TNode<TurbofanType> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=68&c=3
TNode<TurbofanType> LoadTurbofanUnionTypeType2_0(compiler::CodeAssemblerState* state_, TNode<TurbofanUnionType> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=68&c=3
void StoreTurbofanUnionTypeType2_0(compiler::CodeAssemblerState* state_, TNode<TurbofanUnionType> p_o, TNode<TurbofanType> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=73&c=3
TNode<Float64T> LoadTurbofanRangeTypeMin_0(compiler::CodeAssemblerState* state_, TNode<TurbofanRangeType> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=73&c=3
void StoreTurbofanRangeTypeMin_0(compiler::CodeAssemblerState* state_, TNode<TurbofanRangeType> p_o, TNode<Float64T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=74&c=3
TNode<Float64T> LoadTurbofanRangeTypeMax_0(compiler::CodeAssemblerState* state_, TNode<TurbofanRangeType> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=74&c=3
void StoreTurbofanRangeTypeMax_0(compiler::CodeAssemblerState* state_, TNode<TurbofanRangeType> p_o, TNode<Float64T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=79&c=3
TNode<HeapObject> LoadTurbofanHeapConstantTypeConstant_0(compiler::CodeAssemblerState* state_, TNode<TurbofanHeapConstantType> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=79&c=3
void StoreTurbofanHeapConstantTypeConstant_0(compiler::CodeAssemblerState* state_, TNode<TurbofanHeapConstantType> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=84&c=3
TNode<Float64T> LoadTurbofanOtherNumberConstantTypeConstant_0(compiler::CodeAssemblerState* state_, TNode<TurbofanOtherNumberConstantType> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=84&c=3
void StoreTurbofanOtherNumberConstantTypeConstant_0(compiler::CodeAssemblerState* state_, TNode<TurbofanOtherNumberConstantType> p_o, TNode<Float64T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=12&c=1
TNode<TurbofanType> DownCastForTorqueClass_TurbofanType_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=59&c=1
TNode<TurbofanBitsetType> DownCastForTorqueClass_TurbofanBitsetType_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=65&c=1
TNode<TurbofanUnionType> DownCastForTorqueClass_TurbofanUnionType_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=71&c=1
TNode<TurbofanRangeType> DownCastForTorqueClass_TurbofanRangeType_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=77&c=1
TNode<TurbofanHeapConstantType> DownCastForTorqueClass_TurbofanHeapConstantType_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=82&c=1
TNode<TurbofanOtherNumberConstantType> DownCastForTorqueClass_TurbofanOtherNumberConstantType_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=143&c=14
TNode<BoolT> Is_Callable_JSProxy_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSProxy> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=186&c=23
TNode<UintPtrT> Convert_uintptr_constexpr_IntegerLiteral_0(compiler::CodeAssemblerState* state_, IntegerLiteral p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=197&c=18
TNode<BoolT> Is_Callable_JSObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSObject> p_o);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_TURBOFAN_TYPES_TQ_CSA_H_
