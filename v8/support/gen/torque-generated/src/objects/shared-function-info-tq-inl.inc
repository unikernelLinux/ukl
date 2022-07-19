// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=7&c=3
template<class D, class P>
int32_t TorqueGeneratedPreparseData<D, P>::data_length() const {
  int32_t value;
  value = this->template ReadField<int32_t>(kDataLengthOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=7&c=3
template<class D, class P>
void TorqueGeneratedPreparseData<D, P>::set_data_length(int32_t value) {
  this->template WriteField<int32_t>(kDataLengthOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=8&c=3
template<class D, class P>
int32_t TorqueGeneratedPreparseData<D, P>::children_length() const {
  int32_t value;
  value = this->template ReadField<int32_t>(kChildrenLengthOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=8&c=3
template<class D, class P>
void TorqueGeneratedPreparseData<D, P>::set_children_length(int32_t value) {
  this->template WriteField<int32_t>(kChildrenLengthOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=5&c=1
template<class D, class P>
D TorqueGeneratedPreparseData<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedPreparseData<D, P>::TorqueGeneratedPreparseData(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsPreparseData_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedPreparseData<D, P>::TorqueGeneratedPreparseData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsPreparseData_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=12&c=3
template<class D, class P>
BytecodeArray TorqueGeneratedInterpreterData<D, P>::bytecode_array() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedInterpreterData::bytecode_array(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=12&c=3
template<class D, class P>
BytecodeArray TorqueGeneratedInterpreterData<D, P>::bytecode_array(PtrComprCageBase cage_base) const {
  BytecodeArray value;
  value = TaggedField<BytecodeArray>::load(cage_base, *this, kBytecodeArrayOffset);
  DCHECK(value.IsBytecodeArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=12&c=3
template<class D, class P>
void TorqueGeneratedInterpreterData<D, P>::set_bytecode_array(BytecodeArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsBytecodeArray());
  WRITE_FIELD(*this, kBytecodeArrayOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBytecodeArrayOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=13&c=31
template<class D, class P>
CodeDataContainer TorqueGeneratedInterpreterData<D, P>::interpreter_trampoline() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedInterpreterData::interpreter_trampoline(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=13&c=31
template<class D, class P>
CodeDataContainer TorqueGeneratedInterpreterData<D, P>::interpreter_trampoline(PtrComprCageBase cage_base) const {
  CodeDataContainer value;
  value = TaggedField<CodeDataContainer>::load(cage_base, *this, kInterpreterTrampolineOffset);
  DCHECK(value.IsCodeDataContainer());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=13&c=31
template<class D, class P>
void TorqueGeneratedInterpreterData<D, P>::set_interpreter_trampoline(CodeDataContainer value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsCodeDataContainer());
  WRITE_FIELD(*this, kInterpreterTrampolineOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInterpreterTrampolineOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=11&c=1
template<class D, class P>
D TorqueGeneratedInterpreterData<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedInterpreterData<D, P>::TorqueGeneratedInterpreterData(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsInterpreterData_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedInterpreterData<D, P>::TorqueGeneratedInterpreterData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsInterpreterData_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=56&c=22
template<class D, class P>
Object TorqueGeneratedSharedFunctionInfo<D, P>::function_data() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedSharedFunctionInfo::function_data(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=56&c=22
template<class D, class P>
Object TorqueGeneratedSharedFunctionInfo<D, P>::function_data(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kFunctionDataOffset);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=56&c=22
template<class D, class P>
void TorqueGeneratedSharedFunctionInfo<D, P>::set_function_data(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kFunctionDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kFunctionDataOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=57&c=3
template<class D, class P>
Object TorqueGeneratedSharedFunctionInfo<D, P>::name_or_scope_info() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedSharedFunctionInfo::name_or_scope_info(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=57&c=3
template<class D, class P>
Object TorqueGeneratedSharedFunctionInfo<D, P>::name_or_scope_info(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kNameOrScopeInfoOffset);
  DCHECK(value.IsString() || value.IsNoSharedNameSentinel() || value.IsScopeInfo());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=57&c=3
template<class D, class P>
void TorqueGeneratedSharedFunctionInfo<D, P>::set_name_or_scope_info(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString() || value.IsNoSharedNameSentinel() || value.IsScopeInfo());
  WRITE_FIELD(*this, kNameOrScopeInfoOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNameOrScopeInfoOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=58&c=3
template<class D, class P>
HeapObject TorqueGeneratedSharedFunctionInfo<D, P>::outer_scope_info_or_feedback_metadata() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedSharedFunctionInfo::outer_scope_info_or_feedback_metadata(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=58&c=3
template<class D, class P>
HeapObject TorqueGeneratedSharedFunctionInfo<D, P>::outer_scope_info_or_feedback_metadata(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kOuterScopeInfoOrFeedbackMetadataOffset);
  DCHECK(value.IsHeapObject());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=58&c=3
template<class D, class P>
void TorqueGeneratedSharedFunctionInfo<D, P>::set_outer_scope_info_or_feedback_metadata(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject());
  WRITE_FIELD(*this, kOuterScopeInfoOrFeedbackMetadataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kOuterScopeInfoOrFeedbackMetadataOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=59&c=3
template<class D, class P>
HeapObject TorqueGeneratedSharedFunctionInfo<D, P>::script_or_debug_info() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedSharedFunctionInfo::script_or_debug_info(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=59&c=3
template<class D, class P>
HeapObject TorqueGeneratedSharedFunctionInfo<D, P>::script_or_debug_info(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kScriptOrDebugInfoOffset);
  DCHECK(value.IsUndefined() || value.IsDebugInfo() || value.IsScript());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=59&c=3
template<class D, class P>
void TorqueGeneratedSharedFunctionInfo<D, P>::set_script_or_debug_info(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsDebugInfo() || value.IsScript());
  WRITE_FIELD(*this, kScriptOrDebugInfoOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kScriptOrDebugInfoOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=65&c=3
template<class D, class P>
int16_t TorqueGeneratedSharedFunctionInfo<D, P>::length() const {
  int16_t value;
  value = this->template ReadField<int16_t>(kLengthOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=65&c=3
template<class D, class P>
void TorqueGeneratedSharedFunctionInfo<D, P>::set_length(int16_t value) {
  this->template WriteField<int16_t>(kLengthOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=70&c=3
template<class D, class P>
uint16_t TorqueGeneratedSharedFunctionInfo<D, P>::formal_parameter_count() const {
  uint16_t value;
  value = this->template ReadField<uint16_t>(kFormalParameterCountOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=70&c=3
template<class D, class P>
void TorqueGeneratedSharedFunctionInfo<D, P>::set_formal_parameter_count(uint16_t value) {
  this->template WriteField<uint16_t>(kFormalParameterCountOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=71&c=3
template<class D, class P>
uint16_t TorqueGeneratedSharedFunctionInfo<D, P>::function_token_offset() const {
  uint16_t value;
  value = this->template ReadField<uint16_t>(kFunctionTokenOffsetOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=71&c=3
template<class D, class P>
void TorqueGeneratedSharedFunctionInfo<D, P>::set_function_token_offset(uint16_t value) {
  this->template WriteField<uint16_t>(kFunctionTokenOffsetOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=74&c=3
template<class D, class P>
uint8_t TorqueGeneratedSharedFunctionInfo<D, P>::expected_nof_properties() const {
  uint8_t value;
  value = this->template ReadField<uint8_t>(kExpectedNofPropertiesOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=74&c=3
template<class D, class P>
void TorqueGeneratedSharedFunctionInfo<D, P>::set_expected_nof_properties(uint8_t value) {
  this->template WriteField<uint8_t>(kExpectedNofPropertiesOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=75&c=3
template<class D, class P>
uint8_t TorqueGeneratedSharedFunctionInfo<D, P>::flags2() const {
  uint8_t value;
  value = this->template ReadField<uint8_t>(kFlags2Offset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=75&c=3
template<class D, class P>
void TorqueGeneratedSharedFunctionInfo<D, P>::set_flags2(uint8_t value) {
  this->template WriteField<uint8_t>(kFlags2Offset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=76&c=3
template<class D, class P>
uint32_t TorqueGeneratedSharedFunctionInfo<D, P>::flags() const {
  uint32_t value;
  value = this->template ReadField<uint32_t>(kFlagsOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=76&c=3
template<class D, class P>
void TorqueGeneratedSharedFunctionInfo<D, P>::set_flags(uint32_t value) {
  this->template WriteField<uint32_t>(kFlagsOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=80&c=3
template<class D, class P>
int32_t TorqueGeneratedSharedFunctionInfo<D, P>::function_literal_id() const {
  int32_t value;
  value = this->template ReadField<int32_t>(kFunctionLiteralIdOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=80&c=3
template<class D, class P>
void TorqueGeneratedSharedFunctionInfo<D, P>::set_function_literal_id(int32_t value) {
  this->template WriteField<int32_t>(kFunctionLiteralIdOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=50&c=1
template<class D, class P>
D TorqueGeneratedSharedFunctionInfo<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedSharedFunctionInfo<D, P>::TorqueGeneratedSharedFunctionInfo(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsSharedFunctionInfo_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedSharedFunctionInfo<D, P>::TorqueGeneratedSharedFunctionInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsSharedFunctionInfo_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=114&c=3
template<class D, class P>
String TorqueGeneratedUncompiledData<D, P>::inferred_name() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedUncompiledData::inferred_name(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=114&c=3
template<class D, class P>
String TorqueGeneratedUncompiledData<D, P>::inferred_name(PtrComprCageBase cage_base) const {
  String value;
  value = TaggedField<String>::load(cage_base, *this, kInferredNameOffset);
  DCHECK(value.IsString());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=114&c=3
template<class D, class P>
void TorqueGeneratedUncompiledData<D, P>::set_inferred_name(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kInferredNameOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInferredNameOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=115&c=3
template<class D, class P>
int32_t TorqueGeneratedUncompiledData<D, P>::start_position() const {
  int32_t value;
  value = this->template ReadField<int32_t>(kStartPositionOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=115&c=3
template<class D, class P>
void TorqueGeneratedUncompiledData<D, P>::set_start_position(int32_t value) {
  this->template WriteField<int32_t>(kStartPositionOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=116&c=3
template<class D, class P>
int32_t TorqueGeneratedUncompiledData<D, P>::end_position() const {
  int32_t value;
  value = this->template ReadField<int32_t>(kEndPositionOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=116&c=3
template<class D, class P>
void TorqueGeneratedUncompiledData<D, P>::set_end_position(int32_t value) {
  this->template WriteField<int32_t>(kEndPositionOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=112&c=1
template<class D, class P>
D TorqueGeneratedUncompiledData<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedUncompiledData<D, P>::TorqueGeneratedUncompiledData(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsUncompiledData_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedUncompiledData<D, P>::TorqueGeneratedUncompiledData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsUncompiledData_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=119&c=1
template<class D, class P>
D TorqueGeneratedUncompiledDataWithoutPreparseData<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedUncompiledDataWithoutPreparseData<D, P>::TorqueGeneratedUncompiledDataWithoutPreparseData(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsUncompiledDataWithoutPreparseData_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedUncompiledDataWithoutPreparseData<D, P>::TorqueGeneratedUncompiledDataWithoutPreparseData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsUncompiledDataWithoutPreparseData_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=129&c=3
template<class D, class P>
PreparseData TorqueGeneratedUncompiledDataWithPreparseData<D, P>::preparse_data() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedUncompiledDataWithPreparseData::preparse_data(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=129&c=3
template<class D, class P>
PreparseData TorqueGeneratedUncompiledDataWithPreparseData<D, P>::preparse_data(PtrComprCageBase cage_base) const {
  PreparseData value;
  value = TaggedField<PreparseData>::load(cage_base, *this, kPreparseDataOffset);
  DCHECK(value.IsPreparseData());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=129&c=3
template<class D, class P>
void TorqueGeneratedUncompiledDataWithPreparseData<D, P>::set_preparse_data(PreparseData value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsPreparseData());
  WRITE_FIELD(*this, kPreparseDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPreparseDataOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=125&c=1
template<class D, class P>
D TorqueGeneratedUncompiledDataWithPreparseData<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedUncompiledDataWithPreparseData<D, P>::TorqueGeneratedUncompiledDataWithPreparseData(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsUncompiledDataWithPreparseData_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedUncompiledDataWithPreparseData<D, P>::TorqueGeneratedUncompiledDataWithPreparseData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsUncompiledDataWithPreparseData_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=138&c=3
template<class D, class P>
Address TorqueGeneratedUncompiledDataWithoutPreparseDataWithJob<D, P>::job() const {
  Address value;
  value = this->template ReadField<Address>(kJobOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=138&c=3
template<class D, class P>
void TorqueGeneratedUncompiledDataWithoutPreparseDataWithJob<D, P>::set_job(Address value) {
  this->template WriteField<Address>(kJobOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=132&c=1
template<class D, class P>
D TorqueGeneratedUncompiledDataWithoutPreparseDataWithJob<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedUncompiledDataWithoutPreparseDataWithJob<D, P>::TorqueGeneratedUncompiledDataWithoutPreparseDataWithJob(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsUncompiledDataWithoutPreparseDataWithJob_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedUncompiledDataWithoutPreparseDataWithJob<D, P>::TorqueGeneratedUncompiledDataWithoutPreparseDataWithJob(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsUncompiledDataWithoutPreparseDataWithJob_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=147&c=3
template<class D, class P>
Address TorqueGeneratedUncompiledDataWithPreparseDataAndJob<D, P>::job() const {
  Address value;
  value = this->template ReadField<Address>(kJobOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=147&c=3
template<class D, class P>
void TorqueGeneratedUncompiledDataWithPreparseDataAndJob<D, P>::set_job(Address value) {
  this->template WriteField<Address>(kJobOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=141&c=1
template<class D, class P>
D TorqueGeneratedUncompiledDataWithPreparseDataAndJob<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedUncompiledDataWithPreparseDataAndJob<D, P>::TorqueGeneratedUncompiledDataWithPreparseDataAndJob(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsUncompiledDataWithPreparseDataAndJob_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedUncompiledDataWithPreparseDataAndJob<D, P>::TorqueGeneratedUncompiledDataWithPreparseDataAndJob(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsUncompiledDataWithPreparseDataAndJob_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=152&c=3
template<class D, class P>
ByteArray TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::block_ids() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedOnHeapBasicBlockProfilerData::block_ids(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=152&c=3
template<class D, class P>
ByteArray TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::block_ids(PtrComprCageBase cage_base) const {
  ByteArray value;
  value = TaggedField<ByteArray>::load(cage_base, *this, kBlockIdsOffset);
  DCHECK(value.IsByteArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=152&c=3
template<class D, class P>
void TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::set_block_ids(ByteArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsByteArray());
  WRITE_FIELD(*this, kBlockIdsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBlockIdsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=153&c=3
template<class D, class P>
ByteArray TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::counts() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedOnHeapBasicBlockProfilerData::counts(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=153&c=3
template<class D, class P>
ByteArray TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::counts(PtrComprCageBase cage_base) const {
  ByteArray value;
  value = TaggedField<ByteArray>::load(cage_base, *this, kCountsOffset);
  DCHECK(value.IsByteArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=153&c=3
template<class D, class P>
void TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::set_counts(ByteArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsByteArray());
  WRITE_FIELD(*this, kCountsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCountsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=154&c=3
template<class D, class P>
String TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::name() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedOnHeapBasicBlockProfilerData::name(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=154&c=3
template<class D, class P>
String TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::name(PtrComprCageBase cage_base) const {
  String value;
  value = TaggedField<String>::load(cage_base, *this, kNameOffset);
  DCHECK(value.IsString());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=154&c=3
template<class D, class P>
void TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::set_name(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kNameOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNameOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=155&c=3
template<class D, class P>
String TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::schedule() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedOnHeapBasicBlockProfilerData::schedule(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=155&c=3
template<class D, class P>
String TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::schedule(PtrComprCageBase cage_base) const {
  String value;
  value = TaggedField<String>::load(cage_base, *this, kScheduleOffset);
  DCHECK(value.IsString());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=155&c=3
template<class D, class P>
void TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::set_schedule(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kScheduleOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kScheduleOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=156&c=3
template<class D, class P>
String TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::code() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedOnHeapBasicBlockProfilerData::code(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=156&c=3
template<class D, class P>
String TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::code(PtrComprCageBase cage_base) const {
  String value;
  value = TaggedField<String>::load(cage_base, *this, kCodeOffset);
  DCHECK(value.IsString());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=156&c=3
template<class D, class P>
void TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::set_code(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kCodeOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCodeOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=157&c=3
template<class D, class P>
int TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::hash() const {
  int value;
  value = TaggedField<Smi>::load(*this, kHashOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=157&c=3
template<class D, class P>
void TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::set_hash(int value) {
  WRITE_FIELD(*this, kHashOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=150&c=1
template<class D, class P>
D TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::TorqueGeneratedOnHeapBasicBlockProfilerData(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsOnHeapBasicBlockProfilerData_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::TorqueGeneratedOnHeapBasicBlockProfilerData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsOnHeapBasicBlockProfilerData_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(OnHeapBasicBlockProfilerData)
