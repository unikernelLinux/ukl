class JSCollator;
// Alias for HeapObject::IsJSCollator() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=7&c=1
V8_EXPORT_PRIVATE bool IsJSCollator_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=7&c=1
template <class D, class P>
class TorqueGeneratedJSCollator : public P {
  static_assert(
      std::is_same<JSCollator, D>::value,
      "Use this class as direct base for JSCollator.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSCollator.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSCollator<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=8&c=3
  inline Foreign icu_collator() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=8&c=3
  inline Foreign icu_collator(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=8&c=3
  inline void set_icu_collator(Foreign value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | class JSFunction)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=9&c=3
  inline HeapObject bound_compare() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=9&c=3
  inline HeapObject bound_compare(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=9&c=3
  inline void set_bound_compare(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=10&c=3
  inline String locale() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=10&c=3
  inline String locale(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=10&c=3
  inline void set_locale(String value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=7&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=7&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSCollator)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=7&c=1
  V8_EXPORT_PRIVATE void JSCollatorVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=8&c=3
  static constexpr int kIcuCollatorOffset = P::kHeaderSize;
  static constexpr int kIcuCollatorOffsetEnd = kIcuCollatorOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=9&c=3
  static constexpr int kBoundCompareOffset = kIcuCollatorOffsetEnd + 1;
  static constexpr int kBoundCompareOffsetEnd = kBoundCompareOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=10&c=3
  static constexpr int kLocaleOffset = kBoundCompareOffsetEnd + 1;
  static constexpr int kLocaleOffsetEnd = kLocaleOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kLocaleOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kLocaleOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kLocaleOffsetEnd + 1;
  static constexpr int kHeaderSize = kLocaleOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSCollator() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSCollator, DAlias>::value,
        "class TorqueGeneratedJSCollator should be used as direct base for JSCollator.");
  }

 protected:
  inline explicit TorqueGeneratedJSCollator(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSCollator(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

