#include "src/objects/embedder-data-array-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/embedder-data-array.tq?l=5&c=1
bool IsEmbedderDataArray_NonInline(HeapObject o) {
  return o.IsEmbedderDataArray();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedEmbedderDataArray<EmbedderDataArray, HeapObject>::EmbedderDataArrayVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::EmbedderDataArrayVerify(EmbedderDataArray::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
