// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=7&c=3
template<class D, class P>
uint32_t TorqueGeneratedName<D, P>::raw_hash_field() const {
  uint32_t value;
  value = this->template ReadField<uint32_t>(kRawHashFieldOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=7&c=3
template<class D, class P>
void TorqueGeneratedName<D, P>::set_raw_hash_field(uint32_t value) {
  this->template WriteField<uint32_t>(kRawHashFieldOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=5&c=1
template<class D, class P>
D TorqueGeneratedName<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedName<D, P>::TorqueGeneratedName(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsName_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedName<D, P>::TorqueGeneratedName(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsName_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=30&c=3
template<class D, class P>
uint32_t TorqueGeneratedSymbol<D, P>::flags() const {
  uint32_t value;
  value = this->template ReadField<uint32_t>(kFlagsOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=30&c=3
template<class D, class P>
void TorqueGeneratedSymbol<D, P>::set_flags(uint32_t value) {
  this->template WriteField<uint32_t>(kFlagsOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=31&c=3
template<class D, class P>
PrimitiveHeapObject TorqueGeneratedSymbol<D, P>::description() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedSymbol::description(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=31&c=3
template<class D, class P>
PrimitiveHeapObject TorqueGeneratedSymbol<D, P>::description(PtrComprCageBase cage_base) const {
  PrimitiveHeapObject value;
  value = TaggedField<PrimitiveHeapObject>::load(cage_base, *this, kDescriptionOffset);
  DCHECK(value.IsUndefined() || value.IsString());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=31&c=3
template<class D, class P>
void TorqueGeneratedSymbol<D, P>::set_description(PrimitiveHeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsString());
  WRITE_FIELD(*this, kDescriptionOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDescriptionOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=29&c=1
template<class D, class P>
D TorqueGeneratedSymbol<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedSymbol<D, P>::TorqueGeneratedSymbol(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsSymbol_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedSymbol<D, P>::TorqueGeneratedSymbol(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsSymbol_NonInline(*this));
}
