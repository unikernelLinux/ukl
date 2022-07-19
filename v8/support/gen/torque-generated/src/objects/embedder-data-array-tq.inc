class EmbedderDataArray;
// Alias for HeapObject::IsEmbedderDataArray() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/embedder-data-array.tq?l=5&c=1
V8_EXPORT_PRIVATE bool IsEmbedderDataArray_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/embedder-data-array.tq?l=5&c=1
template <class D, class P>
class TorqueGeneratedEmbedderDataArray : public P {
  static_assert(
      std::is_same<EmbedderDataArray, D>::value,
      "Use this class as direct base for EmbedderDataArray.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedEmbedderDataArray.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedEmbedderDataArray<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/embedder-data-array.tq?l=7&c=3
  inline int length() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/embedder-data-array.tq?l=7&c=3
  inline void set_length(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/embedder-data-array.tq?l=5&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/embedder-data-array.tq?l=5&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(EmbedderDataArray)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/embedder-data-array.tq?l=5&c=1
  V8_EXPORT_PRIVATE void EmbedderDataArrayVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/embedder-data-array.tq?l=7&c=3
  static constexpr int kLengthOffset = P::kHeaderSize;
  static constexpr int kLengthOffsetEnd = kLengthOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kLengthOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kLengthOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kLengthOffsetEnd + 1;
  static constexpr int kHeaderSize = kLengthOffsetEnd + 1;
  static constexpr int kSize = kLengthOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/embedder-data-array.tq?l=5&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 8);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/embedder-data-array.tq?l=5&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedEmbedderDataArray() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedEmbedderDataArray, DAlias>::value,
        "class TorqueGeneratedEmbedderDataArray should be used as direct base for EmbedderDataArray.");
  }

 protected:
  inline explicit TorqueGeneratedEmbedderDataArray(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedEmbedderDataArray(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

