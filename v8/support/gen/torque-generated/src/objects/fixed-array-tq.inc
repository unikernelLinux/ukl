class FixedArrayBase;
class FixedArray;
class WeakFixedArray;
class FixedDoubleArray;
class ByteArray;
class ArrayList;
class TemplateList;
class WeakArrayList;
// Alias for HeapObject::IsFixedArrayBase() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=5&c=1
V8_EXPORT_PRIVATE bool IsFixedArrayBase_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=5&c=1
template <class D, class P>
class TorqueGeneratedFixedArrayBase : public P {
  static_assert(
      std::is_same<FixedArrayBase, D>::value,
      "Use this class as direct base for FixedArrayBase.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedFixedArrayBase.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedFixedArrayBase<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=8&c=9
  inline int length() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=8&c=9
  inline void set_length(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=5&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=5&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=5&c=1
  V8_EXPORT_PRIVATE void FixedArrayBaseVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=8&c=9
  static constexpr int kLengthOffset = P::kHeaderSize;
  static constexpr int kLengthOffsetEnd = kLengthOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kLengthOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kLengthOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kLengthOffsetEnd + 1;
  static constexpr int kHeaderSize = kLengthOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedFixedArrayBase() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedFixedArrayBase, DAlias>::value,
        "class TorqueGeneratedFixedArrayBase should be used as direct base for FixedArrayBase.");
  }

