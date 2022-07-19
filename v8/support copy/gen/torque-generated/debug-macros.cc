#include "torque-generated/debug-macros.h"

#include "src/objects/swiss-name-dictionary.h"
#include "src/objects/ordered-hash-table.h"
#include "tools/debug_helper/debug-macro-shims.h"
#include "include/v8-internal.h"

namespace v8 {
namespace internal {
namespace debug_helper_internal {

#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceContextElements
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceContextElements

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=14&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceContextElements(d::MemoryAccessor accessor, uintptr_t p_o) {
  intptr_t tmp0{}; USE(tmp0);
  uintptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  uintptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 4));
  READ_TAGGED_FIELD_OR_FAIL(tmp1, accessor, p_o, static_cast<int>(tmp0));
  ASSIGN_OR_RETURN(tmp2, TqDebugConvert_intptr_Smi_0(accessor, tmp1));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x8ull)));
  ASSIGN_OR_RETURN(std::tie(tmp4, tmp5, tmp6), TqDebugNewMutableSlice_Object_0(accessor, p_o, tmp3, tmp2));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp4, tmp5, tmp6)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceContextElements
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceFixedArrayObjects
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceFixedArrayObjects

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=13&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceFixedArrayObjects(d::MemoryAccessor accessor, uintptr_t p_o) {
  intptr_t tmp0{}; USE(tmp0);
  uintptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  uintptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 4));
  READ_TAGGED_FIELD_OR_FAIL(tmp1, accessor, p_o, static_cast<int>(tmp0));
  ASSIGN_OR_RETURN(tmp2, TqDebugConvert_intptr_Smi_0(accessor, tmp1));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x8ull)));
  ASSIGN_OR_RETURN(std::tie(tmp4, tmp5, tmp6), TqDebugNewMutableSlice_Object_0(accessor, p_o, tmp3, tmp2));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp4, tmp5, tmp6)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceFixedArrayObjects
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceWeakFixedArrayObjects
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceWeakFixedArrayObjects

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=25&c=19
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceWeakFixedArrayObjects(d::MemoryAccessor accessor, uintptr_t p_o) {
  intptr_t tmp0{}; USE(tmp0);
  uintptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  uintptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 4));
  READ_TAGGED_FIELD_OR_FAIL(tmp1, accessor, p_o, static_cast<int>(tmp0));
  ASSIGN_OR_RETURN(tmp2, TqDebugConvert_intptr_Smi_0(accessor, tmp1));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x8ull)));
  ASSIGN_OR_RETURN(std::tie(tmp4, tmp5, tmp6), TqDebugNewMutableSlice_MaybeObject_0(accessor, p_o, tmp3, tmp2));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp4, tmp5, tmp6)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceWeakFixedArrayObjects
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceSloppyArgumentsElementsMappedEntries
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceSloppyArgumentsElementsMappedEntries

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=81&c=19
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSloppyArgumentsElementsMappedEntries(d::MemoryAccessor accessor, uintptr_t p_o) {
  intptr_t tmp0{}; USE(tmp0);
  uintptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  uintptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 4));
  READ_TAGGED_FIELD_OR_FAIL(tmp1, accessor, p_o, static_cast<int>(tmp0));
  ASSIGN_OR_RETURN(tmp2, TqDebugConvert_intptr_Smi_0(accessor, tmp1));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x10ull)));
  ASSIGN_OR_RETURN(std::tie(tmp4, tmp5, tmp6), TqDebugNewMutableSlice_Smi_OR_TheHole_0(accessor, p_o, tmp3, tmp2));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp4, tmp5, tmp6)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceSloppyArgumentsElementsMappedEntries
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoContextLocalNames
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoContextLocalNames

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=124&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceScopeInfoContextLocalNames(d::MemoryAccessor accessor, uintptr_t p_o) {
  intptr_t tmp0{}; USE(tmp0);
  uintptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  bool tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  uintptr_t tmp6{}; USE(tmp6);
  uintptr_t tmp7{}; USE(tmp7);
  uintptr_t phi_bb4_4{}; USE(phi_bb4_4);
  intptr_t tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  uintptr_t tmp10{}; USE(tmp10);
  intptr_t tmp11{}; USE(tmp11);
  intptr_t tmp12{}; USE(tmp12);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 12));
  READ_TAGGED_FIELD_OR_FAIL(tmp1, accessor, p_o, static_cast<int>(tmp0));
  ASSIGN_OR_RETURN(tmp2, TqDebugConvert_intptr_Smi_0(accessor, tmp1));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_int32_0(accessor, kScopeInfoMaxInlinedLocalNamesSize));
  ASSIGN_OR_RETURN(tmp4, TorqueDebugMacroShims::CodeStubAssembler::IntPtrLessThan(accessor, tmp2, tmp3));
  if (tmp4) {
    goto block2;
  } else {
    goto block3;
  }

  block2:
  ASSIGN_OR_RETURN(tmp5, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 12));
  READ_TAGGED_FIELD_OR_FAIL(tmp6, accessor, p_o, static_cast<int>(tmp5));
  phi_bb4_4 = tmp6;
  goto block4;

  block3:
  ASSIGN_OR_RETURN(tmp7, TqDebugFromConstexpr_Smi_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x0ull)));
  phi_bb4_4 = tmp7;
  goto block4;

  block4:
  ASSIGN_OR_RETURN(tmp8, TqDebugConvert_intptr_Smi_0(accessor, phi_bb4_4));
  ASSIGN_OR_RETURN(tmp9, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x10ull)));
  ASSIGN_OR_RETURN(std::tie(tmp10, tmp11, tmp12), TqDebugNewMutableSlice_String_0(accessor, p_o, tmp9, tmp8));
  goto block6;

  block6:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp10, tmp11, tmp12)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoContextLocalNames
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoContextLocalNamesHashtable
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoContextLocalNamesHashtable

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=129&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceScopeInfoContextLocalNamesHashtable(d::MemoryAccessor accessor, uintptr_t p_o) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  uintptr_t tmp7{}; USE(tmp7);
  intptr_t tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  bool tmp10{}; USE(tmp10);
  intptr_t tmp11{}; USE(tmp11);
  intptr_t tmp12{}; USE(tmp12);
  intptr_t phi_bb4_8{}; USE(phi_bb4_8);
  intptr_t tmp13{}; USE(tmp13);
  uintptr_t tmp14{}; USE(tmp14);
  intptr_t tmp15{}; USE(tmp15);
  intptr_t tmp16{}; USE(tmp16);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(std::tie(tmp0, tmp1, tmp2), TqDebugFieldSliceScopeInfoContextLocalNames(accessor, p_o));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x4ull)));
  ASSIGN_OR_RETURN(tmp4, TorqueDebugMacroShims::CodeStubAssembler::IntPtrMul(accessor, tmp3, tmp2));
  ASSIGN_OR_RETURN(tmp5, TorqueDebugMacroShims::CodeStubAssembler::IntPtrAdd(accessor, tmp1, tmp4));
  ASSIGN_OR_RETURN(tmp6, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 12));
  READ_TAGGED_FIELD_OR_FAIL(tmp7, accessor, p_o, static_cast<int>(tmp6));
  ASSIGN_OR_RETURN(tmp8, TqDebugConvert_intptr_Smi_0(accessor, tmp7));
  ASSIGN_OR_RETURN(tmp9, TqDebugFromConstexpr_intptr_constexpr_int32_0(accessor, kScopeInfoMaxInlinedLocalNamesSize));
  ASSIGN_OR_RETURN(tmp10, TorqueDebugMacroShims::CodeStubAssembler::IntPtrLessThanOrEqual(accessor, tmp9, tmp8));
  if (tmp10) {
    goto block2;
  } else {
    goto block3;
  }

  block2:
  ASSIGN_OR_RETURN(tmp11, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x1ull)));
  phi_bb4_8 = tmp11;
  goto block4;

  block3:
  ASSIGN_OR_RETURN(tmp12, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x0ull)));
  phi_bb4_8 = tmp12;
  goto block4;

  block4:
  ASSIGN_OR_RETURN(tmp13, TqDebugConvert_intptr_intptr_0(accessor, phi_bb4_8));
  ASSIGN_OR_RETURN(std::tie(tmp14, tmp15, tmp16), TqDebugNewMutableSlice_NameToIndexHashTable_0(accessor, p_o, tmp5, tmp13));
  goto block6;

  block6:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp14, tmp15, tmp16)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoContextLocalNamesHashtable
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoContextLocalInfos
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoContextLocalInfos

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=135&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceScopeInfoContextLocalInfos(d::MemoryAccessor accessor, uintptr_t p_o) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  uintptr_t tmp7{}; USE(tmp7);
  intptr_t tmp8{}; USE(tmp8);
  uintptr_t tmp9{}; USE(tmp9);
  intptr_t tmp10{}; USE(tmp10);
  intptr_t tmp11{}; USE(tmp11);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(std::tie(tmp0, tmp1, tmp2), TqDebugFieldSliceScopeInfoContextLocalNamesHashtable(accessor, p_o));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x4ull)));
  ASSIGN_OR_RETURN(tmp4, TorqueDebugMacroShims::CodeStubAssembler::IntPtrMul(accessor, tmp3, tmp2));
  ASSIGN_OR_RETURN(tmp5, TorqueDebugMacroShims::CodeStubAssembler::IntPtrAdd(accessor, tmp1, tmp4));
  ASSIGN_OR_RETURN(tmp6, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 12));
  READ_TAGGED_FIELD_OR_FAIL(tmp7, accessor, p_o, static_cast<int>(tmp6));
  ASSIGN_OR_RETURN(tmp8, TqDebugConvert_intptr_Smi_0(accessor, tmp7));
  ASSIGN_OR_RETURN(std::tie(tmp9, tmp10, tmp11), TqDebugNewMutableSlice_SmiTagged_VariableProperties_0(accessor, p_o, tmp5, tmp8));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp9, tmp10, tmp11)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoContextLocalInfos
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoSavedClassVariableInfo
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoSavedClassVariableInfo

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=141&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceScopeInfoSavedClassVariableInfo(d::MemoryAccessor accessor, uintptr_t p_o) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  uintptr_t tmp7{}; USE(tmp7);
  bool tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  intptr_t tmp10{}; USE(tmp10);
  intptr_t phi_bb4_8{}; USE(phi_bb4_8);
  intptr_t tmp11{}; USE(tmp11);
  uintptr_t tmp12{}; USE(tmp12);
  intptr_t tmp13{}; USE(tmp13);
  intptr_t tmp14{}; USE(tmp14);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(std::tie(tmp0, tmp1, tmp2), TqDebugFieldSliceScopeInfoContextLocalInfos(accessor, p_o));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x4ull)));
  ASSIGN_OR_RETURN(tmp4, TorqueDebugMacroShims::CodeStubAssembler::IntPtrMul(accessor, tmp3, tmp2));
  ASSIGN_OR_RETURN(tmp5, TorqueDebugMacroShims::CodeStubAssembler::IntPtrAdd(accessor, tmp1, tmp4));
  ASSIGN_OR_RETURN(tmp6, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 4));
  READ_TAGGED_FIELD_OR_FAIL(tmp7, accessor, p_o, static_cast<int>(tmp6));
  tmp8 = CastToUnderlyingTypeIfEnum(base::BitField<bool, 10, 1, uint32_t>::decode(Internals::SmiValue(tmp7)));
  if (tmp8) {
    goto block2;
  } else {
    goto block3;
  }

  block2:
  ASSIGN_OR_RETURN(tmp9, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x1ull)));
  phi_bb4_8 = tmp9;
  goto block4;

  block3:
  ASSIGN_OR_RETURN(tmp10, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x0ull)));
  phi_bb4_8 = tmp10;
  goto block4;

  block4:
  ASSIGN_OR_RETURN(tmp11, TqDebugConvert_intptr_intptr_0(accessor, phi_bb4_8));
  ASSIGN_OR_RETURN(std::tie(tmp12, tmp13, tmp14), TqDebugNewMutableSlice_Smi_0(accessor, p_o, tmp5, tmp11));
  goto block6;

  block6:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp12, tmp13, tmp14)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoSavedClassVariableInfo
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoFunctionVariableInfo
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoFunctionVariableInfo

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=147&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceScopeInfoFunctionVariableInfo(d::MemoryAccessor accessor, uintptr_t p_o) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  uintptr_t tmp7{}; USE(tmp7);
  uint32_t tmp8{}; USE(tmp8);
  uint32_t tmp9{}; USE(tmp9);
  bool tmp10{}; USE(tmp10);
  intptr_t tmp11{}; USE(tmp11);
  intptr_t tmp12{}; USE(tmp12);
  intptr_t phi_bb4_8{}; USE(phi_bb4_8);
  intptr_t tmp13{}; USE(tmp13);
  uintptr_t tmp14{}; USE(tmp14);
  intptr_t tmp15{}; USE(tmp15);
  intptr_t tmp16{}; USE(tmp16);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(std::tie(tmp0, tmp1, tmp2), TqDebugFieldSliceScopeInfoSavedClassVariableInfo(accessor, p_o));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x4ull)));
  ASSIGN_OR_RETURN(tmp4, TorqueDebugMacroShims::CodeStubAssembler::IntPtrMul(accessor, tmp3, tmp2));
  ASSIGN_OR_RETURN(tmp5, TorqueDebugMacroShims::CodeStubAssembler::IntPtrAdd(accessor, tmp1, tmp4));
  ASSIGN_OR_RETURN(tmp6, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 4));
  READ_TAGGED_FIELD_OR_FAIL(tmp7, accessor, p_o, static_cast<int>(tmp6));
  tmp8 = CastToUnderlyingTypeIfEnum(base::BitField<VariableAllocationInfo, 12, 2, uint32_t>::decode(Internals::SmiValue(tmp7)));
  ASSIGN_OR_RETURN(tmp9, TqDebugFromConstexpr_VariableAllocationInfo_constexpr_NONE_0(accessor, VariableAllocationInfo::NONE));
  ASSIGN_OR_RETURN(tmp10, TorqueDebugMacroShims::CodeStubAssembler::Word32NotEqual(accessor, tmp8, tmp9));
  if (tmp10) {
    goto block2;
  } else {
    goto block3;
  }

  block2:
  ASSIGN_OR_RETURN(tmp11, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x1ull)));
  phi_bb4_8 = tmp11;
  goto block4;

  block3:
  ASSIGN_OR_RETURN(tmp12, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x0ull)));
  phi_bb4_8 = tmp12;
  goto block4;

  block4:
  ASSIGN_OR_RETURN(tmp13, TqDebugConvert_intptr_intptr_0(accessor, phi_bb4_8));
  ASSIGN_OR_RETURN(std::tie(tmp14, tmp15, tmp16), TqDebugNewMutableSlice_FunctionVariableInfo_0(accessor, p_o, tmp5, tmp13));
  goto block6;

  block6:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp14, tmp15, tmp16)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoFunctionVariableInfo
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoInferredFunctionName
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoInferredFunctionName

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=152&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceScopeInfoInferredFunctionName(d::MemoryAccessor accessor, uintptr_t p_o) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  uintptr_t tmp7{}; USE(tmp7);
  bool tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  intptr_t tmp10{}; USE(tmp10);
  intptr_t phi_bb4_8{}; USE(phi_bb4_8);
  intptr_t tmp11{}; USE(tmp11);
  uintptr_t tmp12{}; USE(tmp12);
  intptr_t tmp13{}; USE(tmp13);
  intptr_t tmp14{}; USE(tmp14);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(std::tie(tmp0, tmp1, tmp2), TqDebugFieldSliceScopeInfoFunctionVariableInfo(accessor, p_o));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x8ull)));
  ASSIGN_OR_RETURN(tmp4, TorqueDebugMacroShims::CodeStubAssembler::IntPtrMul(accessor, tmp3, tmp2));
  ASSIGN_OR_RETURN(tmp5, TorqueDebugMacroShims::CodeStubAssembler::IntPtrAdd(accessor, tmp1, tmp4));
  ASSIGN_OR_RETURN(tmp6, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 4));
  READ_TAGGED_FIELD_OR_FAIL(tmp7, accessor, p_o, static_cast<int>(tmp6));
  tmp8 = CastToUnderlyingTypeIfEnum(base::BitField<bool, 14, 1, uint32_t>::decode(Internals::SmiValue(tmp7)));
  if (tmp8) {
    goto block2;
  } else {
    goto block3;
  }

  block2:
  ASSIGN_OR_RETURN(tmp9, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x1ull)));
  phi_bb4_8 = tmp9;
  goto block4;

  block3:
  ASSIGN_OR_RETURN(tmp10, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x0ull)));
  phi_bb4_8 = tmp10;
  goto block4;

  block4:
  ASSIGN_OR_RETURN(tmp11, TqDebugConvert_intptr_intptr_0(accessor, phi_bb4_8));
  ASSIGN_OR_RETURN(std::tie(tmp12, tmp13, tmp14), TqDebugNewMutableSlice_Undefined_OR_String_0(accessor, p_o, tmp5, tmp11));
  goto block6;

  block6:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp12, tmp13, tmp14)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoInferredFunctionName
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoPositionInfo
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoPositionInfo

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=156&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceScopeInfoPositionInfo(d::MemoryAccessor accessor, uintptr_t p_o) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  uintptr_t tmp7{}; USE(tmp7);
  uint32_t tmp8{}; USE(tmp8);
  uint32_t tmp9{}; USE(tmp9);
  bool tmp10{}; USE(tmp10);
  bool tmp11{}; USE(tmp11);
  intptr_t tmp12{}; USE(tmp12);
  uintptr_t tmp13{}; USE(tmp13);
  uint32_t tmp14{}; USE(tmp14);
  uint32_t tmp15{}; USE(tmp15);
  bool tmp16{}; USE(tmp16);
  bool phi_bb8_9{}; USE(phi_bb8_9);
  bool tmp17{}; USE(tmp17);
  intptr_t tmp18{}; USE(tmp18);
  uintptr_t tmp19{}; USE(tmp19);
  uint32_t tmp20{}; USE(tmp20);
  uint32_t tmp21{}; USE(tmp21);
  bool tmp22{}; USE(tmp22);
  bool phi_bb11_9{}; USE(phi_bb11_9);
  bool tmp23{}; USE(tmp23);
  intptr_t tmp24{}; USE(tmp24);
  uintptr_t tmp25{}; USE(tmp25);
  uint32_t tmp26{}; USE(tmp26);
  uint32_t tmp27{}; USE(tmp27);
  bool tmp28{}; USE(tmp28);
  bool phi_bb14_9{}; USE(phi_bb14_9);
  bool tmp29{}; USE(tmp29);
  intptr_t tmp30{}; USE(tmp30);
  uintptr_t tmp31{}; USE(tmp31);
  bool tmp32{}; USE(tmp32);
  bool tmp33{}; USE(tmp33);
  intptr_t tmp34{}; USE(tmp34);
  uintptr_t tmp35{}; USE(tmp35);
  uint32_t tmp36{}; USE(tmp36);
  uint32_t tmp37{}; USE(tmp37);
  bool tmp38{}; USE(tmp38);
  bool phi_bb20_9{}; USE(phi_bb20_9);
  bool phi_bb17_9{}; USE(phi_bb17_9);
  intptr_t tmp39{}; USE(tmp39);
  intptr_t tmp40{}; USE(tmp40);
  intptr_t phi_bb4_8{}; USE(phi_bb4_8);
  intptr_t tmp41{}; USE(tmp41);
  uintptr_t tmp42{}; USE(tmp42);
  intptr_t tmp43{}; USE(tmp43);
  intptr_t tmp44{}; USE(tmp44);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(std::tie(tmp0, tmp1, tmp2), TqDebugFieldSliceScopeInfoInferredFunctionName(accessor, p_o));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x4ull)));
  ASSIGN_OR_RETURN(tmp4, TorqueDebugMacroShims::CodeStubAssembler::IntPtrMul(accessor, tmp3, tmp2));
  ASSIGN_OR_RETURN(tmp5, TorqueDebugMacroShims::CodeStubAssembler::IntPtrAdd(accessor, tmp1, tmp4));
  ASSIGN_OR_RETURN(tmp6, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 4));
  READ_TAGGED_FIELD_OR_FAIL(tmp7, accessor, p_o, static_cast<int>(tmp6));
  tmp8 = CastToUnderlyingTypeIfEnum(base::BitField<ScopeType, 0, 4, uint32_t>::decode(Internals::SmiValue(tmp7)));
  ASSIGN_OR_RETURN(tmp9, TqDebugFromConstexpr_uint32_constexpr_uint32_0(accessor, ScopeType::FUNCTION_SCOPE));
  ASSIGN_OR_RETURN(tmp10, TorqueDebugMacroShims::CodeStubAssembler::Word32Equal(accessor, tmp8, tmp9));
  if (tmp10) {
    goto block6;
  } else {
    goto block7;
  }

  block6:
  ASSIGN_OR_RETURN(tmp11, TqDebugFromConstexpr_bool_constexpr_bool_0(accessor, true));
  phi_bb8_9 = tmp11;
  goto block8;

  block7:
  ASSIGN_OR_RETURN(tmp12, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 4));
  READ_TAGGED_FIELD_OR_FAIL(tmp13, accessor, p_o, static_cast<int>(tmp12));
  tmp14 = CastToUnderlyingTypeIfEnum(base::BitField<ScopeType, 0, 4, uint32_t>::decode(Internals::SmiValue(tmp13)));
  ASSIGN_OR_RETURN(tmp15, TqDebugFromConstexpr_uint32_constexpr_uint32_0(accessor, ScopeType::SCRIPT_SCOPE));
  ASSIGN_OR_RETURN(tmp16, TorqueDebugMacroShims::CodeStubAssembler::Word32Equal(accessor, tmp14, tmp15));
  phi_bb8_9 = tmp16;
  goto block8;

  block8:
  if (phi_bb8_9) {
    goto block9;
  } else {
    goto block10;
  }

  block9:
  ASSIGN_OR_RETURN(tmp17, TqDebugFromConstexpr_bool_constexpr_bool_0(accessor, true));
  phi_bb11_9 = tmp17;
  goto block11;

  block10:
  ASSIGN_OR_RETURN(tmp18, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 4));
  READ_TAGGED_FIELD_OR_FAIL(tmp19, accessor, p_o, static_cast<int>(tmp18));
  tmp20 = CastToUnderlyingTypeIfEnum(base::BitField<ScopeType, 0, 4, uint32_t>::decode(Internals::SmiValue(tmp19)));
  ASSIGN_OR_RETURN(tmp21, TqDebugFromConstexpr_uint32_constexpr_uint32_0(accessor, ScopeType::EVAL_SCOPE));
  ASSIGN_OR_RETURN(tmp22, TorqueDebugMacroShims::CodeStubAssembler::Word32Equal(accessor, tmp20, tmp21));
  phi_bb11_9 = tmp22;
  goto block11;

  block11:
  if (phi_bb11_9) {
    goto block12;
  } else {
    goto block13;
  }

  block12:
  ASSIGN_OR_RETURN(tmp23, TqDebugFromConstexpr_bool_constexpr_bool_0(accessor, true));
  phi_bb14_9 = tmp23;
  goto block14;

  block13:
  ASSIGN_OR_RETURN(tmp24, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 4));
  READ_TAGGED_FIELD_OR_FAIL(tmp25, accessor, p_o, static_cast<int>(tmp24));
  tmp26 = CastToUnderlyingTypeIfEnum(base::BitField<ScopeType, 0, 4, uint32_t>::decode(Internals::SmiValue(tmp25)));
  ASSIGN_OR_RETURN(tmp27, TqDebugFromConstexpr_uint32_constexpr_uint32_0(accessor, ScopeType::MODULE_SCOPE));
  ASSIGN_OR_RETURN(tmp28, TorqueDebugMacroShims::CodeStubAssembler::Word32Equal(accessor, tmp26, tmp27));
  phi_bb14_9 = tmp28;
  goto block14;

  block14:
  if (phi_bb14_9) {
    goto block15;
  } else {
    goto block16;
  }

  block15:
  ASSIGN_OR_RETURN(tmp29, TqDebugFromConstexpr_bool_constexpr_bool_0(accessor, true));
  phi_bb17_9 = tmp29;
  goto block17;

  block16:
  ASSIGN_OR_RETURN(tmp30, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 4));
  READ_TAGGED_FIELD_OR_FAIL(tmp31, accessor, p_o, static_cast<int>(tmp30));
  tmp32 = CastToUnderlyingTypeIfEnum(base::BitField<bool, 29, 1, uint32_t>::decode(Internals::SmiValue(tmp31)));
  if (tmp32) {
    goto block18;
  } else {
    goto block19;
  }

  block18:
  ASSIGN_OR_RETURN(tmp33, TqDebugFromConstexpr_bool_constexpr_bool_0(accessor, false));
  phi_bb20_9 = tmp33;
  goto block20;

  block19:
  ASSIGN_OR_RETURN(tmp34, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 4));
  READ_TAGGED_FIELD_OR_FAIL(tmp35, accessor, p_o, static_cast<int>(tmp34));
  tmp36 = CastToUnderlyingTypeIfEnum(base::BitField<ScopeType, 0, 4, uint32_t>::decode(Internals::SmiValue(tmp35)));
  ASSIGN_OR_RETURN(tmp37, TqDebugFromConstexpr_uint32_constexpr_uint32_0(accessor, ScopeType::CLASS_SCOPE));
  ASSIGN_OR_RETURN(tmp38, TorqueDebugMacroShims::CodeStubAssembler::Word32Equal(accessor, tmp36, tmp37));
  phi_bb20_9 = tmp38;
  goto block20;

  block20:
  phi_bb17_9 = phi_bb20_9;
  goto block17;

  block17:
  if (phi_bb17_9) {
    goto block2;
  } else {
    goto block3;
  }

  block2:
  ASSIGN_OR_RETURN(tmp39, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x1ull)));
  phi_bb4_8 = tmp39;
  goto block4;

  block3:
  ASSIGN_OR_RETURN(tmp40, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x0ull)));
  phi_bb4_8 = tmp40;
  goto block4;

  block4:
  ASSIGN_OR_RETURN(tmp41, TqDebugConvert_intptr_intptr_0(accessor, phi_bb4_8));
  ASSIGN_OR_RETURN(std::tie(tmp42, tmp43, tmp44), TqDebugNewMutableSlice_PositionInfo_0(accessor, p_o, tmp5, tmp41));
  goto block22;

  block22:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp42, tmp43, tmp44)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoPositionInfo
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoOuterScopeInfo
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoOuterScopeInfo

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=164&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceScopeInfoOuterScopeInfo(d::MemoryAccessor accessor, uintptr_t p_o) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  uintptr_t tmp7{}; USE(tmp7);
  bool tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  intptr_t tmp10{}; USE(tmp10);
  intptr_t phi_bb4_8{}; USE(phi_bb4_8);
  intptr_t tmp11{}; USE(tmp11);
  uintptr_t tmp12{}; USE(tmp12);
  intptr_t tmp13{}; USE(tmp13);
  intptr_t tmp14{}; USE(tmp14);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(std::tie(tmp0, tmp1, tmp2), TqDebugFieldSliceScopeInfoPositionInfo(accessor, p_o));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x8ull)));
  ASSIGN_OR_RETURN(tmp4, TorqueDebugMacroShims::CodeStubAssembler::IntPtrMul(accessor, tmp3, tmp2));
  ASSIGN_OR_RETURN(tmp5, TorqueDebugMacroShims::CodeStubAssembler::IntPtrAdd(accessor, tmp1, tmp4));
  ASSIGN_OR_RETURN(tmp6, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 4));
  READ_TAGGED_FIELD_OR_FAIL(tmp7, accessor, p_o, static_cast<int>(tmp6));
  tmp8 = CastToUnderlyingTypeIfEnum(base::BitField<bool, 22, 1, uint32_t>::decode(Internals::SmiValue(tmp7)));
  if (tmp8) {
    goto block2;
  } else {
    goto block3;
  }

  block2:
  ASSIGN_OR_RETURN(tmp9, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x1ull)));
  phi_bb4_8 = tmp9;
  goto block4;

  block3:
  ASSIGN_OR_RETURN(tmp10, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x0ull)));
  phi_bb4_8 = tmp10;
  goto block4;

  block4:
  ASSIGN_OR_RETURN(tmp11, TqDebugConvert_intptr_intptr_0(accessor, phi_bb4_8));
  ASSIGN_OR_RETURN(std::tie(tmp12, tmp13, tmp14), TqDebugNewMutableSlice_TheHole_OR_ScopeInfo_0(accessor, p_o, tmp5, tmp11));
  goto block6;

  block6:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp12, tmp13, tmp14)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoOuterScopeInfo
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoLocalsBlockList
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoLocalsBlockList

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=169&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceScopeInfoLocalsBlockList(d::MemoryAccessor accessor, uintptr_t p_o) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  uintptr_t tmp7{}; USE(tmp7);
  bool tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  intptr_t tmp10{}; USE(tmp10);
  intptr_t phi_bb4_8{}; USE(phi_bb4_8);
  intptr_t tmp11{}; USE(tmp11);
  uintptr_t tmp12{}; USE(tmp12);
  intptr_t tmp13{}; USE(tmp13);
  intptr_t tmp14{}; USE(tmp14);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(std::tie(tmp0, tmp1, tmp2), TqDebugFieldSliceScopeInfoOuterScopeInfo(accessor, p_o));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x4ull)));
  ASSIGN_OR_RETURN(tmp4, TorqueDebugMacroShims::CodeStubAssembler::IntPtrMul(accessor, tmp3, tmp2));
  ASSIGN_OR_RETURN(tmp5, TorqueDebugMacroShims::CodeStubAssembler::IntPtrAdd(accessor, tmp1, tmp4));
  ASSIGN_OR_RETURN(tmp6, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 4));
  READ_TAGGED_FIELD_OR_FAIL(tmp7, accessor, p_o, static_cast<int>(tmp6));
  tmp8 = CastToUnderlyingTypeIfEnum(base::BitField<bool, 28, 1, uint32_t>::decode(Internals::SmiValue(tmp7)));
  if (tmp8) {
    goto block2;
  } else {
    goto block3;
  }

  block2:
  ASSIGN_OR_RETURN(tmp9, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x1ull)));
  phi_bb4_8 = tmp9;
  goto block4;

  block3:
  ASSIGN_OR_RETURN(tmp10, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x0ull)));
  phi_bb4_8 = tmp10;
  goto block4;

  block4:
  ASSIGN_OR_RETURN(tmp11, TqDebugConvert_intptr_intptr_0(accessor, phi_bb4_8));
  ASSIGN_OR_RETURN(std::tie(tmp12, tmp13, tmp14), TqDebugNewMutableSlice_HashTable_0(accessor, p_o, tmp5, tmp11));
  goto block6;

  block6:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp12, tmp13, tmp14)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoLocalsBlockList
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoModuleInfo
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoModuleInfo

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=174&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceScopeInfoModuleInfo(d::MemoryAccessor accessor, uintptr_t p_o) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  uintptr_t tmp7{}; USE(tmp7);
  uint32_t tmp8{}; USE(tmp8);
  uint32_t tmp9{}; USE(tmp9);
  bool tmp10{}; USE(tmp10);
  intptr_t tmp11{}; USE(tmp11);
  intptr_t tmp12{}; USE(tmp12);
  intptr_t phi_bb4_8{}; USE(phi_bb4_8);
  intptr_t tmp13{}; USE(tmp13);
  uintptr_t tmp14{}; USE(tmp14);
  intptr_t tmp15{}; USE(tmp15);
  intptr_t tmp16{}; USE(tmp16);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(std::tie(tmp0, tmp1, tmp2), TqDebugFieldSliceScopeInfoLocalsBlockList(accessor, p_o));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x4ull)));
  ASSIGN_OR_RETURN(tmp4, TorqueDebugMacroShims::CodeStubAssembler::IntPtrMul(accessor, tmp3, tmp2));
  ASSIGN_OR_RETURN(tmp5, TorqueDebugMacroShims::CodeStubAssembler::IntPtrAdd(accessor, tmp1, tmp4));
  ASSIGN_OR_RETURN(tmp6, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 4));
  READ_TAGGED_FIELD_OR_FAIL(tmp7, accessor, p_o, static_cast<int>(tmp6));
  tmp8 = CastToUnderlyingTypeIfEnum(base::BitField<ScopeType, 0, 4, uint32_t>::decode(Internals::SmiValue(tmp7)));
  ASSIGN_OR_RETURN(tmp9, TqDebugFromConstexpr_uint32_constexpr_uint32_0(accessor, ScopeType::MODULE_SCOPE));
  ASSIGN_OR_RETURN(tmp10, TorqueDebugMacroShims::CodeStubAssembler::Word32Equal(accessor, tmp8, tmp9));
  if (tmp10) {
    goto block2;
  } else {
    goto block3;
  }

  block2:
  ASSIGN_OR_RETURN(tmp11, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x1ull)));
  phi_bb4_8 = tmp11;
  goto block4;

  block3:
  ASSIGN_OR_RETURN(tmp12, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x0ull)));
  phi_bb4_8 = tmp12;
  goto block4;

  block4:
  ASSIGN_OR_RETURN(tmp13, TqDebugConvert_intptr_intptr_0(accessor, phi_bb4_8));
  ASSIGN_OR_RETURN(std::tie(tmp14, tmp15, tmp16), TqDebugNewMutableSlice_SourceTextModuleInfo_0(accessor, p_o, tmp5, tmp13));
  goto block6;

  block6:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp14, tmp15, tmp16)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoModuleInfo
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoModuleVariableCount
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoModuleVariableCount

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=176&c=9
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceScopeInfoModuleVariableCount(d::MemoryAccessor accessor, uintptr_t p_o) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  uintptr_t tmp7{}; USE(tmp7);
  uint32_t tmp8{}; USE(tmp8);
  uint32_t tmp9{}; USE(tmp9);
  bool tmp10{}; USE(tmp10);
  intptr_t tmp11{}; USE(tmp11);
  intptr_t tmp12{}; USE(tmp12);
  intptr_t phi_bb4_8{}; USE(phi_bb4_8);
  intptr_t tmp13{}; USE(tmp13);
  uintptr_t tmp14{}; USE(tmp14);
  intptr_t tmp15{}; USE(tmp15);
  intptr_t tmp16{}; USE(tmp16);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(std::tie(tmp0, tmp1, tmp2), TqDebugFieldSliceScopeInfoModuleInfo(accessor, p_o));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x4ull)));
  ASSIGN_OR_RETURN(tmp4, TorqueDebugMacroShims::CodeStubAssembler::IntPtrMul(accessor, tmp3, tmp2));
  ASSIGN_OR_RETURN(tmp5, TorqueDebugMacroShims::CodeStubAssembler::IntPtrAdd(accessor, tmp1, tmp4));
  ASSIGN_OR_RETURN(tmp6, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 4));
  READ_TAGGED_FIELD_OR_FAIL(tmp7, accessor, p_o, static_cast<int>(tmp6));
  tmp8 = CastToUnderlyingTypeIfEnum(base::BitField<ScopeType, 0, 4, uint32_t>::decode(Internals::SmiValue(tmp7)));
  ASSIGN_OR_RETURN(tmp9, TqDebugFromConstexpr_uint32_constexpr_uint32_0(accessor, ScopeType::MODULE_SCOPE));
  ASSIGN_OR_RETURN(tmp10, TorqueDebugMacroShims::CodeStubAssembler::Word32Equal(accessor, tmp8, tmp9));
  if (tmp10) {
    goto block2;
  } else {
    goto block3;
  }

  block2:
  ASSIGN_OR_RETURN(tmp11, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x1ull)));
  phi_bb4_8 = tmp11;
  goto block4;

  block3:
  ASSIGN_OR_RETURN(tmp12, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x0ull)));
  phi_bb4_8 = tmp12;
  goto block4;

  block4:
  ASSIGN_OR_RETURN(tmp13, TqDebugConvert_intptr_intptr_0(accessor, phi_bb4_8));
  ASSIGN_OR_RETURN(std::tie(tmp14, tmp15, tmp16), TqDebugNewConstSlice_Smi_0(accessor, p_o, tmp5, tmp13));
  goto block6;

  block6:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp14, tmp15, tmp16)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoModuleVariableCount
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoModuleVariables
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoModuleVariables

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=178&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceScopeInfoModuleVariables(d::MemoryAccessor accessor, uintptr_t p_o) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  uintptr_t tmp7{}; USE(tmp7);
  uint32_t tmp8{}; USE(tmp8);
  uint32_t tmp9{}; USE(tmp9);
  bool tmp10{}; USE(tmp10);
  uintptr_t tmp11{}; USE(tmp11);
  intptr_t tmp12{}; USE(tmp12);
  intptr_t tmp13{}; USE(tmp13);
  intptr_t tmp14{}; USE(tmp14);
  uintptr_t tmp15{}; USE(tmp15);
  uintptr_t tmp16{}; USE(tmp16);
  bool tmp17{}; USE(tmp17);
  intptr_t tmp18{}; USE(tmp18);
  intptr_t tmp19{}; USE(tmp19);
  uintptr_t tmp20{}; USE(tmp20);
  intptr_t tmp21{}; USE(tmp21);
  uintptr_t tmp22{}; USE(tmp22);
  uintptr_t tmp23{}; USE(tmp23);
  uintptr_t phi_bb4_8{}; USE(phi_bb4_8);
  intptr_t tmp24{}; USE(tmp24);
  uintptr_t tmp25{}; USE(tmp25);
  intptr_t tmp26{}; USE(tmp26);
  intptr_t tmp27{}; USE(tmp27);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(std::tie(tmp0, tmp1, tmp2), TqDebugFieldSliceScopeInfoModuleVariableCount(accessor, p_o));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x4ull)));
  ASSIGN_OR_RETURN(tmp4, TorqueDebugMacroShims::CodeStubAssembler::IntPtrMul(accessor, tmp3, tmp2));
  ASSIGN_OR_RETURN(tmp5, TorqueDebugMacroShims::CodeStubAssembler::IntPtrAdd(accessor, tmp1, tmp4));
  ASSIGN_OR_RETURN(tmp6, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 4));
  READ_TAGGED_FIELD_OR_FAIL(tmp7, accessor, p_o, static_cast<int>(tmp6));
  tmp8 = CastToUnderlyingTypeIfEnum(base::BitField<ScopeType, 0, 4, uint32_t>::decode(Internals::SmiValue(tmp7)));
  ASSIGN_OR_RETURN(tmp9, TqDebugFromConstexpr_uint32_constexpr_uint32_0(accessor, ScopeType::MODULE_SCOPE));
  ASSIGN_OR_RETURN(tmp10, TorqueDebugMacroShims::CodeStubAssembler::Word32Equal(accessor, tmp8, tmp9));
  if (tmp10) {
    goto block2;
  } else {
    goto block3;
  }

  block2:
  ASSIGN_OR_RETURN(std::tie(tmp11, tmp12, tmp13), TqDebugFieldSliceScopeInfoModuleVariableCount(accessor, p_o));
  ASSIGN_OR_RETURN(tmp14, TqDebugConvert_intptr_constexpr_int31_0(accessor, 0));
  ASSIGN_OR_RETURN(tmp15, TqDebugConvert_uintptr_intptr_0(accessor, tmp14));
  ASSIGN_OR_RETURN(tmp16, TqDebugConvert_uintptr_intptr_0(accessor, tmp13));
  ASSIGN_OR_RETURN(tmp17, TorqueDebugMacroShims::CodeStubAssembler::UintPtrLessThan(accessor, tmp15, tmp16));
  if (tmp17) {
    goto block10;
  } else {
    goto block11;
  }

  block10:
  ASSIGN_OR_RETURN(tmp18, TqDebugTimesSizeOf_Smi_0(accessor, tmp14));
  ASSIGN_OR_RETURN(tmp19, TorqueDebugMacroShims::CodeStubAssembler::IntPtrAdd(accessor, tmp12, tmp18));
  ASSIGN_OR_RETURN(std::tie(tmp20, tmp21), TqDebugNewReference_Smi_0(accessor, tmp11, tmp19));
  READ_TAGGED_FIELD_OR_FAIL(tmp22, accessor, tmp20, static_cast<int>(tmp21));
  phi_bb4_8 = tmp22;
  goto block4;

  block11:
  UNREACHABLE();

  block3:
  ASSIGN_OR_RETURN(tmp23, TqDebugFromConstexpr_Smi_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x0ull)));
  phi_bb4_8 = tmp23;
  goto block4;

  block4:
  ASSIGN_OR_RETURN(tmp24, TqDebugConvert_intptr_Smi_0(accessor, phi_bb4_8));
  ASSIGN_OR_RETURN(std::tie(tmp25, tmp26, tmp27), TqDebugNewMutableSlice_ModuleVariable_0(accessor, p_o, tmp5, tmp24));
  goto block14;

  block14:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp25, tmp26, tmp27)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceScopeInfoModuleVariables
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceFixedDoubleArrayFloats
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceFixedDoubleArrayFloats

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=19&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceFixedDoubleArrayFloats(d::MemoryAccessor accessor, uintptr_t p_o) {
  intptr_t tmp0{}; USE(tmp0);
  uintptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  uintptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 4));
  READ_TAGGED_FIELD_OR_FAIL(tmp1, accessor, p_o, static_cast<int>(tmp0));
  ASSIGN_OR_RETURN(tmp2, TqDebugConvert_intptr_Smi_0(accessor, tmp1));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x8ull)));
  ASSIGN_OR_RETURN(std::tie(tmp4, tmp5, tmp6), TqDebugNewMutableSlice_float64_or_hole_0(accessor, p_o, tmp3, tmp2));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp4, tmp5, tmp6)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceFixedDoubleArrayFloats
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceCoverageInfoSlots
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceCoverageInfoSlots

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=68&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceCoverageInfoSlots(d::MemoryAccessor accessor, uintptr_t p_o) {
  intptr_t tmp0{}; USE(tmp0);
  int32_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  uintptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 4));
  READ_FIELD_OR_FAIL(int32_t, tmp1, accessor, p_o, tmp0);
  ASSIGN_OR_RETURN(tmp2, TqDebugConvert_intptr_int32_0(accessor, tmp1));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x8ull)));
  ASSIGN_OR_RETURN(std::tie(tmp4, tmp5, tmp6), TqDebugNewMutableSlice_CoverageInfoSlot_0(accessor, p_o, tmp3, tmp2));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp4, tmp5, tmp6)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceCoverageInfoSlots
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceDescriptorArrayDescriptors
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceDescriptorArrayDescriptors

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=25&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceDescriptorArrayDescriptors(d::MemoryAccessor accessor, uintptr_t p_o) {
  intptr_t tmp0{}; USE(tmp0);
  uint16_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  uintptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 4));
  READ_FIELD_OR_FAIL(uint16_t, tmp1, accessor, p_o, tmp0);
  ASSIGN_OR_RETURN(tmp2, TqDebugConvert_intptr_uint16_0(accessor, tmp1));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x10ull)));
  ASSIGN_OR_RETURN(std::tie(tmp4, tmp5, tmp6), TqDebugNewMutableSlice_DescriptorEntry_0(accessor, p_o, tmp3, tmp2));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp4, tmp5, tmp6)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceDescriptorArrayDescriptors
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceFeedbackVectorRawFeedbackSlots
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceFeedbackVectorRawFeedbackSlots

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=31&c=19
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceFeedbackVectorRawFeedbackSlots(d::MemoryAccessor accessor, uintptr_t p_o) {
  intptr_t tmp0{}; USE(tmp0);
  int32_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  uintptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 4));
  READ_FIELD_OR_FAIL(int32_t, tmp1, accessor, p_o, tmp0);
  ASSIGN_OR_RETURN(tmp2, TqDebugConvert_intptr_int32_0(accessor, tmp1));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x20ull)));
  ASSIGN_OR_RETURN(std::tie(tmp4, tmp5, tmp6), TqDebugNewMutableSlice_MaybeObject_0(accessor, p_o, tmp3, tmp2));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp4, tmp5, tmp6)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceFeedbackVectorRawFeedbackSlots
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceByteArrayBytes
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceByteArrayBytes

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=49
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceByteArrayBytes(d::MemoryAccessor accessor, uintptr_t p_o) {
  intptr_t tmp0{}; USE(tmp0);
  uintptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  uintptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 4));
  READ_TAGGED_FIELD_OR_FAIL(tmp1, accessor, p_o, static_cast<int>(tmp0));
  ASSIGN_OR_RETURN(tmp2, TqDebugConvert_intptr_Smi_0(accessor, tmp1));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x8ull)));
  ASSIGN_OR_RETURN(std::tie(tmp4, tmp5, tmp6), TqDebugNewMutableSlice_uint8_0(accessor, p_o, tmp3, tmp2));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp4, tmp5, tmp6)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceByteArrayBytes
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceWeakArrayListObjects
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceWeakArrayListObjects

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=44&c=19
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceWeakArrayListObjects(d::MemoryAccessor accessor, uintptr_t p_o) {
  intptr_t tmp0{}; USE(tmp0);
  uintptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  uintptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 4));
  READ_TAGGED_FIELD_OR_FAIL(tmp1, accessor, p_o, static_cast<int>(tmp0));
  ASSIGN_OR_RETURN(tmp2, TqDebugConvert_intptr_Smi_0(accessor, tmp1));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0xcull)));
  ASSIGN_OR_RETURN(std::tie(tmp4, tmp5, tmp6), TqDebugNewMutableSlice_MaybeObject_0(accessor, p_o, tmp3, tmp2));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp4, tmp5, tmp6)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceWeakArrayListObjects
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedHashSetPadding
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedHashSetPadding

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=32&c=31
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSmallOrderedHashSetPadding(d::MemoryAccessor accessor, uintptr_t p_o) {
  intptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  uintptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugConvert_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x1ull)));
  ASSIGN_OR_RETURN(tmp1, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x7ull)));
  ASSIGN_OR_RETURN(std::tie(tmp2, tmp3, tmp4), TqDebugNewMutableSlice_uint8_0(accessor, p_o, tmp1, tmp0));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp2, tmp3, tmp4)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedHashSetPadding
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedHashSetDataTable
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedHashSetDataTable

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=33&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSmallOrderedHashSetDataTable(d::MemoryAccessor accessor, uintptr_t p_o) {
  intptr_t tmp0{}; USE(tmp0);
  uint8_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  uintptr_t tmp7{}; USE(tmp7);
  intptr_t tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 6));
  READ_FIELD_OR_FAIL(uint8_t, tmp1, accessor, p_o, tmp0);
  ASSIGN_OR_RETURN(tmp2, TqDebugConvert_intptr_uint8_0(accessor, tmp1));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, SmallOrderedHashTable<int>::kLoadFactor));
  ASSIGN_OR_RETURN(tmp4, TorqueDebugMacroShims::CodeStubAssembler::IntPtrMul(accessor, tmp2, tmp3));
  ASSIGN_OR_RETURN(tmp5, TqDebugConvert_intptr_intptr_0(accessor, tmp4));
  ASSIGN_OR_RETURN(tmp6, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x8ull)));
  ASSIGN_OR_RETURN(std::tie(tmp7, tmp8, tmp9), TqDebugNewMutableSlice_JSReceiver_OR_Undefined_OR_Null_OR_False_OR_True_OR_Symbol_OR_String_OR_BigInt_OR_HeapNumber_OR_Smi_OR_TheHole_0(accessor, p_o, tmp6, tmp5));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp7, tmp8, tmp9)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedHashSetDataTable
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedHashSetHashTable
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedHashSetHashTable

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=35&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSmallOrderedHashSetHashTable(d::MemoryAccessor accessor, uintptr_t p_o) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  uint8_t tmp7{}; USE(tmp7);
  intptr_t tmp8{}; USE(tmp8);
  uintptr_t tmp9{}; USE(tmp9);
  intptr_t tmp10{}; USE(tmp10);
  intptr_t tmp11{}; USE(tmp11);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(std::tie(tmp0, tmp1, tmp2), TqDebugFieldSliceSmallOrderedHashSetDataTable(accessor, p_o));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x4ull)));
  ASSIGN_OR_RETURN(tmp4, TorqueDebugMacroShims::CodeStubAssembler::IntPtrMul(accessor, tmp3, tmp2));
  ASSIGN_OR_RETURN(tmp5, TorqueDebugMacroShims::CodeStubAssembler::IntPtrAdd(accessor, tmp1, tmp4));
  ASSIGN_OR_RETURN(tmp6, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 6));
  READ_FIELD_OR_FAIL(uint8_t, tmp7, accessor, p_o, tmp6);
  ASSIGN_OR_RETURN(tmp8, TqDebugConvert_intptr_uint8_0(accessor, tmp7));
  ASSIGN_OR_RETURN(std::tie(tmp9, tmp10, tmp11), TqDebugNewMutableSlice_uint8_0(accessor, p_o, tmp5, tmp8));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp9, tmp10, tmp11)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedHashSetHashTable
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedHashSetChainTable
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedHashSetChainTable

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=36&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSmallOrderedHashSetChainTable(d::MemoryAccessor accessor, uintptr_t p_o) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  uint8_t tmp7{}; USE(tmp7);
  intptr_t tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  intptr_t tmp10{}; USE(tmp10);
  intptr_t tmp11{}; USE(tmp11);
  uintptr_t tmp12{}; USE(tmp12);
  intptr_t tmp13{}; USE(tmp13);
  intptr_t tmp14{}; USE(tmp14);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(std::tie(tmp0, tmp1, tmp2), TqDebugFieldSliceSmallOrderedHashSetHashTable(accessor, p_o));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x1ull)));
  ASSIGN_OR_RETURN(tmp4, TorqueDebugMacroShims::CodeStubAssembler::IntPtrMul(accessor, tmp3, tmp2));
  ASSIGN_OR_RETURN(tmp5, TorqueDebugMacroShims::CodeStubAssembler::IntPtrAdd(accessor, tmp1, tmp4));
  ASSIGN_OR_RETURN(tmp6, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 6));
  READ_FIELD_OR_FAIL(uint8_t, tmp7, accessor, p_o, tmp6);
  ASSIGN_OR_RETURN(tmp8, TqDebugConvert_intptr_uint8_0(accessor, tmp7));
  ASSIGN_OR_RETURN(tmp9, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, SmallOrderedHashTable<int>::kLoadFactor));
  ASSIGN_OR_RETURN(tmp10, TorqueDebugMacroShims::CodeStubAssembler::IntPtrMul(accessor, tmp8, tmp9));
  ASSIGN_OR_RETURN(tmp11, TqDebugConvert_intptr_intptr_0(accessor, tmp10));
  ASSIGN_OR_RETURN(std::tie(tmp12, tmp13, tmp14), TqDebugNewMutableSlice_uint8_0(accessor, p_o, tmp5, tmp11));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp12, tmp13, tmp14)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedHashSetChainTable
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedHashMapPadding
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedHashMapPadding

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=71&c=31
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSmallOrderedHashMapPadding(d::MemoryAccessor accessor, uintptr_t p_o) {
  intptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  uintptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugConvert_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x1ull)));
  ASSIGN_OR_RETURN(tmp1, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x7ull)));
  ASSIGN_OR_RETURN(std::tie(tmp2, tmp3, tmp4), TqDebugNewMutableSlice_uint8_0(accessor, p_o, tmp1, tmp0));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp2, tmp3, tmp4)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedHashMapPadding
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedHashMapDataTable
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedHashMapDataTable

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=72&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSmallOrderedHashMapDataTable(d::MemoryAccessor accessor, uintptr_t p_o) {
  intptr_t tmp0{}; USE(tmp0);
  uint8_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  uintptr_t tmp7{}; USE(tmp7);
  intptr_t tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 6));
  READ_FIELD_OR_FAIL(uint8_t, tmp1, accessor, p_o, tmp0);
  ASSIGN_OR_RETURN(tmp2, TqDebugConvert_intptr_uint8_0(accessor, tmp1));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, SmallOrderedHashTable<int>::kLoadFactor));
  ASSIGN_OR_RETURN(tmp4, TorqueDebugMacroShims::CodeStubAssembler::IntPtrMul(accessor, tmp2, tmp3));
  ASSIGN_OR_RETURN(tmp5, TqDebugConvert_intptr_intptr_0(accessor, tmp4));
  ASSIGN_OR_RETURN(tmp6, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x8ull)));
  ASSIGN_OR_RETURN(std::tie(tmp7, tmp8, tmp9), TqDebugNewMutableSlice_HashMapEntry_0(accessor, p_o, tmp6, tmp5));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp7, tmp8, tmp9)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedHashMapDataTable
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedHashMapHashTable
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedHashMapHashTable

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=74&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSmallOrderedHashMapHashTable(d::MemoryAccessor accessor, uintptr_t p_o) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  uint8_t tmp7{}; USE(tmp7);
  intptr_t tmp8{}; USE(tmp8);
  uintptr_t tmp9{}; USE(tmp9);
  intptr_t tmp10{}; USE(tmp10);
  intptr_t tmp11{}; USE(tmp11);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(std::tie(tmp0, tmp1, tmp2), TqDebugFieldSliceSmallOrderedHashMapDataTable(accessor, p_o));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x8ull)));
  ASSIGN_OR_RETURN(tmp4, TorqueDebugMacroShims::CodeStubAssembler::IntPtrMul(accessor, tmp3, tmp2));
  ASSIGN_OR_RETURN(tmp5, TorqueDebugMacroShims::CodeStubAssembler::IntPtrAdd(accessor, tmp1, tmp4));
  ASSIGN_OR_RETURN(tmp6, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 6));
  READ_FIELD_OR_FAIL(uint8_t, tmp7, accessor, p_o, tmp6);
  ASSIGN_OR_RETURN(tmp8, TqDebugConvert_intptr_uint8_0(accessor, tmp7));
  ASSIGN_OR_RETURN(std::tie(tmp9, tmp10, tmp11), TqDebugNewMutableSlice_uint8_0(accessor, p_o, tmp5, tmp8));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp9, tmp10, tmp11)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedHashMapHashTable
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedHashMapChainTable
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedHashMapChainTable

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=75&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSmallOrderedHashMapChainTable(d::MemoryAccessor accessor, uintptr_t p_o) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  uint8_t tmp7{}; USE(tmp7);
  intptr_t tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  intptr_t tmp10{}; USE(tmp10);
  intptr_t tmp11{}; USE(tmp11);
  uintptr_t tmp12{}; USE(tmp12);
  intptr_t tmp13{}; USE(tmp13);
  intptr_t tmp14{}; USE(tmp14);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(std::tie(tmp0, tmp1, tmp2), TqDebugFieldSliceSmallOrderedHashMapHashTable(accessor, p_o));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x1ull)));
  ASSIGN_OR_RETURN(tmp4, TorqueDebugMacroShims::CodeStubAssembler::IntPtrMul(accessor, tmp3, tmp2));
  ASSIGN_OR_RETURN(tmp5, TorqueDebugMacroShims::CodeStubAssembler::IntPtrAdd(accessor, tmp1, tmp4));
  ASSIGN_OR_RETURN(tmp6, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 6));
  READ_FIELD_OR_FAIL(uint8_t, tmp7, accessor, p_o, tmp6);
  ASSIGN_OR_RETURN(tmp8, TqDebugConvert_intptr_uint8_0(accessor, tmp7));
  ASSIGN_OR_RETURN(tmp9, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, SmallOrderedHashTable<int>::kLoadFactor));
  ASSIGN_OR_RETURN(tmp10, TorqueDebugMacroShims::CodeStubAssembler::IntPtrMul(accessor, tmp8, tmp9));
  ASSIGN_OR_RETURN(tmp11, TqDebugConvert_intptr_intptr_0(accessor, tmp10));
  ASSIGN_OR_RETURN(std::tie(tmp12, tmp13, tmp14), TqDebugNewMutableSlice_uint8_0(accessor, p_o, tmp5, tmp11));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp12, tmp13, tmp14)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedHashMapChainTable
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedNameDictionaryPadding1
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedNameDictionaryPadding1

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=111&c=31
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSmallOrderedNameDictionaryPadding1(d::MemoryAccessor accessor, uintptr_t p_o) {
  intptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  uintptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugConvert_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x1ull)));
  ASSIGN_OR_RETURN(tmp1, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0xbull)));
  ASSIGN_OR_RETURN(std::tie(tmp2, tmp3, tmp4), TqDebugNewMutableSlice_uint8_0(accessor, p_o, tmp1, tmp0));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp2, tmp3, tmp4)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedNameDictionaryPadding1
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedNameDictionaryDataTable
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedNameDictionaryDataTable

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=112&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSmallOrderedNameDictionaryDataTable(d::MemoryAccessor accessor, uintptr_t p_o) {
  intptr_t tmp0{}; USE(tmp0);
  uint8_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  uintptr_t tmp7{}; USE(tmp7);
  intptr_t tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 10));
  READ_FIELD_OR_FAIL(uint8_t, tmp1, accessor, p_o, tmp0);
  ASSIGN_OR_RETURN(tmp2, TqDebugConvert_intptr_uint8_0(accessor, tmp1));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, SmallOrderedHashTable<int>::kLoadFactor));
  ASSIGN_OR_RETURN(tmp4, TorqueDebugMacroShims::CodeStubAssembler::IntPtrMul(accessor, tmp2, tmp3));
  ASSIGN_OR_RETURN(tmp5, TqDebugConvert_intptr_intptr_0(accessor, tmp4));
  ASSIGN_OR_RETURN(tmp6, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0xcull)));
  ASSIGN_OR_RETURN(std::tie(tmp7, tmp8, tmp9), TqDebugNewMutableSlice_NameDictionaryEntry_0(accessor, p_o, tmp6, tmp5));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp7, tmp8, tmp9)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedNameDictionaryDataTable
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedNameDictionaryHashTable
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedNameDictionaryHashTable

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=114&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSmallOrderedNameDictionaryHashTable(d::MemoryAccessor accessor, uintptr_t p_o) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  uint8_t tmp7{}; USE(tmp7);
  intptr_t tmp8{}; USE(tmp8);
  uintptr_t tmp9{}; USE(tmp9);
  intptr_t tmp10{}; USE(tmp10);
  intptr_t tmp11{}; USE(tmp11);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(std::tie(tmp0, tmp1, tmp2), TqDebugFieldSliceSmallOrderedNameDictionaryDataTable(accessor, p_o));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0xcull)));
  ASSIGN_OR_RETURN(tmp4, TorqueDebugMacroShims::CodeStubAssembler::IntPtrMul(accessor, tmp3, tmp2));
  ASSIGN_OR_RETURN(tmp5, TorqueDebugMacroShims::CodeStubAssembler::IntPtrAdd(accessor, tmp1, tmp4));
  ASSIGN_OR_RETURN(tmp6, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 10));
  READ_FIELD_OR_FAIL(uint8_t, tmp7, accessor, p_o, tmp6);
  ASSIGN_OR_RETURN(tmp8, TqDebugConvert_intptr_uint8_0(accessor, tmp7));
  ASSIGN_OR_RETURN(std::tie(tmp9, tmp10, tmp11), TqDebugNewMutableSlice_uint8_0(accessor, p_o, tmp5, tmp8));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp9, tmp10, tmp11)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedNameDictionaryHashTable
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedNameDictionaryChainTable
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedNameDictionaryChainTable

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=115&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSmallOrderedNameDictionaryChainTable(d::MemoryAccessor accessor, uintptr_t p_o) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  uint8_t tmp7{}; USE(tmp7);
  intptr_t tmp8{}; USE(tmp8);
  uintptr_t tmp9{}; USE(tmp9);
  intptr_t tmp10{}; USE(tmp10);
  intptr_t tmp11{}; USE(tmp11);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(std::tie(tmp0, tmp1, tmp2), TqDebugFieldSliceSmallOrderedNameDictionaryHashTable(accessor, p_o));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x1ull)));
  ASSIGN_OR_RETURN(tmp4, TorqueDebugMacroShims::CodeStubAssembler::IntPtrMul(accessor, tmp3, tmp2));
  ASSIGN_OR_RETURN(tmp5, TorqueDebugMacroShims::CodeStubAssembler::IntPtrAdd(accessor, tmp1, tmp4));
  ASSIGN_OR_RETURN(tmp6, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 10));
  READ_FIELD_OR_FAIL(uint8_t, tmp7, accessor, p_o, tmp6);
  ASSIGN_OR_RETURN(tmp8, TqDebugConvert_intptr_uint8_0(accessor, tmp7));
  ASSIGN_OR_RETURN(std::tie(tmp9, tmp10, tmp11), TqDebugNewMutableSlice_uint8_0(accessor, p_o, tmp5, tmp8));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp9, tmp10, tmp11)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceSmallOrderedNameDictionaryChainTable
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceSeqOneByteStringChars
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceSeqOneByteStringChars

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=109&c=9
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSeqOneByteStringChars(d::MemoryAccessor accessor, uintptr_t p_o) {
  intptr_t tmp0{}; USE(tmp0);
  int32_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  uintptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 8));
  READ_FIELD_OR_FAIL(int32_t, tmp1, accessor, p_o, tmp0);
  ASSIGN_OR_RETURN(tmp2, TqDebugConvert_intptr_int32_0(accessor, tmp1));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0xcull)));
  ASSIGN_OR_RETURN(std::tie(tmp4, tmp5, tmp6), TqDebugNewConstSlice_char8_0(accessor, p_o, tmp3, tmp2));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp4, tmp5, tmp6)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceSeqOneByteStringChars
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceSeqTwoByteStringChars
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceSeqTwoByteStringChars

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=114&c=9
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSeqTwoByteStringChars(d::MemoryAccessor accessor, uintptr_t p_o) {
  intptr_t tmp0{}; USE(tmp0);
  int32_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  uintptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 8));
  READ_FIELD_OR_FAIL(int32_t, tmp1, accessor, p_o, tmp0);
  ASSIGN_OR_RETURN(tmp2, TqDebugConvert_intptr_int32_0(accessor, tmp1));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0xcull)));
  ASSIGN_OR_RETURN(std::tie(tmp4, tmp5, tmp6), TqDebugNewConstSlice_char16_0(accessor, p_o, tmp3, tmp2));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp4, tmp5, tmp6)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceSeqTwoByteStringChars
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceSwissNameDictionaryDataTable
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceSwissNameDictionaryDataTable

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=12&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSwissNameDictionaryDataTable(d::MemoryAccessor accessor, uintptr_t p_o) {
  intptr_t tmp0{}; USE(tmp0);
  int32_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  uintptr_t tmp7{}; USE(tmp7);
  intptr_t tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 8));
  READ_FIELD_OR_FAIL(int32_t, tmp1, accessor, p_o, tmp0);
  ASSIGN_OR_RETURN(tmp2, TqDebugConvert_intptr_int32_0(accessor, tmp1));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x2ull)));
  ASSIGN_OR_RETURN(tmp4, TorqueDebugMacroShims::CodeStubAssembler::IntPtrMul(accessor, tmp2, tmp3));
  ASSIGN_OR_RETURN(tmp5, TqDebugConvert_intptr_intptr_0(accessor, tmp4));
  ASSIGN_OR_RETURN(tmp6, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x10ull)));
  ASSIGN_OR_RETURN(std::tie(tmp7, tmp8, tmp9), TqDebugNewMutableSlice_JSReceiver_OR_Undefined_OR_Null_OR_False_OR_True_OR_Symbol_OR_String_OR_BigInt_OR_HeapNumber_OR_Smi_OR_TheHole_0(accessor, p_o, tmp6, tmp5));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp7, tmp8, tmp9)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceSwissNameDictionaryDataTable
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceSwissNameDictionaryCtrlTable
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceSwissNameDictionaryCtrlTable

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=13&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSwissNameDictionaryCtrlTable(d::MemoryAccessor accessor, uintptr_t p_o) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  int32_t tmp7{}; USE(tmp7);
  intptr_t tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  intptr_t tmp10{}; USE(tmp10);
  intptr_t tmp11{}; USE(tmp11);
  uintptr_t tmp12{}; USE(tmp12);
  intptr_t tmp13{}; USE(tmp13);
  intptr_t tmp14{}; USE(tmp14);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(std::tie(tmp0, tmp1, tmp2), TqDebugFieldSliceSwissNameDictionaryDataTable(accessor, p_o));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x4ull)));
  ASSIGN_OR_RETURN(tmp4, TorqueDebugMacroShims::CodeStubAssembler::IntPtrMul(accessor, tmp3, tmp2));
  ASSIGN_OR_RETURN(tmp5, TorqueDebugMacroShims::CodeStubAssembler::IntPtrAdd(accessor, tmp1, tmp4));
  ASSIGN_OR_RETURN(tmp6, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 8));
  READ_FIELD_OR_FAIL(int32_t, tmp7, accessor, p_o, tmp6);
  ASSIGN_OR_RETURN(tmp8, TqDebugConvert_intptr_int32_0(accessor, tmp7));
  ASSIGN_OR_RETURN(tmp9, TqDebugFromConstexpr_intptr_constexpr_int32_0(accessor, swiss_table::Group::kWidth));
  ASSIGN_OR_RETURN(tmp10, TorqueDebugMacroShims::CodeStubAssembler::IntPtrAdd(accessor, tmp8, tmp9));
  ASSIGN_OR_RETURN(tmp11, TqDebugConvert_intptr_intptr_0(accessor, tmp10));
  ASSIGN_OR_RETURN(std::tie(tmp12, tmp13, tmp14), TqDebugNewMutableSlice_uint8_0(accessor, p_o, tmp5, tmp11));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp12, tmp13, tmp14)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceSwissNameDictionaryCtrlTable
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceSwissNameDictionaryPropertyDetailsTable
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceSwissNameDictionaryPropertyDetailsTable

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=14&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceSwissNameDictionaryPropertyDetailsTable(d::MemoryAccessor accessor, uintptr_t p_o) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  int32_t tmp7{}; USE(tmp7);
  intptr_t tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  uintptr_t tmp10{}; USE(tmp10);
  intptr_t tmp11{}; USE(tmp11);
  intptr_t tmp12{}; USE(tmp12);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(std::tie(tmp0, tmp1, tmp2), TqDebugFieldSliceSwissNameDictionaryCtrlTable(accessor, p_o));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x1ull)));
  ASSIGN_OR_RETURN(tmp4, TorqueDebugMacroShims::CodeStubAssembler::IntPtrMul(accessor, tmp3, tmp2));
  ASSIGN_OR_RETURN(tmp5, TorqueDebugMacroShims::CodeStubAssembler::IntPtrAdd(accessor, tmp1, tmp4));
  ASSIGN_OR_RETURN(tmp6, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 8));
  READ_FIELD_OR_FAIL(int32_t, tmp7, accessor, p_o, tmp6);
  ASSIGN_OR_RETURN(tmp8, TqDebugConvert_intptr_int32_0(accessor, tmp7));
  ASSIGN_OR_RETURN(tmp9, TqDebugConvert_intptr_intptr_0(accessor, tmp8));
  ASSIGN_OR_RETURN(std::tie(tmp10, tmp11, tmp12), TqDebugNewMutableSlice_uint8_0(accessor, p_o, tmp5, tmp9));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp10, tmp11, tmp12)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceSwissNameDictionaryPropertyDetailsTable
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceInternalClassWithSmiElementsEntries
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceInternalClassWithSmiElementsEntries

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1194&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceInternalClassWithSmiElementsEntries(d::MemoryAccessor accessor, uintptr_t p_o) {
  intptr_t tmp0{}; USE(tmp0);
  uintptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  uintptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 4));
  READ_TAGGED_FIELD_OR_FAIL(tmp1, accessor, p_o, static_cast<int>(tmp0));
  ASSIGN_OR_RETURN(tmp2, TqDebugConvert_intptr_Smi_0(accessor, tmp1));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x10ull)));
  ASSIGN_OR_RETURN(std::tie(tmp4, tmp5, tmp6), TqDebugNewMutableSlice_Smi_0(accessor, p_o, tmp3, tmp2));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp4, tmp5, tmp6)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceInternalClassWithSmiElementsEntries
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceInternalClassWithStructElementsEntries
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceInternalClassWithStructElementsEntries

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1208&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceInternalClassWithStructElementsEntries(d::MemoryAccessor accessor, uintptr_t p_o) {
  intptr_t tmp0{}; USE(tmp0);
  uintptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  uintptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 12));
  READ_TAGGED_FIELD_OR_FAIL(tmp1, accessor, p_o, static_cast<int>(tmp0));
  ASSIGN_OR_RETURN(tmp2, TqDebugConvert_intptr_Smi_0(accessor, tmp1));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x18ull)));
  ASSIGN_OR_RETURN(std::tie(tmp4, tmp5, tmp6), TqDebugNewMutableSlice_Smi_0(accessor, p_o, tmp3, tmp2));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp4, tmp5, tmp6)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceInternalClassWithStructElementsEntries
