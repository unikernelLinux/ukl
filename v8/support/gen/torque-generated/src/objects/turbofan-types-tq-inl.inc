// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=12&c=1
template<class D, class P>
D TorqueGeneratedTurbofanType<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedTurbofanType<D, P>::TorqueGeneratedTurbofanType(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsTurbofanType_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedTurbofanType<D, P>::TorqueGeneratedTurbofanType(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsTurbofanType_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(TurbofanType)
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=61&c=3
template<class D, class P>
uint32_t TorqueGeneratedTurbofanBitsetType<D, P>::bitset_low() const {
  uint32_t value;
  value = this->template ReadField<uint32_t>(kBitsetLowOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=61&c=3
template<class D, class P>
void TorqueGeneratedTurbofanBitsetType<D, P>::set_bitset_low(uint32_t value) {
  this->template WriteField<uint32_t>(kBitsetLowOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=62&c=3
template<class D, class P>
uint32_t TorqueGeneratedTurbofanBitsetType<D, P>::bitset_high() const {
  uint32_t value;
  value = this->template ReadField<uint32_t>(kBitsetHighOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=62&c=3
template<class D, class P>
void TorqueGeneratedTurbofanBitsetType<D, P>::set_bitset_high(uint32_t value) {
  this->template WriteField<uint32_t>(kBitsetHighOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=59&c=1
template<class D, class P>
D TorqueGeneratedTurbofanBitsetType<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedTurbofanBitsetType<D, P>::TorqueGeneratedTurbofanBitsetType(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsTurbofanBitsetType_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedTurbofanBitsetType<D, P>::TorqueGeneratedTurbofanBitsetType(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsTurbofanBitsetType_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(TurbofanBitsetType)
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=67&c=3
template<class D, class P>
TurbofanType TorqueGeneratedTurbofanUnionType<D, P>::type1() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedTurbofanUnionType::type1(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=67&c=3
template<class D, class P>
TurbofanType TorqueGeneratedTurbofanUnionType<D, P>::type1(PtrComprCageBase cage_base) const {
  TurbofanType value;
  value = TaggedField<TurbofanType>::load(cage_base, *this, kType1Offset);
  DCHECK(value.IsTurbofanType());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=67&c=3
template<class D, class P>
void TorqueGeneratedTurbofanUnionType<D, P>::set_type1(TurbofanType value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsTurbofanType());
  WRITE_FIELD(*this, kType1Offset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kType1Offset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=68&c=3
template<class D, class P>
TurbofanType TorqueGeneratedTurbofanUnionType<D, P>::type2() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedTurbofanUnionType::type2(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=68&c=3
template<class D, class P>
TurbofanType TorqueGeneratedTurbofanUnionType<D, P>::type2(PtrComprCageBase cage_base) const {
  TurbofanType value;
  value = TaggedField<TurbofanType>::load(cage_base, *this, kType2Offset);
  DCHECK(value.IsTurbofanType());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=68&c=3
template<class D, class P>
void TorqueGeneratedTurbofanUnionType<D, P>::set_type2(TurbofanType value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsTurbofanType());
  WRITE_FIELD(*this, kType2Offset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kType2Offset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=65&c=1
template<class D, class P>
D TorqueGeneratedTurbofanUnionType<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedTurbofanUnionType<D, P>::TorqueGeneratedTurbofanUnionType(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsTurbofanUnionType_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedTurbofanUnionType<D, P>::TorqueGeneratedTurbofanUnionType(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsTurbofanUnionType_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(TurbofanUnionType)
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=73&c=3
template<class D, class P>
double TorqueGeneratedTurbofanRangeType<D, P>::min() const {
  double value;
  value = this->template ReadField<double>(kMinOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=73&c=3
template<class D, class P>
void TorqueGeneratedTurbofanRangeType<D, P>::set_min(double value) {
  this->template WriteField<double>(kMinOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=74&c=3
template<class D, class P>
double TorqueGeneratedTurbofanRangeType<D, P>::max() const {
  double value;
  value = this->template ReadField<double>(kMaxOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=74&c=3
template<class D, class P>
void TorqueGeneratedTurbofanRangeType<D, P>::set_max(double value) {
  this->template WriteField<double>(kMaxOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=71&c=1
template<class D, class P>
D TorqueGeneratedTurbofanRangeType<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedTurbofanRangeType<D, P>::TorqueGeneratedTurbofanRangeType(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsTurbofanRangeType_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedTurbofanRangeType<D, P>::TorqueGeneratedTurbofanRangeType(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsTurbofanRangeType_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(TurbofanRangeType)
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=79&c=3
template<class D, class P>
HeapObject TorqueGeneratedTurbofanHeapConstantType<D, P>::constant() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedTurbofanHeapConstantType::constant(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=79&c=3
template<class D, class P>
HeapObject TorqueGeneratedTurbofanHeapConstantType<D, P>::constant(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kConstantOffset);
  DCHECK(value.IsHeapObject());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=79&c=3
template<class D, class P>
void TorqueGeneratedTurbofanHeapConstantType<D, P>::set_constant(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject());
  WRITE_FIELD(*this, kConstantOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kConstantOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=77&c=1
template<class D, class P>
D TorqueGeneratedTurbofanHeapConstantType<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedTurbofanHeapConstantType<D, P>::TorqueGeneratedTurbofanHeapConstantType(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsTurbofanHeapConstantType_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedTurbofanHeapConstantType<D, P>::TorqueGeneratedTurbofanHeapConstantType(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsTurbofanHeapConstantType_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(TurbofanHeapConstantType)
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=84&c=3
template<class D, class P>
double TorqueGeneratedTurbofanOtherNumberConstantType<D, P>::constant() const {
  double value;
  value = this->template ReadField<double>(kConstantOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=84&c=3
template<class D, class P>
void TorqueGeneratedTurbofanOtherNumberConstantType<D, P>::set_constant(double value) {
  this->template WriteField<double>(kConstantOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=82&c=1
template<class D, class P>
D TorqueGeneratedTurbofanOtherNumberConstantType<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedTurbofanOtherNumberConstantType<D, P>::TorqueGeneratedTurbofanOtherNumberConstantType(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsTurbofanOtherNumberConstantType_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedTurbofanOtherNumberConstantType<D, P>::TorqueGeneratedTurbofanOtherNumberConstantType(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsTurbofanOtherNumberConstantType_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(TurbofanOtherNumberConstantType)
