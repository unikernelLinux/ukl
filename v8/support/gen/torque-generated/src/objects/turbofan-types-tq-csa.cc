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
#include "torque-generated/src/objects/turbofan-types-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/builtins-bigint-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/objects/js-array-tq-csa.h"
#include "torque-generated/src/objects/js-function-tq-csa.h"
#include "torque-generated/src/objects/js-objects-tq-csa.h"
#include "torque-generated/src/objects/js-proxy-tq-csa.h"
#include "torque-generated/src/objects/map-tq-csa.h"
#include "torque-generated/src/objects/name-tq-csa.h"
#include "torque-generated/src/objects/string-tq-csa.h"
#include "torque-generated/src/objects/turbofan-types-tq-csa.h"
#include "torque-generated/src/wasm/wasm-objects-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=12&c=1
TNode<TurbofanType> Cast_TurbofanType_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<TurbofanType> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = DownCastForTorqueClass_TurbofanType_0(state_, TNode<HeapObject>{p_obj}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(label_CastError);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
  return TNode<TurbofanType>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=59&c=1
TNode<TurbofanBitsetType> Cast_TurbofanBitsetType_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<TurbofanBitsetType> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = DownCastForTorqueClass_TurbofanBitsetType_0(state_, TNode<HeapObject>{p_obj}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(label_CastError);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
  return TNode<TurbofanBitsetType>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=65&c=1
TNode<TurbofanUnionType> Cast_TurbofanUnionType_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<TurbofanUnionType> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = DownCastForTorqueClass_TurbofanUnionType_0(state_, TNode<HeapObject>{p_obj}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(label_CastError);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
  return TNode<TurbofanUnionType>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=71&c=1
TNode<TurbofanRangeType> Cast_TurbofanRangeType_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<TurbofanRangeType> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = DownCastForTorqueClass_TurbofanRangeType_0(state_, TNode<HeapObject>{p_obj}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(label_CastError);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
  return TNode<TurbofanRangeType>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=77&c=1
TNode<TurbofanHeapConstantType> Cast_TurbofanHeapConstantType_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<TurbofanHeapConstantType> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = DownCastForTorqueClass_TurbofanHeapConstantType_0(state_, TNode<HeapObject>{p_obj}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(label_CastError);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
  return TNode<TurbofanHeapConstantType>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=82&c=1
TNode<TurbofanOtherNumberConstantType> Cast_TurbofanOtherNumberConstantType_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<TurbofanOtherNumberConstantType> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = DownCastForTorqueClass_TurbofanOtherNumberConstantType_0(state_, TNode<HeapObject>{p_obj}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(label_CastError);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
  return TNode<TurbofanOtherNumberConstantType>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=87&c=1
TNode<BoolT> IsMinusZero_0(compiler::CodeAssemblerState* state_, TNode<Float64T> p_x) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Float64T> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_float64_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).Float64Equal(TNode<Float64T>{p_x}, TNode<Float64T>{tmp0});
    ca_.Branch(tmp1, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<Float64T> tmp2;
  TNode<Float64T> tmp3;
  TNode<Float64T> tmp4;
  TNode<BoolT> tmp5;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp2 = FromConstexpr_float64_constexpr_float64_0(state_, 1);
    tmp3 = CodeStubAssembler(state_).Float64Div(TNode<Float64T>{tmp2}, TNode<Float64T>{p_x});
    tmp4 = FromConstexpr_float64_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp5 = CodeStubAssembler(state_).Float64LessThan(TNode<Float64T>{tmp3}, TNode<Float64T>{tmp4});
    ca_.Goto(&block4, tmp5);
  }

  TNode<BoolT> tmp6;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp6 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block4, tmp6);
  }

  TNode<BoolT> phi_bb4_2;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_2);
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
  return TNode<BoolT>{phi_bb4_2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=91&c=1
TNode<BoolT> TestTurbofanBitsetType_0(compiler::CodeAssemblerState* state_, TNode<Object> p_value, TNode<Uint32T> p_bitsetLow, TNode<Uint32T> p_bitsetHigh) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block68(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block67(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block72(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block71(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block73(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block74(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block79(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block78(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block83(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block82(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block87(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block86(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block91(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block90(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block120(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block121(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block122(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block123(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block125(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block126(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block131(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block134(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block135(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block137(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block138(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block139(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block136(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block132(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block140(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block141(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block143(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block144(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block145(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block142(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block149(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block148(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block150(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block151(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block159(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block158(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block155(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block153(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block154(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block164(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block163(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block165(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Number> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_Number_0(state_, TNode<Object>{p_value}, &label1);
    ca_.Goto(&block4);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block5);
    }
  }

  TNode<Oddball> tmp2;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_Null_0(state_, TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(p_value)}, &label3);
    ca_.Goto(&block35);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block36);
    }
  }

  TNode<Float64T> tmp4;
  TNode<BoolT> tmp5;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp4 = Convert_float64_Number_0(state_, TNode<Number>{tmp0});
    tmp5 = CodeStubAssembler(state_).IsInteger(TNode<Object>{tmp0});
    ca_.Branch(tmp5, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp6;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp6 = IsMinusZero_0(state_, TNode<Float64T>{tmp4});
    ca_.Branch(tmp6, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp7;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp7 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 11, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block1, tmp7);
  }

  TNode<Float64T> tmp8;
  TNode<BoolT> tmp9;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp8 = FromConstexpr_float64_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x80000000ull));
    tmp9 = CodeStubAssembler(state_).Float64LessThan(TNode<Float64T>{tmp4}, TNode<Float64T>{tmp8});
    ca_.Branch(tmp9, &block12, std::vector<compiler::Node*>{}, &block13, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp10;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp10 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 4, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block1, tmp10);
  }

  TNode<Float64T> tmp11;
  TNode<BoolT> tmp12;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp11 = FromConstexpr_float64_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x40000000ull));
    tmp12 = CodeStubAssembler(state_).Float64LessThan(TNode<Float64T>{tmp4}, TNode<Float64T>{tmp11});
    ca_.Branch(tmp12, &block15, std::vector<compiler::Node*>{}, &block16, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp13;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp13 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 3, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block1, tmp13);
  }

  TNode<Float64T> tmp14;
  TNode<BoolT> tmp15;
  if (block16.is_used()) {
    ca_.Bind(&block16);
    tmp14 = FromConstexpr_float64_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp15 = CodeStubAssembler(state_).Float64LessThan(TNode<Float64T>{tmp4}, TNode<Float64T>{tmp14});
    ca_.Branch(tmp15, &block18, std::vector<compiler::Node*>{}, &block19, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp16;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp16 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 6, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block1, tmp16);
  }

  TNode<Float64T> tmp17;
  TNode<BoolT> tmp18;
  if (block19.is_used()) {
    ca_.Bind(&block19);
    tmp17 = FromConstexpr_float64_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x40000000ull));
    tmp18 = CodeStubAssembler(state_).Float64LessThan(TNode<Float64T>{tmp4}, TNode<Float64T>{tmp17});
    ca_.Branch(tmp18, &block21, std::vector<compiler::Node*>{}, &block22, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp19;
  if (block21.is_used()) {
    ca_.Bind(&block21);
    tmp19 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 10, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block1, tmp19);
  }

  TNode<Float64T> tmp20;
  TNode<BoolT> tmp21;
  if (block22.is_used()) {
    ca_.Bind(&block22);
    tmp20 = FromConstexpr_float64_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x80000000ull));
    tmp21 = CodeStubAssembler(state_).Float64LessThan(TNode<Float64T>{tmp4}, TNode<Float64T>{tmp20});
    ca_.Branch(tmp21, &block24, std::vector<compiler::Node*>{}, &block25, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp22;
  if (block24.is_used()) {
    ca_.Bind(&block24);
    tmp22 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 1, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block1, tmp22);
  }

  TNode<Float64T> tmp23;
  TNode<BoolT> tmp24;
  if (block25.is_used()) {
    ca_.Bind(&block25);
    tmp23 = FromConstexpr_float64_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xffffffffull));
    tmp24 = CodeStubAssembler(state_).Float64LessThanOrEqual(TNode<Float64T>{tmp4}, TNode<Float64T>{tmp23});
    ca_.Branch(tmp24, &block27, std::vector<compiler::Node*>{}, &block28, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp25;
  if (block27.is_used()) {
    ca_.Bind(&block27);
    tmp25 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 2, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block1, tmp25);
  }

  TNode<BoolT> tmp26;
  if (block28.is_used()) {
    ca_.Bind(&block28);
    tmp26 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 4, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block1, tmp26);
  }

  TNode<BoolT> tmp27;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp27 = Float64IsNaN_0(state_, TNode<Float64T>{tmp4});
    ca_.Branch(tmp27, &block30, std::vector<compiler::Node*>{}, &block31, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp28;
  if (block30.is_used()) {
    ca_.Bind(&block30);
    tmp28 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 12, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block1, tmp28);
  }

  TNode<BoolT> tmp29;
  if (block31.is_used()) {
    ca_.Bind(&block31);
    tmp29 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 4, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block1, tmp29);
  }

  TNode<Oddball> tmp30;
  if (block36.is_used()) {
    ca_.Bind(&block36);
    compiler::CodeAssemblerLabel label31(&ca_);
    tmp30 = Cast_Undefined_2(state_, TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(p_value)}, &label31);
    ca_.Goto(&block39);
    if (label31.is_used()) {
      ca_.Bind(&label31);
      ca_.Goto(&block40);
    }
  }

  TNode<BoolT> tmp32;
  if (block35.is_used()) {
    ca_.Bind(&block35);
    tmp32 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 7, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block1, tmp32);
  }

  TNode<Oddball> tmp33;
  if (block40.is_used()) {
    ca_.Bind(&block40);
    compiler::CodeAssemblerLabel label34(&ca_);
    tmp33 = Cast_Boolean_1(state_, TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(p_value)}, &label34);
    ca_.Goto(&block43);
    if (label34.is_used()) {
      ca_.Bind(&label34);
      ca_.Goto(&block44);
    }
  }

  TNode<BoolT> tmp35;
  if (block39.is_used()) {
    ca_.Bind(&block39);
    tmp35 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 8, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block1, tmp35);
  }

  TNode<Symbol> tmp36;
  if (block44.is_used()) {
    ca_.Bind(&block44);
    compiler::CodeAssemblerLabel label37(&ca_);
    tmp36 = Cast_Symbol_0(state_, TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(p_value)}, &label37);
    ca_.Goto(&block47);
    if (label37.is_used()) {
      ca_.Bind(&label37);
      ca_.Goto(&block48);
    }
  }

  TNode<BoolT> tmp38;
  if (block43.is_used()) {
    ca_.Bind(&block43);
    tmp38 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 9, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block1, tmp38);
  }

  TNode<String> tmp39;
  if (block48.is_used()) {
    ca_.Bind(&block48);
    compiler::CodeAssemblerLabel label40(&ca_);
    tmp39 = Cast_String_0(state_, TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(p_value)}, &label40);
    ca_.Goto(&block51);
    if (label40.is_used()) {
      ca_.Bind(&label40);
      ca_.Goto(&block52);
    }
  }

  TNode<BoolT> tmp41;
  if (block47.is_used()) {
    ca_.Bind(&block47);
    tmp41 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 13, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block1, tmp41);
  }

  TNode<JSProxy> tmp42;
  if (block52.is_used()) {
    ca_.Bind(&block52);
    compiler::CodeAssemblerLabel label43(&ca_);
    tmp42 = Cast_JSProxy_0(state_, TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(p_value)}, &label43);
    ca_.Goto(&block58);
    if (label43.is_used()) {
      ca_.Bind(&label43);
      ca_.Goto(&block59);
    }
  }

  TNode<BoolT> tmp44;
  if (block51.is_used()) {
    ca_.Bind(&block51);
    tmp44 = Method_String_IsNotInternalized_0(state_, TNode<String>{tmp39});
    ca_.Branch(tmp44, &block53, std::vector<compiler::Node*>{}, &block54, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp45;
  if (block53.is_used()) {
    ca_.Bind(&block53);
    tmp45 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 5, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block1, tmp45);
  }

  TNode<BoolT> tmp46;
  if (block54.is_used()) {
    ca_.Bind(&block54);
    tmp46 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 14, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block1, tmp46);
  }

  TNode<JSFunction> tmp47;
  if (block59.is_used()) {
    ca_.Bind(&block59);
    compiler::CodeAssemblerLabel label48(&ca_);
    tmp47 = Cast_JSFunction_0(state_, TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(p_value)}, &label48);
    ca_.Goto(&block71);
    if (label48.is_used()) {
      ca_.Bind(&label48);
      ca_.Goto(&block72);
    }
  }

  TNode<JSReceiver> tmp49;
  if (block58.is_used()) {
    ca_.Bind(&block58);
    compiler::CodeAssemblerLabel label50(&ca_);
    tmp49 = Cast_Callable_0(state_, TNode<HeapObject>{tmp42}, &label50);
    ca_.Goto(&block67);
    if (label50.is_used()) {
      ca_.Bind(&label50);
      ca_.Goto(&block68);
    }
  }

  TNode<BoolT> tmp51;
  if (block68.is_used()) {
    ca_.Bind(&block68);
    tmp51 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block64, tmp51);
  }

  TNode<BoolT> tmp52;
  if (block67.is_used()) {
    ca_.Bind(&block67);
    tmp52 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block64, tmp52);
  }

  TNode<BoolT> phi_bb64_8;
  if (block64.is_used()) {
    ca_.Bind(&block64, &phi_bb64_8);
    ca_.Branch(phi_bb64_8, &block60, std::vector<compiler::Node*>{}, &block61, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp53;
  if (block60.is_used()) {
    ca_.Bind(&block60);
    tmp53 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 18, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block62, tmp53);
  }

  TNode<BoolT> tmp54;
  if (block61.is_used()) {
    ca_.Bind(&block61);
    tmp54 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 19, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block62, tmp54);
  }

  TNode<BoolT> phi_bb62_6;
  if (block62.is_used()) {
    ca_.Bind(&block62, &phi_bb62_6);
    ca_.Goto(&block1, phi_bb62_6);
  }

  TNode<JSBoundFunction> tmp55;
  if (block72.is_used()) {
    ca_.Bind(&block72);
    compiler::CodeAssemblerLabel label56(&ca_);
    tmp55 = Cast_JSBoundFunction_0(state_, TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(p_value)}, &label56);
    ca_.Goto(&block78);
    if (label56.is_used()) {
      ca_.Bind(&label56);
      ca_.Goto(&block79);
    }
  }

  TNode<IntPtrT> tmp57;
  TNode<SharedFunctionInfo> tmp58;
  TNode<IntPtrT> tmp59;
  TNode<Uint32T> tmp60;
  TNode<BoolT> tmp61;
  if (block71.is_used()) {
    ca_.Bind(&block71);
    tmp57 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp58 = CodeStubAssembler(state_).LoadReference<SharedFunctionInfo>(CodeStubAssembler::Reference{tmp47, tmp57});
    tmp59 = FromConstexpr_intptr_constexpr_int31_0(state_, 28);
    tmp60 = CodeStubAssembler(state_).LoadReference<Uint32T>(CodeStubAssembler::Reference{tmp58, tmp59});
    tmp61 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 10, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(tmp60)));
    ca_.Branch(tmp61, &block73, std::vector<compiler::Node*>{}, &block74, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp62;
  if (block73.is_used()) {
    ca_.Bind(&block73);
    tmp62 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 21, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block1, tmp62);
  }

  TNode<BoolT> tmp63;
  if (block74.is_used()) {
    ca_.Bind(&block74);
    tmp63 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 20, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block1, tmp63);
  }

  TNode<Oddball> tmp64;
  if (block79.is_used()) {
    ca_.Bind(&block79);
    compiler::CodeAssemblerLabel label65(&ca_);
    tmp64 = Cast_TheHole_1(state_, TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(p_value)}, &label65);
    ca_.Goto(&block82);
    if (label65.is_used()) {
      ca_.Bind(&label65);
      ca_.Goto(&block83);
    }
  }

  TNode<BoolT> tmp66;
  if (block78.is_used()) {
    ca_.Bind(&block78);
    tmp66 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 22, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block1, tmp66);
  }

  TNode<JSArray> tmp67;
  if (block83.is_used()) {
    ca_.Bind(&block83);
    compiler::CodeAssemblerLabel label68(&ca_);
    tmp67 = Cast_JSArray_0(state_, TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(p_value)}, &label68);
    ca_.Goto(&block86);
    if (label68.is_used()) {
      ca_.Bind(&label68);
      ca_.Goto(&block87);
    }
  }

  TNode<BoolT> tmp69;
  if (block82.is_used()) {
    ca_.Bind(&block82);
    tmp69 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 23, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block1, tmp69);
  }

  TNode<BigInt> tmp70;
  if (block87.is_used()) {
    ca_.Bind(&block87);
    compiler::CodeAssemblerLabel label71(&ca_);
    tmp70 = Cast_BigInt_0(state_, TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(p_value)}, &label71);
    ca_.Goto(&block90);
    if (label71.is_used()) {
      ca_.Bind(&label71);
      ca_.Goto(&block91);
    }
  }

  TNode<BoolT> tmp72;
  if (block86.is_used()) {
    ca_.Bind(&block86);
    tmp72 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 26, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block1, tmp72);
  }

  TNode<JSObject> tmp73;
  if (block91.is_used()) {
    ca_.Bind(&block91);
    compiler::CodeAssemblerLabel label74(&ca_);
    tmp73 = Cast_JSObject_0(state_, TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(p_value)}, &label74);
    ca_.Goto(&block148);
    if (label74.is_used()) {
      ca_.Bind(&label74);
      ca_.Goto(&block149);
    }
  }

  TNode<BoolT> tmp75;
  if (block90.is_used()) {
    ca_.Bind(&block90);
    tmp75 = FromConstexpr_bool_constexpr_bool_0(state_, (CodeStubAssembler(state_).ConstexprBoolNot((CodeStubAssembler(state_).Is64()))));
    ca_.Branch(tmp75, &block120, std::vector<compiler::Node*>{}, &block121, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp76;
  if (block120.is_used()) {
    ca_.Bind(&block120);
    tmp76 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 30, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block1, tmp76);
  }

  TNode<IntPtrT> tmp77;
  TNode<IntPtrT> tmp78;
  TNode<BoolT> tmp79;
  if (block121.is_used()) {
    ca_.Bind(&block121);
    tmp77 = BigIntBuiltinsAssembler(state_).ReadBigIntLength(TNode<BigInt>{tmp70});
    tmp78 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp79 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp77}, TNode<IntPtrT>{tmp78});
    ca_.Branch(tmp79, &block122, std::vector<compiler::Node*>{}, &block123, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp80;
  if (block122.is_used()) {
    ca_.Bind(&block122);
    tmp80 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 30, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block1, tmp80);
  }

  TNode<IntPtrT> tmp81;
  TNode<BoolT> tmp82;
  if (block123.is_used()) {
    ca_.Bind(&block123);
    tmp81 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp82 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp77}, TNode<IntPtrT>{tmp81});
    ca_.Branch(tmp82, &block125, std::vector<compiler::Node*>{}, &block126, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp83;
  if (block125.is_used()) {
    ca_.Bind(&block125);
    tmp83 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 27, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block1, tmp83);
  }

  TNode<Uint32T> tmp84;
  TNode<IntPtrT> tmp85;
  TNode<UintPtrT> tmp86;
  TNode<Uint32T> tmp87;
  TNode<BoolT> tmp88;
  if (block126.is_used()) {
    ca_.Bind(&block126);
    tmp84 = BigIntBuiltinsAssembler(state_).ReadBigIntSign(TNode<BigInt>{tmp70});
    tmp85 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp86 = CodeStubAssembler(state_).LoadBigIntDigit(TNode<BigInt>{tmp70}, TNode<IntPtrT>{tmp85});
    tmp87 = kPositiveSign_0(state_);
    tmp88 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp84}, TNode<Uint32T>{tmp87});
    ca_.Branch(tmp88, &block131, std::vector<compiler::Node*>{}, &block132, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp89;
  if (block131.is_used()) {
    ca_.Bind(&block131);
    tmp89 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 28, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Branch(tmp89, &block134, std::vector<compiler::Node*>{}, &block135, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp90;
  if (block134.is_used()) {
    ca_.Bind(&block134);
    tmp90 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block136, tmp90);
  }

  TNode<UintPtrT> tmp91;
  TNode<BoolT> tmp92;
  if (block135.is_used()) {
    ca_.Bind(&block135);
    tmp91 = Convert_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(ca_.Is64() ? 0x7FFFFFFFFFFFFFFF : 0x7FFFFFFF));
    tmp92 = CodeStubAssembler(state_).UintPtrLessThanOrEqual(TNode<UintPtrT>{tmp86}, TNode<UintPtrT>{tmp91});
    ca_.Branch(tmp92, &block137, std::vector<compiler::Node*>{}, &block138, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp93;
  if (block137.is_used()) {
    ca_.Bind(&block137);
    tmp93 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 27, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block139, tmp93);
  }

  TNode<BoolT> tmp94;
  if (block138.is_used()) {
    ca_.Bind(&block138);
    tmp94 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block139, tmp94);
  }

  TNode<BoolT> phi_bb139_11;
  if (block139.is_used()) {
    ca_.Bind(&block139, &phi_bb139_11);
    ca_.Goto(&block136, phi_bb139_11);
  }

  TNode<BoolT> phi_bb136_10;
  if (block136.is_used()) {
    ca_.Bind(&block136, &phi_bb136_10);
    ca_.Goto(&block1, phi_bb136_10);
  }

  TNode<BoolT> tmp95;
  if (block132.is_used()) {
    ca_.Bind(&block132);
    tmp95 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 30, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Branch(tmp95, &block140, std::vector<compiler::Node*>{}, &block141, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp96;
  if (block140.is_used()) {
    ca_.Bind(&block140);
    tmp96 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block142, tmp96);
  }

  TNode<UintPtrT> tmp97;
  TNode<BoolT> tmp98;
  if (block141.is_used()) {
    ca_.Bind(&block141);
    tmp97 = Convert_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(ca_.Is64() ? 0x8000000000000000 : 0x80000000));
    tmp98 = CodeStubAssembler(state_).UintPtrLessThanOrEqual(TNode<UintPtrT>{tmp86}, TNode<UintPtrT>{tmp97});
    ca_.Branch(tmp98, &block143, std::vector<compiler::Node*>{}, &block144, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp99;
  if (block143.is_used()) {
    ca_.Bind(&block143);
    tmp99 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 29, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block145, tmp99);
  }

  TNode<BoolT> tmp100;
  if (block144.is_used()) {
    ca_.Bind(&block144);
    tmp100 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block145, tmp100);
  }

  TNode<BoolT> phi_bb145_11;
  if (block145.is_used()) {
    ca_.Bind(&block145, &phi_bb145_11);
    ca_.Goto(&block142, phi_bb145_11);
  }

  TNode<BoolT> phi_bb142_10;
  if (block142.is_used()) {
    ca_.Bind(&block142, &phi_bb142_10);
    ca_.Goto(&block1, phi_bb142_10);
  }

  TNode<WasmObject> tmp101;
  if (block149.is_used()) {
    ca_.Bind(&block149);
    compiler::CodeAssemblerLabel label102(&ca_);
    tmp101 = Cast_WasmObject_0(state_, TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(p_value)}, &label102);
    ca_.Goto(&block163);
    if (label102.is_used()) {
      ca_.Bind(&label102);
      ca_.Goto(&block164);
    }
  }

  TNode<IntPtrT> tmp103;
  TNode<Map> tmp104;
  TNode<BoolT> tmp105;
  if (block148.is_used()) {
    ca_.Bind(&block148);
    tmp103 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp104 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp73, tmp103});
    tmp105 = Method_Map_IsUndetectable_0(state_, TNode<Map>{tmp104});
    ca_.Branch(tmp105, &block150, std::vector<compiler::Node*>{}, &block151, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp106;
  if (block150.is_used()) {
    ca_.Bind(&block150);
    tmp106 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 17, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block1, tmp106);
  }

  TNode<JSReceiver> tmp107;
  if (block151.is_used()) {
    ca_.Bind(&block151);
    compiler::CodeAssemblerLabel label108(&ca_);
    tmp107 = Cast_Callable_0(state_, TNode<HeapObject>{tmp73}, &label108);
    ca_.Goto(&block158);
    if (label108.is_used()) {
      ca_.Bind(&label108);
      ca_.Goto(&block159);
    }
  }

  TNode<BoolT> tmp109;
  if (block159.is_used()) {
    ca_.Bind(&block159);
    tmp109 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block155, tmp109);
  }

  TNode<BoolT> tmp110;
  if (block158.is_used()) {
    ca_.Bind(&block158);
    tmp110 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block155, tmp110);
  }

  TNode<BoolT> phi_bb155_8;
  if (block155.is_used()) {
    ca_.Bind(&block155, &phi_bb155_8);
    ca_.Branch(phi_bb155_8, &block153, std::vector<compiler::Node*>{}, &block154, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp111;
  if (block153.is_used()) {
    ca_.Bind(&block153);
    tmp111 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 15, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block1, tmp111);
  }

  TNode<BoolT> tmp112;
  if (block154.is_used()) {
    ca_.Bind(&block154);
    tmp112 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 16, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block1, tmp112);
  }

  TNode<BoolT> tmp113;
  if (block164.is_used()) {
    ca_.Bind(&block164);
    tmp113 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block1, tmp113);
  }

  TNode<BoolT> tmp114;
  if (block163.is_used()) {
    ca_.Bind(&block163);
    tmp114 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 31, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(p_bitsetLow)));
    ca_.Goto(&block1, tmp114);
  }

  TNode<BoolT> phi_bb1_3;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_3);
    ca_.Goto(&block165);
  }

    ca_.Bind(&block165);
  return TNode<BoolT>{phi_bb1_3};
}

