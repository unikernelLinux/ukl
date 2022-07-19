class JSDisplayNames;
// Alias for HeapObject::IsJSDisplayNames() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=18&c=1
V8_EXPORT_PRIVATE bool IsJSDisplayNames_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=18&c=1
template <class D, class P>
class TorqueGeneratedJSDisplayNames : public P {
  static_assert(
      std::is_same<JSDisplayNames, D>::value,
      "Use this class as direct base for JSDisplayNames.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSDisplayNames.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSDisplayNames<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=19&c=3
  inline Foreign internal() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=19&c=3
  inline Foreign internal(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=19&c=3
  inline void set_internal(Foreign value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=20&c=3
  inline int flags() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=20&c=3
  inline void set_flags(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=18&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=18&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSDisplayNames)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=18&c=1
  V8_EXPORT_PRIVATE void JSDisplayNamesVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=19&c=3
  static constexpr int kInternalOffset = P::kHeaderSize;
  static constexpr int kInternalOffsetEnd = kInternalOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=20&c=3
  static constexpr int kFlagsOffset = kInternalOffsetEnd + 1;
  static constexpr int kFlagsOffsetEnd = kFlagsOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kFlagsOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kFlagsOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kFlagsOffsetEnd + 1;
  static constexpr int kHeaderSize = kFlagsOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSDisplayNames() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSDisplayNames, DAlias>::value,
        "class TorqueGeneratedJSDisplayNames should be used as direct base for JSDisplayNames.");
  }

 protected:
  inline explicit TorqueGeneratedJSDisplayNames(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSDisplayNames(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

