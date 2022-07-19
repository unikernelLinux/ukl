// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=17&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSRegExp<D, P>::data() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSRegExp::data(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=17&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSRegExp<D, P>::data(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kDataOffset);
  DCHECK(value.IsUndefined() || value.IsFixedArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=17&c=3
template<class D, class P>
void TorqueGeneratedJSRegExp<D, P>::set_data(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsFixedArray());
  WRITE_FIELD(*this, kDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDataOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=18&c=3
template<class D, class P>
PrimitiveHeapObject TorqueGeneratedJSRegExp<D, P>::source() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSRegExp::source(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=18&c=3
template<class D, class P>
PrimitiveHeapObject TorqueGeneratedJSRegExp<D, P>::source(PtrComprCageBase cage_base) const {
  PrimitiveHeapObject value;
  value = TaggedField<PrimitiveHeapObject>::load(cage_base, *this, kSourceOffset);
  DCHECK(value.IsUndefined() || value.IsString());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=18&c=3
template<class D, class P>
void TorqueGeneratedJSRegExp<D, P>::set_source(PrimitiveHeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsString());
  WRITE_FIELD(*this, kSourceOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSourceOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=19&c=3
template<class D, class P>
Object TorqueGeneratedJSRegExp<D, P>::flags() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSRegExp::flags(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=19&c=3
template<class D, class P>
Object TorqueGeneratedJSRegExp<D, P>::flags(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kFlagsOffset);
  DCHECK(value.IsUndefined() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=19&c=3
template<class D, class P>
void TorqueGeneratedJSRegExp<D, P>::set_flags(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsSmi());
  WRITE_FIELD(*this, kFlagsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kFlagsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=16&c=1
template<class D, class P>
D TorqueGeneratedJSRegExp<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSRegExp<D, P>::TorqueGeneratedJSRegExp(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSRegExp_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSRegExp<D, P>::TorqueGeneratedJSRegExp(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSRegExp_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=44&c=3
template<class D, class P>
Object TorqueGeneratedJSRegExpResult<D, P>::index() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSRegExpResult::index(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=44&c=3
template<class D, class P>
Object TorqueGeneratedJSRegExpResult<D, P>::index(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kIndexOffset);
  DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=44&c=3
template<class D, class P>
void TorqueGeneratedJSRegExpResult<D, P>::set_index(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi());
  WRITE_FIELD(*this, kIndexOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIndexOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=45&c=3
template<class D, class P>
Object TorqueGeneratedJSRegExpResult<D, P>::input() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSRegExpResult::input(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=45&c=3
template<class D, class P>
Object TorqueGeneratedJSRegExpResult<D, P>::input(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kInputOffset);
  DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=45&c=3
template<class D, class P>
void TorqueGeneratedJSRegExpResult<D, P>::set_input(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi());
  WRITE_FIELD(*this, kInputOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInputOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=46&c=3
template<class D, class P>
Object TorqueGeneratedJSRegExpResult<D, P>::groups() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSRegExpResult::groups(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=46&c=3
template<class D, class P>
Object TorqueGeneratedJSRegExpResult<D, P>::groups(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kGroupsOffset);
  DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=46&c=3
template<class D, class P>
void TorqueGeneratedJSRegExpResult<D, P>::set_groups(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi());
  WRITE_FIELD(*this, kGroupsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kGroupsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=49&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSRegExpResult<D, P>::names() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSRegExpResult::names(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=49&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSRegExpResult<D, P>::names(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kNamesOffset);
  DCHECK(value.IsUndefined() || value.IsFixedArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=49&c=3
template<class D, class P>
void TorqueGeneratedJSRegExpResult<D, P>::set_names(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsFixedArray());
  WRITE_FIELD(*this, kNamesOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNamesOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=50&c=3
template<class D, class P>
String TorqueGeneratedJSRegExpResult<D, P>::regexp_input() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSRegExpResult::regexp_input(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=50&c=3
template<class D, class P>
String TorqueGeneratedJSRegExpResult<D, P>::regexp_input(PtrComprCageBase cage_base) const {
  String value;
  value = TaggedField<String>::load(cage_base, *this, kRegexpInputOffset);
  DCHECK(value.IsString());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=50&c=3
template<class D, class P>
void TorqueGeneratedJSRegExpResult<D, P>::set_regexp_input(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kRegexpInputOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kRegexpInputOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=51&c=3
template<class D, class P>
int TorqueGeneratedJSRegExpResult<D, P>::regexp_last_index() const {
  int value;
  value = TaggedField<Smi>::load(*this, kRegexpLastIndexOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=51&c=3
template<class D, class P>
void TorqueGeneratedJSRegExpResult<D, P>::set_regexp_last_index(int value) {
  WRITE_FIELD(*this, kRegexpLastIndexOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=41&c=1
template<class D, class P>
D TorqueGeneratedJSRegExpResult<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSRegExpResult<D, P>::TorqueGeneratedJSRegExpResult(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSArray_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSRegExpResult<D, P>::TorqueGeneratedJSRegExpResult(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSArray_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=55&c=3
template<class D, class P>
Object TorqueGeneratedJSRegExpResultWithIndices<D, P>::indices() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSRegExpResultWithIndices::indices(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=55&c=3
template<class D, class P>
Object TorqueGeneratedJSRegExpResultWithIndices<D, P>::indices(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kIndicesOffset);
  DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=55&c=3
template<class D, class P>
void TorqueGeneratedJSRegExpResultWithIndices<D, P>::set_indices(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi());
  WRITE_FIELD(*this, kIndicesOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIndicesOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=54&c=1
template<class D, class P>
D TorqueGeneratedJSRegExpResultWithIndices<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSRegExpResultWithIndices<D, P>::TorqueGeneratedJSRegExpResultWithIndices(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSArray_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSRegExpResultWithIndices<D, P>::TorqueGeneratedJSRegExpResultWithIndices(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSArray_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=61&c=3
template<class D, class P>
Object TorqueGeneratedJSRegExpResultIndices<D, P>::groups() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSRegExpResultIndices::groups(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=61&c=3
template<class D, class P>
Object TorqueGeneratedJSRegExpResultIndices<D, P>::groups(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kGroupsOffset);
  DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=61&c=3
template<class D, class P>
void TorqueGeneratedJSRegExpResultIndices<D, P>::set_groups(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi());
  WRITE_FIELD(*this, kGroupsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kGroupsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=58&c=1
template<class D, class P>
D TorqueGeneratedJSRegExpResultIndices<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSRegExpResultIndices<D, P>::TorqueGeneratedJSRegExpResultIndices(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSArray_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSRegExpResultIndices<D, P>::TorqueGeneratedJSRegExpResultIndices(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSArray_NonInline(*this));
}
