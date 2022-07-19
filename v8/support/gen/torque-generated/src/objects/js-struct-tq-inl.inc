// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-struct.tq?l=5&c=1
template<class D, class P>
D TorqueGeneratedJSSharedStruct<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSSharedStruct<D, P>::TorqueGeneratedJSSharedStruct(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSSharedStruct_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSSharedStruct<D, P>::TorqueGeneratedJSSharedStruct(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSSharedStruct_NonInline(*this));
}
