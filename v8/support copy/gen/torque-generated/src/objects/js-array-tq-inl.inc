// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=8&c=3
template<class D, class P>
JSReceiver TorqueGeneratedJSArrayIterator<D, P>::iterated_object() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSArrayIterator::iterated_object(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=8&c=3
template<class D, class P>
JSReceiver TorqueGeneratedJSArrayIterator<D, P>::iterated_object(PtrComprCageBase cage_base) const {
  JSReceiver value;
  value = TaggedField<JSReceiver>::load(cage_base, *this, kIteratedObjectOffset);
  DCHECK(value.IsJSReceiver());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=8&c=3
template<class D, class P>
void TorqueGeneratedJSArrayIterator<D, P>::set_iterated_object(JSReceiver value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver());
  WRITE_FIELD(*this, kIteratedObjectOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIteratedObjectOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=33&c=3
template<class D, class P>
Object TorqueGeneratedJSArrayIterator<D, P>::next_index() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSArrayIterator::next_index(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=33&c=3
template<class D, class P>
Object TorqueGeneratedJSArrayIterator<D, P>::next_index(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kNextIndexOffset);
  DCHECK(value.IsHeapNumber() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=33&c=3
template<class D, class P>
void TorqueGeneratedJSArrayIterator<D, P>::set_next_index(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapNumber() || value.IsSmi());
  WRITE_FIELD(*this, kNextIndexOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNextIndexOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=35&c=3
template<class D, class P>
int TorqueGeneratedJSArrayIterator<D, P>::kind() const {
  int value;
  value = TaggedField<Smi>::load(*this, kKindOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=35&c=3
template<class D, class P>
void TorqueGeneratedJSArrayIterator<D, P>::set_kind(int value) {
  WRITE_FIELD(*this, kKindOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=7&c=1
template<class D, class P>
D TorqueGeneratedJSArrayIterator<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSArrayIterator<D, P>::TorqueGeneratedJSArrayIterator(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSArrayIterator_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSArrayIterator<D, P>::TorqueGeneratedJSArrayIterator(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSArrayIterator_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=56&c=3
template<class D, class P>
Object TorqueGeneratedJSArray<D, P>::length() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSArray::length(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=56&c=3
template<class D, class P>
Object TorqueGeneratedJSArray<D, P>::length(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kLengthOffset);
  DCHECK(value.IsHeapNumber() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=56&c=3
template<class D, class P>
void TorqueGeneratedJSArray<D, P>::set_length(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapNumber() || value.IsSmi());
  WRITE_FIELD(*this, kLengthOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kLengthOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=52&c=1
template<class D, class P>
D TorqueGeneratedJSArray<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSArray<D, P>::TorqueGeneratedJSArray(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSArray_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSArray<D, P>::TorqueGeneratedJSArray(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSArray_NonInline(*this));
}
