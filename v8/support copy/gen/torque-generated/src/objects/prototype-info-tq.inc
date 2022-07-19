class PrototypeInfo;
// Alias for HeapObject::IsPrototypeInfo() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=9&c=1
V8_EXPORT_PRIVATE bool IsPrototypeInfo_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=9&c=1
template <class D, class P>
class TorqueGeneratedPrototypeInfo : public P {
  static_assert(
      std::is_same<PrototypeInfo, D>::value,
      "Use this class as direct base for PrototypeInfo.");
  static_assert(
      std::is_same<Struct, P>::value,
      "Pass in Struct as second template parameter for TorqueGeneratedPrototypeInfo.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedPrototypeInfo<D,P>;

  // Torque type: (Undefined | class JSModuleNamespace)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=14&c=3
  inline HeapObject module_namespace() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=14&c=3
  inline HeapObject module_namespace(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=14&c=3
  inline void set_module_namespace(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Zero | class WeakArrayList)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=18&c=3
  inline Object prototype_users() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=18&c=3
  inline Object prototype_users(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=18&c=3
  inline void set_prototype_users(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | class FixedArray | Zero)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=20&c=3
  inline Object prototype_chain_enum_cache() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=20&c=3
  inline Object prototype_chain_enum_cache(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=20&c=3
  inline void set_prototype_chain_enum_cache(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=24&c=3
  inline int registry_slot() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=24&c=3
  inline void set_registry_slot(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=26&c=3
  inline int bit_field() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=26&c=3
  inline void set_bit_field(int value);

  // Torque type: (Undefined | Weak<class Map>)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=29&c=3
  inline MaybeObject object_create_map() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=29&c=3
  inline MaybeObject object_create_map(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=29&c=3
  inline void set_object_create_map(MaybeObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=9&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=9&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(PrototypeInfo)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=9&c=1
  V8_EXPORT_PRIVATE void PrototypeInfoVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=14&c=3
  static constexpr int kModuleNamespaceOffset = P::kHeaderSize;
  static constexpr int kModuleNamespaceOffsetEnd = kModuleNamespaceOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=18&c=3
  static constexpr int kPrototypeUsersOffset = kModuleNamespaceOffsetEnd + 1;
  static constexpr int kPrototypeUsersOffsetEnd = kPrototypeUsersOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=20&c=3
  static constexpr int kPrototypeChainEnumCacheOffset = kPrototypeUsersOffsetEnd + 1;
  static constexpr int kPrototypeChainEnumCacheOffsetEnd = kPrototypeChainEnumCacheOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=24&c=3
  static constexpr int kRegistrySlotOffset = kPrototypeChainEnumCacheOffsetEnd + 1;
  static constexpr int kRegistrySlotOffsetEnd = kRegistrySlotOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=26&c=3
  static constexpr int kBitFieldOffset = kRegistrySlotOffsetEnd + 1;
  static constexpr int kBitFieldOffsetEnd = kBitFieldOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kBitFieldOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kBitFieldOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=29&c=3
  static constexpr int kObjectCreateMapOffset = kBitFieldOffsetEnd + 1;
  static constexpr int kObjectCreateMapOffsetEnd = kObjectCreateMapOffset + kTaggedSize - 1;
  static constexpr int kEndOfWeakFieldsOffset = kObjectCreateMapOffsetEnd + 1;
  static constexpr int kHeaderSize = kObjectCreateMapOffsetEnd + 1;
  static constexpr int kSize = kObjectCreateMapOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=9&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 28);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=9&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedPrototypeInfo() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedPrototypeInfo, DAlias>::value,
        "class TorqueGeneratedPrototypeInfo should be used as direct base for PrototypeInfo.");
  }

 protected:
  inline explicit TorqueGeneratedPrototypeInfo(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedPrototypeInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

