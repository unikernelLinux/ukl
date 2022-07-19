class JSSegments;
// Alias for HeapObject::IsJSSegments() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=11&c=1
V8_EXPORT_PRIVATE bool IsJSSegments_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=11&c=1
template <class D, class P>
class TorqueGeneratedJSSegments : public P {
  static_assert(
      std::is_same<JSSegments, D>::value,
      "Use this class as direct base for JSSegments.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSSegments.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSSegments<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=12&c=3
  inline Foreign icu_break_iterator() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=12&c=3
  inline Foreign icu_break_iterator(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=12&c=3
  inline void set_icu_break_iterator(Foreign value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=13&c=3
  inline Foreign unicode_string() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=13&c=3
  inline Foreign unicode_string(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=13&c=3
  inline void set_unicode_string(Foreign value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=14&c=3
  inline int flags() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=14&c=3
  inline void set_flags(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=11&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=11&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSSegments)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=11&c=1
  V8_EXPORT_PRIVATE void JSSegmentsVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=12&c=3
  static constexpr int kIcuBreakIteratorOffset = P::kHeaderSize;
  static constexpr int kIcuBreakIteratorOffsetEnd = kIcuBreakIteratorOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=13&c=3
  static constexpr int kUnicodeStringOffset = kIcuBreakIteratorOffsetEnd + 1;
  static constexpr int kUnicodeStringOffsetEnd = kUnicodeStringOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=14&c=3
  static constexpr int kFlagsOffset = kUnicodeStringOffsetEnd + 1;
  static constexpr int kFlagsOffsetEnd = kFlagsOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kFlagsOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kFlagsOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kFlagsOffsetEnd + 1;
  static constexpr int kHeaderSize = kFlagsOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSSegments() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSSegments, DAlias>::value,
        "class TorqueGeneratedJSSegments should be used as direct base for JSSegments.");
  }

 protected:
  inline explicit TorqueGeneratedJSSegments(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSSegments(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

