class ScopeInfo;
// Alias for HeapObject::IsScopeInfo() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=110&c=1
V8_EXPORT_PRIVATE bool IsScopeInfo_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=110&c=1
template <class D, class P>
class TorqueGeneratedScopeInfo : public P {
  static_assert(
      std::is_same<ScopeInfo, D>::value,
      "Use this class as direct base for ScopeInfo.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedScopeInfo.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedScopeInfo<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=112&c=9
  inline int flags() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=112&c=9
  inline void set_flags(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=115&c=3
  inline int parameter_count() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=115&c=3
  inline void set_parameter_count(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=119&c=9
  inline int context_local_count() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=119&c=9
  inline void set_context_local_count(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=124&c=3
  inline String context_local_names(int i) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=124&c=3
  inline String context_local_names(PtrComprCageBase cage_base, int i) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=124&c=3
  inline void set_context_local_names(int i, String value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=129&c=3
  inline NameToIndexHashTable context_local_names_hashtable() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=129&c=3
  inline NameToIndexHashTable context_local_names_hashtable(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=129&c=3
  inline void set_context_local_names_hashtable(NameToIndexHashTable value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=135&c=3
  inline int context_local_infos(int i) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=135&c=3
  inline void set_context_local_infos(int i, int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=141&c=3
  inline int saved_class_variable_info() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=141&c=3
  inline void set_saved_class_variable_info(int value);

  // Torque type: (class String | Zero)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=147&c=3
  inline Object function_variable_info_name() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=147&c=3
  inline Object function_variable_info_name(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=147&c=3
  inline void set_function_variable_info_name(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=147&c=3
  inline int function_variable_info_context_or_stack_slot_index() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=147&c=3
  inline void set_function_variable_info_context_or_stack_slot_index(int value);

  // Torque type: (Undefined | class String)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=152&c=3
  inline PrimitiveHeapObject inferred_function_name() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=152&c=3
  inline PrimitiveHeapObject inferred_function_name(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=152&c=3
  inline void set_inferred_function_name(PrimitiveHeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=156&c=3
  inline int position_info_start() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=156&c=3
  inline void set_position_info_start(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=156&c=3
  inline int position_info_end() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=156&c=3
  inline void set_position_info_end(int value);

  // Torque type: (TheHole | class ScopeInfo)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=164&c=3
  inline HeapObject outer_scope_info() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=164&c=3
  inline HeapObject outer_scope_info(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=164&c=3
  inline void set_outer_scope_info(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=169&c=3
  inline FixedArray locals_block_list() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=169&c=3
  inline FixedArray locals_block_list(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=169&c=3
  inline void set_locals_block_list(FixedArray value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: SourceTextModuleInfo
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=174&c=3
  inline FixedArray module_info() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=174&c=3
  inline FixedArray module_info(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=174&c=3
  inline void set_module_info(FixedArray value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=176&c=9
  inline int module_variable_count() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=176&c=9
  inline void set_module_variable_count(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=178&c=3
  inline String module_variables_name(int i) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=178&c=3
  inline String module_variables_name(PtrComprCageBase cage_base, int i) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=178&c=3
  inline void set_module_variables_name(int i, String value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=178&c=3
  inline int module_variables_index(int i) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=178&c=3
  inline void set_module_variables_index(int i, int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=178&c=3
  inline int module_variables_properties(int i) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=178&c=3
  inline void set_module_variables_properties(int i, int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=110&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=110&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(ScopeInfo)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=110&c=1
  V8_EXPORT_PRIVATE void ScopeInfoVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=112&c=9
  static constexpr int kFlagsOffset = P::kHeaderSize;
  static constexpr int kFlagsOffsetEnd = kFlagsOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=115&c=3
  static constexpr int kParameterCountOffset = kFlagsOffsetEnd + 1;
  static constexpr int kParameterCountOffsetEnd = kParameterCountOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=119&c=9
  static constexpr int kContextLocalCountOffset = kParameterCountOffsetEnd + 1;
  static constexpr int kContextLocalCountOffsetEnd = kContextLocalCountOffset + kTaggedSize - 1;
  static constexpr int kHeaderSize = kContextLocalCountOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=124&c=3
  static constexpr int kContextLocalNamesOffset = kContextLocalCountOffsetEnd + 1;
  static constexpr int kContextLocalNamesOffsetEnd = kContextLocalNamesOffset + 0 - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=129&c=3
  inline int ContextLocalNamesHashtableOffset() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=135&c=3
  inline int ContextLocalInfosOffset() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=141&c=3
  inline int SavedClassVariableInfoOffset() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=147&c=3
  inline int FunctionVariableInfoOffset() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=152&c=3
  inline int InferredFunctionNameOffset() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=156&c=3
  inline int PositionInfoOffset() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=164&c=3
  inline int OuterScopeInfoOffset() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=169&c=3
  inline int LocalsBlockListOffset() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=174&c=3
  inline int ModuleInfoOffset() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=176&c=9
  inline int ModuleVariableCountOffset() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=178&c=3
  inline int ModuleVariablesOffset() const;
  static constexpr int kEndOfStrongFieldsOffset = kContextLocalNamesOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kContextLocalNamesOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kContextLocalNamesOffsetEnd + 1;

  // SizeFor implementations not generated due to complex array lengths

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=110&c=1
  inline int AllocatedSize() const;
  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedScopeInfo() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedScopeInfo, DAlias>::value,
        "class TorqueGeneratedScopeInfo should be used as direct base for ScopeInfo.");
  }

 protected:
  inline explicit TorqueGeneratedScopeInfo(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedScopeInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

struct TorqueGeneratedPositionInfoOffsets {
  static constexpr int kStartOffset = 0;
  static constexpr int kEndOffset = 4;
  static constexpr int kSize = 8;
};

struct TorqueGeneratedFunctionVariableInfoOffsets {
  static constexpr int kNameOffset = 0;
  static constexpr int kContextOrStackSlotIndexOffset = 4;
  static constexpr int kSize = 8;
};

struct TorqueGeneratedModuleVariableOffsets {
  static constexpr int kNameOffset = 0;
  static constexpr int kIndexOffset = 4;
  static constexpr int kPropertiesOffset = 8;
  static constexpr int kSize = 12;
};

