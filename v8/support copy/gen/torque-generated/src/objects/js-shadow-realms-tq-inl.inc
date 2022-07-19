// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shadow-realms.tq?l=5&c=47
template<class D, class P>
NativeContext TorqueGeneratedJSShadowRealm<D, P>::native_context() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSShadowRealm::native_context(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shadow-realms.tq?l=5&c=47
template<class D, class P>
NativeContext TorqueGeneratedJSShadowRealm<D, P>::native_context(PtrComprCageBase cage_base) const {
  NativeContext value;
  value = TaggedField<NativeContext>::load(cage_base, *this, kNativeContextOffset);
  DCHECK(value.IsNativeContext());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shadow-realms.tq?l=5&c=47
template<class D, class P>
void TorqueGeneratedJSShadowRealm<D, P>::set_native_context(NativeContext value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsNativeContext());
  WRITE_FIELD(*this, kNativeContextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNativeContextOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shadow-realms.tq?l=5&c=1
template<class D, class P>
D TorqueGeneratedJSShadowRealm<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSShadowRealm<D, P>::TorqueGeneratedJSShadowRealm(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSShadowRealm_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSShadowRealm<D, P>::TorqueGeneratedJSShadowRealm(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSShadowRealm_NonInline(*this));
}
