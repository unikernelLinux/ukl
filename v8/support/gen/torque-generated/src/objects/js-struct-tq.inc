class JSSharedStruct;
// Alias for HeapObject::IsJSSharedStruct() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-struct.tq?l=5&c=1
V8_EXPORT_PRIVATE bool IsJSSharedStruct_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-struct.tq?l=5&c=1
template <class D, class P>
class TorqueGeneratedJSSharedStruct : public P {
  static_assert(
      std::is_same<JSSharedStruct, D>::value,
      "Use this class as direct base for JSSharedStruct.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSSharedStruct.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSSharedStruct<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-struct.tq?l=5&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-struct.tq?l=5&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSSharedStruct)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-struct.tq?l=5&c=1
  V8_EXPORT_PRIVATE void JSSharedStructVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kHeaderSize = P::kHeaderSize;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSSharedStruct() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSSharedStruct, DAlias>::value,
        "class TorqueGeneratedJSSharedStruct should be used as direct base for JSSharedStruct.");
  }

 protected:
  inline explicit TorqueGeneratedJSSharedStruct(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSSharedStruct(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

