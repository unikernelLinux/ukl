class TurbofanType;
class TurbofanBitsetType;
class TurbofanUnionType;
class TurbofanRangeType;
class TurbofanHeapConstantType;
class TurbofanOtherNumberConstantType;
// Alias for HeapObject::IsTurbofanType() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=12&c=1
V8_EXPORT_PRIVATE bool IsTurbofanType_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=12&c=1
template <class D, class P>
class TorqueGeneratedTurbofanType : public P {
  static_assert(
      std::is_same<TurbofanType, D>::value,
      "Use this class as direct base for TurbofanType.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedTurbofanType.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedTurbofanType<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=12&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=12&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(TurbofanType)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=12&c=1
  V8_EXPORT_PRIVATE void TurbofanTypeVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kHeaderSize = P::kHeaderSize;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedTurbofanType() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedTurbofanType, DAlias>::value,
        "class TorqueGeneratedTurbofanType should be used as direct base for TurbofanType.");
  }

 protected:
  inline explicit TorqueGeneratedTurbofanType(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedTurbofanType(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

class TurbofanType : public TorqueGeneratedTurbofanType<TurbofanType, HeapObject> {
 public:
  TQ_OBJECT_CONSTRUCTORS(TurbofanType)
};

// Alias for HeapObject::IsTurbofanBitsetType() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=59&c=1
V8_EXPORT_PRIVATE bool IsTurbofanBitsetType_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=59&c=1
template <class D, class P>
class TorqueGeneratedTurbofanBitsetType : public P {
  static_assert(
      std::is_same<TurbofanBitsetType, D>::value,
      "Use this class as direct base for TurbofanBitsetType.");
  static_assert(
      std::is_same<TurbofanType, P>::value,
      "Pass in TurbofanType as second template parameter for TorqueGeneratedTurbofanBitsetType.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedTurbofanBitsetType<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=61&c=3
  inline uint32_t bitset_low() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=61&c=3
  inline void set_bitset_low(uint32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=62&c=3
  inline uint32_t bitset_high() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=62&c=3
  inline void set_bitset_high(uint32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=59&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=59&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(TurbofanBitsetType)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=59&c=1
  V8_EXPORT_PRIVATE void TurbofanBitsetTypeVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=61&c=3
  static constexpr int kBitsetLowOffset = P::kHeaderSize;
  static constexpr int kBitsetLowOffsetEnd = kBitsetLowOffset + kInt32Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=62&c=3
  static constexpr int kBitsetHighOffset = kBitsetLowOffsetEnd + 1;
  static constexpr int kBitsetHighOffsetEnd = kBitsetHighOffset + kInt32Size - 1;
  static constexpr int kStartOfWeakFieldsOffset = kBitsetHighOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kBitsetHighOffsetEnd + 1;
  static constexpr int kStartOfStrongFieldsOffset = kBitsetHighOffsetEnd + 1;
  static constexpr int kEndOfStrongFieldsOffset = kBitsetHighOffsetEnd + 1;
  static constexpr int kHeaderSize = kBitsetHighOffsetEnd + 1;
  static constexpr int kSize = kBitsetHighOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=59&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 12);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=59&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedTurbofanBitsetType() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedTurbofanBitsetType, DAlias>::value,
        "class TorqueGeneratedTurbofanBitsetType should be used as direct base for TurbofanBitsetType.");
  }

 protected:
  inline explicit TorqueGeneratedTurbofanBitsetType(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedTurbofanBitsetType(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

class TurbofanBitsetType : public TorqueGeneratedTurbofanBitsetType<TurbofanBitsetType, TurbofanType> {
 public:
  class BodyDescriptor;
  TQ_OBJECT_CONSTRUCTORS(TurbofanBitsetType)
};

// Alias for HeapObject::IsTurbofanUnionType() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=65&c=1
V8_EXPORT_PRIVATE bool IsTurbofanUnionType_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=65&c=1
template <class D, class P>
class TorqueGeneratedTurbofanUnionType : public P {
  static_assert(
      std::is_same<TurbofanUnionType, D>::value,
      "Use this class as direct base for TurbofanUnionType.");
  static_assert(
      std::is_same<TurbofanType, P>::value,
      "Pass in TurbofanType as second template parameter for TorqueGeneratedTurbofanUnionType.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedTurbofanUnionType<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=67&c=3
  inline TurbofanType type1() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=67&c=3
  inline TurbofanType type1(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=67&c=3
  inline void set_type1(TurbofanType value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=68&c=3
  inline TurbofanType type2() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=68&c=3
  inline TurbofanType type2(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=68&c=3
  inline void set_type2(TurbofanType value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=65&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=65&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(TurbofanUnionType)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=65&c=1
  V8_EXPORT_PRIVATE void TurbofanUnionTypeVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=67&c=3
  static constexpr int kType1Offset = P::kHeaderSize;
  static constexpr int kType1OffsetEnd = kType1Offset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=68&c=3
  static constexpr int kType2Offset = kType1OffsetEnd + 1;
  static constexpr int kType2OffsetEnd = kType2Offset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kType2OffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kType2OffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kType2OffsetEnd + 1;
  static constexpr int kHeaderSize = kType2OffsetEnd + 1;
  static constexpr int kSize = kType2OffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=65&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 12);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=65&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedTurbofanUnionType() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedTurbofanUnionType, DAlias>::value,
        "class TorqueGeneratedTurbofanUnionType should be used as direct base for TurbofanUnionType.");
  }

 protected:
  inline explicit TorqueGeneratedTurbofanUnionType(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedTurbofanUnionType(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

class TurbofanUnionType : public TorqueGeneratedTurbofanUnionType<TurbofanUnionType, TurbofanType> {
 public:
  class BodyDescriptor;
  TQ_OBJECT_CONSTRUCTORS(TurbofanUnionType)
};

// Alias for HeapObject::IsTurbofanRangeType() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=71&c=1
V8_EXPORT_PRIVATE bool IsTurbofanRangeType_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=71&c=1
template <class D, class P>
class TorqueGeneratedTurbofanRangeType : public P {
  static_assert(
      std::is_same<TurbofanRangeType, D>::value,
      "Use this class as direct base for TurbofanRangeType.");
  static_assert(
      std::is_same<TurbofanType, P>::value,
      "Pass in TurbofanType as second template parameter for TorqueGeneratedTurbofanRangeType.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedTurbofanRangeType<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=73&c=3
  inline double min() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=73&c=3
  inline void set_min(double value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=74&c=3
  inline double max() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=74&c=3
  inline void set_max(double value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=71&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=71&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(TurbofanRangeType)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=71&c=1
  V8_EXPORT_PRIVATE void TurbofanRangeTypeVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=73&c=3
  static constexpr int kMinOffset = P::kHeaderSize;
  static constexpr int kMinOffsetEnd = kMinOffset + kDoubleSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=74&c=3
  static constexpr int kMaxOffset = kMinOffsetEnd + 1;
  static constexpr int kMaxOffsetEnd = kMaxOffset + kDoubleSize - 1;
  static constexpr int kStartOfWeakFieldsOffset = kMaxOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kMaxOffsetEnd + 1;
  static constexpr int kStartOfStrongFieldsOffset = kMaxOffsetEnd + 1;
  static constexpr int kEndOfStrongFieldsOffset = kMaxOffsetEnd + 1;
  static constexpr int kHeaderSize = kMaxOffsetEnd + 1;
  static constexpr int kSize = kMaxOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=71&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 20);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=71&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedTurbofanRangeType() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedTurbofanRangeType, DAlias>::value,
        "class TorqueGeneratedTurbofanRangeType should be used as direct base for TurbofanRangeType.");
  }

 protected:
  inline explicit TorqueGeneratedTurbofanRangeType(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedTurbofanRangeType(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

class TurbofanRangeType : public TorqueGeneratedTurbofanRangeType<TurbofanRangeType, TurbofanType> {
 public:
  class BodyDescriptor;
  TQ_OBJECT_CONSTRUCTORS(TurbofanRangeType)
};

// Alias for HeapObject::IsTurbofanHeapConstantType() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=77&c=1
V8_EXPORT_PRIVATE bool IsTurbofanHeapConstantType_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=77&c=1
template <class D, class P>
class TorqueGeneratedTurbofanHeapConstantType : public P {
  static_assert(
      std::is_same<TurbofanHeapConstantType, D>::value,
      "Use this class as direct base for TurbofanHeapConstantType.");
  static_assert(
      std::is_same<TurbofanType, P>::value,
      "Pass in TurbofanType as second template parameter for TorqueGeneratedTurbofanHeapConstantType.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedTurbofanHeapConstantType<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=79&c=3
  inline HeapObject constant() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=79&c=3
  inline HeapObject constant(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=79&c=3
  inline void set_constant(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=77&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=77&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(TurbofanHeapConstantType)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=77&c=1
  V8_EXPORT_PRIVATE void TurbofanHeapConstantTypeVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=79&c=3
  static constexpr int kConstantOffset = P::kHeaderSize;
  static constexpr int kConstantOffsetEnd = kConstantOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kConstantOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kConstantOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kConstantOffsetEnd + 1;
  static constexpr int kHeaderSize = kConstantOffsetEnd + 1;
  static constexpr int kSize = kConstantOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=77&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 8);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=77&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedTurbofanHeapConstantType() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedTurbofanHeapConstantType, DAlias>::value,
        "class TorqueGeneratedTurbofanHeapConstantType should be used as direct base for TurbofanHeapConstantType.");
  }

 protected:
  inline explicit TorqueGeneratedTurbofanHeapConstantType(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedTurbofanHeapConstantType(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

class TurbofanHeapConstantType : public TorqueGeneratedTurbofanHeapConstantType<TurbofanHeapConstantType, TurbofanType> {
 public:
  class BodyDescriptor;
  TQ_OBJECT_CONSTRUCTORS(TurbofanHeapConstantType)
};

// Alias for HeapObject::IsTurbofanOtherNumberConstantType() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=82&c=1
V8_EXPORT_PRIVATE bool IsTurbofanOtherNumberConstantType_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=82&c=1
template <class D, class P>
class TorqueGeneratedTurbofanOtherNumberConstantType : public P {
  static_assert(
      std::is_same<TurbofanOtherNumberConstantType, D>::value,
      "Use this class as direct base for TurbofanOtherNumberConstantType.");
  static_assert(
      std::is_same<TurbofanType, P>::value,
      "Pass in TurbofanType as second template parameter for TorqueGeneratedTurbofanOtherNumberConstantType.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedTurbofanOtherNumberConstantType<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=84&c=3
  inline double constant() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=84&c=3
  inline void set_constant(double value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=82&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=82&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(TurbofanOtherNumberConstantType)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=82&c=1
  V8_EXPORT_PRIVATE void TurbofanOtherNumberConstantTypeVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=84&c=3
  static constexpr int kConstantOffset = P::kHeaderSize;
  static constexpr int kConstantOffsetEnd = kConstantOffset + kDoubleSize - 1;
  static constexpr int kStartOfWeakFieldsOffset = kConstantOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kConstantOffsetEnd + 1;
  static constexpr int kStartOfStrongFieldsOffset = kConstantOffsetEnd + 1;
  static constexpr int kEndOfStrongFieldsOffset = kConstantOffsetEnd + 1;
  static constexpr int kHeaderSize = kConstantOffsetEnd + 1;
  static constexpr int kSize = kConstantOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=82&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 12);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=82&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedTurbofanOtherNumberConstantType() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedTurbofanOtherNumberConstantType, DAlias>::value,
        "class TorqueGeneratedTurbofanOtherNumberConstantType should be used as direct base for TurbofanOtherNumberConstantType.");
  }

 protected:
  inline explicit TorqueGeneratedTurbofanOtherNumberConstantType(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedTurbofanOtherNumberConstantType(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

class TurbofanOtherNumberConstantType : public TorqueGeneratedTurbofanOtherNumberConstantType<TurbofanOtherNumberConstantType, TurbofanType> {
 public:
  class BodyDescriptor;
  TQ_OBJECT_CONSTRUCTORS(TurbofanOtherNumberConstantType)
};

