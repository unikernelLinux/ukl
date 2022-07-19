class Map;
// Alias for HeapObject::IsMap() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=37&c=1
V8_EXPORT_PRIVATE bool IsMap_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=37&c=1
template <class D, class P>
class TorqueGeneratedMap : public P {
  static_assert(
      std::is_same<Map, D>::value,
      "Use this class as direct base for Map.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedMap.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedMap<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=59&c=3
  inline uint8_t instance_size_in_words() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=59&c=3
  inline void set_instance_size_in_words(uint8_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=60&c=3
  inline uint8_t inobject_properties_start_or_constructor_function_index() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=60&c=3
  inline void set_inobject_properties_start_or_constructor_function_index(uint8_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=61&c=3
  inline uint8_t used_or_unused_instance_size_in_words() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=61&c=3
  inline void set_used_or_unused_instance_size_in_words(uint8_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=62&c=3
  inline uint8_t visitor_id() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=62&c=3
  inline void set_visitor_id(uint8_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=63&c=3
  inline InstanceType instance_type() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=63&c=3
  inline void set_instance_type(InstanceType value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=64&c=3
  inline uint8_t bit_field() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=64&c=3
  inline void set_bit_field(uint8_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=65&c=3
  inline uint8_t bit_field2() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=65&c=3
  inline void set_bit_field2(uint8_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=66&c=3
  inline uint32_t bit_field3() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=66&c=3
  inline void set_bit_field3(uint32_t value);

  // Torque type: (class JSReceiver | Null)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=71&c=3
  inline HeapObject prototype() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=71&c=3
  inline HeapObject prototype(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=71&c=3
  inline void set_prototype(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=72&c=3
  inline Object constructor_or_back_pointer_or_native_context() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=72&c=3
  inline Object constructor_or_back_pointer_or_native_context(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=72&c=3
  inline void set_constructor_or_back_pointer_or_native_context(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=73&c=3
  inline DescriptorArray instance_descriptors() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=73&c=3
  inline DescriptorArray instance_descriptors(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=73&c=3
  inline void set_instance_descriptors(DescriptorArray value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: DependentCode
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=74&c=3
  inline WeakFixedArray dependent_code() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=74&c=3
  inline WeakFixedArray dependent_code(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=74&c=3
  inline void set_dependent_code(WeakFixedArray value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Smi | class Cell)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=75&c=3
  inline Object prototype_validity_cell() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=75&c=3
  inline Object prototype_validity_cell(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=75&c=3
  inline void set_prototype_validity_cell(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Smi | class TransitionArray | class Map | Weak<class Map> | class PrototypeInfo)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=76&c=3
  inline MaybeObject transitions_or_prototype_info() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=76&c=3
  inline MaybeObject transitions_or_prototype_info(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=76&c=3
  inline void set_transitions_or_prototype_info(MaybeObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=37&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=37&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(Map)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=37&c=1
  V8_EXPORT_PRIVATE void MapVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=59&c=3
  static constexpr int kInstanceSizeInWordsOffset = P::kHeaderSize;
  static constexpr int kInstanceSizeInWordsOffsetEnd = kInstanceSizeInWordsOffset + kUInt8Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=60&c=3
  static constexpr int kInobjectPropertiesStartOrConstructorFunctionIndexOffset = kInstanceSizeInWordsOffsetEnd + 1;
  static constexpr int kInobjectPropertiesStartOrConstructorFunctionIndexOffsetEnd = kInobjectPropertiesStartOrConstructorFunctionIndexOffset + kUInt8Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=61&c=3
  static constexpr int kUsedOrUnusedInstanceSizeInWordsOffset = kInobjectPropertiesStartOrConstructorFunctionIndexOffsetEnd + 1;
  static constexpr int kUsedOrUnusedInstanceSizeInWordsOffsetEnd = kUsedOrUnusedInstanceSizeInWordsOffset + kUInt8Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=62&c=3
  static constexpr int kVisitorIdOffset = kUsedOrUnusedInstanceSizeInWordsOffsetEnd + 1;
  static constexpr int kVisitorIdOffsetEnd = kVisitorIdOffset + kUInt8Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=63&c=3
  static constexpr int kInstanceTypeOffset = kVisitorIdOffsetEnd + 1;
  static constexpr int kInstanceTypeOffsetEnd = kInstanceTypeOffset + kUInt16Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=64&c=3
  static constexpr int kBitFieldOffset = kInstanceTypeOffsetEnd + 1;
  static constexpr int kBitFieldOffsetEnd = kBitFieldOffset + kUInt8Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=65&c=3
  static constexpr int kBitField2Offset = kBitFieldOffsetEnd + 1;
  static constexpr int kBitField2OffsetEnd = kBitField2Offset + kUInt8Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=66&c=3
  static constexpr int kBitField3Offset = kBitField2OffsetEnd + 1;
  static constexpr int kBitField3OffsetEnd = kBitField3Offset + kInt32Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=69&c=31
  static constexpr int kOptionalPaddingOffset = kBitField3OffsetEnd + 1;
  static constexpr int kOptionalPaddingOffsetEnd = kOptionalPaddingOffset + 0 - 1;
  static constexpr int kStartOfStrongFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=71&c=3
  static constexpr int kPrototypeOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kPrototypeOffsetEnd = kPrototypeOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=72&c=3
  static constexpr int kConstructorOrBackPointerOrNativeContextOffset = kPrototypeOffsetEnd + 1;
  static constexpr int kConstructorOrBackPointerOrNativeContextOffsetEnd = kConstructorOrBackPointerOrNativeContextOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=73&c=3
  static constexpr int kInstanceDescriptorsOffset = kConstructorOrBackPointerOrNativeContextOffsetEnd + 1;
  static constexpr int kInstanceDescriptorsOffsetEnd = kInstanceDescriptorsOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=74&c=3
  static constexpr int kDependentCodeOffset = kInstanceDescriptorsOffsetEnd + 1;
  static constexpr int kDependentCodeOffsetEnd = kDependentCodeOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=75&c=3
  static constexpr int kPrototypeValidityCellOffset = kDependentCodeOffsetEnd + 1;
  static constexpr int kPrototypeValidityCellOffsetEnd = kPrototypeValidityCellOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kPrototypeValidityCellOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kPrototypeValidityCellOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=76&c=3
  static constexpr int kTransitionsOrPrototypeInfoOffset = kPrototypeValidityCellOffsetEnd + 1;
  static constexpr int kTransitionsOrPrototypeInfoOffsetEnd = kTransitionsOrPrototypeInfoOffset + kTaggedSize - 1;
  static constexpr int kEndOfWeakFieldsOffset = kTransitionsOrPrototypeInfoOffsetEnd + 1;
  static constexpr int kHeaderSize = kTransitionsOrPrototypeInfoOffsetEnd + 1;
  static constexpr int kSize = kTransitionsOrPrototypeInfoOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=37&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 40);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=37&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedMap() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedMap, DAlias>::value,
        "class TorqueGeneratedMap should be used as direct base for Map.");
  }

 protected:
  inline explicit TorqueGeneratedMap(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedMap(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

