// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1194&c=3
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceInternalClassWithSmiElementsEntries(InternalClassWithSmiElements p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1208&c=3
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceInternalClassWithStructElementsEntries(InternalClassWithStructElements p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1209&c=3
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceInternalClassWithStructElementsMoreEntries(InternalClassWithStructElements p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=69&c=1
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_int31_0(int31_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=283&c=1
inline intptr_t TqRuntimeConvert_intptr_Smi_0(Smi p_s);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0(IntegerLiteral p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=141&c=3
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_Smi_0(Object p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1209&c=3
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_InternalClassStructElement_0(Object p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=75&c=1
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_intptr_0(intptr_t p_i);

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceInternalClassWithSmiElementsEntries
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceInternalClassWithSmiElementsEntries

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1194&c=3
std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceInternalClassWithSmiElementsEntries(InternalClassWithSmiElements p_o) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  Smi tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  Object tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(4);
  tmp1 = TaggedField<Smi>::load(*static_cast<HeapObject*>(&p_o), static_cast<int>(tmp0));
  tmp2 = TqRuntimeConvert_intptr_Smi_0(tmp1);
  tmp3 = TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0(IntegerLiteral(false, 0x10ull));
  std::tie(tmp4, tmp5, tmp6) = TqRuntimeNewMutableSlice_Smi_0(p_o, tmp3, tmp2);
  goto block2;

  block2:
  return std::make_tuple(tmp4, tmp5, tmp6);
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeFieldSliceInternalClassWithSmiElementsEntries
#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceInternalClassWithStructElementsEntries
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceInternalClassWithStructElementsEntries

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1208&c=3
std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceInternalClassWithStructElementsEntries(InternalClassWithStructElements p_o) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  Smi tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  Object tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(12);
  tmp1 = TaggedField<Smi>::load(*static_cast<HeapObject*>(&p_o), static_cast<int>(tmp0));
  tmp2 = TqRuntimeConvert_intptr_Smi_0(tmp1);
  tmp3 = TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0(IntegerLiteral(false, 0x18ull));
  std::tie(tmp4, tmp5, tmp6) = TqRuntimeNewMutableSlice_Smi_0(p_o, tmp3, tmp2);
  goto block2;

  block2:
  return std::make_tuple(tmp4, tmp5, tmp6);
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeFieldSliceInternalClassWithStructElementsEntries
#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceInternalClassWithStructElementsMoreEntries
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceInternalClassWithStructElementsMoreEntries

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1209&c=3
std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceInternalClassWithStructElementsMoreEntries(InternalClassWithStructElements p_o) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  Smi tmp7{}; USE(tmp7);
  intptr_t tmp8{}; USE(tmp8);
  Object tmp9{}; USE(tmp9);
  intptr_t tmp10{}; USE(tmp10);
  intptr_t tmp11{}; USE(tmp11);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = TqRuntimeFieldSliceInternalClassWithStructElementsEntries(p_o);
  tmp3 = TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0(IntegerLiteral(false, 0x4ull));
  tmp4 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrMul(tmp3, tmp2);
  tmp5 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrAdd(tmp1, tmp4);
  tmp6 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(12);
  tmp7 = TaggedField<Smi>::load(*static_cast<HeapObject*>(&p_o), static_cast<int>(tmp6));
  tmp8 = TqRuntimeConvert_intptr_Smi_0(tmp7);
  std::tie(tmp9, tmp10, tmp11) = TqRuntimeNewMutableSlice_InternalClassStructElement_0(p_o, tmp5, tmp8);
  goto block2;

  block2:
  return std::make_tuple(tmp9, tmp10, tmp11);
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeFieldSliceInternalClassWithStructElementsMoreEntries
#ifndef V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_int31_0
#define V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_int31_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=69&c=1
intptr_t TqRuntimeFromConstexpr_intptr_constexpr_int31_0(int31_t p_i) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return tmp0;
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_int31_0
#ifndef V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_Smi_0
#define V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_Smi_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=283&c=1
intptr_t TqRuntimeConvert_intptr_Smi_0(Smi p_s) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = TorqueRuntimeMacroShims::CodeStubAssembler::SmiUntag(p_s);
  goto block2;

  block2:
  return tmp0;
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_Smi_0
#ifndef V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0
#define V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
intptr_t TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0(IntegerLiteral p_i) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_intptr_0((TorqueRuntimeMacroShims::CodeStubAssembler::ConstexprIntegerLiteralToIntptr(p_i)));
  goto block2;

  block2:
  return tmp0;
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0
#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_Smi_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_Smi_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=141&c=3
std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_Smi_0(Object p_object, intptr_t p_offset, intptr_t p_length) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return std::make_tuple(tmp0, tmp1, tmp2);
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_Smi_0
#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_InternalClassStructElement_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_InternalClassStructElement_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1209&c=3
std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_InternalClassStructElement_0(Object p_object, intptr_t p_offset, intptr_t p_length) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return std::make_tuple(tmp0, tmp1, tmp2);
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_InternalClassStructElement_0
#ifndef V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_intptr_0
#define V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_intptr_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=75&c=1
intptr_t TqRuntimeFromConstexpr_intptr_constexpr_intptr_0(intptr_t p_i) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return tmp0;
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_intptr_0
