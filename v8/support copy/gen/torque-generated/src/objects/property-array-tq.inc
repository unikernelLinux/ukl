class PropertyArray;
// Alias for HeapObject::IsPropertyArray() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-array.tq?l=5&c=1
V8_EXPORT_PRIVATE bool IsPropertyArray_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-array.tq?l=5&c=1
template <class D, class P>
class TorqueGeneratedPropertyArray : public P {
  static_assert(
      std::is_same<PropertyArray, D>::value,
      "Use this class as direct base for PropertyArray.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedPropertyArray.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedPropertyArray<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-array.tq?l=5&c=49
  inline int length_and_hash() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-array.tq?l=5&c=49
  inline void set_length_and_hash(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-array.tq?l=5&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-array.tq?l=5&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(PropertyArray)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-array.tq?l=5&c=1
  V8_EXPORT_PRIVATE void PropertyArrayVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-array.tq?l=5&c=49
  static constexpr int kLengthAndHashOffset = P::kHeaderSize;
  static constexpr int kLengthAndHashOffsetEnd = kLengthAndHashOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kLengthAndHashOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kLengthAndHashOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kLengthAndHashOffsetEnd + 1;
  static constexpr int kHeaderSize = kLengthAndHashOffsetEnd + 1;
  static constexpr int kSize = kLengthAndHashOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-array.tq?l=5&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 8);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-array.tq?l=5&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedPropertyArray() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedPropertyArray, DAlias>::value,
        "class TorqueGeneratedPropertyArray should be used as direct base for PropertyArray.");
  }

 protected:
  inline explicit TorqueGeneratedPropertyArray(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedPropertyArray(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

