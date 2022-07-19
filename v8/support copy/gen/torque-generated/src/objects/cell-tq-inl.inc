// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=5&c=40
template<class D, class P>
Object TorqueGeneratedCell<D, P>::value() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedCell::value(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=5&c=40
template<class D, class P>
Object TorqueGeneratedCell<D, P>::value(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kValueOffset);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=5&c=40
template<class D, class P>
void TorqueGeneratedCell<D, P>::set_value(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kValueOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kValueOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=5&c=1
template<class D, class P>
D TorqueGeneratedCell<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedCell<D, P>::TorqueGeneratedCell(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsCell_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedCell<D, P>::TorqueGeneratedCell(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsCell_NonInline(*this));
}
