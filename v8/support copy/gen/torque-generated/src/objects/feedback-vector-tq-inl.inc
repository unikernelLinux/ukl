// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=31&c=19
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceFeedbackVectorRawFeedbackSlots(FeedbackVector p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=69&c=1
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_int31_0(int31_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=203&c=1
inline intptr_t TqRuntimeConvert_intptr_int32_0(int32_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0(IntegerLiteral p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=25&c=19
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_MaybeObject_0(Object p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=75&c=1
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_intptr_0(intptr_t p_i);

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceFeedbackVectorRawFeedbackSlots
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceFeedbackVectorRawFeedbackSlots

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=31&c=19
std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceFeedbackVectorRawFeedbackSlots(FeedbackVector p_o) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  int32_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  Object tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(4);
  tmp1 = (p_o).ReadField<int32_t>(tmp0);
  tmp2 = TqRuntimeConvert_intptr_int32_0(tmp1);
  tmp3 = TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0(IntegerLiteral(false, 0x20ull));
  std::tie(tmp4, tmp5, tmp6) = TqRuntimeNewMutableSlice_MaybeObject_0(p_o, tmp3, tmp2);
  goto block2;

  block2:
  return std::make_tuple(tmp4, tmp5, tmp6);
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeFieldSliceFeedbackVectorRawFeedbackSlots
#ifndef V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_int31_0
#define V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_int31_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=69&c=1
intptr_t TqRuntimeFromConstexpr_intptr_constexpr_int31_0(int31_t p_i) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return tmp0;
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_int31_0
#ifndef V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_int32_0
#define V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_int32_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=203&c=1
intptr_t TqRuntimeConvert_intptr_int32_0(int32_t p_i) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = TorqueRuntimeMacroShims::CodeStubAssembler::ChangeInt32ToIntPtr(p_i);
  goto block2;

  block2:
  return tmp0;
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_int32_0
#ifndef V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0
#define V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
intptr_t TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0(IntegerLiteral p_i) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_intptr_0((TorqueRuntimeMacroShims::CodeStubAssembler::ConstexprIntegerLiteralToIntptr(p_i)));
  goto block2;

  block2:
  return tmp0;
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0
#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_MaybeObject_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_MaybeObject_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=25&c=19
std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_MaybeObject_0(Object p_object, intptr_t p_offset, intptr_t p_length) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return std::make_tuple(tmp0, tmp1, tmp2);
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_MaybeObject_0
#ifndef V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_intptr_0
#define V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_intptr_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=75&c=1
intptr_t TqRuntimeFromConstexpr_intptr_constexpr_intptr_0(intptr_t p_i) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return tmp0;
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_intptr_0
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=20&c=9
template<class D, class P>
int32_t TorqueGeneratedFeedbackVector<D, P>::length() const {
  int32_t value;
  value = this->template ReadField<int32_t>(kLengthOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=20&c=9
template<class D, class P>
void TorqueGeneratedFeedbackVector<D, P>::set_length(int32_t value) {
  this->template WriteField<int32_t>(kLengthOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=21&c=3
template<class D, class P>
int32_t TorqueGeneratedFeedbackVector<D, P>::invocation_count() const {
  int32_t value;
  value = this->template ReadField<int32_t>(kInvocationCountOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=21&c=3
template<class D, class P>
void TorqueGeneratedFeedbackVector<D, P>::set_invocation_count(int32_t value) {
  this->template WriteField<int32_t>(kInvocationCountOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=22&c=3
template<class D, class P>
int32_t TorqueGeneratedFeedbackVector<D, P>::profiler_ticks() const {
  int32_t value;
  value = this->template ReadField<int32_t>(kProfilerTicksOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=22&c=3
template<class D, class P>
void TorqueGeneratedFeedbackVector<D, P>::set_profiler_ticks(int32_t value) {
  this->template WriteField<int32_t>(kProfilerTicksOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=26&c=3
template<class D, class P>
uint32_t TorqueGeneratedFeedbackVector<D, P>::flags() const {
  uint32_t value;
  value = this->template ReadField<uint32_t>(kFlagsOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=26&c=3
template<class D, class P>
void TorqueGeneratedFeedbackVector<D, P>::set_flags(uint32_t value) {
  this->template WriteField<uint32_t>(kFlagsOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=27&c=3
template<class D, class P>
SharedFunctionInfo TorqueGeneratedFeedbackVector<D, P>::shared_function_info() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedFeedbackVector::shared_function_info(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=27&c=3
template<class D, class P>
SharedFunctionInfo TorqueGeneratedFeedbackVector<D, P>::shared_function_info(PtrComprCageBase cage_base) const {
  SharedFunctionInfo value;
  value = TaggedField<SharedFunctionInfo>::load(cage_base, *this, kSharedFunctionInfoOffset);
  DCHECK(value.IsSharedFunctionInfo());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=27&c=3
template<class D, class P>
void TorqueGeneratedFeedbackVector<D, P>::set_shared_function_info(SharedFunctionInfo value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSharedFunctionInfo());
  WRITE_FIELD(*this, kSharedFunctionInfoOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSharedFunctionInfoOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=28&c=3
template<class D, class P>
ClosureFeedbackCellArray TorqueGeneratedFeedbackVector<D, P>::closure_feedback_cell_array() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedFeedbackVector::closure_feedback_cell_array(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=28&c=3
template<class D, class P>
ClosureFeedbackCellArray TorqueGeneratedFeedbackVector<D, P>::closure_feedback_cell_array(PtrComprCageBase cage_base) const {
  ClosureFeedbackCellArray value;
  value = TaggedField<ClosureFeedbackCellArray>::load(cage_base, *this, kClosureFeedbackCellArrayOffset);
  DCHECK(value.IsClosureFeedbackCellArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=28&c=3
template<class D, class P>
void TorqueGeneratedFeedbackVector<D, P>::set_closure_feedback_cell_array(ClosureFeedbackCellArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsClosureFeedbackCellArray());
  WRITE_FIELD(*this, kClosureFeedbackCellArrayOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kClosureFeedbackCellArrayOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=29&c=31
template<class D, class P>
MaybeObject TorqueGeneratedFeedbackVector<D, P>::maybe_optimized_code() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedFeedbackVector::maybe_optimized_code(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=29&c=31
template<class D, class P>
MaybeObject TorqueGeneratedFeedbackVector<D, P>::maybe_optimized_code(PtrComprCageBase cage_base) const {
  MaybeObject value;
  value = TaggedField<MaybeObject>::load(cage_base, *this, kMaybeOptimizedCodeOffset);
  DCHECK(value.IsCleared() || (value.IsWeak() && value.GetHeapObjectOrSmi().IsCodeDataContainer()));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=29&c=31
template<class D, class P>
void TorqueGeneratedFeedbackVector<D, P>::set_maybe_optimized_code(MaybeObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsCleared() || (value.IsWeak() && value.GetHeapObjectOrSmi().IsCodeDataContainer()));
  RELAXED_WRITE_WEAK_FIELD(*this, kMaybeOptimizedCodeOffset, value);
  CONDITIONAL_WEAK_WRITE_BARRIER(*this, kMaybeOptimizedCodeOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=31&c=19
template<class D, class P>
MaybeObject TorqueGeneratedFeedbackVector<D, P>::raw_feedback_slots(int i, RelaxedLoadTag) const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedFeedbackVector::raw_feedback_slots(cage_base, i, kRelaxedLoad);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=31&c=19
template<class D, class P>
MaybeObject TorqueGeneratedFeedbackVector<D, P>::raw_feedback_slots(PtrComprCageBase cage_base, int i, RelaxedLoadTag) const {
  MaybeObject value;
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this ->length());
  int offset = kRawFeedbackSlotsOffset + i * kTaggedSize;
  value = TaggedField<MaybeObject>::Relaxed_Load(cage_base, *this, offset);
  DCHECK(value.IsCleared() || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsHeapObject()) || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsSmi()) || value.IsWeak());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=31&c=19
template<class D, class P>
void TorqueGeneratedFeedbackVector<D, P>::set_raw_feedback_slots(int i, MaybeObject value, WriteBarrierMode mode) {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this ->length());
  int offset = kRawFeedbackSlotsOffset + i * kTaggedSize;
  SLOW_DCHECK(value.IsCleared() || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsHeapObject()) || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsSmi()) || value.IsWeak());
  RELAXED_WRITE_WEAK_FIELD(*this, offset, value);
  CONDITIONAL_WEAK_WRITE_BARRIER(*this, offset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=18&c=1
template<class D, class P>
D TorqueGeneratedFeedbackVector<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedFeedbackVector<D, P>::TorqueGeneratedFeedbackVector(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsFeedbackVector_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedFeedbackVector<D, P>::TorqueGeneratedFeedbackVector(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsFeedbackVector_NonInline(*this));
}
