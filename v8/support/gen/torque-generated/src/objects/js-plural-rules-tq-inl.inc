// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=13&c=3
template<class D, class P>
String TorqueGeneratedJSPluralRules<D, P>::locale() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSPluralRules::locale(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=13&c=3
template<class D, class P>
String TorqueGeneratedJSPluralRules<D, P>::locale(PtrComprCageBase cage_base) const {
  String value;
  value = TaggedField<String>::load(cage_base, *this, kLocaleOffset);
  DCHECK(value.IsString());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=13&c=3
template<class D, class P>
void TorqueGeneratedJSPluralRules<D, P>::set_locale(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kLocaleOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kLocaleOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=14&c=3
template<class D, class P>
int TorqueGeneratedJSPluralRules<D, P>::flags() const {
  int value;
  value = TaggedField<Smi>::load(*this, kFlagsOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=14&c=3
template<class D, class P>
void TorqueGeneratedJSPluralRules<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=15&c=3
template<class D, class P>
Foreign TorqueGeneratedJSPluralRules<D, P>::icu_plural_rules() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSPluralRules::icu_plural_rules(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=15&c=3
template<class D, class P>
Foreign TorqueGeneratedJSPluralRules<D, P>::icu_plural_rules(PtrComprCageBase cage_base) const {
  Foreign value;
  value = TaggedField<Foreign>::load(cage_base, *this, kIcuPluralRulesOffset);
  DCHECK(value.IsForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=15&c=3
template<class D, class P>
void TorqueGeneratedJSPluralRules<D, P>::set_icu_plural_rules(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kIcuPluralRulesOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIcuPluralRulesOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=16&c=3
template<class D, class P>
Foreign TorqueGeneratedJSPluralRules<D, P>::icu_number_formatter() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSPluralRules::icu_number_formatter(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=16&c=3
template<class D, class P>
Foreign TorqueGeneratedJSPluralRules<D, P>::icu_number_formatter(PtrComprCageBase cage_base) const {
  Foreign value;
  value = TaggedField<Foreign>::load(cage_base, *this, kIcuNumberFormatterOffset);
  DCHECK(value.IsForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=16&c=3
template<class D, class P>
void TorqueGeneratedJSPluralRules<D, P>::set_icu_number_formatter(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kIcuNumberFormatterOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIcuNumberFormatterOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=18&c=3
template<class D, class P>
Foreign TorqueGeneratedJSPluralRules<D, P>::icu_number_range_formatter() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSPluralRules::icu_number_range_formatter(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=18&c=3
template<class D, class P>
Foreign TorqueGeneratedJSPluralRules<D, P>::icu_number_range_formatter(PtrComprCageBase cage_base) const {
  Foreign value;
  value = TaggedField<Foreign>::load(cage_base, *this, kIcuNumberRangeFormatterOffset);
  DCHECK(value.IsForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=18&c=3
template<class D, class P>
void TorqueGeneratedJSPluralRules<D, P>::set_icu_number_range_formatter(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kIcuNumberRangeFormatterOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIcuNumberRangeFormatterOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=12&c=1
template<class D, class P>
D TorqueGeneratedJSPluralRules<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSPluralRules<D, P>::TorqueGeneratedJSPluralRules(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSPluralRules_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSPluralRules<D, P>::TorqueGeneratedJSPluralRules(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSPluralRules_NonInline(*this));
}
