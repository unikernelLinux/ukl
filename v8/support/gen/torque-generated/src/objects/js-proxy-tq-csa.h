#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_PROXY_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_PROXY_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=5&c=1
TNode<JSProxy> Cast_JSProxy_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=15&c=1
TNode<JSObject> NewJSProxyRevocableResult_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSProxy> p_proxy, TNode<JSFunction> p_revoke);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=6&c=3
TNode<HeapObject> LoadJSProxyTarget_0(compiler::CodeAssemblerState* state_, TNode<JSProxy> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=6&c=3
void StoreJSProxyTarget_0(compiler::CodeAssemblerState* state_, TNode<JSProxy> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=7&c=3
TNode<HeapObject> LoadJSProxyHandler_0(compiler::CodeAssemblerState* state_, TNode<JSProxy> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=7&c=3
void StoreJSProxyHandler_0(compiler::CodeAssemblerState* state_, TNode<JSProxy> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=11&c=3
TNode<Object> LoadJSProxyRevocableResultProxy_0(compiler::CodeAssemblerState* state_, TNode<JSObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=11&c=3
void StoreJSProxyRevocableResultProxy_0(compiler::CodeAssemblerState* state_, TNode<JSObject> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=12&c=3
TNode<Object> LoadJSProxyRevocableResultRevoke_0(compiler::CodeAssemblerState* state_, TNode<JSObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=12&c=3
void StoreJSProxyRevocableResultRevoke_0(compiler::CodeAssemblerState* state_, TNode<JSObject> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=5&c=1
TNode<JSProxy> DownCastForTorqueClass_JSProxy_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_PROXY_TQ_CSA_H_