TF_BUILTIN(TestTurbofanType, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kValue);
  USE(parameter1);
  TNode<TurbofanType> parameter2 = UncheckedParameter<TurbofanType>(Descriptor::kExpectedType);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<TurbofanBitsetType> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_TurbofanBitsetType_0(state_, TNode<HeapObject>{parameter2}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  TNode<TurbofanUnionType> tmp2;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_TurbofanUnionType_0(state_, TNode<HeapObject>{ca_.UncheckedCast<TurbofanType>(parameter2)}, &label3);
    ca_.Goto(&block7);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block8);
    }
  }

  TNode<IntPtrT> tmp4;
  TNode<Uint32T> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<Uint32T> tmp7;
  TNode<BoolT> tmp8;
  TNode<Oddball> tmp9;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp5 = CodeStubAssembler(state_).LoadReference<Uint32T>(CodeStubAssembler::Reference{tmp0, tmp4});
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp7 = CodeStubAssembler(state_).LoadReference<Uint32T>(CodeStubAssembler::Reference{tmp0, tmp6});
    tmp8 = TestTurbofanBitsetType_0(state_, TNode<Object>{parameter1}, TNode<Uint32T>{tmp5}, TNode<Uint32T>{tmp7});
    tmp9 = Convert_Boolean_bool_0(state_, TNode<BoolT>{tmp8});
    CodeStubAssembler(state_).Return(tmp9);
  }

  TNode<TurbofanRangeType> tmp10;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    compiler::CodeAssemblerLabel label11(&ca_);
    tmp10 = Cast_TurbofanRangeType_0(state_, TNode<HeapObject>{ca_.UncheckedCast<TurbofanType>(parameter2)}, &label11);
    ca_.Goto(&block14);
    if (label11.is_used()) {
      ca_.Bind(&label11);
      ca_.Goto(&block15);
    }
  }

  TNode<IntPtrT> tmp12;
  TNode<TurbofanType> tmp13;
  TNode<Oddball> tmp14;
  TNode<Oddball> tmp15;
  TNode<BoolT> tmp16;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp12 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp13 = CodeStubAssembler(state_).LoadReference<TurbofanType>(CodeStubAssembler::Reference{tmp2, tmp12});
    tmp14 = ca_.CallStub<Oddball>(Builtins::CallableFor(ca_.isolate(), Builtin::kTestTurbofanType), parameter0, parameter1, tmp13);
    tmp15 = True_0(state_);
    tmp16 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp14}, TNode<HeapObject>{tmp15});
    ca_.Branch(tmp16, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp17;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp17 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block11, tmp17);
  }

  TNode<IntPtrT> tmp18;
  TNode<TurbofanType> tmp19;
  TNode<Oddball> tmp20;
  TNode<Oddball> tmp21;
  TNode<BoolT> tmp22;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp18 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp19 = CodeStubAssembler(state_).LoadReference<TurbofanType>(CodeStubAssembler::Reference{tmp2, tmp18});
    tmp20 = ca_.CallStub<Oddball>(Builtins::CallableFor(ca_.isolate(), Builtin::kTestTurbofanType), parameter0, parameter1, tmp19);
    tmp21 = True_0(state_);
    tmp22 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp20}, TNode<HeapObject>{tmp21});
    ca_.Goto(&block11, tmp22);
  }

  TNode<BoolT> phi_bb11_6;
  TNode<Oddball> tmp23;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_6);
    tmp23 = Convert_Boolean_bool_0(state_, TNode<BoolT>{phi_bb11_6});
    CodeStubAssembler(state_).Return(tmp23);
  }

  TNode<TurbofanHeapConstantType> tmp24;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    compiler::CodeAssemblerLabel label25(&ca_);
    tmp24 = Cast_TurbofanHeapConstantType_0(state_, TNode<HeapObject>{ca_.UncheckedCast<TurbofanType>(parameter2)}, &label25);
    ca_.Goto(&block30);
    if (label25.is_used()) {
      ca_.Bind(&label25);
      ca_.Goto(&block31);
    }
  }

  TNode<Number> tmp26;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    compiler::CodeAssemblerLabel label27(&ca_);
    tmp26 = Cast_Number_0(state_, TNode<Object>{parameter1}, &label27);
    ca_.Goto(&block18);
    if (label27.is_used()) {
      ca_.Bind(&label27);
      ca_.Goto(&block19);
    }
  }

  TNode<Oddball> tmp28;
  if (block19.is_used()) {
    ca_.Bind(&block19);
    tmp28 = False_0(state_);
    CodeStubAssembler(state_).Return(tmp28);
  }

  TNode<BoolT> tmp29;
  TNode<BoolT> tmp30;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp29 = IsIntegerOrSomeInfinity_0(state_, TNode<Object>{tmp26});
    tmp30 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp29});
    ca_.Branch(tmp30, &block20, std::vector<compiler::Node*>{}, &block21, std::vector<compiler::Node*>{});
  }

  TNode<Oddball> tmp31;
  if (block20.is_used()) {
    ca_.Bind(&block20);
    tmp31 = False_0(state_);
    CodeStubAssembler(state_).Return(tmp31);
  }

  TNode<Float64T> tmp32;
  TNode<BoolT> tmp33;
  TNode<BoolT> tmp34;
  if (block21.is_used()) {
    ca_.Bind(&block21);
    tmp32 = Convert_float64_Number_0(state_, TNode<Number>{tmp26});
    tmp33 = IsMinusZero_0(state_, TNode<Float64T>{tmp32});
    tmp34 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp33});
    ca_.Branch(tmp34, &block22, std::vector<compiler::Node*>{}, &block23, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp35;
  TNode<Float64T> tmp36;
  TNode<BoolT> tmp37;
  if (block22.is_used()) {
    ca_.Bind(&block22);
    tmp35 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp36 = CodeStubAssembler(state_).LoadReference<Float64T>(CodeStubAssembler::Reference{tmp10, tmp35});
    tmp37 = CodeStubAssembler(state_).Float64LessThanOrEqual(TNode<Float64T>{tmp36}, TNode<Float64T>{tmp32});
    ca_.Goto(&block24, tmp37);
  }

  TNode<BoolT> tmp38;
  if (block23.is_used()) {
    ca_.Bind(&block23);
    tmp38 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block24, tmp38);
  }

  TNode<BoolT> phi_bb24_8;
  if (block24.is_used()) {
    ca_.Bind(&block24, &phi_bb24_8);
    ca_.Branch(phi_bb24_8, &block25, std::vector<compiler::Node*>{}, &block26, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp39;
  TNode<Float64T> tmp40;
  TNode<BoolT> tmp41;
  if (block25.is_used()) {
    ca_.Bind(&block25);
    tmp39 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp40 = CodeStubAssembler(state_).LoadReference<Float64T>(CodeStubAssembler::Reference{tmp10, tmp39});
    tmp41 = CodeStubAssembler(state_).Float64LessThanOrEqual(TNode<Float64T>{tmp32}, TNode<Float64T>{tmp40});
    ca_.Goto(&block27, tmp41);
  }

  TNode<BoolT> tmp42;
  if (block26.is_used()) {
    ca_.Bind(&block26);
    tmp42 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block27, tmp42);
  }

  TNode<BoolT> phi_bb27_8;
  TNode<Oddball> tmp43;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_8);
    tmp43 = Convert_Boolean_bool_0(state_, TNode<BoolT>{phi_bb27_8});
    CodeStubAssembler(state_).Return(tmp43);
  }

  TNode<TurbofanOtherNumberConstantType> tmp44;
  if (block31.is_used()) {
    ca_.Bind(&block31);
    compiler::CodeAssemblerLabel label45(&ca_);
    tmp44 = Cast_TurbofanOtherNumberConstantType_0(state_, TNode<HeapObject>{ca_.UncheckedCast<TurbofanType>(parameter2)}, &label45);
    ca_.Goto(&block34);
    if (label45.is_used()) {
      ca_.Bind(&label45);
      ca_.Goto(&block35);
    }
  }

  TNode<IntPtrT> tmp46;
  TNode<HeapObject> tmp47;
  TNode<BoolT> tmp48;
  TNode<Oddball> tmp49;
  if (block30.is_used()) {
    ca_.Bind(&block30);
    tmp46 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp47 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp24, tmp46});
    tmp48 = CodeStubAssembler(state_).TaggedEqual(TNode<MaybeObject>{parameter1}, TNode<MaybeObject>{tmp47});
    tmp49 = Convert_Boolean_bool_0(state_, TNode<BoolT>{tmp48});
    CodeStubAssembler(state_).Return(tmp49);
  }

  if (block35.is_used()) {
    ca_.Bind(&block35);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Number> tmp50;
  if (block34.is_used()) {
    ca_.Bind(&block34);
    compiler::CodeAssemblerLabel label51(&ca_);
    tmp50 = Cast_Number_0(state_, TNode<Object>{parameter1}, &label51);
    ca_.Goto(&block38);
    if (label51.is_used()) {
      ca_.Bind(&label51);
      ca_.Goto(&block39);
    }
  }

  TNode<Oddball> tmp52;
  if (block39.is_used()) {
    ca_.Bind(&block39);
    tmp52 = False_0(state_);
    CodeStubAssembler(state_).Return(tmp52);
  }

  TNode<Float64T> tmp53;
  TNode<IntPtrT> tmp54;
  TNode<Float64T> tmp55;
  TNode<BoolT> tmp56;
  TNode<Oddball> tmp57;
  if (block38.is_used()) {
    ca_.Bind(&block38);
    tmp53 = Convert_float64_Number_0(state_, TNode<Number>{tmp50});
    tmp54 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp55 = CodeStubAssembler(state_).LoadReference<Float64T>(CodeStubAssembler::Reference{tmp44, tmp54});
    tmp56 = CodeStubAssembler(state_).Float64Equal(TNode<Float64T>{tmp53}, TNode<Float64T>{tmp55});
    tmp57 = Convert_Boolean_bool_0(state_, TNode<BoolT>{tmp56});
    CodeStubAssembler(state_).Return(tmp57);
  }
}

