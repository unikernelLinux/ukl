#include "src/objects/template-objects-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=5&c=1
bool IsCachedTemplateObject_NonInline(HeapObject o) {
  return o.IsCachedTemplateObject();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedCachedTemplateObject<CachedTemplateObject, Struct>::CachedTemplateObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::CachedTemplateObjectVerify(CachedTemplateObject::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=11&c=1
bool IsTemplateObjectDescription_NonInline(HeapObject o) {
  return o.IsTemplateObjectDescription();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedTemplateObjectDescription<TemplateObjectDescription, Struct>::TemplateObjectDescriptionVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::TemplateObjectDescriptionVerify(TemplateObjectDescription::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