#ifndef V8_INTERNAL_DEFINED_TqDebugFieldSliceInternalClassWithStructElementsMoreEntries
#define V8_INTERNAL_DEFINED_TqDebugFieldSliceInternalClassWithStructElementsMoreEntries

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1209&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugFieldSliceInternalClassWithStructElementsMoreEntries(d::MemoryAccessor accessor, uintptr_t p_o) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  uintptr_t tmp7{}; USE(tmp7);
  intptr_t tmp8{}; USE(tmp8);
  uintptr_t tmp9{}; USE(tmp9);
  intptr_t tmp10{}; USE(tmp10);
  intptr_t tmp11{}; USE(tmp11);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(std::tie(tmp0, tmp1, tmp2), TqDebugFieldSliceInternalClassWithStructElementsEntries(accessor, p_o));
  ASSIGN_OR_RETURN(tmp3, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, IntegerLiteral(false, 0x4ull)));
  ASSIGN_OR_RETURN(tmp4, TorqueDebugMacroShims::CodeStubAssembler::IntPtrMul(accessor, tmp3, tmp2));
  ASSIGN_OR_RETURN(tmp5, TorqueDebugMacroShims::CodeStubAssembler::IntPtrAdd(accessor, tmp1, tmp4));
  ASSIGN_OR_RETURN(tmp6, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, 12));
  READ_TAGGED_FIELD_OR_FAIL(tmp7, accessor, p_o, static_cast<int>(tmp6));
  ASSIGN_OR_RETURN(tmp8, TqDebugConvert_intptr_Smi_0(accessor, tmp7));
  ASSIGN_OR_RETURN(std::tie(tmp9, tmp10, tmp11), TqDebugNewMutableSlice_InternalClassStructElement_0(accessor, p_o, tmp5, tmp8));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp9, tmp10, tmp11)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFieldSliceInternalClassWithStructElementsMoreEntries
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=69&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_int31_0(d::MemoryAccessor accessor, int31_t p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0
#ifndef V8_INTERNAL_DEFINED_TqDebugConvert_intptr_Smi_0
#define V8_INTERNAL_DEFINED_TqDebugConvert_intptr_Smi_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=283&c=1
Value<intptr_t> TqDebugConvert_intptr_Smi_0(d::MemoryAccessor accessor, uintptr_t p_s) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TorqueDebugMacroShims::CodeStubAssembler::SmiUntag(accessor, p_s));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugConvert_intptr_Smi_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(d::MemoryAccessor accessor, IntegerLiteral p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_intptr_0(accessor, (TorqueDebugMacroShims::CodeStubAssembler::ConstexprIntegerLiteralToIntptr(accessor, p_i))));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_Object_0
#define V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_Object_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=14&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_Object_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1, tmp2)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_Object_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=69&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_int31_0(d::MemoryAccessor accessor, int31_t p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0
#ifndef V8_INTERNAL_DEFINED_TqDebugConvert_intptr_Smi_0
#define V8_INTERNAL_DEFINED_TqDebugConvert_intptr_Smi_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=283&c=1
Value<intptr_t> TqDebugConvert_intptr_Smi_0(d::MemoryAccessor accessor, uintptr_t p_s) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TorqueDebugMacroShims::CodeStubAssembler::SmiUntag(accessor, p_s));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugConvert_intptr_Smi_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(d::MemoryAccessor accessor, IntegerLiteral p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_intptr_0(accessor, (TorqueDebugMacroShims::CodeStubAssembler::ConstexprIntegerLiteralToIntptr(accessor, p_i))));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_Object_0
#define V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_Object_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=14&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_Object_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1, tmp2)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_Object_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_MaybeObject_0
#define V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_MaybeObject_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=25&c=19
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_MaybeObject_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1, tmp2)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_MaybeObject_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=69&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_int31_0(d::MemoryAccessor accessor, int31_t p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0
#ifndef V8_INTERNAL_DEFINED_TqDebugConvert_intptr_Smi_0
#define V8_INTERNAL_DEFINED_TqDebugConvert_intptr_Smi_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=283&c=1
Value<intptr_t> TqDebugConvert_intptr_Smi_0(d::MemoryAccessor accessor, uintptr_t p_s) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TorqueDebugMacroShims::CodeStubAssembler::SmiUntag(accessor, p_s));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugConvert_intptr_Smi_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(d::MemoryAccessor accessor, IntegerLiteral p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_intptr_0(accessor, (TorqueDebugMacroShims::CodeStubAssembler::ConstexprIntegerLiteralToIntptr(accessor, p_i))));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_Smi_OR_TheHole_0
#define V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_Smi_OR_TheHole_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=81&c=19
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_Smi_OR_TheHole_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1, tmp2)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_Smi_OR_TheHole_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=69&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_int31_0(d::MemoryAccessor accessor, int31_t p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0
#ifndef V8_INTERNAL_DEFINED_TqDebugConvert_intptr_Smi_0
#define V8_INTERNAL_DEFINED_TqDebugConvert_intptr_Smi_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=283&c=1
Value<intptr_t> TqDebugConvert_intptr_Smi_0(d::MemoryAccessor accessor, uintptr_t p_s) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TorqueDebugMacroShims::CodeStubAssembler::SmiUntag(accessor, p_s));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugConvert_intptr_Smi_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int32_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int32_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=72&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_int32_0(d::MemoryAccessor accessor, int32_t p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int32_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_Smi_constexpr_IntegerLiteral_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_Smi_constexpr_IntegerLiteral_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=52&c=1
Value<uintptr_t> TqDebugFromConstexpr_Smi_constexpr_IntegerLiteral_0(d::MemoryAccessor accessor, IntegerLiteral p_i) {
  uintptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugConvert_Smi_constexpr_int31_0(accessor, (TorqueDebugMacroShims::CodeStubAssembler::ConstexprIntegerLiteralToInt31(accessor, p_i))));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_Smi_constexpr_IntegerLiteral_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(d::MemoryAccessor accessor, IntegerLiteral p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_intptr_0(accessor, (TorqueDebugMacroShims::CodeStubAssembler::ConstexprIntegerLiteralToIntptr(accessor, p_i))));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_String_0
#define V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_String_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=124&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_String_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1, tmp2)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_String_0
#ifndef V8_INTERNAL_DEFINED_TqDebugConvert_intptr_intptr_0
#define V8_INTERNAL_DEFINED_TqDebugConvert_intptr_intptr_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-string.tq?l=188&c=26
Value<intptr_t> TqDebugConvert_intptr_intptr_0(d::MemoryAccessor accessor, intptr_t p_i) {
  goto block0;

  block0:
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, p_i};
}

