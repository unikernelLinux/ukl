#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_PROMISE_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_PROMISE_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=13&c=1
TNode<JSPromise> Cast_JSPromise_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=35&c=3
TNode<Object> LoadJSPromiseReactionsOrResult_0(compiler::CodeAssemblerState* state_, TNode<JSPromise> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=35&c=3
void StoreJSPromiseReactionsOrResult_0(compiler::CodeAssemblerState* state_, TNode<JSPromise> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=36&c=3
TNode<Smi> LoadJSPromiseFlags_0(compiler::CodeAssemblerState* state_, TNode<JSPromise> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=36&c=3
void StoreJSPromiseFlags_0(compiler::CodeAssemblerState* state_, TNode<JSPromise> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=14&c=3
TNode<Int32T> Method_JSPromise_Status_0(compiler::CodeAssemblerState* state_, TNode<JSPromise> p_this);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=18&c=3
void Method_JSPromise_SetStatus_0(compiler::CodeAssemblerState* state_, TNode<JSPromise> p_this, Promise::PromiseState p_status);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=25&c=3
TNode<BoolT> Method_JSPromise_HasHandler_0(compiler::CodeAssemblerState* state_, TNode<JSPromise> p_this);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=29&c=3
void Method_JSPromise_SetHasHandler_0(compiler::CodeAssemblerState* state_, TNode<JSPromise> p_this);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=13&c=1
TNode<JSPromise> DownCastForTorqueClass_JSPromise_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_PROMISE_TQ_CSA_H_
