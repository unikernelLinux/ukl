// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=20&c=3
template<class D, class P>
int TorqueGeneratedPropertyDescriptorObject<D, P>::flags() const {
  int value;
  value = TaggedField<Smi>::load(*this, kFlagsOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=20&c=3
template<class D, class P>
void TorqueGeneratedPropertyDescriptorObject<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=21&c=3
template<class D, class P>
Object TorqueGeneratedPropertyDescriptorObject<D, P>::value() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedPropertyDescriptorObject::value(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=21&c=3
template<class D, class P>
Object TorqueGeneratedPropertyDescriptorObject<D, P>::value(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kValueOffset);
  DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi() || value.IsTheHole());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=21&c=3
template<class D, class P>
void TorqueGeneratedPropertyDescriptorObject<D, P>::set_value(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi() || value.IsTheHole());
  WRITE_FIELD(*this, kValueOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kValueOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=22&c=3
template<class D, class P>
Object TorqueGeneratedPropertyDescriptorObject<D, P>::get() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedPropertyDescriptorObject::get(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=22&c=3
template<class D, class P>
Object TorqueGeneratedPropertyDescriptorObject<D, P>::get(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kGetOffset);
  DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi() || value.IsTheHole());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=22&c=3
template<class D, class P>
void TorqueGeneratedPropertyDescriptorObject<D, P>::set_get(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi() || value.IsTheHole());
  WRITE_FIELD(*this, kGetOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kGetOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=23&c=3
template<class D, class P>
Object TorqueGeneratedPropertyDescriptorObject<D, P>::set() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedPropertyDescriptorObject::set(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=23&c=3
template<class D, class P>
Object TorqueGeneratedPropertyDescriptorObject<D, P>::set(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kSetOffset);
  DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi() || value.IsTheHole());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=23&c=3
template<class D, class P>
void TorqueGeneratedPropertyDescriptorObject<D, P>::set_set(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi() || value.IsTheHole());
  WRITE_FIELD(*this, kSetOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSetOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=19&c=1
template<class D, class P>
D TorqueGeneratedPropertyDescriptorObject<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedPropertyDescriptorObject<D, P>::TorqueGeneratedPropertyDescriptorObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsPropertyDescriptorObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedPropertyDescriptorObject<D, P>::TorqueGeneratedPropertyDescriptorObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsPropertyDescriptorObject_NonInline(*this));
}
