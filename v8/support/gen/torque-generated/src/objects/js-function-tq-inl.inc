// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=5&c=1
template<class D, class P>
D TorqueGeneratedJSFunctionOrBoundFunctionOrWrappedFunction<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSFunctionOrBoundFunctionOrWrappedFunction<D, P>::TorqueGeneratedJSFunctionOrBoundFunctionOrWrappedFunction(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSFunctionOrBoundFunctionOrWrappedFunction_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSFunctionOrBoundFunctionOrWrappedFunction<D, P>::TorqueGeneratedJSFunctionOrBoundFunctionOrWrappedFunction(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSFunctionOrBoundFunctionOrWrappedFunction_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=24&c=3
template<class D, class P>
JSReceiver TorqueGeneratedJSWrappedFunction<D, P>::wrapped_target_function() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSWrappedFunction::wrapped_target_function(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=24&c=3
template<class D, class P>
JSReceiver TorqueGeneratedJSWrappedFunction<D, P>::wrapped_target_function(PtrComprCageBase cage_base) const {
  JSReceiver value;
  value = TaggedField<JSReceiver>::load(cage_base, *this, kWrappedTargetFunctionOffset);
  DCHECK(value.IsCallableApiObject() || value.IsCallableJSProxy() || value.IsJSWrappedFunction() || value.IsJSBoundFunction() || value.IsJSFunction());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=24&c=3
template<class D, class P>
void TorqueGeneratedJSWrappedFunction<D, P>::set_wrapped_target_function(JSReceiver value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsCallableApiObject() || value.IsCallableJSProxy() || value.IsJSWrappedFunction() || value.IsJSBoundFunction() || value.IsJSFunction());
  WRITE_FIELD(*this, kWrappedTargetFunctionOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kWrappedTargetFunctionOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=26&c=3
template<class D, class P>
NativeContext TorqueGeneratedJSWrappedFunction<D, P>::context() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSWrappedFunction::context(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=26&c=3
template<class D, class P>
NativeContext TorqueGeneratedJSWrappedFunction<D, P>::context(PtrComprCageBase cage_base) const {
  NativeContext value;
  value = TaggedField<NativeContext>::load(cage_base, *this, kContextOffset);
  DCHECK(value.IsNativeContext());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=26&c=3
template<class D, class P>
void TorqueGeneratedJSWrappedFunction<D, P>::set_context(NativeContext value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsNativeContext());
  WRITE_FIELD(*this, kContextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kContextOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=21&c=1
template<class D, class P>
D TorqueGeneratedJSWrappedFunction<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSWrappedFunction<D, P>::TorqueGeneratedJSWrappedFunction(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSWrappedFunction_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSWrappedFunction<D, P>::TorqueGeneratedJSWrappedFunction(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSWrappedFunction_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=12&c=3
template<class D, class P>
JSReceiver TorqueGeneratedJSBoundFunction<D, P>::bound_target_function() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSBoundFunction::bound_target_function(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=12&c=3
template<class D, class P>
JSReceiver TorqueGeneratedJSBoundFunction<D, P>::bound_target_function(PtrComprCageBase cage_base) const {
  JSReceiver value;
  value = TaggedField<JSReceiver>::load(cage_base, *this, kBoundTargetFunctionOffset);
  DCHECK(value.IsCallableApiObject() || value.IsCallableJSProxy() || value.IsJSWrappedFunction() || value.IsJSBoundFunction() || value.IsJSFunction());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=12&c=3
template<class D, class P>
void TorqueGeneratedJSBoundFunction<D, P>::set_bound_target_function(JSReceiver value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsCallableApiObject() || value.IsCallableJSProxy() || value.IsJSWrappedFunction() || value.IsJSBoundFunction() || value.IsJSFunction());
  WRITE_FIELD(*this, kBoundTargetFunctionOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBoundTargetFunctionOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=15&c=3
template<class D, class P>
Object TorqueGeneratedJSBoundFunction<D, P>::bound_this() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSBoundFunction::bound_this(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=15&c=3
template<class D, class P>
Object TorqueGeneratedJSBoundFunction<D, P>::bound_this(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kBoundThisOffset);
  DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi() || value.IsSourceTextModule());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=15&c=3
template<class D, class P>
void TorqueGeneratedJSBoundFunction<D, P>::set_bound_this(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi() || value.IsSourceTextModule());
  WRITE_FIELD(*this, kBoundThisOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBoundThisOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=18&c=3
template<class D, class P>
FixedArray TorqueGeneratedJSBoundFunction<D, P>::bound_arguments() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSBoundFunction::bound_arguments(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=18&c=3
template<class D, class P>
FixedArray TorqueGeneratedJSBoundFunction<D, P>::bound_arguments(PtrComprCageBase cage_base) const {
  FixedArray value;
  value = TaggedField<FixedArray>::load(cage_base, *this, kBoundArgumentsOffset);
  DCHECK(value.IsFixedArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=18&c=3
template<class D, class P>
void TorqueGeneratedJSBoundFunction<D, P>::set_bound_arguments(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kBoundArgumentsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBoundArgumentsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=9&c=1
template<class D, class P>
D TorqueGeneratedJSBoundFunction<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSBoundFunction<D, P>::TorqueGeneratedJSBoundFunction(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSBoundFunction_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSBoundFunction<D, P>::TorqueGeneratedJSBoundFunction(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSBoundFunction_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=33&c=3
template<class D, class P>
SharedFunctionInfo TorqueGeneratedJSFunction<D, P>::shared_function_info() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSFunction::shared_function_info(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=33&c=3
template<class D, class P>
SharedFunctionInfo TorqueGeneratedJSFunction<D, P>::shared_function_info(PtrComprCageBase cage_base) const {
  SharedFunctionInfo value;
  value = TaggedField<SharedFunctionInfo>::load(cage_base, *this, kSharedFunctionInfoOffset);
  DCHECK(value.IsSharedFunctionInfo());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=33&c=3
template<class D, class P>
void TorqueGeneratedJSFunction<D, P>::set_shared_function_info(SharedFunctionInfo value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSharedFunctionInfo());
  WRITE_FIELD(*this, kSharedFunctionInfoOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSharedFunctionInfoOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=34&c=3
template<class D, class P>
Context TorqueGeneratedJSFunction<D, P>::context() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSFunction::context(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=34&c=3
template<class D, class P>
Context TorqueGeneratedJSFunction<D, P>::context(PtrComprCageBase cage_base) const {
  Context value;
  value = TaggedField<Context>::load(cage_base, *this, kContextOffset);
  DCHECK(value.IsContext());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=34&c=3
template<class D, class P>
void TorqueGeneratedJSFunction<D, P>::set_context(Context value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsContext());
  WRITE_FIELD(*this, kContextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kContextOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=35&c=3
template<class D, class P>
FeedbackCell TorqueGeneratedJSFunction<D, P>::feedback_cell() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSFunction::feedback_cell(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=35&c=3
template<class D, class P>
FeedbackCell TorqueGeneratedJSFunction<D, P>::feedback_cell(PtrComprCageBase cage_base) const {
  FeedbackCell value;
  value = TaggedField<FeedbackCell>::load(cage_base, *this, kFeedbackCellOffset);
  DCHECK(value.IsFeedbackCell());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=35&c=3
template<class D, class P>
void TorqueGeneratedJSFunction<D, P>::set_feedback_cell(FeedbackCell value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFeedbackCell());
  WRITE_FIELD(*this, kFeedbackCellOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kFeedbackCellOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=36&c=31
template<class D, class P>
CodeDataContainer TorqueGeneratedJSFunction<D, P>::code() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSFunction::code(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=36&c=31
template<class D, class P>
CodeDataContainer TorqueGeneratedJSFunction<D, P>::code(PtrComprCageBase cage_base) const {
  CodeDataContainer value;
  value = TaggedField<CodeDataContainer>::load(cage_base, *this, kCodeOffset);
  DCHECK(value.IsCodeDataContainer());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=36&c=31
template<class D, class P>
void TorqueGeneratedJSFunction<D, P>::set_code(CodeDataContainer value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsCodeDataContainer());
  WRITE_FIELD(*this, kCodeOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCodeOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=39&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSFunction<D, P>::prototype_or_initial_map() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSFunction::prototype_or_initial_map(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=39&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSFunction<D, P>::prototype_or_initial_map(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kPrototypeOrInitialMapOffset);
  DCHECK(value.IsJSReceiver() || value.IsMap());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=39&c=3
template<class D, class P>
void TorqueGeneratedJSFunction<D, P>::set_prototype_or_initial_map(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsMap());
  WRITE_FIELD(*this, kPrototypeOrInitialMapOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPrototypeOrInitialMapOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=31&c=1
template<class D, class P>
D TorqueGeneratedJSFunction<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSFunction<D, P>::TorqueGeneratedJSFunction(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSFunction_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSFunction<D, P>::TorqueGeneratedJSFunction(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSFunction_NonInline(*this));
}
