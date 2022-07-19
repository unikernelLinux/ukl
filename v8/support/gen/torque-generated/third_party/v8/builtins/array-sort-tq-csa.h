#ifndef V8_GEN_TORQUE_GENERATED_THIRD_PARTY_V8_BUILTINS_ARRAY_SORT_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_THIRD_PARTY_V8_BUILTINS_ARRAY_SORT_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=17&c=1
TNode<SortState> Cast_SortState_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=109&c=1
TNode<IntPtrT> CalculateWorkArrayLength_0(compiler::CodeAssemblerState* state_, TNode<JSReceiver> p_receiver, TNode<Number> p_initialReceiverLength);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=141&c=1
TNode<SortState> NewSortState_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_receiver, TNode<HeapObject> p_comparefn, TNode<Number> p_initialReceiverLength);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=205&c=1
TNode<Smi> kSuccess_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=212&c=1
int31_t kMaxMergePending_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=216&c=1
int31_t kMinGallopWins_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=220&c=1
TNode<Smi> kSortStateTempSize_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=402&c=1
TNode<Smi> GetPendingRunsSize_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=408&c=1
TNode<Smi> GetPendingRunBase_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArray> p_pendingRuns, TNode<Smi> p_run);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=413&c=1
void SetPendingRunBase_0(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_pendingRuns, TNode<Smi> p_run, TNode<Smi> p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=417&c=1
TNode<Smi> GetPendingRunLength_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArray> p_pendingRuns, TNode<Smi> p_run);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=422&c=1
void SetPendingRunLength_0(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_pendingRuns, TNode<Smi> p_run, TNode<Smi> p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=426&c=1
void PushRun_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState, TNode<Smi> p_base, TNode<Smi> p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=441&c=1
TNode<FixedArray> GetTempArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState, TNode<Smi> p_requestedSize);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=500&c=1
void BinaryInsertionSort_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState, TNode<Smi> p_low, TNode<Smi> p_startArg, TNode<Smi> p_high);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=565&c=1
TNode<Smi> CountAndMakeRun_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState, TNode<Smi> p_lowArg, TNode<Smi> p_high);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=607&c=1
void ReverseRange_0(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_array, TNode<Smi> p_from, TNode<Smi> p_to);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=892&c=1
void MergeLow_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState, TNode<Smi> p_baseA, TNode<Smi> p_lengthAArg, TNode<Smi> p_baseB, TNode<Smi> p_lengthBArg);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=1022&c=1
void MergeHigh_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState, TNode<Smi> p_baseA, TNode<Smi> p_lengthAArg, TNode<Smi> p_baseB, TNode<Smi> p_lengthBArg);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=1165&c=1
TNode<Smi> ComputeMinRunLength_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_nArg);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=1181&c=1
TNode<BoolT> RunInvariantEstablished_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArray> p_pendingRuns, TNode<Smi> p_n);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=1201&c=1
void MergeCollapse_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=1229&c=1
void MergeForceCollapse_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=1246&c=1
void ArrayTimSortImpl_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState, TNode<Smi> p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=1280&c=1
TNode<Smi> CompactReceiverElementsIntoWorkArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=1324&c=1
void CopyWorkArrayToReceiver_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState, TNode<Smi> p_numberOfNonUndefined);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=43&c=3
TNode<JSReceiver> LoadSortStateReceiver_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=43&c=3
void StoreSortStateReceiver_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<JSReceiver> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=48&c=3
TNode<Map> LoadSortStateInitialReceiverMap_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=48&c=3
void StoreSortStateInitialReceiverMap_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<Map> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=49&c=3
TNode<Number> LoadSortStateInitialReceiverLength_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=49&c=3
void StoreSortStateInitialReceiverLength_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<Number> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=52&c=3
TNode<HeapObject> LoadSortStateUserCmpFn_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=52&c=3
void StoreSortStateUserCmpFn_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=57&c=3
TNode<BuiltinPtr> LoadSortStateSortComparePtr_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=57&c=3
void StoreSortStateSortComparePtr_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<BuiltinPtr> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=62&c=3
TNode<BuiltinPtr> LoadSortStateLoadFn_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=62&c=3
void StoreSortStateLoadFn_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<BuiltinPtr> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=63&c=3
TNode<BuiltinPtr> LoadSortStateStoreFn_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=63&c=3
void StoreSortStateStoreFn_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<BuiltinPtr> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=64&c=3
TNode<BuiltinPtr> LoadSortStateDeleteFn_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=64&c=3
void StoreSortStateDeleteFn_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<BuiltinPtr> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=65&c=3
TNode<BuiltinPtr> LoadSortStateCanUseSameAccessorFn_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=65&c=3
void StoreSortStateCanUseSameAccessorFn_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<BuiltinPtr> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=70&c=3
TNode<Smi> LoadSortStateMinGallop_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=70&c=3
void StoreSortStateMinGallop_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=82&c=3
TNode<Smi> LoadSortStatePendingRunsSize_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=82&c=3
void StoreSortStatePendingRunsSize_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=83&c=3
TNode<FixedArray> LoadSortStatePendingRuns_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=83&c=3
void StoreSortStatePendingRuns_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<FixedArray> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=88&c=3
TNode<FixedArray> LoadSortStateWorkArray_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=88&c=3
void StoreSortStateWorkArray_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<FixedArray> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=91&c=3
TNode<FixedArray> LoadSortStateTempArray_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=91&c=3
void StoreSortStateTempArray_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<FixedArray> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=94&c=3
TNode<Smi> LoadSortStateSortLength_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=94&c=3
void StoreSortStateSortLength_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=98&c=3
TNode<Smi> LoadSortStateNumberOfUndefined_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=98&c=3
void StoreSortStateNumberOfUndefined_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=18&c=3
TNode<Number> Method_SortState_Compare_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_this, TNode<Object> p_x, TNode<Object> p_y);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=23&c=3
void Method_SortState_CheckAccessor_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_this, compiler::CodeAssemblerLabel* label_Bailout);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=36&c=3
void Method_SortState_ResetToGenericAccessor_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_this);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=17&c=1
TNode<SortState> DownCastForTorqueClass_SortState_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=244&c=18
TNode<JSObject> UnsafeCast_JSObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=295&c=19
TNode<HeapNumber> UnsafeCast_HeapNumber_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=1383&c=21
TNode<HeapObject> Cast_Undefined_OR_CallableApiObject_OR_CallableJSProxy_OR_JSWrappedFunction_OR_JSBoundFunction_OR_JSFunction_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_THIRD_PARTY_V8_BUILTINS_ARRAY_SORT_TQ_CSA_H_
