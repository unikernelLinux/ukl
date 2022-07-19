#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_SYNTHETIC_MODULE_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_SYNTHETIC_MODULE_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/synthetic-module.tq?l=5&c=1
TNode<SyntheticModule> Cast_SyntheticModule_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/synthetic-module.tq?l=6&c=3
TNode<String> LoadSyntheticModuleName_0(compiler::CodeAssemblerState* state_, TNode<SyntheticModule> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/synthetic-module.tq?l=6&c=3
void StoreSyntheticModuleName_0(compiler::CodeAssemblerState* state_, TNode<SyntheticModule> p_o, TNode<String> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/synthetic-module.tq?l=7&c=3
TNode<FixedArray> LoadSyntheticModuleExportNames_0(compiler::CodeAssemblerState* state_, TNode<SyntheticModule> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/synthetic-module.tq?l=7&c=3
void StoreSyntheticModuleExportNames_0(compiler::CodeAssemblerState* state_, TNode<SyntheticModule> p_o, TNode<FixedArray> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/synthetic-module.tq?l=8&c=3
TNode<Foreign> LoadSyntheticModuleEvaluationSteps_0(compiler::CodeAssemblerState* state_, TNode<SyntheticModule> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/synthetic-module.tq?l=8&c=3
void StoreSyntheticModuleEvaluationSteps_0(compiler::CodeAssemblerState* state_, TNode<SyntheticModule> p_o, TNode<Foreign> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/synthetic-module.tq?l=5&c=1
TNode<SyntheticModule> DownCastForTorqueClass_SyntheticModule_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_SYNTHETIC_MODULE_TQ_CSA_H_
