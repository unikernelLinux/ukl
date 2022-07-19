// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=19&c=3
template<class D, class P>
Foreign TorqueGeneratedJSDisplayNames<D, P>::internal() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSDisplayNames::internal(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=19&c=3
template<class D, class P>
Foreign TorqueGeneratedJSDisplayNames<D, P>::internal(PtrComprCageBase cage_base) const {
  Foreign value;
  value = TaggedField<Foreign>::load(cage_base, *this, kInternalOffset);
  DCHECK(value.IsForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=19&c=3
template<class D, class P>
void TorqueGeneratedJSDisplayNames<D, P>::set_internal(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kInternalOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInternalOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=20&c=3
template<class D, class P>
int TorqueGeneratedJSDisplayNames<D, P>::flags() const {
  int value;
  value = TaggedField<Smi>::load(*this, kFlagsOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=20&c=3
template<class D, class P>
void TorqueGeneratedJSDisplayNames<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=18&c=1
template<class D, class P>
D TorqueGeneratedJSDisplayNames<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSDisplayNames<D, P>::TorqueGeneratedJSDisplayNames(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSDisplayNames_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSDisplayNames<D, P>::TorqueGeneratedJSDisplayNames(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSDisplayNames_NonInline(*this));
}
