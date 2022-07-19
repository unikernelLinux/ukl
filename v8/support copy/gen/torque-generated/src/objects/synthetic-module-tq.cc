#include "src/objects/synthetic-module-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/synthetic-module.tq?l=5&c=1
bool IsSyntheticModule_NonInline(HeapObject o) {
  return o.IsSyntheticModule();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedSyntheticModule<SyntheticModule, Module>::SyntheticModuleVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::SyntheticModuleVerify(SyntheticModule::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
