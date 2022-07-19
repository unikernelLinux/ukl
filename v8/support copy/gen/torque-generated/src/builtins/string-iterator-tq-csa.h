#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_STRING_ITERATOR_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_STRING_ITERATOR_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/string-iterator.tq?l=7&c=1
TNode<JSStringIterator> NewJSStringIterator_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<String> p_string, TNode<Smi> p_nextIndex);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/string-iterator.tq?l=30&c=20
TNode<JSStringIterator> Cast_JSStringIterator_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_STRING_ITERATOR_TQ_CSA_H_
