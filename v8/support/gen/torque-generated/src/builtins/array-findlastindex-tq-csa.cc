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
#include "torque-generated/src/builtins/array-findlastindex-tq-csa.h"
#include "torque-generated/src/builtins/array-every-tq-csa.h"
#include "torque-generated/src/builtins/array-findindex-tq-csa.h"
#include "torque-generated/src/builtins/array-findlastindex-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/frame-arguments-tq-csa.h"
#include "torque-generated/src/objects/js-array-tq-csa.h"

namespace v8 {
namespace internal {

TF_BUILTIN(ArrayFindLastIndexLoopContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSReceiver> parameter1 = UncheckedParameter<JSReceiver>(Descriptor::kPredicate);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kThisArg);
  USE(parameter2);
  TNode<JSReceiver> parameter3 = UncheckedParameter<JSReceiver>(Descriptor::kO);
  USE(parameter3);
  TNode<Number> parameter4 = UncheckedParameter<Number>(Descriptor::kInitialK);
  USE(parameter4);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.Goto(&block3, parameter4);
  }

  TNode<Number> phi_bb3_5;
  TNode<Number> tmp0;
  TNode<BoolT> tmp1;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_5);
    tmp0 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = NumberIsGreaterThanOrEqual_0(state_, TNode<Number>{phi_bb3_5}, TNode<Number>{tmp0});
    ca_.Branch(tmp1, &block1, std::vector<compiler::Node*>{phi_bb3_5}, &block2, std::vector<compiler::Node*>{phi_bb3_5});
  }

  TNode<Number> phi_bb1_5;
  TNode<Object> tmp2;
  TNode<Object> tmp3;
  TNode<BoolT> tmp4;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_5);
    tmp2 = CodeStubAssembler(state_).GetProperty(TNode<Context>{parameter0}, TNode<Object>{parameter3}, TNode<Object>{phi_bb1_5});
    tmp3 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{parameter2}, TNode<Object>{tmp2}, TNode<Object>{phi_bb1_5}, TNode<Object>{parameter3});
    tmp4 = ToBoolean_0(state_, TNode<Object>{tmp3});
    ca_.Branch(tmp4, &block5, std::vector<compiler::Node*>{phi_bb1_5}, &block6, std::vector<compiler::Node*>{phi_bb1_5});
  }

  TNode<Number> phi_bb5_5;
  if (block5.is_used()) {
    ca_.Bind(&block5, &phi_bb5_5);
    CodeStubAssembler(state_).Return(phi_bb5_5);
  }

  TNode<Number> phi_bb6_5;
  TNode<Number> tmp5;
  TNode<Number> tmp6;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_5);
    tmp5 = FromConstexpr_Number_constexpr_int31_0(state_, 1);
    tmp6 = CodeStubAssembler(state_).NumberSub(TNode<Number>{phi_bb6_5}, TNode<Number>{tmp5});
    ca_.Goto(&block3, tmp6);
  }

  TNode<Number> phi_bb2_5;
  TNode<Smi> tmp7;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_5);
    tmp7 = Convert_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    CodeStubAssembler(state_).Return(tmp7);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-findlastindex.tq?l=37&c=1
