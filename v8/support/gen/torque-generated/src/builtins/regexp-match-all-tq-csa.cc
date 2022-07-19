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
#include "torque-generated/src/builtins/regexp-match-all-tq-csa.h"
#include "torque-generated/src/builtins/array-join-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/boolean-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/promise-abstract-operations-tq-csa.h"
#include "torque-generated/src/builtins/regexp-match-all-tq-csa.h"
#include "torque-generated/src/builtins/regexp-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/objects/fixed-array-tq-csa.h"
#include "torque-generated/src/objects/js-regexp-string-iterator-tq-csa.h"
#include "torque-generated/src/objects/js-regexp-tq-csa.h"
#include "torque-generated/src/objects/string-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match-all.tq?l=13&c=1
TNode<Object> RegExpPrototypeMatchAllImpl_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<NativeContext> p_nativeContext, TNode<Object> p_receiver, TNode<Object> p_string) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, BoolT, BoolT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSReceiver> tmp0;
  TNode<String> tmp1;
  TNode<JSRegExp> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    CodeStubAssembler(state_).ThrowIfNotJSReceiver(TNode<Context>{p_context}, TNode<Object>{p_receiver}, MessageTemplate::kIncompatibleMethodReceiver, "RegExp.prototype.@@matchAll");
    tmp0 = UnsafeCast_JSReceiver_0(state_, TNode<Context>{p_context}, TNode<Object>{p_receiver});
    tmp1 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{p_context}, TNode<Object>{p_string});
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_FastJSRegExp_0(state_, TNode<Context>{p_context}, TNode<HeapObject>{tmp0}, &label3);
    ca_.Goto(&block4);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block5);
    }
  }

  TNode<JSFunction> tmp4;
  TNode<JSReceiver> tmp5;
  TNode<JSReceiver> tmp6;
  TNode<Object> tmp7;
  TNode<Object> tmp8;
  TNode<String> tmp9;
  TNode<JSReceiver> tmp10;
  TNode<Object> tmp11;
  TNode<Number> tmp12;
  TNode<JSReceiver> tmp13;
  TNode<String> tmp14;
  TNode<Smi> tmp15;
  TNode<Smi> tmp16;
  TNode<Smi> tmp17;
  TNode<BoolT> tmp18;
  TNode<String> tmp19;
  TNode<Smi> tmp20;
  TNode<Smi> tmp21;
  TNode<Smi> tmp22;
  TNode<BoolT> tmp23;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp4 = LoadRegExpFunction_0(state_, TNode<NativeContext>{p_nativeContext});
    tmp5 = CodeStubAssembler(state_).SpeciesConstructor(TNode<Context>{p_context}, TNode<Object>{tmp0}, TNode<JSReceiver>{tmp4});
    tmp6 = UnsafeCast_Constructor_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp5});
    tmp7 = FromConstexpr_JSAny_constexpr_string_0(state_, "flags");
    tmp8 = CodeStubAssembler(state_).GetProperty(TNode<Context>{p_context}, TNode<Object>{tmp0}, TNode<Object>{tmp7});
    tmp9 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{p_context}, TNode<Object>{tmp8});
    tmp10 = CodeStubAssembler(state_).Construct(TNode<Context>{p_context}, TNode<JSReceiver>{tmp6}, TNode<Object>{tmp0}, TNode<Object>{tmp9});
    tmp11 = RegExpBuiltinsAssembler(state_).SlowLoadLastIndex(TNode<Context>{p_context}, TNode<Object>{tmp0});
    tmp12 = CodeStubAssembler(state_).ToLength_Inline(TNode<Context>{p_context}, TNode<Object>{tmp11});
    tmp13 = UnsafeCast_JSReceiver_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp10});
    RegExpBuiltinsAssembler(state_).SlowStoreLastIndex(TNode<Context>{p_context}, TNode<Object>{tmp13}, TNode<Object>{tmp12});
    tmp14 = CodeStubAssembler(state_).StringConstant("g");
    tmp15 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp16 = ca_.CallStub<Smi>(Builtins::CallableFor(ca_.isolate(), Builtin::kStringIndexOf), p_context, tmp9, tmp14, tmp15);
    tmp17 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    tmp18 = CodeStubAssembler(state_).SmiNotEqual(TNode<Smi>{tmp16}, TNode<Smi>{tmp17});
    tmp19 = CodeStubAssembler(state_).StringConstant("u");
    tmp20 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp21 = ca_.CallStub<Smi>(Builtins::CallableFor(ca_.isolate(), Builtin::kStringIndexOf), p_context, tmp9, tmp19, tmp20);
    tmp22 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    tmp23 = CodeStubAssembler(state_).SmiNotEqual(TNode<Smi>{tmp21}, TNode<Smi>{tmp22});
    ca_.Goto(&block2, tmp10, tmp18, tmp23);
  }

  TNode<IntPtrT> tmp24;
  TNode<PrimitiveHeapObject> tmp25;
  TNode<String> tmp26;
  TNode<Object> tmp27;
  TNode<JSRegExp> tmp28;
  TNode<JSRegExp> tmp29;
  TNode<Smi> tmp30;
  TNode<BoolT> tmp31;
  TNode<BoolT> tmp32;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp24 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp25 = CodeStubAssembler(state_).LoadReference<PrimitiveHeapObject>(CodeStubAssembler::Reference{tmp2, tmp24});
    tmp26 = FastFlagsGetter_0(state_, TNode<Context>{p_context}, TNode<JSRegExp>{tmp2});
    tmp27 = RegExpCreate_0(state_, TNode<Context>{p_context}, TNode<NativeContext>{p_nativeContext}, TNode<Object>{tmp25}, TNode<String>{tmp26});
    tmp28 = UnsafeCast_JSRegExp_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp27});
    tmp29 = UnsafeCast_FastJSRegExp_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp0});
    tmp30 = RegExpBuiltinsAssembler(state_).FastLoadLastIndex(TNode<JSRegExp>{tmp29});
    RegExpBuiltinsAssembler(state_).FastStoreLastIndex(TNode<JSRegExp>{tmp28}, TNode<Smi>{tmp30});
    tmp31 = RegExpBuiltinsAssembler(state_).FastFlagGetter(TNode<JSRegExp>{tmp28}, JSRegExp::Flag::kGlobal);
    tmp32 = RegExpBuiltinsAssembler(state_).FastFlagGetter(TNode<JSRegExp>{tmp28}, JSRegExp::Flag::kUnicode);
    ca_.Goto(&block2, tmp27, tmp31, tmp32);
  }

  TNode<Object> phi_bb2_6;
  TNode<BoolT> phi_bb2_7;
  TNode<BoolT> phi_bb2_8;
  TNode<Object> tmp33;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_6, &phi_bb2_7, &phi_bb2_8);
    tmp33 = RegExpMatchAllAssembler(state_).CreateRegExpStringIterator(TNode<NativeContext>{p_nativeContext}, TNode<Object>{phi_bb2_6}, TNode<String>{tmp1}, TNode<BoolT>{phi_bb2_7}, TNode<BoolT>{phi_bb2_8});
    ca_.Goto(&block10);
  }

    ca_.Bind(&block10);
  return TNode<Object>{tmp33};
}

