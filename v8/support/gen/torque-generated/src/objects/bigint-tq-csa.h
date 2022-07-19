#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_BIGINT_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_BIGINT_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bigint.tq?l=7&c=1
TNode<BigInt> Cast_BigIntBase_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bigint.tq?l=16&c=1
TNode<BigInt> Convert_BigInt_MutableBigInt_0(compiler::CodeAssemblerState* state_, TNode<BigInt> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bigint.tq?l=7&c=1
TNode<BigInt> DownCastForTorqueClass_BigIntBase_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bigint.tq?l=18&c=31
TNode<BigInt> Convert_BigIntBase_MutableBigInt_0(compiler::CodeAssemblerState* state_, TNode<BigInt> p_i);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_BIGINT_TQ_CSA_H_