#endif // V8_INTERNAL_DEFINED_TqDebugConvert_intptr_intptr_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_NameToIndexHashTable_0
#define V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_NameToIndexHashTable_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=129&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_NameToIndexHashTable_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1, tmp2)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_NameToIndexHashTable_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_SmiTagged_VariableProperties_0
#define V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_SmiTagged_VariableProperties_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=135&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_SmiTagged_VariableProperties_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1, tmp2)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_SmiTagged_VariableProperties_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_Smi_0
#define V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_Smi_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=141&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_Smi_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1, tmp2)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_Smi_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_VariableAllocationInfo_constexpr_NONE_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_VariableAllocationInfo_constexpr_NONE_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=23&c=1
Value<uint32_t> TqDebugFromConstexpr_VariableAllocationInfo_constexpr_NONE_0(d::MemoryAccessor accessor, VariableAllocationInfo p_o) {
  uint32_t tmp0{}; USE(tmp0);
  uint32_t tmp1{}; USE(tmp1);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_o));
  tmp1 = (tmp0);
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp1};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_VariableAllocationInfo_constexpr_NONE_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_FunctionVariableInfo_0
#define V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_FunctionVariableInfo_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=147&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_FunctionVariableInfo_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1, tmp2)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_FunctionVariableInfo_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_Undefined_OR_String_0
#define V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_Undefined_OR_String_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=152&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_Undefined_OR_String_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1, tmp2)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_Undefined_OR_String_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_uint32_constexpr_uint32_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_uint32_constexpr_uint32_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=129&c=1
Value<uint32_t> TqDebugFromConstexpr_uint32_constexpr_uint32_0(d::MemoryAccessor accessor, uint32_t p_i) {
  int32_t tmp0{}; USE(tmp0);
  uint32_t tmp1{}; USE(tmp1);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  ASSIGN_OR_RETURN(tmp1, TorqueDebugMacroShims::CodeStubAssembler::Unsigned(accessor, tmp0));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp1};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_uint32_constexpr_uint32_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_bool_constexpr_bool_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_bool_constexpr_bool_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=150&c=1
