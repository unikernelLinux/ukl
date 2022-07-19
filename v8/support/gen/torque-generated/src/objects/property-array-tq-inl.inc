// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-array.tq?l=5&c=49
template<class D, class P>
int TorqueGeneratedPropertyArray<D, P>::length_and_hash() const {
  int value;
  value = TaggedField<Smi>::load(*this, kLengthAndHashOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-array.tq?l=5&c=49
template<class D, class P>
void TorqueGeneratedPropertyArray<D, P>::set_length_and_hash(int value) {
  WRITE_FIELD(*this, kLengthAndHashOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-array.tq?l=5&c=1
template<class D, class P>
D TorqueGeneratedPropertyArray<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedPropertyArray<D, P>::TorqueGeneratedPropertyArray(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsPropertyArray_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedPropertyArray<D, P>::TorqueGeneratedPropertyArray(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsPropertyArray_NonInline(*this));
}
