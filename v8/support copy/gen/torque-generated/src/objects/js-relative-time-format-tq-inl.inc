// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=14&c=3
template<class D, class P>
String TorqueGeneratedJSRelativeTimeFormat<D, P>::locale() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSRelativeTimeFormat::locale(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=14&c=3
template<class D, class P>
String TorqueGeneratedJSRelativeTimeFormat<D, P>::locale(PtrComprCageBase cage_base) const {
  String value;
  value = TaggedField<String>::load(cage_base, *this, kLocaleOffset);
  DCHECK(value.IsString());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=14&c=3
template<class D, class P>
void TorqueGeneratedJSRelativeTimeFormat<D, P>::set_locale(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kLocaleOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kLocaleOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=15&c=3
template<class D, class P>
String TorqueGeneratedJSRelativeTimeFormat<D, P>::numberingSystem() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSRelativeTimeFormat::numberingSystem(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=15&c=3
template<class D, class P>
String TorqueGeneratedJSRelativeTimeFormat<D, P>::numberingSystem(PtrComprCageBase cage_base) const {
  String value;
  value = TaggedField<String>::load(cage_base, *this, kNumberingSystemOffset);
  DCHECK(value.IsString());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=15&c=3
template<class D, class P>
void TorqueGeneratedJSRelativeTimeFormat<D, P>::set_numberingSystem(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kNumberingSystemOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNumberingSystemOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=16&c=3
template<class D, class P>
Foreign TorqueGeneratedJSRelativeTimeFormat<D, P>::icu_formatter() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSRelativeTimeFormat::icu_formatter(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=16&c=3
template<class D, class P>
Foreign TorqueGeneratedJSRelativeTimeFormat<D, P>::icu_formatter(PtrComprCageBase cage_base) const {
  Foreign value;
  value = TaggedField<Foreign>::load(cage_base, *this, kIcuFormatterOffset);
  DCHECK(value.IsForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=16&c=3
template<class D, class P>
void TorqueGeneratedJSRelativeTimeFormat<D, P>::set_icu_formatter(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kIcuFormatterOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIcuFormatterOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=17&c=3
template<class D, class P>
int TorqueGeneratedJSRelativeTimeFormat<D, P>::flags() const {
  int value;
  value = TaggedField<Smi>::load(*this, kFlagsOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=17&c=3
template<class D, class P>
void TorqueGeneratedJSRelativeTimeFormat<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=13&c=1
template<class D, class P>
D TorqueGeneratedJSRelativeTimeFormat<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSRelativeTimeFormat<D, P>::TorqueGeneratedJSRelativeTimeFormat(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSRelativeTimeFormat_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSRelativeTimeFormat<D, P>::TorqueGeneratedJSRelativeTimeFormat(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSRelativeTimeFormat_NonInline(*this));
}
