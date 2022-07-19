// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=81&c=19
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSloppyArgumentsElementsMappedEntries(SloppyArgumentsElements p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=69&c=1
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_int31_0(int31_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=283&c=1
inline intptr_t TqRuntimeConvert_intptr_Smi_0(Smi p_s);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0(IntegerLiteral p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=81&c=19
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_Smi_OR_TheHole_0(Object p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=75&c=1
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_intptr_0(intptr_t p_i);

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSloppyArgumentsElementsMappedEntries
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSloppyArgumentsElementsMappedEntries

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=81&c=19
std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSloppyArgumentsElementsMappedEntries(SloppyArgumentsElements p_o) {
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
  std::tie(tmp4, tmp5, tmp6) = TqRuntimeNewMutableSlice_Smi_OR_TheHole_0(p_o, tmp3, tmp2);
  goto block2;

  block2:
  return std::make_tuple(tmp4, tmp5, tmp6);
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSloppyArgumentsElementsMappedEntries
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
#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_Smi_OR_TheHole_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_Smi_OR_TheHole_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=81&c=19
std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_Smi_OR_TheHole_0(Object p_object, intptr_t p_offset, intptr_t p_length) {
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

#endif // V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_Smi_OR_TheHole_0
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
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=5&c=1
template<class D, class P>
D TorqueGeneratedJSArgumentsObject<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSArgumentsObject<D, P>::TorqueGeneratedJSArgumentsObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSArgumentsObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSArgumentsObject<D, P>::TorqueGeneratedJSArgumentsObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSArgumentsObject_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=24&c=3
template<class D, class P>
Object TorqueGeneratedJSStrictArgumentsObject<D, P>::length() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSStrictArgumentsObject::length(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=24&c=3
template<class D, class P>
Object TorqueGeneratedJSStrictArgumentsObject<D, P>::length(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kLengthOffset);
  DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=24&c=3
template<class D, class P>
void TorqueGeneratedJSStrictArgumentsObject<D, P>::set_length(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi());
  WRITE_FIELD(*this, kLengthOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kLengthOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=23&c=1
template<class D, class P>
D TorqueGeneratedJSStrictArgumentsObject<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSStrictArgumentsObject<D, P>::TorqueGeneratedJSStrictArgumentsObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSArgumentsObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSStrictArgumentsObject<D, P>::TorqueGeneratedJSStrictArgumentsObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSArgumentsObject_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=18&c=3
template<class D, class P>
Object TorqueGeneratedJSSloppyArgumentsObject<D, P>::length() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSSloppyArgumentsObject::length(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=18&c=3
template<class D, class P>
Object TorqueGeneratedJSSloppyArgumentsObject<D, P>::length(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kLengthOffset);
  DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=18&c=3
template<class D, class P>
void TorqueGeneratedJSSloppyArgumentsObject<D, P>::set_length(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi());
  WRITE_FIELD(*this, kLengthOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kLengthOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=19&c=3
template<class D, class P>
Object TorqueGeneratedJSSloppyArgumentsObject<D, P>::callee() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSSloppyArgumentsObject::callee(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=19&c=3
template<class D, class P>
Object TorqueGeneratedJSSloppyArgumentsObject<D, P>::callee(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kCalleeOffset);
  DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=19&c=3
template<class D, class P>
void TorqueGeneratedJSSloppyArgumentsObject<D, P>::set_callee(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi());
  WRITE_FIELD(*this, kCalleeOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCalleeOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=17&c=1
template<class D, class P>
D TorqueGeneratedJSSloppyArgumentsObject<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSSloppyArgumentsObject<D, P>::TorqueGeneratedJSSloppyArgumentsObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSArgumentsObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSSloppyArgumentsObject<D, P>::TorqueGeneratedJSSloppyArgumentsObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSArgumentsObject_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=79&c=3
template<class D, class P>
Context TorqueGeneratedSloppyArgumentsElements<D, P>::context() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedSloppyArgumentsElements::context(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=79&c=3
template<class D, class P>
Context TorqueGeneratedSloppyArgumentsElements<D, P>::context(PtrComprCageBase cage_base) const {
  Context value;
  value = TaggedField<Context>::load(cage_base, *this, kContextOffset);
  DCHECK(value.IsContext());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=79&c=3
template<class D, class P>
void TorqueGeneratedSloppyArgumentsElements<D, P>::set_context(Context value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsContext());
  WRITE_FIELD(*this, kContextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kContextOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=80&c=3
template<class D, class P>
FixedArray TorqueGeneratedSloppyArgumentsElements<D, P>::arguments() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedSloppyArgumentsElements::arguments(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=80&c=3
template<class D, class P>
FixedArray TorqueGeneratedSloppyArgumentsElements<D, P>::arguments(PtrComprCageBase cage_base) const {
  FixedArray value;
  value = TaggedField<FixedArray>::load(cage_base, *this, kArgumentsOffset);
  DCHECK(value.IsFixedArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=80&c=3
template<class D, class P>
void TorqueGeneratedSloppyArgumentsElements<D, P>::set_arguments(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kArgumentsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kArgumentsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=81&c=19
template<class D, class P>
Object TorqueGeneratedSloppyArgumentsElements<D, P>::mapped_entries(int i, RelaxedLoadTag) const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedSloppyArgumentsElements::mapped_entries(cage_base, i, kRelaxedLoad);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=81&c=19
template<class D, class P>
Object TorqueGeneratedSloppyArgumentsElements<D, P>::mapped_entries(PtrComprCageBase cage_base, int i, RelaxedLoadTag) const {
  Object value;
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this ->length());
  int offset = kMappedEntriesOffset + i * kTaggedSize;
  value = TaggedField<Object>::Relaxed_Load(cage_base, *this, offset);
  DCHECK(value.IsSmi() || value.IsTheHole());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=81&c=19
template<class D, class P>
void TorqueGeneratedSloppyArgumentsElements<D, P>::set_mapped_entries(int i, Object value, WriteBarrierMode mode) {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this ->length());
  int offset = kMappedEntriesOffset + i * kTaggedSize;
  SLOW_DCHECK(value.IsSmi() || value.IsTheHole());
  WRITE_FIELD(*this, offset, value);
  CONDITIONAL_WRITE_BARRIER(*this, offset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=77&c=1
template<class D, class P>
D TorqueGeneratedSloppyArgumentsElements<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedSloppyArgumentsElements<D, P>::TorqueGeneratedSloppyArgumentsElements(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsSloppyArgumentsElements_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedSloppyArgumentsElements<D, P>::TorqueGeneratedSloppyArgumentsElements(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsSloppyArgumentsElements_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(SloppyArgumentsElements)
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=91&c=53
template<class D, class P>
int TorqueGeneratedAliasedArgumentsEntry<D, P>::aliased_context_slot() const {
  int value;
  value = TaggedField<Smi>::load(*this, kAliasedContextSlotOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=91&c=53
template<class D, class P>
void TorqueGeneratedAliasedArgumentsEntry<D, P>::set_aliased_context_slot(int value) {
  WRITE_FIELD(*this, kAliasedContextSlotOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=91&c=1
template<class D, class P>
D TorqueGeneratedAliasedArgumentsEntry<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedAliasedArgumentsEntry<D, P>::TorqueGeneratedAliasedArgumentsEntry(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsAliasedArgumentsEntry_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedAliasedArgumentsEntry<D, P>::TorqueGeneratedAliasedArgumentsEntry(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsAliasedArgumentsEntry_NonInline(*this));
}
