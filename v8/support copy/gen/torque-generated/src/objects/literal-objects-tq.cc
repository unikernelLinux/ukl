#include "src/objects/literal-objects-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=5&c=1
bool IsArrayBoilerplateDescription_NonInline(HeapObject o) {
  return o.IsArrayBoilerplateDescription();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedArrayBoilerplateDescription<ArrayBoilerplateDescription, Struct>::ArrayBoilerplateDescriptionVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::ArrayBoilerplateDescriptionVerify(ArrayBoilerplateDescription::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=10&c=1
bool IsRegExpBoilerplateDescription_NonInline(HeapObject o) {
  return o.IsRegExpBoilerplateDescription();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedRegExpBoilerplateDescription<RegExpBoilerplateDescription, Struct>::RegExpBoilerplateDescriptionVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::RegExpBoilerplateDescriptionVerify(RegExpBoilerplateDescription::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