TF_BUILTIN(CheckTurbofanType, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kValue);
  USE(parameter1);
  TNode<TurbofanType> parameter2 = UncheckedParameter<TurbofanType>(Descriptor::kExpectedType);
  USE(parameter2);
  TNode<Smi> parameter3 = UncheckedParameter<Smi>(Descriptor::kNodeId);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Oddball> tmp0;
  TNode<Oddball> tmp1;
  TNode<BoolT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.CallStub<Oddball>(Builtins::CallableFor(ca_.isolate(), Builtin::kTestTurbofanType), parameter0, parameter1, parameter2);
    tmp1 = True_0(state_);
    tmp2 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp0}, TNode<HeapObject>{tmp1});
    ca_.Branch(tmp2, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<Oddball> tmp3;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp3 = Undefined_0(state_);
    CodeStubAssembler(state_).Return(tmp3);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    CodeStubAssembler(state_).Print("Type assertion failed! (value/expectedType/nodeId)");
    CodeStubAssembler(state_).Print(TNode<Object>{parameter1});
    CodeStubAssembler(state_).Print(TNode<Object>{parameter2});
    CodeStubAssembler(state_).Print(TNode<Object>{parameter3});
    CodeStubAssembler(state_).Unreachable();
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=61&c=3
TNode<Uint32T> LoadTurbofanBitsetTypeBitsetLow_0(compiler::CodeAssemblerState* state_, TNode<TurbofanBitsetType> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp1 = CodeStubAssembler(state_).LoadReference<Uint32T>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=61&c=3
void StoreTurbofanBitsetTypeBitsetLow_0(compiler::CodeAssemblerState* state_, TNode<TurbofanBitsetType> p_o, TNode<Uint32T> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    CodeStubAssembler(state_).StoreReference<Uint32T>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=62&c=3
TNode<Uint32T> LoadTurbofanBitsetTypeBitsetHigh_0(compiler::CodeAssemblerState* state_, TNode<TurbofanBitsetType> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp1 = CodeStubAssembler(state_).LoadReference<Uint32T>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=62&c=3
void StoreTurbofanBitsetTypeBitsetHigh_0(compiler::CodeAssemblerState* state_, TNode<TurbofanBitsetType> p_o, TNode<Uint32T> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<Uint32T>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=67&c=3
TNode<TurbofanType> LoadTurbofanUnionTypeType1_0(compiler::CodeAssemblerState* state_, TNode<TurbofanUnionType> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<TurbofanType> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp1 = CodeStubAssembler(state_).LoadReference<TurbofanType>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<TurbofanType>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=67&c=3
void StoreTurbofanUnionTypeType1_0(compiler::CodeAssemblerState* state_, TNode<TurbofanUnionType> p_o, TNode<TurbofanType> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    CodeStubAssembler(state_).StoreReference<TurbofanType>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=68&c=3
TNode<TurbofanType> LoadTurbofanUnionTypeType2_0(compiler::CodeAssemblerState* state_, TNode<TurbofanUnionType> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<TurbofanType> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp1 = CodeStubAssembler(state_).LoadReference<TurbofanType>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<TurbofanType>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=68&c=3
void StoreTurbofanUnionTypeType2_0(compiler::CodeAssemblerState* state_, TNode<TurbofanUnionType> p_o, TNode<TurbofanType> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<TurbofanType>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=73&c=3
TNode<Float64T> LoadTurbofanRangeTypeMin_0(compiler::CodeAssemblerState* state_, TNode<TurbofanRangeType> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Float64T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp1 = CodeStubAssembler(state_).LoadReference<Float64T>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Float64T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=73&c=3
void StoreTurbofanRangeTypeMin_0(compiler::CodeAssemblerState* state_, TNode<TurbofanRangeType> p_o, TNode<Float64T> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Float64T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp1 = CodeStubAssembler(state_).Float64SilenceNaN(TNode<Float64T>{p_v});
    CodeStubAssembler(state_).StoreReference<Float64T>(CodeStubAssembler::Reference{p_o, tmp0}, tmp1);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=74&c=3
TNode<Float64T> LoadTurbofanRangeTypeMax_0(compiler::CodeAssemblerState* state_, TNode<TurbofanRangeType> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Float64T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp1 = CodeStubAssembler(state_).LoadReference<Float64T>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Float64T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=74&c=3
void StoreTurbofanRangeTypeMax_0(compiler::CodeAssemblerState* state_, TNode<TurbofanRangeType> p_o, TNode<Float64T> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Float64T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp1 = CodeStubAssembler(state_).Float64SilenceNaN(TNode<Float64T>{p_v});
    CodeStubAssembler(state_).StoreReference<Float64T>(CodeStubAssembler::Reference{p_o, tmp0}, tmp1);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=79&c=3
TNode<HeapObject> LoadTurbofanHeapConstantTypeConstant_0(compiler::CodeAssemblerState* state_, TNode<TurbofanHeapConstantType> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<HeapObject> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp1 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<HeapObject>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=79&c=3
void StoreTurbofanHeapConstantTypeConstant_0(compiler::CodeAssemblerState* state_, TNode<TurbofanHeapConstantType> p_o, TNode<HeapObject> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    CodeStubAssembler(state_).StoreReference<HeapObject>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=84&c=3
TNode<Float64T> LoadTurbofanOtherNumberConstantTypeConstant_0(compiler::CodeAssemblerState* state_, TNode<TurbofanOtherNumberConstantType> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Float64T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp1 = CodeStubAssembler(state_).LoadReference<Float64T>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Float64T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=84&c=3
void StoreTurbofanOtherNumberConstantTypeConstant_0(compiler::CodeAssemblerState* state_, TNode<TurbofanOtherNumberConstantType> p_o, TNode<Float64T> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Float64T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp1 = CodeStubAssembler(state_).Float64SilenceNaN(TNode<Float64T>{p_v});
    CodeStubAssembler(state_).StoreReference<Float64T>(CodeStubAssembler::Reference{p_o, tmp0}, tmp1);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=12&c=1
TNode<TurbofanType> DownCastForTorqueClass_TurbofanType_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Map> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp1 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{p_o, tmp0});
    if (((CodeStubAssembler(state_).ConstexprInt31Equal(static_cast<InstanceType>(199), static_cast<InstanceType>(203))))) {
      ca_.Goto(&block3);
    } else {
      ca_.Goto(&block4);
    }
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    if ((CodeStubAssembler(state_).ClassHasMapConstant<TurbofanType>())) {
      ca_.Goto(&block6);
    } else {
      ca_.Goto(&block7);
    }
  }

  TNode<Map> tmp2;
  TNode<BoolT> tmp3;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp2 = CodeStubAssembler(state_).GetClassMapConstant<TurbofanType>();
    tmp3 = CodeStubAssembler(state_).TaggedNotEqual(TNode<HeapObject>{tmp1}, TNode<HeapObject>{tmp2});
    ca_.Branch(tmp3, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    ca_.Goto(&block1);
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    ca_.Goto(&block8);
  }

  TNode<IntPtrT> tmp4;
  TNode<Uint16T> tmp5;
  TNode<Uint32T> tmp6;
  TNode<BoolT> tmp7;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp5 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp1, tmp4});
    tmp6 = FromConstexpr_uint32_constexpr_uint32_0(state_, static_cast<InstanceType>(199));
    tmp7 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{tmp5}, TNode<Uint32T>{tmp6});
    ca_.Branch(tmp7, &block11, std::vector<compiler::Node*>{}, &block12, std::vector<compiler::Node*>{});
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    ca_.Goto(&block1);
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    ca_.Goto(&block8);
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block5);
  }

  TNode<Int32T> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Uint16T> tmp10;
  TNode<Uint16T> tmp11;
  TNode<Int32T> tmp12;
  TNode<Uint16T> tmp13;
  TNode<Uint16T> tmp14;
  TNode<Int32T> tmp15;
  TNode<Int32T> tmp16;
  TNode<Uint32T> tmp17;
  TNode<Uint32T> tmp18;
  TNode<BoolT> tmp19;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp8 = FromConstexpr_int32_constexpr_int32_0(state_, (CodeStubAssembler(state_).ConstexprUint32Sub(static_cast<InstanceType>(203), static_cast<InstanceType>(199))));
    tmp9 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp10 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp1, tmp9});
    tmp11 = Convert_uint16_InstanceType_0(state_, TNode<Uint16T>{tmp10});
    tmp12 = Convert_int32_uint16_0(state_, TNode<Uint16T>{tmp11});
    tmp13 = FromConstexpr_InstanceType_constexpr_InstanceType_0(state_, static_cast<InstanceType>(199));
    tmp14 = Convert_uint16_InstanceType_0(state_, TNode<Uint16T>{tmp13});
    tmp15 = Convert_int32_uint16_0(state_, TNode<Uint16T>{tmp14});
    tmp16 = CodeStubAssembler(state_).Int32Sub(TNode<Int32T>{tmp12}, TNode<Int32T>{tmp15});
    tmp17 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp16});
    tmp18 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp8});
    tmp19 = CodeStubAssembler(state_).Uint32GreaterThan(TNode<Uint32T>{tmp17}, TNode<Uint32T>{tmp18});
    ca_.Branch(tmp19, &block13, std::vector<compiler::Node*>{}, &block14, std::vector<compiler::Node*>{});
  }

  if (block13.is_used()) {
    ca_.Bind(&block13);
    ca_.Goto(&block1);
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    ca_.Goto(&block5);
  }

  TNode<TurbofanType> tmp20;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp20 = TORQUE_CAST(TNode<HeapObject>{p_o});
    ca_.Goto(&block15);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    ca_.Bind(&block15);
  return TNode<TurbofanType>{tmp20};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=59&c=1
TNode<TurbofanBitsetType> DownCastForTorqueClass_TurbofanBitsetType_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Map> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp1 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{p_o, tmp0});
    if (((CodeStubAssembler(state_).ConstexprInt31Equal(static_cast<InstanceType>(199), static_cast<InstanceType>(199))))) {
      ca_.Goto(&block3);
    } else {
      ca_.Goto(&block4);
    }
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    if ((CodeStubAssembler(state_).ClassHasMapConstant<TurbofanBitsetType>())) {
      ca_.Goto(&block6);
    } else {
      ca_.Goto(&block7);
    }
  }

  TNode<Map> tmp2;
  TNode<BoolT> tmp3;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp2 = CodeStubAssembler(state_).GetClassMapConstant<TurbofanBitsetType>();
    tmp3 = CodeStubAssembler(state_).TaggedNotEqual(TNode<HeapObject>{tmp1}, TNode<HeapObject>{tmp2});
    ca_.Branch(tmp3, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    ca_.Goto(&block1);
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    ca_.Goto(&block8);
  }

  TNode<IntPtrT> tmp4;
  TNode<Uint16T> tmp5;
  TNode<Uint32T> tmp6;
  TNode<BoolT> tmp7;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp5 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp1, tmp4});
    tmp6 = FromConstexpr_uint32_constexpr_uint32_0(state_, static_cast<InstanceType>(199));
    tmp7 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{tmp5}, TNode<Uint32T>{tmp6});
    ca_.Branch(tmp7, &block11, std::vector<compiler::Node*>{}, &block12, std::vector<compiler::Node*>{});
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    ca_.Goto(&block1);
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    ca_.Goto(&block8);
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block5);
  }

  TNode<Int32T> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Uint16T> tmp10;
  TNode<Uint16T> tmp11;
  TNode<Int32T> tmp12;
  TNode<Uint16T> tmp13;
  TNode<Uint16T> tmp14;
  TNode<Int32T> tmp15;
  TNode<Int32T> tmp16;
  TNode<Uint32T> tmp17;
  TNode<Uint32T> tmp18;
  TNode<BoolT> tmp19;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp8 = FromConstexpr_int32_constexpr_int32_0(state_, (CodeStubAssembler(state_).ConstexprUint32Sub(static_cast<InstanceType>(199), static_cast<InstanceType>(199))));
    tmp9 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp10 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp1, tmp9});
    tmp11 = Convert_uint16_InstanceType_0(state_, TNode<Uint16T>{tmp10});
    tmp12 = Convert_int32_uint16_0(state_, TNode<Uint16T>{tmp11});
    tmp13 = FromConstexpr_InstanceType_constexpr_InstanceType_0(state_, static_cast<InstanceType>(199));
    tmp14 = Convert_uint16_InstanceType_0(state_, TNode<Uint16T>{tmp13});
    tmp15 = Convert_int32_uint16_0(state_, TNode<Uint16T>{tmp14});
    tmp16 = CodeStubAssembler(state_).Int32Sub(TNode<Int32T>{tmp12}, TNode<Int32T>{tmp15});
    tmp17 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp16});
    tmp18 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp8});
    tmp19 = CodeStubAssembler(state_).Uint32GreaterThan(TNode<Uint32T>{tmp17}, TNode<Uint32T>{tmp18});
    ca_.Branch(tmp19, &block13, std::vector<compiler::Node*>{}, &block14, std::vector<compiler::Node*>{});
  }

  if (block13.is_used()) {
    ca_.Bind(&block13);
    ca_.Goto(&block1);
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    ca_.Goto(&block5);
  }

  TNode<TurbofanBitsetType> tmp20;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp20 = TORQUE_CAST(TNode<HeapObject>{p_o});
    ca_.Goto(&block15);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    ca_.Bind(&block15);
  return TNode<TurbofanBitsetType>{tmp20};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=65&c=1
