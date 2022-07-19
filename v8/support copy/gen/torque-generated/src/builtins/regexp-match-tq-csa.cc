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
#include "torque-generated/src/builtins/regexp-match-tq-csa.h"
#include "torque-generated/src/builtins/array-join-tq-csa.h"
#include "torque-generated/src/builtins/array-reverse-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/boolean-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/growable-fixed-array-tq-csa.h"
#include "torque-generated/src/builtins/number-tq-csa.h"
#include "torque-generated/src/builtins/regexp-exec-tq-csa.h"
#include "torque-generated/src/builtins/regexp-match-all-tq-csa.h"
#include "torque-generated/src/builtins/regexp-match-tq-csa.h"
#include "torque-generated/src/builtins/regexp-replace-tq-csa.h"
#include "torque-generated/src/builtins/regexp-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/objects/fixed-array-tq-csa.h"
#include "torque-generated/src/objects/js-array-tq-csa.h"
#include "torque-generated/src/objects/regexp-match-info-tq-csa.h"
#include "torque-generated/src/objects/string-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match.tq?l=22&c=1
TNode<Object> RegExpPrototypeMatchBody_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_regexp, TNode<String> p_string, bool p_isFastPath) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, String> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, String> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String, String> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String, String> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String, HeapObject> block63(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String, String, String, Object> block85(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String, String, String, Object> block86(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, String, String, String, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block104(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, String, String, String, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block105(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, String, String> block108(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, String, String> block109(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, String, String> block110(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, String, String> block111(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, String, String, Object> block112(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, String, String> block117(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, String, String> block118(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, String, String> block119(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block124(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    if ((p_isFastPath)) {
      ca_.Goto(&block2);
    } else {
      ca_.Goto(&block3);
    }
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(&block4);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block4);
  }

  TNode<BoolT> tmp0;
  TNode<BoolT> tmp1;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp0 = RegExpBuiltinsAssembler(state_).FlagGetter(TNode<Context>{p_context}, TNode<Object>{p_regexp}, JSRegExp::Flag::kGlobal, p_isFastPath);
    tmp1 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp0});
    ca_.Branch(tmp1, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp2;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp2 = FromConstexpr_bool_constexpr_bool_0(state_, p_isFastPath);
    ca_.Branch(tmp2, &block11, std::vector<compiler::Node*>{}, &block12, std::vector<compiler::Node*>{});
  }

  TNode<Object> tmp3;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp3 = RegExpPrototypeExecBodyFast_0(state_, TNode<Context>{p_context}, TNode<JSReceiver>{p_regexp}, TNode<String>{p_string});
    ca_.Goto(&block13, tmp3);
  }

  TNode<Object> tmp4;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp4 = RegExpExec_0(state_, TNode<Context>{p_context}, TNode<JSReceiver>{p_regexp}, TNode<String>{p_string});
    ca_.Goto(&block13, tmp4);
  }

  TNode<Object> phi_bb13_4;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_4);
    ca_.Goto(&block1, phi_bb13_4);
  }

  TNode<BoolT> tmp5;
  TNode<Number> tmp6;
  TNode<FixedArray> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<BoolT> tmp10;
  TNode<String> tmp11;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp5 = RegExpBuiltinsAssembler(state_).FlagGetter(TNode<Context>{p_context}, TNode<Object>{p_regexp}, JSRegExp::Flag::kUnicode, p_isFastPath);
    tmp6 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    StoreLastIndex_0(state_, TNode<Context>{p_context}, TNode<Object>{p_regexp}, TNode<Number>{tmp6}, p_isFastPath);
    std::tie(tmp7, tmp8, tmp9) = NewGrowableFixedArray_0(state_).Flatten();
    tmp10 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp11 = CodeStubAssembler(state_).EmptyStringConstant();
    if ((p_isFastPath)) {
      ca_.Goto(&block19);
    } else {
      ca_.Goto(&block20);
    }
  }

  TNode<JSRegExp> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<HeapObject> tmp14;
  TNode<FixedArray> tmp15;
  TNode<Object> tmp16;
  TNode<IntPtrT> tmp17;
  TNode<IntPtrT> tmp18;
  TNode<IntPtrT> tmp19;
  TNode<UintPtrT> tmp20;
  TNode<UintPtrT> tmp21;
  TNode<BoolT> tmp22;
  if (block19.is_used()) {
    ca_.Bind(&block19);
    tmp12 = UnsafeCast_JSRegExp_0(state_, TNode<Context>{p_context}, TNode<Object>{p_regexp});
    tmp13 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp14 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp12, tmp13});
    tmp15 = UnsafeCast_FixedArray_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp14});
    std::tie(tmp16, tmp17, tmp18) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp15}).Flatten();
    tmp19 = Convert_intptr_constexpr_int31_0(state_, JSRegExp::kTagIndex);
    tmp20 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp19});
    tmp21 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp18});
    tmp22 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp20}, TNode<UintPtrT>{tmp21});
    ca_.Branch(tmp22, &block28, std::vector<compiler::Node*>{}, &block29, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp23;
  TNode<IntPtrT> tmp24;
  TNode<Object> tmp25;
  TNode<IntPtrT> tmp26;
  TNode<Object> tmp27;
  TNode<Smi> tmp28;
  TNode<Smi> tmp29;
  TNode<BoolT> tmp30;
  if (block28.is_used()) {
    ca_.Bind(&block28);
    tmp23 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp19});
    tmp24 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp17}, TNode<IntPtrT>{tmp23});
    std::tie(tmp25, tmp26) = NewReference_Object_0(state_, TNode<Object>{tmp16}, TNode<IntPtrT>{tmp24}).Flatten();
    tmp27 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp25, tmp26});
    tmp28 = UnsafeCast_Smi_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp27});
    tmp29 = FromConstexpr_Smi_constexpr_int31_0(state_, JSRegExp::ATOM);
    tmp30 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp28}, TNode<Smi>{tmp29});
    ca_.Branch(tmp30, &block22, std::vector<compiler::Node*>{}, &block23, std::vector<compiler::Node*>{tmp10, tmp11});
  }

  if (block29.is_used()) {
    ca_.Bind(&block29);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Object> tmp31;
  TNode<IntPtrT> tmp32;
  TNode<IntPtrT> tmp33;
  TNode<IntPtrT> tmp34;
  TNode<UintPtrT> tmp35;
  TNode<UintPtrT> tmp36;
  TNode<BoolT> tmp37;
  if (block22.is_used()) {
    ca_.Bind(&block22);
    std::tie(tmp31, tmp32, tmp33) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp15}).Flatten();
    tmp34 = Convert_intptr_constexpr_int31_0(state_, JSRegExp::kAtomPatternIndex);
    tmp35 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp34});
    tmp36 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp33});
    tmp37 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp35}, TNode<UintPtrT>{tmp36});
    ca_.Branch(tmp37, &block36, std::vector<compiler::Node*>{}, &block37, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp38;
  TNode<IntPtrT> tmp39;
  TNode<Object> tmp40;
  TNode<IntPtrT> tmp41;
  TNode<Object> tmp42;
  TNode<String> tmp43;
  TNode<BoolT> tmp44;
  if (block36.is_used()) {
    ca_.Bind(&block36);
    tmp38 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp34});
    tmp39 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp32}, TNode<IntPtrT>{tmp38});
    std::tie(tmp40, tmp41) = NewReference_Object_0(state_, TNode<Object>{tmp31}, TNode<IntPtrT>{tmp39}).Flatten();
    tmp42 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp40, tmp41});
    tmp43 = UnsafeCast_String_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp42});
    tmp44 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block23, tmp44, tmp43);
  }

  if (block37.is_used()) {
    ca_.Bind(&block37);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<BoolT> phi_bb23_8;
  TNode<String> phi_bb23_9;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_8, &phi_bb23_9);
    ca_.Goto(&block21, phi_bb23_8, phi_bb23_9);
  }

  if (block20.is_used()) {
    ca_.Bind(&block20);
    ca_.Goto(&block21, tmp10, tmp11);
  }

  TNode<BoolT> phi_bb21_8;
  TNode<String> phi_bb21_9;
  if (block21.is_used()) {
    ca_.Bind(&block21, &phi_bb21_8, &phi_bb21_9);
    ca_.Goto(&block42, tmp7, tmp8, tmp9, phi_bb21_8, phi_bb21_9);
  }

  TNode<FixedArray> phi_bb42_5;
  TNode<IntPtrT> phi_bb42_6;
  TNode<IntPtrT> phi_bb42_7;
  TNode<BoolT> phi_bb42_8;
  TNode<String> phi_bb42_9;
  TNode<BoolT> tmp45;
  if (block42.is_used()) {
    ca_.Bind(&block42, &phi_bb42_5, &phi_bb42_6, &phi_bb42_7, &phi_bb42_8, &phi_bb42_9);
    tmp45 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp45, &block40, std::vector<compiler::Node*>{phi_bb42_5, phi_bb42_6, phi_bb42_7, phi_bb42_8, phi_bb42_9}, &block41, std::vector<compiler::Node*>{phi_bb42_5, phi_bb42_6, phi_bb42_7, phi_bb42_8, phi_bb42_9});
  }

  TNode<FixedArray> phi_bb40_5;
  TNode<IntPtrT> phi_bb40_6;
  TNode<IntPtrT> phi_bb40_7;
  TNode<BoolT> phi_bb40_8;
  TNode<String> phi_bb40_9;
  TNode<String> tmp46;
  if (block40.is_used()) {
    ca_.Bind(&block40, &phi_bb40_5, &phi_bb40_6, &phi_bb40_7, &phi_bb40_8, &phi_bb40_9);
    tmp46 = CodeStubAssembler(state_).EmptyStringConstant();
    if ((p_isFastPath)) {
      ca_.Goto(&block47, phi_bb40_5, phi_bb40_6, phi_bb40_7, phi_bb40_8, phi_bb40_9);
    } else {
      ca_.Goto(&block48, phi_bb40_5, phi_bb40_6, phi_bb40_7, phi_bb40_8, phi_bb40_9);
    }
  }

  TNode<FixedArray> phi_bb47_5;
  TNode<IntPtrT> phi_bb47_6;
  TNode<IntPtrT> phi_bb47_7;
  TNode<BoolT> phi_bb47_8;
  TNode<String> phi_bb47_9;
  TNode<JSRegExp> tmp47;
  TNode<RegExpMatchInfo> tmp48;
  if (block47.is_used()) {
    ca_.Bind(&block47, &phi_bb47_5, &phi_bb47_6, &phi_bb47_7, &phi_bb47_8, &phi_bb47_9);
    tmp47 = UnsafeCast_JSRegExp_0(state_, TNode<Context>{p_context}, TNode<Object>{p_regexp});
    compiler::CodeAssemblerLabel label49(&ca_);
    tmp48 = RegExpPrototypeExecBodyWithoutResultFast_0(state_, TNode<Context>{p_context}, TNode<JSRegExp>{tmp47}, TNode<String>{p_string}, &label49);
    ca_.Goto(&block50, phi_bb47_5, phi_bb47_6, phi_bb47_7, phi_bb47_8, phi_bb47_9);
    if (label49.is_used()) {
      ca_.Bind(&label49);
      ca_.Goto(&block51, phi_bb47_5, phi_bb47_6, phi_bb47_7, phi_bb47_8, phi_bb47_9);
    }
  }

  TNode<FixedArray> phi_bb51_5;
  TNode<IntPtrT> phi_bb51_6;
  TNode<IntPtrT> phi_bb51_7;
  TNode<BoolT> phi_bb51_8;
  TNode<String> phi_bb51_9;
  if (block51.is_used()) {
    ca_.Bind(&block51, &phi_bb51_5, &phi_bb51_6, &phi_bb51_7, &phi_bb51_8, &phi_bb51_9);
    ca_.Goto(&block46, phi_bb51_5, phi_bb51_6, phi_bb51_7, phi_bb51_8, phi_bb51_9);
  }

  TNode<FixedArray> phi_bb50_5;
  TNode<IntPtrT> phi_bb50_6;
  TNode<IntPtrT> phi_bb50_7;
  TNode<BoolT> phi_bb50_8;
  TNode<String> phi_bb50_9;
  if (block50.is_used()) {
    ca_.Bind(&block50, &phi_bb50_5, &phi_bb50_6, &phi_bb50_7, &phi_bb50_8, &phi_bb50_9);
    ca_.Branch(phi_bb50_8, &block52, std::vector<compiler::Node*>{phi_bb50_5, phi_bb50_6, phi_bb50_7, phi_bb50_8, phi_bb50_9}, &block53, std::vector<compiler::Node*>{phi_bb50_5, phi_bb50_6, phi_bb50_7, phi_bb50_8, phi_bb50_9});
  }

  TNode<FixedArray> phi_bb52_5;
  TNode<IntPtrT> phi_bb52_6;
  TNode<IntPtrT> phi_bb52_7;
  TNode<BoolT> phi_bb52_8;
  TNode<String> phi_bb52_9;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_5, &phi_bb52_6, &phi_bb52_7, &phi_bb52_8, &phi_bb52_9);
    ca_.Goto(&block54, phi_bb52_5, phi_bb52_6, phi_bb52_7, phi_bb52_8, phi_bb52_9, phi_bb52_9);
  }

  TNode<FixedArray> phi_bb53_5;
  TNode<IntPtrT> phi_bb53_6;
  TNode<IntPtrT> phi_bb53_7;
  TNode<BoolT> phi_bb53_8;
  TNode<String> phi_bb53_9;
  TNode<Object> tmp50;
  TNode<Object> tmp51;
  TNode<Smi> tmp52;
  TNode<Smi> tmp53;
  TNode<String> tmp54;
  if (block53.is_used()) {
    ca_.Bind(&block53, &phi_bb53_5, &phi_bb53_6, &phi_bb53_7, &phi_bb53_8, &phi_bb53_9);
    tmp50 = CodeStubAssembler(state_).UnsafeLoadFixedArrayElement(TNode<RegExpMatchInfo>{tmp48}, RegExpMatchInfo::kFirstCaptureIndex);
    tmp51 = CodeStubAssembler(state_).UnsafeLoadFixedArrayElement(TNode<RegExpMatchInfo>{tmp48}, (CodeStubAssembler(state_).ConstexprInt31Add(RegExpMatchInfo::kFirstCaptureIndex, (FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull))))));
    tmp52 = UnsafeCast_Smi_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp50});
    tmp53 = UnsafeCast_Smi_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp51});
    tmp54 = ca_.CallStub<String>(Builtins::CallableFor(ca_.isolate(), Builtin::kSubString), p_context, p_string, tmp52, tmp53);
    ca_.Goto(&block54, phi_bb53_5, phi_bb53_6, phi_bb53_7, phi_bb53_8, phi_bb53_9, tmp54);
  }

  TNode<FixedArray> phi_bb54_5;
  TNode<IntPtrT> phi_bb54_6;
  TNode<IntPtrT> phi_bb54_7;
  TNode<BoolT> phi_bb54_8;
  TNode<String> phi_bb54_9;
  TNode<String> phi_bb54_10;
  if (block54.is_used()) {
    ca_.Bind(&block54, &phi_bb54_5, &phi_bb54_6, &phi_bb54_7, &phi_bb54_8, &phi_bb54_9, &phi_bb54_10);
    ca_.Goto(&block49, phi_bb54_5, phi_bb54_6, phi_bb54_7, phi_bb54_8, phi_bb54_9, phi_bb54_10);
  }

  TNode<FixedArray> phi_bb48_5;
  TNode<IntPtrT> phi_bb48_6;
  TNode<IntPtrT> phi_bb48_7;
  TNode<BoolT> phi_bb48_8;
  TNode<String> phi_bb48_9;
  TNode<Object> tmp55;
  TNode<Oddball> tmp56;
  TNode<BoolT> tmp57;
  if (block48.is_used()) {
    ca_.Bind(&block48, &phi_bb48_5, &phi_bb48_6, &phi_bb48_7, &phi_bb48_8, &phi_bb48_9);
    tmp55 = RegExpExec_0(state_, TNode<Context>{p_context}, TNode<JSReceiver>{p_regexp}, TNode<String>{p_string});
    tmp56 = Null_0(state_);
    tmp57 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp55}, TNode<HeapObject>{tmp56});
    ca_.Branch(tmp57, &block59, std::vector<compiler::Node*>{phi_bb48_5, phi_bb48_6, phi_bb48_7, phi_bb48_8, phi_bb48_9}, &block60, std::vector<compiler::Node*>{phi_bb48_5, phi_bb48_6, phi_bb48_7, phi_bb48_8, phi_bb48_9});
  }

  TNode<FixedArray> phi_bb59_5;
  TNode<IntPtrT> phi_bb59_6;
  TNode<IntPtrT> phi_bb59_7;
  TNode<BoolT> phi_bb59_8;
  TNode<String> phi_bb59_9;
  if (block59.is_used()) {
    ca_.Bind(&block59, &phi_bb59_5, &phi_bb59_6, &phi_bb59_7, &phi_bb59_8, &phi_bb59_9);
    ca_.Goto(&block46, phi_bb59_5, phi_bb59_6, phi_bb59_7, phi_bb59_8, phi_bb59_9);
  }

  TNode<FixedArray> phi_bb60_5;
  TNode<IntPtrT> phi_bb60_6;
  TNode<IntPtrT> phi_bb60_7;
  TNode<BoolT> phi_bb60_8;
  TNode<String> phi_bb60_9;
  TNode<Smi> tmp58;
  TNode<Object> tmp59;
  TNode<String> tmp60;
  if (block60.is_used()) {
    ca_.Bind(&block60, &phi_bb60_5, &phi_bb60_6, &phi_bb60_7, &phi_bb60_8, &phi_bb60_9);
    tmp58 = SmiConstant_0(state_, IntegerLiteral(false, 0x0ull));
    tmp59 = CodeStubAssembler(state_).GetProperty(TNode<Context>{p_context}, TNode<Object>{tmp55}, TNode<Object>{tmp58});
    tmp60 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{p_context}, TNode<Object>{tmp59});
    ca_.Goto(&block49, phi_bb60_5, phi_bb60_6, phi_bb60_7, phi_bb60_8, phi_bb60_9, tmp60);
  }

  TNode<FixedArray> phi_bb49_5;
  TNode<IntPtrT> phi_bb49_6;
  TNode<IntPtrT> phi_bb49_7;
  TNode<BoolT> phi_bb49_8;
  TNode<String> phi_bb49_9;
  TNode<String> phi_bb49_10;
  TNode<BoolT> tmp61;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_5, &phi_bb49_6, &phi_bb49_7, &phi_bb49_8, &phi_bb49_9, &phi_bb49_10);
    tmp61 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb49_6}, TNode<IntPtrT>{phi_bb49_7});
    ca_.Branch(tmp61, &block85, std::vector<compiler::Node*>{phi_bb49_5, phi_bb49_6, phi_bb49_7, phi_bb49_8, phi_bb49_9, phi_bb49_10, phi_bb49_10, phi_bb49_10}, &block86, std::vector<compiler::Node*>{phi_bb49_5, phi_bb49_6, phi_bb49_7, phi_bb49_8, phi_bb49_9, phi_bb49_10, phi_bb49_10, phi_bb49_10});
  }

  TNode<FixedArray> phi_bb46_5;
  TNode<IntPtrT> phi_bb46_6;
  TNode<IntPtrT> phi_bb46_7;
  TNode<BoolT> phi_bb46_8;
  TNode<String> phi_bb46_9;
  TNode<IntPtrT> tmp62;
  TNode<BoolT> tmp63;
  if (block46.is_used()) {
    ca_.Bind(&block46, &phi_bb46_5, &phi_bb46_6, &phi_bb46_7, &phi_bb46_8, &phi_bb46_9);
    tmp62 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp63 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb46_7}, TNode<IntPtrT>{tmp62});
    ca_.Branch(tmp63, &block61, std::vector<compiler::Node*>{phi_bb46_5, phi_bb46_6, phi_bb46_7, phi_bb46_8, phi_bb46_9}, &block62, std::vector<compiler::Node*>{phi_bb46_5, phi_bb46_6, phi_bb46_7, phi_bb46_8, phi_bb46_9});
  }

  TNode<FixedArray> phi_bb61_5;
  TNode<IntPtrT> phi_bb61_6;
  TNode<IntPtrT> phi_bb61_7;
  TNode<BoolT> phi_bb61_8;
  TNode<String> phi_bb61_9;
  TNode<Oddball> tmp64;
  if (block61.is_used()) {
    ca_.Bind(&block61, &phi_bb61_5, &phi_bb61_6, &phi_bb61_7, &phi_bb61_8, &phi_bb61_9);
    tmp64 = Null_0(state_);
    ca_.Goto(&block63, phi_bb61_5, phi_bb61_6, phi_bb61_7, phi_bb61_8, phi_bb61_9, tmp64);
  }

  TNode<FixedArray> phi_bb62_5;
  TNode<IntPtrT> phi_bb62_6;
  TNode<IntPtrT> phi_bb62_7;
  TNode<BoolT> phi_bb62_8;
  TNode<String> phi_bb62_9;
  TNode<NativeContext> tmp65;
  TNode<Map> tmp66;
  TNode<IntPtrT> tmp67;
  TNode<FixedArray> tmp68;
  TNode<Smi> tmp69;
  TNode<JSArray> tmp70;
  if (block62.is_used()) {
    ca_.Bind(&block62, &phi_bb62_5, &phi_bb62_6, &phi_bb62_7, &phi_bb62_8, &phi_bb62_9);
    tmp65 = CodeStubAssembler(state_).LoadNativeContext(TNode<Context>{p_context});
    tmp66 = CodeStubAssembler(state_).LoadJSArrayElementsMap(ElementsKind::PACKED_ELEMENTS, TNode<NativeContext>{tmp65});
    tmp67 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp68 = ExtractFixedArray_0(state_, TNode<FixedArray>{phi_bb62_5}, TNode<IntPtrT>{tmp67}, TNode<IntPtrT>{phi_bb62_7}, TNode<IntPtrT>{phi_bb62_7});
    tmp69 = Convert_Smi_intptr_0(state_, TNode<IntPtrT>{phi_bb62_7});
    tmp70 = CodeStubAssembler(state_).AllocateJSArray(TNode<Map>{tmp66}, TNode<FixedArrayBase>{tmp68}, TNode<Smi>{tmp69});
    ca_.Goto(&block63, phi_bb62_5, phi_bb62_6, phi_bb62_7, phi_bb62_8, phi_bb62_9, tmp70);
  }

  TNode<FixedArray> phi_bb63_5;
  TNode<IntPtrT> phi_bb63_6;
  TNode<IntPtrT> phi_bb63_7;
  TNode<BoolT> phi_bb63_8;
  TNode<String> phi_bb63_9;
  TNode<HeapObject> phi_bb63_11;
  if (block63.is_used()) {
    ca_.Bind(&block63, &phi_bb63_5, &phi_bb63_6, &phi_bb63_7, &phi_bb63_8, &phi_bb63_9, &phi_bb63_11);
    ca_.Goto(&block1, phi_bb63_11);
  }

  TNode<FixedArray> phi_bb85_5;
  TNode<IntPtrT> phi_bb85_6;
  TNode<IntPtrT> phi_bb85_7;
  TNode<BoolT> phi_bb85_8;
  TNode<String> phi_bb85_9;
  TNode<String> phi_bb85_10;
  TNode<String> phi_bb85_11;
  TNode<Object> phi_bb85_12;
  TNode<IntPtrT> tmp71;
  TNode<IntPtrT> tmp72;
  TNode<IntPtrT> tmp73;
  TNode<IntPtrT> tmp74;
  TNode<IntPtrT> tmp75;
  TNode<IntPtrT> tmp76;
  TNode<FixedArray> tmp77;
  if (block85.is_used()) {
    ca_.Bind(&block85, &phi_bb85_5, &phi_bb85_6, &phi_bb85_7, &phi_bb85_8, &phi_bb85_9, &phi_bb85_10, &phi_bb85_11, &phi_bb85_12);
    tmp71 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp72 = CodeStubAssembler(state_).WordSar(TNode<IntPtrT>{phi_bb85_6}, TNode<IntPtrT>{tmp71});
    tmp73 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb85_6}, TNode<IntPtrT>{tmp72});
    tmp74 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x10ull));
    tmp75 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp73}, TNode<IntPtrT>{tmp74});
    tmp76 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp77 = ExtractFixedArray_0(state_, TNode<FixedArray>{phi_bb85_5}, TNode<IntPtrT>{tmp76}, TNode<IntPtrT>{phi_bb85_7}, TNode<IntPtrT>{tmp75});
    ca_.Goto(&block86, tmp77, tmp75, phi_bb85_7, phi_bb85_8, phi_bb85_9, phi_bb85_10, phi_bb85_11, phi_bb85_12);
  }

  TNode<FixedArray> phi_bb86_5;
  TNode<IntPtrT> phi_bb86_6;
  TNode<IntPtrT> phi_bb86_7;
  TNode<BoolT> phi_bb86_8;
  TNode<String> phi_bb86_9;
  TNode<String> phi_bb86_10;
  TNode<String> phi_bb86_11;
  TNode<Object> phi_bb86_12;
  TNode<Object> tmp78;
  TNode<IntPtrT> tmp79;
  TNode<IntPtrT> tmp80;
  TNode<IntPtrT> tmp81;
  TNode<IntPtrT> tmp82;
  TNode<UintPtrT> tmp83;
  TNode<UintPtrT> tmp84;
  TNode<BoolT> tmp85;
  if (block86.is_used()) {
    ca_.Bind(&block86, &phi_bb86_5, &phi_bb86_6, &phi_bb86_7, &phi_bb86_8, &phi_bb86_9, &phi_bb86_10, &phi_bb86_11, &phi_bb86_12);
    std::tie(tmp78, tmp79, tmp80) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{phi_bb86_5}).Flatten();
    tmp81 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp82 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb86_7}, TNode<IntPtrT>{tmp81});
    tmp83 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb86_7});
    tmp84 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp80});
    tmp85 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp83}, TNode<UintPtrT>{tmp84});
    ca_.Branch(tmp85, &block104, std::vector<compiler::Node*>{phi_bb86_8, phi_bb86_9, phi_bb86_10, phi_bb86_11, phi_bb86_12, phi_bb86_7, phi_bb86_7, phi_bb86_7, phi_bb86_7}, &block105, std::vector<compiler::Node*>{phi_bb86_8, phi_bb86_9, phi_bb86_10, phi_bb86_11, phi_bb86_12, phi_bb86_7, phi_bb86_7, phi_bb86_7, phi_bb86_7});
  }

  TNode<BoolT> phi_bb104_8;
  TNode<String> phi_bb104_9;
  TNode<String> phi_bb104_10;
  TNode<String> phi_bb104_11;
  TNode<Object> phi_bb104_12;
  TNode<IntPtrT> phi_bb104_17;
  TNode<IntPtrT> phi_bb104_18;
  TNode<IntPtrT> phi_bb104_22;
  TNode<IntPtrT> phi_bb104_23;
  TNode<IntPtrT> tmp86;
  TNode<IntPtrT> tmp87;
  TNode<Object> tmp88;
  TNode<IntPtrT> tmp89;
  TNode<Smi> tmp90;
  TNode<Smi> tmp91;
  TNode<BoolT> tmp92;
  if (block104.is_used()) {
    ca_.Bind(&block104, &phi_bb104_8, &phi_bb104_9, &phi_bb104_10, &phi_bb104_11, &phi_bb104_12, &phi_bb104_17, &phi_bb104_18, &phi_bb104_22, &phi_bb104_23);
    tmp86 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb104_23});
    tmp87 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp79}, TNode<IntPtrT>{tmp86});
    std::tie(tmp88, tmp89) = NewReference_Object_0(state_, TNode<Object>{tmp78}, TNode<IntPtrT>{tmp87}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp88, tmp89}, phi_bb104_12);
    tmp90 = CodeStubAssembler(state_).LoadStringLengthAsSmi(TNode<String>{phi_bb104_10});
    tmp91 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp92 = CodeStubAssembler(state_).SmiNotEqual(TNode<Smi>{tmp90}, TNode<Smi>{tmp91});
    ca_.Branch(tmp92, &block108, std::vector<compiler::Node*>{phi_bb104_8, phi_bb104_9, phi_bb104_10}, &block109, std::vector<compiler::Node*>{phi_bb104_8, phi_bb104_9, phi_bb104_10});
  }

  TNode<BoolT> phi_bb105_8;
  TNode<String> phi_bb105_9;
  TNode<String> phi_bb105_10;
  TNode<String> phi_bb105_11;
  TNode<Object> phi_bb105_12;
  TNode<IntPtrT> phi_bb105_17;
  TNode<IntPtrT> phi_bb105_18;
  TNode<IntPtrT> phi_bb105_22;
  TNode<IntPtrT> phi_bb105_23;
  if (block105.is_used()) {
    ca_.Bind(&block105, &phi_bb105_8, &phi_bb105_9, &phi_bb105_10, &phi_bb105_11, &phi_bb105_12, &phi_bb105_17, &phi_bb105_18, &phi_bb105_22, &phi_bb105_23);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<BoolT> phi_bb108_8;
  TNode<String> phi_bb108_9;
  TNode<String> phi_bb108_10;
  if (block108.is_used()) {
    ca_.Bind(&block108, &phi_bb108_8, &phi_bb108_9, &phi_bb108_10);
    ca_.Goto(&block42, phi_bb86_5, phi_bb86_6, tmp82, phi_bb108_8, phi_bb108_9);
  }

  TNode<BoolT> phi_bb109_8;
  TNode<String> phi_bb109_9;
  TNode<String> phi_bb109_10;
  TNode<Object> tmp93;
  if (block109.is_used()) {
    ca_.Bind(&block109, &phi_bb109_8, &phi_bb109_9, &phi_bb109_10);
    tmp93 = LoadLastIndex_0(state_, TNode<Context>{p_context}, TNode<Object>{p_regexp}, p_isFastPath);
    if ((p_isFastPath)) {
      ca_.Goto(&block110, phi_bb109_8, phi_bb109_9, phi_bb109_10);
    } else {
      ca_.Goto(&block111, phi_bb109_8, phi_bb109_9, phi_bb109_10);
    }
  }

  TNode<BoolT> phi_bb110_8;
  TNode<String> phi_bb110_9;
  TNode<String> phi_bb110_10;
  if (block110.is_used()) {
    ca_.Bind(&block110, &phi_bb110_8, &phi_bb110_9, &phi_bb110_10);
    ca_.Goto(&block112, phi_bb110_8, phi_bb110_9, phi_bb110_10, tmp93);
  }

  TNode<BoolT> phi_bb111_8;
  TNode<String> phi_bb111_9;
  TNode<String> phi_bb111_10;
  TNode<Number> tmp94;
  if (block111.is_used()) {
    ca_.Bind(&block111, &phi_bb111_8, &phi_bb111_9, &phi_bb111_10);
    tmp94 = CodeStubAssembler(state_).ToLength_Inline(TNode<Context>{p_context}, TNode<Object>{tmp93});
    ca_.Goto(&block112, phi_bb111_8, phi_bb111_9, phi_bb111_10, tmp94);
  }

  TNode<BoolT> phi_bb112_8;
  TNode<String> phi_bb112_9;
  TNode<String> phi_bb112_10;
  TNode<Object> phi_bb112_12;
  TNode<Number> tmp95;
  TNode<Number> tmp96;
  if (block112.is_used()) {
    ca_.Bind(&block112, &phi_bb112_8, &phi_bb112_9, &phi_bb112_10, &phi_bb112_12);
    tmp95 = UnsafeCast_Number_0(state_, TNode<Context>{p_context}, TNode<Object>{phi_bb112_12});
    tmp96 = RegExpBuiltinsAssembler(state_).AdvanceStringIndex(TNode<String>{p_string}, TNode<Number>{tmp95}, TNode<BoolT>{tmp5}, p_isFastPath);
    if ((p_isFastPath)) {
      ca_.Goto(&block117, phi_bb112_8, phi_bb112_9, phi_bb112_10);
    } else {
      ca_.Goto(&block118, phi_bb112_8, phi_bb112_9, phi_bb112_10);
    }
  }

  TNode<BoolT> phi_bb117_8;
  TNode<String> phi_bb117_9;
  TNode<String> phi_bb117_10;
  if (block117.is_used()) {
    ca_.Bind(&block117, &phi_bb117_8, &phi_bb117_9, &phi_bb117_10);
    StaticAssertStringLengthFitsSmi_0(state_);
    ca_.Goto(&block119, phi_bb117_8, phi_bb117_9, phi_bb117_10);
  }

  TNode<BoolT> phi_bb118_8;
  TNode<String> phi_bb118_9;
  TNode<String> phi_bb118_10;
  if (block118.is_used()) {
    ca_.Bind(&block118, &phi_bb118_8, &phi_bb118_9, &phi_bb118_10);
    ca_.Goto(&block119, phi_bb118_8, phi_bb118_9, phi_bb118_10);
  }

  TNode<BoolT> phi_bb119_8;
  TNode<String> phi_bb119_9;
  TNode<String> phi_bb119_10;
  if (block119.is_used()) {
    ca_.Bind(&block119, &phi_bb119_8, &phi_bb119_9, &phi_bb119_10);
    StoreLastIndex_0(state_, TNode<Context>{p_context}, TNode<Object>{p_regexp}, TNode<Number>{tmp96}, p_isFastPath);
    ca_.Goto(&block42, phi_bb86_5, phi_bb86_6, tmp82, phi_bb119_8, phi_bb119_9);
  }

  TNode<FixedArray> phi_bb41_5;
  TNode<IntPtrT> phi_bb41_6;
  TNode<IntPtrT> phi_bb41_7;
  TNode<BoolT> phi_bb41_8;
  TNode<String> phi_bb41_9;
  if (block41.is_used()) {
    ca_.Bind(&block41, &phi_bb41_5, &phi_bb41_6, &phi_bb41_7, &phi_bb41_8, &phi_bb41_9);
    VerifiedUnreachable_0(state_);
  }

  TNode<Object> phi_bb1_3;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_3);
    ca_.Goto(&block124, phi_bb1_3);
  }

  TNode<Object> phi_bb124_3;
    ca_.Bind(&block124, &phi_bb124_3);
  return TNode<Object>{phi_bb124_3};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match.tq?l=122&c=1
