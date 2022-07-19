class DataHandler;
// Alias for HeapObject::IsDataHandler() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=7&c=1
V8_EXPORT_PRIVATE bool IsDataHandler_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=7&c=1
template <class D, class P>
class TorqueGeneratedDataHandler : public P {
  static_assert(
      std::is_same<DataHandler, D>::value,
      "Use this class as direct base for DataHandler.");
  static_assert(
      std::is_same<Struct, P>::value,
      "Pass in Struct as second template parameter for TorqueGeneratedDataHandler.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedDataHandler<D,P>;

  // Torque type: (Smi | class CodeDataContainer)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=13&c=31
  inline Object smi_handler() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=13&c=31
  inline Object smi_handler(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=13&c=31
  inline void set_smi_handler(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Smi | class Cell)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=17&c=3
  inline Object validity_cell() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=17&c=3
  inline Object validity_cell(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=17&c=3
  inline void set_validity_cell(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: MaybeObject
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=20&c=3
  inline MaybeObject data1() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=20&c=3
  inline MaybeObject data1(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=20&c=3
  inline void set_data1(MaybeObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: MaybeObject
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=21&c=3
  inline MaybeObject data2() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=21&c=3
  inline MaybeObject data2(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=21&c=3
  inline void set_data2(MaybeObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: MaybeObject
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=22&c=3
  inline MaybeObject data3() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=22&c=3
  inline MaybeObject data3(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=22&c=3
  inline void set_data3(MaybeObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=7&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=7&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=7&c=1
  V8_EXPORT_PRIVATE void DataHandlerVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=13&c=31
  static constexpr int kSmiHandlerOffset = P::kHeaderSize;
  static constexpr int kSmiHandlerOffsetEnd = kSmiHandlerOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=17&c=3
  static constexpr int kValidityCellOffset = kSmiHandlerOffsetEnd + 1;
  static constexpr int kValidityCellOffsetEnd = kValidityCellOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kValidityCellOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kValidityCellOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=20&c=3
  static constexpr int kData1Offset = kValidityCellOffsetEnd + 1;
  static constexpr int kData1OffsetEnd = kData1Offset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=21&c=3
  static constexpr int kData2Offset = kData1OffsetEnd + 1;
  static constexpr int kData2OffsetEnd = kData2Offset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=22&c=3
  static constexpr int kData3Offset = kData2OffsetEnd + 1;
  static constexpr int kData3OffsetEnd = kData3Offset + kTaggedSize - 1;
  static constexpr int kEndOfWeakFieldsOffset = kData3OffsetEnd + 1;
  static constexpr int kHeaderSize = kData3OffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedDataHandler() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedDataHandler, DAlias>::value,
        "class TorqueGeneratedDataHandler should be used as direct base for DataHandler.");
  }

 protected:
  inline explicit TorqueGeneratedDataHandler(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedDataHandler(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

