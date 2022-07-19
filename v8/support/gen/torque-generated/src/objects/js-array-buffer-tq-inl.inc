// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=57&c=3
template<class D, class P>
JSArrayBuffer TorqueGeneratedJSArrayBufferView<D, P>::buffer() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSArrayBufferView::buffer(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=57&c=3
template<class D, class P>
JSArrayBuffer TorqueGeneratedJSArrayBufferView<D, P>::buffer(PtrComprCageBase cage_base) const {
  JSArrayBuffer value;
  value = TaggedField<JSArrayBuffer>::load(cage_base, *this, kBufferOffset);
  DCHECK(value.IsJSArrayBuffer());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=57&c=3
template<class D, class P>
void TorqueGeneratedJSArrayBufferView<D, P>::set_buffer(JSArrayBuffer value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSArrayBuffer());
  WRITE_FIELD(*this, kBufferOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBufferOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=58&c=3
template<class D, class P>
uintptr_t TorqueGeneratedJSArrayBufferView<D, P>::byte_offset() const {
  uintptr_t value;
  value = this->template ReadField<uintptr_t>(kByteOffsetOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=58&c=3
template<class D, class P>
void TorqueGeneratedJSArrayBufferView<D, P>::set_byte_offset(uintptr_t value) {
  this->template WriteField<uintptr_t>(kByteOffsetOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=59&c=3
template<class D, class P>
uintptr_t TorqueGeneratedJSArrayBufferView<D, P>::byte_length() const {
  uintptr_t value;
  value = this->template ReadField<uintptr_t>(kByteLengthOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=59&c=3
template<class D, class P>
void TorqueGeneratedJSArrayBufferView<D, P>::set_byte_length(uintptr_t value) {
  this->template WriteField<uintptr_t>(kByteLengthOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=60&c=3
template<class D, class P>
uint32_t TorqueGeneratedJSArrayBufferView<D, P>::bit_field() const {
  uint32_t value;
  value = this->template ReadField<uint32_t>(kBitFieldOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=60&c=3
template<class D, class P>
void TorqueGeneratedJSArrayBufferView<D, P>::set_bit_field(uint32_t value) {
  this->template WriteField<uint32_t>(kBitFieldOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=55&c=1
template<class D, class P>
D TorqueGeneratedJSArrayBufferView<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSArrayBufferView<D, P>::TorqueGeneratedJSArrayBufferView(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSArrayBufferView_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSArrayBufferView<D, P>::TorqueGeneratedJSArrayBufferView(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSArrayBufferView_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=91&c=3
template<class D, class P>
uintptr_t TorqueGeneratedJSTypedArray<D, P>::length() const {
  uintptr_t value;
  value = this->template ReadField<uintptr_t>(kLengthOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=91&c=3
template<class D, class P>
void TorqueGeneratedJSTypedArray<D, P>::set_length(uintptr_t value) {
  this->template WriteField<uintptr_t>(kLengthOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=93&c=3
template<class D, class P>
Address TorqueGeneratedJSTypedArray<D, P>::external_pointer() const {
  Address value;
  value = this->template ReadField<Address>(kExternalPointerOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=93&c=3
template<class D, class P>
void TorqueGeneratedJSTypedArray<D, P>::set_external_pointer(Address value) {
  this->template WriteField<Address>(kExternalPointerOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=94&c=3
template<class D, class P>
Object TorqueGeneratedJSTypedArray<D, P>::base_pointer() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSTypedArray::base_pointer(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=94&c=3
template<class D, class P>
Object TorqueGeneratedJSTypedArray<D, P>::base_pointer(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kBasePointerOffset);
  DCHECK(value.IsSmi() || value.IsByteArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=94&c=3
template<class D, class P>
void TorqueGeneratedJSTypedArray<D, P>::set_base_pointer(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsByteArray());
  WRITE_FIELD(*this, kBasePointerOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBasePointerOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=90&c=1
template<class D, class P>
D TorqueGeneratedJSTypedArray<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSTypedArray<D, P>::TorqueGeneratedJSTypedArray(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSTypedArray_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSTypedArray<D, P>::TorqueGeneratedJSTypedArray(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSTypedArray_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=15&c=3
template<class D, class P>
uintptr_t TorqueGeneratedJSArrayBuffer<D, P>::byte_length() const {
  uintptr_t value;
  value = this->template ReadField<uintptr_t>(kByteLengthOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=15&c=3
template<class D, class P>
void TorqueGeneratedJSArrayBuffer<D, P>::set_byte_length(uintptr_t value) {
  this->template WriteField<uintptr_t>(kByteLengthOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=16&c=3
template<class D, class P>
uintptr_t TorqueGeneratedJSArrayBuffer<D, P>::max_byte_length() const {
  uintptr_t value;
  value = this->template ReadField<uintptr_t>(kMaxByteLengthOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=16&c=3
template<class D, class P>
void TorqueGeneratedJSArrayBuffer<D, P>::set_max_byte_length(uintptr_t value) {
  this->template WriteField<uintptr_t>(kMaxByteLengthOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=18&c=3
template<class D, class P>
Address TorqueGeneratedJSArrayBuffer<D, P>::backing_store() const {
  Address value;
  value = this->template ReadField<Address>(kBackingStoreOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=18&c=3
template<class D, class P>
void TorqueGeneratedJSArrayBuffer<D, P>::set_backing_store(Address value) {
  this->template WriteField<Address>(kBackingStoreOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=19&c=3
template<class D, class P>
Address TorqueGeneratedJSArrayBuffer<D, P>::extension() const {
  Address value;
  value = this->template ReadField<Address>(kExtensionOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=19&c=3
template<class D, class P>
void TorqueGeneratedJSArrayBuffer<D, P>::set_extension(Address value) {
  this->template WriteField<Address>(kExtensionOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=20&c=3
template<class D, class P>
uint32_t TorqueGeneratedJSArrayBuffer<D, P>::bit_field() const {
  uint32_t value;
  value = this->template ReadField<uint32_t>(kBitFieldOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=20&c=3
template<class D, class P>
void TorqueGeneratedJSArrayBuffer<D, P>::set_bit_field(uint32_t value) {
  this->template WriteField<uint32_t>(kBitFieldOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=14&c=1
template<class D, class P>
D TorqueGeneratedJSArrayBuffer<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSArrayBuffer<D, P>::TorqueGeneratedJSArrayBuffer(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSArrayBuffer_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSArrayBuffer<D, P>::TorqueGeneratedJSArrayBuffer(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSArrayBuffer_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=105&c=3
template<class D, class P>
Address TorqueGeneratedJSDataView<D, P>::data_pointer() const {
  Address value;
  value = this->template ReadField<Address>(kDataPointerOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=105&c=3
template<class D, class P>
void TorqueGeneratedJSDataView<D, P>::set_data_pointer(Address value) {
  this->template WriteField<Address>(kDataPointerOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=103&c=1
template<class D, class P>
D TorqueGeneratedJSDataView<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSDataView<D, P>::TorqueGeneratedJSDataView(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSDataView_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSDataView<D, P>::TorqueGeneratedJSDataView(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSDataView_NonInline(*this));
}
