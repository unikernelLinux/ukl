class JSPluralRules;
// Alias for HeapObject::IsJSPluralRules() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=12&c=1
V8_EXPORT_PRIVATE bool IsJSPluralRules_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=12&c=1
template <class D, class P>
class TorqueGeneratedJSPluralRules : public P {
  static_assert(
      std::is_same<JSPluralRules, D>::value,
      "Use this class as direct base for JSPluralRules.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSPluralRules.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSPluralRules<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=13&c=3
  inline String locale() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=13&c=3
  inline String locale(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=13&c=3
  inline void set_locale(String value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=14&c=3
  inline int flags() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=14&c=3
  inline void set_flags(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=15&c=3
  inline Foreign icu_plural_rules() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=15&c=3
  inline Foreign icu_plural_rules(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=15&c=3
  inline void set_icu_plural_rules(Foreign value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=16&c=3
  inline Foreign icu_number_formatter() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=16&c=3
  inline Foreign icu_number_formatter(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=16&c=3
  inline void set_icu_number_formatter(Foreign value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=18&c=3
  inline Foreign icu_number_range_formatter() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=18&c=3
  inline Foreign icu_number_range_formatter(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=18&c=3
  inline void set_icu_number_range_formatter(Foreign value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=12&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=12&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSPluralRules)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=12&c=1
  V8_EXPORT_PRIVATE void JSPluralRulesVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=13&c=3
  static constexpr int kLocaleOffset = P::kHeaderSize;
  static constexpr int kLocaleOffsetEnd = kLocaleOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=14&c=3
  static constexpr int kFlagsOffset = kLocaleOffsetEnd + 1;
  static constexpr int kFlagsOffsetEnd = kFlagsOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=15&c=3
  static constexpr int kIcuPluralRulesOffset = kFlagsOffsetEnd + 1;
  static constexpr int kIcuPluralRulesOffsetEnd = kIcuPluralRulesOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=16&c=3
  static constexpr int kIcuNumberFormatterOffset = kIcuPluralRulesOffsetEnd + 1;
  static constexpr int kIcuNumberFormatterOffsetEnd = kIcuNumberFormatterOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=18&c=3
  static constexpr int kIcuNumberRangeFormatterOffset = kIcuNumberFormatterOffsetEnd + 1;
  static constexpr int kIcuNumberRangeFormatterOffsetEnd = kIcuNumberRangeFormatterOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kIcuNumberRangeFormatterOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kIcuNumberRangeFormatterOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kIcuNumberRangeFormatterOffsetEnd + 1;
  static constexpr int kHeaderSize = kIcuNumberRangeFormatterOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSPluralRules() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSPluralRules, DAlias>::value,
        "class TorqueGeneratedJSPluralRules should be used as direct base for JSPluralRules.");
  }

 protected:
  inline explicit TorqueGeneratedJSPluralRules(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSPluralRules(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

