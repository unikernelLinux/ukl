// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=5&c=1
template<class D, class P>
D TorqueGeneratedStruct<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedStruct<D, P>::TorqueGeneratedStruct(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsStruct_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedStruct<D, P>::TorqueGeneratedStruct(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsStruct_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=15&c=3
template<class D, class P>
int TorqueGeneratedClassPositions<D, P>::start() const {
  int value;
  value = TaggedField<Smi>::load(*this, kStartOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=15&c=3
template<class D, class P>
void TorqueGeneratedClassPositions<D, P>::set_start(int value) {
  WRITE_FIELD(*this, kStartOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=16&c=3
template<class D, class P>
int TorqueGeneratedClassPositions<D, P>::end() const {
  int value;
  value = TaggedField<Smi>::load(*this, kEndOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=16&c=3
template<class D, class P>
void TorqueGeneratedClassPositions<D, P>::set_end(int value) {
  WRITE_FIELD(*this, kEndOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=14&c=1
template<class D, class P>
D TorqueGeneratedClassPositions<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedClassPositions<D, P>::TorqueGeneratedClassPositions(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsClassPositions_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedClassPositions<D, P>::TorqueGeneratedClassPositions(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsClassPositions_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=20&c=3
template<class D, class P>
Object TorqueGeneratedAccessorPair<D, P>::getter() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedAccessorPair::getter(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=20&c=3
template<class D, class P>
Object TorqueGeneratedAccessorPair<D, P>::getter(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kGetterOffset);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=20&c=3
template<class D, class P>
void TorqueGeneratedAccessorPair<D, P>::set_getter(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kGetterOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kGetterOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=21&c=3
template<class D, class P>
Object TorqueGeneratedAccessorPair<D, P>::setter() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedAccessorPair::setter(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=21&c=3
template<class D, class P>
Object TorqueGeneratedAccessorPair<D, P>::setter(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kSetterOffset);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=21&c=3
template<class D, class P>
void TorqueGeneratedAccessorPair<D, P>::set_setter(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kSetterOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSetterOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=19&c=1
template<class D, class P>
D TorqueGeneratedAccessorPair<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedAccessorPair<D, P>::TorqueGeneratedAccessorPair(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsAccessorPair_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedAccessorPair<D, P>::TorqueGeneratedAccessorPair(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsAccessorPair_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=10&c=3
template<class D, class P>
Object TorqueGeneratedTuple2<D, P>::value1() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedTuple2::value1(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=10&c=3
template<class D, class P>
Object TorqueGeneratedTuple2<D, P>::value1(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kValue1Offset);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=10&c=3
template<class D, class P>
void TorqueGeneratedTuple2<D, P>::set_value1(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kValue1Offset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kValue1Offset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=11&c=3
template<class D, class P>
Object TorqueGeneratedTuple2<D, P>::value2() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedTuple2::value2(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=11&c=3
template<class D, class P>
Object TorqueGeneratedTuple2<D, P>::value2(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kValue2Offset);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=11&c=3
template<class D, class P>
void TorqueGeneratedTuple2<D, P>::set_value2(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kValue2Offset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kValue2Offset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=9&c=1
template<class D, class P>
D TorqueGeneratedTuple2<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedTuple2<D, P>::TorqueGeneratedTuple2(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsTuple2_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedTuple2<D, P>::TorqueGeneratedTuple2(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsTuple2_NonInline(*this));
}
