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
#include "torque-generated/src/builtins/collections-tq-csa.h"
#include "torque-generated/src/builtins/array-every-tq-csa.h"
#include "torque-generated/src/builtins/array-findindex-tq-csa.h"
#include "torque-generated/src/builtins/array-reverse-tq-csa.h"
#include "torque-generated/src/builtins/array-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/collections-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/objects/fixed-array-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/collections.tq?l=8&c=1
TorqueStructKeyValuePair LoadKeyValuePairNoSideEffects_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_MayHaveSideEffects) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSArray> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_FastJSArray_1(state_, TNode<Context>{p_context}, TNode<Object>{p_o}, &label1);
    ca_.Goto(&block5);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(label_MayHaveSideEffects);
  }

  TNode<Smi> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<FixedArrayBase> tmp4;
  TNode<FixedArray> tmp5;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp2 = CodeStubAssembler(state_).LoadFastJSArrayLength(TNode<JSArray>{tmp0});
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp4 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp0, tmp3});
    compiler::CodeAssemblerLabel label6(&ca_);
    tmp5 = Cast_FixedArray_0(state_, TNode<HeapObject>{tmp4}, &label6);
    ca_.Goto(&block9);
    if (label6.is_used()) {
      ca_.Bind(&label6);
      ca_.Goto(&block10);
    }
  }

  TNode<FixedDoubleArray> tmp7;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    compiler::CodeAssemblerLabel label8(&ca_);
    tmp7 = Cast_FixedDoubleArray_0(state_, TNode<HeapObject>{ca_.UncheckedCast<FixedArrayBase>(tmp4)}, &label8);
    ca_.Goto(&block21);
    if (label8.is_used()) {
      ca_.Bind(&label8);
      ca_.Goto(&block22);
    }
  }

  TNode<Smi> tmp9;
  TNode<BoolT> tmp10;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp9 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp10 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp2}, TNode<Smi>{tmp9});
    ca_.Branch(tmp10, &block11, std::vector<compiler::Node*>{}, &block12, std::vector<compiler::Node*>{});
  }

  TNode<Smi> tmp11;
  TNode<Object> tmp12;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp11 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp12 = LoadElementOrUndefined_0(state_, TNode<Context>{p_context}, TNode<FixedArray>{tmp5}, TNode<Smi>{tmp11});
    ca_.Goto(&block13, tmp12);
  }

  TNode<Oddball> tmp13;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp13 = Undefined_0(state_);
    ca_.Goto(&block13, tmp13);
  }

  TNode<Object> phi_bb13_7;
  TNode<Smi> tmp14;
  TNode<BoolT> tmp15;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_7);
    tmp14 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp15 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp2}, TNode<Smi>{tmp14});
    ca_.Branch(tmp15, &block15, std::vector<compiler::Node*>{}, &block16, std::vector<compiler::Node*>{});
  }

  TNode<Smi> tmp16;
  TNode<Object> tmp17;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp16 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp17 = LoadElementOrUndefined_0(state_, TNode<Context>{p_context}, TNode<FixedArray>{tmp5}, TNode<Smi>{tmp16});
    ca_.Goto(&block17, tmp17);
  }

  TNode<Oddball> tmp18;
  if (block16.is_used()) {
    ca_.Bind(&block16);
    tmp18 = Undefined_0(state_);
    ca_.Goto(&block17, tmp18);
  }

  TNode<Object> phi_bb17_8;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_8);
    ca_.Goto(&block2, phi_bb13_7, phi_bb17_8);
  }

  if (block22.is_used()) {
    ca_.Bind(&block22);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> tmp19;
  TNode<BoolT> tmp20;
  if (block21.is_used()) {
    ca_.Bind(&block21);
    tmp19 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp20 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp2}, TNode<Smi>{tmp19});
    ca_.Branch(tmp20, &block23, std::vector<compiler::Node*>{}, &block24, std::vector<compiler::Node*>{});
  }

  TNode<Smi> tmp21;
  TNode<Object> tmp22;
  if (block23.is_used()) {
    ca_.Bind(&block23);
    tmp21 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp22 = LoadElementOrUndefined_1(state_, TNode<FixedDoubleArray>{tmp7}, TNode<Smi>{tmp21});
    ca_.Goto(&block25, tmp22);
  }

  TNode<Oddball> tmp23;
  if (block24.is_used()) {
    ca_.Bind(&block24);
    tmp23 = Undefined_0(state_);
    ca_.Goto(&block25, tmp23);
  }

  TNode<Object> phi_bb25_7;
  TNode<Smi> tmp24;
  TNode<BoolT> tmp25;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_7);
    tmp24 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp25 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp2}, TNode<Smi>{tmp24});
    ca_.Branch(tmp25, &block27, std::vector<compiler::Node*>{}, &block28, std::vector<compiler::Node*>{});
  }

  TNode<Smi> tmp26;
  TNode<Object> tmp27;
  if (block27.is_used()) {
    ca_.Bind(&block27);
    tmp26 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp27 = LoadElementOrUndefined_1(state_, TNode<FixedDoubleArray>{tmp7}, TNode<Smi>{tmp26});
    ca_.Goto(&block29, tmp27);
  }

  TNode<Oddball> tmp28;
  if (block28.is_used()) {
    ca_.Bind(&block28);
    tmp28 = Undefined_0(state_);
    ca_.Goto(&block29, tmp28);
  }

  TNode<Object> phi_bb29_8;
  if (block29.is_used()) {
    ca_.Bind(&block29, &phi_bb29_8);
    ca_.Goto(&block2, phi_bb25_7, phi_bb29_8);
  }

  TNode<Object> phi_bb2_2;
  TNode<Object> phi_bb2_3;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_2, &phi_bb2_3);
    ca_.Goto(&block31);
  }

    ca_.Bind(&block31);
  return TorqueStructKeyValuePair{TNode<Object>{phi_bb2_2}, TNode<Object>{phi_bb2_3}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/collections.tq?l=42&c=1
TorqueStructKeyValuePair LoadKeyValuePair_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<Object> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label2(&ca_);
    std::tie(tmp0, tmp1) = LoadKeyValuePairNoSideEffects_0(state_, TNode<Context>{p_context}, TNode<Object>{p_o}, &label2).Flatten();
    ca_.Goto(&block4);
    if (label2.is_used()) {
      ca_.Bind(&label2);
      ca_.Goto(&block5);
    }
  }

  TNode<JSReceiver> tmp3;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    compiler::CodeAssemblerLabel label4(&ca_);
    tmp3 = Cast_JSReceiver_1(state_, TNode<Context>{p_context}, TNode<Object>{p_o}, &label4);
    ca_.Goto(&block8);
    if (label4.is_used()) {
      ca_.Bind(&label4);
      ca_.Goto(&block9);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{p_context}, MessageTemplate::kIteratorValueNotAnObject, TNode<Object>{p_o});
  }

  TNode<Smi> tmp5;
  TNode<Object> tmp6;
  TNode<Smi> tmp7;
  TNode<Object> tmp8;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp5 = Convert_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp6 = CodeStubAssembler(state_).GetProperty(TNode<Context>{p_context}, TNode<Object>{tmp3}, TNode<Object>{tmp5});
    tmp7 = Convert_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp8 = CodeStubAssembler(state_).GetProperty(TNode<Context>{p_context}, TNode<Object>{tmp3}, TNode<Object>{tmp7});
    ca_.Goto(&block1, tmp6, tmp8);
  }

  TNode<Object> phi_bb1_2;
  TNode<Object> phi_bb1_3;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_2, &phi_bb1_3);
    ca_.Goto(&block10);
  }

    ca_.Bind(&block10);
  return TorqueStructKeyValuePair{TNode<Object>{phi_bb1_2}, TNode<Object>{phi_bb1_3}};
}

} // namespace internal
} // namespace v8