TNode<TurbofanUnionType> DownCastForTorqueClass_TurbofanUnionType_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Map> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp1 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{p_o, tmp0});
    if (((CodeStubAssembler(state_).ConstexprInt31Equal(static_cast<InstanceType>(203), static_cast<InstanceType>(203))))) {
      ca_.Goto(&block3);
    } else {
      ca_.Goto(&block4);
    }
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    if ((CodeStubAssembler(state_).ClassHasMapConstant<TurbofanUnionType>())) {
      ca_.Goto(&block6);
    } else {
      ca_.Goto(&block7);
    }
  }

  TNode<Map> tmp2;
  TNode<BoolT> tmp3;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp2 = CodeStubAssembler(state_).GetClassMapConstant<TurbofanUnionType>();
    tmp3 = CodeStubAssembler(state_).TaggedNotEqual(TNode<HeapObject>{tmp1}, TNode<HeapObject>{tmp2});
    ca_.Branch(tmp3, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    ca_.Goto(&block1);
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    ca_.Goto(&block8);
  }

  TNode<IntPtrT> tmp4;
  TNode<Uint16T> tmp5;
  TNode<Uint32T> tmp6;
  TNode<BoolT> tmp7;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp5 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp1, tmp4});
    tmp6 = FromConstexpr_uint32_constexpr_uint32_0(state_, static_cast<InstanceType>(203));
    tmp7 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{tmp5}, TNode<Uint32T>{tmp6});
    ca_.Branch(tmp7, &block11, std::vector<compiler::Node*>{}, &block12, std::vector<compiler::Node*>{});
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    ca_.Goto(&block1);
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    ca_.Goto(&block8);
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block5);
  }

  TNode<Int32T> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Uint16T> tmp10;
  TNode<Uint16T> tmp11;
  TNode<Int32T> tmp12;
  TNode<Uint16T> tmp13;
  TNode<Uint16T> tmp14;
  TNode<Int32T> tmp15;
  TNode<Int32T> tmp16;
  TNode<Uint32T> tmp17;
  TNode<Uint32T> tmp18;
  TNode<BoolT> tmp19;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp8 = FromConstexpr_int32_constexpr_int32_0(state_, (CodeStubAssembler(state_).ConstexprUint32Sub(static_cast<InstanceType>(203), static_cast<InstanceType>(203))));
    tmp9 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp10 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp1, tmp9});
    tmp11 = Convert_uint16_InstanceType_0(state_, TNode<Uint16T>{tmp10});
    tmp12 = Convert_int32_uint16_0(state_, TNode<Uint16T>{tmp11});
    tmp13 = FromConstexpr_InstanceType_constexpr_InstanceType_0(state_, static_cast<InstanceType>(203));
    tmp14 = Convert_uint16_InstanceType_0(state_, TNode<Uint16T>{tmp13});
    tmp15 = Convert_int32_uint16_0(state_, TNode<Uint16T>{tmp14});
    tmp16 = CodeStubAssembler(state_).Int32Sub(TNode<Int32T>{tmp12}, TNode<Int32T>{tmp15});
    tmp17 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp16});
    tmp18 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp8});
    tmp19 = CodeStubAssembler(state_).Uint32GreaterThan(TNode<Uint32T>{tmp17}, TNode<Uint32T>{tmp18});
    ca_.Branch(tmp19, &block13, std::vector<compiler::Node*>{}, &block14, std::vector<compiler::Node*>{});
  }

  if (block13.is_used()) {
    ca_.Bind(&block13);
    ca_.Goto(&block1);
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    ca_.Goto(&block5);
  }

  TNode<TurbofanUnionType> tmp20;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp20 = TORQUE_CAST(TNode<HeapObject>{p_o});
    ca_.Goto(&block15);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    ca_.Bind(&block15);
  return TNode<TurbofanUnionType>{tmp20};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=71&c=1
