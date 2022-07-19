class Cell;
// Alias for HeapObject::IsCell() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=5&c=1
V8_EXPORT_PRIVATE bool IsCell_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=5&c=1
template <class D, class P>
class TorqueGeneratedCell : public P {
  static_assert(
      std::is_same<Cell, D>::value,
      "Use this class as direct base for Cell.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedCell.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedCell<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=5&c=40
  inline Object value() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=5&c=40
  inline Object value(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=5&c=40
  inline void set_value(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=5&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=5&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(Cell)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=5&c=1
  V8_EXPORT_PRIVATE void CellVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=5&c=40
  static constexpr int kValueOffset = P::kHeaderSize;
  static constexpr int kValueOffsetEnd = kValueOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kValueOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kValueOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kValueOffsetEnd + 1;
  static constexpr int kHeaderSize = kValueOffsetEnd + 1;
  static constexpr int kSize = kValueOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=5&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 8);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=5&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedCell() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedCell, DAlias>::value,
        "class TorqueGeneratedCell should be used as direct base for Cell.");
  }

 protected:
  inline explicit TorqueGeneratedCell(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedCell(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

