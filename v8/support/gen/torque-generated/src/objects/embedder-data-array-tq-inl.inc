// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/embedder-data-array.tq?l=7&c=3
template<class D, class P>
int TorqueGeneratedEmbedderDataArray<D, P>::length() const {
  int value;
  value = TaggedField<Smi>::load(*this, kLengthOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/embedder-data-array.tq?l=7&c=3
template<class D, class P>
void TorqueGeneratedEmbedderDataArray<D, P>::set_length(int value) {
  WRITE_FIELD(*this, kLengthOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/embedder-data-array.tq?l=5&c=1
template<class D, class P>
D TorqueGeneratedEmbedderDataArray<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedEmbedderDataArray<D, P>::TorqueGeneratedEmbedderDataArray(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsEmbedderDataArray_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedEmbedderDataArray<D, P>::TorqueGeneratedEmbedderDataArray(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsEmbedderDataArray_NonInline(*this));
}
