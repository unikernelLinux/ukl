#include "src/objects/js-struct-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-struct.tq?l=5&c=1
bool IsJSSharedStruct_NonInline(HeapObject o) {
  return o.IsJSSharedStruct();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSSharedStruct<JSSharedStruct, JSObject>::JSSharedStructVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSSharedStructVerify(JSSharedStruct::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
