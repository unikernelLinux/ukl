// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=22&c=3
template<class D, class P>
HeapObject TorqueGeneratedWeakCell<D, P>::finalization_registry() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWeakCell::finalization_registry(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=22&c=3
template<class D, class P>
HeapObject TorqueGeneratedWeakCell<D, P>::finalization_registry(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kFinalizationRegistryOffset);
  DCHECK(value.IsUndefined() || value.IsJSFinalizationRegistry());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=22&c=3
template<class D, class P>
void TorqueGeneratedWeakCell<D, P>::set_finalization_registry(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsJSFinalizationRegistry());
  WRITE_FIELD(*this, kFinalizationRegistryOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kFinalizationRegistryOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=23&c=3
template<class D, class P>
HeapObject TorqueGeneratedWeakCell<D, P>::target() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWeakCell::target(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=23&c=3
template<class D, class P>
HeapObject TorqueGeneratedWeakCell<D, P>::target(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kTargetOffset);
  DCHECK(value.IsJSReceiver() || value.IsUndefined());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=23&c=3
template<class D, class P>
void TorqueGeneratedWeakCell<D, P>::set_target(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsUndefined());
  WRITE_FIELD(*this, kTargetOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTargetOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=24&c=3
template<class D, class P>
HeapObject TorqueGeneratedWeakCell<D, P>::unregister_token() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWeakCell::unregister_token(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=24&c=3
template<class D, class P>
HeapObject TorqueGeneratedWeakCell<D, P>::unregister_token(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kUnregisterTokenOffset);
  DCHECK(value.IsJSReceiver() || value.IsUndefined());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=24&c=3
template<class D, class P>
void TorqueGeneratedWeakCell<D, P>::set_unregister_token(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsUndefined());
  WRITE_FIELD(*this, kUnregisterTokenOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kUnregisterTokenOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=25&c=3
template<class D, class P>
Object TorqueGeneratedWeakCell<D, P>::holdings() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWeakCell::holdings(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=25&c=3
template<class D, class P>
Object TorqueGeneratedWeakCell<D, P>::holdings(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kHoldingsOffset);
  DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=25&c=3
template<class D, class P>
void TorqueGeneratedWeakCell<D, P>::set_holdings(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsUndefined() || value.IsNull() || value.IsFalse() || value.IsTrue() || value.IsSymbol() || value.IsString() || value.IsBigInt() || value.IsHeapNumber() || value.IsSmi());
  WRITE_FIELD(*this, kHoldingsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kHoldingsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=29&c=3
template<class D, class P>
HeapObject TorqueGeneratedWeakCell<D, P>::prev() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWeakCell::prev(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=29&c=3
template<class D, class P>
HeapObject TorqueGeneratedWeakCell<D, P>::prev(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kPrevOffset);
  DCHECK(value.IsUndefined() || value.IsWeakCell());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=29&c=3
template<class D, class P>
void TorqueGeneratedWeakCell<D, P>::set_prev(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsWeakCell());
  WRITE_FIELD(*this, kPrevOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPrevOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=30&c=3
template<class D, class P>
HeapObject TorqueGeneratedWeakCell<D, P>::next() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWeakCell::next(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=30&c=3
template<class D, class P>
HeapObject TorqueGeneratedWeakCell<D, P>::next(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kNextOffset);
  DCHECK(value.IsUndefined() || value.IsWeakCell());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=30&c=3
template<class D, class P>
void TorqueGeneratedWeakCell<D, P>::set_next(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsWeakCell());
  WRITE_FIELD(*this, kNextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNextOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=38&c=3
template<class D, class P>
HeapObject TorqueGeneratedWeakCell<D, P>::key_list_prev() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWeakCell::key_list_prev(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=38&c=3
template<class D, class P>
HeapObject TorqueGeneratedWeakCell<D, P>::key_list_prev(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kKeyListPrevOffset);
  DCHECK(value.IsUndefined() || value.IsWeakCell());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=38&c=3
template<class D, class P>
void TorqueGeneratedWeakCell<D, P>::set_key_list_prev(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsWeakCell());
  WRITE_FIELD(*this, kKeyListPrevOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kKeyListPrevOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=39&c=3
template<class D, class P>
HeapObject TorqueGeneratedWeakCell<D, P>::key_list_next() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWeakCell::key_list_next(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=39&c=3
template<class D, class P>
HeapObject TorqueGeneratedWeakCell<D, P>::key_list_next(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kKeyListNextOffset);
  DCHECK(value.IsUndefined() || value.IsWeakCell());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=39&c=3
template<class D, class P>
void TorqueGeneratedWeakCell<D, P>::set_key_list_next(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsWeakCell());
  WRITE_FIELD(*this, kKeyListNextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kKeyListNextOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=21&c=1
template<class D, class P>
D TorqueGeneratedWeakCell<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedWeakCell<D, P>::TorqueGeneratedWeakCell(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWeakCell_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedWeakCell<D, P>::TorqueGeneratedWeakCell(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsWeakCell_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=10&c=3
template<class D, class P>
NativeContext TorqueGeneratedJSFinalizationRegistry<D, P>::native_context() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSFinalizationRegistry::native_context(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=10&c=3
template<class D, class P>
NativeContext TorqueGeneratedJSFinalizationRegistry<D, P>::native_context(PtrComprCageBase cage_base) const {
  NativeContext value;
  value = TaggedField<NativeContext>::load(cage_base, *this, kNativeContextOffset);
  DCHECK(value.IsNativeContext());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=10&c=3
template<class D, class P>
void TorqueGeneratedJSFinalizationRegistry<D, P>::set_native_context(NativeContext value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsNativeContext());
  WRITE_FIELD(*this, kNativeContextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNativeContextOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=11&c=3
template<class D, class P>
JSReceiver TorqueGeneratedJSFinalizationRegistry<D, P>::cleanup() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSFinalizationRegistry::cleanup(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=11&c=3
template<class D, class P>
JSReceiver TorqueGeneratedJSFinalizationRegistry<D, P>::cleanup(PtrComprCageBase cage_base) const {
  JSReceiver value;
  value = TaggedField<JSReceiver>::load(cage_base, *this, kCleanupOffset);
  DCHECK(value.IsCallableApiObject() || value.IsCallableJSProxy() || value.IsJSWrappedFunction() || value.IsJSBoundFunction() || value.IsJSFunction());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=11&c=3
template<class D, class P>
void TorqueGeneratedJSFinalizationRegistry<D, P>::set_cleanup(JSReceiver value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsCallableApiObject() || value.IsCallableJSProxy() || value.IsJSWrappedFunction() || value.IsJSBoundFunction() || value.IsJSFunction());
  WRITE_FIELD(*this, kCleanupOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCleanupOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=12&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSFinalizationRegistry<D, P>::active_cells() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSFinalizationRegistry::active_cells(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=12&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSFinalizationRegistry<D, P>::active_cells(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kActiveCellsOffset);
  DCHECK(value.IsUndefined() || value.IsWeakCell());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=12&c=3
template<class D, class P>
void TorqueGeneratedJSFinalizationRegistry<D, P>::set_active_cells(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsWeakCell());
  WRITE_FIELD(*this, kActiveCellsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kActiveCellsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=13&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSFinalizationRegistry<D, P>::cleared_cells() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSFinalizationRegistry::cleared_cells(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=13&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSFinalizationRegistry<D, P>::cleared_cells(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kClearedCellsOffset);
  DCHECK(value.IsUndefined() || value.IsWeakCell());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=13&c=3
template<class D, class P>
void TorqueGeneratedJSFinalizationRegistry<D, P>::set_cleared_cells(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsWeakCell());
  WRITE_FIELD(*this, kClearedCellsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kClearedCellsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=14&c=3
template<class D, class P>
Object TorqueGeneratedJSFinalizationRegistry<D, P>::key_map() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSFinalizationRegistry::key_map(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=14&c=3
template<class D, class P>
Object TorqueGeneratedJSFinalizationRegistry<D, P>::key_map(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kKeyMapOffset);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=14&c=3
template<class D, class P>
void TorqueGeneratedJSFinalizationRegistry<D, P>::set_key_map(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kKeyMapOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kKeyMapOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=17&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSFinalizationRegistry<D, P>::next_dirty() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSFinalizationRegistry::next_dirty(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=17&c=3
template<class D, class P>
HeapObject TorqueGeneratedJSFinalizationRegistry<D, P>::next_dirty(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kNextDirtyOffset);
  DCHECK(value.IsUndefined() || value.IsJSFinalizationRegistry());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=17&c=3
template<class D, class P>
void TorqueGeneratedJSFinalizationRegistry<D, P>::set_next_dirty(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsJSFinalizationRegistry());
  WRITE_FIELD(*this, kNextDirtyOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNextDirtyOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=18&c=3
template<class D, class P>
int TorqueGeneratedJSFinalizationRegistry<D, P>::flags() const {
  int value;
  value = TaggedField<Smi>::load(*this, kFlagsOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=18&c=3
template<class D, class P>
void TorqueGeneratedJSFinalizationRegistry<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=9&c=1
template<class D, class P>
D TorqueGeneratedJSFinalizationRegistry<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSFinalizationRegistry<D, P>::TorqueGeneratedJSFinalizationRegistry(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSFinalizationRegistry_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSFinalizationRegistry<D, P>::TorqueGeneratedJSFinalizationRegistry(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSFinalizationRegistry_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=42&c=43
template<class D, class P>
HeapObject TorqueGeneratedJSWeakRef<D, P>::target() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSWeakRef::target(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=42&c=43
template<class D, class P>
HeapObject TorqueGeneratedJSWeakRef<D, P>::target(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kTargetOffset);
  DCHECK(value.IsJSReceiver() || value.IsUndefined());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=42&c=43
template<class D, class P>
void TorqueGeneratedJSWeakRef<D, P>::set_target(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsUndefined());
  WRITE_FIELD(*this, kTargetOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTargetOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=42&c=1
template<class D, class P>
D TorqueGeneratedJSWeakRef<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSWeakRef<D, P>::TorqueGeneratedJSWeakRef(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSWeakRef_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSWeakRef<D, P>::TorqueGeneratedJSWeakRef(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSWeakRef_NonInline(*this));
}