TF_BUILTIN(RegExpPrototypeMatchAll, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kString);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = RegExpPrototypeMatchAllImpl_0(state_, TNode<Context>{parameter0}, TNode<NativeContext>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{parameter2});
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(RegExpStringIteratorPrototypeNext, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, BoolT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSRegExpStringIterator> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSRegExpStringIterator_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  TNode<Object> tmp2;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = FromConstexpr_Object_constexpr_string_0(state_, "%RegExpStringIterator%.prototype.next");
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kIncompatibleMethodReceiver, TNode<Object>{tmp2}, TNode<Object>{parameter1});
  }

  TNode<IntPtrT> tmp3;
  TNode<Smi> tmp4;
  TNode<BoolT> tmp5;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    tmp4 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp3});
    tmp5 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32FromWord<base::BitField<bool, 1, 1, uintptr_t>>(ca_.UncheckedCast<WordT>(ca_.BitcastTaggedToWordForTagAndSmiBits(tmp4))));
    ca_.Branch(tmp5, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    ca_.Goto(&block6);
  }

  TNode<IntPtrT> tmp6;
  TNode<JSReceiver> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<String> tmp9;
  TNode<BoolT> tmp10;
  TNode<BoolT> tmp11;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp7 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{tmp0, tmp6});
    tmp8 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp9 = CodeStubAssembler(state_).LoadReference<String>(CodeStubAssembler::Reference{tmp0, tmp8});
    tmp10 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp11 = IsFastRegExpPermissive_0(state_, TNode<Context>{parameter0}, TNode<HeapObject>{tmp7});
    ca_.Branch(tmp11, &block11, std::vector<compiler::Node*>{}, &block12, std::vector<compiler::Node*>{});
  }

  TNode<JSRegExp> tmp12;
  TNode<Number> tmp13;
  TNode<RegExpMatchInfo> tmp14;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp12 = UnsafeCast_JSRegExp_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp7});
    tmp13 = LoadLastIndexAsLength_0(state_, TNode<Context>{parameter0}, TNode<JSRegExp>{tmp12}, true);
    compiler::CodeAssemblerLabel label15(&ca_);
    tmp14 = RegExpPrototypeExecBodyWithoutResultFast_1(state_, TNode<Context>{parameter0}, TNode<JSRegExp>{tmp12}, TNode<String>{tmp9}, TNode<Number>{tmp13}, &label15);
    ca_.Goto(&block14);
    if (label15.is_used()) {
      ca_.Bind(&label15);
      ca_.Goto(&block15);
    }
  }

  if (block15.is_used()) {
    ca_.Bind(&block15);
    ca_.Goto(&block10, ca_.Uninitialized<Object>());
  }

  TNode<JSArray> tmp16;
  TNode<BoolT> tmp17;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp16 = RegExpBuiltinsAssembler(state_).ConstructNewResultFromMatchInfo(TNode<Context>{parameter0}, TNode<JSRegExp>{tmp12}, TNode<RegExpMatchInfo>{tmp14}, TNode<String>{tmp9}, TNode<Number>{tmp13});
    tmp17 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block13, tmp16, tmp17);
  }

  TNode<Object> tmp18;
  TNode<Oddball> tmp19;
  TNode<BoolT> tmp20;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp18 = RegExpExec_0(state_, TNode<Context>{parameter0}, TNode<JSReceiver>{tmp7}, TNode<String>{tmp9});
    tmp19 = Null_0(state_);
    tmp20 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp18}, TNode<HeapObject>{tmp19});
    ca_.Branch(tmp20, &block16, std::vector<compiler::Node*>{}, &block17, std::vector<compiler::Node*>{});
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    ca_.Goto(&block10, tmp18);
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    ca_.Goto(&block13, tmp18, tmp10);
  }

  TNode<Object> phi_bb13_6;
  TNode<BoolT> phi_bb13_7;
  TNode<BoolT> tmp21;
  TNode<BoolT> tmp22;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_6, &phi_bb13_7);
    tmp21 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32FromWord<base::BitField<bool, 2, 1, uintptr_t>>(ca_.UncheckedCast<WordT>(ca_.BitcastTaggedToWordForTagAndSmiBits(tmp4))));
    tmp22 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp21});
    ca_.Branch(tmp22, &block18, std::vector<compiler::Node*>{}, &block19, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp23;
  TNode<Smi> tmp24;
  TNode<BoolT> tmp25;
  TNode<Smi> tmp26;
  TNode<Object> tmp27;
  TNode<Oddball> tmp28;
  TNode<JSObject> tmp29;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp23 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    tmp24 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp23});
    tmp25 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp26 = ca_.UncheckedCast<Smi>(ca_.BitcastWordToTaggedSigned(CodeStubAssembler(state_).UpdateWord32InWord<base::BitField<bool, 1, 1, uintptr_t>>(ca_.UncheckedCast<WordT>(ca_.BitcastTaggedToWordForTagAndSmiBits(tmp24)), ca_.UncheckedCast<Uint32T>(tmp25))));
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp23}, tmp26);
    tmp27 = UnsafeCast_JSAny_0(state_, TNode<Context>{parameter0}, TNode<Object>{phi_bb13_6});
    tmp28 = False_0(state_);
    tmp29 = CodeStubAssembler(state_).AllocateJSIteratorResult(TNode<Context>{parameter0}, TNode<Object>{tmp27}, TNode<Oddball>{tmp28});
    CodeStubAssembler(state_).Return(tmp29);
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    ca_.Branch(phi_bb13_7, &block24, std::vector<compiler::Node*>{}, &block25, std::vector<compiler::Node*>{});
  }

  TNode<JSArray> tmp30;
  TNode<IntPtrT> tmp31;
  TNode<FixedArrayBase> tmp32;
  TNode<FixedArray> tmp33;
  TNode<Object> tmp34;
  TNode<IntPtrT> tmp35;
  TNode<IntPtrT> tmp36;
  TNode<UintPtrT> tmp37;
  TNode<IntPtrT> tmp38;
  TNode<UintPtrT> tmp39;
  TNode<UintPtrT> tmp40;
  TNode<BoolT> tmp41;
  if (block24.is_used()) {
    ca_.Bind(&block24);
    tmp30 = UnsafeCast_JSRegExpResult_0(state_, TNode<Context>{parameter0}, TNode<Object>{phi_bb13_6});
    tmp31 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp32 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp30, tmp31});
    tmp33 = UnsafeCast_FixedArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp32});
    std::tie(tmp34, tmp35, tmp36) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp33}).Flatten();
    tmp37 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp38 = Convert_intptr_uintptr_0(state_, TNode<UintPtrT>{tmp37});
    tmp39 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp38});
    tmp40 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp36});
    tmp41 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp39}, TNode<UintPtrT>{tmp40});
    ca_.Branch(tmp41, &block31, std::vector<compiler::Node*>{}, &block32, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp42;
  TNode<IntPtrT> tmp43;
  TNode<Object> tmp44;
  TNode<IntPtrT> tmp45;
  TNode<Object> tmp46;
  TNode<String> tmp47;
  TNode<JSRegExp> tmp48;
  TNode<String> tmp49;
  TNode<BoolT> tmp50;
  if (block31.is_used()) {
    ca_.Bind(&block31);
    tmp42 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp38});
    tmp43 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp35}, TNode<IntPtrT>{tmp42});
    std::tie(tmp44, tmp45) = NewReference_Object_0(state_, TNode<Object>{tmp34}, TNode<IntPtrT>{tmp43}).Flatten();
    tmp46 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp44, tmp45});
    tmp47 = UnsafeCast_String_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp46});
    tmp48 = UnsafeCast_JSRegExp_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp7});
    tmp49 = kEmptyString_0(state_);
    tmp50 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp47}, TNode<HeapObject>{tmp49});
    ca_.Branch(tmp50, &block39, std::vector<compiler::Node*>{}, &block40, std::vector<compiler::Node*>{});
  }

  if (block32.is_used()) {
    ca_.Bind(&block32);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> tmp51;
  TNode<BoolT> tmp52;
  TNode<Smi> tmp53;
  if (block39.is_used()) {
    ca_.Bind(&block39);
    tmp51 = RegExpBuiltinsAssembler(state_).FastLoadLastIndex(TNode<JSRegExp>{tmp48});
    tmp52 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32FromWord<base::BitField<bool, 3, 1, uintptr_t>>(ca_.UncheckedCast<WordT>(ca_.BitcastTaggedToWordForTagAndSmiBits(tmp4))));
    tmp53 = RegExpBuiltinsAssembler(state_).AdvanceStringIndexFast(TNode<String>{tmp9}, TNode<Smi>{tmp51}, TNode<BoolT>{tmp52});
    RegExpBuiltinsAssembler(state_).FastStoreLastIndex(TNode<JSRegExp>{tmp48}, TNode<Smi>{tmp53});
    ca_.Goto(&block40);
  }

  TNode<Oddball> tmp54;
  TNode<JSObject> tmp55;
  if (block40.is_used()) {
    ca_.Bind(&block40);
    tmp54 = False_0(state_);
    tmp55 = CodeStubAssembler(state_).AllocateJSIteratorResult(TNode<Context>{parameter0}, TNode<Object>{tmp30}, TNode<Oddball>{tmp54});
    CodeStubAssembler(state_).Return(tmp55);
  }

  TNode<Object> tmp56;
  TNode<Smi> tmp57;
  TNode<Object> tmp58;
  TNode<String> tmp59;
  TNode<String> tmp60;
  TNode<BoolT> tmp61;
  if (block25.is_used()) {
    ca_.Bind(&block25);
    tmp56 = UnsafeCast_JSAny_0(state_, TNode<Context>{parameter0}, TNode<Object>{phi_bb13_6});
    tmp57 = SmiConstant_0(state_, IntegerLiteral(false, 0x0ull));
    tmp58 = CodeStubAssembler(state_).GetProperty(TNode<Context>{parameter0}, TNode<Object>{tmp56}, TNode<Object>{tmp57});
    tmp59 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{parameter0}, TNode<Object>{tmp58});
    tmp60 = kEmptyString_0(state_);
    tmp61 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp59}, TNode<HeapObject>{tmp60});
    ca_.Branch(tmp61, &block45, std::vector<compiler::Node*>{}, &block46, std::vector<compiler::Node*>{});
  }

  TNode<Object> tmp62;
  TNode<Number> tmp63;
  TNode<BoolT> tmp64;
  TNode<Smi> tmp65;
  if (block45.is_used()) {
    ca_.Bind(&block45);
    tmp62 = RegExpBuiltinsAssembler(state_).SlowLoadLastIndex(TNode<Context>{parameter0}, TNode<Object>{tmp7});
    tmp63 = CodeStubAssembler(state_).ToLength_Inline(TNode<Context>{parameter0}, TNode<Object>{tmp62});
    tmp64 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32FromWord<base::BitField<bool, 3, 1, uintptr_t>>(ca_.UncheckedCast<WordT>(ca_.BitcastTaggedToWordForTagAndSmiBits(tmp4))));
    tmp65 = RegExpBuiltinsAssembler(state_).AdvanceStringIndexSlow(TNode<String>{tmp9}, TNode<Number>{tmp63}, TNode<BoolT>{tmp64});
    RegExpBuiltinsAssembler(state_).SlowStoreLastIndex(TNode<Context>{parameter0}, TNode<Object>{tmp7}, TNode<Object>{tmp65});
    ca_.Goto(&block46);
  }

  TNode<Oddball> tmp66;
  TNode<JSObject> tmp67;
  if (block46.is_used()) {
    ca_.Bind(&block46);
    tmp66 = False_0(state_);
    tmp67 = CodeStubAssembler(state_).AllocateJSIteratorResult(TNode<Context>{parameter0}, TNode<Object>{tmp56}, TNode<Oddball>{tmp66});
    CodeStubAssembler(state_).Return(tmp67);
  }

  TNode<Object> phi_bb10_6;
  TNode<IntPtrT> tmp68;
  TNode<Smi> tmp69;
  TNode<BoolT> tmp70;
  TNode<Smi> tmp71;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_6);
    tmp68 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    tmp69 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp68});
    tmp70 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp71 = ca_.UncheckedCast<Smi>(ca_.BitcastWordToTaggedSigned(CodeStubAssembler(state_).UpdateWord32InWord<base::BitField<bool, 1, 1, uintptr_t>>(ca_.UncheckedCast<WordT>(ca_.BitcastTaggedToWordForTagAndSmiBits(tmp69)), ca_.UncheckedCast<Uint32T>(tmp70))));
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp68}, tmp71);
    ca_.Goto(&block6);
  }

  TNode<Oddball> tmp72;
  TNode<Oddball> tmp73;
  TNode<JSObject> tmp74;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp72 = Undefined_0(state_);
    tmp73 = True_0(state_);
    tmp74 = CodeStubAssembler(state_).AllocateJSIteratorResult(TNode<Context>{parameter0}, TNode<Object>{tmp72}, TNode<Oddball>{tmp73});
    CodeStubAssembler(state_).Return(tmp74);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match-all.tq?l=43&c=29
TNode<JSRegExp> UnsafeCast_JSRegExp_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSRegExp> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TORQUE_CAST(TNode<Object>{p_o});
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<JSRegExp>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match-all.tq?l=48&c=26
TNode<JSRegExp> UnsafeCast_FastJSRegExp_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSRegExp> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TORQUE_CAST(TNode<Object>{p_o});
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<JSRegExp>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match-all.tq?l=114&c=20
TNode<JSRegExpStringIterator> Cast_JSRegExpStringIterator_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<HeapObject> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{p_o}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block1);
  }

  TNode<JSRegExpStringIterator> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_JSRegExpStringIterator_0(state_, TNode<HeapObject>{tmp0}, &label3);
    ca_.Goto(&block5);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block7);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    ca_.Bind(&block7);
  return TNode<JSRegExpStringIterator>{tmp2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match-all.tq?l=165&c=23
TNode<JSArray> UnsafeCast_JSRegExpResult_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSArray> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TORQUE_CAST(TNode<Object>{p_o});
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<JSArray>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match-all.tq?l=167&c=26
TNode<String> UnsafeCast_String_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<String> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TORQUE_CAST(TNode<Object>{p_o});
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<String>{tmp0};
}

} // namespace internal
} // namespace v8