Value<bool> TqDebugFromConstexpr_bool_constexpr_bool_0(d::MemoryAccessor accessor, bool p_b) {
  bool tmp0{}; USE(tmp0);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TorqueDebugMacroShims::CodeStubAssembler::BoolConstant(accessor, p_b));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_bool_constexpr_bool_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_PositionInfo_0
#define V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_PositionInfo_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=156&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_PositionInfo_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1, tmp2)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_PositionInfo_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_TheHole_OR_ScopeInfo_0
#define V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_TheHole_OR_ScopeInfo_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=164&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_TheHole_OR_ScopeInfo_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1, tmp2)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_TheHole_OR_ScopeInfo_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_HashTable_0
#define V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_HashTable_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=169&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_HashTable_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1, tmp2)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_HashTable_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_SourceTextModuleInfo_0
#define V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_SourceTextModuleInfo_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=174&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_SourceTextModuleInfo_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1, tmp2)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_SourceTextModuleInfo_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewConstSlice_Smi_0
#define V8_INTERNAL_DEFINED_TqDebugNewConstSlice_Smi_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=176&c=9
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewConstSlice_Smi_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1, tmp2)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewConstSlice_Smi_0
#ifndef V8_INTERNAL_DEFINED_TqDebugConvert_intptr_constexpr_int31_0
#define V8_INTERNAL_DEFINED_TqDebugConvert_intptr_constexpr_int31_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/torque-internal.tq?l=113&c=23
Value<intptr_t> TqDebugConvert_intptr_constexpr_int31_0(d::MemoryAccessor accessor, int31_t p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugConvert_intptr_constexpr_int31_0
#ifndef V8_INTERNAL_DEFINED_TqDebugConvert_uintptr_intptr_0
#define V8_INTERNAL_DEFINED_TqDebugConvert_uintptr_intptr_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=366&c=1
Value<uintptr_t> TqDebugConvert_uintptr_intptr_0(d::MemoryAccessor accessor, intptr_t p_i) {
  uintptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TorqueDebugMacroShims::CodeStubAssembler::Unsigned(accessor, p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugConvert_uintptr_intptr_0
#ifndef V8_INTERNAL_DEFINED_TqDebugTimesSizeOf_Smi_0
#define V8_INTERNAL_DEFINED_TqDebugTimesSizeOf_Smi_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/torque-internal.tq?l=97&c=36
Value<intptr_t> TqDebugTimesSizeOf_Smi_0(d::MemoryAccessor accessor, intptr_t p_i) {
  intptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_int31_0(accessor, kTaggedSize));
  ASSIGN_OR_RETURN(tmp1, TorqueDebugMacroShims::CodeStubAssembler::IntPtrMul(accessor, p_i, tmp0));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp1};
}

#endif // V8_INTERNAL_DEFINED_TqDebugTimesSizeOf_Smi_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewReference_Smi_0
#define V8_INTERNAL_DEFINED_TqDebugNewReference_Smi_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/torque-internal.tq?l=96&c=12
Value<std::tuple<uintptr_t, intptr_t>> TqDebugNewReference_Smi_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  goto block0;

  block0:
  std::tie(tmp0, tmp1) = (std::make_tuple(p_object, p_offset));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewReference_Smi_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_ModuleVariable_0
#define V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_ModuleVariable_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=178&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_ModuleVariable_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1, tmp2)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_ModuleVariable_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_float64_or_hole_0
#define V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_float64_or_hole_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=19&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_float64_or_hole_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1, tmp2)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_float64_or_hole_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=69&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_int31_0(d::MemoryAccessor accessor, int31_t p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0
#ifndef V8_INTERNAL_DEFINED_TqDebugConvert_intptr_int32_0
#define V8_INTERNAL_DEFINED_TqDebugConvert_intptr_int32_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=203&c=1
Value<intptr_t> TqDebugConvert_intptr_int32_0(d::MemoryAccessor accessor, int32_t p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TorqueDebugMacroShims::CodeStubAssembler::ChangeInt32ToIntPtr(accessor, p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugConvert_intptr_int32_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(d::MemoryAccessor accessor, IntegerLiteral p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_intptr_0(accessor, (TorqueDebugMacroShims::CodeStubAssembler::ConstexprIntegerLiteralToIntptr(accessor, p_i))));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_CoverageInfoSlot_0
#define V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_CoverageInfoSlot_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=68&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_CoverageInfoSlot_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1, tmp2)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_CoverageInfoSlot_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=69&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_int31_0(d::MemoryAccessor accessor, int31_t p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0
#ifndef V8_INTERNAL_DEFINED_TqDebugConvert_intptr_uint16_0
#define V8_INTERNAL_DEFINED_TqDebugConvert_intptr_uint16_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=227&c=1
Value<intptr_t> TqDebugConvert_intptr_uint16_0(d::MemoryAccessor accessor, uint16_t p_ui) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TorqueDebugMacroShims::CodeStubAssembler::ChangeUint32ToWord(accessor, p_ui));
  ASSIGN_OR_RETURN(tmp1, TorqueDebugMacroShims::CodeStubAssembler::Signed(accessor, tmp0));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp1};
}

