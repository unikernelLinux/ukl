// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/primitive-heap-object.tq?l=5&c=1
template<class D, class P>
D TorqueGeneratedPrimitiveHeapObject<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedPrimitiveHeapObject<D, P>::TorqueGeneratedPrimitiveHeapObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsPrimitiveHeapObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedPrimitiveHeapObject<D, P>::TorqueGeneratedPrimitiveHeapObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsPrimitiveHeapObject_NonInline(*this));
}
