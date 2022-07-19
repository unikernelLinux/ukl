// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=13&c=31
template<class D, class P>
Object TorqueGeneratedDataHandler<D, P>::smi_handler() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedDataHandler::smi_handler(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=13&c=31
template<class D, class P>
Object TorqueGeneratedDataHandler<D, P>::smi_handler(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kSmiHandlerOffset);
  DCHECK(value.IsSmi() || value.IsCodeDataContainer());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=13&c=31
template<class D, class P>
void TorqueGeneratedDataHandler<D, P>::set_smi_handler(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsCodeDataContainer());
  WRITE_FIELD(*this, kSmiHandlerOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSmiHandlerOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=17&c=3
template<class D, class P>
Object TorqueGeneratedDataHandler<D, P>::validity_cell() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedDataHandler::validity_cell(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=17&c=3
template<class D, class P>
Object TorqueGeneratedDataHandler<D, P>::validity_cell(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kValidityCellOffset);
  DCHECK(value.IsSmi() || value.IsCell());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=17&c=3
template<class D, class P>
void TorqueGeneratedDataHandler<D, P>::set_validity_cell(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsCell());
  WRITE_FIELD(*this, kValidityCellOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kValidityCellOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=20&c=3
template<class D, class P>
MaybeObject TorqueGeneratedDataHandler<D, P>::data1() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedDataHandler::data1(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=20&c=3
template<class D, class P>
MaybeObject TorqueGeneratedDataHandler<D, P>::data1(PtrComprCageBase cage_base) const {
  MaybeObject value;
  value = TaggedField<MaybeObject>::load(cage_base, *this, kData1Offset);
  DCHECK(value.IsCleared() || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsHeapObject()) || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsSmi()) || value.IsWeak());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=20&c=3
template<class D, class P>
void TorqueGeneratedDataHandler<D, P>::set_data1(MaybeObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsCleared() || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsHeapObject()) || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsSmi()) || value.IsWeak());
  RELAXED_WRITE_WEAK_FIELD(*this, kData1Offset, value);
  CONDITIONAL_WEAK_WRITE_BARRIER(*this, kData1Offset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=21&c=3
template<class D, class P>
MaybeObject TorqueGeneratedDataHandler<D, P>::data2() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedDataHandler::data2(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=21&c=3
template<class D, class P>
MaybeObject TorqueGeneratedDataHandler<D, P>::data2(PtrComprCageBase cage_base) const {
  MaybeObject value;
  value = TaggedField<MaybeObject>::load(cage_base, *this, kData2Offset);
  DCHECK(value.IsCleared() || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsHeapObject()) || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsSmi()) || value.IsWeak());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=21&c=3
template<class D, class P>
void TorqueGeneratedDataHandler<D, P>::set_data2(MaybeObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsCleared() || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsHeapObject()) || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsSmi()) || value.IsWeak());
  RELAXED_WRITE_WEAK_FIELD(*this, kData2Offset, value);
  CONDITIONAL_WEAK_WRITE_BARRIER(*this, kData2Offset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=22&c=3
template<class D, class P>
MaybeObject TorqueGeneratedDataHandler<D, P>::data3() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedDataHandler::data3(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=22&c=3
template<class D, class P>
MaybeObject TorqueGeneratedDataHandler<D, P>::data3(PtrComprCageBase cage_base) const {
  MaybeObject value;
  value = TaggedField<MaybeObject>::load(cage_base, *this, kData3Offset);
  DCHECK(value.IsCleared() || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsHeapObject()) || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsSmi()) || value.IsWeak());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=22&c=3
template<class D, class P>
void TorqueGeneratedDataHandler<D, P>::set_data3(MaybeObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsCleared() || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsHeapObject()) || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsSmi()) || value.IsWeak());
  RELAXED_WRITE_WEAK_FIELD(*this, kData3Offset, value);
  CONDITIONAL_WEAK_WRITE_BARRIER(*this, kData3Offset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=7&c=1
template<class D, class P>
D TorqueGeneratedDataHandler<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedDataHandler<D, P>::TorqueGeneratedDataHandler(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsDataHandler_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedDataHandler<D, P>::TorqueGeneratedDataHandler(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsDataHandler_NonInline(*this));
}
