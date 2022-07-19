#include "src/objects/data-handler-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=7&c=1
bool IsDataHandler_NonInline(HeapObject o) {
  return o.IsDataHandler();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedDataHandler<DataHandler, Struct>::DataHandlerVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::DataHandlerVerify(DataHandler::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
