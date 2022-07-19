class JSNumberFormat;
// Alias for HeapObject::IsJSNumberFormat() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=7&c=1
V8_EXPORT_PRIVATE bool IsJSNumberFormat_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=7&c=1
template <class D, class P>
class TorqueGeneratedJSNumberFormat : public P {
  static_assert(
      std::is_same<JSNumberFormat, D>::value,
      "Use this class as direct base for JSNumberFormat.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSNumberFormat.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSNumberFormat<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=8&c=3
  inline String locale() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=8&c=3
  inline String locale(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=8&c=3
  inline void set_locale(String value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=9&c=3
  inline Foreign icu_number_formatter() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=9&c=3
  inline Foreign icu_number_formatter(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=9&c=3
  inline void set_icu_number_formatter(Foreign value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=11&c=3
  inline Foreign icu_number_range_formatter() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=11&c=3
  inline Foreign icu_number_range_formatter(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=11&c=3
  inline void set_icu_number_range_formatter(Foreign value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | class JSFunction)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=13&c=3
  inline HeapObject bound_format() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=13&c=3
  inline HeapObject bound_format(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=13&c=3
  inline void set_bound_format(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=7&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=7&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSNumberFormat)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=7&c=1
  V8_EXPORT_PRIVATE void JSNumberFormatVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=8&c=3
  static constexpr int kLocaleOffset = P::kHeaderSize;
  static constexpr int kLocaleOffsetEnd = kLocaleOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=9&c=3
  static constexpr int kIcuNumberFormatterOffset = kLocaleOffsetEnd + 1;
  static constexpr int kIcuNumberFormatterOffsetEnd = kIcuNumberFormatterOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=11&c=3
  static constexpr int kIcuNumberRangeFormatterOffset = kIcuNumberFormatterOffsetEnd + 1;
  static constexpr int kIcuNumberRangeFormatterOffsetEnd = kIcuNumberRangeFormatterOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=13&c=3
  static constexpr int kBoundFormatOffset = kIcuNumberRangeFormatterOffsetEnd + 1;
  static constexpr int kBoundFormatOffsetEnd = kBoundFormatOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kBoundFormatOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kBoundFormatOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kBoundFormatOffsetEnd + 1;
  static constexpr int kHeaderSize = kBoundFormatOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSNumberFormat() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSNumberFormat, DAlias>::value,
        "class TorqueGeneratedJSNumberFormat should be used as direct base for JSNumberFormat.");
  }

 protected:
  inline explicit TorqueGeneratedJSNumberFormat(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSNumberFormat(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