TNode<TurbofanRangeType> DownCastForTorqueClass_TurbofanRangeType_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Map> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp1 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{p_o, tmp0});
    if (((CodeStubAssembler(state_).ConstexprInt31Equal(static_cast<InstanceType>(202), static_cast<InstanceType>(202))))) {
      ca_.Goto(&block3);
    } else {
      ca_.Goto(&block4);
    }
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    if ((CodeStubAssembler(state_).ClassHasMapConstant<TurbofanRangeType>())) {
      ca_.Goto(&block6);
    } else {
      ca_.Goto(&block7);
    }
  }

  TNode<Map> tmp2;
  TNode<BoolT> tmp3;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp2 = CodeStubAssembler(state_).GetClassMapConstant<TurbofanRangeType>();
    tmp3 = CodeStubAssembler(state_).TaggedNotEqual(TNode<HeapObject>{tmp1}, TNode<HeapObject>{tmp2});
    ca_.Branch(tmp3, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    ca_.Goto(&block1);
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    ca_.Goto(&block8);
  }

  TNode<IntPtrT> tmp4;
  TNode<Uint16T> tmp5;
  TNode<Uint32T> tmp6;
  TNode<BoolT> tmp7;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp5 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp1, tmp4});
    tmp6 = FromConstexpr_uint32_constexpr_uint32_0(state_, static_cast<InstanceType>(202));
    tmp7 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{tmp5}, TNode<Uint32T>{tmp6});
    ca_.Branch(tmp7, &block11, std::vector<compiler::Node*>{}, &block12, std::vector<compiler::Node*>{});
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    ca_.Goto(&block1);
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    ca_.Goto(&block8);
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block5);
  }

  TNode<Int32T> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Uint16T> tmp10;
  TNode<Uint16T> tmp11;
  TNode<Int32T> tmp12;
  TNode<Uint16T> tmp13;
  TNode<Uint16T> tmp14;
  TNode<Int32T> tmp15;
  TNode<Int32T> tmp16;
  TNode<Uint32T> tmp17;
  TNode<Uint32T> tmp18;
  TNode<BoolT> tmp19;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp8 = FromConstexpr_int32_constexpr_int32_0(state_, (CodeStubAssembler(state_).ConstexprUint32Sub(static_cast<InstanceType>(202), static_cast<InstanceType>(202))));
    tmp9 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp10 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp1, tmp9});
    tmp11 = Convert_uint16_InstanceType_0(state_, TNode<Uint16T>{tmp10});
    tmp12 = Convert_int32_uint16_0(state_, TNode<Uint16T>{tmp11});
    tmp13 = FromConstexpr_InstanceType_constexpr_InstanceType_0(state_, static_cast<InstanceType>(202));
    tmp14 = Convert_uint16_InstanceType_0(state_, TNode<Uint16T>{tmp13});
    tmp15 = Convert_int32_uint16_0(state_, TNode<Uint16T>{tmp14});
    tmp16 = CodeStubAssembler(state_).Int32Sub(TNode<Int32T>{tmp12}, TNode<Int32T>{tmp15});
    tmp17 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp16});
    tmp18 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp8});
    tmp19 = CodeStubAssembler(state_).Uint32GreaterThan(TNode<Uint32T>{tmp17}, TNode<Uint32T>{tmp18});
    ca_.Branch(tmp19, &block13, std::vector<compiler::Node*>{}, &block14, std::vector<compiler::Node*>{});
  }

  if (block13.is_used()) {
    ca_.Bind(&block13);
    ca_.Goto(&block1);
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    ca_.Goto(&block5);
  }

  TNode<TurbofanRangeType> tmp20;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp20 = TORQUE_CAST(TNode<HeapObject>{p_o});
    ca_.Goto(&block15);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    ca_.Bind(&block15);
  return TNode<TurbofanRangeType>{tmp20};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=77&c=1
