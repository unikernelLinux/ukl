// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=8&c=3
template<class D, class P>
String TorqueGeneratedJSV8BreakIterator<D, P>::locale() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSV8BreakIterator::locale(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=8&c=3
template<class D, class P>
String TorqueGeneratedJSV8BreakIterator<D, P>::locale(PtrComprCageBase cage_base) const {
  String value;
  value = TaggedField<String>::load(cage_base, *this, kLocaleOffset);
  DCHECK(value.IsString());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=8&c=3
template<class D, class P>
void TorqueGeneratedJSV8BreakIterator<D, P>::set_locale(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kLocaleOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kLocaleOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=9&c=3
template<class D, class P>
Foreign TorqueGeneratedJSV8BreakIterator<D, P>::break_iterator() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSV8BreakIterator::break_iterator(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=9&c=3
template<class D, class P>
Foreign TorqueGeneratedJSV8BreakIterator<D, P>::break_iterator(PtrComprCageBase cage_base) const {
  Foreign value;
  value = TaggedField<Foreign>::load(cage_base, *this, kBreakIteratorOffset);
  DCHECK(value.IsForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=9&c=3
template<class D, class P>
void TorqueGeneratedJSV8BreakIterator<D, P>::set_break_iterator(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kBreakIteratorOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBreakIteratorOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=10&c=3
template<class D, class P>
Foreign TorqueGeneratedJSV8BreakIterator<D, P>::unicode_string() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSV8BreakIterator::unicode_string(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=10&c=3
template<class D, class P>
Foreign TorqueGeneratedJSV8BreakIterator<D, P>::unicode_string(PtrComprCageBase cage_base) const {
  Foreign value;
  value = TaggedField<Foreign>::load(cage_base, *this, kUnicodeStringOffset);
  DCHECK(value.IsForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=10&c=3
template<class D, class P>
void TorqueGeneratedJSV8BreakIterator<D, P>::set_unicode_string(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kUnicodeStringOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kUnicodeStringOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=11&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSV8BreakIterator<D, P>::bound_adopt_text() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSV8BreakIterator::bound_adopt_text(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=11&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSV8BreakIterator<D, P>::bound_adopt_text(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kBoundAdoptTextOffset);
  DCHECK(value.IsUndefined() || value.IsJSFunction());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=11&c=3
template<class D, class P>
void TorqueGeneratedJSV8BreakIterator<D, P>::set_bound_adopt_text(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsJSFunction());
  WRITE_FIELD(*this, kBoundAdoptTextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBoundAdoptTextOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=12&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSV8BreakIterator<D, P>::bound_first() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSV8BreakIterator::bound_first(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=12&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSV8BreakIterator<D, P>::bound_first(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kBoundFirstOffset);
  DCHECK(value.IsUndefined() || value.IsJSFunction());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=12&c=3
template<class D, class P>
void TorqueGeneratedJSV8BreakIterator<D, P>::set_bound_first(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsJSFunction());
  WRITE_FIELD(*this, kBoundFirstOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBoundFirstOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=13&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSV8BreakIterator<D, P>::bound_next() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSV8BreakIterator::bound_next(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=13&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSV8BreakIterator<D, P>::bound_next(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kBoundNextOffset);
  DCHECK(value.IsUndefined() || value.IsJSFunction());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=13&c=3
template<class D, class P>
void TorqueGeneratedJSV8BreakIterator<D, P>::set_bound_next(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsJSFunction());
  WRITE_FIELD(*this, kBoundNextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBoundNextOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=14&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSV8BreakIterator<D, P>::bound_current() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSV8BreakIterator::bound_current(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=14&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSV8BreakIterator<D, P>::bound_current(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kBoundCurrentOffset);
  DCHECK(value.IsUndefined() || value.IsJSFunction());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=14&c=3
template<class D, class P>
void TorqueGeneratedJSV8BreakIterator<D, P>::set_bound_current(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsJSFunction());
  WRITE_FIELD(*this, kBoundCurrentOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBoundCurrentOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=15&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSV8BreakIterator<D, P>::bound_break_type() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSV8BreakIterator::bound_break_type(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=15&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSV8BreakIterator<D, P>::bound_break_type(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kBoundBreakTypeOffset);
  DCHECK(value.IsUndefined() || value.IsJSFunction());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=15&c=3
template<class D, class P>
void TorqueGeneratedJSV8BreakIterator<D, P>::set_bound_break_type(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsJSFunction());
  WRITE_FIELD(*this, kBoundBreakTypeOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBoundBreakTypeOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=7&c=1
template<class D, class P>
D TorqueGeneratedJSV8BreakIterator<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSV8BreakIterator<D, P>::TorqueGeneratedJSV8BreakIterator(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSV8BreakIterator_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSV8BreakIterator<D, P>::TorqueGeneratedJSV8BreakIterator(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSV8BreakIterator_NonInline(*this));
}
