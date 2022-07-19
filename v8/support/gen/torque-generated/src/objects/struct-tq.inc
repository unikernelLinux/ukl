class Struct;
class ClassPositions;
class AccessorPair;
class Tuple2;
// Alias for HeapObject::IsStruct() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=5&c=1
V8_EXPORT_PRIVATE bool IsStruct_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=5&c=1
template <class D, class P>
class TorqueGeneratedStruct : public P {
  static_assert(
      std::is_same<Struct, D>::value,
      "Use this class as direct base for Struct.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedStruct.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedStruct<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=5&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=5&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=5&c=1
  V8_EXPORT_PRIVATE void StructVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kHeaderSize = P::kHeaderSize;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedStruct() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedStruct, DAlias>::value,
        "class TorqueGeneratedStruct should be used as direct base for Struct.");
  }

 protected:
  inline explicit TorqueGeneratedStruct(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedStruct(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsClassPositions() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=14&c=1
V8_EXPORT_PRIVATE bool IsClassPositions_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=14&c=1
template <class D, class P>
class TorqueGeneratedClassPositions : public P {
  static_assert(
      std::is_same<ClassPositions, D>::value,
      "Use this class as direct base for ClassPositions.");
  static_assert(
      std::is_same<Struct, P>::value,
      "Pass in Struct as second template parameter for TorqueGeneratedClassPositions.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedClassPositions<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=15&c=3
  inline int start() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=15&c=3
  inline void set_start(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=16&c=3
  inline int end() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=16&c=3
  inline void set_end(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=14&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=14&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(ClassPositions)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=14&c=1
  V8_EXPORT_PRIVATE void ClassPositionsVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=15&c=3
  static constexpr int kStartOffset = P::kHeaderSize;
  static constexpr int kStartOffsetEnd = kStartOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=16&c=3
  static constexpr int kEndOffset = kStartOffsetEnd + 1;
  static constexpr int kEndOffsetEnd = kEndOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kEndOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kEndOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kEndOffsetEnd + 1;
  static constexpr int kHeaderSize = kEndOffsetEnd + 1;
  static constexpr int kSize = kEndOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=14&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 12);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=14&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedClassPositions() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedClassPositions, DAlias>::value,
        "class TorqueGeneratedClassPositions should be used as direct base for ClassPositions.");
  }

 protected:
  inline explicit TorqueGeneratedClassPositions(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedClassPositions(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsAccessorPair() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=19&c=1
V8_EXPORT_PRIVATE bool IsAccessorPair_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=19&c=1
template <class D, class P>
class TorqueGeneratedAccessorPair : public P {
  static_assert(
      std::is_same<AccessorPair, D>::value,
      "Use this class as direct base for AccessorPair.");
  static_assert(
      std::is_same<Struct, P>::value,
      "Pass in Struct as second template parameter for TorqueGeneratedAccessorPair.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedAccessorPair<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=20&c=3
  inline Object getter() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=20&c=3
  inline Object getter(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=20&c=3
  inline void set_getter(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=21&c=3
  inline Object setter() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=21&c=3
  inline Object setter(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=21&c=3
  inline void set_setter(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=19&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=19&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(AccessorPair)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=19&c=1
  V8_EXPORT_PRIVATE void AccessorPairVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=20&c=3
  static constexpr int kGetterOffset = P::kHeaderSize;
  static constexpr int kGetterOffsetEnd = kGetterOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=21&c=3
  static constexpr int kSetterOffset = kGetterOffsetEnd + 1;
  static constexpr int kSetterOffsetEnd = kSetterOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kSetterOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kSetterOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kSetterOffsetEnd + 1;
  static constexpr int kHeaderSize = kSetterOffsetEnd + 1;
  static constexpr int kSize = kSetterOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=19&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 12);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=19&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedAccessorPair() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedAccessorPair, DAlias>::value,
        "class TorqueGeneratedAccessorPair should be used as direct base for AccessorPair.");
  }

 protected:
  inline explicit TorqueGeneratedAccessorPair(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedAccessorPair(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsTuple2() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=9&c=1
V8_EXPORT_PRIVATE bool IsTuple2_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=9&c=1
template <class D, class P>
class TorqueGeneratedTuple2 : public P {
  static_assert(
      std::is_same<Tuple2, D>::value,
      "Use this class as direct base for Tuple2.");
  static_assert(
      std::is_same<Struct, P>::value,
      "Pass in Struct as second template parameter for TorqueGeneratedTuple2.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedTuple2<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=10&c=3
  inline Object value1() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=10&c=3
  inline Object value1(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=10&c=3
  inline void set_value1(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=11&c=3
  inline Object value2() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=11&c=3
  inline Object value2(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=11&c=3
  inline void set_value2(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=9&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=9&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(Tuple2)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=9&c=1
  V8_EXPORT_PRIVATE void Tuple2Verify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=10&c=3
  static constexpr int kValue1Offset = P::kHeaderSize;
  static constexpr int kValue1OffsetEnd = kValue1Offset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=11&c=3
  static constexpr int kValue2Offset = kValue1OffsetEnd + 1;
  static constexpr int kValue2OffsetEnd = kValue2Offset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kValue2OffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kValue2OffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kValue2OffsetEnd + 1;
  static constexpr int kHeaderSize = kValue2OffsetEnd + 1;
  static constexpr int kSize = kValue2OffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=9&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 12);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=9&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedTuple2() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedTuple2, DAlias>::value,
        "class TorqueGeneratedTuple2 should be used as direct base for Tuple2.");
  }

 protected:
  inline explicit TorqueGeneratedTuple2(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedTuple2(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

