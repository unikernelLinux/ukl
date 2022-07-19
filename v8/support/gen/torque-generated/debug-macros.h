#ifndef V8_GEN_TORQUE_GENERATED_DEBUG_MACROS_H_
#define V8_GEN_TORQUE_GENERATED_DEBUG_MACROS_H_

#include "tools/debug_helper/debug-helper-internal.h"
#include "src/numbers/integer-literal.h"

namespace v8 {
namespace internal {
namespace debug_helper_internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=14&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceContextElements(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=13&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceFixedArrayObjects(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=25&c=19
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceWeakFixedArrayObjects(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=81&c=19
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSloppyArgumentsElementsMappedEntries(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=124&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceScopeInfoContextLocalNames(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=129&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceScopeInfoContextLocalNamesHashtable(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=135&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceScopeInfoContextLocalInfos(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=141&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceScopeInfoSavedClassVariableInfo(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=147&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceScopeInfoFunctionVariableInfo(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=152&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceScopeInfoInferredFunctionName(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=156&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceScopeInfoPositionInfo(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=164&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceScopeInfoOuterScopeInfo(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=169&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceScopeInfoLocalsBlockList(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=174&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceScopeInfoModuleInfo(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=176&c=9
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceScopeInfoModuleVariableCount(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=178&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceScopeInfoModuleVariables(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=19&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceFixedDoubleArrayFloats(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=68&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceCoverageInfoSlots(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=25&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceDescriptorArrayDescriptors(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=31&c=19
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceFeedbackVectorRawFeedbackSlots(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=49
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceByteArrayBytes(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=44&c=19
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceWeakArrayListObjects(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=32&c=31
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSmallOrderedHashSetPadding(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=33&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSmallOrderedHashSetDataTable(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=35&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSmallOrderedHashSetHashTable(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=36&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSmallOrderedHashSetChainTable(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=71&c=31
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSmallOrderedHashMapPadding(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=72&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSmallOrderedHashMapDataTable(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=74&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSmallOrderedHashMapHashTable(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=75&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSmallOrderedHashMapChainTable(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=111&c=31
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSmallOrderedNameDictionaryPadding1(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=112&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSmallOrderedNameDictionaryDataTable(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=114&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSmallOrderedNameDictionaryHashTable(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=115&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSmallOrderedNameDictionaryChainTable(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=109&c=9
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSeqOneByteStringChars(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=114&c=9
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSeqTwoByteStringChars(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=12&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSwissNameDictionaryDataTable(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=13&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSwissNameDictionaryCtrlTable(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=14&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSwissNameDictionaryPropertyDetailsTable(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1194&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceInternalClassWithSmiElementsEntries(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1208&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceInternalClassWithStructElementsEntries(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1209&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceInternalClassWithStructElementsMoreEntries(d::MemoryAccessor accessor, uintptr_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=69&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_int31_0(d::MemoryAccessor accessor, int31_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=283&c=1
Value<intptr_t> TqDebugConvert_intptr_Smi_0(d::MemoryAccessor accessor, uintptr_t p_s);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(d::MemoryAccessor accessor, IntegerLiteral p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=14&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_Object_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=69&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_int31_0(d::MemoryAccessor accessor, int31_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=283&c=1
Value<intptr_t> TqDebugConvert_intptr_Smi_0(d::MemoryAccessor accessor, uintptr_t p_s);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(d::MemoryAccessor accessor, IntegerLiteral p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=14&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_Object_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=25&c=19
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_MaybeObject_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=69&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_int31_0(d::MemoryAccessor accessor, int31_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=283&c=1
Value<intptr_t> TqDebugConvert_intptr_Smi_0(d::MemoryAccessor accessor, uintptr_t p_s);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(d::MemoryAccessor accessor, IntegerLiteral p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=81&c=19
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_Smi_OR_TheHole_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=69&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_int31_0(d::MemoryAccessor accessor, int31_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=283&c=1
Value<intptr_t> TqDebugConvert_intptr_Smi_0(d::MemoryAccessor accessor, uintptr_t p_s);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=72&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_int32_0(d::MemoryAccessor accessor, int32_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=52&c=1
Value<uintptr_t> TqDebugFromConstexpr_Smi_constexpr_IntegerLiteral_0(d::MemoryAccessor accessor, IntegerLiteral p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(d::MemoryAccessor accessor, IntegerLiteral p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=124&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_String_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-string.tq?l=188&c=26
Value<intptr_t> TqDebugConvert_intptr_intptr_0(d::MemoryAccessor accessor, intptr_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=129&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_NameToIndexHashTable_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=135&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_SmiTagged_VariableProperties_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=141&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_Smi_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=23&c=1
Value<uint32_t> TqDebugFromConstexpr_VariableAllocationInfo_constexpr_NONE_0(d::MemoryAccessor accessor, VariableAllocationInfo p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=147&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_FunctionVariableInfo_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=152&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_Undefined_OR_String_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=129&c=1
Value<uint32_t> TqDebugFromConstexpr_uint32_constexpr_uint32_0(d::MemoryAccessor accessor, uint32_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=150&c=1
Value<bool> TqDebugFromConstexpr_bool_constexpr_bool_0(d::MemoryAccessor accessor, bool p_b);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=156&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_PositionInfo_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=164&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_TheHole_OR_ScopeInfo_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=169&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_HashTable_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=174&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_SourceTextModuleInfo_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=176&c=9
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewConstSlice_Smi_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/torque-internal.tq?l=113&c=23
Value<intptr_t> TqDebugConvert_intptr_constexpr_int31_0(d::MemoryAccessor accessor, int31_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=366&c=1
Value<uintptr_t> TqDebugConvert_uintptr_intptr_0(d::MemoryAccessor accessor, intptr_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/torque-internal.tq?l=97&c=36
Value<intptr_t> TqDebugTimesSizeOf_Smi_0(d::MemoryAccessor accessor, intptr_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/torque-internal.tq?l=96&c=12
Value<std::tuple<uintptr_t, intptr_t>> TqDebugNewReference_Smi_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=178&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_ModuleVariable_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=19&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_float64_or_hole_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=69&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_int31_0(d::MemoryAccessor accessor, int31_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=203&c=1
Value<intptr_t> TqDebugConvert_intptr_int32_0(d::MemoryAccessor accessor, int32_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(d::MemoryAccessor accessor, IntegerLiteral p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=68&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_CoverageInfoSlot_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=69&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_int31_0(d::MemoryAccessor accessor, int31_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=227&c=1
Value<intptr_t> TqDebugConvert_intptr_uint16_0(d::MemoryAccessor accessor, uint16_t p_ui);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(d::MemoryAccessor accessor, IntegerLiteral p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=25&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_DescriptorEntry_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=69&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_int31_0(d::MemoryAccessor accessor, int31_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=203&c=1
Value<intptr_t> TqDebugConvert_intptr_int32_0(d::MemoryAccessor accessor, int32_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(d::MemoryAccessor accessor, IntegerLiteral p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=25&c=19
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_MaybeObject_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=49
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_uint8_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=554&c=47
Value<intptr_t> TqDebugConvert_intptr_constexpr_IntegerLiteral_0(d::MemoryAccessor accessor, IntegerLiteral p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(d::MemoryAccessor accessor, IntegerLiteral p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=49
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_uint8_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=69&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_int31_0(d::MemoryAccessor accessor, int31_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=230&c=1
Value<intptr_t> TqDebugConvert_intptr_uint8_0(d::MemoryAccessor accessor, uint8_t p_ui);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-string.tq?l=188&c=26
Value<intptr_t> TqDebugConvert_intptr_intptr_0(d::MemoryAccessor accessor, intptr_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=33&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_JSReceiver_OR_Undefined_OR_Null_OR_False_OR_True_OR_Symbol_OR_String_OR_BigInt_OR_HeapNumber_OR_Smi_OR_TheHole_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=72&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_HashMapEntry_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=112&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_NameDictionaryEntry_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=69&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_int31_0(d::MemoryAccessor accessor, int31_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=203&c=1
Value<intptr_t> TqDebugConvert_intptr_int32_0(d::MemoryAccessor accessor, int32_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(d::MemoryAccessor accessor, IntegerLiteral p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=109&c=9
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewConstSlice_char8_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=114&c=9
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewConstSlice_char16_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=69&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_int31_0(d::MemoryAccessor accessor, int31_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=203&c=1
Value<intptr_t> TqDebugConvert_intptr_int32_0(d::MemoryAccessor accessor, int32_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(d::MemoryAccessor accessor, IntegerLiteral p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-string.tq?l=188&c=26
Value<intptr_t> TqDebugConvert_intptr_intptr_0(d::MemoryAccessor accessor, intptr_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=33&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_JSReceiver_OR_Undefined_OR_Null_OR_False_OR_True_OR_Symbol_OR_String_OR_BigInt_OR_HeapNumber_OR_Smi_OR_TheHole_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=72&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_int32_0(d::MemoryAccessor accessor, int32_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=49
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_uint8_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=69&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_int31_0(d::MemoryAccessor accessor, int31_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=283&c=1
Value<intptr_t> TqDebugConvert_intptr_Smi_0(d::MemoryAccessor accessor, uintptr_t p_s);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(d::MemoryAccessor accessor, IntegerLiteral p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=141&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_Smi_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1209&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_InternalClassStructElement_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=75&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_intptr_0(d::MemoryAccessor accessor, intptr_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=75&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_intptr_0(d::MemoryAccessor accessor, intptr_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=75&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_intptr_0(d::MemoryAccessor accessor, intptr_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=53&c=10
Value<uintptr_t> TqDebugConvert_Smi_constexpr_int31_0(d::MemoryAccessor accessor, int31_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=75&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_intptr_0(d::MemoryAccessor accessor, intptr_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=75&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_intptr_0(d::MemoryAccessor accessor, intptr_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=75&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_intptr_0(d::MemoryAccessor accessor, intptr_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=75&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_intptr_0(d::MemoryAccessor accessor, intptr_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=75&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_intptr_0(d::MemoryAccessor accessor, intptr_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=75&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_intptr_0(d::MemoryAccessor accessor, intptr_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=75&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_intptr_0(d::MemoryAccessor accessor, intptr_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=75&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_intptr_0(d::MemoryAccessor accessor, intptr_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=81&c=1
Value<uintptr_t> TqDebugFromConstexpr_Smi_constexpr_int31_0(d::MemoryAccessor accessor, int31_t p_i);


}  // namespace internal
}  // namespace v8
}  // namespace debug_helper_internal

#endif  // V8_GEN_TORQUE_GENERATED_DEBUG_MACROS_H_
