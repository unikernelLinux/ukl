// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=6&c=3
template<class D, class P>
JSFunction TorqueGeneratedJSGeneratorObject<D, P>::function() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSGeneratorObject::function(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=6&c=3
template<class D, class P>
JSFunction TorqueGeneratedJSGeneratorObject<D, P>::function(PtrComprCageBase cage_base) const {
  JSFunction value;
  value = TaggedField<JSFunction>::load(cage_base, *this, kFunctionOffset);
  DCHECK(value.IsJSFunction());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=6&c=3
template<class D, class P>
void TorqueGeneratedJSGeneratorObject<D, P>::set_function(JSFunction value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSFunction());
  WRITE_FIELD(*this, kFunctionOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kFunctionOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=7&c=3
template<class D, class P>
Context TorqueGeneratedJSGeneratorObject<D, P>::context() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSGeneratorObject::context(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=7&c=3
template<class D, class P>
Context TorqueGeneratedJSGeneratorObject<D, P>::context(PtrComprCageBase cage_base) const {
  Context value;
  value = TaggedField<Context>::load(cage_base, *this, kContextOffset);
  DCHECK(value.IsContext());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=7&c=3
template<class D, class P>
void TorqueGeneratedJSGeneratorObject<D, P>::set_context(Context value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsContext());
  WRITE_FIELD(*this, kContextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kContextOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=8&c=3
template<class D, class P>
Object TorqueGeneratedJSGeneratorObject<D, P>::receiver() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSGeneratorObject::receiver(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=8&c=3
template<class D, class P>
Object TorqueGeneratedJSGeneratorObject<D, P>::receiver(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kReceiverOffset);
  DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=8&c=3
template<class D, class P>
void TorqueGeneratedJSGeneratorObject<D, P>::set_receiver(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi());
  WRITE_FIELD(*this, kReceiverOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kReceiverOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=14&c=3
template<class D, class P>
Object TorqueGeneratedJSGeneratorObject<D, P>::input_or_debug_pos() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSGeneratorObject::input_or_debug_pos(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=14&c=3
template<class D, class P>
Object TorqueGeneratedJSGeneratorObject<D, P>::input_or_debug_pos(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kInputOrDebugPosOffset);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=14&c=3
template<class D, class P>
void TorqueGeneratedJSGeneratorObject<D, P>::set_input_or_debug_pos(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kInputOrDebugPosOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInputOrDebugPosOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=17&c=3
template<class D, class P>
int TorqueGeneratedJSGeneratorObject<D, P>::resume_mode() const {
  int value;
  value = TaggedField<Smi>::load(*this, kResumeModeOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=17&c=3
template<class D, class P>
void TorqueGeneratedJSGeneratorObject<D, P>::set_resume_mode(int value) {
  WRITE_FIELD(*this, kResumeModeOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=22&c=3
template<class D, class P>
int TorqueGeneratedJSGeneratorObject<D, P>::continuation() const {
  int value;
  value = TaggedField<Smi>::load(*this, kContinuationOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=22&c=3
template<class D, class P>
void TorqueGeneratedJSGeneratorObject<D, P>::set_continuation(int value) {
  WRITE_FIELD(*this, kContinuationOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=25&c=3
template<class D, class P>
FixedArray TorqueGeneratedJSGeneratorObject<D, P>::parameters_and_registers() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSGeneratorObject::parameters_and_registers(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=25&c=3
template<class D, class P>
FixedArray TorqueGeneratedJSGeneratorObject<D, P>::parameters_and_registers(PtrComprCageBase cage_base) const {
  FixedArray value;
  value = TaggedField<FixedArray>::load(cage_base, *this, kParametersAndRegistersOffset);
  DCHECK(value.IsFixedArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=25&c=3
template<class D, class P>
void TorqueGeneratedJSGeneratorObject<D, P>::set_parameters_and_registers(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kParametersAndRegistersOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kParametersAndRegistersOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=5&c=1
template<class D, class P>
D TorqueGeneratedJSGeneratorObject<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSGeneratorObject<D, P>::TorqueGeneratedJSGeneratorObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSGeneratorObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSGeneratorObject<D, P>::TorqueGeneratedJSGeneratorObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSGeneratorObject_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=29&c=3
template<class D, class P>
JSPromise TorqueGeneratedJSAsyncFunctionObject<D, P>::promise() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSAsyncFunctionObject::promise(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=29&c=3
template<class D, class P>
JSPromise TorqueGeneratedJSAsyncFunctionObject<D, P>::promise(PtrComprCageBase cage_base) const {
  JSPromise value;
  value = TaggedField<JSPromise>::load(cage_base, *this, kPromiseOffset);
  DCHECK(value.IsJSPromise());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=29&c=3
template<class D, class P>
void TorqueGeneratedJSAsyncFunctionObject<D, P>::set_promise(JSPromise value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSPromise());
  WRITE_FIELD(*this, kPromiseOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPromiseOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=28&c=1
template<class D, class P>
D TorqueGeneratedJSAsyncFunctionObject<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSAsyncFunctionObject<D, P>::TorqueGeneratedJSAsyncFunctionObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSAsyncFunctionObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSAsyncFunctionObject<D, P>::TorqueGeneratedJSAsyncFunctionObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSAsyncFunctionObject_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=35&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSAsyncGeneratorObject<D, P>::queue() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSAsyncGeneratorObject::queue(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=35&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSAsyncGeneratorObject<D, P>::queue(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kQueueOffset);
  DCHECK(value.IsHeapObject());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=35&c=3
template<class D, class P>
void TorqueGeneratedJSAsyncGeneratorObject<D, P>::set_queue(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject());
  WRITE_FIELD(*this, kQueueOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kQueueOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=37&c=3
template<class D, class P>
int TorqueGeneratedJSAsyncGeneratorObject<D, P>::is_awaiting() const {
  int value;
  value = TaggedField<Smi>::load(*this, kIsAwaitingOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=37&c=3
template<class D, class P>
void TorqueGeneratedJSAsyncGeneratorObject<D, P>::set_is_awaiting(int value) {
  WRITE_FIELD(*this, kIsAwaitingOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=32&c=1
template<class D, class P>
D TorqueGeneratedJSAsyncGeneratorObject<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSAsyncGeneratorObject<D, P>::TorqueGeneratedJSAsyncGeneratorObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSAsyncGeneratorObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSAsyncGeneratorObject<D, P>::TorqueGeneratedJSAsyncGeneratorObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSAsyncGeneratorObject_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=41&c=3
template<class D, class P>
HeapObject TorqueGeneratedAsyncGeneratorRequest<D, P>::next() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedAsyncGeneratorRequest::next(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=41&c=3
template<class D, class P>
HeapObject TorqueGeneratedAsyncGeneratorRequest<D, P>::next(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kNextOffset);
  DCHECK(value.IsUndefined() || value.IsAsyncGeneratorRequest());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=41&c=3
template<class D, class P>
void TorqueGeneratedAsyncGeneratorRequest<D, P>::set_next(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsAsyncGeneratorRequest());
  WRITE_FIELD(*this, kNextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNextOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=42&c=3
template<class D, class P>
int TorqueGeneratedAsyncGeneratorRequest<D, P>::resume_mode() const {
  int value;
  value = TaggedField<Smi>::load(*this, kResumeModeOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=42&c=3
template<class D, class P>
void TorqueGeneratedAsyncGeneratorRequest<D, P>::set_resume_mode(int value) {
  WRITE_FIELD(*this, kResumeModeOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=43&c=3
template<class D, class P>
Object TorqueGeneratedAsyncGeneratorRequest<D, P>::value() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedAsyncGeneratorRequest::value(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=43&c=3
template<class D, class P>
Object TorqueGeneratedAsyncGeneratorRequest<D, P>::value(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kValueOffset);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=43&c=3
template<class D, class P>
void TorqueGeneratedAsyncGeneratorRequest<D, P>::set_value(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kValueOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kValueOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=44&c=3
template<class D, class P>
JSPromise TorqueGeneratedAsyncGeneratorRequest<D, P>::promise() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedAsyncGeneratorRequest::promise(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=44&c=3
template<class D, class P>
JSPromise TorqueGeneratedAsyncGeneratorRequest<D, P>::promise(PtrComprCageBase cage_base) const {
  JSPromise value;
  value = TaggedField<JSPromise>::load(cage_base, *this, kPromiseOffset);
  DCHECK(value.IsJSPromise());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=44&c=3
template<class D, class P>
void TorqueGeneratedAsyncGeneratorRequest<D, P>::set_promise(JSPromise value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSPromise());
  WRITE_FIELD(*this, kPromiseOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPromiseOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=40&c=1
template<class D, class P>
D TorqueGeneratedAsyncGeneratorRequest<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedAsyncGeneratorRequest<D, P>::TorqueGeneratedAsyncGeneratorRequest(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsAsyncGeneratorRequest_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedAsyncGeneratorRequest<D, P>::TorqueGeneratedAsyncGeneratorRequest(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsAsyncGeneratorRequest_NonInline(*this));
}
