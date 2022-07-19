class Context;
// Alias for HeapObject::IsContext() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=5&c=1
V8_EXPORT_PRIVATE bool IsContext_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=5&c=1
template <class D, class P>
class TorqueGeneratedContext : public P {
  static_assert(
      std::is_same<Context, D>::value,
      "Use this class as direct base for Context.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedContext.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedContext<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=13&c=9
  inline int length() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=13&c=9
  inline void set_length(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=14&c=3
  inline Object elements(int i) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=14&c=3
  inline Object elements(PtrComprCageBase cage_base, int i) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=14&c=3
  inline void set_elements(int i, Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=5&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=5&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=5&c=1
  V8_EXPORT_PRIVATE void ContextVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=13&c=9
  static constexpr int kLengthOffset = P::kHeaderSize;
  static constexpr int kLengthOffsetEnd = kLengthOffset + kTaggedSize - 1;
  static constexpr int kHeaderSize = kLengthOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=14&c=3
  static constexpr int kElementsOffset = kLengthOffsetEnd + 1;
  static constexpr int kElementsOffsetEnd = kElementsOffset + 0 - 1;
  static constexpr int kEndOfStrongFieldsOffset = kElementsOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kElementsOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kElementsOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=5&c=1
  V8_INLINE static constexpr int32_t SizeFor(int length) {
    int32_t size = kHeaderSize;
    size += length * 4;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=5&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor(this->length());
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedContext() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedContext, DAlias>::value,
        "class TorqueGeneratedContext should be used as direct base for Context.");
  }

 protected:
  inline explicit TorqueGeneratedContext(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedContext(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

