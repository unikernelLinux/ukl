#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_TYPED_ARRAY_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_TYPED_ARRAY_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=99&c=1
TNode<Smi> kStoreSucceded_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=100&c=1
TNode<Smi> kStoreFailureArrayDetached_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=140&c=1
TorqueStructTypedArrayAccessor_0 GetTypedArrayAccessor_0(compiler::CodeAssemblerState* state_, TNode<Int32T> p_elementsKindParam);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=191&c=1
TNode<JSTypedArray> EnsureAttached_0(compiler::CodeAssemblerState* state_, TNode<JSTypedArray> p_array, compiler::CodeAssemblerLabel* label_DetachedOrOutOfBounds);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=206&c=1
TorqueStructAttachedJSTypedArrayAndLength_0 EnsureAttachedAndReadLength_0(compiler::CodeAssemblerState* state_, TNode<JSTypedArray> p_array, compiler::CodeAssemblerLabel* label_DetachedOrOutOfBounds);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=241&c=1
TorqueStructAttachedJSTypedArrayWitness_0 NewAttachedJSTypedArrayWitness_0(compiler::CodeAssemblerState* state_, TNode<JSTypedArray> p_array);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=253&c=1
ElementsKind KindForArrayType_Uint8Elements_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=256&c=1
ElementsKind KindForArrayType_Int8Elements_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=259&c=1
ElementsKind KindForArrayType_Uint16Elements_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=262&c=1
ElementsKind KindForArrayType_Int16Elements_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=265&c=1
ElementsKind KindForArrayType_Uint32Elements_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=268&c=1
ElementsKind KindForArrayType_Int32Elements_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=271&c=1
ElementsKind KindForArrayType_Float32Elements_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=274&c=1
ElementsKind KindForArrayType_Float64Elements_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=277&c=1
ElementsKind KindForArrayType_Uint8ClampedElements_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=280&c=1
ElementsKind KindForArrayType_BigUint64Elements_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=283&c=1
ElementsKind KindForArrayType_BigInt64Elements_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=151&c=14
TorqueStructTypedArrayAccessor_0 GetTypedArrayAccessor_Int32Elements_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=153&c=14
TorqueStructTypedArrayAccessor_0 GetTypedArrayAccessor_Float32Elements_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=155&c=14
TorqueStructTypedArrayAccessor_0 GetTypedArrayAccessor_Float64Elements_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=157&c=14
TorqueStructTypedArrayAccessor_0 GetTypedArrayAccessor_Uint8ClampedElements_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=159&c=14
TorqueStructTypedArrayAccessor_0 GetTypedArrayAccessor_BigUint64Elements_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=161&c=14
TorqueStructTypedArrayAccessor_0 GetTypedArrayAccessor_BigInt64Elements_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=165&c=14
TorqueStructTypedArrayAccessor_0 GetTypedArrayAccessor_Uint8Elements_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=167&c=14
TorqueStructTypedArrayAccessor_0 GetTypedArrayAccessor_Int8Elements_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=169&c=14
TorqueStructTypedArrayAccessor_0 GetTypedArrayAccessor_Uint16Elements_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=171&c=14
TorqueStructTypedArrayAccessor_0 GetTypedArrayAccessor_Int16Elements_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=173&c=14
TorqueStructTypedArrayAccessor_0 GetTypedArrayAccessor_Uint32Elements_0(compiler::CodeAssemblerState* state_);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_TYPED_ARRAY_TQ_CSA_H_
