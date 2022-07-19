#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_ORDERED_HASH_TABLE_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_ORDERED_HASH_TABLE_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=17&c=1
TNode<HeapObject> Cast_SmallOrderedHashTable_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=24&c=1
TNode<Map> kSmallOrderedHashSetMap_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=26&c=1
TNode<SmallOrderedHashSet> Cast_SmallOrderedHashSet_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=40&c=1
TNode<SmallOrderedHashSet> AllocateSmallOrderedHashSet_0(compiler::CodeAssemblerState* state_, TNode<IntPtrT> p_capacity);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=63&c=1
TNode<Map> kSmallOrderedHashMapMap_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=65&c=1
TNode<SmallOrderedHashMap> Cast_SmallOrderedHashMap_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=79&c=1
TNode<SmallOrderedHashMap> AllocateSmallOrderedHashMap_0(compiler::CodeAssemblerState* state_, TNode<IntPtrT> p_capacity);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=102&c=1
TNode<SmallOrderedNameDictionary> Cast_SmallOrderedNameDictionary_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=28&c=3
TNode<Uint8T> LoadSmallOrderedHashSetNumberOfElements_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashSet> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=28&c=3
void StoreSmallOrderedHashSetNumberOfElements_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashSet> p_o, TNode<Uint8T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=29&c=3
TNode<Uint8T> LoadSmallOrderedHashSetNumberOfDeletedElements_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashSet> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=29&c=3
void StoreSmallOrderedHashSetNumberOfDeletedElements_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashSet> p_o, TNode<Uint8T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=30&c=9
TNode<Uint8T> LoadSmallOrderedHashSetNumberOfBuckets_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashSet> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=32&c=31
TorqueStructSlice_uint8_MutableReference_uint8_0 FieldSliceSmallOrderedHashSetPadding_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashSet> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=32&c=31
TNode<Uint8T> LoadSmallOrderedHashSetPadding_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=32&c=31
void StoreSmallOrderedHashSetPadding_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=33&c=3
TorqueStructSlice_JSReceiver_OR_Undefined_OR_Null_OR_False_OR_True_OR_Symbol_OR_String_OR_BigInt_OR_HeapNumber_OR_Smi_OR_TheHole_MutableReference_JSReceiver_OR_Undefined_OR_Null_OR_False_OR_True_OR_Symbol_OR_String_OR_BigInt_OR_HeapNumber_OR_Smi_OR_TheHole_0 FieldSliceSmallOrderedHashSetDataTable_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashSet> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=33&c=3
TNode<Object> LoadSmallOrderedHashSetDataTable_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=33&c=3
void StoreSmallOrderedHashSetDataTable_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=35&c=3
TorqueStructSlice_uint8_MutableReference_uint8_0 FieldSliceSmallOrderedHashSetHashTable_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashSet> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=35&c=3
TNode<Uint8T> LoadSmallOrderedHashSetHashTable_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=35&c=3
void StoreSmallOrderedHashSetHashTable_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=36&c=3
TorqueStructSlice_uint8_MutableReference_uint8_0 FieldSliceSmallOrderedHashSetChainTable_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashSet> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=36&c=3
TNode<Uint8T> LoadSmallOrderedHashSetChainTable_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=36&c=3
void StoreSmallOrderedHashSetChainTable_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=67&c=3
TNode<Uint8T> LoadSmallOrderedHashMapNumberOfElements_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashMap> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=67&c=3
void StoreSmallOrderedHashMapNumberOfElements_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashMap> p_o, TNode<Uint8T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=68&c=3
TNode<Uint8T> LoadSmallOrderedHashMapNumberOfDeletedElements_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashMap> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=68&c=3
void StoreSmallOrderedHashMapNumberOfDeletedElements_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashMap> p_o, TNode<Uint8T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=69&c=9
TNode<Uint8T> LoadSmallOrderedHashMapNumberOfBuckets_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashMap> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=71&c=31
TorqueStructSlice_uint8_MutableReference_uint8_0 FieldSliceSmallOrderedHashMapPadding_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashMap> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=71&c=31
TNode<Uint8T> LoadSmallOrderedHashMapPadding_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashMap> p_o, TNode<IntPtrT> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=71&c=31
void StoreSmallOrderedHashMapPadding_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashMap> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=72&c=3
TorqueStructSlice_HashMapEntry_MutableReference_HashMapEntry_0 FieldSliceSmallOrderedHashMapDataTable_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashMap> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=74&c=3
TorqueStructSlice_uint8_MutableReference_uint8_0 FieldSliceSmallOrderedHashMapHashTable_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashMap> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=74&c=3
TNode<Uint8T> LoadSmallOrderedHashMapHashTable_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashMap> p_o, TNode<IntPtrT> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=74&c=3
void StoreSmallOrderedHashMapHashTable_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashMap> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=75&c=3
TorqueStructSlice_uint8_MutableReference_uint8_0 FieldSliceSmallOrderedHashMapChainTable_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashMap> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=75&c=3
TNode<Uint8T> LoadSmallOrderedHashMapChainTable_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashMap> p_o, TNode<IntPtrT> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=75&c=3
void StoreSmallOrderedHashMapChainTable_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedHashMap> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=104&c=3
TNode<Int32T> LoadSmallOrderedNameDictionaryHash_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedNameDictionary> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=104&c=3
void StoreSmallOrderedNameDictionaryHash_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedNameDictionary> p_o, TNode<Int32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=107&c=3
TNode<Uint8T> LoadSmallOrderedNameDictionaryNumberOfElements_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedNameDictionary> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=107&c=3
void StoreSmallOrderedNameDictionaryNumberOfElements_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedNameDictionary> p_o, TNode<Uint8T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=108&c=3
TNode<Uint8T> LoadSmallOrderedNameDictionaryNumberOfDeletedElements_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedNameDictionary> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=108&c=3
void StoreSmallOrderedNameDictionaryNumberOfDeletedElements_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedNameDictionary> p_o, TNode<Uint8T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=109&c=9
TNode<Uint8T> LoadSmallOrderedNameDictionaryNumberOfBuckets_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedNameDictionary> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=111&c=31
TorqueStructSlice_uint8_MutableReference_uint8_0 FieldSliceSmallOrderedNameDictionaryPadding1_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedNameDictionary> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=111&c=31
TNode<Uint8T> LoadSmallOrderedNameDictionaryPadding1_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedNameDictionary> p_o, TNode<IntPtrT> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=111&c=31
void StoreSmallOrderedNameDictionaryPadding1_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedNameDictionary> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=112&c=3
TorqueStructSlice_NameDictionaryEntry_MutableReference_NameDictionaryEntry_0 FieldSliceSmallOrderedNameDictionaryDataTable_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedNameDictionary> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=114&c=3
TorqueStructSlice_uint8_MutableReference_uint8_0 FieldSliceSmallOrderedNameDictionaryHashTable_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedNameDictionary> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=114&c=3
TNode<Uint8T> LoadSmallOrderedNameDictionaryHashTable_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedNameDictionary> p_o, TNode<IntPtrT> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=114&c=3
void StoreSmallOrderedNameDictionaryHashTable_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedNameDictionary> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=115&c=3
TorqueStructSlice_uint8_MutableReference_uint8_0 FieldSliceSmallOrderedNameDictionaryChainTable_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedNameDictionary> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=115&c=3
TNode<Uint8T> LoadSmallOrderedNameDictionaryChainTable_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedNameDictionary> p_o, TNode<IntPtrT> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=115&c=3
void StoreSmallOrderedNameDictionaryChainTable_0(compiler::CodeAssemblerState* state_, TNode<SmallOrderedNameDictionary> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=17&c=1
TNode<HeapObject> DownCastForTorqueClass_SmallOrderedHashTable_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=26&c=1
TNode<SmallOrderedHashSet> DownCastForTorqueClass_SmallOrderedHashSet_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=50&c=17
TorqueStructConstantIterator_uint8_0 ConstantIterator_uint8_0(compiler::CodeAssemblerState* state_, TNode<Uint8T> p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=45&c=10
void InitializeFieldsFromIterator_uint8_ConstantIterator_uint8_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_uint8_MutableReference_uint8_0 p_target, TorqueStructConstantIterator_uint8_0 p_originIterator);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=45&c=10
void InitializeFieldsFromIterator_JSReceiver_OR_Undefined_OR_Null_OR_False_OR_True_OR_Symbol_OR_String_OR_BigInt_OR_HeapNumber_OR_Smi_OR_TheHole_ConstantIterator_TheHole_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_JSReceiver_OR_Undefined_OR_Null_OR_False_OR_True_OR_Symbol_OR_String_OR_BigInt_OR_HeapNumber_OR_Smi_OR_TheHole_MutableReference_JSReceiver_OR_Undefined_OR_Null_OR_False_OR_True_OR_Symbol_OR_String_OR_BigInt_OR_HeapNumber_OR_Smi_OR_TheHole_0 p_target, TorqueStructConstantIterator_TheHole_0 p_originIterator);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=65&c=1
TNode<SmallOrderedHashMap> DownCastForTorqueClass_SmallOrderedHashMap_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=90&c=20
TorqueStructConstantIterator_HashMapEntry_0 ConstantIterator_HashMapEntry_0(compiler::CodeAssemblerState* state_, TorqueStructHashMapEntry_0 p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=84&c=10
void InitializeFieldsFromIterator_HashMapEntry_ConstantIterator_HashMapEntry_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_HashMapEntry_MutableReference_HashMapEntry_0 p_target, TorqueStructConstantIterator_HashMapEntry_0 p_originIterator);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=102&c=1
TNode<SmallOrderedNameDictionary> DownCastForTorqueClass_SmallOrderedNameDictionary_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=33&c=3
TorqueStructSlice_JSReceiver_OR_Undefined_OR_Null_OR_False_OR_True_OR_Symbol_OR_String_OR_BigInt_OR_HeapNumber_OR_Smi_OR_TheHole_MutableReference_JSReceiver_OR_Undefined_OR_Null_OR_False_OR_True_OR_Symbol_OR_String_OR_BigInt_OR_HeapNumber_OR_Smi_OR_TheHole_0 NewMutableSlice_JSReceiver_OR_Undefined_OR_Null_OR_False_OR_True_OR_Symbol_OR_String_OR_BigInt_OR_HeapNumber_OR_Smi_OR_TheHole_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset, TNode<IntPtrT> p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=72&c=3
TorqueStructSlice_HashMapEntry_MutableReference_HashMapEntry_0 NewMutableSlice_HashMapEntry_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset, TNode<IntPtrT> p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=112&c=3
TorqueStructSlice_NameDictionaryEntry_MutableReference_NameDictionaryEntry_0 NewMutableSlice_NameDictionaryEntry_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset, TNode<IntPtrT> p_length);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_ORDERED_HASH_TABLE_TQ_CSA_H_
