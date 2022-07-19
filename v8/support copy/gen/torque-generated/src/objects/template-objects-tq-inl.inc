// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=6&c=3
template<class D, class P>
int TorqueGeneratedCachedTemplateObject<D, P>::slot_id() const {
  int value;
  value = TaggedField<Smi>::load(*this, kSlotIdOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=6&c=3
template<class D, class P>
void TorqueGeneratedCachedTemplateObject<D, P>::set_slot_id(int value) {
  WRITE_FIELD(*this, kSlotIdOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=7&c=3
template<class D, class P>
JSArray TorqueGeneratedCachedTemplateObject<D, P>::template_object() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedCachedTemplateObject::template_object(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=7&c=3
template<class D, class P>
JSArray TorqueGeneratedCachedTemplateObject<D, P>::template_object(PtrComprCageBase cage_base) const {
  JSArray value;
  value = TaggedField<JSArray>::load(cage_base, *this, kTemplateObjectOffset);
  DCHECK(value.IsJSArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=7&c=3
template<class D, class P>
void TorqueGeneratedCachedTemplateObject<D, P>::set_template_object(JSArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSArray());
  WRITE_FIELD(*this, kTemplateObjectOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTemplateObjectOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=8&c=3
template<class D, class P>
HeapObject TorqueGeneratedCachedTemplateObject<D, P>::next() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedCachedTemplateObject::next(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=8&c=3
template<class D, class P>
HeapObject TorqueGeneratedCachedTemplateObject<D, P>::next(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kNextOffset);
  DCHECK(value.IsTheHole() || value.IsCachedTemplateObject());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=8&c=3
template<class D, class P>
void TorqueGeneratedCachedTemplateObject<D, P>::set_next(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsTheHole() || value.IsCachedTemplateObject());
  WRITE_FIELD(*this, kNextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNextOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=5&c=1
template<class D, class P>
D TorqueGeneratedCachedTemplateObject<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedCachedTemplateObject<D, P>::TorqueGeneratedCachedTemplateObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsCachedTemplateObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedCachedTemplateObject<D, P>::TorqueGeneratedCachedTemplateObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsCachedTemplateObject_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=12&c=3
template<class D, class P>
FixedArray TorqueGeneratedTemplateObjectDescription<D, P>::raw_strings() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedTemplateObjectDescription::raw_strings(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=12&c=3
template<class D, class P>
FixedArray TorqueGeneratedTemplateObjectDescription<D, P>::raw_strings(PtrComprCageBase cage_base) const {
  FixedArray value;
  value = TaggedField<FixedArray>::load(cage_base, *this, kRawStringsOffset);
  DCHECK(value.IsFixedArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=12&c=3
template<class D, class P>
void TorqueGeneratedTemplateObjectDescription<D, P>::set_raw_strings(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kRawStringsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kRawStringsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=13&c=3
template<class D, class P>
FixedArray TorqueGeneratedTemplateObjectDescription<D, P>::cooked_strings() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedTemplateObjectDescription::cooked_strings(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=13&c=3
template<class D, class P>
FixedArray TorqueGeneratedTemplateObjectDescription<D, P>::cooked_strings(PtrComprCageBase cage_base) const {
  FixedArray value;
  value = TaggedField<FixedArray>::load(cage_base, *this, kCookedStringsOffset);
  DCHECK(value.IsFixedArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=13&c=3
template<class D, class P>
void TorqueGeneratedTemplateObjectDescription<D, P>::set_cooked_strings(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kCookedStringsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCookedStringsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=11&c=1
template<class D, class P>
D TorqueGeneratedTemplateObjectDescription<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedTemplateObjectDescription<D, P>::TorqueGeneratedTemplateObjectDescription(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsTemplateObjectDescription_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedTemplateObjectDescription<D, P>::TorqueGeneratedTemplateObjectDescription(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsTemplateObjectDescription_NonInline(*this));
}
