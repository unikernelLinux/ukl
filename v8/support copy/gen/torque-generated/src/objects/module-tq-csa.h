#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_MODULE_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_MODULE_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=5&c=1
TNode<Module> Cast_Module_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=20&c=1
TNode<JSModuleNamespace> Cast_JSModuleNamespace_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=22&c=1
TNode<ScriptOrModule> Cast_ScriptOrModule_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=8&c=3
TNode<ObjectHashTable> LoadModuleExports_0(compiler::CodeAssemblerState* state_, TNode<Module> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=8&c=3
void StoreModuleExports_0(compiler::CodeAssemblerState* state_, TNode<Module> p_o, TNode<ObjectHashTable> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=10&c=3
TNode<Smi> LoadModuleHash_0(compiler::CodeAssemblerState* state_, TNode<Module> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=10&c=3
void StoreModuleHash_0(compiler::CodeAssemblerState* state_, TNode<Module> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=11&c=3
TNode<Smi> LoadModuleStatus_0(compiler::CodeAssemblerState* state_, TNode<Module> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=11&c=3
void StoreModuleStatus_0(compiler::CodeAssemblerState* state_, TNode<Module> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=12&c=3
TNode<HeapObject> LoadModuleModuleNamespace_0(compiler::CodeAssemblerState* state_, TNode<Module> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=12&c=3
void StoreModuleModuleNamespace_0(compiler::CodeAssemblerState* state_, TNode<Module> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=14&c=3
TNode<Object> LoadModuleException_0(compiler::CodeAssemblerState* state_, TNode<Module> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=14&c=3
void StoreModuleException_0(compiler::CodeAssemblerState* state_, TNode<Module> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=17&c=3
TNode<HeapObject> LoadModuleTopLevelCapability_0(compiler::CodeAssemblerState* state_, TNode<Module> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=17&c=3
void StoreModuleTopLevelCapability_0(compiler::CodeAssemblerState* state_, TNode<Module> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=20&c=58
TNode<Module> LoadJSModuleNamespaceModule_0(compiler::CodeAssemblerState* state_, TNode<JSModuleNamespace> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=20&c=58
void StoreJSModuleNamespaceModule_0(compiler::CodeAssemblerState* state_, TNode<JSModuleNamespace> p_o, TNode<Module> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=23&c=3
TNode<Object> LoadScriptOrModuleResourceName_0(compiler::CodeAssemblerState* state_, TNode<ScriptOrModule> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=23&c=3
void StoreScriptOrModuleResourceName_0(compiler::CodeAssemblerState* state_, TNode<ScriptOrModule> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=24&c=3
TNode<FixedArray> LoadScriptOrModuleHostDefinedOptions_0(compiler::CodeAssemblerState* state_, TNode<ScriptOrModule> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=24&c=3
void StoreScriptOrModuleHostDefinedOptions_0(compiler::CodeAssemblerState* state_, TNode<ScriptOrModule> p_o, TNode<FixedArray> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=5&c=1
TNode<Module> DownCastForTorqueClass_Module_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=20&c=1
TNode<JSModuleNamespace> DownCastForTorqueClass_JSModuleNamespace_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=22&c=1
TNode<ScriptOrModule> DownCastForTorqueClass_ScriptOrModule_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_MODULE_TQ_CSA_H_
