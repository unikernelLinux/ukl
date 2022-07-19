#include "src/ast/ast.h"
#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-bigint-gen.h"
#include "src/builtins/builtins-collections-gen.h"
#include "src/builtins/builtins-constructor-gen.h"
#include "src/builtins/builtins-data-view-gen.h"
#include "src/builtins/builtins-iterator-gen.h"
#include "src/builtins/builtins-promise-gen.h"
#include "src/builtins/builtins-promise.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-string-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins-wasm-gen.h"
#include "src/builtins/builtins.h"
#include "src/codegen/code-factory.h"
#include "src/debug/debug-wasm-objects.h"
#include "src/heap/factory-inl.h"
#include "src/ic/binary-op-assembler.h"
#include "src/ic/handler-configuration-inl.h"
#include "src/objects/arguments.h"
#include "src/objects/bigint.h"
#include "src/objects/call-site-info.h"
#include "src/objects/elements-kind.h"
#include "src/objects/free-space.h"
#include "src/objects/intl-objects.h"
#include "src/objects/js-break-iterator.h"
#include "src/objects/js-collator.h"
#include "src/objects/js-date-time-format.h"
#include "src/objects/js-display-names.h"
#include "src/objects/js-function.h"
#include "src/objects/js-generator.h"
#include "src/objects/js-list-format.h"
#include "src/objects/js-locale.h"
#include "src/objects/js-number-format.h"
#include "src/objects/js-objects.h"
#include "src/objects/js-plural-rules.h"
#include "src/objects/js-promise.h"
#include "src/objects/js-regexp-string-iterator.h"
#include "src/objects/js-relative-time-format.h"
#include "src/objects/js-segment-iterator.h"
#include "src/objects/js-segmenter.h"
#include "src/objects/js-segments.h"
#include "src/objects/js-shadow-realms.h"
#include "src/objects/js-struct.h"
#include "src/objects/js-temporal-objects.h"
#include "src/objects/js-weak-refs.h"
#include "src/objects/objects.h"
#include "src/objects/ordered-hash-table.h"
#include "src/objects/property-array.h"
#include "src/objects/property-descriptor-object.h"
#include "src/objects/source-text-module.h"
#include "src/objects/swiss-hash-table-helpers.h"
#include "src/objects/swiss-name-dictionary.h"
#include "src/objects/synthetic-module.h"
#include "src/objects/template-objects.h"
#include "src/objects/torque-defined-classes.h"
#include "src/objects/turbofan-types.h"
#include "src/torque/runtime-support.h"
// Required Builtins:
#include "torque-generated/src/objects/swiss-hash-table-helpers-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/objects/swiss-hash-table-helpers-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-hash-table-helpers.tq?l=52&c=1
TNode<Uint64T> kByteMaskShift_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  TNode<Uint64T> tmp0;
    tmp0 = FromConstexpr_uint64_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
  return TNode<Uint64T>{tmp0};}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-hash-table-helpers.tq?l=93&c=1
TNode<Uint32T> H1_0(compiler::CodeAssemblerState* state_, TNode<Uint32T> p_hash) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Int32T> tmp0;
  TNode<Uint32T> tmp1;
  TNode<Uint32T> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_int32_constexpr_int32_0(state_, swiss_table::kH2Bits);
    tmp1 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp0});
    tmp2 = CodeStubAssembler(state_).Word32Shr(TNode<Uint32T>{p_hash}, TNode<Uint32T>{tmp1});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-hash-table-helpers.tq?l=97&c=1
TNode<Uint32T> H2_0(compiler::CodeAssemblerState* state_, TNode<Uint32T> p_hash) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_uint32_constexpr_uint32_0(state_, ((1 << swiss_table::kH2Bits) - 1));
    tmp1 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{p_hash}, TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-hash-table-helpers.tq?l=68&c=17
TNode<Uint64T> ClearLowestSetBit_uint64_0(compiler::CodeAssemblerState* state_, TNode<Uint64T> p_value) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint64T> tmp0;
  TNode<Uint64T> tmp1;
  TNode<Uint64T> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_uint64_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp1 = CodeStubAssembler(state_).Uint64Sub(TNode<Uint64T>{p_value}, TNode<Uint64T>{tmp0});
    tmp2 = CodeStubAssembler(state_).Word64And(TNode<Uint64T>{p_value}, TNode<Uint64T>{tmp1});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint64T>{tmp2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-hash-table-helpers.tq?l=82&c=12
TNode<Int32T> Convert_int32_int32_0(compiler::CodeAssemblerState* state_, TNode<Int32T> p_i) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Int32T>{p_i};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-hash-table-helpers.tq?l=87&c=17
TNode<Uint32T> ClearLowestSetBit_uint32_0(compiler::CodeAssemblerState* state_, TNode<Uint32T> p_value) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  TNode<Uint32T> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp1 = CodeStubAssembler(state_).Uint32Sub(TNode<Uint32T>{p_value}, TNode<Uint32T>{tmp0});
    tmp2 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{p_value}, TNode<Uint32T>{tmp1});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp2};
}

} // namespace internal
} // namespace v8
