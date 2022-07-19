#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_FEEDBACK_VECTOR_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_FEEDBACK_VECTOR_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=18&c=1
TNode<FeedbackVector> Cast_FeedbackVector_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=34&c=1
TNode<FeedbackMetadata> Cast_FeedbackMetadata_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=20&c=9
TNode<Int32T> LoadFeedbackVectorLength_0(compiler::CodeAssemblerState* state_, TNode<FeedbackVector> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=21&c=3
TNode<Int32T> LoadFeedbackVectorInvocationCount_0(compiler::CodeAssemblerState* state_, TNode<FeedbackVector> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=21&c=3
void StoreFeedbackVectorInvocationCount_0(compiler::CodeAssemblerState* state_, TNode<FeedbackVector> p_o, TNode<Int32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=22&c=3
TNode<Int32T> LoadFeedbackVectorProfilerTicks_0(compiler::CodeAssemblerState* state_, TNode<FeedbackVector> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=22&c=3
void StoreFeedbackVectorProfilerTicks_0(compiler::CodeAssemblerState* state_, TNode<FeedbackVector> p_o, TNode<Int32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=26&c=3
TNode<Uint32T> LoadFeedbackVectorFlags_0(compiler::CodeAssemblerState* state_, TNode<FeedbackVector> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=26&c=3
void StoreFeedbackVectorFlags_0(compiler::CodeAssemblerState* state_, TNode<FeedbackVector> p_o, TNode<Uint32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=27&c=3
TNode<SharedFunctionInfo> LoadFeedbackVectorSharedFunctionInfo_0(compiler::CodeAssemblerState* state_, TNode<FeedbackVector> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=27&c=3
void StoreFeedbackVectorSharedFunctionInfo_0(compiler::CodeAssemblerState* state_, TNode<FeedbackVector> p_o, TNode<SharedFunctionInfo> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=28&c=3
TNode<ClosureFeedbackCellArray> LoadFeedbackVectorClosureFeedbackCellArray_0(compiler::CodeAssemblerState* state_, TNode<FeedbackVector> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=28&c=3
void StoreFeedbackVectorClosureFeedbackCellArray_0(compiler::CodeAssemblerState* state_, TNode<FeedbackVector> p_o, TNode<ClosureFeedbackCellArray> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=29&c=31
TNode<MaybeObject> LoadFeedbackVectorMaybeOptimizedCode_0(compiler::CodeAssemblerState* state_, TNode<FeedbackVector> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=29&c=31
void StoreFeedbackVectorMaybeOptimizedCode_0(compiler::CodeAssemblerState* state_, TNode<FeedbackVector> p_o, TNode<MaybeObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=31&c=19
TorqueStructSlice_MaybeObject_MutableReference_MaybeObject_0 FieldSliceFeedbackVectorRawFeedbackSlots_0(compiler::CodeAssemblerState* state_, TNode<FeedbackVector> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=31&c=19
TNode<MaybeObject> LoadFeedbackVectorRawFeedbackSlots_0(compiler::CodeAssemblerState* state_, TNode<FeedbackVector> p_o, TNode<IntPtrT> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=31&c=19
void StoreFeedbackVectorRawFeedbackSlots_0(compiler::CodeAssemblerState* state_, TNode<FeedbackVector> p_o, TNode<IntPtrT> p_i, TNode<MaybeObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=18&c=1
TNode<FeedbackVector> DownCastForTorqueClass_FeedbackVector_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=34&c=1
TNode<FeedbackMetadata> DownCastForTorqueClass_FeedbackMetadata_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_FEEDBACK_VECTOR_TQ_CSA_H_
