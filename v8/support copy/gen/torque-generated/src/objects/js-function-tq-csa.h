#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_FUNCTION_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_FUNCTION_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=5&c=1
TNode<JSFunctionOrBoundFunctionOrWrappedFunction> Cast_JSFunctionOrBoundFunctionOrWrappedFunction_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=9&c=1
TNode<JSBoundFunction> Cast_JSBoundFunction_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=21&c=1
TNode<JSWrappedFunction> Cast_JSWrappedFunction_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=31&c=1
TNode<JSFunction> Cast_JSFunction_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=24&c=3
TNode<JSReceiver> LoadJSWrappedFunctionWrappedTargetFunction_0(compiler::CodeAssemblerState* state_, TNode<JSWrappedFunction> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=24&c=3
void StoreJSWrappedFunctionWrappedTargetFunction_0(compiler::CodeAssemblerState* state_, TNode<JSWrappedFunction> p_o, TNode<JSReceiver> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=26&c=3
TNode<NativeContext> LoadJSWrappedFunctionContext_0(compiler::CodeAssemblerState* state_, TNode<JSWrappedFunction> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=26&c=3
void StoreJSWrappedFunctionContext_0(compiler::CodeAssemblerState* state_, TNode<JSWrappedFunction> p_o, TNode<NativeContext> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=12&c=3
TNode<JSReceiver> LoadJSBoundFunctionBoundTargetFunction_0(compiler::CodeAssemblerState* state_, TNode<JSBoundFunction> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=12&c=3
void StoreJSBoundFunctionBoundTargetFunction_0(compiler::CodeAssemblerState* state_, TNode<JSBoundFunction> p_o, TNode<JSReceiver> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=15&c=3
TNode<Object> LoadJSBoundFunctionBoundThis_0(compiler::CodeAssemblerState* state_, TNode<JSBoundFunction> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=15&c=3
void StoreJSBoundFunctionBoundThis_0(compiler::CodeAssemblerState* state_, TNode<JSBoundFunction> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=18&c=3
TNode<FixedArray> LoadJSBoundFunctionBoundArguments_0(compiler::CodeAssemblerState* state_, TNode<JSBoundFunction> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=18&c=3
void StoreJSBoundFunctionBoundArguments_0(compiler::CodeAssemblerState* state_, TNode<JSBoundFunction> p_o, TNode<FixedArray> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=33&c=3
TNode<SharedFunctionInfo> LoadJSFunctionSharedFunctionInfo_0(compiler::CodeAssemblerState* state_, TNode<JSFunction> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=33&c=3
void StoreJSFunctionSharedFunctionInfo_0(compiler::CodeAssemblerState* state_, TNode<JSFunction> p_o, TNode<SharedFunctionInfo> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=34&c=3
TNode<Context> LoadJSFunctionContext_0(compiler::CodeAssemblerState* state_, TNode<JSFunction> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=34&c=3
void StoreJSFunctionContext_0(compiler::CodeAssemblerState* state_, TNode<JSFunction> p_o, TNode<Context> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=35&c=3
TNode<FeedbackCell> LoadJSFunctionFeedbackCell_0(compiler::CodeAssemblerState* state_, TNode<JSFunction> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=35&c=3
void StoreJSFunctionFeedbackCell_0(compiler::CodeAssemblerState* state_, TNode<JSFunction> p_o, TNode<FeedbackCell> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=36&c=31
TNode<CodeDataContainer> LoadJSFunctionCode_0(compiler::CodeAssemblerState* state_, TNode<JSFunction> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=36&c=31
void StoreJSFunctionCode_0(compiler::CodeAssemblerState* state_, TNode<JSFunction> p_o, TNode<CodeDataContainer> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=39&c=3
TNode<HeapObject> LoadJSFunctionPrototypeOrInitialMap_0(compiler::CodeAssemblerState* state_, TNode<JSFunction> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=39&c=3
void StoreJSFunctionPrototypeOrInitialMap_0(compiler::CodeAssemblerState* state_, TNode<JSFunction> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=5&c=1
TNode<JSFunctionOrBoundFunctionOrWrappedFunction> DownCastForTorqueClass_JSFunctionOrBoundFunctionOrWrappedFunction_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=9&c=1
TNode<JSBoundFunction> DownCastForTorqueClass_JSBoundFunction_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=21&c=1
TNode<JSWrappedFunction> DownCastForTorqueClass_JSWrappedFunction_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=31&c=1
TNode<JSFunction> DownCastForTorqueClass_JSFunction_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_FUNCTION_TQ_CSA_H_
