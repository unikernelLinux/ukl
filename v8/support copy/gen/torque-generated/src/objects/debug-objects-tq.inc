class BreakPoint;
class BreakPointInfo;
class DebugInfo;
class CoverageInfo;
class StackFrameInfo;
class ErrorStackData;
class PromiseOnStack;
// Alias for HeapObject::IsBreakPoint() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=5&c=1
V8_EXPORT_PRIVATE bool IsBreakPoint_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=5&c=1
template <class D, class P>
class TorqueGeneratedBreakPoint : public P {
  static_assert(
      std::is_same<BreakPoint, D>::value,
      "Use this class as direct base for BreakPoint.");
  static_assert(
      std::is_same<Struct, P>::value,
      "Pass in Struct as second template parameter for TorqueGeneratedBreakPoint.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedBreakPoint<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=6&c=3
  inline int id() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=6&c=3
  inline void set_id(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=7&c=3
  inline String condition() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=7&c=3
  inline String condition(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=7&c=3
  inline void set_condition(String value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=5&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=5&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(BreakPoint)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=5&c=1
  V8_EXPORT_PRIVATE void BreakPointVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=6&c=3
  static constexpr int kIdOffset = P::kHeaderSize;
  static constexpr int kIdOffsetEnd = kIdOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=7&c=3
  static constexpr int kConditionOffset = kIdOffsetEnd + 1;
  static constexpr int kConditionOffsetEnd = kConditionOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kConditionOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kConditionOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kConditionOffsetEnd + 1;
  static constexpr int kHeaderSize = kConditionOffsetEnd + 1;
  static constexpr int kSize = kConditionOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=5&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 12);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=5&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedBreakPoint() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedBreakPoint, DAlias>::value,
        "class TorqueGeneratedBreakPoint should be used as direct base for BreakPoint.");
  }

 protected:
  inline explicit TorqueGeneratedBreakPoint(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedBreakPoint(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsBreakPointInfo() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=10&c=1
V8_EXPORT_PRIVATE bool IsBreakPointInfo_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=10&c=1
template <class D, class P>
class TorqueGeneratedBreakPointInfo : public P {
  static_assert(
      std::is_same<BreakPointInfo, D>::value,
      "Use this class as direct base for BreakPointInfo.");
  static_assert(
      std::is_same<Struct, P>::value,
      "Pass in Struct as second template parameter for TorqueGeneratedBreakPointInfo.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedBreakPointInfo<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=12&c=3
  inline int source_position() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=12&c=3
  inline void set_source_position(int value);

  // Torque type: (Undefined | class FixedArray | class BreakPoint)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=14&c=3
  inline HeapObject break_points() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=14&c=3
  inline HeapObject break_points(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=14&c=3
  inline void set_break_points(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=10&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=10&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(BreakPointInfo)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=10&c=1
  V8_EXPORT_PRIVATE void BreakPointInfoVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=12&c=3
  static constexpr int kSourcePositionOffset = P::kHeaderSize;
  static constexpr int kSourcePositionOffsetEnd = kSourcePositionOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=14&c=3
  static constexpr int kBreakPointsOffset = kSourcePositionOffsetEnd + 1;
  static constexpr int kBreakPointsOffsetEnd = kBreakPointsOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kBreakPointsOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kBreakPointsOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kBreakPointsOffsetEnd + 1;
  static constexpr int kHeaderSize = kBreakPointsOffsetEnd + 1;
  static constexpr int kSize = kBreakPointsOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=10&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 12);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=10&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedBreakPointInfo() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedBreakPointInfo, DAlias>::value,
        "class TorqueGeneratedBreakPointInfo should be used as direct base for BreakPointInfo.");
  }

 protected:
  inline explicit TorqueGeneratedBreakPointInfo(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedBreakPointInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsDebugInfo() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=33&c=1
V8_EXPORT_PRIVATE bool IsDebugInfo_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=33&c=1
template <class D, class P>
class TorqueGeneratedDebugInfo : public P {
  static_assert(
      std::is_same<DebugInfo, D>::value,
      "Use this class as direct base for DebugInfo.");
  static_assert(
      std::is_same<Struct, P>::value,
      "Pass in Struct as second template parameter for TorqueGeneratedDebugInfo.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedDebugInfo<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=34&c=3
  inline SharedFunctionInfo shared() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=34&c=3
  inline SharedFunctionInfo shared(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=34&c=3
  inline void set_shared(SharedFunctionInfo value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=36&c=3
  inline int debugger_hints() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=36&c=3
  inline void set_debugger_hints(int value);

  // Torque type: (Undefined | class Script)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=38&c=3
  inline HeapObject script() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=38&c=3
  inline HeapObject script(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=38&c=3
  inline void set_script(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | class BytecodeArray)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=43&c=3
  inline HeapObject original_bytecode_array(AcquireLoadTag) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=43&c=3
  inline HeapObject original_bytecode_array(PtrComprCageBase cage_base, AcquireLoadTag) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=43&c=3
  inline void set_original_bytecode_array(HeapObject value, ReleaseStoreTag, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | class BytecodeArray)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=48&c=3
  inline HeapObject debug_bytecode_array(AcquireLoadTag) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=48&c=3
  inline HeapObject debug_bytecode_array(PtrComprCageBase cage_base, AcquireLoadTag) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=48&c=3
  inline void set_debug_bytecode_array(HeapObject value, ReleaseStoreTag, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=50&c=3
  inline FixedArray break_points() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=50&c=3
  inline FixedArray break_points(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=50&c=3
  inline void set_break_points(FixedArray value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=52&c=36
  inline int flags(RelaxedLoadTag) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=52&c=36
  inline void set_flags(int value, RelaxedStoreTag);

  // Torque type: (Undefined | class CoverageInfo)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=53&c=3
  inline HeapObject coverage_info() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=53&c=3
  inline HeapObject coverage_info(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=53&c=3
  inline void set_coverage_info(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=33&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=33&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(DebugInfo)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=33&c=1
  V8_EXPORT_PRIVATE void DebugInfoVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=34&c=3
  static constexpr int kSharedOffset = P::kHeaderSize;
  static constexpr int kSharedOffsetEnd = kSharedOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=36&c=3
  static constexpr int kDebuggerHintsOffset = kSharedOffsetEnd + 1;
  static constexpr int kDebuggerHintsOffsetEnd = kDebuggerHintsOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=38&c=3
  static constexpr int kScriptOffset = kDebuggerHintsOffsetEnd + 1;
  static constexpr int kScriptOffsetEnd = kScriptOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=43&c=3
  static constexpr int kOriginalBytecodeArrayOffset = kScriptOffsetEnd + 1;
  static constexpr int kOriginalBytecodeArrayOffsetEnd = kOriginalBytecodeArrayOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=48&c=3
  static constexpr int kDebugBytecodeArrayOffset = kOriginalBytecodeArrayOffsetEnd + 1;
  static constexpr int kDebugBytecodeArrayOffsetEnd = kDebugBytecodeArrayOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=50&c=3
  static constexpr int kBreakPointsOffset = kDebugBytecodeArrayOffsetEnd + 1;
  static constexpr int kBreakPointsOffsetEnd = kBreakPointsOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=52&c=36
  static constexpr int kFlagsOffset = kBreakPointsOffsetEnd + 1;
  static constexpr int kFlagsOffsetEnd = kFlagsOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=53&c=3
  static constexpr int kCoverageInfoOffset = kFlagsOffsetEnd + 1;
  static constexpr int kCoverageInfoOffsetEnd = kCoverageInfoOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kCoverageInfoOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kCoverageInfoOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kCoverageInfoOffsetEnd + 1;
  static constexpr int kHeaderSize = kCoverageInfoOffsetEnd + 1;
  static constexpr int kSize = kCoverageInfoOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=33&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 36);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=33&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedDebugInfo() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedDebugInfo, DAlias>::value,
        "class TorqueGeneratedDebugInfo should be used as direct base for DebugInfo.");
  }

 protected:
  inline explicit TorqueGeneratedDebugInfo(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedDebugInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsCoverageInfo() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=66&c=1
V8_EXPORT_PRIVATE bool IsCoverageInfo_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=66&c=1
template <class D, class P>
class TorqueGeneratedCoverageInfo : public P {
  static_assert(
      std::is_same<CoverageInfo, D>::value,
      "Use this class as direct base for CoverageInfo.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedCoverageInfo.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedCoverageInfo<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=67&c=9
  inline int32_t slot_count() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=67&c=9
  inline void set_slot_count(int32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=68&c=3
  inline int32_t slots_start_source_position(int i) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=68&c=3
  inline void set_slots_start_source_position(int i, int32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=68&c=3
  inline int32_t slots_end_source_position(int i) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=68&c=3
  inline void set_slots_end_source_position(int i, int32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=68&c=3
  inline int32_t slots_block_count(int i) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=68&c=3
  inline void set_slots_block_count(int i, int32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=68&c=3
  inline int32_t slots_padding(int i) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=68&c=3
  inline void set_slots_padding(int i, int32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=66&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=66&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(CoverageInfo)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=66&c=1
  V8_EXPORT_PRIVATE void CoverageInfoVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=67&c=9
  static constexpr int kSlotCountOffset = P::kHeaderSize;
  static constexpr int kSlotCountOffsetEnd = kSlotCountOffset + kInt32Size - 1;
  static constexpr int kHeaderSize = kSlotCountOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=68&c=3
  static constexpr int kSlotsOffset = kSlotCountOffsetEnd + 1;
  static constexpr int kSlotsOffsetEnd = kSlotsOffset + 0 - 1;
  static constexpr int kStartOfWeakFieldsOffset = kSlotsOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kSlotsOffsetEnd + 1;
  static constexpr int kStartOfStrongFieldsOffset = kSlotsOffsetEnd + 1;
  static constexpr int kEndOfStrongFieldsOffset = kSlotsOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=66&c=1
  V8_INLINE static constexpr int32_t SizeFor(int slot_count) {
    int32_t size = kHeaderSize;
    size += slot_count * 16;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=66&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor(this->slot_count());
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedCoverageInfo() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedCoverageInfo, DAlias>::value,
        "class TorqueGeneratedCoverageInfo should be used as direct base for CoverageInfo.");
  }

 protected:
  inline explicit TorqueGeneratedCoverageInfo(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedCoverageInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsStackFrameInfo() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=76&c=1
V8_EXPORT_PRIVATE bool IsStackFrameInfo_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=76&c=1
template <class D, class P>
class TorqueGeneratedStackFrameInfo : public P {
  static_assert(
      std::is_same<StackFrameInfo, D>::value,
      "Use this class as direct base for StackFrameInfo.");
  static_assert(
      std::is_same<Struct, P>::value,
      "Pass in Struct as second template parameter for TorqueGeneratedStackFrameInfo.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedStackFrameInfo<D,P>;

  // Torque type: (class Script | class SharedFunctionInfo)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=83&c=3
  inline HeapObject shared_or_script() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=83&c=3
  inline HeapObject shared_or_script(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=83&c=3
  inline void set_shared_or_script(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=84&c=3
  inline String function_name() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=84&c=3
  inline String function_name(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=84&c=3
  inline void set_function_name(String value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=85&c=3
  inline int flags() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=85&c=3
  inline void set_flags(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=76&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=76&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(StackFrameInfo)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=76&c=1
  V8_EXPORT_PRIVATE void StackFrameInfoVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=83&c=3
  static constexpr int kSharedOrScriptOffset = P::kHeaderSize;
  static constexpr int kSharedOrScriptOffsetEnd = kSharedOrScriptOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=84&c=3
  static constexpr int kFunctionNameOffset = kSharedOrScriptOffsetEnd + 1;
  static constexpr int kFunctionNameOffsetEnd = kFunctionNameOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=85&c=3
  static constexpr int kFlagsOffset = kFunctionNameOffsetEnd + 1;
  static constexpr int kFlagsOffsetEnd = kFlagsOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kFlagsOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kFlagsOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kFlagsOffsetEnd + 1;
  static constexpr int kHeaderSize = kFlagsOffsetEnd + 1;
  static constexpr int kSize = kFlagsOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=76&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 16);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=76&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedStackFrameInfo() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedStackFrameInfo, DAlias>::value,
        "class TorqueGeneratedStackFrameInfo should be used as direct base for StackFrameInfo.");
  }

 protected:
  inline explicit TorqueGeneratedStackFrameInfo(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedStackFrameInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsErrorStackData() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=117&c=1
V8_EXPORT_PRIVATE bool IsErrorStackData_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=117&c=1
template <class D, class P>
class TorqueGeneratedErrorStackData : public P {
  static_assert(
      std::is_same<ErrorStackData, D>::value,
      "Use this class as direct base for ErrorStackData.");
  static_assert(
      std::is_same<Struct, P>::value,
      "Pass in Struct as second template parameter for TorqueGeneratedErrorStackData.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedErrorStackData<D,P>;

  // Torque type: (class JSReceiver | Undefined | Null | False | True | class Symbol | class String | BigInt | class HeapNumber | Smi | class FixedArray)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=121&c=3
  inline Object call_site_infos_or_formatted_stack() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=121&c=3
  inline Object call_site_infos_or_formatted_stack(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=121&c=3
  inline void set_call_site_infos_or_formatted_stack(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Smi | class FixedArray)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=128&c=3
  inline Object limit_or_stack_frame_infos() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=128&c=3
  inline Object limit_or_stack_frame_infos(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=128&c=3
  inline void set_limit_or_stack_frame_infos(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=117&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=117&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(ErrorStackData)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=117&c=1
  V8_EXPORT_PRIVATE void ErrorStackDataVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=121&c=3
  static constexpr int kCallSiteInfosOrFormattedStackOffset = P::kHeaderSize;
  static constexpr int kCallSiteInfosOrFormattedStackOffsetEnd = kCallSiteInfosOrFormattedStackOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=128&c=3
  static constexpr int kLimitOrStackFrameInfosOffset = kCallSiteInfosOrFormattedStackOffsetEnd + 1;
  static constexpr int kLimitOrStackFrameInfosOffsetEnd = kLimitOrStackFrameInfosOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kLimitOrStackFrameInfosOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kLimitOrStackFrameInfosOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kLimitOrStackFrameInfosOffsetEnd + 1;
  static constexpr int kHeaderSize = kLimitOrStackFrameInfosOffsetEnd + 1;
  static constexpr int kSize = kLimitOrStackFrameInfosOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=117&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 12);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=117&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedErrorStackData() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedErrorStackData, DAlias>::value,
        "class TorqueGeneratedErrorStackData should be used as direct base for ErrorStackData.");
  }

 protected:
  inline explicit TorqueGeneratedErrorStackData(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedErrorStackData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsPromiseOnStack() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=131&c=1
V8_EXPORT_PRIVATE bool IsPromiseOnStack_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=131&c=1
template <class D, class P>
class TorqueGeneratedPromiseOnStack : public P {
  static_assert(
      std::is_same<PromiseOnStack, D>::value,
      "Use this class as direct base for PromiseOnStack.");
  static_assert(
      std::is_same<Struct, P>::value,
      "Pass in Struct as second template parameter for TorqueGeneratedPromiseOnStack.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedPromiseOnStack<D,P>;

  // Torque type: (Zero | class PromiseOnStack)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=132&c=3
  inline Object prev() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=132&c=3
  inline Object prev(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=132&c=3
  inline void set_prev(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: Weak<class JSObject>
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=133&c=3
  inline MaybeObject promise() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=133&c=3
  inline MaybeObject promise(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=133&c=3
  inline void set_promise(MaybeObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=131&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=131&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(PromiseOnStack)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=131&c=1
  V8_EXPORT_PRIVATE void PromiseOnStackVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=132&c=3
  static constexpr int kPrevOffset = P::kHeaderSize;
  static constexpr int kPrevOffsetEnd = kPrevOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kPrevOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kPrevOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=133&c=3
  static constexpr int kPromiseOffset = kPrevOffsetEnd + 1;
  static constexpr int kPromiseOffsetEnd = kPromiseOffset + kTaggedSize - 1;
  static constexpr int kEndOfWeakFieldsOffset = kPromiseOffsetEnd + 1;
  static constexpr int kHeaderSize = kPromiseOffsetEnd + 1;
  static constexpr int kSize = kPromiseOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=131&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 12);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=131&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedPromiseOnStack() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedPromiseOnStack, DAlias>::value,
        "class TorqueGeneratedPromiseOnStack should be used as direct base for PromiseOnStack.");
  }

 protected:
  inline explicit TorqueGeneratedPromiseOnStack(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedPromiseOnStack(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

struct TorqueGeneratedCoverageInfoSlotOffsets {
  static constexpr int kStartSourcePositionOffset = 0;
  static constexpr int kEndSourcePositionOffset = 4;
  static constexpr int kBlockCountOffset = 8;
  static constexpr int kPaddingOffset = 12;
  static constexpr int kSize = 16;
};

