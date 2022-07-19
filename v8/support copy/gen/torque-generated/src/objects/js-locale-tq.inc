class JSLocale;
// Alias for HeapObject::IsJSLocale() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-locale.tq?l=7&c=1
V8_EXPORT_PRIVATE bool IsJSLocale_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-locale.tq?l=7&c=1
template <class D, class P>
class TorqueGeneratedJSLocale : public P {
  static_assert(
      std::is_same<JSLocale, D>::value,
      "Use this class as direct base for JSLocale.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSLocale.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSLocale<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-locale.tq?l=8&c=3
  inline Foreign icu_locale() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-locale.tq?l=8&c=3
  inline Foreign icu_locale(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-locale.tq?l=8&c=3
  inline void set_icu_locale(Foreign value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-locale.tq?l=7&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-locale.tq?l=7&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSLocale)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-locale.tq?l=7&c=1
  V8_EXPORT_PRIVATE void JSLocaleVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-locale.tq?l=8&c=3
  static constexpr int kIcuLocaleOffset = P::kHeaderSize;
  static constexpr int kIcuLocaleOffsetEnd = kIcuLocaleOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kIcuLocaleOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kIcuLocaleOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kIcuLocaleOffsetEnd + 1;
  static constexpr int kHeaderSize = kIcuLocaleOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSLocale() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSLocale, DAlias>::value,
        "class TorqueGeneratedJSLocale should be used as direct base for JSLocale.");
  }

 protected:
  inline explicit TorqueGeneratedJSLocale(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSLocale(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

