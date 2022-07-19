class PreparseData;
class InterpreterData;
class SharedFunctionInfo;
class UncompiledData;
class UncompiledDataWithoutPreparseData;
class UncompiledDataWithPreparseData;
class UncompiledDataWithoutPreparseDataWithJob;
class UncompiledDataWithPreparseDataAndJob;
class OnHeapBasicBlockProfilerData;
// Alias for HeapObject::IsPreparseData() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=5&c=1
V8_EXPORT_PRIVATE bool IsPreparseData_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=5&c=1
template <class D, class P>
class TorqueGeneratedPreparseData : public P {
  static_assert(
      std::is_same<PreparseData, D>::value,
      "Use this class as direct base for PreparseData.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedPreparseData.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedPreparseData<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=7&c=3
  inline int32_t data_length() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=7&c=3
  inline void set_data_length(int32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=8&c=3
  inline int32_t children_length() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=8&c=3
  inline void set_children_length(int32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=5&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=5&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(PreparseData)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=5&c=1
  V8_EXPORT_PRIVATE void PreparseDataVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=7&c=3
  static constexpr int kDataLengthOffset = P::kHeaderSize;
  static constexpr int kDataLengthOffsetEnd = kDataLengthOffset + kInt32Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=8&c=3
  static constexpr int kChildrenLengthOffset = kDataLengthOffsetEnd + 1;
  static constexpr int kChildrenLengthOffsetEnd = kChildrenLengthOffset + kInt32Size - 1;
  static constexpr int kStartOfWeakFieldsOffset = kChildrenLengthOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kChildrenLengthOffsetEnd + 1;
  static constexpr int kStartOfStrongFieldsOffset = kChildrenLengthOffsetEnd + 1;
  static constexpr int kEndOfStrongFieldsOffset = kChildrenLengthOffsetEnd + 1;
  static constexpr int kHeaderSize = kChildrenLengthOffsetEnd + 1;
  static constexpr int kSize = kChildrenLengthOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=5&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 12);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=5&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedPreparseData() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedPreparseData, DAlias>::value,
        "class TorqueGeneratedPreparseData should be used as direct base for PreparseData.");
  }

