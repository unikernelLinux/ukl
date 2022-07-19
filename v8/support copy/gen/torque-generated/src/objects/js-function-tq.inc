class JSFunctionOrBoundFunctionOrWrappedFunction;
class JSWrappedFunction;
class JSBoundFunction;
class JSFunction;
// Alias for HeapObject::IsJSFunctionOrBoundFunctionOrWrappedFunction() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=5&c=1
V8_EXPORT_PRIVATE bool IsJSFunctionOrBoundFunctionOrWrappedFunction_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=5&c=1
template <class D, class P>
class TorqueGeneratedJSFunctionOrBoundFunctionOrWrappedFunction : public P {
  static_assert(
      std::is_same<JSFunctionOrBoundFunctionOrWrappedFunction, D>::value,
      "Use this class as direct base for JSFunctionOrBoundFunctionOrWrappedFunction.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSFunctionOrBoundFunctionOrWrappedFunction.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSFunctionOrBoundFunctionOrWrappedFunction<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=5&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=5&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=5&c=1
  V8_EXPORT_PRIVATE void JSFunctionOrBoundFunctionOrWrappedFunctionVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kHeaderSize = P::kHeaderSize;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSFunctionOrBoundFunctionOrWrappedFunction() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSFunctionOrBoundFunctionOrWrappedFunction, DAlias>::value,
        "class TorqueGeneratedJSFunctionOrBoundFunctionOrWrappedFunction should be used as direct base for JSFunctionOrBoundFunctionOrWrappedFunction.");
  }

 protected:
  inline explicit TorqueGeneratedJSFunctionOrBoundFunctionOrWrappedFunction(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSFunctionOrBoundFunctionOrWrappedFunction(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSWrappedFunction() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=21&c=1
V8_EXPORT_PRIVATE bool IsJSWrappedFunction_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=21&c=1
template <class D, class P>
class TorqueGeneratedJSWrappedFunction : public P {
  static_assert(
      std::is_same<JSWrappedFunction, D>::value,
      "Use this class as direct base for JSWrappedFunction.");
  static_assert(
      std::is_same<JSFunctionOrBoundFunctionOrWrappedFunction, P>::value,
      "Pass in JSFunctionOrBoundFunctionOrWrappedFunction as second template parameter for TorqueGeneratedJSWrappedFunction.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSWrappedFunction<D,P>;

  // Torque type: Callable
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=24&c=3
  inline JSReceiver wrapped_target_function() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=24&c=3
  inline JSReceiver wrapped_target_function(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=24&c=3
  inline void set_wrapped_target_function(JSReceiver value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=26&c=3
  inline NativeContext context() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=26&c=3
  inline NativeContext context(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=26&c=3
  inline void set_context(NativeContext value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=21&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=21&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSWrappedFunction)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=21&c=1
  V8_EXPORT_PRIVATE void JSWrappedFunctionVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=24&c=3
  static constexpr int kWrappedTargetFunctionOffset = P::kHeaderSize;
  static constexpr int kWrappedTargetFunctionOffsetEnd = kWrappedTargetFunctionOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=26&c=3
  static constexpr int kContextOffset = kWrappedTargetFunctionOffsetEnd + 1;
  static constexpr int kContextOffsetEnd = kContextOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kContextOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kContextOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kContextOffsetEnd + 1;
  static constexpr int kHeaderSize = kContextOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSWrappedFunction() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSWrappedFunction, DAlias>::value,
        "class TorqueGeneratedJSWrappedFunction should be used as direct base for JSWrappedFunction.");
  }

 protected:
  inline explicit TorqueGeneratedJSWrappedFunction(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSWrappedFunction(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSBoundFunction() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=9&c=1
V8_EXPORT_PRIVATE bool IsJSBoundFunction_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=9&c=1
template <class D, class P>
class TorqueGeneratedJSBoundFunction : public P {
  static_assert(
      std::is_same<JSBoundFunction, D>::value,
      "Use this class as direct base for JSBoundFunction.");
  static_assert(
      std::is_same<JSFunctionOrBoundFunctionOrWrappedFunction, P>::value,
      "Pass in JSFunctionOrBoundFunctionOrWrappedFunction as second template parameter for TorqueGeneratedJSBoundFunction.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSBoundFunction<D,P>;

  // Torque type: Callable
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=12&c=3
  inline JSReceiver bound_target_function() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=12&c=3
  inline JSReceiver bound_target_function(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=12&c=3
  inline void set_bound_target_function(JSReceiver value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (class JSReceiver | Undefined | Null | False | True | class Symbol | class String | BigInt | class HeapNumber | Smi | class SourceTextModule)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=15&c=3
  inline Object bound_this() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=15&c=3
  inline Object bound_this(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=15&c=3
  inline void set_bound_this(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=18&c=3
  inline FixedArray bound_arguments() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=18&c=3
  inline FixedArray bound_arguments(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=18&c=3
  inline void set_bound_arguments(FixedArray value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=9&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=9&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSBoundFunction)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=9&c=1
  V8_EXPORT_PRIVATE void JSBoundFunctionVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=12&c=3
  static constexpr int kBoundTargetFunctionOffset = P::kHeaderSize;
  static constexpr int kBoundTargetFunctionOffsetEnd = kBoundTargetFunctionOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=15&c=3
  static constexpr int kBoundThisOffset = kBoundTargetFunctionOffsetEnd + 1;
  static constexpr int kBoundThisOffsetEnd = kBoundThisOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=18&c=3
  static constexpr int kBoundArgumentsOffset = kBoundThisOffsetEnd + 1;
  static constexpr int kBoundArgumentsOffsetEnd = kBoundArgumentsOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kBoundArgumentsOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kBoundArgumentsOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kBoundArgumentsOffsetEnd + 1;
  static constexpr int kHeaderSize = kBoundArgumentsOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSBoundFunction() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSBoundFunction, DAlias>::value,
        "class TorqueGeneratedJSBoundFunction should be used as direct base for JSBoundFunction.");
  }

 protected:
  inline explicit TorqueGeneratedJSBoundFunction(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSBoundFunction(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSFunction() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=31&c=1
V8_EXPORT_PRIVATE bool IsJSFunction_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=31&c=1
template <class D, class P>
class TorqueGeneratedJSFunction : public P {
  static_assert(
      std::is_same<JSFunction, D>::value,
      "Use this class as direct base for JSFunction.");
  static_assert(
      std::is_same<JSFunctionOrBoundFunctionOrWrappedFunction, P>::value,
      "Pass in JSFunctionOrBoundFunctionOrWrappedFunction as second template parameter for TorqueGeneratedJSFunction.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSFunction<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=33&c=3
  inline SharedFunctionInfo shared_function_info() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=33&c=3
  inline SharedFunctionInfo shared_function_info(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=33&c=3
  inline void set_shared_function_info(SharedFunctionInfo value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=34&c=3
  inline Context context() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=34&c=3
  inline Context context(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=34&c=3
  inline void set_context(Context value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=35&c=3
  inline FeedbackCell feedback_cell() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=35&c=3
  inline FeedbackCell feedback_cell(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=35&c=3
  inline void set_feedback_cell(FeedbackCell value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=36&c=31
  inline CodeDataContainer code() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=36&c=31
  inline CodeDataContainer code(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=36&c=31
  inline void set_code(CodeDataContainer value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (class JSReceiver | class Map)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=39&c=3
  inline HeapObject prototype_or_initial_map() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=39&c=3
  inline HeapObject prototype_or_initial_map(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=39&c=3
  inline void set_prototype_or_initial_map(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=31&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=31&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSFunction)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=31&c=1
  V8_EXPORT_PRIVATE void JSFunctionVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=33&c=3
  static constexpr int kSharedFunctionInfoOffset = P::kHeaderSize;
  static constexpr int kSharedFunctionInfoOffsetEnd = kSharedFunctionInfoOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=34&c=3
  static constexpr int kContextOffset = kSharedFunctionInfoOffsetEnd + 1;
  static constexpr int kContextOffsetEnd = kContextOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=35&c=3
  static constexpr int kFeedbackCellOffset = kContextOffsetEnd + 1;
  static constexpr int kFeedbackCellOffsetEnd = kFeedbackCellOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=36&c=31
  static constexpr int kCodeOffset = kFeedbackCellOffsetEnd + 1;
  static constexpr int kCodeOffsetEnd = kCodeOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=39&c=3
  static constexpr int kPrototypeOrInitialMapOffset = kCodeOffsetEnd + 1;
  static constexpr int kPrototypeOrInitialMapOffsetEnd = kPrototypeOrInitialMapOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kPrototypeOrInitialMapOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kPrototypeOrInitialMapOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kPrototypeOrInitialMapOffsetEnd + 1;
  static constexpr int kHeaderSize = kPrototypeOrInitialMapOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSFunction() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSFunction, DAlias>::value,
        "class TorqueGeneratedJSFunction should be used as direct base for JSFunction.");
  }

 protected:
  inline explicit TorqueGeneratedJSFunction(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSFunction(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

