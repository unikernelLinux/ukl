class Foreign;
// Alias for HeapObject::IsForeign() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/foreign.tq?l=5&c=1
V8_EXPORT_PRIVATE bool IsForeign_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/foreign.tq?l=5&c=1
template <class D, class P>
class TorqueGeneratedForeign : public P {
  static_assert(
      std::is_same<Foreign, D>::value,
      "Use this class as direct base for Foreign.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedForeign.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedForeign<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/foreign.tq?l=5&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/foreign.tq?l=5&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(Foreign)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/foreign.tq?l=5&c=1
  V8_EXPORT_PRIVATE void ForeignVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/foreign.tq?l=7&c=3
  static constexpr int kForeignAddressOffset = P::kHeaderSize;
  static constexpr int kForeignAddressOffsetEnd = kForeignAddressOffset + kExternalPointerSize - 1;
  static constexpr int kStartOfWeakFieldsOffset = kForeignAddressOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kForeignAddressOffsetEnd + 1;
  static constexpr int kStartOfStrongFieldsOffset = kForeignAddressOffsetEnd + 1;
  static constexpr int kEndOfStrongFieldsOffset = kForeignAddressOffsetEnd + 1;
  static constexpr int kHeaderSize = kForeignAddressOffsetEnd + 1;
  static constexpr int kSize = kForeignAddressOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/foreign.tq?l=5&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 12);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/foreign.tq?l=5&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedForeign() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedForeign, DAlias>::value,
        "class TorqueGeneratedForeign should be used as direct base for Foreign.");
  }

 protected:
  inline explicit TorqueGeneratedForeign(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedForeign(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

