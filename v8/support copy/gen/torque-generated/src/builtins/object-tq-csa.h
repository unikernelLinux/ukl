#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_OBJECT_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_OBJECT_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object.tq?l=32&c=1
TNode<Object> ObjectIsExtensibleImpl_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_object);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object.tq?l=40&c=1
TNode<Object> ObjectPreventExtensionsThrow_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_object);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object.tq?l=49&c=1
TNode<Object> ObjectPreventExtensionsDontThrow_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_object);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object.tq?l=59&c=1
TNode<Object> ObjectGetPrototypeOfImpl_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_object);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object.tq?l=65&c=1
TNode<Object> JSReceiverGetPrototypeOf_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_object);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object.tq?l=72&c=1
TNode<Object> ObjectSetPrototypeOfThrow_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_object, TNode<HeapObject> p_proto);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object.tq?l=83&c=1
TNode<Object> ObjectSetPrototypeOfDontThrow_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_object, TNode<HeapObject> p_proto);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object.tq?l=99&c=7
TNode<Oddball> Cast_Null_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object.tq?l=122&c=21
TNode<Map> WeakToStrong_Map_0(compiler::CodeAssemblerState* state_, TNode<MaybeObject> p_x, compiler::CodeAssemblerLabel* label_ClearedWeakPointer);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object.tq?l=169&c=5
TNode<HeapObject> Cast_JSReceiver_OR_Null_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_OBJECT_TQ_CSA_H_
