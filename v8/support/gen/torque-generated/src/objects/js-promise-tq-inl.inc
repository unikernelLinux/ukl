// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=35&c=3
template<class D, class P>
Object TorqueGeneratedJSPromise<D, P>::reactions_or_result() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSPromise::reactions_or_result(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=35&c=3
template<class D, class P>
Object TorqueGeneratedJSPromise<D, P>::reactions_or_result(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kReactionsOrResultOffset);
  DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi() || value.IsPromiseReaction());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=35&c=3
template<class D, class P>
void TorqueGeneratedJSPromise<D, P>::set_reactions_or_result(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi() || value.IsPromiseReaction());
  WRITE_FIELD(*this, kReactionsOrResultOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kReactionsOrResultOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=36&c=3
template<class D, class P>
int TorqueGeneratedJSPromise<D, P>::flags() const {
  int value;
  value = TaggedField<Smi>::load(*this, kFlagsOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=36&c=3
template<class D, class P>
void TorqueGeneratedJSPromise<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=13&c=1
template<class D, class P>
D TorqueGeneratedJSPromise<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSPromise<D, P>::TorqueGeneratedJSPromise(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSPromise_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSPromise<D, P>::TorqueGeneratedJSPromise(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSPromise_NonInline(*this));
}
