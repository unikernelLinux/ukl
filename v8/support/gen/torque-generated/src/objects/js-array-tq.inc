class JSArrayIterator;
class JSArray;
// Alias for HeapObject::IsJSArrayIterator() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=7&c=1
V8_EXPORT_PRIVATE bool IsJSArrayIterator_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=7&c=1
template <class D, class P>
class TorqueGeneratedJSArrayIterator : public P {
  static_assert(
      std::is_same<JSArrayIterator, D>::value,
      "Use this class as direct base for JSArrayIterator.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSArrayIterator.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSArrayIterator<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=8&c=3
  inline JSReceiver iterated_object() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=8&c=3
  inline JSReceiver iterated_object(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=8&c=3
  inline void set_iterated_object(JSReceiver value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: Number
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=33&c=3
  inline Object next_index() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=33&c=3
  inline Object next_index(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=33&c=3
  inline void set_next_index(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=35&c=3
  inline int kind() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=35&c=3
  inline void set_kind(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=7&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=7&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSArrayIterator)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=7&c=1
  V8_EXPORT_PRIVATE void JSArrayIteratorVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=8&c=3
  static constexpr int kIteratedObjectOffset = P::kHeaderSize;
  static constexpr int kIteratedObjectOffsetEnd = kIteratedObjectOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=33&c=3
  static constexpr int kNextIndexOffset = kIteratedObjectOffsetEnd + 1;
  static constexpr int kNextIndexOffsetEnd = kNextIndexOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=35&c=3
  static constexpr int kKindOffset = kNextIndexOffsetEnd + 1;
  static constexpr int kKindOffsetEnd = kKindOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kKindOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kKindOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kKindOffsetEnd + 1;
  static constexpr int kHeaderSize = kKindOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSArrayIterator() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSArrayIterator, DAlias>::value,
        "class TorqueGeneratedJSArrayIterator should be used as direct base for JSArrayIterator.");
  }

 protected:
  inline explicit TorqueGeneratedJSArrayIterator(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSArrayIterator(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSArray() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=52&c=1
V8_EXPORT_PRIVATE bool IsJSArray_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=52&c=1
template <class D, class P>
class TorqueGeneratedJSArray : public P {
  static_assert(
      std::is_same<JSArray, D>::value,
      "Use this class as direct base for JSArray.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSArray.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSArray<D,P>;

  // Torque type: Number
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=56&c=3
  inline Object length() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=56&c=3
  inline Object length(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=56&c=3
  inline void set_length(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=52&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=52&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSArray)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=52&c=1
  V8_EXPORT_PRIVATE void JSArrayVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=56&c=3
  static constexpr int kLengthOffset = P::kHeaderSize;
  static constexpr int kLengthOffsetEnd = kLengthOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kLengthOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kLengthOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kLengthOffsetEnd + 1;
  static constexpr int kHeaderSize = kLengthOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSArray() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSArray, DAlias>::value,
        "class TorqueGeneratedJSArray should be used as direct base for JSArray.");
  }

 protected:
  inline explicit TorqueGeneratedJSArray(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSArray(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

