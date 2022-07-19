#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_SHARED_FUNCTION_INFO_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_SHARED_FUNCTION_INFO_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=5&c=1
TNode<PreparseData> Cast_PreparseData_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=11&c=1
TNode<InterpreterData> Cast_InterpreterData_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=50&c=1
TNode<SharedFunctionInfo> Cast_SharedFunctionInfo_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=89&c=1
TNode<Uint16T> LoadSharedFunctionInfoFormalParameterCountWithoutReceiver_0(compiler::CodeAssemblerState* state_, TNode<SharedFunctionInfo> p_sfi);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=100&c=1
TNode<Uint16T> LoadSharedFunctionInfoFormalParameterCountWithReceiver_0(compiler::CodeAssemblerState* state_, TNode<SharedFunctionInfo> p_sfi);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=106&c=1
TNode<BoolT> IsSharedFunctionInfoDontAdaptArguments_0(compiler::CodeAssemblerState* state_, TNode<SharedFunctionInfo> p_sfi);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=112&c=1
TNode<UncompiledData> Cast_UncompiledData_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=119&c=1
TNode<UncompiledDataWithoutPreparseData> Cast_UncompiledDataWithoutPreparseData_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=125&c=1
TNode<UncompiledDataWithPreparseData> Cast_UncompiledDataWithPreparseData_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=132&c=1
TNode<UncompiledDataWithoutPreparseDataWithJob> Cast_UncompiledDataWithoutPreparseDataWithJob_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=141&c=1
TNode<UncompiledDataWithPreparseDataAndJob> Cast_UncompiledDataWithPreparseDataAndJob_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=150&c=1
TNode<OnHeapBasicBlockProfilerData> Cast_OnHeapBasicBlockProfilerData_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=7&c=3
TNode<Int32T> LoadPreparseDataDataLength_0(compiler::CodeAssemblerState* state_, TNode<PreparseData> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=7&c=3
void StorePreparseDataDataLength_0(compiler::CodeAssemblerState* state_, TNode<PreparseData> p_o, TNode<Int32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=8&c=3
TNode<Int32T> LoadPreparseDataChildrenLength_0(compiler::CodeAssemblerState* state_, TNode<PreparseData> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=8&c=3
void StorePreparseDataChildrenLength_0(compiler::CodeAssemblerState* state_, TNode<PreparseData> p_o, TNode<Int32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=12&c=3
TNode<BytecodeArray> LoadInterpreterDataBytecodeArray_0(compiler::CodeAssemblerState* state_, TNode<InterpreterData> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=12&c=3
void StoreInterpreterDataBytecodeArray_0(compiler::CodeAssemblerState* state_, TNode<InterpreterData> p_o, TNode<BytecodeArray> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=13&c=31
TNode<CodeDataContainer> LoadInterpreterDataInterpreterTrampoline_0(compiler::CodeAssemblerState* state_, TNode<InterpreterData> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=13&c=31
void StoreInterpreterDataInterpreterTrampoline_0(compiler::CodeAssemblerState* state_, TNode<InterpreterData> p_o, TNode<CodeDataContainer> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=56&c=22
TNode<Object> LoadSharedFunctionInfoFunctionData_0(compiler::CodeAssemblerState* state_, TNode<SharedFunctionInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=56&c=22
void StoreSharedFunctionInfoFunctionData_0(compiler::CodeAssemblerState* state_, TNode<SharedFunctionInfo> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=57&c=3
TNode<Object> LoadSharedFunctionInfoNameOrScopeInfo_0(compiler::CodeAssemblerState* state_, TNode<SharedFunctionInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=57&c=3
void StoreSharedFunctionInfoNameOrScopeInfo_0(compiler::CodeAssemblerState* state_, TNode<SharedFunctionInfo> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=58&c=3
TNode<HeapObject> LoadSharedFunctionInfoOuterScopeInfoOrFeedbackMetadata_0(compiler::CodeAssemblerState* state_, TNode<SharedFunctionInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=58&c=3
void StoreSharedFunctionInfoOuterScopeInfoOrFeedbackMetadata_0(compiler::CodeAssemblerState* state_, TNode<SharedFunctionInfo> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=59&c=3
TNode<HeapObject> LoadSharedFunctionInfoScriptOrDebugInfo_0(compiler::CodeAssemblerState* state_, TNode<SharedFunctionInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=59&c=3
void StoreSharedFunctionInfoScriptOrDebugInfo_0(compiler::CodeAssemblerState* state_, TNode<SharedFunctionInfo> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=65&c=3
TNode<Int16T> LoadSharedFunctionInfoLength_0(compiler::CodeAssemblerState* state_, TNode<SharedFunctionInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=65&c=3
void StoreSharedFunctionInfoLength_0(compiler::CodeAssemblerState* state_, TNode<SharedFunctionInfo> p_o, TNode<Int16T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=70&c=3
TNode<Uint16T> LoadSharedFunctionInfoFormalParameterCount_0(compiler::CodeAssemblerState* state_, TNode<SharedFunctionInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=70&c=3
void StoreSharedFunctionInfoFormalParameterCount_0(compiler::CodeAssemblerState* state_, TNode<SharedFunctionInfo> p_o, TNode<Uint16T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=71&c=3
TNode<Uint16T> LoadSharedFunctionInfoFunctionTokenOffset_0(compiler::CodeAssemblerState* state_, TNode<SharedFunctionInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=71&c=3
void StoreSharedFunctionInfoFunctionTokenOffset_0(compiler::CodeAssemblerState* state_, TNode<SharedFunctionInfo> p_o, TNode<Uint16T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=74&c=3
TNode<Uint8T> LoadSharedFunctionInfoExpectedNofProperties_0(compiler::CodeAssemblerState* state_, TNode<SharedFunctionInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=74&c=3
void StoreSharedFunctionInfoExpectedNofProperties_0(compiler::CodeAssemblerState* state_, TNode<SharedFunctionInfo> p_o, TNode<Uint8T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=75&c=3
TNode<Uint8T> LoadSharedFunctionInfoFlags2_0(compiler::CodeAssemblerState* state_, TNode<SharedFunctionInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=75&c=3
void StoreSharedFunctionInfoFlags2_0(compiler::CodeAssemblerState* state_, TNode<SharedFunctionInfo> p_o, TNode<Uint8T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=76&c=3
TNode<Uint32T> LoadSharedFunctionInfoFlags_0(compiler::CodeAssemblerState* state_, TNode<SharedFunctionInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=76&c=3
void StoreSharedFunctionInfoFlags_0(compiler::CodeAssemblerState* state_, TNode<SharedFunctionInfo> p_o, TNode<Uint32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=80&c=3
TNode<Int32T> LoadSharedFunctionInfoFunctionLiteralId_0(compiler::CodeAssemblerState* state_, TNode<SharedFunctionInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=80&c=3
void StoreSharedFunctionInfoFunctionLiteralId_0(compiler::CodeAssemblerState* state_, TNode<SharedFunctionInfo> p_o, TNode<Int32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=114&c=3
TNode<String> LoadUncompiledDataInferredName_0(compiler::CodeAssemblerState* state_, TNode<UncompiledData> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=114&c=3
void StoreUncompiledDataInferredName_0(compiler::CodeAssemblerState* state_, TNode<UncompiledData> p_o, TNode<String> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=115&c=3
TNode<Int32T> LoadUncompiledDataStartPosition_0(compiler::CodeAssemblerState* state_, TNode<UncompiledData> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=115&c=3
void StoreUncompiledDataStartPosition_0(compiler::CodeAssemblerState* state_, TNode<UncompiledData> p_o, TNode<Int32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=116&c=3
TNode<Int32T> LoadUncompiledDataEndPosition_0(compiler::CodeAssemblerState* state_, TNode<UncompiledData> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=116&c=3
void StoreUncompiledDataEndPosition_0(compiler::CodeAssemblerState* state_, TNode<UncompiledData> p_o, TNode<Int32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=129&c=3
TNode<PreparseData> LoadUncompiledDataWithPreparseDataPreparseData_0(compiler::CodeAssemblerState* state_, TNode<UncompiledDataWithPreparseData> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=129&c=3
void StoreUncompiledDataWithPreparseDataPreparseData_0(compiler::CodeAssemblerState* state_, TNode<UncompiledDataWithPreparseData> p_o, TNode<PreparseData> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=138&c=3
TNode<RawPtrT> LoadUncompiledDataWithoutPreparseDataWithJobJob_0(compiler::CodeAssemblerState* state_, TNode<UncompiledDataWithoutPreparseDataWithJob> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=138&c=3
void StoreUncompiledDataWithoutPreparseDataWithJobJob_0(compiler::CodeAssemblerState* state_, TNode<UncompiledDataWithoutPreparseDataWithJob> p_o, TNode<RawPtrT> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=147&c=3
TNode<RawPtrT> LoadUncompiledDataWithPreparseDataAndJobJob_0(compiler::CodeAssemblerState* state_, TNode<UncompiledDataWithPreparseDataAndJob> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=147&c=3
void StoreUncompiledDataWithPreparseDataAndJobJob_0(compiler::CodeAssemblerState* state_, TNode<UncompiledDataWithPreparseDataAndJob> p_o, TNode<RawPtrT> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=152&c=3
TNode<ByteArray> LoadOnHeapBasicBlockProfilerDataBlockIds_0(compiler::CodeAssemblerState* state_, TNode<OnHeapBasicBlockProfilerData> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=152&c=3
void StoreOnHeapBasicBlockProfilerDataBlockIds_0(compiler::CodeAssemblerState* state_, TNode<OnHeapBasicBlockProfilerData> p_o, TNode<ByteArray> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=153&c=3
TNode<ByteArray> LoadOnHeapBasicBlockProfilerDataCounts_0(compiler::CodeAssemblerState* state_, TNode<OnHeapBasicBlockProfilerData> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=153&c=3
void StoreOnHeapBasicBlockProfilerDataCounts_0(compiler::CodeAssemblerState* state_, TNode<OnHeapBasicBlockProfilerData> p_o, TNode<ByteArray> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=154&c=3
TNode<String> LoadOnHeapBasicBlockProfilerDataName_0(compiler::CodeAssemblerState* state_, TNode<OnHeapBasicBlockProfilerData> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=154&c=3
void StoreOnHeapBasicBlockProfilerDataName_0(compiler::CodeAssemblerState* state_, TNode<OnHeapBasicBlockProfilerData> p_o, TNode<String> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=155&c=3
TNode<String> LoadOnHeapBasicBlockProfilerDataSchedule_0(compiler::CodeAssemblerState* state_, TNode<OnHeapBasicBlockProfilerData> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=155&c=3
void StoreOnHeapBasicBlockProfilerDataSchedule_0(compiler::CodeAssemblerState* state_, TNode<OnHeapBasicBlockProfilerData> p_o, TNode<String> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=156&c=3
TNode<String> LoadOnHeapBasicBlockProfilerDataCode_0(compiler::CodeAssemblerState* state_, TNode<OnHeapBasicBlockProfilerData> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=156&c=3
void StoreOnHeapBasicBlockProfilerDataCode_0(compiler::CodeAssemblerState* state_, TNode<OnHeapBasicBlockProfilerData> p_o, TNode<String> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=157&c=3
TNode<Smi> LoadOnHeapBasicBlockProfilerDataHash_0(compiler::CodeAssemblerState* state_, TNode<OnHeapBasicBlockProfilerData> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=157&c=3
void StoreOnHeapBasicBlockProfilerDataHash_0(compiler::CodeAssemblerState* state_, TNode<OnHeapBasicBlockProfilerData> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=5&c=1
TNode<PreparseData> DownCastForTorqueClass_PreparseData_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=11&c=1
TNode<InterpreterData> DownCastForTorqueClass_InterpreterData_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=50&c=1
TNode<SharedFunctionInfo> DownCastForTorqueClass_SharedFunctionInfo_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=112&c=1
TNode<UncompiledData> DownCastForTorqueClass_UncompiledData_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=119&c=1
TNode<UncompiledDataWithoutPreparseData> DownCastForTorqueClass_UncompiledDataWithoutPreparseData_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=125&c=1
TNode<UncompiledDataWithPreparseData> DownCastForTorqueClass_UncompiledDataWithPreparseData_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=132&c=1
TNode<UncompiledDataWithoutPreparseDataWithJob> DownCastForTorqueClass_UncompiledDataWithoutPreparseDataWithJob_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=141&c=1
TNode<UncompiledDataWithPreparseDataAndJob> DownCastForTorqueClass_UncompiledDataWithPreparseDataAndJob_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=150&c=1
TNode<OnHeapBasicBlockProfilerData> DownCastForTorqueClass_OnHeapBasicBlockProfilerData_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_SHARED_FUNCTION_INFO_TQ_CSA_H_
