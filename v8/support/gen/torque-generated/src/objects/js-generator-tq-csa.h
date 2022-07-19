#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_GENERATOR_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_GENERATOR_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=5&c=1
TNode<JSGeneratorObject> Cast_JSGeneratorObject_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=28&c=1
TNode<JSAsyncFunctionObject> Cast_JSAsyncFunctionObject_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=32&c=1
TNode<JSAsyncGeneratorObject> Cast_JSAsyncGeneratorObject_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=40&c=1
TNode<AsyncGeneratorRequest> Cast_AsyncGeneratorRequest_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=6&c=3
TNode<JSFunction> LoadJSGeneratorObjectFunction_0(compiler::CodeAssemblerState* state_, TNode<JSGeneratorObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=6&c=3
void StoreJSGeneratorObjectFunction_0(compiler::CodeAssemblerState* state_, TNode<JSGeneratorObject> p_o, TNode<JSFunction> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=7&c=3
TNode<Context> LoadJSGeneratorObjectContext_0(compiler::CodeAssemblerState* state_, TNode<JSGeneratorObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=7&c=3
void StoreJSGeneratorObjectContext_0(compiler::CodeAssemblerState* state_, TNode<JSGeneratorObject> p_o, TNode<Context> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=8&c=3
TNode<Object> LoadJSGeneratorObjectReceiver_0(compiler::CodeAssemblerState* state_, TNode<JSGeneratorObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=8&c=3
void StoreJSGeneratorObjectReceiver_0(compiler::CodeAssemblerState* state_, TNode<JSGeneratorObject> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=14&c=3
TNode<Object> LoadJSGeneratorObjectInputOrDebugPos_0(compiler::CodeAssemblerState* state_, TNode<JSGeneratorObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=14&c=3
void StoreJSGeneratorObjectInputOrDebugPos_0(compiler::CodeAssemblerState* state_, TNode<JSGeneratorObject> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=17&c=3
TNode<Smi> LoadJSGeneratorObjectResumeMode_0(compiler::CodeAssemblerState* state_, TNode<JSGeneratorObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=17&c=3
void StoreJSGeneratorObjectResumeMode_0(compiler::CodeAssemblerState* state_, TNode<JSGeneratorObject> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=22&c=3
TNode<Smi> LoadJSGeneratorObjectContinuation_0(compiler::CodeAssemblerState* state_, TNode<JSGeneratorObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=22&c=3
void StoreJSGeneratorObjectContinuation_0(compiler::CodeAssemblerState* state_, TNode<JSGeneratorObject> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=25&c=3
TNode<FixedArray> LoadJSGeneratorObjectParametersAndRegisters_0(compiler::CodeAssemblerState* state_, TNode<JSGeneratorObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=25&c=3
void StoreJSGeneratorObjectParametersAndRegisters_0(compiler::CodeAssemblerState* state_, TNode<JSGeneratorObject> p_o, TNode<FixedArray> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=29&c=3
TNode<JSPromise> LoadJSAsyncFunctionObjectPromise_0(compiler::CodeAssemblerState* state_, TNode<JSAsyncFunctionObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=29&c=3
void StoreJSAsyncFunctionObjectPromise_0(compiler::CodeAssemblerState* state_, TNode<JSAsyncFunctionObject> p_o, TNode<JSPromise> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=35&c=3
TNode<HeapObject> LoadJSAsyncGeneratorObjectQueue_0(compiler::CodeAssemblerState* state_, TNode<JSAsyncGeneratorObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=35&c=3
void StoreJSAsyncGeneratorObjectQueue_0(compiler::CodeAssemblerState* state_, TNode<JSAsyncGeneratorObject> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=37&c=3
TNode<Smi> LoadJSAsyncGeneratorObjectIsAwaiting_0(compiler::CodeAssemblerState* state_, TNode<JSAsyncGeneratorObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=37&c=3
void StoreJSAsyncGeneratorObjectIsAwaiting_0(compiler::CodeAssemblerState* state_, TNode<JSAsyncGeneratorObject> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=41&c=3
TNode<HeapObject> LoadAsyncGeneratorRequestNext_0(compiler::CodeAssemblerState* state_, TNode<AsyncGeneratorRequest> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=41&c=3
void StoreAsyncGeneratorRequestNext_0(compiler::CodeAssemblerState* state_, TNode<AsyncGeneratorRequest> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=42&c=3
TNode<Smi> LoadAsyncGeneratorRequestResumeMode_0(compiler::CodeAssemblerState* state_, TNode<AsyncGeneratorRequest> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=42&c=3
void StoreAsyncGeneratorRequestResumeMode_0(compiler::CodeAssemblerState* state_, TNode<AsyncGeneratorRequest> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=43&c=3
TNode<Object> LoadAsyncGeneratorRequestValue_0(compiler::CodeAssemblerState* state_, TNode<AsyncGeneratorRequest> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=43&c=3
void StoreAsyncGeneratorRequestValue_0(compiler::CodeAssemblerState* state_, TNode<AsyncGeneratorRequest> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=44&c=3
TNode<JSPromise> LoadAsyncGeneratorRequestPromise_0(compiler::CodeAssemblerState* state_, TNode<AsyncGeneratorRequest> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=44&c=3
void StoreAsyncGeneratorRequestPromise_0(compiler::CodeAssemblerState* state_, TNode<AsyncGeneratorRequest> p_o, TNode<JSPromise> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=5&c=1
TNode<JSGeneratorObject> DownCastForTorqueClass_JSGeneratorObject_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=28&c=1
TNode<JSAsyncFunctionObject> DownCastForTorqueClass_JSAsyncFunctionObject_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=32&c=1
TNode<JSAsyncGeneratorObject> DownCastForTorqueClass_JSAsyncGeneratorObject_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=40&c=1
TNode<AsyncGeneratorRequest> DownCastForTorqueClass_AsyncGeneratorRequest_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_GENERATOR_TQ_CSA_H_
