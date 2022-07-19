class JSDateTimeFormat;
// Alias for HeapObject::IsJSDateTimeFormat() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=23&c=1
V8_EXPORT_PRIVATE bool IsJSDateTimeFormat_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=23&c=1
template <class D, class P>
class TorqueGeneratedJSDateTimeFormat : public P {
  static_assert(
      std::is_same<JSDateTimeFormat, D>::value,
      "Use this class as direct base for JSDateTimeFormat.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSDateTimeFormat.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSDateTimeFormat<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=24&c=3
  inline String locale() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=24&c=3
  inline String locale(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=24&c=3
  inline void set_locale(String value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=25&c=3
  inline Foreign icu_locale() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=25&c=3
  inline Foreign icu_locale(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=25&c=3
  inline void set_icu_locale(Foreign value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=26&c=3
  inline Foreign icu_simple_date_format() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=26&c=3
  inline Foreign icu_simple_date_format(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=26&c=3
  inline void set_icu_simple_date_format(Foreign value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=27&c=3
  inline Foreign icu_date_interval_format() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=27&c=3
  inline Foreign icu_date_interval_format(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=27&c=3
  inline void set_icu_date_interval_format(Foreign value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | class JSFunction)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=28&c=3
  inline HeapObject bound_format() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=28&c=3
  inline HeapObject bound_format(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=28&c=3
  inline void set_bound_format(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=29&c=3
  inline int flags() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=29&c=3
  inline void set_flags(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=23&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=23&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSDateTimeFormat)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=23&c=1
  V8_EXPORT_PRIVATE void JSDateTimeFormatVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=24&c=3
  static constexpr int kLocaleOffset = P::kHeaderSize;
  static constexpr int kLocaleOffsetEnd = kLocaleOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=25&c=3
  static constexpr int kIcuLocaleOffset = kLocaleOffsetEnd + 1;
  static constexpr int kIcuLocaleOffsetEnd = kIcuLocaleOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=26&c=3
  static constexpr int kIcuSimpleDateFormatOffset = kIcuLocaleOffsetEnd + 1;
  static constexpr int kIcuSimpleDateFormatOffsetEnd = kIcuSimpleDateFormatOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=27&c=3
  static constexpr int kIcuDateIntervalFormatOffset = kIcuSimpleDateFormatOffsetEnd + 1;
  static constexpr int kIcuDateIntervalFormatOffsetEnd = kIcuDateIntervalFormatOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=28&c=3
  static constexpr int kBoundFormatOffset = kIcuDateIntervalFormatOffsetEnd + 1;
  static constexpr int kBoundFormatOffsetEnd = kBoundFormatOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=29&c=3
  static constexpr int kFlagsOffset = kBoundFormatOffsetEnd + 1;
  static constexpr int kFlagsOffsetEnd = kFlagsOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kFlagsOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kFlagsOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kFlagsOffsetEnd + 1;
  static constexpr int kHeaderSize = kFlagsOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSDateTimeFormat() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSDateTimeFormat, DAlias>::value,
        "class TorqueGeneratedJSDateTimeFormat should be used as direct base for JSDateTimeFormat.");
  }

 protected:
  inline explicit TorqueGeneratedJSDateTimeFormat(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSDateTimeFormat(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

