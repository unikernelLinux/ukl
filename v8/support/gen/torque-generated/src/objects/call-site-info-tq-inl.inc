// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=18&c=3
template<class D, class P>
Object TorqueGeneratedCallSiteInfo<D, P>::receiver_or_instance() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedCallSiteInfo::receiver_or_instance(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=18&c=3
template<class D, class P>
Object TorqueGeneratedCallSiteInfo<D, P>::receiver_or_instance(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kReceiverOrInstanceOffset);
  DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=18&c=3
template<class D, class P>
void TorqueGeneratedCallSiteInfo<D, P>::set_receiver_or_instance(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi());
  WRITE_FIELD(*this, kReceiverOrInstanceOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kReceiverOrInstanceOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=19&c=3
template<class D, class P>
Object TorqueGeneratedCallSiteInfo<D, P>::function() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedCallSiteInfo::function(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=19&c=3
template<class D, class P>
Object TorqueGeneratedCallSiteInfo<D, P>::function(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kFunctionOffset);
  DCHECK(value.IsSmi() || value.IsJSFunction());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=19&c=3
template<class D, class P>
void TorqueGeneratedCallSiteInfo<D, P>::set_function(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsJSFunction());
  WRITE_FIELD(*this, kFunctionOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kFunctionOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=20&c=3
template<class D, class P>
HeapObject TorqueGeneratedCallSiteInfo<D, P>::code_object() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedCallSiteInfo::code_object(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=20&c=3
template<class D, class P>
HeapObject TorqueGeneratedCallSiteInfo<D, P>::code_object(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kCodeObjectOffset);
  DCHECK(value.IsHeapObject());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=20&c=3
template<class D, class P>
void TorqueGeneratedCallSiteInfo<D, P>::set_code_object(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject());
  WRITE_FIELD(*this, kCodeObjectOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCodeObjectOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=21&c=3
template<class D, class P>
int TorqueGeneratedCallSiteInfo<D, P>::code_offset_or_source_position() const {
  int value;
  value = TaggedField<Smi>::load(*this, kCodeOffsetOrSourcePositionOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=21&c=3
template<class D, class P>
void TorqueGeneratedCallSiteInfo<D, P>::set_code_offset_or_source_position(int value) {
  WRITE_FIELD(*this, kCodeOffsetOrSourcePositionOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=22&c=3
template<class D, class P>
int TorqueGeneratedCallSiteInfo<D, P>::flags() const {
  int value;
  value = TaggedField<Smi>::load(*this, kFlagsOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=22&c=3
template<class D, class P>
void TorqueGeneratedCallSiteInfo<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=23&c=3
template<class D, class P>
FixedArray TorqueGeneratedCallSiteInfo<D, P>::parameters() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedCallSiteInfo::parameters(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=23&c=3
template<class D, class P>
FixedArray TorqueGeneratedCallSiteInfo<D, P>::parameters(PtrComprCageBase cage_base) const {
  FixedArray value;
  value = TaggedField<FixedArray>::load(cage_base, *this, kParametersOffset);
  DCHECK(value.IsFixedArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=23&c=3
template<class D, class P>
void TorqueGeneratedCallSiteInfo<D, P>::set_parameters(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kParametersOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kParametersOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=17&c=1
template<class D, class P>
D TorqueGeneratedCallSiteInfo<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedCallSiteInfo<D, P>::TorqueGeneratedCallSiteInfo(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsCallSiteInfo_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedCallSiteInfo<D, P>::TorqueGeneratedCallSiteInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsCallSiteInfo_NonInline(*this));
}
