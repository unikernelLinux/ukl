// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/heap-number.tq?l=8&c=20
template<class D, class P>
double TorqueGeneratedHeapNumber<D, P>::value() const {
  double value;
  value = this->template ReadField<double>(kValueOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/heap-number.tq?l=8&c=20
template<class D, class P>
void TorqueGeneratedHeapNumber<D, P>::set_value(double value, RelaxedStoreTag) {
  this->template WriteField<double>(kValueOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/heap-number.tq?l=5&c=1
template<class D, class P>
D TorqueGeneratedHeapNumber<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedHeapNumber<D, P>::TorqueGeneratedHeapNumber(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsHeapNumber_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedHeapNumber<D, P>::TorqueGeneratedHeapNumber(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsHeapNumber_NonInline(*this));
}
