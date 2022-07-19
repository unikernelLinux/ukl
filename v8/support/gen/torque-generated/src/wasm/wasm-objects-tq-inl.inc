// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=38&c=3
template<class D, class P>
HeapObject TorqueGeneratedWasmInternalFunction<D, P>::ref() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmInternalFunction::ref(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=38&c=3
template<class D, class P>
HeapObject TorqueGeneratedWasmInternalFunction<D, P>::ref(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kRefOffset);
  DCHECK(value.IsWasmInstanceObject() || value.IsWasmApiFunctionRef());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=38&c=3
template<class D, class P>
void TorqueGeneratedWasmInternalFunction<D, P>::set_ref(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsWasmInstanceObject() || value.IsWasmApiFunctionRef());
  WRITE_FIELD(*this, kRefOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kRefOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=40&c=3
template<class D, class P>
HeapObject TorqueGeneratedWasmInternalFunction<D, P>::external() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmInternalFunction::external(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=40&c=3
template<class D, class P>
HeapObject TorqueGeneratedWasmInternalFunction<D, P>::external(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kExternalOffset);
  DCHECK(value.IsUndefined() || value.IsJSFunction());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=40&c=3
template<class D, class P>
void TorqueGeneratedWasmInternalFunction<D, P>::set_external(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsJSFunction());
  WRITE_FIELD(*this, kExternalOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kExternalOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=42&c=31
template<class D, class P>
CodeDataContainer TorqueGeneratedWasmInternalFunction<D, P>::code() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmInternalFunction::code(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=42&c=31
template<class D, class P>
CodeDataContainer TorqueGeneratedWasmInternalFunction<D, P>::code(PtrComprCageBase cage_base) const {
  CodeDataContainer value;
  value = TaggedField<CodeDataContainer>::load(cage_base, *this, kCodeOffset);
  DCHECK(value.IsCodeDataContainer());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=42&c=31
template<class D, class P>
void TorqueGeneratedWasmInternalFunction<D, P>::set_code(CodeDataContainer value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsCodeDataContainer());
  WRITE_FIELD(*this, kCodeOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCodeOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=31&c=1
template<class D, class P>
D TorqueGeneratedWasmInternalFunction<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedWasmInternalFunction<D, P>::TorqueGeneratedWasmInternalFunction(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmInternalFunction_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedWasmInternalFunction<D, P>::TorqueGeneratedWasmInternalFunction(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsWasmInternalFunction_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=21&c=3
template<class D, class P>
Address TorqueGeneratedWasmApiFunctionRef<D, P>::isolate_root() const {
  Address value;
  value = this->template ReadField<Address>(kIsolateRootOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=21&c=3
template<class D, class P>
void TorqueGeneratedWasmApiFunctionRef<D, P>::set_isolate_root(Address value) {
  this->template WriteField<Address>(kIsolateRootOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=22&c=3
template<class D, class P>
NativeContext TorqueGeneratedWasmApiFunctionRef<D, P>::native_context() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmApiFunctionRef::native_context(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=22&c=3
template<class D, class P>
NativeContext TorqueGeneratedWasmApiFunctionRef<D, P>::native_context(PtrComprCageBase cage_base) const {
  NativeContext value;
  value = TaggedField<NativeContext>::load(cage_base, *this, kNativeContextOffset);
  DCHECK(value.IsNativeContext());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=22&c=3
template<class D, class P>
void TorqueGeneratedWasmApiFunctionRef<D, P>::set_native_context(NativeContext value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsNativeContext());
  WRITE_FIELD(*this, kNativeContextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNativeContextOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=23&c=3
template<class D, class P>
HeapObject TorqueGeneratedWasmApiFunctionRef<D, P>::callable() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmApiFunctionRef::callable(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=23&c=3
template<class D, class P>
HeapObject TorqueGeneratedWasmApiFunctionRef<D, P>::callable(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kCallableOffset);
  DCHECK(value.IsJSReceiver() || value.IsUndefined());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=23&c=3
template<class D, class P>
void TorqueGeneratedWasmApiFunctionRef<D, P>::set_callable(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsUndefined());
  WRITE_FIELD(*this, kCallableOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCallableOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=24&c=3
template<class D, class P>
HeapObject TorqueGeneratedWasmApiFunctionRef<D, P>::suspender() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmApiFunctionRef::suspender(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=24&c=3
template<class D, class P>
HeapObject TorqueGeneratedWasmApiFunctionRef<D, P>::suspender(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kSuspenderOffset);
  DCHECK(value.IsUndefined() || value.IsWasmSuspenderObject());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=24&c=3
template<class D, class P>
void TorqueGeneratedWasmApiFunctionRef<D, P>::set_suspender(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsWasmSuspenderObject());
  WRITE_FIELD(*this, kSuspenderOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSuspenderOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=20&c=1
template<class D, class P>
D TorqueGeneratedWasmApiFunctionRef<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedWasmApiFunctionRef<D, P>::TorqueGeneratedWasmApiFunctionRef(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmApiFunctionRef_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedWasmApiFunctionRef<D, P>::TorqueGeneratedWasmApiFunctionRef(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsWasmApiFunctionRef_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=48&c=3
template<class D, class P>
WasmInternalFunction TorqueGeneratedWasmFunctionData<D, P>::internal() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmFunctionData::internal(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=48&c=3
template<class D, class P>
WasmInternalFunction TorqueGeneratedWasmFunctionData<D, P>::internal(PtrComprCageBase cage_base) const {
  WasmInternalFunction value;
  value = TaggedField<WasmInternalFunction>::load(cage_base, *this, kInternalOffset);
  DCHECK(value.IsWasmInternalFunction());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=48&c=3
template<class D, class P>
void TorqueGeneratedWasmFunctionData<D, P>::set_internal(WasmInternalFunction value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsWasmInternalFunction());
  WRITE_FIELD(*this, kInternalOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInternalOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=50&c=31
template<class D, class P>
CodeDataContainer TorqueGeneratedWasmFunctionData<D, P>::wrapper_code() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmFunctionData::wrapper_code(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=50&c=31
template<class D, class P>
CodeDataContainer TorqueGeneratedWasmFunctionData<D, P>::wrapper_code(PtrComprCageBase cage_base) const {
  CodeDataContainer value;
  value = TaggedField<CodeDataContainer>::load(cage_base, *this, kWrapperCodeOffset);
  DCHECK(value.IsCodeDataContainer());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=50&c=31
template<class D, class P>
void TorqueGeneratedWasmFunctionData<D, P>::set_wrapper_code(CodeDataContainer value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsCodeDataContainer());
  WRITE_FIELD(*this, kWrapperCodeOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kWrapperCodeOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=46&c=1
template<class D, class P>
D TorqueGeneratedWasmFunctionData<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedWasmFunctionData<D, P>::TorqueGeneratedWasmFunctionData(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmFunctionData_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedWasmFunctionData<D, P>::TorqueGeneratedWasmFunctionData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsWasmFunctionData_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=58&c=3
template<class D, class P>
WasmInstanceObject TorqueGeneratedWasmExportedFunctionData<D, P>::instance() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmExportedFunctionData::instance(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=58&c=3
template<class D, class P>
WasmInstanceObject TorqueGeneratedWasmExportedFunctionData<D, P>::instance(PtrComprCageBase cage_base) const {
  WasmInstanceObject value;
  value = TaggedField<WasmInstanceObject>::load(cage_base, *this, kInstanceOffset);
  DCHECK(value.IsWasmInstanceObject());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=58&c=3
template<class D, class P>
void TorqueGeneratedWasmExportedFunctionData<D, P>::set_instance(WasmInstanceObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsWasmInstanceObject());
  WRITE_FIELD(*this, kInstanceOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInstanceOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=59&c=3
template<class D, class P>
int TorqueGeneratedWasmExportedFunctionData<D, P>::function_index() const {
  int value;
  value = TaggedField<Smi>::load(*this, kFunctionIndexOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=59&c=3
template<class D, class P>
void TorqueGeneratedWasmExportedFunctionData<D, P>::set_function_index(int value) {
  WRITE_FIELD(*this, kFunctionIndexOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=60&c=3
template<class D, class P>
Foreign TorqueGeneratedWasmExportedFunctionData<D, P>::signature() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmExportedFunctionData::signature(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=60&c=3
template<class D, class P>
Foreign TorqueGeneratedWasmExportedFunctionData<D, P>::signature(PtrComprCageBase cage_base) const {
  Foreign value;
  value = TaggedField<Foreign>::load(cage_base, *this, kSignatureOffset);
  DCHECK(value.IsForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=60&c=3
template<class D, class P>
void TorqueGeneratedWasmExportedFunctionData<D, P>::set_signature(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kSignatureOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSignatureOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=61&c=3
template<class D, class P>
int TorqueGeneratedWasmExportedFunctionData<D, P>::wrapper_budget() const {
  int value;
  value = TaggedField<Smi>::load(*this, kWrapperBudgetOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=61&c=3
template<class D, class P>
void TorqueGeneratedWasmExportedFunctionData<D, P>::set_wrapper_budget(int value) {
  WRITE_FIELD(*this, kWrapperBudgetOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=64&c=31
template<class D, class P>
CodeDataContainer TorqueGeneratedWasmExportedFunctionData<D, P>::c_wrapper_code() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmExportedFunctionData::c_wrapper_code(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=64&c=31
template<class D, class P>
CodeDataContainer TorqueGeneratedWasmExportedFunctionData<D, P>::c_wrapper_code(PtrComprCageBase cage_base) const {
  CodeDataContainer value;
  value = TaggedField<CodeDataContainer>::load(cage_base, *this, kCWrapperCodeOffset);
  DCHECK(value.IsCodeDataContainer());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=64&c=31
template<class D, class P>
void TorqueGeneratedWasmExportedFunctionData<D, P>::set_c_wrapper_code(CodeDataContainer value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsCodeDataContainer());
  WRITE_FIELD(*this, kCWrapperCodeOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCWrapperCodeOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=66&c=3
template<class D, class P>
int TorqueGeneratedWasmExportedFunctionData<D, P>::packed_args_size() const {
  int value;
  value = TaggedField<Smi>::load(*this, kPackedArgsSizeOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=66&c=3
template<class D, class P>
void TorqueGeneratedWasmExportedFunctionData<D, P>::set_packed_args_size(int value) {
  WRITE_FIELD(*this, kPackedArgsSizeOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=69&c=3
template<class D, class P>
HeapObject TorqueGeneratedWasmExportedFunctionData<D, P>::suspender() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmExportedFunctionData::suspender(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=69&c=3
template<class D, class P>
HeapObject TorqueGeneratedWasmExportedFunctionData<D, P>::suspender(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kSuspenderOffset);
  DCHECK(value.IsUndefined() || value.IsWasmSuspenderObject());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=69&c=3
template<class D, class P>
void TorqueGeneratedWasmExportedFunctionData<D, P>::set_suspender(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsWasmSuspenderObject());
  WRITE_FIELD(*this, kSuspenderOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSuspenderOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=54&c=1
template<class D, class P>
D TorqueGeneratedWasmExportedFunctionData<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedWasmExportedFunctionData<D, P>::TorqueGeneratedWasmExportedFunctionData(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmExportedFunctionData_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedWasmExportedFunctionData<D, P>::TorqueGeneratedWasmExportedFunctionData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsWasmExportedFunctionData_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=73&c=3
template<class D, class P>
int TorqueGeneratedWasmJSFunctionData<D, P>::serialized_return_count() const {
  int value;
  value = TaggedField<Smi>::load(*this, kSerializedReturnCountOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=73&c=3
template<class D, class P>
void TorqueGeneratedWasmJSFunctionData<D, P>::set_serialized_return_count(int value) {
  WRITE_FIELD(*this, kSerializedReturnCountOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=74&c=3
template<class D, class P>
int TorqueGeneratedWasmJSFunctionData<D, P>::serialized_parameter_count() const {
  int value;
  value = TaggedField<Smi>::load(*this, kSerializedParameterCountOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=74&c=3
template<class D, class P>
void TorqueGeneratedWasmJSFunctionData<D, P>::set_serialized_parameter_count(int value) {
  WRITE_FIELD(*this, kSerializedParameterCountOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=75&c=3
template<class D, class P>
PodArray<wasm::ValueType> TorqueGeneratedWasmJSFunctionData<D, P>::serialized_signature() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmJSFunctionData::serialized_signature(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=75&c=3
template<class D, class P>
PodArray<wasm::ValueType> TorqueGeneratedWasmJSFunctionData<D, P>::serialized_signature(PtrComprCageBase cage_base) const {
  PodArray<wasm::ValueType> value;
  value = TaggedField<PodArray<wasm::ValueType>>::load(cage_base, *this, kSerializedSignatureOffset);
  DCHECK(value.IsByteArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=75&c=3
template<class D, class P>
void TorqueGeneratedWasmJSFunctionData<D, P>::set_serialized_signature(PodArray<wasm::ValueType> value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsByteArray());
  WRITE_FIELD(*this, kSerializedSignatureOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSerializedSignatureOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=72&c=1
template<class D, class P>
D TorqueGeneratedWasmJSFunctionData<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedWasmJSFunctionData<D, P>::TorqueGeneratedWasmJSFunctionData(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmJSFunctionData_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedWasmJSFunctionData<D, P>::TorqueGeneratedWasmJSFunctionData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsWasmJSFunctionData_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=79&c=3
template<class D, class P>
Foreign TorqueGeneratedWasmCapiFunctionData<D, P>::embedder_data() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmCapiFunctionData::embedder_data(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=79&c=3
template<class D, class P>
Foreign TorqueGeneratedWasmCapiFunctionData<D, P>::embedder_data(PtrComprCageBase cage_base) const {
  Foreign value;
  value = TaggedField<Foreign>::load(cage_base, *this, kEmbedderDataOffset);
  DCHECK(value.IsForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=79&c=3
template<class D, class P>
void TorqueGeneratedWasmCapiFunctionData<D, P>::set_embedder_data(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kEmbedderDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kEmbedderDataOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=80&c=3
template<class D, class P>
PodArray<wasm::ValueType> TorqueGeneratedWasmCapiFunctionData<D, P>::serialized_signature() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmCapiFunctionData::serialized_signature(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=80&c=3
template<class D, class P>
PodArray<wasm::ValueType> TorqueGeneratedWasmCapiFunctionData<D, P>::serialized_signature(PtrComprCageBase cage_base) const {
  PodArray<wasm::ValueType> value;
  value = TaggedField<PodArray<wasm::ValueType>>::load(cage_base, *this, kSerializedSignatureOffset);
  DCHECK(value.IsByteArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=80&c=3
template<class D, class P>
void TorqueGeneratedWasmCapiFunctionData<D, P>::set_serialized_signature(PodArray<wasm::ValueType> value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsByteArray());
  WRITE_FIELD(*this, kSerializedSignatureOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSerializedSignatureOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=78&c=1
template<class D, class P>
D TorqueGeneratedWasmCapiFunctionData<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedWasmCapiFunctionData<D, P>::TorqueGeneratedWasmCapiFunctionData(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmCapiFunctionData_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedWasmCapiFunctionData<D, P>::TorqueGeneratedWasmCapiFunctionData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsWasmCapiFunctionData_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=84&c=3
template<class D, class P>
WasmSuspenderObject TorqueGeneratedWasmOnFulfilledData<D, P>::suspender() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmOnFulfilledData::suspender(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=84&c=3
template<class D, class P>
WasmSuspenderObject TorqueGeneratedWasmOnFulfilledData<D, P>::suspender(PtrComprCageBase cage_base) const {
  WasmSuspenderObject value;
  value = TaggedField<WasmSuspenderObject>::load(cage_base, *this, kSuspenderOffset);
  DCHECK(value.IsWasmSuspenderObject());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=84&c=3
template<class D, class P>
void TorqueGeneratedWasmOnFulfilledData<D, P>::set_suspender(WasmSuspenderObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsWasmSuspenderObject());
  WRITE_FIELD(*this, kSuspenderOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSuspenderOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=83&c=1
template<class D, class P>
D TorqueGeneratedWasmOnFulfilledData<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedWasmOnFulfilledData<D, P>::TorqueGeneratedWasmOnFulfilledData(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmOnFulfilledData_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedWasmOnFulfilledData<D, P>::TorqueGeneratedWasmOnFulfilledData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsWasmOnFulfilledData_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=88&c=3
template<class D, class P>
uint32_t TorqueGeneratedWasmIndirectFunctionTable<D, P>::size() const {
  uint32_t value;
  value = this->template ReadField<uint32_t>(kSizeOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=88&c=3
template<class D, class P>
void TorqueGeneratedWasmIndirectFunctionTable<D, P>::set_size(uint32_t value) {
  this->template WriteField<uint32_t>(kSizeOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=91&c=3
template<class D, class P>
Address TorqueGeneratedWasmIndirectFunctionTable<D, P>::sig_ids() const {
  Address value;
  value = this->template ReadField<Address>(kSigIdsOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=91&c=3
template<class D, class P>
void TorqueGeneratedWasmIndirectFunctionTable<D, P>::set_sig_ids(Address value) {
  this->template WriteField<Address>(kSigIdsOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=92&c=3
template<class D, class P>
Address TorqueGeneratedWasmIndirectFunctionTable<D, P>::targets() const {
  Address value;
  value = this->template ReadField<Address>(kTargetsOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=92&c=3
template<class D, class P>
void TorqueGeneratedWasmIndirectFunctionTable<D, P>::set_targets(Address value) {
  this->template WriteField<Address>(kTargetsOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=93&c=3
template<class D, class P>
HeapObject TorqueGeneratedWasmIndirectFunctionTable<D, P>::managed_native_allocations() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmIndirectFunctionTable::managed_native_allocations(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=93&c=3
template<class D, class P>
HeapObject TorqueGeneratedWasmIndirectFunctionTable<D, P>::managed_native_allocations(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kManagedNativeAllocationsOffset);
  DCHECK(value.IsUndefined() || value.IsForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=93&c=3
template<class D, class P>
void TorqueGeneratedWasmIndirectFunctionTable<D, P>::set_managed_native_allocations(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsForeign());
  WRITE_FIELD(*this, kManagedNativeAllocationsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kManagedNativeAllocationsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=94&c=3
template<class D, class P>
FixedArray TorqueGeneratedWasmIndirectFunctionTable<D, P>::refs() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmIndirectFunctionTable::refs(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=94&c=3
template<class D, class P>
FixedArray TorqueGeneratedWasmIndirectFunctionTable<D, P>::refs(PtrComprCageBase cage_base) const {
  FixedArray value;
  value = TaggedField<FixedArray>::load(cage_base, *this, kRefsOffset);
  DCHECK(value.IsFixedArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=94&c=3
template<class D, class P>
void TorqueGeneratedWasmIndirectFunctionTable<D, P>::set_refs(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kRefsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kRefsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=87&c=1
template<class D, class P>
D TorqueGeneratedWasmIndirectFunctionTable<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedWasmIndirectFunctionTable<D, P>::TorqueGeneratedWasmIndirectFunctionTable(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmIndirectFunctionTable_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedWasmIndirectFunctionTable<D, P>::TorqueGeneratedWasmIndirectFunctionTable(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsWasmIndirectFunctionTable_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=98&c=3
template<class D, class P>
Foreign TorqueGeneratedWasmContinuationObject<D, P>::stack() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmContinuationObject::stack(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=98&c=3
template<class D, class P>
Foreign TorqueGeneratedWasmContinuationObject<D, P>::stack(PtrComprCageBase cage_base) const {
  Foreign value;
  value = TaggedField<Foreign>::load(cage_base, *this, kStackOffset);
  DCHECK(value.IsForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=98&c=3
template<class D, class P>
void TorqueGeneratedWasmContinuationObject<D, P>::set_stack(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kStackOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kStackOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=99&c=3
template<class D, class P>
Foreign TorqueGeneratedWasmContinuationObject<D, P>::jmpbuf() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmContinuationObject::jmpbuf(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=99&c=3
template<class D, class P>
Foreign TorqueGeneratedWasmContinuationObject<D, P>::jmpbuf(PtrComprCageBase cage_base) const {
  Foreign value;
  value = TaggedField<Foreign>::load(cage_base, *this, kJmpbufOffset);
  DCHECK(value.IsForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=99&c=3
template<class D, class P>
void TorqueGeneratedWasmContinuationObject<D, P>::set_jmpbuf(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kJmpbufOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kJmpbufOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=100&c=3
template<class D, class P>
HeapObject TorqueGeneratedWasmContinuationObject<D, P>::parent() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmContinuationObject::parent(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=100&c=3
template<class D, class P>
HeapObject TorqueGeneratedWasmContinuationObject<D, P>::parent(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kParentOffset);
  DCHECK(value.IsUndefined() || value.IsWasmContinuationObject());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=100&c=3
template<class D, class P>
void TorqueGeneratedWasmContinuationObject<D, P>::set_parent(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsWasmContinuationObject());
  WRITE_FIELD(*this, kParentOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kParentOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=97&c=1
template<class D, class P>
D TorqueGeneratedWasmContinuationObject<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedWasmContinuationObject<D, P>::TorqueGeneratedWasmContinuationObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmContinuationObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedWasmContinuationObject<D, P>::TorqueGeneratedWasmContinuationObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsWasmContinuationObject_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=104&c=3
template<class D, class P>
HeapObject TorqueGeneratedWasmSuspenderObject<D, P>::continuation() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmSuspenderObject::continuation(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=104&c=3
template<class D, class P>
HeapObject TorqueGeneratedWasmSuspenderObject<D, P>::continuation(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kContinuationOffset);
  DCHECK(value.IsUndefined() || value.IsWasmContinuationObject());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=104&c=3
template<class D, class P>
void TorqueGeneratedWasmSuspenderObject<D, P>::set_continuation(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsWasmContinuationObject());
  WRITE_FIELD(*this, kContinuationOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kContinuationOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=105&c=3
template<class D, class P>
HeapObject TorqueGeneratedWasmSuspenderObject<D, P>::parent() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmSuspenderObject::parent(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=105&c=3
template<class D, class P>
HeapObject TorqueGeneratedWasmSuspenderObject<D, P>::parent(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kParentOffset);
  DCHECK(value.IsUndefined() || value.IsWasmSuspenderObject());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=105&c=3
template<class D, class P>
void TorqueGeneratedWasmSuspenderObject<D, P>::set_parent(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsWasmSuspenderObject());
  WRITE_FIELD(*this, kParentOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kParentOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=106&c=3
template<class D, class P>
JSObject TorqueGeneratedWasmSuspenderObject<D, P>::resume() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmSuspenderObject::resume(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=106&c=3
template<class D, class P>
JSObject TorqueGeneratedWasmSuspenderObject<D, P>::resume(PtrComprCageBase cage_base) const {
  JSObject value;
  value = TaggedField<JSObject>::load(cage_base, *this, kResumeOffset);
  DCHECK(value.IsJSObject());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=106&c=3
template<class D, class P>
void TorqueGeneratedWasmSuspenderObject<D, P>::set_resume(JSObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSObject());
  WRITE_FIELD(*this, kResumeOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kResumeOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=107&c=3
template<class D, class P>
int TorqueGeneratedWasmSuspenderObject<D, P>::state() const {
  int value;
  value = TaggedField<Smi>::load(*this, kStateOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=107&c=3
template<class D, class P>
void TorqueGeneratedWasmSuspenderObject<D, P>::set_state(int value) {
  WRITE_FIELD(*this, kStateOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=103&c=1
template<class D, class P>
D TorqueGeneratedWasmSuspenderObject<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedWasmSuspenderObject<D, P>::TorqueGeneratedWasmSuspenderObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmSuspenderObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedWasmSuspenderObject<D, P>::TorqueGeneratedWasmSuspenderObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsWasmSuspenderObject_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=114&c=3
template<class D, class P>
int TorqueGeneratedWasmExceptionTag<D, P>::index() const {
  int value;
  value = TaggedField<Smi>::load(*this, kIndexOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=114&c=3
template<class D, class P>
void TorqueGeneratedWasmExceptionTag<D, P>::set_index(int value) {
  WRITE_FIELD(*this, kIndexOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=110&c=1
template<class D, class P>
D TorqueGeneratedWasmExceptionTag<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedWasmExceptionTag<D, P>::TorqueGeneratedWasmExceptionTag(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmExceptionTag_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedWasmExceptionTag<D, P>::TorqueGeneratedWasmExceptionTag(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsWasmExceptionTag_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=118&c=3
template<class D, class P>
Managed<wasm::NativeModule> TorqueGeneratedWasmModuleObject<D, P>::managed_native_module() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmModuleObject::managed_native_module(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=118&c=3
template<class D, class P>
Managed<wasm::NativeModule> TorqueGeneratedWasmModuleObject<D, P>::managed_native_module(PtrComprCageBase cage_base) const {
  Managed<wasm::NativeModule> value;
  value = TaggedField<Managed<wasm::NativeModule>>::load(cage_base, *this, kManagedNativeModuleOffset);
  DCHECK(value.IsForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=118&c=3
template<class D, class P>
void TorqueGeneratedWasmModuleObject<D, P>::set_managed_native_module(Managed<wasm::NativeModule> value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kManagedNativeModuleOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kManagedNativeModuleOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=119&c=3
template<class D, class P>
FixedArray TorqueGeneratedWasmModuleObject<D, P>::export_wrappers() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmModuleObject::export_wrappers(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=119&c=3
template<class D, class P>
FixedArray TorqueGeneratedWasmModuleObject<D, P>::export_wrappers(PtrComprCageBase cage_base) const {
  FixedArray value;
  value = TaggedField<FixedArray>::load(cage_base, *this, kExportWrappersOffset);
  DCHECK(value.IsFixedArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=119&c=3
template<class D, class P>
void TorqueGeneratedWasmModuleObject<D, P>::set_export_wrappers(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kExportWrappersOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kExportWrappersOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=120&c=3
template<class D, class P>
Script TorqueGeneratedWasmModuleObject<D, P>::script() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmModuleObject::script(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=120&c=3
template<class D, class P>
Script TorqueGeneratedWasmModuleObject<D, P>::script(PtrComprCageBase cage_base) const {
  Script value;
  value = TaggedField<Script>::load(cage_base, *this, kScriptOffset);
  DCHECK(value.IsScript());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=120&c=3
template<class D, class P>
void TorqueGeneratedWasmModuleObject<D, P>::set_script(Script value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsScript());
  WRITE_FIELD(*this, kScriptOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kScriptOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=117&c=1
template<class D, class P>
D TorqueGeneratedWasmModuleObject<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedWasmModuleObject<D, P>::TorqueGeneratedWasmModuleObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmModuleObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedWasmModuleObject<D, P>::TorqueGeneratedWasmModuleObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsWasmModuleObject_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=128&c=3
template<class D, class P>
HeapObject TorqueGeneratedWasmTableObject<D, P>::instance() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmTableObject::instance(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=128&c=3
template<class D, class P>
HeapObject TorqueGeneratedWasmTableObject<D, P>::instance(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kInstanceOffset);
  DCHECK(value.IsUndefined() || value.IsWasmInstanceObject());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=128&c=3
template<class D, class P>
void TorqueGeneratedWasmTableObject<D, P>::set_instance(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsWasmInstanceObject());
  WRITE_FIELD(*this, kInstanceOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInstanceOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=131&c=3
template<class D, class P>
FixedArray TorqueGeneratedWasmTableObject<D, P>::entries() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmTableObject::entries(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=131&c=3
template<class D, class P>
FixedArray TorqueGeneratedWasmTableObject<D, P>::entries(PtrComprCageBase cage_base) const {
  FixedArray value;
  value = TaggedField<FixedArray>::load(cage_base, *this, kEntriesOffset);
  DCHECK(value.IsFixedArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=131&c=3
template<class D, class P>
void TorqueGeneratedWasmTableObject<D, P>::set_entries(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kEntriesOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kEntriesOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=132&c=3
template<class D, class P>
int TorqueGeneratedWasmTableObject<D, P>::current_length() const {
  int value;
  value = TaggedField<Smi>::load(*this, kCurrentLengthOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=132&c=3
template<class D, class P>
void TorqueGeneratedWasmTableObject<D, P>::set_current_length(int value) {
  WRITE_FIELD(*this, kCurrentLengthOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=133&c=3
template<class D, class P>
Object TorqueGeneratedWasmTableObject<D, P>::maximum_length() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmTableObject::maximum_length(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=133&c=3
template<class D, class P>
Object TorqueGeneratedWasmTableObject<D, P>::maximum_length(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kMaximumLengthOffset);
  DCHECK(value.IsUndefined() || value.IsHeapNumber() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=133&c=3
template<class D, class P>
void TorqueGeneratedWasmTableObject<D, P>::set_maximum_length(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsHeapNumber() || value.IsSmi());
  WRITE_FIELD(*this, kMaximumLengthOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kMaximumLengthOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=134&c=3
template<class D, class P>
FixedArray TorqueGeneratedWasmTableObject<D, P>::dispatch_tables() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmTableObject::dispatch_tables(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=134&c=3
template<class D, class P>
FixedArray TorqueGeneratedWasmTableObject<D, P>::dispatch_tables(PtrComprCageBase cage_base) const {
  FixedArray value;
  value = TaggedField<FixedArray>::load(cage_base, *this, kDispatchTablesOffset);
  DCHECK(value.IsFixedArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=134&c=3
template<class D, class P>
void TorqueGeneratedWasmTableObject<D, P>::set_dispatch_tables(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kDispatchTablesOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDispatchTablesOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=135&c=3
template<class D, class P>
int TorqueGeneratedWasmTableObject<D, P>::raw_type() const {
  int value;
  value = TaggedField<Smi>::load(*this, kRawTypeOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=135&c=3
template<class D, class P>
void TorqueGeneratedWasmTableObject<D, P>::set_raw_type(int value) {
  WRITE_FIELD(*this, kRawTypeOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=123&c=1
template<class D, class P>
D TorqueGeneratedWasmTableObject<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedWasmTableObject<D, P>::TorqueGeneratedWasmTableObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmTableObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedWasmTableObject<D, P>::TorqueGeneratedWasmTableObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsWasmTableObject_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=139&c=3
template<class D, class P>
JSArrayBuffer TorqueGeneratedWasmMemoryObject<D, P>::array_buffer() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmMemoryObject::array_buffer(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=139&c=3
template<class D, class P>
JSArrayBuffer TorqueGeneratedWasmMemoryObject<D, P>::array_buffer(PtrComprCageBase cage_base) const {
  JSArrayBuffer value;
  value = TaggedField<JSArrayBuffer>::load(cage_base, *this, kArrayBufferOffset);
  DCHECK(value.IsJSArrayBuffer());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=139&c=3
template<class D, class P>
void TorqueGeneratedWasmMemoryObject<D, P>::set_array_buffer(JSArrayBuffer value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSArrayBuffer());
  WRITE_FIELD(*this, kArrayBufferOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kArrayBufferOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=140&c=3
template<class D, class P>
int TorqueGeneratedWasmMemoryObject<D, P>::maximum_pages() const {
  int value;
  value = TaggedField<Smi>::load(*this, kMaximumPagesOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=140&c=3
template<class D, class P>
void TorqueGeneratedWasmMemoryObject<D, P>::set_maximum_pages(int value) {
  WRITE_FIELD(*this, kMaximumPagesOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=141&c=3
template<class D, class P>
HeapObject TorqueGeneratedWasmMemoryObject<D, P>::instances() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmMemoryObject::instances(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=141&c=3
template<class D, class P>
HeapObject TorqueGeneratedWasmMemoryObject<D, P>::instances(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kInstancesOffset);
  DCHECK(value.IsUndefined() || value.IsWeakArrayList());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=141&c=3
template<class D, class P>
void TorqueGeneratedWasmMemoryObject<D, P>::set_instances(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsWeakArrayList());
  WRITE_FIELD(*this, kInstancesOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInstancesOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=138&c=1
template<class D, class P>
D TorqueGeneratedWasmMemoryObject<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedWasmMemoryObject<D, P>::TorqueGeneratedWasmMemoryObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmMemoryObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedWasmMemoryObject<D, P>::TorqueGeneratedWasmMemoryObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsWasmMemoryObject_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=149&c=3
template<class D, class P>
HeapObject TorqueGeneratedWasmGlobalObject<D, P>::instance() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmGlobalObject::instance(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=149&c=3
template<class D, class P>
HeapObject TorqueGeneratedWasmGlobalObject<D, P>::instance(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kInstanceOffset);
  DCHECK(value.IsUndefined() || value.IsWasmInstanceObject());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=149&c=3
template<class D, class P>
void TorqueGeneratedWasmGlobalObject<D, P>::set_instance(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsWasmInstanceObject());
  WRITE_FIELD(*this, kInstanceOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInstanceOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=150&c=3
template<class D, class P>
HeapObject TorqueGeneratedWasmGlobalObject<D, P>::untagged_buffer() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmGlobalObject::untagged_buffer(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=150&c=3
template<class D, class P>
HeapObject TorqueGeneratedWasmGlobalObject<D, P>::untagged_buffer(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kUntaggedBufferOffset);
  DCHECK(value.IsUndefined() || value.IsJSArrayBuffer());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=150&c=3
template<class D, class P>
void TorqueGeneratedWasmGlobalObject<D, P>::set_untagged_buffer(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsJSArrayBuffer());
  WRITE_FIELD(*this, kUntaggedBufferOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kUntaggedBufferOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=151&c=3
template<class D, class P>
HeapObject TorqueGeneratedWasmGlobalObject<D, P>::tagged_buffer() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmGlobalObject::tagged_buffer(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=151&c=3
template<class D, class P>
HeapObject TorqueGeneratedWasmGlobalObject<D, P>::tagged_buffer(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kTaggedBufferOffset);
  DCHECK(value.IsUndefined() || value.IsFixedArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=151&c=3
template<class D, class P>
void TorqueGeneratedWasmGlobalObject<D, P>::set_tagged_buffer(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsFixedArray());
  WRITE_FIELD(*this, kTaggedBufferOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTaggedBufferOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=152&c=3
template<class D, class P>
int TorqueGeneratedWasmGlobalObject<D, P>::offset() const {
  int value;
  value = TaggedField<Smi>::load(*this, kOffsetOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=152&c=3
template<class D, class P>
void TorqueGeneratedWasmGlobalObject<D, P>::set_offset(int value) {
  WRITE_FIELD(*this, kOffsetOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=153&c=3
template<class D, class P>
int TorqueGeneratedWasmGlobalObject<D, P>::raw_type() const {
  int value;
  value = TaggedField<Smi>::load(*this, kRawTypeOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=153&c=3
template<class D, class P>
void TorqueGeneratedWasmGlobalObject<D, P>::set_raw_type(int value) {
  WRITE_FIELD(*this, kRawTypeOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=156&c=3
template<class D, class P>
int TorqueGeneratedWasmGlobalObject<D, P>::is_mutable() const {
  int value;
  value = TaggedField<Smi>::load(*this, kIsMutableOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=156&c=3
template<class D, class P>
void TorqueGeneratedWasmGlobalObject<D, P>::set_is_mutable(int value) {
  WRITE_FIELD(*this, kIsMutableOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=144&c=1
template<class D, class P>
D TorqueGeneratedWasmGlobalObject<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedWasmGlobalObject<D, P>::TorqueGeneratedWasmGlobalObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmGlobalObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedWasmGlobalObject<D, P>::TorqueGeneratedWasmGlobalObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsWasmGlobalObject_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=160&c=3
template<class D, class P>
PodArray<wasm::ValueType> TorqueGeneratedWasmTagObject<D, P>::serialized_signature() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmTagObject::serialized_signature(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=160&c=3
template<class D, class P>
PodArray<wasm::ValueType> TorqueGeneratedWasmTagObject<D, P>::serialized_signature(PtrComprCageBase cage_base) const {
  PodArray<wasm::ValueType> value;
  value = TaggedField<PodArray<wasm::ValueType>>::load(cage_base, *this, kSerializedSignatureOffset);
  DCHECK(value.IsByteArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=160&c=3
template<class D, class P>
void TorqueGeneratedWasmTagObject<D, P>::set_serialized_signature(PodArray<wasm::ValueType> value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsByteArray());
  WRITE_FIELD(*this, kSerializedSignatureOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSerializedSignatureOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=161&c=3
template<class D, class P>
HeapObject TorqueGeneratedWasmTagObject<D, P>::tag() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmTagObject::tag(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=161&c=3
template<class D, class P>
HeapObject TorqueGeneratedWasmTagObject<D, P>::tag(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kTagOffset);
  DCHECK(value.IsHeapObject());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=161&c=3
template<class D, class P>
void TorqueGeneratedWasmTagObject<D, P>::set_tag(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject());
  WRITE_FIELD(*this, kTagOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTagOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=159&c=1
template<class D, class P>
D TorqueGeneratedWasmTagObject<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedWasmTagObject<D, P>::TorqueGeneratedWasmTagObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmTagObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedWasmTagObject<D, P>::TorqueGeneratedWasmTagObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsWasmTagObject_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=167&c=3
template<class D, class P>
Managed<wasm::NativeModule> TorqueGeneratedAsmWasmData<D, P>::managed_native_module() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedAsmWasmData::managed_native_module(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=167&c=3
template<class D, class P>
Managed<wasm::NativeModule> TorqueGeneratedAsmWasmData<D, P>::managed_native_module(PtrComprCageBase cage_base) const {
  Managed<wasm::NativeModule> value;
  value = TaggedField<Managed<wasm::NativeModule>>::load(cage_base, *this, kManagedNativeModuleOffset);
  DCHECK(value.IsForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=167&c=3
template<class D, class P>
void TorqueGeneratedAsmWasmData<D, P>::set_managed_native_module(Managed<wasm::NativeModule> value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kManagedNativeModuleOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kManagedNativeModuleOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=168&c=3
template<class D, class P>
FixedArray TorqueGeneratedAsmWasmData<D, P>::export_wrappers() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedAsmWasmData::export_wrappers(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=168&c=3
template<class D, class P>
FixedArray TorqueGeneratedAsmWasmData<D, P>::export_wrappers(PtrComprCageBase cage_base) const {
  FixedArray value;
  value = TaggedField<FixedArray>::load(cage_base, *this, kExportWrappersOffset);
  DCHECK(value.IsFixedArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=168&c=3
template<class D, class P>
void TorqueGeneratedAsmWasmData<D, P>::set_export_wrappers(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kExportWrappersOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kExportWrappersOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=169&c=3
template<class D, class P>
HeapNumber TorqueGeneratedAsmWasmData<D, P>::uses_bitset() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedAsmWasmData::uses_bitset(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=169&c=3
template<class D, class P>
HeapNumber TorqueGeneratedAsmWasmData<D, P>::uses_bitset(PtrComprCageBase cage_base) const {
  HeapNumber value;
  value = TaggedField<HeapNumber>::load(cage_base, *this, kUsesBitsetOffset);
  DCHECK(value.IsHeapNumber());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=169&c=3
template<class D, class P>
void TorqueGeneratedAsmWasmData<D, P>::set_uses_bitset(HeapNumber value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapNumber());
  WRITE_FIELD(*this, kUsesBitsetOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kUsesBitsetOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=166&c=1
template<class D, class P>
D TorqueGeneratedAsmWasmData<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedAsmWasmData<D, P>::TorqueGeneratedAsmWasmData(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsAsmWasmData_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedAsmWasmData<D, P>::TorqueGeneratedAsmWasmData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsAsmWasmData_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=173&c=3
template<class D, class P>
FixedArray TorqueGeneratedWasmTypeInfo<D, P>::supertypes() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmTypeInfo::supertypes(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=173&c=3
template<class D, class P>
FixedArray TorqueGeneratedWasmTypeInfo<D, P>::supertypes(PtrComprCageBase cage_base) const {
  FixedArray value;
  value = TaggedField<FixedArray>::load(cage_base, *this, kSupertypesOffset);
  DCHECK(value.IsFixedArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=173&c=3
template<class D, class P>
void TorqueGeneratedWasmTypeInfo<D, P>::set_supertypes(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kSupertypesOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSupertypesOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=174&c=3
template<class D, class P>
ArrayList TorqueGeneratedWasmTypeInfo<D, P>::subtypes() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmTypeInfo::subtypes(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=174&c=3
template<class D, class P>
ArrayList TorqueGeneratedWasmTypeInfo<D, P>::subtypes(PtrComprCageBase cage_base) const {
  ArrayList value;
  value = TaggedField<ArrayList>::load(cage_base, *this, kSubtypesOffset);
  DCHECK(value.IsArrayList());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=174&c=3
template<class D, class P>
void TorqueGeneratedWasmTypeInfo<D, P>::set_subtypes(ArrayList value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsArrayList());
  WRITE_FIELD(*this, kSubtypesOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSubtypesOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=176&c=3
template<class D, class P>
int TorqueGeneratedWasmTypeInfo<D, P>::instance_size() const {
  int value;
  value = TaggedField<Smi>::load(*this, kInstanceSizeOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=176&c=3
template<class D, class P>
void TorqueGeneratedWasmTypeInfo<D, P>::set_instance_size(int value) {
  WRITE_FIELD(*this, kInstanceSizeOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=185&c=3
template<class D, class P>
WasmInstanceObject TorqueGeneratedWasmTypeInfo<D, P>::instance() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmTypeInfo::instance(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=185&c=3
template<class D, class P>
WasmInstanceObject TorqueGeneratedWasmTypeInfo<D, P>::instance(PtrComprCageBase cage_base) const {
  WasmInstanceObject value;
  value = TaggedField<WasmInstanceObject>::load(cage_base, *this, kInstanceOffset);
  DCHECK(value.IsWasmInstanceObject());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=185&c=3
template<class D, class P>
void TorqueGeneratedWasmTypeInfo<D, P>::set_instance(WasmInstanceObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsWasmInstanceObject());
  WRITE_FIELD(*this, kInstanceOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInstanceOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=172&c=1
template<class D, class P>
D TorqueGeneratedWasmTypeInfo<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedWasmTypeInfo<D, P>::TorqueGeneratedWasmTypeInfo(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmTypeInfo_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedWasmTypeInfo<D, P>::TorqueGeneratedWasmTypeInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsWasmTypeInfo_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=189&c=1
template<class D, class P>
D TorqueGeneratedWasmObject<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedWasmObject<D, P>::TorqueGeneratedWasmObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedWasmObject<D, P>::TorqueGeneratedWasmObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsWasmObject_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=193&c=1
template<class D, class P>
D TorqueGeneratedWasmStruct<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedWasmStruct<D, P>::TorqueGeneratedWasmStruct(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmStruct_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedWasmStruct<D, P>::TorqueGeneratedWasmStruct(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsWasmStruct_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=199&c=3
template<class D, class P>
uint32_t TorqueGeneratedWasmArray<D, P>::length() const {
  uint32_t value;
  value = this->template ReadField<uint32_t>(kLengthOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=199&c=3
template<class D, class P>
void TorqueGeneratedWasmArray<D, P>::set_length(uint32_t value) {
  this->template WriteField<uint32_t>(kLengthOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=197&c=1
template<class D, class P>
D TorqueGeneratedWasmArray<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedWasmArray<D, P>::TorqueGeneratedWasmArray(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmArray_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedWasmArray<D, P>::TorqueGeneratedWasmArray(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsWasmArray_NonInline(*this));
}
