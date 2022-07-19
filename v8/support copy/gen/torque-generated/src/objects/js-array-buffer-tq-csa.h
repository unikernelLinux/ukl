#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_ARRAY_BUFFER_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_ARRAY_BUFFER_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=14&c=1
TNode<JSArrayBuffer> Cast_JSArrayBuffer_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=29&c=1
TNode<BoolT> IsDetachedBuffer_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=34&c=1
TNode<BoolT> IsSharedArrayBuffer_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=39&c=1
TNode<BoolT> IsResizableArrayBuffer_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=55&c=1
TNode<JSArrayBufferView> Cast_JSArrayBufferView_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=66&c=1
TNode<BoolT> IsVariableLengthJSArrayBufferView_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBufferView> p_array);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=71&c=1
TNode<BoolT> IsLengthTrackingJSArrayBufferView_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBufferView> p_array);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=79&c=1
TNode<UintPtrT> LoadJSArrayBufferViewByteLength_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBufferView> p_view, TNode<JSArrayBuffer> p_buffer, compiler::CodeAssemblerLabel* label_DetachedOrOutOfBounds);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=90&c=1
TNode<JSTypedArray> Cast_JSTypedArray_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=97&c=1
TNode<BoolT> IsOnHeapTypedArray_0(compiler::CodeAssemblerState* state_, TNode<JSTypedArray> p_array);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=103&c=1
TNode<JSDataView> Cast_JSDataView_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=57&c=3
TNode<JSArrayBuffer> LoadJSArrayBufferViewBuffer_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBufferView> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=57&c=3
void StoreJSArrayBufferViewBuffer_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBufferView> p_o, TNode<JSArrayBuffer> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=58&c=3
TNode<UintPtrT> LoadJSArrayBufferViewByteOffset_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBufferView> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=58&c=3
void StoreJSArrayBufferViewByteOffset_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBufferView> p_o, TNode<UintPtrT> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=59&c=3
TNode<UintPtrT> LoadJSArrayBufferViewByteLength_1(compiler::CodeAssemblerState* state_, TNode<JSArrayBufferView> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=59&c=3
void StoreJSArrayBufferViewByteLength_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBufferView> p_o, TNode<UintPtrT> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=60&c=3
TNode<Uint32T> LoadJSArrayBufferViewBitField_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBufferView> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=60&c=3
void StoreJSArrayBufferViewBitField_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBufferView> p_o, TNode<Uint32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=91&c=3
TNode<UintPtrT> LoadJSTypedArrayLength_0(compiler::CodeAssemblerState* state_, TNode<JSTypedArray> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=91&c=3
void StoreJSTypedArrayLength_0(compiler::CodeAssemblerState* state_, TNode<JSTypedArray> p_o, TNode<UintPtrT> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=93&c=3
TNode<RawPtrT> LoadJSTypedArrayExternalPointer_0(compiler::CodeAssemblerState* state_, TNode<JSTypedArray> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=93&c=3
void StoreJSTypedArrayExternalPointer_0(compiler::CodeAssemblerState* state_, TNode<JSTypedArray> p_o, TNode<RawPtrT> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=94&c=3
TNode<Object> LoadJSTypedArrayBasePointer_0(compiler::CodeAssemblerState* state_, TNode<JSTypedArray> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=94&c=3
void StoreJSTypedArrayBasePointer_0(compiler::CodeAssemblerState* state_, TNode<JSTypedArray> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=15&c=3
TNode<UintPtrT> LoadJSArrayBufferByteLength_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=15&c=3
void StoreJSArrayBufferByteLength_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_o, TNode<UintPtrT> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=16&c=3
TNode<UintPtrT> LoadJSArrayBufferMaxByteLength_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=16&c=3
void StoreJSArrayBufferMaxByteLength_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_o, TNode<UintPtrT> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=18&c=3
TNode<RawPtrT> LoadJSArrayBufferBackingStore_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=18&c=3
void StoreJSArrayBufferBackingStore_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_o, TNode<RawPtrT> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=19&c=3
TNode<RawPtrT> LoadJSArrayBufferExtension_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=19&c=3
void StoreJSArrayBufferExtension_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_o, TNode<RawPtrT> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=20&c=3
TNode<Uint32T> LoadJSArrayBufferBitField_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=20&c=3
void StoreJSArrayBufferBitField_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_o, TNode<Uint32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=105&c=3
TNode<RawPtrT> LoadJSDataViewDataPointer_0(compiler::CodeAssemblerState* state_, TNode<JSDataView> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=105&c=3
void StoreJSDataViewDataPointer_0(compiler::CodeAssemblerState* state_, TNode<JSDataView> p_o, TNode<RawPtrT> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=14&c=1
TNode<JSArrayBuffer> DownCastForTorqueClass_JSArrayBuffer_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=55&c=1
TNode<JSArrayBufferView> DownCastForTorqueClass_JSArrayBufferView_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=90&c=1
TNode<JSTypedArray> DownCastForTorqueClass_JSTypedArray_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=103&c=1
TNode<JSDataView> DownCastForTorqueClass_JSDataView_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_ARRAY_BUFFER_TQ_CSA_H_
