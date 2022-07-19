// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=8&c=3
template<class D, class P>
Object TorqueGeneratedJSCollection<D, P>::table() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSCollection::table(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=8&c=3
template<class D, class P>
Object TorqueGeneratedJSCollection<D, P>::table(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kTableOffset);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=8&c=3
template<class D, class P>
void TorqueGeneratedJSCollection<D, P>::set_table(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kTableOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTableOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=5&c=1
template<class D, class P>
D TorqueGeneratedJSCollection<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSCollection<D, P>::TorqueGeneratedJSCollection(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSCollection_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSCollection<D, P>::TorqueGeneratedJSCollection(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSCollection_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=10&c=1
template<class D, class P>
D TorqueGeneratedJSSet<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSSet<D, P>::TorqueGeneratedJSSet(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSSet_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSSet<D, P>::TorqueGeneratedJSSet(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSSet_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=11&c=1
template<class D, class P>
D TorqueGeneratedJSMap<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSMap<D, P>::TorqueGeneratedJSMap(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSMap_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSMap<D, P>::TorqueGeneratedJSMap(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSMap_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=16&c=3
template<class D, class P>
Object TorqueGeneratedJSWeakCollection<D, P>::table() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSWeakCollection::table(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=16&c=3
template<class D, class P>
Object TorqueGeneratedJSWeakCollection<D, P>::table(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kTableOffset);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=16&c=3
template<class D, class P>
void TorqueGeneratedJSWeakCollection<D, P>::set_table(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kTableOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTableOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=13&c=1
template<class D, class P>
D TorqueGeneratedJSWeakCollection<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSWeakCollection<D, P>::TorqueGeneratedJSWeakCollection(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSWeakCollection_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSWeakCollection<D, P>::TorqueGeneratedJSWeakCollection(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSWeakCollection_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=18&c=1
template<class D, class P>
D TorqueGeneratedJSWeakSet<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSWeakSet<D, P>::TorqueGeneratedJSWeakSet(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSWeakSet_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSWeakSet<D, P>::TorqueGeneratedJSWeakSet(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSWeakSet_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=19&c=1
template<class D, class P>
D TorqueGeneratedJSWeakMap<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSWeakMap<D, P>::TorqueGeneratedJSWeakMap(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSWeakMap_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSWeakMap<D, P>::TorqueGeneratedJSWeakMap(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSWeakMap_NonInline(*this));
}
