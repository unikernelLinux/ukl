// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection-iterator.tq?l=8&c=3
template<class D, class P>
Object TorqueGeneratedJSCollectionIterator<D, P>::table() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSCollectionIterator::table(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection-iterator.tq?l=8&c=3
template<class D, class P>
Object TorqueGeneratedJSCollectionIterator<D, P>::table(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kTableOffset);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection-iterator.tq?l=8&c=3
template<class D, class P>
void TorqueGeneratedJSCollectionIterator<D, P>::set_table(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kTableOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTableOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection-iterator.tq?l=10&c=3
template<class D, class P>
Object TorqueGeneratedJSCollectionIterator<D, P>::index() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSCollectionIterator::index(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection-iterator.tq?l=10&c=3
template<class D, class P>
Object TorqueGeneratedJSCollectionIterator<D, P>::index(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kIndexOffset);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection-iterator.tq?l=10&c=3
template<class D, class P>
void TorqueGeneratedJSCollectionIterator<D, P>::set_index(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kIndexOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIndexOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection-iterator.tq?l=5&c=1
template<class D, class P>
D TorqueGeneratedJSCollectionIterator<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSCollectionIterator<D, P>::TorqueGeneratedJSCollectionIterator(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSCollectionIterator_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSCollectionIterator<D, P>::TorqueGeneratedJSCollectionIterator(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSCollectionIterator_NonInline(*this));
}