TNode<Object> FastRegExpPrototypeMatchBody_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSRegExp> p_receiver, TNode<String> p_string) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = RegExpPrototypeMatchBody_0(state_, TNode<Context>{p_context}, TNode<JSReceiver>{p_receiver}, TNode<String>{p_string}, true);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Object>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match.tq?l=127&c=1
TNode<Object> SlowRegExpPrototypeMatchBody_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_receiver, TNode<String> p_string) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = RegExpPrototypeMatchBody_0(state_, TNode<Context>{p_context}, TNode<JSReceiver>{p_receiver}, TNode<String>{p_string}, false);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Object>{tmp0};
}

TF_BUILTIN(RegExpMatchFast, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSRegExp> parameter1 = UncheckedParameter<JSRegExp>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<String> parameter2 = UncheckedParameter<String>(Descriptor::kString);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FastRegExpPrototypeMatchBody_0(state_, TNode<Context>{parameter0}, TNode<JSRegExp>{parameter1}, TNode<String>{parameter2});
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(RegExpPrototypeMatch, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kString);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSReceiver> tmp0;
  TNode<String> tmp1;
  TNode<JSRegExp> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    CodeStubAssembler(state_).ThrowIfNotJSReceiver(TNode<Context>{parameter0}, TNode<Object>{parameter1}, MessageTemplate::kIncompatibleMethodReceiver, "RegExp.prototype.@@match");
    tmp0 = UnsafeCast_JSReceiver_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1});
    tmp1 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{parameter0}, TNode<Object>{parameter2});
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_FastJSRegExp_0(state_, TNode<Context>{parameter0}, TNode<HeapObject>{tmp0}, &label3);
    ca_.Goto(&block3);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block4);
    }
  }

  TNode<Object> tmp4;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp4 = SlowRegExpPrototypeMatchBody_0(state_, TNode<Context>{parameter0}, TNode<JSReceiver>{tmp0}, TNode<String>{tmp1});
    CodeStubAssembler(state_).Return(tmp4);
  }

  TNode<Object> tmp5;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp5 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kRegExpMatchFast), parameter0, tmp2, tmp1);
    CodeStubAssembler(state_).Return(tmp5);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match.tq?l=25&c=12
TNode<BoolT> Is_FastJSRegExp_JSReceiver_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSRegExp> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_FastJSRegExp_0(state_, TNode<Context>{p_context}, TNode<HeapObject>{p_o}, &label1);
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
