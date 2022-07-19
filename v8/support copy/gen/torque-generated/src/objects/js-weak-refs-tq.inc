class WeakCell;
class JSFinalizationRegistry;
class JSWeakRef;
// Alias for HeapObject::IsWeakCell() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=21&c=1
V8_EXPORT_PRIVATE bool IsWeakCell_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=21&c=1
template <class D, class P>
class TorqueGeneratedWeakCell : public P {
  static_assert(
      std::is_same<WeakCell, D>::value,
      "Use this class as direct base for WeakCell.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedWeakCell.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWeakCell<D,P>;

  // Torque type: (Undefined | class JSFinalizationRegistry)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=22&c=3
  inline HeapObject finalization_registry() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=22&c=3
  inline HeapObject finalization_registry(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=22&c=3
  inline void set_finalization_registry(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (class JSReceiver | Undefined)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=23&c=3
  inline HeapObject target() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=23&c=3
  inline HeapObject target(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=23&c=3
  inline void set_target(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (class JSReceiver | Undefined)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=24&c=3
  inline HeapObject unregister_token() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=24&c=3
  inline HeapObject unregister_token(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=24&c=3
  inline void set_unregister_token(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: JSAny
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=25&c=3
  inline Object holdings() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=25&c=3
  inline Object holdings(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=25&c=3
  inline void set_holdings(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | class WeakCell)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=29&c=3
  inline HeapObject prev() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=29&c=3
  inline HeapObject prev(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=29&c=3
  inline void set_prev(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | class WeakCell)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=30&c=3
  inline HeapObject next() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=30&c=3
  inline HeapObject next(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=30&c=3
  inline void set_next(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | class WeakCell)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=38&c=3
  inline HeapObject key_list_prev() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=38&c=3
  inline HeapObject key_list_prev(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=38&c=3
  inline void set_key_list_prev(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | class WeakCell)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=39&c=3
  inline HeapObject key_list_next() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=39&c=3
  inline HeapObject key_list_next(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=39&c=3
  inline void set_key_list_next(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=21&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=21&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(WeakCell)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=21&c=1
  V8_EXPORT_PRIVATE void WeakCellVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=22&c=3
  static constexpr int kFinalizationRegistryOffset = P::kHeaderSize;
  static constexpr int kFinalizationRegistryOffsetEnd = kFinalizationRegistryOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=23&c=3
  static constexpr int kTargetOffset = kFinalizationRegistryOffsetEnd + 1;
  static constexpr int kTargetOffsetEnd = kTargetOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=24&c=3
  static constexpr int kUnregisterTokenOffset = kTargetOffsetEnd + 1;
  static constexpr int kUnregisterTokenOffsetEnd = kUnregisterTokenOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=25&c=3
  static constexpr int kHoldingsOffset = kUnregisterTokenOffsetEnd + 1;
  static constexpr int kHoldingsOffsetEnd = kHoldingsOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=29&c=3
  static constexpr int kPrevOffset = kHoldingsOffsetEnd + 1;
  static constexpr int kPrevOffsetEnd = kPrevOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=30&c=3
  static constexpr int kNextOffset = kPrevOffsetEnd + 1;
  static constexpr int kNextOffsetEnd = kNextOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=38&c=3
  static constexpr int kKeyListPrevOffset = kNextOffsetEnd + 1;
  static constexpr int kKeyListPrevOffsetEnd = kKeyListPrevOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=39&c=3
  static constexpr int kKeyListNextOffset = kKeyListPrevOffsetEnd + 1;
  static constexpr int kKeyListNextOffsetEnd = kKeyListNextOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kKeyListNextOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kKeyListNextOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kKeyListNextOffsetEnd + 1;
  static constexpr int kHeaderSize = kKeyListNextOffsetEnd + 1;
  static constexpr int kSize = kKeyListNextOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=21&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 36);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=21&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWeakCell() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWeakCell, DAlias>::value,
        "class TorqueGeneratedWeakCell should be used as direct base for WeakCell.");
  }

 protected:
  inline explicit TorqueGeneratedWeakCell(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWeakCell(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSFinalizationRegistry() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=9&c=1
V8_EXPORT_PRIVATE bool IsJSFinalizationRegistry_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=9&c=1
template <class D, class P>
class TorqueGeneratedJSFinalizationRegistry : public P {
  static_assert(
      std::is_same<JSFinalizationRegistry, D>::value,
      "Use this class as direct base for JSFinalizationRegistry.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSFinalizationRegistry.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSFinalizationRegistry<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=10&c=3
  inline NativeContext native_context() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=10&c=3
  inline NativeContext native_context(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=10&c=3
  inline void set_native_context(NativeContext value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: Callable
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=11&c=3
  inline JSReceiver cleanup() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=11&c=3
  inline JSReceiver cleanup(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=11&c=3
  inline void set_cleanup(JSReceiver value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | class WeakCell)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=12&c=3
  inline HeapObject active_cells() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=12&c=3
  inline HeapObject active_cells(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=12&c=3
  inline void set_active_cells(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | class WeakCell)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=13&c=3
  inline HeapObject cleared_cells() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=13&c=3
  inline HeapObject cleared_cells(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=13&c=3
  inline void set_cleared_cells(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=14&c=3
  inline Object key_map() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=14&c=3
  inline Object key_map(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=14&c=3
  inline void set_key_map(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | class JSFinalizationRegistry)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=17&c=3
  inline HeapObject next_dirty() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=17&c=3
  inline HeapObject next_dirty(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=17&c=3
  inline void set_next_dirty(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=18&c=3
  inline int flags() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=18&c=3
  inline void set_flags(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=9&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=9&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSFinalizationRegistry)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=9&c=1
  V8_EXPORT_PRIVATE void JSFinalizationRegistryVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=10&c=3
  static constexpr int kNativeContextOffset = P::kHeaderSize;
  static constexpr int kNativeContextOffsetEnd = kNativeContextOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=11&c=3
  static constexpr int kCleanupOffset = kNativeContextOffsetEnd + 1;
  static constexpr int kCleanupOffsetEnd = kCleanupOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=12&c=3
  static constexpr int kActiveCellsOffset = kCleanupOffsetEnd + 1;
  static constexpr int kActiveCellsOffsetEnd = kActiveCellsOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=13&c=3
  static constexpr int kClearedCellsOffset = kActiveCellsOffsetEnd + 1;
  static constexpr int kClearedCellsOffsetEnd = kClearedCellsOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=14&c=3
  static constexpr int kKeyMapOffset = kClearedCellsOffsetEnd + 1;
  static constexpr int kKeyMapOffsetEnd = kKeyMapOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=17&c=3
  static constexpr int kNextDirtyOffset = kKeyMapOffsetEnd + 1;
  static constexpr int kNextDirtyOffsetEnd = kNextDirtyOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=18&c=3
  static constexpr int kFlagsOffset = kNextDirtyOffsetEnd + 1;
  static constexpr int kFlagsOffsetEnd = kFlagsOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kFlagsOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kFlagsOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kFlagsOffsetEnd + 1;
  static constexpr int kHeaderSize = kFlagsOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSFinalizationRegistry() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSFinalizationRegistry, DAlias>::value,
        "class TorqueGeneratedJSFinalizationRegistry should be used as direct base for JSFinalizationRegistry.");
  }

 protected:
  inline explicit TorqueGeneratedJSFinalizationRegistry(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSFinalizationRegistry(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSWeakRef() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=42&c=1
V8_EXPORT_PRIVATE bool IsJSWeakRef_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=42&c=1
template <class D, class P>
class TorqueGeneratedJSWeakRef : public P {
  static_assert(
      std::is_same<JSWeakRef, D>::value,
      "Use this class as direct base for JSWeakRef.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSWeakRef.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSWeakRef<D,P>;

  // Torque type: (class JSReceiver | Undefined)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=42&c=43
  inline HeapObject target() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=42&c=43
  inline HeapObject target(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=42&c=43
  inline void set_target(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=42&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=42&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSWeakRef)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=42&c=1
  V8_EXPORT_PRIVATE void JSWeakRefVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=42&c=43
  static constexpr int kTargetOffset = P::kHeaderSize;
  static constexpr int kTargetOffsetEnd = kTargetOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kTargetOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kTargetOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kTargetOffsetEnd + 1;
  static constexpr int kHeaderSize = kTargetOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSWeakRef() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSWeakRef, DAlias>::value,
        "class TorqueGeneratedJSWeakRef should be used as direct base for JSWeakRef.");
  }

 protected:
  inline explicit TorqueGeneratedJSWeakRef(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSWeakRef(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