#endif // V8_INTERNAL_DEFINED_TqDebugConvert_intptr_uint16_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(d::MemoryAccessor accessor, IntegerLiteral p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_intptr_0(accessor, (TorqueDebugMacroShims::CodeStubAssembler::ConstexprIntegerLiteralToIntptr(accessor, p_i))));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_DescriptorEntry_0
#define V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_DescriptorEntry_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=25&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_DescriptorEntry_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1, tmp2)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_DescriptorEntry_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=69&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_int31_0(d::MemoryAccessor accessor, int31_t p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0
#ifndef V8_INTERNAL_DEFINED_TqDebugConvert_intptr_int32_0
#define V8_INTERNAL_DEFINED_TqDebugConvert_intptr_int32_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=203&c=1
Value<intptr_t> TqDebugConvert_intptr_int32_0(d::MemoryAccessor accessor, int32_t p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TorqueDebugMacroShims::CodeStubAssembler::ChangeInt32ToIntPtr(accessor, p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugConvert_intptr_int32_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(d::MemoryAccessor accessor, IntegerLiteral p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_intptr_0(accessor, (TorqueDebugMacroShims::CodeStubAssembler::ConstexprIntegerLiteralToIntptr(accessor, p_i))));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_MaybeObject_0
#define V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_MaybeObject_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=25&c=19
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_MaybeObject_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1, tmp2)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_MaybeObject_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_uint8_0
#define V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_uint8_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=49
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_uint8_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1, tmp2)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_uint8_0
#ifndef V8_INTERNAL_DEFINED_TqDebugConvert_intptr_constexpr_IntegerLiteral_0
#define V8_INTERNAL_DEFINED_TqDebugConvert_intptr_constexpr_IntegerLiteral_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=554&c=47
Value<intptr_t> TqDebugConvert_intptr_constexpr_IntegerLiteral_0(d::MemoryAccessor accessor, IntegerLiteral p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(accessor, p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugConvert_intptr_constexpr_IntegerLiteral_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(d::MemoryAccessor accessor, IntegerLiteral p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_intptr_0(accessor, (TorqueDebugMacroShims::CodeStubAssembler::ConstexprIntegerLiteralToIntptr(accessor, p_i))));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_uint8_0
#define V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_uint8_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=49
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_uint8_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1, tmp2)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_uint8_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=69&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_int31_0(d::MemoryAccessor accessor, int31_t p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0
#ifndef V8_INTERNAL_DEFINED_TqDebugConvert_intptr_uint8_0
#define V8_INTERNAL_DEFINED_TqDebugConvert_intptr_uint8_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=230&c=1
Value<intptr_t> TqDebugConvert_intptr_uint8_0(d::MemoryAccessor accessor, uint8_t p_ui) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TorqueDebugMacroShims::CodeStubAssembler::ChangeUint32ToWord(accessor, p_ui));
  ASSIGN_OR_RETURN(tmp1, TorqueDebugMacroShims::CodeStubAssembler::Signed(accessor, tmp0));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp1};
}

