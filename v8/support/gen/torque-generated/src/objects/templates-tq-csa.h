#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_TEMPLATES_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_TEMPLATES_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=5&c=1
TNode<TemplateInfo> Cast_TemplateInfo_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=14&c=1
TNode<FunctionTemplateRareData> Cast_FunctionTemplateRareData_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=41&c=1
TNode<FunctionTemplateInfo> Cast_FunctionTemplateInfo_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=77&c=1
TNode<ObjectTemplateInfo> Cast_ObjectTemplateInfo_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=7&c=3
TNode<Smi> LoadTemplateInfoTag_0(compiler::CodeAssemblerState* state_, TNode<TemplateInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=7&c=3
void StoreTemplateInfoTag_0(compiler::CodeAssemblerState* state_, TNode<TemplateInfo> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=8&c=3
TNode<Smi> LoadTemplateInfoSerialNumber_0(compiler::CodeAssemblerState* state_, TNode<TemplateInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=8&c=3
void StoreTemplateInfoSerialNumber_0(compiler::CodeAssemblerState* state_, TNode<TemplateInfo> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=9&c=3
TNode<Smi> LoadTemplateInfoNumberOfProperties_0(compiler::CodeAssemblerState* state_, TNode<TemplateInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=9&c=3
void StoreTemplateInfoNumberOfProperties_0(compiler::CodeAssemblerState* state_, TNode<TemplateInfo> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=10&c=3
TNode<HeapObject> LoadTemplateInfoPropertyList_0(compiler::CodeAssemblerState* state_, TNode<TemplateInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=10&c=3
void StoreTemplateInfoPropertyList_0(compiler::CodeAssemblerState* state_, TNode<TemplateInfo> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=11&c=3
TNode<HeapObject> LoadTemplateInfoPropertyAccessors_0(compiler::CodeAssemblerState* state_, TNode<TemplateInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=11&c=3
void StoreTemplateInfoPropertyAccessors_0(compiler::CodeAssemblerState* state_, TNode<TemplateInfo> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=16&c=3
TNode<HeapObject> LoadFunctionTemplateRareDataPrototypeTemplate_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateRareData> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=16&c=3
void StoreFunctionTemplateRareDataPrototypeTemplate_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateRareData> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=17&c=3
TNode<HeapObject> LoadFunctionTemplateRareDataPrototypeProviderTemplate_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateRareData> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=17&c=3
void StoreFunctionTemplateRareDataPrototypeProviderTemplate_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateRareData> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=18&c=3
TNode<HeapObject> LoadFunctionTemplateRareDataParentTemplate_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateRareData> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=18&c=3
void StoreFunctionTemplateRareDataParentTemplate_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateRareData> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=19&c=3
TNode<HeapObject> LoadFunctionTemplateRareDataNamedPropertyHandler_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateRareData> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=19&c=3
void StoreFunctionTemplateRareDataNamedPropertyHandler_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateRareData> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=20&c=3
TNode<HeapObject> LoadFunctionTemplateRareDataIndexedPropertyHandler_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateRareData> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=20&c=3
void StoreFunctionTemplateRareDataIndexedPropertyHandler_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateRareData> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=21&c=3
TNode<HeapObject> LoadFunctionTemplateRareDataInstanceTemplate_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateRareData> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=21&c=3
void StoreFunctionTemplateRareDataInstanceTemplate_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateRareData> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=22&c=3
TNode<HeapObject> LoadFunctionTemplateRareDataInstanceCallHandler_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateRareData> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=22&c=3
void StoreFunctionTemplateRareDataInstanceCallHandler_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateRareData> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=23&c=3
TNode<HeapObject> LoadFunctionTemplateRareDataAccessCheckInfo_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateRareData> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=23&c=3
void StoreFunctionTemplateRareDataAccessCheckInfo_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateRareData> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=24&c=3
TNode<FixedArray> LoadFunctionTemplateRareDataCFunctionOverloads_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateRareData> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=24&c=3
void StoreFunctionTemplateRareDataCFunctionOverloads_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateRareData> p_o, TNode<FixedArray> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=44&c=36
TNode<HeapObject> LoadFunctionTemplateInfoCallCode_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=44&c=36
void StoreFunctionTemplateInfoCallCode_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateInfo> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=45&c=3
TNode<PrimitiveHeapObject> LoadFunctionTemplateInfoClassName_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=45&c=3
void StoreFunctionTemplateInfoClassName_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateInfo> p_o, TNode<PrimitiveHeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=50&c=3
TNode<HeapObject> LoadFunctionTemplateInfoSignature_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=50&c=3
void StoreFunctionTemplateInfoSignature_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateInfo> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=56&c=3
TNode<HeapObject> LoadFunctionTemplateInfoRareData_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=56&c=3
void StoreFunctionTemplateInfoRareData_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateInfo> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=57&c=3
TNode<HeapObject> LoadFunctionTemplateInfoSharedFunctionInfo_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=57&c=3
void StoreFunctionTemplateInfoSharedFunctionInfo_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateInfo> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=59&c=3
TNode<Smi> LoadFunctionTemplateInfoFlag_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=59&c=3
void StoreFunctionTemplateInfoFlag_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateInfo> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=61&c=3
TNode<Smi> LoadFunctionTemplateInfoLength_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=61&c=3
void StoreFunctionTemplateInfoLength_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateInfo> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=65&c=3
TNode<Object> LoadFunctionTemplateInfoCachedPropertyName_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=65&c=3
void StoreFunctionTemplateInfoCachedPropertyName_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateInfo> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=68&c=3
TNode<Smi> LoadFunctionTemplateInfoInstanceType_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=68&c=3
void StoreFunctionTemplateInfoInstanceType_0(compiler::CodeAssemblerState* state_, TNode<FunctionTemplateInfo> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=78&c=3
TNode<HeapObject> LoadObjectTemplateInfoConstructor_0(compiler::CodeAssemblerState* state_, TNode<ObjectTemplateInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=78&c=3
void StoreObjectTemplateInfoConstructor_0(compiler::CodeAssemblerState* state_, TNode<ObjectTemplateInfo> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=79&c=3
TNode<Smi> LoadObjectTemplateInfoData_0(compiler::CodeAssemblerState* state_, TNode<ObjectTemplateInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=79&c=3
void StoreObjectTemplateInfoData_0(compiler::CodeAssemblerState* state_, TNode<ObjectTemplateInfo> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=5&c=1
TNode<TemplateInfo> DownCastForTorqueClass_TemplateInfo_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=14&c=1
TNode<FunctionTemplateRareData> DownCastForTorqueClass_FunctionTemplateRareData_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=41&c=1
TNode<FunctionTemplateInfo> DownCastForTorqueClass_FunctionTemplateInfo_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=77&c=1
TNode<ObjectTemplateInfo> DownCastForTorqueClass_ObjectTemplateInfo_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_TEMPLATES_TQ_CSA_H_
