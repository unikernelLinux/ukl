// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=6&c=3
template<class D, class P>
int TorqueGeneratedArrayBoilerplateDescription<D, P>::flags() const {
  int value;
  value = TaggedField<Smi>::load(*this, kFlagsOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=6&c=3
template<class D, class P>
void TorqueGeneratedArrayBoilerplateDescription<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=7&c=3
template<class D, class P>
FixedArrayBase TorqueGeneratedArrayBoilerplateDescription<D, P>::constant_elements() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedArrayBoilerplateDescription::constant_elements(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=7&c=3
template<class D, class P>
FixedArrayBase TorqueGeneratedArrayBoilerplateDescription<D, P>::constant_elements(PtrComprCageBase cage_base) const {
  FixedArrayBase value;
  value = TaggedField<FixedArrayBase>::load(cage_base, *this, kConstantElementsOffset);
  DCHECK(value.IsFixedArrayBase());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=7&c=3
template<class D, class P>
void TorqueGeneratedArrayBoilerplateDescription<D, P>::set_constant_elements(FixedArrayBase value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArrayBase());
  WRITE_FIELD(*this, kConstantElementsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kConstantElementsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=5&c=1
template<class D, class P>
D TorqueGeneratedArrayBoilerplateDescription<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedArrayBoilerplateDescription<D, P>::TorqueGeneratedArrayBoilerplateDescription(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsArrayBoilerplateDescription_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedArrayBoilerplateDescription<D, P>::TorqueGeneratedArrayBoilerplateDescription(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsArrayBoilerplateDescription_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=11&c=3
template<class D, class P>
FixedArray TorqueGeneratedRegExpBoilerplateDescription<D, P>::data() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedRegExpBoilerplateDescription::data(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=11&c=3
template<class D, class P>
FixedArray TorqueGeneratedRegExpBoilerplateDescription<D, P>::data(PtrComprCageBase cage_base) const {
  FixedArray value;
  value = TaggedField<FixedArray>::load(cage_base, *this, kDataOffset);
  DCHECK(value.IsFixedArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=11&c=3
template<class D, class P>
void TorqueGeneratedRegExpBoilerplateDescription<D, P>::set_data(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDataOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=12&c=3
template<class D, class P>
String TorqueGeneratedRegExpBoilerplateDescription<D, P>::source() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedRegExpBoilerplateDescription::source(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=12&c=3
template<class D, class P>
String TorqueGeneratedRegExpBoilerplateDescription<D, P>::source(PtrComprCageBase cage_base) const {
  String value;
  value = TaggedField<String>::load(cage_base, *this, kSourceOffset);
  DCHECK(value.IsString());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=12&c=3
template<class D, class P>
void TorqueGeneratedRegExpBoilerplateDescription<D, P>::set_source(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kSourceOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSourceOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=13&c=3
template<class D, class P>
int TorqueGeneratedRegExpBoilerplateDescription<D, P>::flags() const {
  int value;
  value = TaggedField<Smi>::load(*this, kFlagsOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=13&c=3
template<class D, class P>
void TorqueGeneratedRegExpBoilerplateDescription<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=10&c=1
template<class D, class P>
D TorqueGeneratedRegExpBoilerplateDescription<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedRegExpBoilerplateDescription<D, P>::TorqueGeneratedRegExpBoilerplateDescription(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsRegExpBoilerplateDescription_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedRegExpBoilerplateDescription<D, P>::TorqueGeneratedRegExpBoilerplateDescription(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsRegExpBoilerplateDescription_NonInline(*this));
}