TNode<Number> FastArrayFindLastIndex_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<JSReceiver> p_predicate, TNode<Object> p_thisArg, compiler::CodeAssemblerLabel* label_Bailout, compiler::TypedCodeAssemblerVariable<Number>* label_Bailout_parameter_0) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Object> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Object> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_Smi_0(state_, TNode<Object>{p_len}, &label1);
    ca_.Goto(&block5);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block6);
    }
  }

  TNode<Number> tmp2;
  TNode<Number> tmp3;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp2 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).NumberSub(TNode<Number>{p_len}, TNode<Number>{tmp2});
    ca_.Goto(&block1, tmp3);
  }

  TNode<Smi> tmp4;
  TNode<Smi> tmp5;
  TNode<JSArray> tmp6;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp4 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp5 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp0}, TNode<Smi>{tmp4});
    compiler::CodeAssemblerLabel label7(&ca_);
    tmp6 = Cast_FastJSArray_0(state_, TNode<Context>{p_context}, TNode<HeapObject>{p_o}, &label7);
    ca_.Goto(&block9);
    if (label7.is_used()) {
      ca_.Bind(&label7);
      ca_.Goto(&block10);
    }
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    ca_.Goto(&block1, tmp5);
  }

  TNode<JSArray> tmp8;
  TNode<JSArray> tmp9;
  TNode<Map> tmp10;
  TNode<BoolT> tmp11;
  TNode<BoolT> tmp12;
  TNode<BoolT> tmp13;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    std::tie(tmp8, tmp9, tmp10, tmp11, tmp12, tmp13) = NewFastJSArrayWitness_0(state_, TNode<JSArray>{tmp6}).Flatten();
    ca_.Goto(&block13, tmp5, tmp9);
  }

  TNode<Smi> phi_bb13_6;
  TNode<JSArray> phi_bb13_9;
  TNode<Smi> tmp14;
  TNode<BoolT> tmp15;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_6, &phi_bb13_9);
    tmp14 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp15 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(TNode<Smi>{phi_bb13_6}, TNode<Smi>{tmp14});
    ca_.Branch(tmp15, &block11, std::vector<compiler::Node*>{phi_bb13_6, phi_bb13_9}, &block12, std::vector<compiler::Node*>{phi_bb13_6, phi_bb13_9});
  }

  TNode<Smi> phi_bb11_6;
  TNode<JSArray> phi_bb11_9;
  TNode<IntPtrT> tmp16;
  TNode<Map> tmp17;
  TNode<BoolT> tmp18;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_6, &phi_bb11_9);
    tmp16 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp17 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp8, tmp16});
    tmp18 = CodeStubAssembler(state_).TaggedNotEqual(TNode<HeapObject>{tmp17}, TNode<HeapObject>{tmp10});
    ca_.Branch(tmp18, &block18, std::vector<compiler::Node*>{phi_bb11_6, phi_bb11_9}, &block19, std::vector<compiler::Node*>{phi_bb11_6, phi_bb11_9});
  }

  TNode<Smi> phi_bb18_6;
  TNode<JSArray> phi_bb18_9;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_6, &phi_bb18_9);
    ca_.Goto(&block16, phi_bb18_6, phi_bb18_9);
  }

  TNode<Smi> phi_bb19_6;
  TNode<JSArray> phi_bb19_9;
  TNode<BoolT> tmp19;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_6, &phi_bb19_9);
    tmp19 = CodeStubAssembler(state_).IsNoElementsProtectorCellInvalid();
    ca_.Branch(tmp19, &block20, std::vector<compiler::Node*>{phi_bb19_6, phi_bb19_9}, &block21, std::vector<compiler::Node*>{phi_bb19_6, phi_bb19_9});
  }

  TNode<Smi> phi_bb20_6;
  TNode<JSArray> phi_bb20_9;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_6, &phi_bb20_9);
    ca_.Goto(&block16, phi_bb20_6, phi_bb20_9);
  }

  TNode<Smi> phi_bb21_6;
  TNode<JSArray> phi_bb21_9;
  TNode<JSArray> tmp20;
  TNode<Smi> tmp21;
  TNode<BoolT> tmp22;
  if (block21.is_used()) {
    ca_.Bind(&block21, &phi_bb21_6, &phi_bb21_9);
    tmp20 = (TNode<JSArray>{tmp8});
    tmp21 = CodeStubAssembler(state_).LoadFastJSArrayLength(TNode<JSArray>{tmp20});
    tmp22 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(TNode<Smi>{phi_bb21_6}, TNode<Smi>{tmp21});
    ca_.Branch(tmp22, &block22, std::vector<compiler::Node*>{phi_bb21_6}, &block23, std::vector<compiler::Node*>{phi_bb21_6});
  }

  TNode<Smi> phi_bb16_6;
  TNode<JSArray> phi_bb16_9;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_6, &phi_bb16_9);
    ca_.Goto(&block1, phi_bb16_6);
  }

  TNode<Smi> phi_bb22_6;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_6);
    ca_.Goto(&block1, phi_bb22_6);
  }

  TNode<Smi> phi_bb23_6;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_6);
    ca_.Branch(tmp11, &block29, std::vector<compiler::Node*>{phi_bb23_6, phi_bb23_6, phi_bb23_6, phi_bb23_6, phi_bb23_6}, &block30, std::vector<compiler::Node*>{phi_bb23_6, phi_bb23_6, phi_bb23_6, phi_bb23_6, phi_bb23_6});
  }

  TNode<Smi> phi_bb29_6;
  TNode<Smi> phi_bb29_14;
  TNode<Smi> phi_bb29_17;
  TNode<Smi> phi_bb29_18;
  TNode<Smi> phi_bb29_21;
  TNode<Object> tmp23;
  if (block29.is_used()) {
    ca_.Bind(&block29, &phi_bb29_6, &phi_bb29_14, &phi_bb29_17, &phi_bb29_18, &phi_bb29_21);
    compiler::CodeAssemblerLabel label24(&ca_);
    tmp23 = LoadElementNoHole_FixedDoubleArray_0(state_, TNode<Context>{p_context}, TNode<JSArray>{tmp20}, TNode<Smi>{phi_bb29_21}, &label24);
    ca_.Goto(&block32, phi_bb29_6, phi_bb29_14, phi_bb29_17, phi_bb29_18, phi_bb29_21, phi_bb29_21);
    if (label24.is_used()) {
      ca_.Bind(&label24);
      ca_.Goto(&block33, phi_bb29_6, phi_bb29_14, phi_bb29_17, phi_bb29_18, phi_bb29_21, phi_bb29_21);
    }
  }

  TNode<Smi> phi_bb33_6;
  TNode<Smi> phi_bb33_14;
  TNode<Smi> phi_bb33_17;
  TNode<Smi> phi_bb33_18;
  TNode<Smi> phi_bb33_21;
  TNode<Smi> phi_bb33_23;
  if (block33.is_used()) {
    ca_.Bind(&block33, &phi_bb33_6, &phi_bb33_14, &phi_bb33_17, &phi_bb33_18, &phi_bb33_21, &phi_bb33_23);
    ca_.Goto(&block27, phi_bb33_6, phi_bb33_14, phi_bb33_17);
  }

  TNode<Smi> phi_bb32_6;
  TNode<Smi> phi_bb32_14;
  TNode<Smi> phi_bb32_17;
  TNode<Smi> phi_bb32_18;
  TNode<Smi> phi_bb32_21;
  TNode<Smi> phi_bb32_23;
  if (block32.is_used()) {
    ca_.Bind(&block32, &phi_bb32_6, &phi_bb32_14, &phi_bb32_17, &phi_bb32_18, &phi_bb32_21, &phi_bb32_23);
    ca_.Goto(&block28, phi_bb32_6, phi_bb32_14, phi_bb32_17, phi_bb32_18, phi_bb32_21, tmp23);
  }

  TNode<Smi> phi_bb30_6;
  TNode<Smi> phi_bb30_14;
  TNode<Smi> phi_bb30_17;
  TNode<Smi> phi_bb30_18;
  TNode<Smi> phi_bb30_21;
  TNode<Object> tmp25;
  if (block30.is_used()) {
    ca_.Bind(&block30, &phi_bb30_6, &phi_bb30_14, &phi_bb30_17, &phi_bb30_18, &phi_bb30_21);
    compiler::CodeAssemblerLabel label26(&ca_);
    tmp25 = LoadElementNoHole_FixedArray_0(state_, TNode<Context>{p_context}, TNode<JSArray>{tmp20}, TNode<Smi>{phi_bb30_21}, &label26);
    ca_.Goto(&block34, phi_bb30_6, phi_bb30_14, phi_bb30_17, phi_bb30_18, phi_bb30_21, phi_bb30_21);
    if (label26.is_used()) {
      ca_.Bind(&label26);
      ca_.Goto(&block35, phi_bb30_6, phi_bb30_14, phi_bb30_17, phi_bb30_18, phi_bb30_21, phi_bb30_21);
    }
  }

  TNode<Smi> phi_bb35_6;
  TNode<Smi> phi_bb35_14;
  TNode<Smi> phi_bb35_17;
  TNode<Smi> phi_bb35_18;
  TNode<Smi> phi_bb35_21;
  TNode<Smi> phi_bb35_23;
  if (block35.is_used()) {
    ca_.Bind(&block35, &phi_bb35_6, &phi_bb35_14, &phi_bb35_17, &phi_bb35_18, &phi_bb35_21, &phi_bb35_23);
    ca_.Goto(&block27, phi_bb35_6, phi_bb35_14, phi_bb35_17);
  }

  TNode<Smi> phi_bb34_6;
  TNode<Smi> phi_bb34_14;
  TNode<Smi> phi_bb34_17;
  TNode<Smi> phi_bb34_18;
  TNode<Smi> phi_bb34_21;
  TNode<Smi> phi_bb34_23;
  if (block34.is_used()) {
    ca_.Bind(&block34, &phi_bb34_6, &phi_bb34_14, &phi_bb34_17, &phi_bb34_18, &phi_bb34_21, &phi_bb34_23);
    ca_.Goto(&block28, phi_bb34_6, phi_bb34_14, phi_bb34_17, phi_bb34_18, phi_bb34_21, tmp25);
  }

  TNode<Smi> phi_bb28_6;
  TNode<Smi> phi_bb28_14;
  TNode<Smi> phi_bb28_17;
  TNode<Smi> phi_bb28_18;
  TNode<Smi> phi_bb28_21;
  TNode<Object> phi_bb28_22;
  if (block28.is_used()) {
    ca_.Bind(&block28, &phi_bb28_6, &phi_bb28_14, &phi_bb28_17, &phi_bb28_18, &phi_bb28_21, &phi_bb28_22);
    ca_.Goto(&block25, phi_bb28_6, phi_bb28_14, phi_bb28_17, phi_bb28_22);
  }

  TNode<Smi> phi_bb27_6;
  TNode<Smi> phi_bb27_14;
  TNode<Smi> phi_bb27_17;
  TNode<Oddball> tmp27;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_6, &phi_bb27_14, &phi_bb27_17);
    tmp27 = Undefined_0(state_);
    ca_.Goto(&block25, phi_bb27_6, phi_bb27_14, phi_bb27_17, tmp27);
  }

  TNode<Smi> phi_bb25_6;
  TNode<Smi> phi_bb25_14;
  TNode<Smi> phi_bb25_17;
  TNode<Object> phi_bb25_18;
  TNode<Object> tmp28;
  TNode<BoolT> tmp29;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_6, &phi_bb25_14, &phi_bb25_17, &phi_bb25_18);
    tmp28 = CodeStubAssembler(state_).Call(TNode<Context>{p_context}, TNode<Object>{p_predicate}, TNode<Object>{p_thisArg}, TNode<Object>{phi_bb25_18}, TNode<Object>{phi_bb25_6}, TNode<Object>{tmp20});
    tmp29 = ToBoolean_0(state_, TNode<Object>{tmp28});
    ca_.Branch(tmp29, &block37, std::vector<compiler::Node*>{phi_bb25_6}, &block38, std::vector<compiler::Node*>{phi_bb25_6});
  }

  TNode<Smi> phi_bb37_6;
  if (block37.is_used()) {
    ca_.Bind(&block37, &phi_bb37_6);
    ca_.Goto(&block2, phi_bb37_6);
  }

  TNode<Smi> phi_bb38_6;
  TNode<Smi> tmp30;
  TNode<Smi> tmp31;
  if (block38.is_used()) {
    ca_.Bind(&block38, &phi_bb38_6);
    tmp30 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp31 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb38_6}, TNode<Smi>{tmp30});
    ca_.Goto(&block13, tmp31, tmp20);
  }

  TNode<Smi> phi_bb12_6;
  TNode<JSArray> phi_bb12_9;
  TNode<Number> tmp32;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_6, &phi_bb12_9);
    tmp32 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    ca_.Goto(&block2, tmp32);
  }

  TNode<Number> phi_bb2_5;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_5);
    ca_.Goto(&block39, phi_bb2_5);
  }

  TNode<Number> phi_bb1_0;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_0);
    *label_Bailout_parameter_0 = phi_bb1_0;
    ca_.Goto(label_Bailout);
  }

  TNode<Number> phi_bb39_5;
    ca_.Bind(&block39, &phi_bb39_5);
  return TNode<Number>{phi_bb39_5};
}

