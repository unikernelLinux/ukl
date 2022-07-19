// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=29&c=1
template<class D, class P>
D TorqueGeneratedStrongDescriptorArray<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedStrongDescriptorArray<D, P>::TorqueGeneratedStrongDescriptorArray(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsStrongDescriptorArray_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedStrongDescriptorArray<D, P>::TorqueGeneratedStrongDescriptorArray(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsStrongDescriptorArray_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(StrongDescriptorArray)
// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=765&c=3
template<class D, class P>
int TorqueGeneratedInternalClass<D, P>::a() const {
  int value;
  value = TaggedField<Smi>::load(*this, kAOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=765&c=3
template<class D, class P>
void TorqueGeneratedInternalClass<D, P>::set_a(int value) {
  WRITE_FIELD(*this, kAOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=766&c=3
template<class D, class P>
Object TorqueGeneratedInternalClass<D, P>::b() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedInternalClass::b(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=766&c=3
template<class D, class P>
Object TorqueGeneratedInternalClass<D, P>::b(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kBOffset);
  DCHECK(value.IsHeapNumber() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=766&c=3
template<class D, class P>
void TorqueGeneratedInternalClass<D, P>::set_b(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapNumber() || value.IsSmi());
  WRITE_FIELD(*this, kBOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=759&c=1
template<class D, class P>
D TorqueGeneratedInternalClass<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedInternalClass<D, P>::TorqueGeneratedInternalClass(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsInternalClass_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedInternalClass<D, P>::TorqueGeneratedInternalClass(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsInternalClass_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(InternalClass)
// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=829&c=3
template<class D, class P>
int TorqueGeneratedSmiPair<D, P>::a() const {
  int value;
  value = TaggedField<Smi>::load(*this, kAOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=829&c=3
template<class D, class P>
void TorqueGeneratedSmiPair<D, P>::set_a(int value) {
  WRITE_FIELD(*this, kAOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=830&c=3
template<class D, class P>
int TorqueGeneratedSmiPair<D, P>::b() const {
  int value;
  value = TaggedField<Smi>::load(*this, kBOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=830&c=3
template<class D, class P>
void TorqueGeneratedSmiPair<D, P>::set_b(int value) {
  WRITE_FIELD(*this, kBOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=825&c=1
template<class D, class P>
D TorqueGeneratedSmiPair<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedSmiPair<D, P>::TorqueGeneratedSmiPair(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsSmiPair_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedSmiPair<D, P>::TorqueGeneratedSmiPair(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsSmiPair_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(SmiPair)
// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=927&c=3
template<class D, class P>
int TorqueGeneratedSmiBox<D, P>::value() const {
  int value;
  value = TaggedField<Smi>::load(*this, kValueOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=927&c=3
template<class D, class P>
void TorqueGeneratedSmiBox<D, P>::set_value(int value) {
  WRITE_FIELD(*this, kValueOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=928&c=3
template<class D, class P>
int TorqueGeneratedSmiBox<D, P>::unrelated() const {
  int value;
  value = TaggedField<Smi>::load(*this, kUnrelatedOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=928&c=3
template<class D, class P>
void TorqueGeneratedSmiBox<D, P>::set_unrelated(int value) {
  WRITE_FIELD(*this, kUnrelatedOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=926&c=1
template<class D, class P>
D TorqueGeneratedSmiBox<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedSmiBox<D, P>::TorqueGeneratedSmiBox(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsSmiBox_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedSmiBox<D, P>::TorqueGeneratedSmiBox(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsSmiBox_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(SmiBox)
// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1179&c=3
template<class D, class P>
HeapObject TorqueGeneratedExportedSubClassBase<D, P>::a() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedExportedSubClassBase::a(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1179&c=3
template<class D, class P>
HeapObject TorqueGeneratedExportedSubClassBase<D, P>::a(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kAOffset);
  DCHECK(value.IsHeapObject());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1179&c=3
template<class D, class P>
void TorqueGeneratedExportedSubClassBase<D, P>::set_a(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject());
  WRITE_FIELD(*this, kAOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kAOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1180&c=3
template<class D, class P>
HeapObject TorqueGeneratedExportedSubClassBase<D, P>::b() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedExportedSubClassBase::b(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1180&c=3
template<class D, class P>
HeapObject TorqueGeneratedExportedSubClassBase<D, P>::b(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kBOffset);
  DCHECK(value.IsHeapObject());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1180&c=3
template<class D, class P>
void TorqueGeneratedExportedSubClassBase<D, P>::set_b(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject());
  WRITE_FIELD(*this, kBOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1177&c=1
template<class D, class P>
D TorqueGeneratedExportedSubClassBase<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedExportedSubClassBase<D, P>::TorqueGeneratedExportedSubClassBase(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsExportedSubClassBase_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedExportedSubClassBase<D, P>::TorqueGeneratedExportedSubClassBase(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsExportedSubClassBase_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(ExportedSubClassBase)
// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1172&c=3
template<class D, class P>
int32_t TorqueGeneratedExportedSubClass<D, P>::c_field() const {
  int32_t value;
  value = this->template ReadField<int32_t>(kCFieldOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1172&c=3
template<class D, class P>
void TorqueGeneratedExportedSubClass<D, P>::set_c_field(int32_t value) {
  this->template WriteField<int32_t>(kCFieldOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1173&c=3
template<class D, class P>
int32_t TorqueGeneratedExportedSubClass<D, P>::d_field() const {
  int32_t value;
  value = this->template ReadField<int32_t>(kDFieldOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1173&c=3
template<class D, class P>
void TorqueGeneratedExportedSubClass<D, P>::set_d_field(int32_t value) {
  this->template WriteField<int32_t>(kDFieldOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1174&c=3
template<class D, class P>
int TorqueGeneratedExportedSubClass<D, P>::e_field() const {
  int value;
  value = TaggedField<Smi>::load(*this, kEFieldOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1174&c=3
template<class D, class P>
void TorqueGeneratedExportedSubClass<D, P>::set_e_field(int value) {
  WRITE_FIELD(*this, kEFieldOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1170&c=1
template<class D, class P>
D TorqueGeneratedExportedSubClass<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedExportedSubClass<D, P>::TorqueGeneratedExportedSubClass(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsExportedSubClass_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedExportedSubClass<D, P>::TorqueGeneratedExportedSubClass(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsExportedSubClass_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(ExportedSubClass)
// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1183&c=1
template<class D, class P>
D TorqueGeneratedAbstractInternalClass<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedAbstractInternalClass<D, P>::TorqueGeneratedAbstractInternalClass(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsAbstractInternalClass_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedAbstractInternalClass<D, P>::TorqueGeneratedAbstractInternalClass(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsAbstractInternalClass_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(AbstractInternalClass)
// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1187&c=1
template<class D, class P>
D TorqueGeneratedAbstractInternalClassSubclass1<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedAbstractInternalClassSubclass1<D, P>::TorqueGeneratedAbstractInternalClassSubclass1(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsAbstractInternalClassSubclass1_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedAbstractInternalClassSubclass1<D, P>::TorqueGeneratedAbstractInternalClassSubclass1(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsAbstractInternalClassSubclass1_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(AbstractInternalClassSubclass1)
// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1189&c=1
template<class D, class P>
D TorqueGeneratedAbstractInternalClassSubclass2<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedAbstractInternalClassSubclass2<D, P>::TorqueGeneratedAbstractInternalClassSubclass2(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsAbstractInternalClassSubclass2_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedAbstractInternalClassSubclass2<D, P>::TorqueGeneratedAbstractInternalClassSubclass2(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsAbstractInternalClassSubclass2_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(AbstractInternalClassSubclass2)
// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1192&c=3
template<class D, class P>
int TorqueGeneratedInternalClassWithSmiElements<D, P>::data() const {
  int value;
  value = TaggedField<Smi>::load(*this, kDataOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1192&c=3
template<class D, class P>
void TorqueGeneratedInternalClassWithSmiElements<D, P>::set_data(int value) {
  WRITE_FIELD(*this, kDataOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1193&c=3
template<class D, class P>
Oddball TorqueGeneratedInternalClassWithSmiElements<D, P>::object() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedInternalClassWithSmiElements::object(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1193&c=3
template<class D, class P>
Oddball TorqueGeneratedInternalClassWithSmiElements<D, P>::object(PtrComprCageBase cage_base) const {
  Oddball value;
  value = TaggedField<Oddball>::load(cage_base, *this, kObjectOffset);
  DCHECK(value.IsOddball());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1193&c=3
template<class D, class P>
void TorqueGeneratedInternalClassWithSmiElements<D, P>::set_object(Oddball value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsOddball());
  WRITE_FIELD(*this, kObjectOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kObjectOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1194&c=3
template<class D, class P>
int TorqueGeneratedInternalClassWithSmiElements<D, P>::entries(int i) const {
  int value;
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this ->length());
  int offset = kEntriesOffset + i * kTaggedSize;
  value = TaggedField<Smi>::load(*this, offset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1194&c=3
template<class D, class P>
void TorqueGeneratedInternalClassWithSmiElements<D, P>::set_entries(int i, int value) {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this ->length());
  int offset = kEntriesOffset + i * kTaggedSize;
  WRITE_FIELD(*this, offset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1191&c=1
template<class D, class P>
D TorqueGeneratedInternalClassWithSmiElements<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedInternalClassWithSmiElements<D, P>::TorqueGeneratedInternalClassWithSmiElements(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsInternalClassWithSmiElements_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedInternalClassWithSmiElements<D, P>::TorqueGeneratedInternalClassWithSmiElements(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsInternalClassWithSmiElements_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(InternalClassWithSmiElements)
// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1203&c=3
template<class D, class P>
int32_t TorqueGeneratedInternalClassWithStructElements<D, P>::dummy1() const {
  int32_t value;
  value = this->template ReadField<int32_t>(kDummy1Offset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1203&c=3
template<class D, class P>
void TorqueGeneratedInternalClassWithStructElements<D, P>::set_dummy1(int32_t value) {
  this->template WriteField<int32_t>(kDummy1Offset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1204&c=3
template<class D, class P>
int32_t TorqueGeneratedInternalClassWithStructElements<D, P>::dummy2() const {
  int32_t value;
  value = this->template ReadField<int32_t>(kDummy2Offset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1204&c=3
template<class D, class P>
void TorqueGeneratedInternalClassWithStructElements<D, P>::set_dummy2(int32_t value) {
  this->template WriteField<int32_t>(kDummy2Offset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1205&c=9
template<class D, class P>
int TorqueGeneratedInternalClassWithStructElements<D, P>::count() const {
  int value;
  value = TaggedField<Smi>::load(*this, kCountOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1205&c=9
template<class D, class P>
void TorqueGeneratedInternalClassWithStructElements<D, P>::set_count(int value) {
  WRITE_FIELD(*this, kCountOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1206&c=3
template<class D, class P>
int TorqueGeneratedInternalClassWithStructElements<D, P>::data() const {
  int value;
  value = TaggedField<Smi>::load(*this, kDataOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1206&c=3
template<class D, class P>
void TorqueGeneratedInternalClassWithStructElements<D, P>::set_data(int value) {
  WRITE_FIELD(*this, kDataOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1207&c=3
template<class D, class P>
Object TorqueGeneratedInternalClassWithStructElements<D, P>::object() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedInternalClassWithStructElements::object(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1207&c=3
template<class D, class P>
Object TorqueGeneratedInternalClassWithStructElements<D, P>::object(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kObjectOffset);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1207&c=3
template<class D, class P>
void TorqueGeneratedInternalClassWithStructElements<D, P>::set_object(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kObjectOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kObjectOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1208&c=3
template<class D, class P>
int TorqueGeneratedInternalClassWithStructElements<D, P>::entries(int i) const {
  int value;
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this ->count());
  int offset = kEntriesOffset + i * kTaggedSize;
  value = TaggedField<Smi>::load(*this, offset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1208&c=3
template<class D, class P>
void TorqueGeneratedInternalClassWithStructElements<D, P>::set_entries(int i, int value) {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this ->count());
  int offset = kEntriesOffset + i * kTaggedSize;
  WRITE_FIELD(*this, offset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1209&c=3
template<class D, class P>
int TorqueGeneratedInternalClassWithStructElements<D, P>::more_entries_a(int i) const {
  int value;
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this ->count());
  int offset = MoreEntriesOffset() + 0 + i * 8;
  value = TaggedField<Smi>::load(*this, offset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1209&c=3
template<class D, class P>
void TorqueGeneratedInternalClassWithStructElements<D, P>::set_more_entries_a(int i, int value) {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this ->count());
  int offset = MoreEntriesOffset() + 0 + i * 8;
  WRITE_FIELD(*this, offset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1209&c=3
template<class D, class P>
int TorqueGeneratedInternalClassWithStructElements<D, P>::more_entries_b(int i) const {
  int value;
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this ->count());
  int offset = MoreEntriesOffset() + 4 + i * 8;
  value = TaggedField<Smi>::load(*this, offset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1209&c=3
template<class D, class P>
void TorqueGeneratedInternalClassWithStructElements<D, P>::set_more_entries_b(int i, int value) {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this ->count());
  int offset = MoreEntriesOffset() + 4 + i * 8;
  WRITE_FIELD(*this, offset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1202&c=1
template<class D, class P>
D TorqueGeneratedInternalClassWithStructElements<D, P>::cast(Object object) {
    return D(object.ptr());
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1209&c=3
template<class D, class P>
int TorqueGeneratedInternalClassWithStructElements<D, P>::MoreEntriesOffset() const {
  return static_cast<int>(std::get<1>(TqRuntimeFieldSliceInternalClassWithStructElementsMoreEntries(*static_cast<const D*>(this))));
}

template<class D, class P>
inline TorqueGeneratedInternalClassWithStructElements<D, P>::TorqueGeneratedInternalClassWithStructElements(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsInternalClassWithStructElements_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedInternalClassWithStructElements<D, P>::TorqueGeneratedInternalClassWithStructElements(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsInternalClassWithStructElements_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(InternalClassWithStructElements)
// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1284&c=3
template<class D, class P>
int32_t TorqueGeneratedExportedSubClass2<D, P>::x_field() const {
  int32_t value;
  value = this->template ReadField<int32_t>(kXFieldOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1284&c=3
template<class D, class P>
void TorqueGeneratedExportedSubClass2<D, P>::set_x_field(int32_t value) {
  this->template WriteField<int32_t>(kXFieldOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1285&c=3
template<class D, class P>
int32_t TorqueGeneratedExportedSubClass2<D, P>::y_field() const {
  int32_t value;
  value = this->template ReadField<int32_t>(kYFieldOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1285&c=3
template<class D, class P>
void TorqueGeneratedExportedSubClass2<D, P>::set_y_field(int32_t value) {
  this->template WriteField<int32_t>(kYFieldOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1286&c=3
template<class D, class P>
int TorqueGeneratedExportedSubClass2<D, P>::z_field() const {
  int value;
  value = TaggedField<Smi>::load(*this, kZFieldOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1286&c=3
template<class D, class P>
void TorqueGeneratedExportedSubClass2<D, P>::set_z_field(int value) {
  WRITE_FIELD(*this, kZFieldOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1282&c=1
template<class D, class P>
D TorqueGeneratedExportedSubClass2<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedExportedSubClass2<D, P>::TorqueGeneratedExportedSubClass2(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsExportedSubClass2_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedExportedSubClass2<D, P>::TorqueGeneratedExportedSubClass2(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsExportedSubClass2_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(ExportedSubClass2)
// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=43&c=3
template<class D, class P>
JSReceiver TorqueGeneratedSortState<D, P>::receiver() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedSortState::receiver(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=43&c=3
template<class D, class P>
JSReceiver TorqueGeneratedSortState<D, P>::receiver(PtrComprCageBase cage_base) const {
  JSReceiver value;
  value = TaggedField<JSReceiver>::load(cage_base, *this, kReceiverOffset);
  DCHECK(value.IsJSReceiver());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=43&c=3
template<class D, class P>
void TorqueGeneratedSortState<D, P>::set_receiver(JSReceiver value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver());
  WRITE_FIELD(*this, kReceiverOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kReceiverOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=48&c=3
template<class D, class P>
Map TorqueGeneratedSortState<D, P>::initialReceiverMap() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedSortState::initialReceiverMap(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=48&c=3
template<class D, class P>
Map TorqueGeneratedSortState<D, P>::initialReceiverMap(PtrComprCageBase cage_base) const {
  Map value;
  value = TaggedField<Map>::load(cage_base, *this, kInitialReceiverMapOffset);
  DCHECK(value.IsMap());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=48&c=3
template<class D, class P>
void TorqueGeneratedSortState<D, P>::set_initialReceiverMap(Map value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsMap());
  WRITE_FIELD(*this, kInitialReceiverMapOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInitialReceiverMapOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=49&c=3
template<class D, class P>
Object TorqueGeneratedSortState<D, P>::initialReceiverLength() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedSortState::initialReceiverLength(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=49&c=3
template<class D, class P>
Object TorqueGeneratedSortState<D, P>::initialReceiverLength(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kInitialReceiverLengthOffset);
  DCHECK(value.IsHeapNumber() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=49&c=3
template<class D, class P>
void TorqueGeneratedSortState<D, P>::set_initialReceiverLength(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapNumber() || value.IsSmi());
  WRITE_FIELD(*this, kInitialReceiverLengthOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInitialReceiverLengthOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=52&c=3
template<class D, class P>
HeapObject TorqueGeneratedSortState<D, P>::userCmpFn() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedSortState::userCmpFn(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=52&c=3
template<class D, class P>
HeapObject TorqueGeneratedSortState<D, P>::userCmpFn(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kUserCmpFnOffset);
  DCHECK(value.IsUndefined() || value.IsCallableApiObject() || value.IsCallableJSProxy() || value.IsJSWrappedFunction() || value.IsJSBoundFunction() || value.IsJSFunction());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=52&c=3
template<class D, class P>
void TorqueGeneratedSortState<D, P>::set_userCmpFn(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsCallableApiObject() || value.IsCallableJSProxy() || value.IsJSWrappedFunction() || value.IsJSBoundFunction() || value.IsJSFunction());
  WRITE_FIELD(*this, kUserCmpFnOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kUserCmpFnOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=57&c=3
template<class D, class P>
int TorqueGeneratedSortState<D, P>::sortComparePtr() const {
  int value;
  value = TaggedField<Smi>::load(*this, kSortComparePtrOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=57&c=3
template<class D, class P>
void TorqueGeneratedSortState<D, P>::set_sortComparePtr(int value) {
  WRITE_FIELD(*this, kSortComparePtrOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=62&c=3
template<class D, class P>
int TorqueGeneratedSortState<D, P>::loadFn() const {
  int value;
  value = TaggedField<Smi>::load(*this, kLoadFnOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=62&c=3
template<class D, class P>
void TorqueGeneratedSortState<D, P>::set_loadFn(int value) {
  WRITE_FIELD(*this, kLoadFnOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=63&c=3
template<class D, class P>
int TorqueGeneratedSortState<D, P>::storeFn() const {
  int value;
  value = TaggedField<Smi>::load(*this, kStoreFnOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=63&c=3
template<class D, class P>
void TorqueGeneratedSortState<D, P>::set_storeFn(int value) {
  WRITE_FIELD(*this, kStoreFnOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=64&c=3
template<class D, class P>
int TorqueGeneratedSortState<D, P>::deleteFn() const {
  int value;
  value = TaggedField<Smi>::load(*this, kDeleteFnOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=64&c=3
template<class D, class P>
void TorqueGeneratedSortState<D, P>::set_deleteFn(int value) {
  WRITE_FIELD(*this, kDeleteFnOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=65&c=3
template<class D, class P>
int TorqueGeneratedSortState<D, P>::canUseSameAccessorFn() const {
  int value;
  value = TaggedField<Smi>::load(*this, kCanUseSameAccessorFnOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=65&c=3
template<class D, class P>
void TorqueGeneratedSortState<D, P>::set_canUseSameAccessorFn(int value) {
  WRITE_FIELD(*this, kCanUseSameAccessorFnOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=70&c=3
template<class D, class P>
int TorqueGeneratedSortState<D, P>::minGallop() const {
  int value;
  value = TaggedField<Smi>::load(*this, kMinGallopOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=70&c=3
template<class D, class P>
void TorqueGeneratedSortState<D, P>::set_minGallop(int value) {
  WRITE_FIELD(*this, kMinGallopOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=82&c=3
template<class D, class P>
int TorqueGeneratedSortState<D, P>::pendingRunsSize() const {
  int value;
  value = TaggedField<Smi>::load(*this, kPendingRunsSizeOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=82&c=3
template<class D, class P>
void TorqueGeneratedSortState<D, P>::set_pendingRunsSize(int value) {
  WRITE_FIELD(*this, kPendingRunsSizeOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=83&c=3
template<class D, class P>
FixedArray TorqueGeneratedSortState<D, P>::pendingRuns() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedSortState::pendingRuns(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=83&c=3
template<class D, class P>
FixedArray TorqueGeneratedSortState<D, P>::pendingRuns(PtrComprCageBase cage_base) const {
  FixedArray value;
  value = TaggedField<FixedArray>::load(cage_base, *this, kPendingRunsOffset);
  DCHECK(value.IsFixedArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=83&c=3
template<class D, class P>
void TorqueGeneratedSortState<D, P>::set_pendingRuns(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kPendingRunsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPendingRunsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=88&c=3
template<class D, class P>
FixedArray TorqueGeneratedSortState<D, P>::workArray() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedSortState::workArray(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=88&c=3
template<class D, class P>
FixedArray TorqueGeneratedSortState<D, P>::workArray(PtrComprCageBase cage_base) const {
  FixedArray value;
  value = TaggedField<FixedArray>::load(cage_base, *this, kWorkArrayOffset);
  DCHECK(value.IsFixedArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=88&c=3
template<class D, class P>
void TorqueGeneratedSortState<D, P>::set_workArray(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kWorkArrayOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kWorkArrayOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=91&c=3
template<class D, class P>
FixedArray TorqueGeneratedSortState<D, P>::tempArray() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedSortState::tempArray(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=91&c=3
template<class D, class P>
FixedArray TorqueGeneratedSortState<D, P>::tempArray(PtrComprCageBase cage_base) const {
  FixedArray value;
  value = TaggedField<FixedArray>::load(cage_base, *this, kTempArrayOffset);
  DCHECK(value.IsFixedArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=91&c=3
template<class D, class P>
void TorqueGeneratedSortState<D, P>::set_tempArray(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kTempArrayOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTempArrayOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=94&c=3
template<class D, class P>
int TorqueGeneratedSortState<D, P>::sortLength() const {
  int value;
  value = TaggedField<Smi>::load(*this, kSortLengthOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=94&c=3
template<class D, class P>
void TorqueGeneratedSortState<D, P>::set_sortLength(int value) {
  WRITE_FIELD(*this, kSortLengthOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=98&c=3
template<class D, class P>
int TorqueGeneratedSortState<D, P>::numberOfUndefined() const {
  int value;
  value = TaggedField<Smi>::load(*this, kNumberOfUndefinedOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=98&c=3
template<class D, class P>
void TorqueGeneratedSortState<D, P>::set_numberOfUndefined(int value) {
  WRITE_FIELD(*this, kNumberOfUndefinedOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=17&c=1
template<class D, class P>
D TorqueGeneratedSortState<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedSortState<D, P>::TorqueGeneratedSortState(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsSortState_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedSortState<D, P>::TorqueGeneratedSortState(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsSortState_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(SortState)
