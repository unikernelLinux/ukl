class FeedbackVector;
// Alias for HeapObject::IsFeedbackVector() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=18&c=1
V8_EXPORT_PRIVATE bool IsFeedbackVector_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=18&c=1
template <class D, class P>
class TorqueGeneratedFeedbackVector : public P {
  static_assert(
      std::is_same<FeedbackVector, D>::value,
      "Use this class as direct base for FeedbackVector.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedFeedbackVector.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedFeedbackVector<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=20&c=9
  inline int32_t length() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=20&c=9
  inline void set_length(int32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=21&c=3
  inline int32_t invocation_count() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=21&c=3
  inline void set_invocation_count(int32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=22&c=3
  inline int32_t profiler_ticks() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=22&c=3
  inline void set_profiler_ticks(int32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=26&c=3
  inline uint32_t flags() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=26&c=3
  inline void set_flags(uint32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=27&c=3
  inline SharedFunctionInfo shared_function_info() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=27&c=3
  inline SharedFunctionInfo shared_function_info(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=27&c=3
  inline void set_shared_function_info(SharedFunctionInfo value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=28&c=3
  inline ClosureFeedbackCellArray closure_feedback_cell_array() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=28&c=3
  inline ClosureFeedbackCellArray closure_feedback_cell_array(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=28&c=3
  inline void set_closure_feedback_cell_array(ClosureFeedbackCellArray value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: Weak<class CodeDataContainer>
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=29&c=31
  inline MaybeObject maybe_optimized_code() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=29&c=31
  inline MaybeObject maybe_optimized_code(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=29&c=31
  inline void set_maybe_optimized_code(MaybeObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: MaybeObject
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=31&c=19
  inline MaybeObject raw_feedback_slots(int i, RelaxedLoadTag) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=31&c=19
  inline MaybeObject raw_feedback_slots(PtrComprCageBase cage_base, int i, RelaxedLoadTag) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=31&c=19
  inline void set_raw_feedback_slots(int i, MaybeObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=18&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=18&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(FeedbackVector)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=18&c=1
  V8_EXPORT_PRIVATE void FeedbackVectorVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=20&c=9
  static constexpr int kLengthOffset = P::kHeaderSize;
  static constexpr int kLengthOffsetEnd = kLengthOffset + kInt32Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=21&c=3
  static constexpr int kInvocationCountOffset = kLengthOffsetEnd + 1;
  static constexpr int kInvocationCountOffsetEnd = kInvocationCountOffset + kInt32Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=22&c=3
  static constexpr int kProfilerTicksOffset = kInvocationCountOffsetEnd + 1;
  static constexpr int kProfilerTicksOffsetEnd = kProfilerTicksOffset + kInt32Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=26&c=3
  static constexpr int kFlagsOffset = kProfilerTicksOffsetEnd + 1;
  static constexpr int kFlagsOffsetEnd = kFlagsOffset + kInt32Size - 1;
  static constexpr int kStartOfStrongFieldsOffset = kFlagsOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=27&c=3
  static constexpr int kSharedFunctionInfoOffset = kFlagsOffsetEnd + 1;
  static constexpr int kSharedFunctionInfoOffsetEnd = kSharedFunctionInfoOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=28&c=3
  static constexpr int kClosureFeedbackCellArrayOffset = kSharedFunctionInfoOffsetEnd + 1;
  static constexpr int kClosureFeedbackCellArrayOffsetEnd = kClosureFeedbackCellArrayOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kClosureFeedbackCellArrayOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kClosureFeedbackCellArrayOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=29&c=31
  static constexpr int kMaybeOptimizedCodeOffset = kClosureFeedbackCellArrayOffsetEnd + 1;
  static constexpr int kMaybeOptimizedCodeOffsetEnd = kMaybeOptimizedCodeOffset + kTaggedSize - 1;
  static constexpr int kHeaderSize = kMaybeOptimizedCodeOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=31&c=19
  static constexpr int kRawFeedbackSlotsOffset = kMaybeOptimizedCodeOffsetEnd + 1;
  static constexpr int kRawFeedbackSlotsOffsetEnd = kRawFeedbackSlotsOffset + 0 - 1;
  static constexpr int kEndOfWeakFieldsOffset = kRawFeedbackSlotsOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=18&c=1
  V8_INLINE static constexpr int32_t SizeFor(int length) {
    int32_t size = kHeaderSize;
    size += length * 4;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=18&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor(this->length());
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedFeedbackVector() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedFeedbackVector, DAlias>::value,
        "class TorqueGeneratedFeedbackVector should be used as direct base for FeedbackVector.");
  }

 protected:
  inline explicit TorqueGeneratedFeedbackVector(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedFeedbackVector(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

