// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=8&c=3
template<class D, class P>
Foreign TorqueGeneratedJSCollator<D, P>::icu_collator() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSCollator::icu_collator(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=8&c=3
template<class D, class P>
Foreign TorqueGeneratedJSCollator<D, P>::icu_collator(PtrComprCageBase cage_base) const {
  Foreign value;
  value = TaggedField<Foreign>::load(cage_base, *this, kIcuCollatorOffset);
  DCHECK(value.IsForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=8&c=3
template<class D, class P>
void TorqueGeneratedJSCollator<D, P>::set_icu_collator(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kIcuCollatorOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIcuCollatorOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=9&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSCollator<D, P>::bound_compare() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSCollator::bound_compare(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=9&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSCollator<D, P>::bound_compare(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kBoundCompareOffset);
  DCHECK(value.IsUndefined() || value.IsJSFunction());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=9&c=3
template<class D, class P>
void TorqueGeneratedJSCollator<D, P>::set_bound_compare(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsJSFunction());
  WRITE_FIELD(*this, kBoundCompareOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBoundCompareOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=10&c=3
template<class D, class P>
String TorqueGeneratedJSCollator<D, P>::locale() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSCollator::locale(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=10&c=3
template<class D, class P>
String TorqueGeneratedJSCollator<D, P>::locale(PtrComprCageBase cage_base) const {
  String value;
  value = TaggedField<String>::load(cage_base, *this, kLocaleOffset);
  DCHECK(value.IsString());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=10&c=3
template<class D, class P>
void TorqueGeneratedJSCollator<D, P>::set_locale(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kLocaleOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kLocaleOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=7&c=1
template<class D, class P>
D TorqueGeneratedJSCollator<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSCollator<D, P>::TorqueGeneratedJSCollator(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSCollator_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSCollator<D, P>::TorqueGeneratedJSCollator(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSCollator_NonInline(*this));
}
