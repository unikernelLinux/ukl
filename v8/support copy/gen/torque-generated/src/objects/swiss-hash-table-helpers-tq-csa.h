#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_SWISS_HASH_TABLE_HELPERS_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_SWISS_HASH_TABLE_HELPERS_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-hash-table-helpers.tq?l=52&c=1
TNode<Uint64T> kByteMaskShift_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-hash-table-helpers.tq?l=93&c=1
TNode<Uint32T> H1_0(compiler::CodeAssemblerState* state_, TNode<Uint32T> p_hash);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-hash-table-helpers.tq?l=97&c=1
TNode<Uint32T> H2_0(compiler::CodeAssemblerState* state_, TNode<Uint32T> p_hash);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-hash-table-helpers.tq?l=68&c=17
TNode<Uint64T> ClearLowestSetBit_uint64_0(compiler::CodeAssemblerState* state_, TNode<Uint64T> p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-hash-table-helpers.tq?l=82&c=12
TNode<Int32T> Convert_int32_int32_0(compiler::CodeAssemblerState* state_, TNode<Int32T> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-hash-table-helpers.tq?l=87&c=17
TNode<Uint32T> ClearLowestSetBit_uint32_0(compiler::CodeAssemblerState* state_, TNode<Uint32T> p_value);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_SWISS_HASH_TABLE_HELPERS_TQ_CSA_H_