#endif // V8_INTERNAL_DEFINED_TqDebugConvert_intptr_uint8_0
#ifndef V8_INTERNAL_DEFINED_TqDebugConvert_intptr_intptr_0
#define V8_INTERNAL_DEFINED_TqDebugConvert_intptr_intptr_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-string.tq?l=188&c=26
Value<intptr_t> TqDebugConvert_intptr_intptr_0(d::MemoryAccessor accessor, intptr_t p_i) {
  goto block0;

  block0:
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, p_i};
}

#endif // V8_INTERNAL_DEFINED_TqDebugConvert_intptr_intptr_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_JSReceiver_OR_Undefined_OR_Null_OR_False_OR_True_OR_Symbol_OR_String_OR_BigInt_OR_HeapNumber_OR_Smi_OR_TheHole_0
#define V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_JSReceiver_OR_Undefined_OR_Null_OR_False_OR_True_OR_Symbol_OR_String_OR_BigInt_OR_HeapNumber_OR_Smi_OR_TheHole_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=33&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_JSReceiver_OR_Undefined_OR_Null_OR_False_OR_True_OR_Symbol_OR_String_OR_BigInt_OR_HeapNumber_OR_Smi_OR_TheHole_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1, tmp2)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_JSReceiver_OR_Undefined_OR_Null_OR_False_OR_True_OR_Symbol_OR_String_OR_BigInt_OR_HeapNumber_OR_Smi_OR_TheHole_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_HashMapEntry_0
#define V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_HashMapEntry_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=72&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_HashMapEntry_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1, tmp2)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_HashMapEntry_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_NameDictionaryEntry_0
#define V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_NameDictionaryEntry_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=112&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_NameDictionaryEntry_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1, tmp2)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_NameDictionaryEntry_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=69&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_int31_0(d::MemoryAccessor accessor, int31_t p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0
#ifndef V8_INTERNAL_DEFINED_TqDebugConvert_intptr_int32_0
#define V8_INTERNAL_DEFINED_TqDebugConvert_intptr_int32_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=203&c=1
Value<intptr_t> TqDebugConvert_intptr_int32_0(d::MemoryAccessor accessor, int32_t p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TorqueDebugMacroShims::CodeStubAssembler::ChangeInt32ToIntPtr(accessor, p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugConvert_intptr_int32_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(d::MemoryAccessor accessor, IntegerLiteral p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_intptr_0(accessor, (TorqueDebugMacroShims::CodeStubAssembler::ConstexprIntegerLiteralToIntptr(accessor, p_i))));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewConstSlice_char8_0
#define V8_INTERNAL_DEFINED_TqDebugNewConstSlice_char8_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=109&c=9
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewConstSlice_char8_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1, tmp2)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewConstSlice_char8_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewConstSlice_char16_0
#define V8_INTERNAL_DEFINED_TqDebugNewConstSlice_char16_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=114&c=9
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewConstSlice_char16_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1, tmp2)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewConstSlice_char16_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=69&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_int31_0(d::MemoryAccessor accessor, int31_t p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0
#ifndef V8_INTERNAL_DEFINED_TqDebugConvert_intptr_int32_0
#define V8_INTERNAL_DEFINED_TqDebugConvert_intptr_int32_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=203&c=1
Value<intptr_t> TqDebugConvert_intptr_int32_0(d::MemoryAccessor accessor, int32_t p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TorqueDebugMacroShims::CodeStubAssembler::ChangeInt32ToIntPtr(accessor, p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugConvert_intptr_int32_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(d::MemoryAccessor accessor, IntegerLiteral p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_intptr_0(accessor, (TorqueDebugMacroShims::CodeStubAssembler::ConstexprIntegerLiteralToIntptr(accessor, p_i))));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0
#ifndef V8_INTERNAL_DEFINED_TqDebugConvert_intptr_intptr_0
#define V8_INTERNAL_DEFINED_TqDebugConvert_intptr_intptr_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-string.tq?l=188&c=26
Value<intptr_t> TqDebugConvert_intptr_intptr_0(d::MemoryAccessor accessor, intptr_t p_i) {
  goto block0;

  block0:
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, p_i};
}

#endif // V8_INTERNAL_DEFINED_TqDebugConvert_intptr_intptr_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_JSReceiver_OR_Undefined_OR_Null_OR_False_OR_True_OR_Symbol_OR_String_OR_BigInt_OR_HeapNumber_OR_Smi_OR_TheHole_0
#define V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_JSReceiver_OR_Undefined_OR_Null_OR_False_OR_True_OR_Symbol_OR_String_OR_BigInt_OR_HeapNumber_OR_Smi_OR_TheHole_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=33&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_JSReceiver_OR_Undefined_OR_Null_OR_False_OR_True_OR_Symbol_OR_String_OR_BigInt_OR_HeapNumber_OR_Smi_OR_TheHole_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1, tmp2)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_JSReceiver_OR_Undefined_OR_Null_OR_False_OR_True_OR_Symbol_OR_String_OR_BigInt_OR_HeapNumber_OR_Smi_OR_TheHole_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int32_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int32_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=72&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_int32_0(d::MemoryAccessor accessor, int32_t p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int32_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_uint8_0
#define V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_uint8_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=49
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_uint8_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1, tmp2)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_uint8_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=69&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_int31_0(d::MemoryAccessor accessor, int31_t p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_int31_0
#ifndef V8_INTERNAL_DEFINED_TqDebugConvert_intptr_Smi_0
#define V8_INTERNAL_DEFINED_TqDebugConvert_intptr_Smi_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=283&c=1
Value<intptr_t> TqDebugConvert_intptr_Smi_0(d::MemoryAccessor accessor, uintptr_t p_s) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TorqueDebugMacroShims::CodeStubAssembler::SmiUntag(accessor, p_s));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugConvert_intptr_Smi_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0(d::MemoryAccessor accessor, IntegerLiteral p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_intptr_constexpr_intptr_0(accessor, (TorqueDebugMacroShims::CodeStubAssembler::ConstexprIntegerLiteralToIntptr(accessor, p_i))));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_IntegerLiteral_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_Smi_0
#define V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_Smi_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=141&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_Smi_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1, tmp2)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_Smi_0
#ifndef V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_InternalClassStructElement_0
#define V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_InternalClassStructElement_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1209&c=3
Value<std::tuple<uintptr_t, intptr_t, intptr_t>> TqDebugNewMutableSlice_InternalClassStructElement_0(d::MemoryAccessor accessor, uintptr_t p_object, intptr_t p_offset, intptr_t p_length) {
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, std::make_tuple(tmp0, tmp1, tmp2)};
}

