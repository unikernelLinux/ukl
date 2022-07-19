// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=8&c=3
template<class D, class P>
String TorqueGeneratedJSNumberFormat<D, P>::locale() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSNumberFormat::locale(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=8&c=3
template<class D, class P>
String TorqueGeneratedJSNumberFormat<D, P>::locale(PtrComprCageBase cage_base) const {
  String value;
  value = TaggedField<String>::load(cage_base, *this, kLocaleOffset);
  DCHECK(value.IsString());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=8&c=3
template<class D, class P>
void TorqueGeneratedJSNumberFormat<D, P>::set_locale(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kLocaleOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kLocaleOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=9&c=3
template<class D, class P>
Foreign TorqueGeneratedJSNumberFormat<D, P>::icu_number_formatter() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSNumberFormat::icu_number_formatter(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=9&c=3
template<class D, class P>
Foreign TorqueGeneratedJSNumberFormat<D, P>::icu_number_formatter(PtrComprCageBase cage_base) const {
  Foreign value;
  value = TaggedField<Foreign>::load(cage_base, *this, kIcuNumberFormatterOffset);
  DCHECK(value.IsForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=9&c=3
template<class D, class P>
void TorqueGeneratedJSNumberFormat<D, P>::set_icu_number_formatter(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kIcuNumberFormatterOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIcuNumberFormatterOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=11&c=3
template<class D, class P>
Foreign TorqueGeneratedJSNumberFormat<D, P>::icu_number_range_formatter() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSNumberFormat::icu_number_range_formatter(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=11&c=3
template<class D, class P>
Foreign TorqueGeneratedJSNumberFormat<D, P>::icu_number_range_formatter(PtrComprCageBase cage_base) const {
  Foreign value;
  value = TaggedField<Foreign>::load(cage_base, *this, kIcuNumberRangeFormatterOffset);
  DCHECK(value.IsForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=11&c=3
template<class D, class P>
void TorqueGeneratedJSNumberFormat<D, P>::set_icu_number_range_formatter(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kIcuNumberRangeFormatterOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIcuNumberRangeFormatterOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=13&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSNumberFormat<D, P>::bound_format() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSNumberFormat::bound_format(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=13&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSNumberFormat<D, P>::bound_format(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kBoundFormatOffset);
  DCHECK(value.IsUndefined() || value.IsJSFunction());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=13&c=3
template<class D, class P>
void TorqueGeneratedJSNumberFormat<D, P>::set_bound_format(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsJSFunction());
  WRITE_FIELD(*this, kBoundFormatOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBoundFormatOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=7&c=1
template<class D, class P>
D TorqueGeneratedJSNumberFormat<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSNumberFormat<D, P>::TorqueGeneratedJSNumberFormat(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSNumberFormat_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSNumberFormat<D, P>::TorqueGeneratedJSNumberFormat(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSNumberFormat_NonInline(*this));
}
