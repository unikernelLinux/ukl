class RegExpMatchInfo;
// Alias for HeapObject::IsRegExpMatchInfo() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=5&c=1
V8_EXPORT_PRIVATE bool IsRegExpMatchInfo_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=5&c=1
template <class D, class P>
class TorqueGeneratedRegExpMatchInfo : public P {
  static_assert(
      std::is_same<RegExpMatchInfo, D>::value,
      "Use this class as direct base for RegExpMatchInfo.");
  static_assert(
      std::is_same<FixedArray, P>::value,
      "Pass in FixedArray as second template parameter for TorqueGeneratedRegExpMatchInfo.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedRegExpMatchInfo<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=5&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=5&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(RegExpMatchInfo)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=5&c=1
  V8_EXPORT_PRIVATE void RegExpMatchInfoVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kHeaderSize = P::kHeaderSize;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=5&c=1
  V8_INLINE static constexpr int32_t SizeFor(int length) {
    int32_t size = kHeaderSize;
    size += length * 4;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=5&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor(this->length());
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedRegExpMatchInfo() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedRegExpMatchInfo, DAlias>::value,
        "class TorqueGeneratedRegExpMatchInfo should be used as direct base for RegExpMatchInfo.");
  }

 protected:
  inline explicit TorqueGeneratedRegExpMatchInfo(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedRegExpMatchInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