#endif // V8_INTERNAL_DEFINED_TqDebugNewMutableSlice_InternalClassStructElement_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=75&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_intptr_0(d::MemoryAccessor accessor, intptr_t p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=75&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_intptr_0(d::MemoryAccessor accessor, intptr_t p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=75&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_intptr_0(d::MemoryAccessor accessor, intptr_t p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0
#ifndef V8_INTERNAL_DEFINED_TqDebugConvert_Smi_constexpr_int31_0
#define V8_INTERNAL_DEFINED_TqDebugConvert_Smi_constexpr_int31_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=53&c=10
Value<uintptr_t> TqDebugConvert_Smi_constexpr_int31_0(d::MemoryAccessor accessor, int31_t p_i) {
  uintptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  ASSIGN_OR_RETURN(tmp0, TqDebugFromConstexpr_Smi_constexpr_int31_0(accessor, p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugConvert_Smi_constexpr_int31_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=75&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_intptr_0(d::MemoryAccessor accessor, intptr_t p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=75&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_intptr_0(d::MemoryAccessor accessor, intptr_t p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=75&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_intptr_0(d::MemoryAccessor accessor, intptr_t p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=75&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_intptr_0(d::MemoryAccessor accessor, intptr_t p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=75&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_intptr_0(d::MemoryAccessor accessor, intptr_t p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=75&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_intptr_0(d::MemoryAccessor accessor, intptr_t p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=75&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_intptr_0(d::MemoryAccessor accessor, intptr_t p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=75&c=1
Value<intptr_t> TqDebugFromConstexpr_intptr_constexpr_intptr_0(d::MemoryAccessor accessor, intptr_t p_i) {
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_intptr_constexpr_intptr_0
#ifndef V8_INTERNAL_DEFINED_TqDebugFromConstexpr_Smi_constexpr_int31_0
#define V8_INTERNAL_DEFINED_TqDebugFromConstexpr_Smi_constexpr_int31_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=81&c=1
Value<uintptr_t> TqDebugFromConstexpr_Smi_constexpr_int31_0(d::MemoryAccessor accessor, int31_t p_i) {
  uintptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = Internals::IntToSmi(CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return {d::MemoryAccessResult::kOk, tmp0};
}

#endif // V8_INTERNAL_DEFINED_TqDebugFromConstexpr_Smi_constexpr_int31_0
}  // namespace internal
}  // namespace v8
}  // namespace debug_helper_internal

