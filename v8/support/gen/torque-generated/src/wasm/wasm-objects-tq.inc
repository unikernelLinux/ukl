class WasmInternalFunction;
class WasmApiFunctionRef;
class WasmFunctionData;
class WasmExportedFunctionData;
class WasmJSFunctionData;
class WasmCapiFunctionData;
class WasmOnFulfilledData;
class WasmIndirectFunctionTable;
class WasmContinuationObject;
class WasmSuspenderObject;
class WasmExceptionTag;
class WasmModuleObject;
class WasmTableObject;
class WasmMemoryObject;
class WasmGlobalObject;
class WasmTagObject;
class AsmWasmData;
class WasmTypeInfo;
class WasmObject;
class WasmStruct;
class WasmArray;
// Alias for HeapObject::IsWasmInternalFunction() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=31&c=1
V8_EXPORT_PRIVATE bool IsWasmInternalFunction_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=31&c=1
template <class D, class P>
class TorqueGeneratedWasmInternalFunction : public P {
  static_assert(
      std::is_same<WasmInternalFunction, D>::value,
      "Use this class as direct base for WasmInternalFunction.");
  static_assert(
      std::is_same<Foreign, P>::value,
      "Pass in Foreign as second template parameter for TorqueGeneratedWasmInternalFunction.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmInternalFunction<D,P>;

  // Torque type: (class WasmInstanceObject | class WasmApiFunctionRef)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=38&c=3
  inline HeapObject ref() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=38&c=3
  inline HeapObject ref(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=38&c=3
  inline void set_ref(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | class JSFunction)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=40&c=3
  inline HeapObject external() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=40&c=3
  inline HeapObject external(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=40&c=3
  inline void set_external(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=42&c=31
  inline CodeDataContainer code() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=42&c=31
  inline CodeDataContainer code(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=42&c=31
  inline void set_code(CodeDataContainer value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=31&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=31&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(WasmInternalFunction)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=31&c=1
  V8_EXPORT_PRIVATE void WasmInternalFunctionVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=38&c=3
  static constexpr int kRefOffset = P::kHeaderSize;
  static constexpr int kRefOffsetEnd = kRefOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=40&c=3
  static constexpr int kExternalOffset = kRefOffsetEnd + 1;
  static constexpr int kExternalOffsetEnd = kExternalOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=42&c=31
  static constexpr int kCodeOffset = kExternalOffsetEnd + 1;
  static constexpr int kCodeOffsetEnd = kCodeOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kCodeOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kCodeOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kCodeOffsetEnd + 1;
  static constexpr int kHeaderSize = kCodeOffsetEnd + 1;
  static constexpr int kSize = kCodeOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=31&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 24);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=31&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmInternalFunction() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmInternalFunction, DAlias>::value,
        "class TorqueGeneratedWasmInternalFunction should be used as direct base for WasmInternalFunction.");
  }

 protected:
  inline explicit TorqueGeneratedWasmInternalFunction(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWasmInternalFunction(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsWasmApiFunctionRef() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=20&c=1
V8_EXPORT_PRIVATE bool IsWasmApiFunctionRef_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=20&c=1
template <class D, class P>
class TorqueGeneratedWasmApiFunctionRef : public P {
  static_assert(
      std::is_same<WasmApiFunctionRef, D>::value,
      "Use this class as direct base for WasmApiFunctionRef.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedWasmApiFunctionRef.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmApiFunctionRef<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=21&c=3
  inline Address isolate_root() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=21&c=3
  inline void set_isolate_root(Address value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=22&c=3
  inline NativeContext native_context() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=22&c=3
  inline NativeContext native_context(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=22&c=3
  inline void set_native_context(NativeContext value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (class JSReceiver | Undefined)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=23&c=3
  inline HeapObject callable() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=23&c=3
  inline HeapObject callable(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=23&c=3
  inline void set_callable(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | class WasmSuspenderObject)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=24&c=3
  inline HeapObject suspender() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=24&c=3
  inline HeapObject suspender(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=24&c=3
  inline void set_suspender(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=20&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=20&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(WasmApiFunctionRef)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=20&c=1
  V8_EXPORT_PRIVATE void WasmApiFunctionRefVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=21&c=3
  static constexpr int kIsolateRootOffset = P::kHeaderSize;
  static constexpr int kIsolateRootOffsetEnd = kIsolateRootOffset + kSystemPointerSize - 1;
  static constexpr int kStartOfStrongFieldsOffset = kIsolateRootOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=22&c=3
  static constexpr int kNativeContextOffset = kIsolateRootOffsetEnd + 1;
  static constexpr int kNativeContextOffsetEnd = kNativeContextOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=23&c=3
  static constexpr int kCallableOffset = kNativeContextOffsetEnd + 1;
  static constexpr int kCallableOffsetEnd = kCallableOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=24&c=3
  static constexpr int kSuspenderOffset = kCallableOffsetEnd + 1;
  static constexpr int kSuspenderOffsetEnd = kSuspenderOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kSuspenderOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kSuspenderOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kSuspenderOffsetEnd + 1;
  static constexpr int kHeaderSize = kSuspenderOffsetEnd + 1;
  static constexpr int kSize = kSuspenderOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=20&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 24);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=20&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmApiFunctionRef() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmApiFunctionRef, DAlias>::value,
        "class TorqueGeneratedWasmApiFunctionRef should be used as direct base for WasmApiFunctionRef.");
  }

 protected:
  inline explicit TorqueGeneratedWasmApiFunctionRef(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWasmApiFunctionRef(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsWasmFunctionData() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=46&c=1
V8_EXPORT_PRIVATE bool IsWasmFunctionData_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=46&c=1
template <class D, class P>
class TorqueGeneratedWasmFunctionData : public P {
  static_assert(
      std::is_same<WasmFunctionData, D>::value,
      "Use this class as direct base for WasmFunctionData.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedWasmFunctionData.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmFunctionData<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=48&c=3
  inline WasmInternalFunction internal() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=48&c=3
  inline WasmInternalFunction internal(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=48&c=3
  inline void set_internal(WasmInternalFunction value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=50&c=31
  inline CodeDataContainer wrapper_code() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=50&c=31
  inline CodeDataContainer wrapper_code(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=50&c=31
  inline void set_wrapper_code(CodeDataContainer value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=46&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=46&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(WasmFunctionData)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=46&c=1
  V8_EXPORT_PRIVATE void WasmFunctionDataVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=48&c=3
  static constexpr int kInternalOffset = P::kHeaderSize;
  static constexpr int kInternalOffsetEnd = kInternalOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=50&c=31
  static constexpr int kWrapperCodeOffset = kInternalOffsetEnd + 1;
  static constexpr int kWrapperCodeOffsetEnd = kWrapperCodeOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kWrapperCodeOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kWrapperCodeOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kWrapperCodeOffsetEnd + 1;
  static constexpr int kHeaderSize = kWrapperCodeOffsetEnd + 1;
  static constexpr int kSize = kWrapperCodeOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=46&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 12);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=46&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmFunctionData() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmFunctionData, DAlias>::value,
        "class TorqueGeneratedWasmFunctionData should be used as direct base for WasmFunctionData.");
  }

 protected:
  inline explicit TorqueGeneratedWasmFunctionData(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWasmFunctionData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsWasmExportedFunctionData() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=54&c=1
V8_EXPORT_PRIVATE bool IsWasmExportedFunctionData_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=54&c=1
template <class D, class P>
class TorqueGeneratedWasmExportedFunctionData : public P {
  static_assert(
      std::is_same<WasmExportedFunctionData, D>::value,
      "Use this class as direct base for WasmExportedFunctionData.");
  static_assert(
      std::is_same<WasmFunctionData, P>::value,
      "Pass in WasmFunctionData as second template parameter for TorqueGeneratedWasmExportedFunctionData.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmExportedFunctionData<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=58&c=3
  inline WasmInstanceObject instance() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=58&c=3
  inline WasmInstanceObject instance(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=58&c=3
  inline void set_instance(WasmInstanceObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=59&c=3
  inline int function_index() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=59&c=3
  inline void set_function_index(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=60&c=3
  inline Foreign signature() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=60&c=3
  inline Foreign signature(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=60&c=3
  inline void set_signature(Foreign value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=61&c=3
  inline int wrapper_budget() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=61&c=3
  inline void set_wrapper_budget(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=64&c=31
  inline CodeDataContainer c_wrapper_code() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=64&c=31
  inline CodeDataContainer c_wrapper_code(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=64&c=31
  inline void set_c_wrapper_code(CodeDataContainer value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=66&c=3
  inline int packed_args_size() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=66&c=3
  inline void set_packed_args_size(int value);

  // Torque type: (Undefined | class WasmSuspenderObject)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=69&c=3
  inline HeapObject suspender() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=69&c=3
  inline HeapObject suspender(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=69&c=3
  inline void set_suspender(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=54&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=54&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(WasmExportedFunctionData)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=54&c=1
  V8_EXPORT_PRIVATE void WasmExportedFunctionDataVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=58&c=3
  static constexpr int kInstanceOffset = P::kHeaderSize;
  static constexpr int kInstanceOffsetEnd = kInstanceOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=59&c=3
  static constexpr int kFunctionIndexOffset = kInstanceOffsetEnd + 1;
  static constexpr int kFunctionIndexOffsetEnd = kFunctionIndexOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=60&c=3
  static constexpr int kSignatureOffset = kFunctionIndexOffsetEnd + 1;
  static constexpr int kSignatureOffsetEnd = kSignatureOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=61&c=3
  static constexpr int kWrapperBudgetOffset = kSignatureOffsetEnd + 1;
  static constexpr int kWrapperBudgetOffsetEnd = kWrapperBudgetOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=64&c=31
  static constexpr int kCWrapperCodeOffset = kWrapperBudgetOffsetEnd + 1;
  static constexpr int kCWrapperCodeOffsetEnd = kCWrapperCodeOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=66&c=3
  static constexpr int kPackedArgsSizeOffset = kCWrapperCodeOffsetEnd + 1;
  static constexpr int kPackedArgsSizeOffsetEnd = kPackedArgsSizeOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=69&c=3
  static constexpr int kSuspenderOffset = kPackedArgsSizeOffsetEnd + 1;
  static constexpr int kSuspenderOffsetEnd = kSuspenderOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kSuspenderOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kSuspenderOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kSuspenderOffsetEnd + 1;
  static constexpr int kHeaderSize = kSuspenderOffsetEnd + 1;
  static constexpr int kSize = kSuspenderOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=54&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 40);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=54&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmExportedFunctionData() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmExportedFunctionData, DAlias>::value,
        "class TorqueGeneratedWasmExportedFunctionData should be used as direct base for WasmExportedFunctionData.");
  }

 protected:
  inline explicit TorqueGeneratedWasmExportedFunctionData(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWasmExportedFunctionData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsWasmJSFunctionData() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=72&c=1
V8_EXPORT_PRIVATE bool IsWasmJSFunctionData_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=72&c=1
template <class D, class P>
class TorqueGeneratedWasmJSFunctionData : public P {
  static_assert(
      std::is_same<WasmJSFunctionData, D>::value,
      "Use this class as direct base for WasmJSFunctionData.");
  static_assert(
      std::is_same<WasmFunctionData, P>::value,
      "Pass in WasmFunctionData as second template parameter for TorqueGeneratedWasmJSFunctionData.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmJSFunctionData<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=73&c=3
  inline int serialized_return_count() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=73&c=3
  inline void set_serialized_return_count(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=74&c=3
  inline int serialized_parameter_count() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=74&c=3
  inline void set_serialized_parameter_count(int value);

  // Torque type: PodArrayOfWasmValueType
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=75&c=3
  inline PodArray<wasm::ValueType> serialized_signature() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=75&c=3
  inline PodArray<wasm::ValueType> serialized_signature(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=75&c=3
  inline void set_serialized_signature(PodArray<wasm::ValueType> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=72&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=72&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(WasmJSFunctionData)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=72&c=1
  V8_EXPORT_PRIVATE void WasmJSFunctionDataVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=73&c=3
  static constexpr int kSerializedReturnCountOffset = P::kHeaderSize;
  static constexpr int kSerializedReturnCountOffsetEnd = kSerializedReturnCountOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=74&c=3
  static constexpr int kSerializedParameterCountOffset = kSerializedReturnCountOffsetEnd + 1;
  static constexpr int kSerializedParameterCountOffsetEnd = kSerializedParameterCountOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=75&c=3
  static constexpr int kSerializedSignatureOffset = kSerializedParameterCountOffsetEnd + 1;
  static constexpr int kSerializedSignatureOffsetEnd = kSerializedSignatureOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kSerializedSignatureOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kSerializedSignatureOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kSerializedSignatureOffsetEnd + 1;
  static constexpr int kHeaderSize = kSerializedSignatureOffsetEnd + 1;
  static constexpr int kSize = kSerializedSignatureOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=72&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 24);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=72&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmJSFunctionData() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmJSFunctionData, DAlias>::value,
        "class TorqueGeneratedWasmJSFunctionData should be used as direct base for WasmJSFunctionData.");
  }

 protected:
  inline explicit TorqueGeneratedWasmJSFunctionData(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWasmJSFunctionData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsWasmCapiFunctionData() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=78&c=1
V8_EXPORT_PRIVATE bool IsWasmCapiFunctionData_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=78&c=1
template <class D, class P>
class TorqueGeneratedWasmCapiFunctionData : public P {
  static_assert(
      std::is_same<WasmCapiFunctionData, D>::value,
      "Use this class as direct base for WasmCapiFunctionData.");
  static_assert(
      std::is_same<WasmFunctionData, P>::value,
      "Pass in WasmFunctionData as second template parameter for TorqueGeneratedWasmCapiFunctionData.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmCapiFunctionData<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=79&c=3
  inline Foreign embedder_data() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=79&c=3
  inline Foreign embedder_data(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=79&c=3
  inline void set_embedder_data(Foreign value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: PodArrayOfWasmValueType
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=80&c=3
  inline PodArray<wasm::ValueType> serialized_signature() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=80&c=3
  inline PodArray<wasm::ValueType> serialized_signature(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=80&c=3
  inline void set_serialized_signature(PodArray<wasm::ValueType> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=78&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=78&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(WasmCapiFunctionData)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=78&c=1
  V8_EXPORT_PRIVATE void WasmCapiFunctionDataVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=79&c=3
  static constexpr int kEmbedderDataOffset = P::kHeaderSize;
  static constexpr int kEmbedderDataOffsetEnd = kEmbedderDataOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=80&c=3
  static constexpr int kSerializedSignatureOffset = kEmbedderDataOffsetEnd + 1;
  static constexpr int kSerializedSignatureOffsetEnd = kSerializedSignatureOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kSerializedSignatureOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kSerializedSignatureOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kSerializedSignatureOffsetEnd + 1;
  static constexpr int kHeaderSize = kSerializedSignatureOffsetEnd + 1;
  static constexpr int kSize = kSerializedSignatureOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=78&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 20);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=78&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmCapiFunctionData() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmCapiFunctionData, DAlias>::value,
        "class TorqueGeneratedWasmCapiFunctionData should be used as direct base for WasmCapiFunctionData.");
  }

 protected:
  inline explicit TorqueGeneratedWasmCapiFunctionData(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWasmCapiFunctionData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsWasmOnFulfilledData() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=83&c=1
V8_EXPORT_PRIVATE bool IsWasmOnFulfilledData_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=83&c=1
template <class D, class P>
class TorqueGeneratedWasmOnFulfilledData : public P {
  static_assert(
      std::is_same<WasmOnFulfilledData, D>::value,
      "Use this class as direct base for WasmOnFulfilledData.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedWasmOnFulfilledData.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmOnFulfilledData<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=84&c=3
  inline WasmSuspenderObject suspender() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=84&c=3
  inline WasmSuspenderObject suspender(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=84&c=3
  inline void set_suspender(WasmSuspenderObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=83&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=83&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(WasmOnFulfilledData)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=83&c=1
  V8_EXPORT_PRIVATE void WasmOnFulfilledDataVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=84&c=3
  static constexpr int kSuspenderOffset = P::kHeaderSize;
  static constexpr int kSuspenderOffsetEnd = kSuspenderOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kSuspenderOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kSuspenderOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kSuspenderOffsetEnd + 1;
  static constexpr int kHeaderSize = kSuspenderOffsetEnd + 1;
  static constexpr int kSize = kSuspenderOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=83&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 8);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=83&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmOnFulfilledData() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmOnFulfilledData, DAlias>::value,
        "class TorqueGeneratedWasmOnFulfilledData should be used as direct base for WasmOnFulfilledData.");
  }

 protected:
  inline explicit TorqueGeneratedWasmOnFulfilledData(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWasmOnFulfilledData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsWasmIndirectFunctionTable() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=87&c=1
V8_EXPORT_PRIVATE bool IsWasmIndirectFunctionTable_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=87&c=1
template <class D, class P>
class TorqueGeneratedWasmIndirectFunctionTable : public P {
  static_assert(
      std::is_same<WasmIndirectFunctionTable, D>::value,
      "Use this class as direct base for WasmIndirectFunctionTable.");
  static_assert(
      std::is_same<Struct, P>::value,
      "Pass in Struct as second template parameter for TorqueGeneratedWasmIndirectFunctionTable.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmIndirectFunctionTable<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=88&c=3
  inline uint32_t size() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=88&c=3
  inline void set_size(uint32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=91&c=3
  inline Address sig_ids() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=91&c=3
  inline void set_sig_ids(Address value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=92&c=3
  inline Address targets() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=92&c=3
  inline void set_targets(Address value);

  // Torque type: (Undefined | class Foreign)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=93&c=3
  inline HeapObject managed_native_allocations() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=93&c=3
  inline HeapObject managed_native_allocations(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=93&c=3
  inline void set_managed_native_allocations(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=94&c=3
  inline FixedArray refs() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=94&c=3
  inline FixedArray refs(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=94&c=3
  inline void set_refs(FixedArray value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=87&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=87&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(WasmIndirectFunctionTable)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=87&c=1
  V8_EXPORT_PRIVATE void WasmIndirectFunctionTableVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=88&c=3
  static constexpr int kSizeOffset = P::kHeaderSize;
  static constexpr int kSizeOffsetEnd = kSizeOffset + kInt32Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=90&c=31
  static constexpr int kOptionalPaddingOffset = kSizeOffsetEnd + 1;
  static constexpr int kOptionalPaddingOffsetEnd = kOptionalPaddingOffset + 0 - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=91&c=3
  static constexpr int kSigIdsOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kSigIdsOffsetEnd = kSigIdsOffset + kSystemPointerSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=92&c=3
  static constexpr int kTargetsOffset = kSigIdsOffsetEnd + 1;
  static constexpr int kTargetsOffsetEnd = kTargetsOffset + kSystemPointerSize - 1;
  static constexpr int kStartOfStrongFieldsOffset = kTargetsOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=93&c=3
  static constexpr int kManagedNativeAllocationsOffset = kTargetsOffsetEnd + 1;
  static constexpr int kManagedNativeAllocationsOffsetEnd = kManagedNativeAllocationsOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=94&c=3
  static constexpr int kRefsOffset = kManagedNativeAllocationsOffsetEnd + 1;
  static constexpr int kRefsOffsetEnd = kRefsOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kRefsOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kRefsOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kRefsOffsetEnd + 1;
  static constexpr int kHeaderSize = kRefsOffsetEnd + 1;
  static constexpr int kSize = kRefsOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=87&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 32);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=87&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmIndirectFunctionTable() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmIndirectFunctionTable, DAlias>::value,
        "class TorqueGeneratedWasmIndirectFunctionTable should be used as direct base for WasmIndirectFunctionTable.");
  }

 protected:
  inline explicit TorqueGeneratedWasmIndirectFunctionTable(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWasmIndirectFunctionTable(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsWasmContinuationObject() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=97&c=1
V8_EXPORT_PRIVATE bool IsWasmContinuationObject_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=97&c=1
template <class D, class P>
class TorqueGeneratedWasmContinuationObject : public P {
  static_assert(
      std::is_same<WasmContinuationObject, D>::value,
      "Use this class as direct base for WasmContinuationObject.");
  static_assert(
      std::is_same<Struct, P>::value,
      "Pass in Struct as second template parameter for TorqueGeneratedWasmContinuationObject.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmContinuationObject<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=98&c=3
  inline Foreign stack() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=98&c=3
  inline Foreign stack(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=98&c=3
  inline void set_stack(Foreign value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=99&c=3
  inline Foreign jmpbuf() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=99&c=3
  inline Foreign jmpbuf(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=99&c=3
  inline void set_jmpbuf(Foreign value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | class WasmContinuationObject)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=100&c=3
  inline HeapObject parent() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=100&c=3
  inline HeapObject parent(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=100&c=3
  inline void set_parent(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=97&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=97&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(WasmContinuationObject)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=97&c=1
  V8_EXPORT_PRIVATE void WasmContinuationObjectVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=98&c=3
  static constexpr int kStackOffset = P::kHeaderSize;
  static constexpr int kStackOffsetEnd = kStackOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=99&c=3
  static constexpr int kJmpbufOffset = kStackOffsetEnd + 1;
  static constexpr int kJmpbufOffsetEnd = kJmpbufOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=100&c=3
  static constexpr int kParentOffset = kJmpbufOffsetEnd + 1;
  static constexpr int kParentOffsetEnd = kParentOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kParentOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kParentOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kParentOffsetEnd + 1;
  static constexpr int kHeaderSize = kParentOffsetEnd + 1;
  static constexpr int kSize = kParentOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=97&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 16);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=97&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmContinuationObject() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmContinuationObject, DAlias>::value,
        "class TorqueGeneratedWasmContinuationObject should be used as direct base for WasmContinuationObject.");
  }

 protected:
  inline explicit TorqueGeneratedWasmContinuationObject(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWasmContinuationObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsWasmSuspenderObject() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=103&c=1
V8_EXPORT_PRIVATE bool IsWasmSuspenderObject_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=103&c=1
template <class D, class P>
class TorqueGeneratedWasmSuspenderObject : public P {
  static_assert(
      std::is_same<WasmSuspenderObject, D>::value,
      "Use this class as direct base for WasmSuspenderObject.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedWasmSuspenderObject.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmSuspenderObject<D,P>;

  // Torque type: (Undefined | class WasmContinuationObject)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=104&c=3
  inline HeapObject continuation() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=104&c=3
  inline HeapObject continuation(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=104&c=3
  inline void set_continuation(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | class WasmSuspenderObject)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=105&c=3
  inline HeapObject parent() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=105&c=3
  inline HeapObject parent(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=105&c=3
  inline void set_parent(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=106&c=3
  inline JSObject resume() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=106&c=3
  inline JSObject resume(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=106&c=3
  inline void set_resume(JSObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=107&c=3
  inline int state() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=107&c=3
  inline void set_state(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=103&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=103&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(WasmSuspenderObject)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=103&c=1
  V8_EXPORT_PRIVATE void WasmSuspenderObjectVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=104&c=3
  static constexpr int kContinuationOffset = P::kHeaderSize;
  static constexpr int kContinuationOffsetEnd = kContinuationOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=105&c=3
  static constexpr int kParentOffset = kContinuationOffsetEnd + 1;
  static constexpr int kParentOffsetEnd = kParentOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=106&c=3
  static constexpr int kResumeOffset = kParentOffsetEnd + 1;
  static constexpr int kResumeOffsetEnd = kResumeOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=107&c=3
  static constexpr int kStateOffset = kResumeOffsetEnd + 1;
  static constexpr int kStateOffsetEnd = kStateOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kStateOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kStateOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kStateOffsetEnd + 1;
  static constexpr int kHeaderSize = kStateOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmSuspenderObject() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmSuspenderObject, DAlias>::value,
        "class TorqueGeneratedWasmSuspenderObject should be used as direct base for WasmSuspenderObject.");
  }

 protected:
  inline explicit TorqueGeneratedWasmSuspenderObject(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWasmSuspenderObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsWasmExceptionTag() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=110&c=1
V8_EXPORT_PRIVATE bool IsWasmExceptionTag_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=110&c=1
template <class D, class P>
class TorqueGeneratedWasmExceptionTag : public P {
  static_assert(
      std::is_same<WasmExceptionTag, D>::value,
      "Use this class as direct base for WasmExceptionTag.");
  static_assert(
      std::is_same<Struct, P>::value,
      "Pass in Struct as second template parameter for TorqueGeneratedWasmExceptionTag.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmExceptionTag<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=114&c=3
  inline int index() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=114&c=3
  inline void set_index(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=110&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=110&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(WasmExceptionTag)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=110&c=1
  V8_EXPORT_PRIVATE void WasmExceptionTagVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=114&c=3
  static constexpr int kIndexOffset = P::kHeaderSize;
  static constexpr int kIndexOffsetEnd = kIndexOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kIndexOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kIndexOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kIndexOffsetEnd + 1;
  static constexpr int kHeaderSize = kIndexOffsetEnd + 1;
  static constexpr int kSize = kIndexOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=110&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 8);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=110&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmExceptionTag() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmExceptionTag, DAlias>::value,
        "class TorqueGeneratedWasmExceptionTag should be used as direct base for WasmExceptionTag.");
  }

 protected:
  inline explicit TorqueGeneratedWasmExceptionTag(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWasmExceptionTag(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsWasmModuleObject() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=117&c=1
V8_EXPORT_PRIVATE bool IsWasmModuleObject_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=117&c=1
template <class D, class P>
class TorqueGeneratedWasmModuleObject : public P {
  static_assert(
      std::is_same<WasmModuleObject, D>::value,
      "Use this class as direct base for WasmModuleObject.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedWasmModuleObject.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmModuleObject<D,P>;

  // Torque type: ManagedWasmNativeModule
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=118&c=3
  inline Managed<wasm::NativeModule> managed_native_module() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=118&c=3
  inline Managed<wasm::NativeModule> managed_native_module(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=118&c=3
  inline void set_managed_native_module(Managed<wasm::NativeModule> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=119&c=3
  inline FixedArray export_wrappers() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=119&c=3
  inline FixedArray export_wrappers(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=119&c=3
  inline void set_export_wrappers(FixedArray value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=120&c=3
  inline Script script() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=120&c=3
  inline Script script(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=120&c=3
  inline void set_script(Script value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=117&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=117&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(WasmModuleObject)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=117&c=1
  V8_EXPORT_PRIVATE void WasmModuleObjectVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=118&c=3
  static constexpr int kManagedNativeModuleOffset = P::kHeaderSize;
  static constexpr int kManagedNativeModuleOffsetEnd = kManagedNativeModuleOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=119&c=3
  static constexpr int kExportWrappersOffset = kManagedNativeModuleOffsetEnd + 1;
  static constexpr int kExportWrappersOffsetEnd = kExportWrappersOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=120&c=3
  static constexpr int kScriptOffset = kExportWrappersOffsetEnd + 1;
  static constexpr int kScriptOffsetEnd = kScriptOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kScriptOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kScriptOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kScriptOffsetEnd + 1;
  static constexpr int kHeaderSize = kScriptOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmModuleObject() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmModuleObject, DAlias>::value,
        "class TorqueGeneratedWasmModuleObject should be used as direct base for WasmModuleObject.");
  }

 protected:
  inline explicit TorqueGeneratedWasmModuleObject(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWasmModuleObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsWasmTableObject() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=123&c=1
V8_EXPORT_PRIVATE bool IsWasmTableObject_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=123&c=1
template <class D, class P>
class TorqueGeneratedWasmTableObject : public P {
  static_assert(
      std::is_same<WasmTableObject, D>::value,
      "Use this class as direct base for WasmTableObject.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedWasmTableObject.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmTableObject<D,P>;

  // Torque type: (Undefined | class WasmInstanceObject)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=128&c=3
  inline HeapObject instance() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=128&c=3
  inline HeapObject instance(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=128&c=3
  inline void set_instance(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=131&c=3
  inline FixedArray entries() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=131&c=3
  inline FixedArray entries(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=131&c=3
  inline void set_entries(FixedArray value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=132&c=3
  inline int current_length() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=132&c=3
  inline void set_current_length(int value);

  // Torque type: NumberOrUndefined
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=133&c=3
  inline Object maximum_length() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=133&c=3
  inline Object maximum_length(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=133&c=3
  inline void set_maximum_length(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=134&c=3
  inline FixedArray dispatch_tables() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=134&c=3
  inline FixedArray dispatch_tables(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=134&c=3
  inline void set_dispatch_tables(FixedArray value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=135&c=3
  inline int raw_type() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=135&c=3
  inline void set_raw_type(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=123&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=123&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(WasmTableObject)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=123&c=1
  V8_EXPORT_PRIVATE void WasmTableObjectVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=128&c=3
  static constexpr int kInstanceOffset = P::kHeaderSize;
  static constexpr int kInstanceOffsetEnd = kInstanceOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=131&c=3
  static constexpr int kEntriesOffset = kInstanceOffsetEnd + 1;
  static constexpr int kEntriesOffsetEnd = kEntriesOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=132&c=3
  static constexpr int kCurrentLengthOffset = kEntriesOffsetEnd + 1;
  static constexpr int kCurrentLengthOffsetEnd = kCurrentLengthOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=133&c=3
  static constexpr int kMaximumLengthOffset = kCurrentLengthOffsetEnd + 1;
  static constexpr int kMaximumLengthOffsetEnd = kMaximumLengthOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=134&c=3
  static constexpr int kDispatchTablesOffset = kMaximumLengthOffsetEnd + 1;
  static constexpr int kDispatchTablesOffsetEnd = kDispatchTablesOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=135&c=3
  static constexpr int kRawTypeOffset = kDispatchTablesOffsetEnd + 1;
  static constexpr int kRawTypeOffsetEnd = kRawTypeOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kRawTypeOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kRawTypeOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kRawTypeOffsetEnd + 1;
  static constexpr int kHeaderSize = kRawTypeOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmTableObject() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmTableObject, DAlias>::value,
        "class TorqueGeneratedWasmTableObject should be used as direct base for WasmTableObject.");
  }

 protected:
  inline explicit TorqueGeneratedWasmTableObject(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWasmTableObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsWasmMemoryObject() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=138&c=1
V8_EXPORT_PRIVATE bool IsWasmMemoryObject_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=138&c=1
template <class D, class P>
class TorqueGeneratedWasmMemoryObject : public P {
  static_assert(
      std::is_same<WasmMemoryObject, D>::value,
      "Use this class as direct base for WasmMemoryObject.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedWasmMemoryObject.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmMemoryObject<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=139&c=3
  inline JSArrayBuffer array_buffer() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=139&c=3
  inline JSArrayBuffer array_buffer(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=139&c=3
  inline void set_array_buffer(JSArrayBuffer value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=140&c=3
  inline int maximum_pages() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=140&c=3
  inline void set_maximum_pages(int value);

  // Torque type: (Undefined | class WeakArrayList)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=141&c=3
  inline HeapObject instances() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=141&c=3
  inline HeapObject instances(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=141&c=3
  inline void set_instances(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=138&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=138&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(WasmMemoryObject)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=138&c=1
  V8_EXPORT_PRIVATE void WasmMemoryObjectVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=139&c=3
  static constexpr int kArrayBufferOffset = P::kHeaderSize;
  static constexpr int kArrayBufferOffsetEnd = kArrayBufferOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=140&c=3
  static constexpr int kMaximumPagesOffset = kArrayBufferOffsetEnd + 1;
  static constexpr int kMaximumPagesOffsetEnd = kMaximumPagesOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=141&c=3
  static constexpr int kInstancesOffset = kMaximumPagesOffsetEnd + 1;
  static constexpr int kInstancesOffsetEnd = kInstancesOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kInstancesOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kInstancesOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kInstancesOffsetEnd + 1;
  static constexpr int kHeaderSize = kInstancesOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmMemoryObject() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmMemoryObject, DAlias>::value,
        "class TorqueGeneratedWasmMemoryObject should be used as direct base for WasmMemoryObject.");
  }

 protected:
  inline explicit TorqueGeneratedWasmMemoryObject(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWasmMemoryObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsWasmGlobalObject() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=144&c=1
V8_EXPORT_PRIVATE bool IsWasmGlobalObject_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=144&c=1
template <class D, class P>
class TorqueGeneratedWasmGlobalObject : public P {
  static_assert(
      std::is_same<WasmGlobalObject, D>::value,
      "Use this class as direct base for WasmGlobalObject.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedWasmGlobalObject.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmGlobalObject<D,P>;

  // Torque type: (Undefined | class WasmInstanceObject)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=149&c=3
  inline HeapObject instance() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=149&c=3
  inline HeapObject instance(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=149&c=3
  inline void set_instance(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | class JSArrayBuffer)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=150&c=3
  inline HeapObject untagged_buffer() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=150&c=3
  inline HeapObject untagged_buffer(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=150&c=3
  inline void set_untagged_buffer(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | class FixedArray)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=151&c=3
  inline HeapObject tagged_buffer() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=151&c=3
  inline HeapObject tagged_buffer(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=151&c=3
  inline void set_tagged_buffer(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=152&c=3
  inline int offset() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=152&c=3
  inline void set_offset(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=153&c=3
  inline int raw_type() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=153&c=3
  inline void set_raw_type(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=156&c=3
  inline int is_mutable() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=156&c=3
  inline void set_is_mutable(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=144&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=144&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(WasmGlobalObject)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=144&c=1
  V8_EXPORT_PRIVATE void WasmGlobalObjectVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=149&c=3
  static constexpr int kInstanceOffset = P::kHeaderSize;
  static constexpr int kInstanceOffsetEnd = kInstanceOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=150&c=3
  static constexpr int kUntaggedBufferOffset = kInstanceOffsetEnd + 1;
  static constexpr int kUntaggedBufferOffsetEnd = kUntaggedBufferOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=151&c=3
  static constexpr int kTaggedBufferOffset = kUntaggedBufferOffsetEnd + 1;
  static constexpr int kTaggedBufferOffsetEnd = kTaggedBufferOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=152&c=3
  static constexpr int kOffsetOffset = kTaggedBufferOffsetEnd + 1;
  static constexpr int kOffsetOffsetEnd = kOffsetOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=153&c=3
  static constexpr int kRawTypeOffset = kOffsetOffsetEnd + 1;
  static constexpr int kRawTypeOffsetEnd = kRawTypeOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=156&c=3
  static constexpr int kIsMutableOffset = kRawTypeOffsetEnd + 1;
  static constexpr int kIsMutableOffsetEnd = kIsMutableOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kIsMutableOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kIsMutableOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kIsMutableOffsetEnd + 1;
  static constexpr int kHeaderSize = kIsMutableOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmGlobalObject() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmGlobalObject, DAlias>::value,
        "class TorqueGeneratedWasmGlobalObject should be used as direct base for WasmGlobalObject.");
  }

 protected:
  inline explicit TorqueGeneratedWasmGlobalObject(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWasmGlobalObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsWasmTagObject() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=159&c=1
V8_EXPORT_PRIVATE bool IsWasmTagObject_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=159&c=1
template <class D, class P>
class TorqueGeneratedWasmTagObject : public P {
  static_assert(
      std::is_same<WasmTagObject, D>::value,
      "Use this class as direct base for WasmTagObject.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedWasmTagObject.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmTagObject<D,P>;

  // Torque type: PodArrayOfWasmValueType
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=160&c=3
  inline PodArray<wasm::ValueType> serialized_signature() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=160&c=3
  inline PodArray<wasm::ValueType> serialized_signature(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=160&c=3
  inline void set_serialized_signature(PodArray<wasm::ValueType> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=161&c=3
  inline HeapObject tag() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=161&c=3
  inline HeapObject tag(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=161&c=3
  inline void set_tag(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=159&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=159&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(WasmTagObject)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=159&c=1
  V8_EXPORT_PRIVATE void WasmTagObjectVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=160&c=3
  static constexpr int kSerializedSignatureOffset = P::kHeaderSize;
  static constexpr int kSerializedSignatureOffsetEnd = kSerializedSignatureOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=161&c=3
  static constexpr int kTagOffset = kSerializedSignatureOffsetEnd + 1;
  static constexpr int kTagOffsetEnd = kTagOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kTagOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kTagOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kTagOffsetEnd + 1;
  static constexpr int kHeaderSize = kTagOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmTagObject() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmTagObject, DAlias>::value,
        "class TorqueGeneratedWasmTagObject should be used as direct base for WasmTagObject.");
  }

 protected:
  inline explicit TorqueGeneratedWasmTagObject(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWasmTagObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsAsmWasmData() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=166&c=1
V8_EXPORT_PRIVATE bool IsAsmWasmData_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=166&c=1
template <class D, class P>
class TorqueGeneratedAsmWasmData : public P {
  static_assert(
      std::is_same<AsmWasmData, D>::value,
      "Use this class as direct base for AsmWasmData.");
  static_assert(
      std::is_same<Struct, P>::value,
      "Pass in Struct as second template parameter for TorqueGeneratedAsmWasmData.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedAsmWasmData<D,P>;

  // Torque type: ManagedWasmNativeModule
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=167&c=3
  inline Managed<wasm::NativeModule> managed_native_module() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=167&c=3
  inline Managed<wasm::NativeModule> managed_native_module(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=167&c=3
  inline void set_managed_native_module(Managed<wasm::NativeModule> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=168&c=3
  inline FixedArray export_wrappers() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=168&c=3
  inline FixedArray export_wrappers(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=168&c=3
  inline void set_export_wrappers(FixedArray value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=169&c=3
  inline HeapNumber uses_bitset() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=169&c=3
  inline HeapNumber uses_bitset(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=169&c=3
  inline void set_uses_bitset(HeapNumber value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=166&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=166&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(AsmWasmData)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=166&c=1
  V8_EXPORT_PRIVATE void AsmWasmDataVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=167&c=3
  static constexpr int kManagedNativeModuleOffset = P::kHeaderSize;
  static constexpr int kManagedNativeModuleOffsetEnd = kManagedNativeModuleOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=168&c=3
  static constexpr int kExportWrappersOffset = kManagedNativeModuleOffsetEnd + 1;
  static constexpr int kExportWrappersOffsetEnd = kExportWrappersOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=169&c=3
  static constexpr int kUsesBitsetOffset = kExportWrappersOffsetEnd + 1;
  static constexpr int kUsesBitsetOffsetEnd = kUsesBitsetOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kUsesBitsetOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kUsesBitsetOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kUsesBitsetOffsetEnd + 1;
  static constexpr int kHeaderSize = kUsesBitsetOffsetEnd + 1;
  static constexpr int kSize = kUsesBitsetOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=166&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 16);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=166&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedAsmWasmData() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedAsmWasmData, DAlias>::value,
        "class TorqueGeneratedAsmWasmData should be used as direct base for AsmWasmData.");
  }

 protected:
  inline explicit TorqueGeneratedAsmWasmData(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedAsmWasmData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsWasmTypeInfo() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=172&c=1
V8_EXPORT_PRIVATE bool IsWasmTypeInfo_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=172&c=1
template <class D, class P>
class TorqueGeneratedWasmTypeInfo : public P {
  static_assert(
      std::is_same<WasmTypeInfo, D>::value,
      "Use this class as direct base for WasmTypeInfo.");
  static_assert(
      std::is_same<Foreign, P>::value,
      "Pass in Foreign as second template parameter for TorqueGeneratedWasmTypeInfo.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmTypeInfo<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=173&c=3
  inline FixedArray supertypes() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=173&c=3
  inline FixedArray supertypes(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=173&c=3
  inline void set_supertypes(FixedArray value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=174&c=3
  inline ArrayList subtypes() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=174&c=3
  inline ArrayList subtypes(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=174&c=3
  inline void set_subtypes(ArrayList value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=176&c=3
  inline int instance_size() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=176&c=3
  inline void set_instance_size(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=185&c=3
  inline WasmInstanceObject instance() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=185&c=3
  inline WasmInstanceObject instance(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=185&c=3
  inline void set_instance(WasmInstanceObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=172&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=172&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(WasmTypeInfo)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=172&c=1
  V8_EXPORT_PRIVATE void WasmTypeInfoVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=173&c=3
  static constexpr int kSupertypesOffset = P::kHeaderSize;
  static constexpr int kSupertypesOffsetEnd = kSupertypesOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=174&c=3
  static constexpr int kSubtypesOffset = kSupertypesOffsetEnd + 1;
  static constexpr int kSubtypesOffsetEnd = kSubtypesOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=176&c=3
  static constexpr int kInstanceSizeOffset = kSubtypesOffsetEnd + 1;
  static constexpr int kInstanceSizeOffsetEnd = kInstanceSizeOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=185&c=3
  static constexpr int kInstanceOffset = kInstanceSizeOffsetEnd + 1;
  static constexpr int kInstanceOffsetEnd = kInstanceOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kInstanceOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kInstanceOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kInstanceOffsetEnd + 1;
  static constexpr int kHeaderSize = kInstanceOffsetEnd + 1;
  static constexpr int kSize = kInstanceOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=172&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 28);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=172&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmTypeInfo() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmTypeInfo, DAlias>::value,
        "class TorqueGeneratedWasmTypeInfo should be used as direct base for WasmTypeInfo.");
  }

 protected:
  inline explicit TorqueGeneratedWasmTypeInfo(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWasmTypeInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsWasmObject() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=189&c=1
V8_EXPORT_PRIVATE bool IsWasmObject_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=189&c=1
template <class D, class P>
class TorqueGeneratedWasmObject : public P {
  static_assert(
      std::is_same<WasmObject, D>::value,
      "Use this class as direct base for WasmObject.");
  static_assert(
      std::is_same<JSReceiver, P>::value,
      "Pass in JSReceiver as second template parameter for TorqueGeneratedWasmObject.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmObject<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=189&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=189&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=189&c=1
  V8_EXPORT_PRIVATE void WasmObjectVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kHeaderSize = P::kHeaderSize;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmObject() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmObject, DAlias>::value,
        "class TorqueGeneratedWasmObject should be used as direct base for WasmObject.");
  }

 protected:
  inline explicit TorqueGeneratedWasmObject(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWasmObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsWasmStruct() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=193&c=1
V8_EXPORT_PRIVATE bool IsWasmStruct_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=193&c=1
template <class D, class P>
class TorqueGeneratedWasmStruct : public P {
  static_assert(
      std::is_same<WasmStruct, D>::value,
      "Use this class as direct base for WasmStruct.");
  static_assert(
      std::is_same<WasmObject, P>::value,
      "Pass in WasmObject as second template parameter for TorqueGeneratedWasmStruct.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmStruct<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=193&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=193&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(WasmStruct)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=193&c=1
  V8_EXPORT_PRIVATE void WasmStructVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kHeaderSize = P::kHeaderSize;
  static constexpr int kSize = P::kHeaderSize;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=193&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 8);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=193&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmStruct() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmStruct, DAlias>::value,
        "class TorqueGeneratedWasmStruct should be used as direct base for WasmStruct.");
  }

 protected:
  inline explicit TorqueGeneratedWasmStruct(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWasmStruct(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsWasmArray() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=197&c=1
V8_EXPORT_PRIVATE bool IsWasmArray_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=197&c=1
template <class D, class P>
class TorqueGeneratedWasmArray : public P {
  static_assert(
      std::is_same<WasmArray, D>::value,
      "Use this class as direct base for WasmArray.");
  static_assert(
      std::is_same<WasmObject, P>::value,
      "Pass in WasmObject as second template parameter for TorqueGeneratedWasmArray.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmArray<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=199&c=3
  inline uint32_t length() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=199&c=3
  inline void set_length(uint32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=197&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=197&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(WasmArray)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=197&c=1
  V8_EXPORT_PRIVATE void WasmArrayVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=199&c=3
  static constexpr int kLengthOffset = P::kHeaderSize;
  static constexpr int kLengthOffsetEnd = kLengthOffset + kInt32Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=202&c=31
  static constexpr int kOptionalPaddingOffset = kLengthOffsetEnd + 1;
  static constexpr int kOptionalPaddingOffsetEnd = kOptionalPaddingOffset + 0 - 1;
  static constexpr int kStartOfWeakFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kStartOfStrongFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kEndOfStrongFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kHeaderSize = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kSize = kOptionalPaddingOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=197&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 12);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=197&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmArray() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmArray, DAlias>::value,
        "class TorqueGeneratedWasmArray should be used as direct base for WasmArray.");
  }

 protected:
  inline explicit TorqueGeneratedWasmArray(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWasmArray(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

