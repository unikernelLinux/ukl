// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=14&c=3
template<class D, class P>
String TorqueGeneratedJSSegmenter<D, P>::locale() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSSegmenter::locale(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=14&c=3
template<class D, class P>
String TorqueGeneratedJSSegmenter<D, P>::locale(PtrComprCageBase cage_base) const {
  String value;
  value = TaggedField<String>::load(cage_base, *this, kLocaleOffset);
  DCHECK(value.IsString());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=14&c=3
template<class D, class P>
void TorqueGeneratedJSSegmenter<D, P>::set_locale(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kLocaleOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kLocaleOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=15&c=3
template<class D, class P>
Foreign TorqueGeneratedJSSegmenter<D, P>::icu_break_iterator() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSSegmenter::icu_break_iterator(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=15&c=3
template<class D, class P>
Foreign TorqueGeneratedJSSegmenter<D, P>::icu_break_iterator(PtrComprCageBase cage_base) const {
  Foreign value;
  value = TaggedField<Foreign>::load(cage_base, *this, kIcuBreakIteratorOffset);
  DCHECK(value.IsForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=15&c=3
template<class D, class P>
void TorqueGeneratedJSSegmenter<D, P>::set_icu_break_iterator(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kIcuBreakIteratorOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIcuBreakIteratorOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=16&c=3
template<class D, class P>
int TorqueGeneratedJSSegmenter<D, P>::flags() const {
  int value;
  value = TaggedField<Smi>::load(*this, kFlagsOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=16&c=3
template<class D, class P>
void TorqueGeneratedJSSegmenter<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=13&c=1
template<class D, class P>
D TorqueGeneratedJSSegmenter<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSSegmenter<D, P>::TorqueGeneratedJSSegmenter(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSSegmenter_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSSegmenter<D, P>::TorqueGeneratedJSSegmenter(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSSegmenter_NonInline(*this));
}