TNode<TurbofanHeapConstantType> DownCastForTorqueClass_TurbofanHeapConstantType_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Map> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp1 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{p_o, tmp0});
    if (((CodeStubAssembler(state_).ConstexprInt31Equal(static_cast<InstanceType>(200), static_cast<InstanceType>(200))))) {
      ca_.Goto(&block3);
    } else {
      ca_.Goto(&block4);
    }
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    if ((CodeStubAssembler(state_).ClassHasMapConstant<TurbofanHeapConstantType>())) {
      ca_.Goto(&block6);
    } else {
      ca_.Goto(&block7);
    }
  }

  TNode<Map> tmp2;
  TNode<BoolT> tmp3;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp2 = CodeStubAssembler(state_).GetClassMapConstant<TurbofanHeapConstantType>();
    tmp3 = CodeStubAssembler(state_).TaggedNotEqual(TNode<HeapObject>{tmp1}, TNode<HeapObject>{tmp2});
    ca_.Branch(tmp3, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    ca_.Goto(&block1);
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    ca_.Goto(&block8);
  }

  TNode<IntPtrT> tmp4;
  TNode<Uint16T> tmp5;
  TNode<Uint32T> tmp6;
  TNode<BoolT> tmp7;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp5 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp1, tmp4});
    tmp6 = FromConstexpr_uint32_constexpr_uint32_0(state_, static_cast<InstanceType>(200));
    tmp7 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{tmp5}, TNode<Uint32T>{tmp6});
    ca_.Branch(tmp7, &block11, std::vector<compiler::Node*>{}, &block12, std::vector<compiler::Node*>{});
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    ca_.Goto(&block1);
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    ca_.Goto(&block8);
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block5);
  }

  TNode<Int32T> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Uint16T> tmp10;
  TNode<Uint16T> tmp11;
  TNode<Int32T> tmp12;
  TNode<Uint16T> tmp13;
  TNode<Uint16T> tmp14;
  TNode<Int32T> tmp15;
  TNode<Int32T> tmp16;
  TNode<Uint32T> tmp17;
  TNode<Uint32T> tmp18;
  TNode<BoolT> tmp19;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp8 = FromConstexpr_int32_constexpr_int32_0(state_, (CodeStubAssembler(state_).ConstexprUint32Sub(static_cast<InstanceType>(200), static_cast<InstanceType>(200))));
    tmp9 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp10 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp1, tmp9});
    tmp11 = Convert_uint16_InstanceType_0(state_, TNode<Uint16T>{tmp10});
    tmp12 = Convert_int32_uint16_0(state_, TNode<Uint16T>{tmp11});
    tmp13 = FromConstexpr_InstanceType_constexpr_InstanceType_0(state_, static_cast<InstanceType>(200));
    tmp14 = Convert_uint16_InstanceType_0(state_, TNode<Uint16T>{tmp13});
    tmp15 = Convert_int32_uint16_0(state_, TNode<Uint16T>{tmp14});
    tmp16 = CodeStubAssembler(state_).Int32Sub(TNode<Int32T>{tmp12}, TNode<Int32T>{tmp15});
    tmp17 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp16});
    tmp18 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp8});
    tmp19 = CodeStubAssembler(state_).Uint32GreaterThan(TNode<Uint32T>{tmp17}, TNode<Uint32T>{tmp18});
    ca_.Branch(tmp19, &block13, std::vector<compiler::Node*>{}, &block14, std::vector<compiler::Node*>{});
  }

  if (block13.is_used()) {
    ca_.Bind(&block13);
    ca_.Goto(&block1);
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    ca_.Goto(&block5);
  }

  TNode<TurbofanHeapConstantType> tmp20;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp20 = TORQUE_CAST(TNode<HeapObject>{p_o});
    ca_.Goto(&block15);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    ca_.Bind(&block15);
  return TNode<TurbofanHeapConstantType>{tmp20};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=82&c=1
