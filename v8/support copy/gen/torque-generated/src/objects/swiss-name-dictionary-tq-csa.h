#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_SWISS_NAME_DICTIONARY_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_SWISS_NAME_DICTIONARY_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=7&c=1
TNode<SwissNameDictionary> Cast_SwissNameDictionary_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=64&c=1
TNode<IntPtrT> SwissNameDictionaryCapacityFor_0(compiler::CodeAssemblerState* state_, TNode<IntPtrT> p_atLeastSpaceFor);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=85&c=1
TNode<IntPtrT> SwissNameDictionaryMaxUsableCapacity_0(compiler::CodeAssemblerState* state_, TNode<IntPtrT> p_capacity);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=97&c=1
TNode<IntPtrT> SwissNameDictionarySizeFor_0(compiler::CodeAssemblerState* state_, TNode<IntPtrT> p_capacity);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=107&c=1
TNode<IntPtrT> SwissNameDictionaryMetaTableSizePerEntryFor_0(compiler::CodeAssemblerState* state_, TNode<IntPtrT> p_capacity);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=119&c=1
TNode<IntPtrT> SwissNameDictionaryMetaTableSizeFor_0(compiler::CodeAssemblerState* state_, TNode<IntPtrT> p_capacity);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=136&c=1
TNode<IntPtrT> SwissNameDictionaryDataTableStartOffsetMT_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=141&c=1
TNode<IntPtrT> SwissNameDictionaryCtrlTableStartOffsetMT_0(compiler::CodeAssemblerState* state_, TNode<IntPtrT> p_capacity);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=147&c=1
TorqueStructProbeSequence_0 Probe_0(compiler::CodeAssemblerState* state_, TNode<Uint32T> p_hash, TNode<Uint32T> p_mask);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=250&c=1
void SwissNameDictionaryDelete_0(compiler::CodeAssemblerState* state_, TNode<SwissNameDictionary> p_table, TNode<IntPtrT> p_entry, compiler::CodeAssemblerLabel* label_Shrunk, compiler::TypedCodeAssemblerVariable<SwissNameDictionary>* label_Shrunk_parameter_0);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=279&c=1
void SwissNameDictionaryFindEntrySIMD_0(compiler::CodeAssemblerState* state_, TNode<SwissNameDictionary> p_table, TNode<Name> p_key, compiler::CodeAssemblerLabel* label_Found, compiler::TypedCodeAssemblerVariable<IntPtrT>* label_Found_parameter_0, compiler::CodeAssemblerLabel* label_NotFound);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=286&c=1
void SwissNameDictionaryFindEntryPortable_0(compiler::CodeAssemblerState* state_, TNode<SwissNameDictionary> p_table, TNode<Name> p_key, compiler::CodeAssemblerLabel* label_Found, compiler::TypedCodeAssemblerVariable<IntPtrT>* label_Found_parameter_0, compiler::CodeAssemblerLabel* label_NotFound);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=302&c=1
void SwissNameDictionaryAddSIMD_0(compiler::CodeAssemblerState* state_, TNode<SwissNameDictionary> p_table, TNode<Name> p_key, TNode<Object> p_value, TNode<Uint8T> p_propertyDetails, compiler::CodeAssemblerLabel* label_Bailout);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=310&c=1
void SwissNameDictionaryAddPortable_0(compiler::CodeAssemblerState* state_, TNode<SwissNameDictionary> p_table, TNode<Name> p_key, TNode<Object> p_value, TNode<Uint8T> p_propertyDetails, compiler::CodeAssemblerLabel* label_Bailout);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=9&c=3
TNode<Uint32T> LoadSwissNameDictionaryHash_0(compiler::CodeAssemblerState* state_, TNode<SwissNameDictionary> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=9&c=3
void StoreSwissNameDictionaryHash_0(compiler::CodeAssemblerState* state_, TNode<SwissNameDictionary> p_o, TNode<Uint32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=10&c=9
TNode<Int32T> LoadSwissNameDictionaryCapacity_0(compiler::CodeAssemblerState* state_, TNode<SwissNameDictionary> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=11&c=3
TNode<ByteArray> LoadSwissNameDictionaryMetaTable_0(compiler::CodeAssemblerState* state_, TNode<SwissNameDictionary> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=11&c=3
void StoreSwissNameDictionaryMetaTable_0(compiler::CodeAssemblerState* state_, TNode<SwissNameDictionary> p_o, TNode<ByteArray> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=12&c=3
TorqueStructSlice_JSReceiver_OR_Undefined_OR_Null_OR_False_OR_True_OR_Symbol_OR_String_OR_BigInt_OR_HeapNumber_OR_Smi_OR_TheHole_MutableReference_JSReceiver_OR_Undefined_OR_Null_OR_False_OR_True_OR_Symbol_OR_String_OR_BigInt_OR_HeapNumber_OR_Smi_OR_TheHole_0 FieldSliceSwissNameDictionaryDataTable_0(compiler::CodeAssemblerState* state_, TNode<SwissNameDictionary> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=12&c=3
TNode<Object> LoadSwissNameDictionaryDataTable_0(compiler::CodeAssemblerState* state_, TNode<SwissNameDictionary> p_o, TNode<IntPtrT> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=12&c=3
void StoreSwissNameDictionaryDataTable_0(compiler::CodeAssemblerState* state_, TNode<SwissNameDictionary> p_o, TNode<IntPtrT> p_i, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=13&c=3
TorqueStructSlice_uint8_MutableReference_uint8_0 FieldSliceSwissNameDictionaryCtrlTable_0(compiler::CodeAssemblerState* state_, TNode<SwissNameDictionary> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=13&c=3
TNode<Uint8T> LoadSwissNameDictionaryCtrlTable_0(compiler::CodeAssemblerState* state_, TNode<SwissNameDictionary> p_o, TNode<IntPtrT> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=13&c=3
void StoreSwissNameDictionaryCtrlTable_0(compiler::CodeAssemblerState* state_, TNode<SwissNameDictionary> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=14&c=3
TorqueStructSlice_uint8_MutableReference_uint8_0 FieldSliceSwissNameDictionaryPropertyDetailsTable_0(compiler::CodeAssemblerState* state_, TNode<SwissNameDictionary> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=14&c=3
TNode<Uint8T> LoadSwissNameDictionaryPropertyDetailsTable_0(compiler::CodeAssemblerState* state_, TNode<SwissNameDictionary> p_o, TNode<IntPtrT> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=14&c=3
void StoreSwissNameDictionaryPropertyDetailsTable_0(compiler::CodeAssemblerState* state_, TNode<SwissNameDictionary> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=7&c=1
TNode<SwissNameDictionary> DownCastForTorqueClass_SwissNameDictionary_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=282&c=3
void FindEntry_GroupSse2Loader_0(compiler::CodeAssemblerState* state_, TNode<SwissNameDictionary> p_table, TNode<Name> p_key, compiler::CodeAssemblerLabel* label_Found, compiler::TypedCodeAssemblerVariable<IntPtrT>* label_Found_parameter_0, compiler::CodeAssemblerLabel* label_NotFound);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=291&c=3
void FindEntry_GroupPortableLoader_0(compiler::CodeAssemblerState* state_, TNode<SwissNameDictionary> p_table, TNode<Name> p_key, compiler::CodeAssemblerLabel* label_Found, compiler::TypedCodeAssemblerVariable<IntPtrT>* label_Found_parameter_0, compiler::CodeAssemblerLabel* label_NotFound);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=306&c=3
void Add_GroupSse2Loader_0(compiler::CodeAssemblerState* state_, TNode<SwissNameDictionary> p_table, TNode<Name> p_key, TNode<Object> p_value, TNode<Uint8T> p_propertyDetails, compiler::CodeAssemblerLabel* label_Bailout);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=314&c=3
void Add_GroupPortableLoader_0(compiler::CodeAssemblerState* state_, TNode<SwissNameDictionary> p_table, TNode<Name> p_key, TNode<Object> p_value, TNode<Uint8T> p_propertyDetails, compiler::CodeAssemblerLabel* label_Bailout);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=232&c=24
TNode<Int32T> FindFirstEmpty_GroupSse2Loader_0(compiler::CodeAssemblerState* state_, TNode<SwissNameDictionary> p_table, TNode<IntPtrT> p_capacity, TNode<Uint32T> p_hash);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=232&c=24
TNode<Int32T> FindFirstEmpty_GroupPortableLoader_0(compiler::CodeAssemblerState* state_, TNode<SwissNameDictionary> p_table, TNode<IntPtrT> p_capacity, TNode<Uint32T> p_hash);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_SWISS_NAME_DICTIONARY_TQ_CSA_H_
