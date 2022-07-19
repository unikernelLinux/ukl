#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_OBJECT_FROMENTRIES_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_OBJECT_FROMENTRIES_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object-fromentries.tq?l=7&c=1
TNode<JSObject> ObjectFromEntriesFastCase_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_iterable, compiler::CodeAssemblerLabel* label_IfSlow);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object-fromentries.tq?l=10&c=5
TNode<JSArray> Cast_FastJSArrayWithNoCustomIteration_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_OBJECT_FROMENTRIES_TQ_CSA_H_