 protected:
  inline explicit TorqueGeneratedFixedArrayBase(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedFixedArrayBase(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsFixedArray() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=11&c=1
V8_EXPORT_PRIVATE bool IsFixedArray_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=11&c=1
template <class D, class P>
class TorqueGeneratedFixedArray : public P {
  static_assert(
      std::is_same<FixedArray, D>::value,
      "Use this class as direct base for FixedArray.");
  static_assert(
      std::is_same<FixedArrayBase, P>::value,
      "Pass in FixedArrayBase as second template parameter for TorqueGeneratedFixedArray.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedFixedArray<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=13&c=3
  inline Object objects(int i) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=13&c=3
  inline Object objects(PtrComprCageBase cage_base, int i) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=13&c=3
  inline void set_objects(int i, Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=11&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=11&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(FixedArray)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=11&c=1
  V8_EXPORT_PRIVATE void FixedArrayVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kHeaderSize = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=13&c=3
  static constexpr int kObjectsOffset = P::kHeaderSize;
  static constexpr int kObjectsOffsetEnd = kObjectsOffset + 0 - 1;
  static constexpr int kEndOfStrongFieldsOffset = kObjectsOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kObjectsOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kObjectsOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=11&c=1
  V8_INLINE static constexpr int32_t SizeFor(int length) {
    int32_t size = kHeaderSize;
    size += length * 4;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=11&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor(this->length());
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedFixedArray() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedFixedArray, DAlias>::value,
        "class TorqueGeneratedFixedArray should be used as direct base for FixedArray.");
  }

 protected:
  inline explicit TorqueGeneratedFixedArray(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedFixedArray(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsWeakFixedArray() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=22&c=1
V8_EXPORT_PRIVATE bool IsWeakFixedArray_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=22&c=1
template <class D, class P>
class TorqueGeneratedWeakFixedArray : public P {
  static_assert(
      std::is_same<WeakFixedArray, D>::value,
      "Use this class as direct base for WeakFixedArray.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedWeakFixedArray.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWeakFixedArray<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=24&c=9
  inline int length() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=24&c=9
  inline void set_length(int value);

  // Torque type: MaybeObject
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=25&c=19
  inline MaybeObject objects(int i, RelaxedLoadTag) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=25&c=19
  inline MaybeObject objects(PtrComprCageBase cage_base, int i, RelaxedLoadTag) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=25&c=19
  inline void set_objects(int i, MaybeObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=22&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=22&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(WeakFixedArray)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=22&c=1
  V8_EXPORT_PRIVATE void WeakFixedArrayVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=24&c=9
  static constexpr int kLengthOffset = P::kHeaderSize;
  static constexpr int kLengthOffsetEnd = kLengthOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kLengthOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kLengthOffsetEnd + 1;
  static constexpr int kHeaderSize = kLengthOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=25&c=19
  static constexpr int kObjectsOffset = kLengthOffsetEnd + 1;
  static constexpr int kObjectsOffsetEnd = kObjectsOffset + 0 - 1;
  static constexpr int kEndOfWeakFieldsOffset = kObjectsOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=22&c=1
  V8_INLINE static constexpr int32_t SizeFor(int length) {
    int32_t size = kHeaderSize;
    size += length * 4;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=22&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor(this->length());
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWeakFixedArray() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWeakFixedArray, DAlias>::value,
        "class TorqueGeneratedWeakFixedArray should be used as direct base for WeakFixedArray.");
  }

 protected:
  inline explicit TorqueGeneratedWeakFixedArray(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWeakFixedArray(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsFixedDoubleArray() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=18&c=1
V8_EXPORT_PRIVATE bool IsFixedDoubleArray_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=18&c=1
template <class D, class P>
class TorqueGeneratedFixedDoubleArray : public P {
  static_assert(
      std::is_same<FixedDoubleArray, D>::value,
      "Use this class as direct base for FixedDoubleArray.");
  static_assert(
      std::is_same<FixedArrayBase, P>::value,
      "Pass in FixedArrayBase as second template parameter for TorqueGeneratedFixedDoubleArray.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedFixedDoubleArray<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=18&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=18&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(FixedDoubleArray)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=18&c=1
  V8_EXPORT_PRIVATE void FixedDoubleArrayVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kHeaderSize = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=19&c=3
  static constexpr int kFloatsOffset = P::kHeaderSize;
  static constexpr int kFloatsOffsetEnd = kFloatsOffset + 0 - 1;
  static constexpr int kStartOfWeakFieldsOffset = kFloatsOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kFloatsOffsetEnd + 1;
  static constexpr int kStartOfStrongFieldsOffset = kFloatsOffsetEnd + 1;
  static constexpr int kEndOfStrongFieldsOffset = kFloatsOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=18&c=1
  V8_INLINE static constexpr int32_t SizeFor(int length) {
    int32_t size = kHeaderSize;
    size += length * 8;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=18&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor(this->length());
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedFixedDoubleArray() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedFixedDoubleArray, DAlias>::value,
        "class TorqueGeneratedFixedDoubleArray should be used as direct base for FixedDoubleArray.");
  }

 protected:
  inline explicit TorqueGeneratedFixedDoubleArray(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedFixedDoubleArray(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsByteArray() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=1
V8_EXPORT_PRIVATE bool IsByteArray_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=1
template <class D, class P>
class TorqueGeneratedByteArray : public P {
  static_assert(
      std::is_same<ByteArray, D>::value,
      "Use this class as direct base for ByteArray.");
  static_assert(
      std::is_same<FixedArrayBase, P>::value,
      "Pass in FixedArrayBase as second template parameter for TorqueGeneratedByteArray.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedByteArray<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=49
  inline uint8_t bytes(int i) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=49
  inline void set_bytes(int i, uint8_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(ByteArray)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=1
  V8_EXPORT_PRIVATE void ByteArrayVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kHeaderSize = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=49
  static constexpr int kBytesOffset = P::kHeaderSize;
  static constexpr int kBytesOffsetEnd = kBytesOffset + 0 - 1;
  static constexpr int kStartOfWeakFieldsOffset = kBytesOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kBytesOffsetEnd + 1;
  static constexpr int kStartOfStrongFieldsOffset = kBytesOffsetEnd + 1;
  static constexpr int kEndOfStrongFieldsOffset = kBytesOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=1
  V8_INLINE static constexpr int32_t SizeFor(int length) {
    int32_t size = kHeaderSize;
    size += length * 1;
    size = OBJECT_POINTER_ALIGN(size);
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor(this->length());
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedByteArray() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedByteArray, DAlias>::value,
        "class TorqueGeneratedByteArray should be used as direct base for ByteArray.");
  }

 protected:
  inline explicit TorqueGeneratedByteArray(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedByteArray(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsArrayList() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=30&c=1
V8_EXPORT_PRIVATE bool IsArrayList_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=30&c=1
template <class D, class P>
class TorqueGeneratedArrayList : public P {
  static_assert(
      std::is_same<ArrayList, D>::value,
      "Use this class as direct base for ArrayList.");
  static_assert(
      std::is_same<FixedArray, P>::value,
      "Pass in FixedArray as second template parameter for TorqueGeneratedArrayList.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedArrayList<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=30&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=30&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(ArrayList)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=30&c=1
  V8_EXPORT_PRIVATE void ArrayListVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kHeaderSize = P::kHeaderSize;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=30&c=1
  V8_INLINE static constexpr int32_t SizeFor(int length) {
    int32_t size = kHeaderSize;
    size += length * 4;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=30&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor(this->length());
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedArrayList() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedArrayList, DAlias>::value,
        "class TorqueGeneratedArrayList should be used as direct base for ArrayList.");
  }

 protected:
  inline explicit TorqueGeneratedArrayList(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedArrayList(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsTemplateList() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=35&c=1
V8_EXPORT_PRIVATE bool IsTemplateList_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=35&c=1
template <class D, class P>
class TorqueGeneratedTemplateList : public P {
  static_assert(
      std::is_same<TemplateList, D>::value,
      "Use this class as direct base for TemplateList.");
  static_assert(
      std::is_same<FixedArray, P>::value,
      "Pass in FixedArray as second template parameter for TorqueGeneratedTemplateList.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedTemplateList<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=35&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=35&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(TemplateList)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=35&c=1
  V8_EXPORT_PRIVATE void TemplateListVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kHeaderSize = P::kHeaderSize;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=35&c=1
  V8_INLINE static constexpr int32_t SizeFor(int length) {
    int32_t size = kHeaderSize;
    size += length * 4;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=35&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor(this->length());
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedTemplateList() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedTemplateList, DAlias>::value,
        "class TorqueGeneratedTemplateList should be used as direct base for TemplateList.");
  }

 protected:
  inline explicit TorqueGeneratedTemplateList(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedTemplateList(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsWeakArrayList() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=40&c=1
V8_EXPORT_PRIVATE bool IsWeakArrayList_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=40&c=1
template <class D, class P>
class TorqueGeneratedWeakArrayList : public P {
  static_assert(
      std::is_same<WeakArrayList, D>::value,
      "Use this class as direct base for WeakArrayList.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedWeakArrayList.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWeakArrayList<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=42&c=9
  inline int capacity() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=42&c=9
  inline void set_capacity(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=43&c=3
  inline int length() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=43&c=3
  inline void set_length(int value);

  // Torque type: MaybeObject
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=44&c=19
  inline MaybeObject objects(int i, RelaxedLoadTag) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=44&c=19
  inline MaybeObject objects(PtrComprCageBase cage_base, int i, RelaxedLoadTag) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=44&c=19
  inline void set_objects(int i, MaybeObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=40&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=40&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(WeakArrayList)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=40&c=1
  V8_EXPORT_PRIVATE void WeakArrayListVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=42&c=9
  static constexpr int kCapacityOffset = P::kHeaderSize;
  static constexpr int kCapacityOffsetEnd = kCapacityOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=43&c=3
  static constexpr int kLengthOffset = kCapacityOffsetEnd + 1;
  static constexpr int kLengthOffsetEnd = kLengthOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kLengthOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kLengthOffsetEnd + 1;
  static constexpr int kHeaderSize = kLengthOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=44&c=19
  static constexpr int kObjectsOffset = kLengthOffsetEnd + 1;
  static constexpr int kObjectsOffsetEnd = kObjectsOffset + 0 - 1;
  static constexpr int kEndOfWeakFieldsOffset = kObjectsOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=40&c=1
  V8_INLINE static constexpr int32_t SizeFor(int capacity) {
    int32_t size = kHeaderSize;
    size += capacity * 4;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=40&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor(this->capacity());
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWeakArrayList() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWeakArrayList, DAlias>::value,
        "class TorqueGeneratedWeakArrayList should be used as direct base for WeakArrayList.");
  }

 protected:
  inline explicit TorqueGeneratedWeakArrayList(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWeakArrayList(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

