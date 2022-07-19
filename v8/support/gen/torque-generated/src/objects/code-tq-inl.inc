// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=17&c=3
template<class D, class P>
FixedArray TorqueGeneratedBytecodeArray<D, P>::constant_pool() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedBytecodeArray::constant_pool(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=17&c=3
template<class D, class P>
FixedArray TorqueGeneratedBytecodeArray<D, P>::constant_pool(PtrComprCageBase cage_base) const {
  FixedArray value;
  value = TaggedField<FixedArray>::load(cage_base, *this, kConstantPoolOffset);
  DCHECK(value.IsFixedArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=17&c=3
template<class D, class P>
void TorqueGeneratedBytecodeArray<D, P>::set_constant_pool(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kConstantPoolOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kConstantPoolOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=19&c=3
template<class D, class P>
ByteArray TorqueGeneratedBytecodeArray<D, P>::handler_table() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedBytecodeArray::handler_table(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=19&c=3
template<class D, class P>
ByteArray TorqueGeneratedBytecodeArray<D, P>::handler_table(PtrComprCageBase cage_base) const {
  ByteArray value;
  value = TaggedField<ByteArray>::load(cage_base, *this, kHandlerTableOffset);
  DCHECK(value.IsByteArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=19&c=3
template<class D, class P>
void TorqueGeneratedBytecodeArray<D, P>::set_handler_table(ByteArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsByteArray());
  WRITE_FIELD(*this, kHandlerTableOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kHandlerTableOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=29&c=3
template<class D, class P>
HeapObject TorqueGeneratedBytecodeArray<D, P>::source_position_table(AcquireLoadTag) const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedBytecodeArray::source_position_table(cage_base, kAcquireLoad);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=29&c=3
template<class D, class P>
HeapObject TorqueGeneratedBytecodeArray<D, P>::source_position_table(PtrComprCageBase cage_base, AcquireLoadTag) const {
  HeapObject value;
  value = TaggedField<HeapObject>::Acquire_Load(cage_base, *this, kSourcePositionTableOffset);
  DCHECK(value.IsUndefined() || value.IsException() || value.IsByteArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=29&c=3
template<class D, class P>
void TorqueGeneratedBytecodeArray<D, P>::set_source_position_table(HeapObject value, ReleaseStoreTag, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsException() || value.IsByteArray());
  RELEASE_WRITE_FIELD(*this, kSourcePositionTableOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSourcePositionTableOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=30&c=3
template<class D, class P>
int32_t TorqueGeneratedBytecodeArray<D, P>::frame_size() const {
  int32_t value;
  value = this->template ReadField<int32_t>(kFrameSizeOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=30&c=3
template<class D, class P>
void TorqueGeneratedBytecodeArray<D, P>::set_frame_size(int32_t value) {
  this->template WriteField<int32_t>(kFrameSizeOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=31&c=3
template<class D, class P>
int32_t TorqueGeneratedBytecodeArray<D, P>::parameter_size() const {
  int32_t value;
  value = this->template ReadField<int32_t>(kParameterSizeOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=31&c=3
template<class D, class P>
void TorqueGeneratedBytecodeArray<D, P>::set_parameter_size(int32_t value) {
  this->template WriteField<int32_t>(kParameterSizeOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=32&c=3
template<class D, class P>
int32_t TorqueGeneratedBytecodeArray<D, P>::incoming_new_target_or_generator_register() const {
  int32_t value;
  value = this->template ReadField<int32_t>(kIncomingNewTargetOrGeneratorRegisterOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=32&c=3
template<class D, class P>
void TorqueGeneratedBytecodeArray<D, P>::set_incoming_new_target_or_generator_register(int32_t value) {
  this->template WriteField<int32_t>(kIncomingNewTargetOrGeneratorRegisterOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=33&c=3
template<class D, class P>
uint16_t TorqueGeneratedBytecodeArray<D, P>::osr_urgency_and_install_target() const {
  uint16_t value;
  value = this->template ReadField<uint16_t>(kOsrUrgencyAndInstallTargetOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=33&c=3
template<class D, class P>
void TorqueGeneratedBytecodeArray<D, P>::set_osr_urgency_and_install_target(uint16_t value) {
  this->template WriteField<uint16_t>(kOsrUrgencyAndInstallTargetOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=34&c=3
template<class D, class P>
uint16_t TorqueGeneratedBytecodeArray<D, P>::bytecode_age() const {
  uint16_t value;
  value = this->template ReadField<uint16_t>(kBytecodeAgeOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=34&c=3
template<class D, class P>
void TorqueGeneratedBytecodeArray<D, P>::set_bytecode_age(uint16_t value) {
  this->template WriteField<uint16_t>(kBytecodeAgeOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=15&c=1
template<class D, class P>
D TorqueGeneratedBytecodeArray<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedBytecodeArray<D, P>::TorqueGeneratedBytecodeArray(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsBytecodeArray_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedBytecodeArray<D, P>::TorqueGeneratedBytecodeArray(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsBytecodeArray_NonInline(*this));
}