TF_BUILTIN(ArrayPrototypeFindLastIndex, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<JSReceiver> tmp1;
  TNode<Number> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<BoolT> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = RequireObjectCoercible_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, "Array.prototype.findLastIndex");
    tmp1 = CodeStubAssembler(state_).ToObject_Inline(TNode<Context>{parameter0}, TNode<Object>{parameter1});
    tmp2 = GetLengthProperty_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp1});
    tmp3 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp4 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{tmp3});
    ca_.Branch(tmp4, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block2);
  }

  TNode<IntPtrT> tmp5;
  TNode<Object> tmp6;
  TNode<JSReceiver> tmp7;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp5 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp6 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp5});
    compiler::CodeAssemblerLabel label8(&ca_);
    tmp7 = Cast_Callable_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp6}, &label8);
    ca_.Goto(&block5);
    if (label8.is_used()) {
      ca_.Bind(&label8);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block2);
  }

  TNode<IntPtrT> tmp9;
  TNode<Object> tmp10;
  TNode<Number> tmp11;
    compiler::TypedCodeAssemblerVariable<Number> tmp13(&ca_);
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp9 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp10 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp9});
    compiler::CodeAssemblerLabel label12(&ca_);
    tmp11 = FastArrayFindLastIndex_0(state_, TNode<Context>{parameter0}, TNode<JSReceiver>{tmp1}, TNode<Number>{tmp2}, TNode<JSReceiver>{tmp7}, TNode<Object>{tmp10}, &label12, &tmp13);
    ca_.Goto(&block9);
    if (label12.is_used()) {
      ca_.Bind(&label12);
      ca_.Goto(&block10);
    }
  }

  TNode<Number> tmp14;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp14 = ca_.CallStub<Number>(Builtins::CallableFor(ca_.isolate(), Builtin::kArrayFindLastIndexLoopContinuation), parameter0, tmp7, tmp10, tmp1, tmp13.value());
    arguments.PopAndReturn(tmp14);
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    arguments.PopAndReturn(tmp11);
  }

  TNode<IntPtrT> tmp15;
  TNode<Object> tmp16;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp15 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp16 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp15});
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kCalledNonCallable, TNode<Object>{tmp16});
  }
}

} // namespace internal
} // namespace v8
