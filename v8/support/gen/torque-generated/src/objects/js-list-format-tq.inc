class JSListFormat;
// Alias for HeapObject::IsJSListFormat() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=14&c=1
V8_EXPORT_PRIVATE bool IsJSListFormat_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=14&c=1
template <class D, class P>
class TorqueGeneratedJSListFormat : public P {
  static_assert(
      std::is_same<JSListFormat, D>::value,
      "Use this class as direct base for JSListFormat.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSListFormat.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSListFormat<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=15&c=3
  inline String locale() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=15&c=3
  inline String locale(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=15&c=3
  inline void set_locale(String value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=16&c=3
  inline Foreign icu_formatter() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=16&c=3
  inline Foreign icu_formatter(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=16&c=3
  inline void set_icu_formatter(Foreign value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=17&c=3
  inline int flags() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=17&c=3
  inline void set_flags(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=14&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=14&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSListFormat)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=14&c=1
  V8_EXPORT_PRIVATE void JSListFormatVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=15&c=3
  static constexpr int kLocaleOffset = P::kHeaderSize;
  static constexpr int kLocaleOffsetEnd = kLocaleOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=16&c=3
  static constexpr int kIcuFormatterOffset = kLocaleOffsetEnd + 1;
  static constexpr int kIcuFormatterOffsetEnd = kIcuFormatterOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=17&c=3
  static constexpr int kFlagsOffset = kIcuFormatterOffsetEnd + 1;
  static constexpr int kFlagsOffsetEnd = kFlagsOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kFlagsOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kFlagsOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kFlagsOffsetEnd + 1;
  static constexpr int kHeaderSize = kFlagsOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSListFormat() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSListFormat, DAlias>::value,
        "class TorqueGeneratedJSListFormat should be used as direct base for JSListFormat.");
  }

 protected:
  inline explicit TorqueGeneratedJSListFormat(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSListFormat(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

