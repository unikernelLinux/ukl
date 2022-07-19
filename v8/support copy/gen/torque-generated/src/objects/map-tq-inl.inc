// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=59&c=3
template<class D, class P>
uint8_t TorqueGeneratedMap<D, P>::instance_size_in_words() const {
  uint8_t value;
  value = this->template ReadField<uint8_t>(kInstanceSizeInWordsOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=59&c=3
template<class D, class P>
void TorqueGeneratedMap<D, P>::set_instance_size_in_words(uint8_t value) {
  this->template WriteField<uint8_t>(kInstanceSizeInWordsOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=60&c=3
template<class D, class P>
uint8_t TorqueGeneratedMap<D, P>::inobject_properties_start_or_constructor_function_index() const {
  uint8_t value;
  value = this->template ReadField<uint8_t>(kInobjectPropertiesStartOrConstructorFunctionIndexOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=60&c=3
template<class D, class P>
void TorqueGeneratedMap<D, P>::set_inobject_properties_start_or_constructor_function_index(uint8_t value) {
  this->template WriteField<uint8_t>(kInobjectPropertiesStartOrConstructorFunctionIndexOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=61&c=3
template<class D, class P>
uint8_t TorqueGeneratedMap<D, P>::used_or_unused_instance_size_in_words() const {
  uint8_t value;
  value = this->template ReadField<uint8_t>(kUsedOrUnusedInstanceSizeInWordsOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=61&c=3
template<class D, class P>
void TorqueGeneratedMap<D, P>::set_used_or_unused_instance_size_in_words(uint8_t value) {
  this->template WriteField<uint8_t>(kUsedOrUnusedInstanceSizeInWordsOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=62&c=3
template<class D, class P>
uint8_t TorqueGeneratedMap<D, P>::visitor_id() const {
  uint8_t value;
  value = this->template ReadField<uint8_t>(kVisitorIdOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=62&c=3
template<class D, class P>
void TorqueGeneratedMap<D, P>::set_visitor_id(uint8_t value) {
  this->template WriteField<uint8_t>(kVisitorIdOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=63&c=3
template<class D, class P>
InstanceType TorqueGeneratedMap<D, P>::instance_type() const {
  InstanceType value;
  value = this->template ReadField<InstanceType>(kInstanceTypeOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=63&c=3
template<class D, class P>
void TorqueGeneratedMap<D, P>::set_instance_type(InstanceType value) {
  this->template WriteField<InstanceType>(kInstanceTypeOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=64&c=3
template<class D, class P>
uint8_t TorqueGeneratedMap<D, P>::bit_field() const {
  uint8_t value;
  value = this->template ReadField<uint8_t>(kBitFieldOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=64&c=3
template<class D, class P>
void TorqueGeneratedMap<D, P>::set_bit_field(uint8_t value) {
  this->template WriteField<uint8_t>(kBitFieldOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=65&c=3
template<class D, class P>
uint8_t TorqueGeneratedMap<D, P>::bit_field2() const {
  uint8_t value;
  value = this->template ReadField<uint8_t>(kBitField2Offset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=65&c=3
template<class D, class P>
void TorqueGeneratedMap<D, P>::set_bit_field2(uint8_t value) {
  this->template WriteField<uint8_t>(kBitField2Offset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=66&c=3
template<class D, class P>
uint32_t TorqueGeneratedMap<D, P>::bit_field3() const {
  uint32_t value;
  value = this->template ReadField<uint32_t>(kBitField3Offset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=66&c=3
template<class D, class P>
void TorqueGeneratedMap<D, P>::set_bit_field3(uint32_t value) {
  this->template WriteField<uint32_t>(kBitField3Offset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=71&c=3
template<class D, class P>
HeapObject TorqueGeneratedMap<D, P>::prototype() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedMap::prototype(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=71&c=3
template<class D, class P>
HeapObject TorqueGeneratedMap<D, P>::prototype(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kPrototypeOffset);
  DCHECK(value.IsJSReceiver() || value.IsNull());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=71&c=3
template<class D, class P>
void TorqueGeneratedMap<D, P>::set_prototype(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsNull());
  WRITE_FIELD(*this, kPrototypeOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPrototypeOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=72&c=3
template<class D, class P>
Object TorqueGeneratedMap<D, P>::constructor_or_back_pointer_or_native_context() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedMap::constructor_or_back_pointer_or_native_context(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=72&c=3
template<class D, class P>
Object TorqueGeneratedMap<D, P>::constructor_or_back_pointer_or_native_context(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kConstructorOrBackPointerOrNativeContextOffset);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=72&c=3
template<class D, class P>
void TorqueGeneratedMap<D, P>::set_constructor_or_back_pointer_or_native_context(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kConstructorOrBackPointerOrNativeContextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kConstructorOrBackPointerOrNativeContextOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=73&c=3
template<class D, class P>
DescriptorArray TorqueGeneratedMap<D, P>::instance_descriptors() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedMap::instance_descriptors(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=73&c=3
template<class D, class P>
DescriptorArray TorqueGeneratedMap<D, P>::instance_descriptors(PtrComprCageBase cage_base) const {
  DescriptorArray value;
  value = TaggedField<DescriptorArray>::load(cage_base, *this, kInstanceDescriptorsOffset);
  DCHECK(value.IsDescriptorArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=73&c=3
template<class D, class P>
void TorqueGeneratedMap<D, P>::set_instance_descriptors(DescriptorArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsDescriptorArray());
  WRITE_FIELD(*this, kInstanceDescriptorsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInstanceDescriptorsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=74&c=3
template<class D, class P>
WeakFixedArray TorqueGeneratedMap<D, P>::dependent_code() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedMap::dependent_code(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=74&c=3
template<class D, class P>
WeakFixedArray TorqueGeneratedMap<D, P>::dependent_code(PtrComprCageBase cage_base) const {
  WeakFixedArray value;
  value = TaggedField<WeakFixedArray>::load(cage_base, *this, kDependentCodeOffset);
  DCHECK(value.IsDependentCode());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=74&c=3
template<class D, class P>
void TorqueGeneratedMap<D, P>::set_dependent_code(WeakFixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsDependentCode());
  WRITE_FIELD(*this, kDependentCodeOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDependentCodeOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=75&c=3
template<class D, class P>
Object TorqueGeneratedMap<D, P>::prototype_validity_cell() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedMap::prototype_validity_cell(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=75&c=3
template<class D, class P>
Object TorqueGeneratedMap<D, P>::prototype_validity_cell(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kPrototypeValidityCellOffset);
  DCHECK(value.IsSmi() || value.IsCell());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=75&c=3
template<class D, class P>
void TorqueGeneratedMap<D, P>::set_prototype_validity_cell(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsCell());
  WRITE_FIELD(*this, kPrototypeValidityCellOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPrototypeValidityCellOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=76&c=3
template<class D, class P>
MaybeObject TorqueGeneratedMap<D, P>::transitions_or_prototype_info() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedMap::transitions_or_prototype_info(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=76&c=3
template<class D, class P>
MaybeObject TorqueGeneratedMap<D, P>::transitions_or_prototype_info(PtrComprCageBase cage_base) const {
  MaybeObject value;
  value = TaggedField<MaybeObject>::load(cage_base, *this, kTransitionsOrPrototypeInfoOffset);
  DCHECK(value.IsCleared() || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsSmi()) || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsTransitionArray()) || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsMap()) || (value.IsWeak() && value.GetHeapObjectOrSmi().IsMap()) || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsPrototypeInfo()));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=76&c=3
template<class D, class P>
void TorqueGeneratedMap<D, P>::set_transitions_or_prototype_info(MaybeObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsCleared() || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsSmi()) || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsTransitionArray()) || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsMap()) || (value.IsWeak() && value.GetHeapObjectOrSmi().IsMap()) || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsPrototypeInfo()));
  RELAXED_WRITE_WEAK_FIELD(*this, kTransitionsOrPrototypeInfoOffset, value);
  CONDITIONAL_WEAK_WRITE_BARRIER(*this, kTransitionsOrPrototypeInfoOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=37&c=1
template<class D, class P>
D TorqueGeneratedMap<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedMap<D, P>::TorqueGeneratedMap(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsMap_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedMap<D, P>::TorqueGeneratedMap(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsMap_NonInline(*this));
}