 protected:
  inline explicit TorqueGeneratedPreparseData(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedPreparseData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsInterpreterData() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=11&c=1
V8_EXPORT_PRIVATE bool IsInterpreterData_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=11&c=1
template <class D, class P>
class TorqueGeneratedInterpreterData : public P {
  static_assert(
      std::is_same<InterpreterData, D>::value,
      "Use this class as direct base for InterpreterData.");
  static_assert(
      std::is_same<Struct, P>::value,
      "Pass in Struct as second template parameter for TorqueGeneratedInterpreterData.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedInterpreterData<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=12&c=3
  inline BytecodeArray bytecode_array() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=12&c=3
  inline BytecodeArray bytecode_array(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=12&c=3
  inline void set_bytecode_array(BytecodeArray value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=13&c=31
  inline CodeDataContainer interpreter_trampoline() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=13&c=31
  inline CodeDataContainer interpreter_trampoline(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=13&c=31
  inline void set_interpreter_trampoline(CodeDataContainer value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=11&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=11&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(InterpreterData)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=11&c=1
  V8_EXPORT_PRIVATE void InterpreterDataVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=12&c=3
  static constexpr int kBytecodeArrayOffset = P::kHeaderSize;
  static constexpr int kBytecodeArrayOffsetEnd = kBytecodeArrayOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=13&c=31
  static constexpr int kInterpreterTrampolineOffset = kBytecodeArrayOffsetEnd + 1;
  static constexpr int kInterpreterTrampolineOffsetEnd = kInterpreterTrampolineOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kInterpreterTrampolineOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kInterpreterTrampolineOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kInterpreterTrampolineOffsetEnd + 1;
  static constexpr int kHeaderSize = kInterpreterTrampolineOffsetEnd + 1;
  static constexpr int kSize = kInterpreterTrampolineOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=11&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 12);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=11&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedInterpreterData() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedInterpreterData, DAlias>::value,
        "class TorqueGeneratedInterpreterData should be used as direct base for InterpreterData.");
  }

 protected:
  inline explicit TorqueGeneratedInterpreterData(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedInterpreterData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsSharedFunctionInfo() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=50&c=1
V8_EXPORT_PRIVATE bool IsSharedFunctionInfo_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=50&c=1
template <class D, class P>
class TorqueGeneratedSharedFunctionInfo : public P {
  static_assert(
      std::is_same<SharedFunctionInfo, D>::value,
      "Use this class as direct base for SharedFunctionInfo.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedSharedFunctionInfo.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedSharedFunctionInfo<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=56&c=22
  inline Object function_data() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=56&c=22
  inline Object function_data(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=56&c=22
  inline void set_function_data(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (class String | NoSharedNameSentinel | class ScopeInfo)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=57&c=3
  inline Object name_or_scope_info() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=57&c=3
  inline Object name_or_scope_info(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=57&c=3
  inline void set_name_or_scope_info(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=58&c=3
  inline HeapObject outer_scope_info_or_feedback_metadata() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=58&c=3
  inline HeapObject outer_scope_info_or_feedback_metadata(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=58&c=3
  inline void set_outer_scope_info_or_feedback_metadata(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | class DebugInfo | class Script)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=59&c=3
  inline HeapObject script_or_debug_info() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=59&c=3
  inline HeapObject script_or_debug_info(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=59&c=3
  inline void set_script_or_debug_info(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=65&c=3
  inline int16_t length() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=65&c=3
  inline void set_length(int16_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=70&c=3
  inline uint16_t formal_parameter_count() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=70&c=3
  inline void set_formal_parameter_count(uint16_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=71&c=3
  inline uint16_t function_token_offset() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=71&c=3
  inline void set_function_token_offset(uint16_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=74&c=3
  inline uint8_t expected_nof_properties() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=74&c=3
  inline void set_expected_nof_properties(uint8_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=75&c=3
  inline uint8_t flags2() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=75&c=3
  inline void set_flags2(uint8_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=76&c=3
  inline uint32_t flags() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=76&c=3
  inline void set_flags(uint32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=80&c=3
  inline int32_t function_literal_id() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=80&c=3
  inline void set_function_literal_id(int32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=50&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=50&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(SharedFunctionInfo)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=50&c=1
  V8_EXPORT_PRIVATE void SharedFunctionInfoVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfWeakFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=56&c=22
  static constexpr int kFunctionDataOffset = P::kHeaderSize;
  static constexpr int kFunctionDataOffsetEnd = kFunctionDataOffset + kTaggedSize - 1;
  static constexpr int kEndOfWeakFieldsOffset = kFunctionDataOffsetEnd + 1;
  static constexpr int kStartOfStrongFieldsOffset = kFunctionDataOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=57&c=3
  static constexpr int kNameOrScopeInfoOffset = kFunctionDataOffsetEnd + 1;
  static constexpr int kNameOrScopeInfoOffsetEnd = kNameOrScopeInfoOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=58&c=3
  static constexpr int kOuterScopeInfoOrFeedbackMetadataOffset = kNameOrScopeInfoOffsetEnd + 1;
  static constexpr int kOuterScopeInfoOrFeedbackMetadataOffsetEnd = kOuterScopeInfoOrFeedbackMetadataOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=59&c=3
  static constexpr int kScriptOrDebugInfoOffset = kOuterScopeInfoOrFeedbackMetadataOffsetEnd + 1;
  static constexpr int kScriptOrDebugInfoOffsetEnd = kScriptOrDebugInfoOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kScriptOrDebugInfoOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=65&c=3
  static constexpr int kLengthOffset = kScriptOrDebugInfoOffsetEnd + 1;
  static constexpr int kLengthOffsetEnd = kLengthOffset + kUInt16Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=70&c=3
  static constexpr int kFormalParameterCountOffset = kLengthOffsetEnd + 1;
  static constexpr int kFormalParameterCountOffsetEnd = kFormalParameterCountOffset + kUInt16Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=71&c=3
  static constexpr int kFunctionTokenOffsetOffset = kFormalParameterCountOffsetEnd + 1;
  static constexpr int kFunctionTokenOffsetOffsetEnd = kFunctionTokenOffsetOffset + kUInt16Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=74&c=3
  static constexpr int kExpectedNofPropertiesOffset = kFunctionTokenOffsetOffsetEnd + 1;
  static constexpr int kExpectedNofPropertiesOffsetEnd = kExpectedNofPropertiesOffset + kUInt8Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=75&c=3
  static constexpr int kFlags2Offset = kExpectedNofPropertiesOffsetEnd + 1;
  static constexpr int kFlags2OffsetEnd = kFlags2Offset + kUInt8Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=76&c=3
  static constexpr int kFlagsOffset = kFlags2OffsetEnd + 1;
  static constexpr int kFlagsOffsetEnd = kFlagsOffset + kInt32Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=80&c=3
  static constexpr int kFunctionLiteralIdOffset = kFlagsOffsetEnd + 1;
  static constexpr int kFunctionLiteralIdOffsetEnd = kFunctionLiteralIdOffset + kInt32Size - 1;
  static constexpr int kHeaderSize = kFunctionLiteralIdOffsetEnd + 1;
  static constexpr int kSize = kFunctionLiteralIdOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=50&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 36);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=50&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedSharedFunctionInfo() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedSharedFunctionInfo, DAlias>::value,
        "class TorqueGeneratedSharedFunctionInfo should be used as direct base for SharedFunctionInfo.");
  }

 protected:
  inline explicit TorqueGeneratedSharedFunctionInfo(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedSharedFunctionInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsUncompiledData() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=112&c=1
V8_EXPORT_PRIVATE bool IsUncompiledData_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=112&c=1
template <class D, class P>
class TorqueGeneratedUncompiledData : public P {
  static_assert(
      std::is_same<UncompiledData, D>::value,
      "Use this class as direct base for UncompiledData.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedUncompiledData.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedUncompiledData<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=114&c=3
  inline String inferred_name() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=114&c=3
  inline String inferred_name(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=114&c=3
  inline void set_inferred_name(String value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=115&c=3
  inline int32_t start_position() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=115&c=3
  inline void set_start_position(int32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=116&c=3
  inline int32_t end_position() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=116&c=3
  inline void set_end_position(int32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=112&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=112&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=112&c=1
  V8_EXPORT_PRIVATE void UncompiledDataVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=114&c=3
  static constexpr int kInferredNameOffset = P::kHeaderSize;
  static constexpr int kInferredNameOffsetEnd = kInferredNameOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kInferredNameOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=115&c=3
  static constexpr int kStartPositionOffset = kInferredNameOffsetEnd + 1;
  static constexpr int kStartPositionOffsetEnd = kStartPositionOffset + kInt32Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=116&c=3
  static constexpr int kEndPositionOffset = kStartPositionOffsetEnd + 1;
  static constexpr int kEndPositionOffsetEnd = kEndPositionOffset + kInt32Size - 1;
  static constexpr int kStartOfWeakFieldsOffset = kEndPositionOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kEndPositionOffsetEnd + 1;
  static constexpr int kHeaderSize = kEndPositionOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedUncompiledData() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedUncompiledData, DAlias>::value,
        "class TorqueGeneratedUncompiledData should be used as direct base for UncompiledData.");
  }

 protected:
  inline explicit TorqueGeneratedUncompiledData(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedUncompiledData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsUncompiledDataWithoutPreparseData() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=119&c=1
V8_EXPORT_PRIVATE bool IsUncompiledDataWithoutPreparseData_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=119&c=1
template <class D, class P>
class TorqueGeneratedUncompiledDataWithoutPreparseData : public P {
  static_assert(
      std::is_same<UncompiledDataWithoutPreparseData, D>::value,
      "Use this class as direct base for UncompiledDataWithoutPreparseData.");
  static_assert(
      std::is_same<UncompiledData, P>::value,
      "Pass in UncompiledData as second template parameter for TorqueGeneratedUncompiledDataWithoutPreparseData.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedUncompiledDataWithoutPreparseData<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=119&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=119&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(UncompiledDataWithoutPreparseData)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=119&c=1
  V8_EXPORT_PRIVATE void UncompiledDataWithoutPreparseDataVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kHeaderSize = P::kHeaderSize;
  static constexpr int kSize = P::kHeaderSize;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=119&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 16);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=119&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedUncompiledDataWithoutPreparseData() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedUncompiledDataWithoutPreparseData, DAlias>::value,
        "class TorqueGeneratedUncompiledDataWithoutPreparseData should be used as direct base for UncompiledDataWithoutPreparseData.");
  }

 protected:
  inline explicit TorqueGeneratedUncompiledDataWithoutPreparseData(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedUncompiledDataWithoutPreparseData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsUncompiledDataWithPreparseData() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=125&c=1
V8_EXPORT_PRIVATE bool IsUncompiledDataWithPreparseData_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=125&c=1
template <class D, class P>
class TorqueGeneratedUncompiledDataWithPreparseData : public P {
  static_assert(
      std::is_same<UncompiledDataWithPreparseData, D>::value,
      "Use this class as direct base for UncompiledDataWithPreparseData.");
  static_assert(
      std::is_same<UncompiledData, P>::value,
      "Pass in UncompiledData as second template parameter for TorqueGeneratedUncompiledDataWithPreparseData.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedUncompiledDataWithPreparseData<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=129&c=3
  inline PreparseData preparse_data() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=129&c=3
  inline PreparseData preparse_data(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=129&c=3
  inline void set_preparse_data(PreparseData value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=125&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=125&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(UncompiledDataWithPreparseData)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=125&c=1
  V8_EXPORT_PRIVATE void UncompiledDataWithPreparseDataVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=129&c=3
  static constexpr int kPreparseDataOffset = P::kHeaderSize;
  static constexpr int kPreparseDataOffsetEnd = kPreparseDataOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kPreparseDataOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kPreparseDataOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kPreparseDataOffsetEnd + 1;
  static constexpr int kHeaderSize = kPreparseDataOffsetEnd + 1;
  static constexpr int kSize = kPreparseDataOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=125&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 20);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=125&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedUncompiledDataWithPreparseData() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedUncompiledDataWithPreparseData, DAlias>::value,
        "class TorqueGeneratedUncompiledDataWithPreparseData should be used as direct base for UncompiledDataWithPreparseData.");
  }

 protected:
  inline explicit TorqueGeneratedUncompiledDataWithPreparseData(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedUncompiledDataWithPreparseData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsUncompiledDataWithoutPreparseDataWithJob() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=132&c=1
V8_EXPORT_PRIVATE bool IsUncompiledDataWithoutPreparseDataWithJob_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=132&c=1
template <class D, class P>
class TorqueGeneratedUncompiledDataWithoutPreparseDataWithJob : public P {
  static_assert(
      std::is_same<UncompiledDataWithoutPreparseDataWithJob, D>::value,
      "Use this class as direct base for UncompiledDataWithoutPreparseDataWithJob.");
  static_assert(
      std::is_same<UncompiledDataWithoutPreparseData, P>::value,
      "Pass in UncompiledDataWithoutPreparseData as second template parameter for TorqueGeneratedUncompiledDataWithoutPreparseDataWithJob.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedUncompiledDataWithoutPreparseDataWithJob<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=138&c=3
  inline Address job() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=138&c=3
  inline void set_job(Address value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=132&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=132&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(UncompiledDataWithoutPreparseDataWithJob)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=132&c=1
  V8_EXPORT_PRIVATE void UncompiledDataWithoutPreparseDataWithJobVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=138&c=3
  static constexpr int kJobOffset = P::kHeaderSize;
  static constexpr int kJobOffsetEnd = kJobOffset + kSystemPointerSize - 1;
  static constexpr int kStartOfWeakFieldsOffset = kJobOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kJobOffsetEnd + 1;
  static constexpr int kStartOfStrongFieldsOffset = kJobOffsetEnd + 1;
  static constexpr int kEndOfStrongFieldsOffset = kJobOffsetEnd + 1;
  static constexpr int kHeaderSize = kJobOffsetEnd + 1;
  static constexpr int kSize = kJobOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=132&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 24);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=132&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedUncompiledDataWithoutPreparseDataWithJob() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedUncompiledDataWithoutPreparseDataWithJob, DAlias>::value,
        "class TorqueGeneratedUncompiledDataWithoutPreparseDataWithJob should be used as direct base for UncompiledDataWithoutPreparseDataWithJob.");
  }

 protected:
  inline explicit TorqueGeneratedUncompiledDataWithoutPreparseDataWithJob(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedUncompiledDataWithoutPreparseDataWithJob(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsUncompiledDataWithPreparseDataAndJob() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=141&c=1
V8_EXPORT_PRIVATE bool IsUncompiledDataWithPreparseDataAndJob_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=141&c=1
template <class D, class P>
class TorqueGeneratedUncompiledDataWithPreparseDataAndJob : public P {
  static_assert(
      std::is_same<UncompiledDataWithPreparseDataAndJob, D>::value,
      "Use this class as direct base for UncompiledDataWithPreparseDataAndJob.");
  static_assert(
      std::is_same<UncompiledDataWithPreparseData, P>::value,
      "Pass in UncompiledDataWithPreparseData as second template parameter for TorqueGeneratedUncompiledDataWithPreparseDataAndJob.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedUncompiledDataWithPreparseDataAndJob<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=147&c=3
  inline Address job() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=147&c=3
  inline void set_job(Address value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=141&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=141&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(UncompiledDataWithPreparseDataAndJob)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=141&c=1
  V8_EXPORT_PRIVATE void UncompiledDataWithPreparseDataAndJobVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=147&c=3
  static constexpr int kJobOffset = P::kHeaderSize;
  static constexpr int kJobOffsetEnd = kJobOffset + kSystemPointerSize - 1;
  static constexpr int kStartOfWeakFieldsOffset = kJobOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kJobOffsetEnd + 1;
  static constexpr int kStartOfStrongFieldsOffset = kJobOffsetEnd + 1;
  static constexpr int kEndOfStrongFieldsOffset = kJobOffsetEnd + 1;
  static constexpr int kHeaderSize = kJobOffsetEnd + 1;
  static constexpr int kSize = kJobOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=141&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 28);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=141&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedUncompiledDataWithPreparseDataAndJob() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedUncompiledDataWithPreparseDataAndJob, DAlias>::value,
        "class TorqueGeneratedUncompiledDataWithPreparseDataAndJob should be used as direct base for UncompiledDataWithPreparseDataAndJob.");
  }

 protected:
  inline explicit TorqueGeneratedUncompiledDataWithPreparseDataAndJob(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedUncompiledDataWithPreparseDataAndJob(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsOnHeapBasicBlockProfilerData() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=150&c=1
V8_EXPORT_PRIVATE bool IsOnHeapBasicBlockProfilerData_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=150&c=1
template <class D, class P>
class TorqueGeneratedOnHeapBasicBlockProfilerData : public P {
  static_assert(
      std::is_same<OnHeapBasicBlockProfilerData, D>::value,
      "Use this class as direct base for OnHeapBasicBlockProfilerData.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedOnHeapBasicBlockProfilerData.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedOnHeapBasicBlockProfilerData<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=152&c=3
  inline ByteArray block_ids() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=152&c=3
  inline ByteArray block_ids(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=152&c=3
  inline void set_block_ids(ByteArray value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=153&c=3
  inline ByteArray counts() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=153&c=3
  inline ByteArray counts(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=153&c=3
  inline void set_counts(ByteArray value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=154&c=3
  inline String name() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=154&c=3
  inline String name(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=154&c=3
  inline void set_name(String value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=155&c=3
  inline String schedule() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=155&c=3
  inline String schedule(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=155&c=3
  inline void set_schedule(String value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=156&c=3
  inline String code() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=156&c=3
  inline String code(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=156&c=3
  inline void set_code(String value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=157&c=3
  inline int hash() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=157&c=3
  inline void set_hash(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=150&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=150&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(OnHeapBasicBlockProfilerData)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=150&c=1
  V8_EXPORT_PRIVATE void OnHeapBasicBlockProfilerDataVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=152&c=3
  static constexpr int kBlockIdsOffset = P::kHeaderSize;
  static constexpr int kBlockIdsOffsetEnd = kBlockIdsOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=153&c=3
  static constexpr int kCountsOffset = kBlockIdsOffsetEnd + 1;
  static constexpr int kCountsOffsetEnd = kCountsOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=154&c=3
  static constexpr int kNameOffset = kCountsOffsetEnd + 1;
  static constexpr int kNameOffsetEnd = kNameOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=155&c=3
  static constexpr int kScheduleOffset = kNameOffsetEnd + 1;
  static constexpr int kScheduleOffsetEnd = kScheduleOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=156&c=3
  static constexpr int kCodeOffset = kScheduleOffsetEnd + 1;
  static constexpr int kCodeOffsetEnd = kCodeOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=157&c=3
  static constexpr int kHashOffset = kCodeOffsetEnd + 1;
  static constexpr int kHashOffsetEnd = kHashOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kHashOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kHashOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kHashOffsetEnd + 1;
  static constexpr int kHeaderSize = kHashOffsetEnd + 1;
  static constexpr int kSize = kHashOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=150&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 28);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=150&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedOnHeapBasicBlockProfilerData() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedOnHeapBasicBlockProfilerData, DAlias>::value,
        "class TorqueGeneratedOnHeapBasicBlockProfilerData should be used as direct base for OnHeapBasicBlockProfilerData.");
  }

 protected:
  inline explicit TorqueGeneratedOnHeapBasicBlockProfilerData(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedOnHeapBasicBlockProfilerData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

class OnHeapBasicBlockProfilerData : public TorqueGeneratedOnHeapBasicBlockProfilerData<OnHeapBasicBlockProfilerData, HeapObject> {
 public:
  class BodyDescriptor;
  TQ_OBJECT_CONSTRUCTORS(OnHeapBasicBlockProfilerData)
};

