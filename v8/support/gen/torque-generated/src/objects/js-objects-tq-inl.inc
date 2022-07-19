// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=9&c=3
template<class D, class P>
Object TorqueGeneratedJSReceiver<D, P>::properties_or_hash() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSReceiver::properties_or_hash(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=9&c=3
template<class D, class P>
Object TorqueGeneratedJSReceiver<D, P>::properties_or_hash(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kPropertiesOrHashOffset);
  DCHECK(value.IsSmi() || value.IsFixedArrayBase() || value.IsPropertyArray() || value.IsSwissNameDictionary());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=9&c=3
template<class D, class P>
void TorqueGeneratedJSReceiver<D, P>::set_properties_or_hash(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsFixedArrayBase() || value.IsPropertyArray() || value.IsSwissNameDictionary());
  WRITE_FIELD(*this, kPropertiesOrHashOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPropertiesOrHashOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=6&c=1
template<class D, class P>
D TorqueGeneratedJSReceiver<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSReceiver<D, P>::TorqueGeneratedJSReceiver(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSReceiver_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSReceiver<D, P>::TorqueGeneratedJSReceiver(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSReceiver_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=33&c=3
template<class D, class P>
FixedArrayBase TorqueGeneratedJSObject<D, P>::elements() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSObject::elements(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=33&c=3
template<class D, class P>
FixedArrayBase TorqueGeneratedJSObject<D, P>::elements(PtrComprCageBase cage_base) const {
  FixedArrayBase value;
  value = TaggedField<FixedArrayBase>::load(cage_base, *this, kElementsOffset);
  DCHECK(value.IsFixedArrayBase());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=33&c=3
template<class D, class P>
void TorqueGeneratedJSObject<D, P>::set_elements(FixedArrayBase value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArrayBase());
  WRITE_FIELD(*this, kElementsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kElementsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=14&c=1
template<class D, class P>
D TorqueGeneratedJSObject<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSObject<D, P>::TorqueGeneratedJSObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSObject<D, P>::TorqueGeneratedJSObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSObject_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=46&c=1
template<class D, class P>
D TorqueGeneratedJSObjectWithEmbedderSlots<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSObjectWithEmbedderSlots<D, P>::TorqueGeneratedJSObjectWithEmbedderSlots(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSObjectWithEmbedderSlots_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSObjectWithEmbedderSlots<D, P>::TorqueGeneratedJSObjectWithEmbedderSlots(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSObjectWithEmbedderSlots_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=50&c=1
template<class D, class P>
D TorqueGeneratedJSCustomElementsObject<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSCustomElementsObject<D, P>::TorqueGeneratedJSCustomElementsObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSCustomElementsObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSCustomElementsObject<D, P>::TorqueGeneratedJSCustomElementsObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSCustomElementsObject_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=57&c=1
template<class D, class P>
D TorqueGeneratedJSSpecialObject<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSSpecialObject<D, P>::TorqueGeneratedJSSpecialObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSSpecialObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSSpecialObject<D, P>::TorqueGeneratedJSSpecialObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSSpecialObject_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=43&c=1
template<class D, class P>
D TorqueGeneratedJSExternalObject<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSExternalObject<D, P>::TorqueGeneratedJSExternalObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSExternalObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSExternalObject<D, P>::TorqueGeneratedJSExternalObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSExternalObject_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=106&c=3
template<class D, class P>
Object TorqueGeneratedJSGlobalProxy<D, P>::native_context() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSGlobalProxy::native_context(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=106&c=3
template<class D, class P>
Object TorqueGeneratedJSGlobalProxy<D, P>::native_context(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kNativeContextOffset);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=106&c=3
template<class D, class P>
void TorqueGeneratedJSGlobalProxy<D, P>::set_native_context(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kNativeContextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNativeContextOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=103&c=1
template<class D, class P>
D TorqueGeneratedJSGlobalProxy<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSGlobalProxy<D, P>::TorqueGeneratedJSGlobalProxy(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSGlobalProxy_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSGlobalProxy<D, P>::TorqueGeneratedJSGlobalProxy(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSGlobalProxy_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=111&c=3
template<class D, class P>
NativeContext TorqueGeneratedJSGlobalObject<D, P>::native_context() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSGlobalObject::native_context(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=111&c=3
template<class D, class P>
NativeContext TorqueGeneratedJSGlobalObject<D, P>::native_context(PtrComprCageBase cage_base) const {
  NativeContext value;
  value = TaggedField<NativeContext>::load(cage_base, *this, kNativeContextOffset);
  DCHECK(value.IsNativeContext());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=111&c=3
template<class D, class P>
void TorqueGeneratedJSGlobalObject<D, P>::set_native_context(NativeContext value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsNativeContext());
  WRITE_FIELD(*this, kNativeContextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNativeContextOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=114&c=3
template<class D, class P>
JSGlobalProxy TorqueGeneratedJSGlobalObject<D, P>::global_proxy() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSGlobalObject::global_proxy(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=114&c=3
template<class D, class P>
JSGlobalProxy TorqueGeneratedJSGlobalObject<D, P>::global_proxy(PtrComprCageBase cage_base) const {
  JSGlobalProxy value;
  value = TaggedField<JSGlobalProxy>::load(cage_base, *this, kGlobalProxyOffset);
  DCHECK(value.IsJSGlobalProxy());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=114&c=3
template<class D, class P>
void TorqueGeneratedJSGlobalObject<D, P>::set_global_proxy(JSGlobalProxy value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSGlobalProxy());
  WRITE_FIELD(*this, kGlobalProxyOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kGlobalProxyOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=109&c=1
template<class D, class P>
D TorqueGeneratedJSGlobalObject<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSGlobalObject<D, P>::TorqueGeneratedJSGlobalObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSGlobalObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSGlobalObject<D, P>::TorqueGeneratedJSGlobalObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSGlobalObject_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=117&c=66
template<class D, class P>
Object TorqueGeneratedJSPrimitiveWrapper<D, P>::value() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSPrimitiveWrapper::value(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=117&c=66
template<class D, class P>
Object TorqueGeneratedJSPrimitiveWrapper<D, P>::value(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kValueOffset);
  DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=117&c=66
template<class D, class P>
void TorqueGeneratedJSPrimitiveWrapper<D, P>::set_value(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi());
  WRITE_FIELD(*this, kValueOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kValueOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=117&c=1
template<class D, class P>
D TorqueGeneratedJSPrimitiveWrapper<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSPrimitiveWrapper<D, P>::TorqueGeneratedJSPrimitiveWrapper(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSPrimitiveWrapper_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSPrimitiveWrapper<D, P>::TorqueGeneratedJSPrimitiveWrapper(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSPrimitiveWrapper_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=121&c=3
template<class D, class P>
int TorqueGeneratedJSMessageObject<D, P>::message_type() const {
  int value;
  value = TaggedField<Smi>::load(*this, kMessageTypeOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=121&c=3
template<class D, class P>
void TorqueGeneratedJSMessageObject<D, P>::set_message_type(int value) {
  WRITE_FIELD(*this, kMessageTypeOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=123&c=3
template<class D, class P>
Object TorqueGeneratedJSMessageObject<D, P>::argument() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSMessageObject::argument(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=123&c=3
template<class D, class P>
Object TorqueGeneratedJSMessageObject<D, P>::argument(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kArgumentOffset);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=123&c=3
template<class D, class P>
void TorqueGeneratedJSMessageObject<D, P>::set_argument(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kArgumentOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kArgumentOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=125&c=3
template<class D, class P>
Script TorqueGeneratedJSMessageObject<D, P>::script() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSMessageObject::script(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=125&c=3
template<class D, class P>
Script TorqueGeneratedJSMessageObject<D, P>::script(PtrComprCageBase cage_base) const {
  Script value;
  value = TaggedField<Script>::load(cage_base, *this, kScriptOffset);
  DCHECK(value.IsScript());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=125&c=3
template<class D, class P>
void TorqueGeneratedJSMessageObject<D, P>::set_script(Script value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsScript());
  WRITE_FIELD(*this, kScriptOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kScriptOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=127&c=3
template<class D, class P>
Object TorqueGeneratedJSMessageObject<D, P>::stack_frames() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSMessageObject::stack_frames(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=127&c=3
template<class D, class P>
Object TorqueGeneratedJSMessageObject<D, P>::stack_frames(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kStackFramesOffset);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=127&c=3
template<class D, class P>
void TorqueGeneratedJSMessageObject<D, P>::set_stack_frames(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kStackFramesOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kStackFramesOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=128&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSMessageObject<D, P>::shared_info() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSMessageObject::shared_info(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=128&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSMessageObject<D, P>::shared_info(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kSharedInfoOffset);
  DCHECK(value.IsUndefined() || value.IsSharedFunctionInfo());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=128&c=3
template<class D, class P>
void TorqueGeneratedJSMessageObject<D, P>::set_shared_info(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsSharedFunctionInfo());
  WRITE_FIELD(*this, kSharedInfoOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSharedInfoOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=132&c=3
template<class D, class P>
int TorqueGeneratedJSMessageObject<D, P>::bytecode_offset() const {
  int value;
  value = TaggedField<Smi>::load(*this, kBytecodeOffsetOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=132&c=3
template<class D, class P>
void TorqueGeneratedJSMessageObject<D, P>::set_bytecode_offset(int value) {
  WRITE_FIELD(*this, kBytecodeOffsetOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=133&c=3
template<class D, class P>
int TorqueGeneratedJSMessageObject<D, P>::start_position() const {
  int value;
  value = TaggedField<Smi>::load(*this, kStartPositionOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=133&c=3
template<class D, class P>
void TorqueGeneratedJSMessageObject<D, P>::set_start_position(int value) {
  WRITE_FIELD(*this, kStartPositionOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=134&c=3
template<class D, class P>
int TorqueGeneratedJSMessageObject<D, P>::end_position() const {
  int value;
  value = TaggedField<Smi>::load(*this, kEndPositionOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=134&c=3
template<class D, class P>
void TorqueGeneratedJSMessageObject<D, P>::set_end_position(int value) {
  WRITE_FIELD(*this, kEndPositionOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=135&c=3
template<class D, class P>
int TorqueGeneratedJSMessageObject<D, P>::error_level() const {
  int value;
  value = TaggedField<Smi>::load(*this, kErrorLevelOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=135&c=3
template<class D, class P>
void TorqueGeneratedJSMessageObject<D, P>::set_error_level(int value) {
  WRITE_FIELD(*this, kErrorLevelOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=119&c=1
template<class D, class P>
D TorqueGeneratedJSMessageObject<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSMessageObject<D, P>::TorqueGeneratedJSMessageObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSMessageObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSMessageObject<D, P>::TorqueGeneratedJSMessageObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSMessageObject_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=142&c=3
template<class D, class P>
Object TorqueGeneratedJSDate<D, P>::value() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSDate::value(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=142&c=3
template<class D, class P>
Object TorqueGeneratedJSDate<D, P>::value(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kValueOffset);
  DCHECK(value.IsUndefined() || value.IsHeapNumber() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=142&c=3
template<class D, class P>
void TorqueGeneratedJSDate<D, P>::set_value(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsHeapNumber() || value.IsSmi());
  WRITE_FIELD(*this, kValueOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kValueOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=145&c=3
template<class D, class P>
Object TorqueGeneratedJSDate<D, P>::year() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSDate::year(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=145&c=3
template<class D, class P>
Object TorqueGeneratedJSDate<D, P>::year(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kYearOffset);
  DCHECK(value.IsUndefined() || value.IsSmi() || value.IsNaN());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=145&c=3
template<class D, class P>
void TorqueGeneratedJSDate<D, P>::set_year(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsSmi() || value.IsNaN());
  WRITE_FIELD(*this, kYearOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kYearOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=146&c=3
template<class D, class P>
Object TorqueGeneratedJSDate<D, P>::month() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSDate::month(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=146&c=3
template<class D, class P>
Object TorqueGeneratedJSDate<D, P>::month(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kMonthOffset);
  DCHECK(value.IsUndefined() || value.IsSmi() || value.IsNaN());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=146&c=3
template<class D, class P>
void TorqueGeneratedJSDate<D, P>::set_month(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsSmi() || value.IsNaN());
  WRITE_FIELD(*this, kMonthOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kMonthOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=147&c=3
template<class D, class P>
Object TorqueGeneratedJSDate<D, P>::day() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSDate::day(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=147&c=3
template<class D, class P>
Object TorqueGeneratedJSDate<D, P>::day(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kDayOffset);
  DCHECK(value.IsUndefined() || value.IsSmi() || value.IsNaN());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=147&c=3
template<class D, class P>
void TorqueGeneratedJSDate<D, P>::set_day(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsSmi() || value.IsNaN());
  WRITE_FIELD(*this, kDayOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDayOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=148&c=3
template<class D, class P>
Object TorqueGeneratedJSDate<D, P>::weekday() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSDate::weekday(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=148&c=3
template<class D, class P>
Object TorqueGeneratedJSDate<D, P>::weekday(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kWeekdayOffset);
  DCHECK(value.IsUndefined() || value.IsSmi() || value.IsNaN());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=148&c=3
template<class D, class P>
void TorqueGeneratedJSDate<D, P>::set_weekday(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsSmi() || value.IsNaN());
  WRITE_FIELD(*this, kWeekdayOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kWeekdayOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=149&c=3
template<class D, class P>
Object TorqueGeneratedJSDate<D, P>::hour() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSDate::hour(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=149&c=3
template<class D, class P>
Object TorqueGeneratedJSDate<D, P>::hour(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kHourOffset);
  DCHECK(value.IsUndefined() || value.IsSmi() || value.IsNaN());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=149&c=3
template<class D, class P>
void TorqueGeneratedJSDate<D, P>::set_hour(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsSmi() || value.IsNaN());
  WRITE_FIELD(*this, kHourOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kHourOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=150&c=3
template<class D, class P>
Object TorqueGeneratedJSDate<D, P>::min() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSDate::min(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=150&c=3
template<class D, class P>
Object TorqueGeneratedJSDate<D, P>::min(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kMinOffset);
  DCHECK(value.IsUndefined() || value.IsSmi() || value.IsNaN());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=150&c=3
template<class D, class P>
void TorqueGeneratedJSDate<D, P>::set_min(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsSmi() || value.IsNaN());
  WRITE_FIELD(*this, kMinOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kMinOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=151&c=3
template<class D, class P>
Object TorqueGeneratedJSDate<D, P>::sec() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSDate::sec(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=151&c=3
template<class D, class P>
Object TorqueGeneratedJSDate<D, P>::sec(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kSecOffset);
  DCHECK(value.IsUndefined() || value.IsSmi() || value.IsNaN());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=151&c=3
template<class D, class P>
void TorqueGeneratedJSDate<D, P>::set_sec(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsSmi() || value.IsNaN());
  WRITE_FIELD(*this, kSecOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSecOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=155&c=3
template<class D, class P>
Object TorqueGeneratedJSDate<D, P>::cache_stamp() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSDate::cache_stamp(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=155&c=3
template<class D, class P>
Object TorqueGeneratedJSDate<D, P>::cache_stamp(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kCacheStampOffset);
  DCHECK(value.IsUndefined() || value.IsSmi() || value.IsNaN());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=155&c=3
template<class D, class P>
void TorqueGeneratedJSDate<D, P>::set_cache_stamp(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsSmi() || value.IsNaN());
  WRITE_FIELD(*this, kCacheStampOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCacheStampOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=138&c=1
template<class D, class P>
D TorqueGeneratedJSDate<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSDate<D, P>::TorqueGeneratedJSDate(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSDate_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSDate<D, P>::TorqueGeneratedJSDate(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSDate_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=159&c=3
template<class D, class P>
JSReceiver TorqueGeneratedJSAsyncFromSyncIterator<D, P>::sync_iterator() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSAsyncFromSyncIterator::sync_iterator(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=159&c=3
template<class D, class P>
JSReceiver TorqueGeneratedJSAsyncFromSyncIterator<D, P>::sync_iterator(PtrComprCageBase cage_base) const {
  JSReceiver value;
  value = TaggedField<JSReceiver>::load(cage_base, *this, kSyncIteratorOffset);
  DCHECK(value.IsJSReceiver());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=159&c=3
template<class D, class P>
void TorqueGeneratedJSAsyncFromSyncIterator<D, P>::set_sync_iterator(JSReceiver value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver());
  WRITE_FIELD(*this, kSyncIteratorOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSyncIteratorOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=162&c=3
template<class D, class P>
Object TorqueGeneratedJSAsyncFromSyncIterator<D, P>::next() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSAsyncFromSyncIterator::next(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=162&c=3
template<class D, class P>
Object TorqueGeneratedJSAsyncFromSyncIterator<D, P>::next(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kNextOffset);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=162&c=3
template<class D, class P>
void TorqueGeneratedJSAsyncFromSyncIterator<D, P>::set_next(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kNextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNextOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=158&c=1
template<class D, class P>
D TorqueGeneratedJSAsyncFromSyncIterator<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSAsyncFromSyncIterator<D, P>::TorqueGeneratedJSAsyncFromSyncIterator(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSAsyncFromSyncIterator_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSAsyncFromSyncIterator<D, P>::TorqueGeneratedJSAsyncFromSyncIterator(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSAsyncFromSyncIterator_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=167&c=3
template<class D, class P>
String TorqueGeneratedJSStringIterator<D, P>::string() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSStringIterator::string(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=167&c=3
template<class D, class P>
String TorqueGeneratedJSStringIterator<D, P>::string(PtrComprCageBase cage_base) const {
  String value;
  value = TaggedField<String>::load(cage_base, *this, kStringOffset);
  DCHECK(value.IsString());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=167&c=3
template<class D, class P>
void TorqueGeneratedJSStringIterator<D, P>::set_string(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kStringOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kStringOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=169&c=3
template<class D, class P>
int TorqueGeneratedJSStringIterator<D, P>::index() const {
  int value;
  value = TaggedField<Smi>::load(*this, kIndexOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=169&c=3
template<class D, class P>
void TorqueGeneratedJSStringIterator<D, P>::set_index(int value) {
  WRITE_FIELD(*this, kIndexOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=165&c=1
template<class D, class P>
D TorqueGeneratedJSStringIterator<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSStringIterator<D, P>::TorqueGeneratedJSStringIterator(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSStringIterator_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSStringIterator<D, P>::TorqueGeneratedJSStringIterator(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSStringIterator_NonInline(*this));
}
