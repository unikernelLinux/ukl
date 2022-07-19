// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=12&c=3
template<class D, class P>
Foreign TorqueGeneratedJSSegments<D, P>::icu_break_iterator() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSSegments::icu_break_iterator(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=12&c=3
template<class D, class P>
Foreign TorqueGeneratedJSSegments<D, P>::icu_break_iterator(PtrComprCageBase cage_base) const {
  Foreign value;
  value = TaggedField<Foreign>::load(cage_base, *this, kIcuBreakIteratorOffset);
  DCHECK(value.IsForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=12&c=3
template<class D, class P>
void TorqueGeneratedJSSegments<D, P>::set_icu_break_iterator(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kIcuBreakIteratorOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIcuBreakIteratorOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=13&c=3
template<class D, class P>
Foreign TorqueGeneratedJSSegments<D, P>::unicode_string() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSSegments::unicode_string(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=13&c=3
template<class D, class P>
Foreign TorqueGeneratedJSSegments<D, P>::unicode_string(PtrComprCageBase cage_base) const {
  Foreign value;
  value = TaggedField<Foreign>::load(cage_base, *this, kUnicodeStringOffset);
  DCHECK(value.IsForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=13&c=3
template<class D, class P>
void TorqueGeneratedJSSegments<D, P>::set_unicode_string(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kUnicodeStringOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kUnicodeStringOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=14&c=3
template<class D, class P>
int TorqueGeneratedJSSegments<D, P>::flags() const {
  int value;
  value = TaggedField<Smi>::load(*this, kFlagsOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=14&c=3
template<class D, class P>
void TorqueGeneratedJSSegments<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=11&c=1
template<class D, class P>
D TorqueGeneratedJSSegments<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSSegments<D, P>::TorqueGeneratedJSSegments(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSSegments_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSSegments<D, P>::TorqueGeneratedJSSegments(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSSegments_NonInline(*this));
}
