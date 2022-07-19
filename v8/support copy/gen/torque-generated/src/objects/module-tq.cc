#include "src/objects/module-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=5&c=1
bool IsModule_NonInline(HeapObject o) {
  return o.IsModule();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedModule<Module, HeapObject>::ModuleVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::ModuleVerify(Module::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=20&c=1
bool IsJSModuleNamespace_NonInline(HeapObject o) {
  return o.IsJSModuleNamespace();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSModuleNamespace<JSModuleNamespace, JSSpecialObject>::JSModuleNamespaceVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSModuleNamespaceVerify(JSModuleNamespace::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=22&c=1
bool IsScriptOrModule_NonInline(HeapObject o) {
  return o.IsScriptOrModule();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedScriptOrModule<ScriptOrModule, Struct>::ScriptOrModuleVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::ScriptOrModuleVerify(ScriptOrModule::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
