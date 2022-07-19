// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=24&c=3
template<class D, class P>
String TorqueGeneratedJSDateTimeFormat<D, P>::locale() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSDateTimeFormat::locale(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=24&c=3
template<class D, class P>
String TorqueGeneratedJSDateTimeFormat<D, P>::locale(PtrComprCageBase cage_base) const {
  String value;
  value = TaggedField<String>::load(cage_base, *this, kLocaleOffset);
  DCHECK(value.IsString());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=24&c=3
template<class D, class P>
void TorqueGeneratedJSDateTimeFormat<D, P>::set_locale(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kLocaleOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kLocaleOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=25&c=3
template<class D, class P>
Foreign TorqueGeneratedJSDateTimeFormat<D, P>::icu_locale() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSDateTimeFormat::icu_locale(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=25&c=3
template<class D, class P>
Foreign TorqueGeneratedJSDateTimeFormat<D, P>::icu_locale(PtrComprCageBase cage_base) const {
  Foreign value;
  value = TaggedField<Foreign>::load(cage_base, *this, kIcuLocaleOffset);
  DCHECK(value.IsForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=25&c=3
template<class D, class P>
void TorqueGeneratedJSDateTimeFormat<D, P>::set_icu_locale(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kIcuLocaleOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIcuLocaleOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=26&c=3
template<class D, class P>
Foreign TorqueGeneratedJSDateTimeFormat<D, P>::icu_simple_date_format() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSDateTimeFormat::icu_simple_date_format(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=26&c=3
template<class D, class P>
Foreign TorqueGeneratedJSDateTimeFormat<D, P>::icu_simple_date_format(PtrComprCageBase cage_base) const {
  Foreign value;
  value = TaggedField<Foreign>::load(cage_base, *this, kIcuSimpleDateFormatOffset);
  DCHECK(value.IsForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=26&c=3
template<class D, class P>
void TorqueGeneratedJSDateTimeFormat<D, P>::set_icu_simple_date_format(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kIcuSimpleDateFormatOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIcuSimpleDateFormatOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=27&c=3
template<class D, class P>
Foreign TorqueGeneratedJSDateTimeFormat<D, P>::icu_date_interval_format() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSDateTimeFormat::icu_date_interval_format(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=27&c=3
template<class D, class P>
Foreign TorqueGeneratedJSDateTimeFormat<D, P>::icu_date_interval_format(PtrComprCageBase cage_base) const {
  Foreign value;
  value = TaggedField<Foreign>::load(cage_base, *this, kIcuDateIntervalFormatOffset);
  DCHECK(value.IsForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=27&c=3
template<class D, class P>
void TorqueGeneratedJSDateTimeFormat<D, P>::set_icu_date_interval_format(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kIcuDateIntervalFormatOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIcuDateIntervalFormatOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=28&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSDateTimeFormat<D, P>::bound_format() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSDateTimeFormat::bound_format(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=28&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSDateTimeFormat<D, P>::bound_format(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kBoundFormatOffset);
  DCHECK(value.IsUndefined() || value.IsJSFunction());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=28&c=3
template<class D, class P>
void TorqueGeneratedJSDateTimeFormat<D, P>::set_bound_format(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsJSFunction());
  WRITE_FIELD(*this, kBoundFormatOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBoundFormatOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=29&c=3
template<class D, class P>
int TorqueGeneratedJSDateTimeFormat<D, P>::flags() const {
  int value;
  value = TaggedField<Smi>::load(*this, kFlagsOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=29&c=3
template<class D, class P>
void TorqueGeneratedJSDateTimeFormat<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=23&c=1
template<class D, class P>
D TorqueGeneratedJSDateTimeFormat<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSDateTimeFormat<D, P>::TorqueGeneratedJSDateTimeFormat(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSDateTimeFormat_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSDateTimeFormat<D, P>::TorqueGeneratedJSDateTimeFormat(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSDateTimeFormat_NonInline(*this));
}
