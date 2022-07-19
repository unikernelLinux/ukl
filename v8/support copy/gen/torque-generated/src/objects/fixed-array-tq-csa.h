#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_FIXED_ARRAY_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_FIXED_ARRAY_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=5&c=1
TNode<FixedArrayBase> Cast_FixedArrayBase_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=11&c=1
TNode<FixedArray> Cast_FixedArray_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=18&c=1
TNode<FixedDoubleArray> Cast_FixedDoubleArray_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=22&c=1
TNode<WeakFixedArray> Cast_WeakFixedArray_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=1
TNode<ByteArray> Cast_ByteArray_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=40&c=1
TNode<WeakArrayList> Cast_WeakArrayList_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=88&c=1
void StoreFixedDoubleArrayDirect_0(compiler::CodeAssemblerState* state_, TNode<FixedDoubleArray> p_a, TNode<Smi> p_i, TNode<Number> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=92&c=1
void StoreFixedArrayDirect_0(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_a, TNode<Smi> p_i, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=116&c=1
TNode<FixedArray> ExtractFixedArray_0(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_source, TNode<IntPtrT> p_first, TNode<IntPtrT> p_count, TNode<IntPtrT> p_capacity);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=126&c=1
TNode<FixedArrayBase> ExtractFixedDoubleArray_0(compiler::CodeAssemblerState* state_, TNode<FixedDoubleArray> p_source, TNode<IntPtrT> p_first, TNode<IntPtrT> p_count, TNode<IntPtrT> p_capacity);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=8&c=9
TNode<Smi> LoadFixedArrayBaseLength_0(compiler::CodeAssemblerState* state_, TNode<FixedArrayBase> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=13&c=3
TorqueStructSlice_Object_MutableReference_Object_0 FieldSliceFixedArrayObjects_0(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=13&c=3
TNode<Object> LoadFixedArrayObjects_0(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_o, TNode<IntPtrT> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=13&c=3
void StoreFixedArrayObjects_0(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_o, TNode<IntPtrT> p_i, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=24&c=9
TNode<Smi> LoadWeakFixedArrayLength_0(compiler::CodeAssemblerState* state_, TNode<WeakFixedArray> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=25&c=19
TorqueStructSlice_MaybeObject_MutableReference_MaybeObject_0 FieldSliceWeakFixedArrayObjects_0(compiler::CodeAssemblerState* state_, TNode<WeakFixedArray> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=25&c=19
TNode<MaybeObject> LoadWeakFixedArrayObjects_0(compiler::CodeAssemblerState* state_, TNode<WeakFixedArray> p_o, TNode<IntPtrT> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=25&c=19
void StoreWeakFixedArrayObjects_0(compiler::CodeAssemblerState* state_, TNode<WeakFixedArray> p_o, TNode<IntPtrT> p_i, TNode<MaybeObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=19&c=3
TorqueStructSlice_float64_or_hole_MutableReference_float64_or_hole_0 FieldSliceFixedDoubleArrayFloats_0(compiler::CodeAssemblerState* state_, TNode<FixedDoubleArray> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=49
TorqueStructSlice_uint8_MutableReference_uint8_0 FieldSliceByteArrayBytes_0(compiler::CodeAssemblerState* state_, TNode<ByteArray> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=49
TNode<Uint8T> LoadByteArrayBytes_0(compiler::CodeAssemblerState* state_, TNode<ByteArray> p_o, TNode<IntPtrT> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=49
void StoreByteArrayBytes_0(compiler::CodeAssemblerState* state_, TNode<ByteArray> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=42&c=9
TNode<Smi> LoadWeakArrayListCapacity_0(compiler::CodeAssemblerState* state_, TNode<WeakArrayList> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=43&c=3
TNode<Smi> LoadWeakArrayListLength_0(compiler::CodeAssemblerState* state_, TNode<WeakArrayList> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=43&c=3
void StoreWeakArrayListLength_0(compiler::CodeAssemblerState* state_, TNode<WeakArrayList> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=44&c=19
TorqueStructSlice_MaybeObject_MutableReference_MaybeObject_0 FieldSliceWeakArrayListObjects_0(compiler::CodeAssemblerState* state_, TNode<WeakArrayList> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=44&c=19
TNode<MaybeObject> LoadWeakArrayListObjects_0(compiler::CodeAssemblerState* state_, TNode<WeakArrayList> p_o, TNode<IntPtrT> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=44&c=19
void StoreWeakArrayListObjects_0(compiler::CodeAssemblerState* state_, TNode<WeakArrayList> p_o, TNode<IntPtrT> p_i, TNode<MaybeObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=5&c=1
TNode<FixedArrayBase> DownCastForTorqueClass_FixedArrayBase_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=11&c=1
TNode<FixedArray> DownCastForTorqueClass_FixedArray_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=18&c=1
TNode<FixedDoubleArray> DownCastForTorqueClass_FixedDoubleArray_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=22&c=1
TNode<WeakFixedArray> DownCastForTorqueClass_WeakFixedArray_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=1
TNode<ByteArray> DownCastForTorqueClass_ByteArray_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=40&c=1
TNode<WeakArrayList> DownCastForTorqueClass_WeakArrayList_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=124&c=11
TorqueStructConstantIterator_TheHole_0 ConstantIterator_TheHole_0(compiler::CodeAssemblerState* state_, TNode<Oddball> p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=122&c=7
TorqueStructIteratorSequence_Object_SliceIterator_Object_MutableReference_Object_ConstantIterator_TheHole_0 IteratorSequence_Object_SliceIterator_Object_MutableReference_Object_ConstantIterator_TheHole_0(compiler::CodeAssemblerState* state_, TorqueStructSliceIterator_Object_MutableReference_Object_0 p_first, TorqueStructConstantIterator_TheHole_0 p_second);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=120&c=10
TNode<FixedArray> NewFixedArray_IteratorSequence_Object_SliceIterator_Object_MutableReference_Object_ConstantIterator_TheHole_0(compiler::CodeAssemblerState* state_, TNode<IntPtrT> p_length, TorqueStructIteratorSequence_Object_SliceIterator_Object_MutableReference_Object_ConstantIterator_TheHole_0 p_it);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=134&c=11
TorqueStructConstantIterator_float64_or_hole_0 ConstantIterator_float64_or_hole_0(compiler::CodeAssemblerState* state_, TorqueStructfloat64_or_hole_0 p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=132&c=7
TorqueStructIteratorSequence_float64_or_hole_SliceIterator_float64_or_hole_MutableReference_float64_or_hole_ConstantIterator_float64_or_hole_0 IteratorSequence_float64_or_hole_SliceIterator_float64_or_hole_MutableReference_float64_or_hole_ConstantIterator_float64_or_hole_0(compiler::CodeAssemblerState* state_, TorqueStructSliceIterator_float64_or_hole_MutableReference_float64_or_hole_0 p_first, TorqueStructConstantIterator_float64_or_hole_0 p_second);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=130&c=10
TNode<FixedArrayBase> NewFixedDoubleArray_IteratorSequence_float64_or_hole_SliceIterator_float64_or_hole_MutableReference_float64_or_hole_ConstantIterator_float64_or_hole_0(compiler::CodeAssemblerState* state_, TNode<IntPtrT> p_length, TorqueStructIteratorSequence_float64_or_hole_SliceIterator_float64_or_hole_MutableReference_float64_or_hole_ConstantIterator_float64_or_hole_0 p_it);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=25&c=19
TorqueStructSlice_MaybeObject_MutableReference_MaybeObject_0 NewMutableSlice_MaybeObject_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset, TNode<IntPtrT> p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=19&c=3
TorqueStructSlice_float64_or_hole_MutableReference_float64_or_hole_0 NewMutableSlice_float64_or_hole_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset, TNode<IntPtrT> p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=49
TorqueStructSlice_uint8_MutableReference_uint8_0 NewMutableSlice_uint8_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset, TNode<IntPtrT> p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=146&c=10
void InitializeFieldsFromIterator_Object_ArgumentsIterator_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_Object_MutableReference_Object_0 p_target, TorqueStructArgumentsIterator_0 p_originIterator);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=146&c=10
void InitializeFieldsFromIterator_Object_ParameterValueIterator_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_Object_MutableReference_Object_0 p_target, TorqueStructParameterValueIterator_0 p_originIterator);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=146&c=10
void InitializeFieldsFromIterator_Object_IteratorSequence_Object_SliceIterator_Object_MutableReference_Object_ConstantIterator_TheHole_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_Object_MutableReference_Object_0 p_target, TorqueStructIteratorSequence_Object_SliceIterator_Object_MutableReference_Object_ConstantIterator_TheHole_0 p_originIterator);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=156&c=10
void InitializeFieldsFromIterator_float64_or_hole_IteratorSequence_float64_or_hole_SliceIterator_float64_or_hole_MutableReference_float64_or_hole_ConstantIterator_float64_or_hole_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_float64_or_hole_MutableReference_float64_or_hole_0 p_target, TorqueStructIteratorSequence_float64_or_hole_SliceIterator_float64_or_hole_MutableReference_float64_or_hole_ConstantIterator_float64_or_hole_0 p_originIterator);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=146&c=10
void InitializeFieldsFromIterator_Object_ConstantIterator_TheHole_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_Object_MutableReference_Object_0 p_target, TorqueStructConstantIterator_TheHole_0 p_originIterator);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_FIXED_ARRAY_TQ_CSA_H_
