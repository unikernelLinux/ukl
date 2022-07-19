#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ITERATOR_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ITERATOR_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator.tq?l=100&c=1
TNode<Object> GetLazyReceiver_0(compiler::CodeAssemblerState* state_, TNode<Object> p_receiver);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator.tq?l=118&c=1
void IteratorCloseOnException_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructIteratorRecord p_iterator);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ITERATOR_TQ_CSA_H_