TNode<TurbofanOtherNumberConstantType> DownCastForTorqueClass_TurbofanOtherNumberConstantType_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Map> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp1 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{p_o, tmp0});
    if (((CodeStubAssembler(state_).ConstexprInt31Equal(static_cast<InstanceType>(201), static_cast<InstanceType>(201))))) {
      ca_.Goto(&block3);
    } else {
      ca_.Goto(&block4);
    }
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    if ((CodeStubAssembler(state_).ClassHasMapConstant<TurbofanOtherNumberConstantType>())) {
      ca_.Goto(&block6);
    } else {
      ca_.Goto(&block7);
    }
  }

  TNode<Map> tmp2;
  TNode<BoolT> tmp3;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp2 = CodeStubAssembler(state_).GetClassMapConstant<TurbofanOtherNumberConstantType>();
    tmp3 = CodeStubAssembler(state_).TaggedNotEqual(TNode<HeapObject>{tmp1}, TNode<HeapObject>{tmp2});
    ca_.Branch(tmp3, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    ca_.Goto(&block1);
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    ca_.Goto(&block8);
  }

  TNode<IntPtrT> tmp4;
  TNode<Uint16T> tmp5;
  TNode<Uint32T> tmp6;
  TNode<BoolT> tmp7;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp5 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp1, tmp4});
    tmp6 = FromConstexpr_uint32_constexpr_uint32_0(state_, static_cast<InstanceType>(201));
    tmp7 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{tmp5}, TNode<Uint32T>{tmp6});
    ca_.Branch(tmp7, &block11, std::vector<compiler::Node*>{}, &block12, std::vector<compiler::Node*>{});
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    ca_.Goto(&block1);
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    ca_.Goto(&block8);
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block5);
  }

  TNode<Int32T> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Uint16T> tmp10;
  TNode<Uint16T> tmp11;
  TNode<Int32T> tmp12;
  TNode<Uint16T> tmp13;
  TNode<Uint16T> tmp14;
  TNode<Int32T> tmp15;
  TNode<Int32T> tmp16;
  TNode<Uint32T> tmp17;
  TNode<Uint32T> tmp18;
  TNode<BoolT> tmp19;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp8 = FromConstexpr_int32_constexpr_int32_0(state_, (CodeStubAssembler(state_).ConstexprUint32Sub(static_cast<InstanceType>(201), static_cast<InstanceType>(201))));
    tmp9 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp10 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp1, tmp9});
    tmp11 = Convert_uint16_InstanceType_0(state_, TNode<Uint16T>{tmp10});
    tmp12 = Convert_int32_uint16_0(state_, TNode<Uint16T>{tmp11});
    tmp13 = FromConstexpr_InstanceType_constexpr_InstanceType_0(state_, static_cast<InstanceType>(201));
    tmp14 = Convert_uint16_InstanceType_0(state_, TNode<Uint16T>{tmp13});
    tmp15 = Convert_int32_uint16_0(state_, TNode<Uint16T>{tmp14});
    tmp16 = CodeStubAssembler(state_).Int32Sub(TNode<Int32T>{tmp12}, TNode<Int32T>{tmp15});
    tmp17 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp16});
    tmp18 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp8});
    tmp19 = CodeStubAssembler(state_).Uint32GreaterThan(TNode<Uint32T>{tmp17}, TNode<Uint32T>{tmp18});
    ca_.Branch(tmp19, &block13, std::vector<compiler::Node*>{}, &block14, std::vector<compiler::Node*>{});
  }

  if (block13.is_used()) {
    ca_.Bind(&block13);
    ca_.Goto(&block1);
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    ca_.Goto(&block5);
  }

  TNode<TurbofanOtherNumberConstantType> tmp20;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp20 = TORQUE_CAST(TNode<HeapObject>{p_o});
    ca_.Goto(&block15);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    ca_.Bind(&block15);
  return TNode<TurbofanOtherNumberConstantType>{tmp20};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=143&c=14
TNode<BoolT> Is_Callable_JSProxy_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSProxy> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSReceiver> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_Callable_0(state_, TNode<HeapObject>{p_o}, &label1);
    ca_.Goto(&block4);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block5);
    }
  }

  TNode<BoolT> tmp2;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp2 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block1, tmp2);
  }

  TNode<BoolT> tmp3;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp3 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block1, tmp3);
  }

  TNode<BoolT> phi_bb1_2;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_2);
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<BoolT>{phi_bb1_2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=186&c=23
TNode<UintPtrT> Convert_uintptr_constexpr_IntegerLiteral_0(compiler::CodeAssemblerState* state_, IntegerLiteral p_i) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<UintPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, p_i);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<UintPtrT>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=197&c=18
TNode<BoolT> Is_Callable_JSObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSObject> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSReceiver> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_Callable_0(state_, TNode<HeapObject>{p_o}, &label1);
    ca_.Goto(&block4);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block5);
    }
  }

  TNode<BoolT> tmp2;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp2 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block1, tmp2);
  }

  TNode<BoolT> tmp3;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp3 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block1, tmp3);
  }

  TNode<BoolT> phi_bb1_2;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_2);
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<BoolT>{phi_bb1_2};
}

} // namespace internal
} // namespace v8
