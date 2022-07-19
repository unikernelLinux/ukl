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
#include "torque-generated/third_party/v8/builtins/array-sort-tq-csa.h"
#include "torque-generated/src/builtins/array-from-tq-csa.h"
#include "torque-generated/src/builtins/array-join-tq-csa.h"
#include "torque-generated/src/builtins/array-reverse-tq-csa.h"
#include "torque-generated/src/builtins/array-slice-tq-csa.h"
#include "torque-generated/src/builtins/array-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/frame-arguments-tq-csa.h"
#include "torque-generated/src/builtins/growable-fixed-array-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/objects/fixed-array-tq-csa.h"
#include "torque-generated/src/objects/js-objects-tq-csa.h"
#include "torque-generated/src/objects/string-tq-csa.h"
#include "torque-generated/third_party/v8/builtins/array-sort-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=17&c=1
TNode<SortState> Cast_SortState_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<SortState> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = DownCastForTorqueClass_SortState_0(state_, TNode<HeapObject>{p_obj}, &label1);
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
  return TNode<SortState>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=109&c=1
TNode<IntPtrT> CalculateWorkArrayLength_0(compiler::CodeAssemblerState* state_, TNode<JSReceiver> p_receiver, TNode<Number> p_initialReceiverLength) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, IntPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<UintPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = ChangeSafeIntegerNumberToUintPtr_0(state_, TNode<Number>{p_initialReceiverLength}, &label1);
    ca_.Goto(&block4);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block5);
    }
  }

  TNode<UintPtrT> tmp2;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp2 = FromConstexpr_uintptr_constexpr_uintptr_0(state_, kSmiMaxValue);
    ca_.Goto(&block2, tmp2);
  }

  TNode<UintPtrT> tmp3;
  TNode<BoolT> tmp4;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp3 = FromConstexpr_uintptr_constexpr_uintptr_0(state_, kSmiMaxValue);
    tmp4 = CodeStubAssembler(state_).UintPtrGreaterThan(TNode<UintPtrT>{tmp0}, TNode<UintPtrT>{tmp3});
    ca_.Branch(tmp4, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{tmp0});
  }

  TNode<UintPtrT> tmp5;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp5 = FromConstexpr_uintptr_constexpr_uintptr_0(state_, kSmiMaxValue);
    ca_.Goto(&block7, tmp5);
  }

  TNode<UintPtrT> phi_bb7_2;
  if (block7.is_used()) {
    ca_.Bind(&block7, &phi_bb7_2);
    ca_.Goto(&block2, phi_bb7_2);
  }

  TNode<UintPtrT> phi_bb2_2;
  TNode<IntPtrT> tmp6;
  TNode<JSObject> tmp7;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_2);
    tmp6 = Convert_intptr_uintptr_0(state_, TNode<UintPtrT>{phi_bb2_2});
    compiler::CodeAssemblerLabel label8(&ca_);
    tmp7 = Cast_JSObject_0(state_, TNode<HeapObject>{p_receiver}, &label8);
    ca_.Goto(&block10, phi_bb2_2);
    if (label8.is_used()) {
      ca_.Bind(&label8);
      ca_.Goto(&block11, phi_bb2_2);
    }
  }

  TNode<UintPtrT> phi_bb11_2;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_2);
    ca_.Goto(&block8, phi_bb11_2, tmp6);
  }

  TNode<UintPtrT> phi_bb10_2;
  TNode<IntPtrT> tmp9;
  TNode<FixedArrayBase> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<Smi> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<BoolT> tmp15;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_2);
    tmp9 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp10 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp7, tmp9});
    tmp11 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp12 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp10, tmp11});
    tmp13 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp12});
    tmp14 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp15 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{tmp13}, TNode<IntPtrT>{tmp14});
    ca_.Branch(tmp15, &block12, std::vector<compiler::Node*>{phi_bb10_2}, &block13, std::vector<compiler::Node*>{phi_bb10_2, tmp6});
  }

  TNode<UintPtrT> phi_bb12_2;
  TNode<IntPtrT> tmp16;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_2);
    tmp16 = CodeStubAssembler(state_).IntPtrMin(TNode<IntPtrT>{tmp6}, TNode<IntPtrT>{tmp13});
    ca_.Goto(&block13, phi_bb12_2, tmp16);
  }

  TNode<UintPtrT> phi_bb13_2;
  TNode<IntPtrT> phi_bb13_3;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_2, &phi_bb13_3);
    ca_.Goto(&block8, phi_bb13_2, phi_bb13_3);
  }

  TNode<UintPtrT> phi_bb8_2;
  TNode<IntPtrT> phi_bb8_3;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_2, &phi_bb8_3);
    ca_.Goto(&block14, phi_bb8_3);
  }

  TNode<IntPtrT> phi_bb14_2;
    ca_.Bind(&block14, &phi_bb14_2);
  return TNode<IntPtrT>{phi_bb14_2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=141&c=1
TNode<SortState> NewSortState_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_receiver, TNode<HeapObject> p_comparefn, TNode<Number> p_initialReceiverLength) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr, BuiltinPtr, BuiltinPtr, BuiltinPtr> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr, BuiltinPtr, BuiltinPtr, BuiltinPtr> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr, BuiltinPtr, BuiltinPtr, BuiltinPtr> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Oddball> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Undefined_0(state_);
    tmp1 = CodeStubAssembler(state_).TaggedNotEqual(TNode<HeapObject>{p_comparefn}, TNode<HeapObject>{tmp0});
    ca_.Branch(tmp1, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(&block4, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kSortCompareUserFn)));
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block4, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kSortCompareDefault)));
  }

  TNode<BuiltinPtr> phi_bb4_4;
  TNode<IntPtrT> tmp2;
  TNode<Map> tmp3;
  TNode<JSArray> tmp4;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_4);
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp3 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{p_receiver, tmp2});
    compiler::CodeAssemblerLabel label5(&ca_);
    tmp4 = Cast_FastJSArray_0(state_, TNode<Context>{p_context}, TNode<HeapObject>{p_receiver}, &label5);
    ca_.Goto(&block8);
    if (label5.is_used()) {
      ca_.Bind(&label5);
      ca_.Goto(&block9);
    }
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    ca_.Goto(&block6, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoad_GenericElementsAccessor_0)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kStore_GenericElementsAccessor_0)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kDelete_GenericElementsAccessor_0)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kCanUseSameAccessor_GenericElementsAccessor_0)));
  }

  TNode<Int32T> tmp6;
  TNode<BoolT> tmp7;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    EnsureWriteableFastElements_0(state_, TNode<Context>{p_context}, TNode<JSArray>{tmp4});
    tmp6 = CodeStubAssembler(state_).LoadMapElementsKind(TNode<Map>{tmp3});
    tmp7 = CodeStubAssembler(state_).IsDoubleElementsKind(TNode<Int32T>{tmp6});
    ca_.Branch(tmp7, &block10, std::vector<compiler::Node*>{}, &block11, std::vector<compiler::Node*>{});
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    ca_.Goto(&block12, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoad_FastDoubleElements_0)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kStore_FastDoubleElements_0)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kDelete_FastDoubleElements_0)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kCanUseSameAccessor_FastDoubleElements_0)));
  }

  TNode<BoolT> tmp8;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp8 = CodeStubAssembler(state_).IsFastSmiElementsKind(TNode<Int32T>{tmp6});
    ca_.Branch(tmp8, &block13, std::vector<compiler::Node*>{}, &block14, std::vector<compiler::Node*>{});
  }

  if (block13.is_used()) {
    ca_.Bind(&block13);
    ca_.Goto(&block15, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoad_FastSmiElements_0)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kStore_FastSmiElements_0)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kDelete_FastSmiElements_0)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kCanUseSameAccessor_FastSmiElements_0)));
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    ca_.Goto(&block15, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoad_FastObjectElements_0)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kStore_FastObjectElements_0)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kDelete_FastObjectElements_0)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kCanUseSameAccessor_FastObjectElements_0)));
  }

  TNode<BuiltinPtr> phi_bb15_6;
  TNode<BuiltinPtr> phi_bb15_7;
  TNode<BuiltinPtr> phi_bb15_8;
  TNode<BuiltinPtr> phi_bb15_9;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_6, &phi_bb15_7, &phi_bb15_8, &phi_bb15_9);
    ca_.Goto(&block12, phi_bb15_6, phi_bb15_7, phi_bb15_8, phi_bb15_9);
  }

  TNode<BuiltinPtr> phi_bb12_6;
  TNode<BuiltinPtr> phi_bb12_7;
  TNode<BuiltinPtr> phi_bb12_8;
  TNode<BuiltinPtr> phi_bb12_9;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_6, &phi_bb12_7, &phi_bb12_8, &phi_bb12_9);
    ca_.Goto(&block6, phi_bb12_6, phi_bb12_7, phi_bb12_8, phi_bb12_9);
  }

  TNode<BuiltinPtr> phi_bb6_6;
  TNode<BuiltinPtr> phi_bb6_7;
  TNode<BuiltinPtr> phi_bb6_8;
  TNode<BuiltinPtr> phi_bb6_9;
  TNode<IntPtrT> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<FixedArray> tmp11;
  TNode<FixedArray> tmp12;
  TNode<FixedArray> tmp13;
  TNode<Map> tmp14;
  TNode<BoolT> tmp15;
  TNode<IntPtrT> tmp16;
  TNode<HeapObject> tmp17;
  TNode<IntPtrT> tmp18;
  TNode<IntPtrT> tmp19;
  TNode<IntPtrT> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<IntPtrT> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<IntPtrT> tmp24;
  TNode<IntPtrT> tmp25;
  TNode<IntPtrT> tmp26;
  TNode<IntPtrT> tmp27;
  TNode<IntPtrT> tmp28;
  TNode<Smi> tmp29;
  TNode<IntPtrT> tmp30;
  TNode<Smi> tmp31;
  TNode<IntPtrT> tmp32;
  TNode<IntPtrT> tmp33;
  TNode<IntPtrT> tmp34;
  TNode<IntPtrT> tmp35;
  TNode<Smi> tmp36;
  TNode<IntPtrT> tmp37;
  TNode<Smi> tmp38;
  TNode<SortState> tmp39;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_6, &phi_bb6_7, &phi_bb6_8, &phi_bb6_9);
    tmp9 = CalculateWorkArrayLength_0(state_, TNode<JSReceiver>{p_receiver}, TNode<Number>{p_initialReceiverLength});
    tmp10 = Convert_intptr_constexpr_int31_0(state_, kMaxMergePending_0(state_));
    tmp11 = CodeStubAssembler(state_).AllocateZeroedFixedArray(TNode<IntPtrT>{tmp10});
    tmp12 = CodeStubAssembler(state_).AllocateZeroedFixedArray(TNode<IntPtrT>{tmp9});
    tmp13 = kEmptyFixedArray_0(state_);
    tmp14 = CodeStubAssembler(state_).GetInstanceTypeMap(SORT_STATE_TYPE);
    tmp15 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp16 = FromConstexpr_intptr_constexpr_int31_0(state_, 68);
    tmp17 = AllocateFromNew_0(state_, TNode<IntPtrT>{tmp16}, TNode<Map>{tmp14}, TNode<BoolT>{tmp15});
    tmp18 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp17, tmp18}, tmp14);
    tmp19 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    CodeStubAssembler(state_).StoreReference<JSReceiver>(CodeStubAssembler::Reference{tmp17, tmp19}, p_receiver);
    tmp20 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp17, tmp20}, tmp3);
    tmp21 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    CodeStubAssembler(state_).StoreReference<Number>(CodeStubAssembler::Reference{tmp17, tmp21}, p_initialReceiverLength);
    tmp22 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    CodeStubAssembler(state_).StoreReference<HeapObject>(CodeStubAssembler::Reference{tmp17, tmp22}, p_comparefn);
    tmp23 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    CodeStubAssembler(state_).StoreReference<BuiltinPtr>(CodeStubAssembler::Reference{tmp17, tmp23}, phi_bb4_4);
    tmp24 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    CodeStubAssembler(state_).StoreReference<BuiltinPtr>(CodeStubAssembler::Reference{tmp17, tmp24}, phi_bb6_6);
    tmp25 = FromConstexpr_intptr_constexpr_int31_0(state_, 28);
    CodeStubAssembler(state_).StoreReference<BuiltinPtr>(CodeStubAssembler::Reference{tmp17, tmp25}, phi_bb6_7);
    tmp26 = FromConstexpr_intptr_constexpr_int31_0(state_, 32);
    CodeStubAssembler(state_).StoreReference<BuiltinPtr>(CodeStubAssembler::Reference{tmp17, tmp26}, phi_bb6_8);
    tmp27 = FromConstexpr_intptr_constexpr_int31_0(state_, 36);
    CodeStubAssembler(state_).StoreReference<BuiltinPtr>(CodeStubAssembler::Reference{tmp17, tmp27}, phi_bb6_9);
    tmp28 = FromConstexpr_intptr_constexpr_int31_0(state_, 40);
    tmp29 = FromConstexpr_Smi_constexpr_int31_0(state_, kMinGallopWins_0(state_));
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp17, tmp28}, tmp29);
    tmp30 = FromConstexpr_intptr_constexpr_int31_0(state_, 44);
    tmp31 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp17, tmp30}, tmp31);
    tmp32 = FromConstexpr_intptr_constexpr_int31_0(state_, 48);
    CodeStubAssembler(state_).StoreReference<FixedArray>(CodeStubAssembler::Reference{tmp17, tmp32}, tmp11);
    tmp33 = FromConstexpr_intptr_constexpr_int31_0(state_, 52);
    CodeStubAssembler(state_).StoreReference<FixedArray>(CodeStubAssembler::Reference{tmp17, tmp33}, tmp12);
    tmp34 = FromConstexpr_intptr_constexpr_int31_0(state_, 56);
    CodeStubAssembler(state_).StoreReference<FixedArray>(CodeStubAssembler::Reference{tmp17, tmp34}, tmp13);
    tmp35 = FromConstexpr_intptr_constexpr_int31_0(state_, 60);
    tmp36 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp17, tmp35}, tmp36);
    tmp37 = FromConstexpr_intptr_constexpr_int31_0(state_, 64);
    tmp38 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp17, tmp37}, tmp38);
    tmp39 = TORQUE_CAST(TNode<HeapObject>{tmp17});
    ca_.Goto(&block16);
  }

    ca_.Bind(&block16);
  return TNode<SortState>{tmp39};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=205&c=1
TNode<Smi> kSuccess_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  TNode<Smi> tmp0;
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
  return TNode<Smi>{tmp0};}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=212&c=1
int31_t kMaxMergePending_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  return (FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x55ull)));}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=216&c=1
int31_t kMinGallopWins_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  return (FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x7ull)));}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=220&c=1
TNode<Smi> kSortStateTempSize_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  TNode<Smi> tmp0;
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x20ull));
  return TNode<Smi>{tmp0};}

TF_BUILTIN(Load_FastSmiElements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<SortState> parameter1 = UncheckedParameter<SortState>(Descriptor::kSortState);
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedParameter<Smi>(Descriptor::kIndex);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<JSReceiver> tmp1;
  TNode<JSObject> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<FixedArrayBase> tmp4;
  TNode<FixedArray> tmp5;
  TNode<Object> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<UintPtrT> tmp10;
  TNode<UintPtrT> tmp11;
  TNode<BoolT> tmp12;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp1 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{parameter1, tmp0});
    tmp2 = UnsafeCast_JSObject_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp1});
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp4 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp2, tmp3});
    tmp5 = UnsafeCast_FixedArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp4});
    std::tie(tmp6, tmp7, tmp8) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp5}).Flatten();
    tmp9 = Convert_intptr_Smi_0(state_, TNode<Smi>{parameter2});
    tmp10 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp9});
    tmp11 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp8});
    tmp12 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp10}, TNode<UintPtrT>{tmp11});
    ca_.Branch(tmp12, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<Object> tmp15;
  TNode<IntPtrT> tmp16;
  TNode<Object> tmp17;
  TNode<Object> tmp18;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp13 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp9});
    tmp14 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp7}, TNode<IntPtrT>{tmp13});
    std::tie(tmp15, tmp16) = NewReference_Object_0(state_, TNode<Object>{tmp6}, TNode<IntPtrT>{tmp14}).Flatten();
    tmp17 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp15, tmp16});
    tmp18 = UnsafeCast_JSReceiver_OR_Undefined_OR_Null_OR_False_OR_True_OR_Symbol_OR_String_OR_BigInt_OR_HeapNumber_OR_Smi_OR_TheHole_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp17});
    CodeStubAssembler(state_).Return(tmp18);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    CodeStubAssembler(state_).Unreachable();
  }
}

TF_BUILTIN(Load_FastObjectElements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<SortState> parameter1 = UncheckedParameter<SortState>(Descriptor::kSortState);
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedParameter<Smi>(Descriptor::kIndex);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<JSReceiver> tmp1;
  TNode<JSObject> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<FixedArrayBase> tmp4;
  TNode<FixedArray> tmp5;
  TNode<Object> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<UintPtrT> tmp10;
  TNode<UintPtrT> tmp11;
  TNode<BoolT> tmp12;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp1 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{parameter1, tmp0});
    tmp2 = UnsafeCast_JSObject_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp1});
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp4 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp2, tmp3});
    tmp5 = UnsafeCast_FixedArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp4});
    std::tie(tmp6, tmp7, tmp8) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp5}).Flatten();
    tmp9 = Convert_intptr_Smi_0(state_, TNode<Smi>{parameter2});
    tmp10 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp9});
    tmp11 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp8});
    tmp12 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp10}, TNode<UintPtrT>{tmp11});
    ca_.Branch(tmp12, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<Object> tmp15;
  TNode<IntPtrT> tmp16;
  TNode<Object> tmp17;
  TNode<Object> tmp18;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp13 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp9});
    tmp14 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp7}, TNode<IntPtrT>{tmp13});
    std::tie(tmp15, tmp16) = NewReference_Object_0(state_, TNode<Object>{tmp6}, TNode<IntPtrT>{tmp14}).Flatten();
    tmp17 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp15, tmp16});
    tmp18 = UnsafeCast_JSReceiver_OR_Undefined_OR_Null_OR_False_OR_True_OR_Symbol_OR_String_OR_BigInt_OR_HeapNumber_OR_Smi_OR_TheHole_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp17});
    CodeStubAssembler(state_).Return(tmp18);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    CodeStubAssembler(state_).Unreachable();
  }
}

TF_BUILTIN(Load_FastDoubleElements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<SortState> parameter1 = UncheckedParameter<SortState>(Descriptor::kSortState);
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedParameter<Smi>(Descriptor::kIndex);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<JSReceiver> tmp1;
  TNode<JSObject> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<FixedArrayBase> tmp4;
  TNode<FixedDoubleArray> tmp5;
  TNode<Object> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<UintPtrT> tmp10;
  TNode<UintPtrT> tmp11;
  TNode<BoolT> tmp12;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp1 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{parameter1, tmp0});
    tmp2 = UnsafeCast_JSObject_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp1});
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp4 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp2, tmp3});
    tmp5 = UnsafeCast_FixedDoubleArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp4});
    std::tie(tmp6, tmp7, tmp8) = FieldSliceFixedDoubleArrayFloats_0(state_, TNode<FixedDoubleArray>{tmp5}).Flatten();
    tmp9 = Convert_intptr_Smi_0(state_, TNode<Smi>{parameter2});
    tmp10 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp9});
    tmp11 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp8});
    tmp12 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp10}, TNode<UintPtrT>{tmp11});
    ca_.Branch(tmp12, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<Object> tmp15;
  TNode<IntPtrT> tmp16;
  TNode<BoolT> tmp17;
  TNode<Float64T> tmp18;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp13 = TimesSizeOf_float64_or_hole_0(state_, TNode<IntPtrT>{tmp9});
    tmp14 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp7}, TNode<IntPtrT>{tmp13});
    std::tie(tmp15, tmp16) = NewReference_float64_or_hole_0(state_, TNode<Object>{tmp6}, TNode<IntPtrT>{tmp14}).Flatten();
    std::tie(tmp17, tmp18) = LoadFloat64OrHole_0(state_, TorqueStructReference_float64_or_hole_0{TNode<Object>{tmp15}, TNode<IntPtrT>{tmp16}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Branch(tmp17, &block12, std::vector<compiler::Node*>{}, &block13, std::vector<compiler::Node*>{});
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Oddball> tmp19;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp19 = TheHole_0(state_);
    CodeStubAssembler(state_).Return(tmp19);
  }

  TNode<HeapNumber> tmp20;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp20 = CodeStubAssembler(state_).AllocateHeapNumberWithValue(TNode<Float64T>{tmp18});
    CodeStubAssembler(state_).Return(tmp20);
  }
}

TF_BUILTIN(Store_FastSmiElements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<SortState> parameter1 = UncheckedParameter<SortState>(Descriptor::kSortState);
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedParameter<Smi>(Descriptor::kIndex);
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<JSReceiver> tmp1;
  TNode<JSObject> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<FixedArrayBase> tmp4;
  TNode<FixedArray> tmp5;
  TNode<Smi> tmp6;
  TNode<Smi> tmp7;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp1 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{parameter1, tmp0});
    tmp2 = UnsafeCast_JSObject_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp1});
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp4 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp2, tmp3});
    tmp5 = UnsafeCast_FixedArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp4});
    tmp6 = UnsafeCast_Smi_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter3});
    CodeStubAssembler(state_).StoreFixedArrayElement(TNode<FixedArray>{tmp5}, TNode<Smi>{parameter2}, TNode<Smi>{tmp6});
    tmp7 = kSuccess_0(state_);
    CodeStubAssembler(state_).Return(tmp7);
  }
}

TF_BUILTIN(Store_FastObjectElements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<SortState> parameter1 = UncheckedParameter<SortState>(Descriptor::kSortState);
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedParameter<Smi>(Descriptor::kIndex);
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<JSReceiver> tmp1;
  TNode<JSObject> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<FixedArrayBase> tmp4;
  TNode<FixedArray> tmp5;
  TNode<Object> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<UintPtrT> tmp10;
  TNode<UintPtrT> tmp11;
  TNode<BoolT> tmp12;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp1 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{parameter1, tmp0});
    tmp2 = UnsafeCast_JSObject_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp1});
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp4 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp2, tmp3});
    tmp5 = UnsafeCast_FixedArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp4});
    std::tie(tmp6, tmp7, tmp8) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp5}).Flatten();
    tmp9 = Convert_intptr_Smi_0(state_, TNode<Smi>{parameter2});
    tmp10 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp9});
    tmp11 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp8});
    tmp12 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp10}, TNode<UintPtrT>{tmp11});
    ca_.Branch(tmp12, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<Object> tmp15;
  TNode<IntPtrT> tmp16;
  TNode<Smi> tmp17;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp13 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp9});
    tmp14 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp7}, TNode<IntPtrT>{tmp13});
    std::tie(tmp15, tmp16) = NewReference_Object_0(state_, TNode<Object>{tmp6}, TNode<IntPtrT>{tmp14}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp15, tmp16}, parameter3);
    tmp17 = kSuccess_0(state_);
    CodeStubAssembler(state_).Return(tmp17);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    CodeStubAssembler(state_).Unreachable();
  }
}

TF_BUILTIN(Store_FastDoubleElements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<SortState> parameter1 = UncheckedParameter<SortState>(Descriptor::kSortState);
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedParameter<Smi>(Descriptor::kIndex);
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<JSReceiver> tmp1;
  TNode<JSObject> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<FixedArrayBase> tmp4;
  TNode<FixedDoubleArray> tmp5;
  TNode<HeapNumber> tmp6;
  TNode<Float64T> tmp7;
  TNode<Smi> tmp8;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp1 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{parameter1, tmp0});
    tmp2 = UnsafeCast_JSObject_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp1});
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp4 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp2, tmp3});
    tmp5 = UnsafeCast_FixedDoubleArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp4});
    tmp6 = UnsafeCast_HeapNumber_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter3});
    tmp7 = Convert_float64_HeapNumber_0(state_, TNode<HeapNumber>{tmp6});
    CodeStubAssembler(state_).StoreFixedDoubleArrayElement(TNode<FixedDoubleArray>{tmp5}, TNode<Smi>{parameter2}, TNode<Float64T>{tmp7});
    tmp8 = kSuccess_0(state_);
    CodeStubAssembler(state_).Return(tmp8);
  }
}

TF_BUILTIN(Delete_FastSmiElements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<SortState> parameter1 = UncheckedParameter<SortState>(Descriptor::kSortState);
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedParameter<Smi>(Descriptor::kIndex);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<JSReceiver> tmp1;
  TNode<JSObject> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<FixedArrayBase> tmp4;
  TNode<FixedArray> tmp5;
  TNode<Object> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<UintPtrT> tmp10;
  TNode<UintPtrT> tmp11;
  TNode<BoolT> tmp12;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp1 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{parameter1, tmp0});
    tmp2 = UnsafeCast_JSObject_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp1});
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp4 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp2, tmp3});
    tmp5 = UnsafeCast_FixedArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp4});
    std::tie(tmp6, tmp7, tmp8) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp5}).Flatten();
    tmp9 = Convert_intptr_Smi_0(state_, TNode<Smi>{parameter2});
    tmp10 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp9});
    tmp11 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp8});
    tmp12 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp10}, TNode<UintPtrT>{tmp11});
    ca_.Branch(tmp12, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<Object> tmp15;
  TNode<IntPtrT> tmp16;
  TNode<Oddball> tmp17;
  TNode<Smi> tmp18;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp13 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp9});
    tmp14 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp7}, TNode<IntPtrT>{tmp13});
    std::tie(tmp15, tmp16) = NewReference_Object_0(state_, TNode<Object>{tmp6}, TNode<IntPtrT>{tmp14}).Flatten();
    tmp17 = TheHole_0(state_);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp15, tmp16}, tmp17);
    tmp18 = kSuccess_0(state_);
    CodeStubAssembler(state_).Return(tmp18);
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    CodeStubAssembler(state_).Unreachable();
  }
}

TF_BUILTIN(Delete_FastObjectElements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<SortState> parameter1 = UncheckedParameter<SortState>(Descriptor::kSortState);
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedParameter<Smi>(Descriptor::kIndex);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<JSReceiver> tmp1;
  TNode<JSObject> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<FixedArrayBase> tmp4;
  TNode<FixedArray> tmp5;
  TNode<Object> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<UintPtrT> tmp10;
  TNode<UintPtrT> tmp11;
  TNode<BoolT> tmp12;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp1 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{parameter1, tmp0});
    tmp2 = UnsafeCast_JSObject_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp1});
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp4 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp2, tmp3});
    tmp5 = UnsafeCast_FixedArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp4});
    std::tie(tmp6, tmp7, tmp8) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp5}).Flatten();
    tmp9 = Convert_intptr_Smi_0(state_, TNode<Smi>{parameter2});
    tmp10 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp9});
    tmp11 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp8});
    tmp12 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp10}, TNode<UintPtrT>{tmp11});
    ca_.Branch(tmp12, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<Object> tmp15;
  TNode<IntPtrT> tmp16;
  TNode<Oddball> tmp17;
  TNode<Smi> tmp18;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp13 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp9});
    tmp14 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp7}, TNode<IntPtrT>{tmp13});
    std::tie(tmp15, tmp16) = NewReference_Object_0(state_, TNode<Object>{tmp6}, TNode<IntPtrT>{tmp14}).Flatten();
    tmp17 = TheHole_0(state_);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp15, tmp16}, tmp17);
    tmp18 = kSuccess_0(state_);
    CodeStubAssembler(state_).Return(tmp18);
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    CodeStubAssembler(state_).Unreachable();
  }
}

TF_BUILTIN(Delete_FastDoubleElements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<SortState> parameter1 = UncheckedParameter<SortState>(Descriptor::kSortState);
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedParameter<Smi>(Descriptor::kIndex);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<JSReceiver> tmp1;
  TNode<JSObject> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<FixedArrayBase> tmp4;
  TNode<FixedDoubleArray> tmp5;
  TNode<Object> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<UintPtrT> tmp10;
  TNode<UintPtrT> tmp11;
  TNode<BoolT> tmp12;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp1 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{parameter1, tmp0});
    tmp2 = UnsafeCast_JSObject_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp1});
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp4 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp2, tmp3});
    tmp5 = UnsafeCast_FixedDoubleArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp4});
    std::tie(tmp6, tmp7, tmp8) = FieldSliceFixedDoubleArrayFloats_0(state_, TNode<FixedDoubleArray>{tmp5}).Flatten();
    tmp9 = Convert_intptr_Smi_0(state_, TNode<Smi>{parameter2});
    tmp10 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp9});
    tmp11 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp8});
    tmp12 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp10}, TNode<UintPtrT>{tmp11});
    ca_.Branch(tmp12, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<Object> tmp15;
  TNode<IntPtrT> tmp16;
  TNode<BoolT> tmp17;
  TNode<Float64T> tmp18;
  TNode<Smi> tmp19;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp13 = TimesSizeOf_float64_or_hole_0(state_, TNode<IntPtrT>{tmp9});
    tmp14 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp7}, TNode<IntPtrT>{tmp13});
    std::tie(tmp15, tmp16) = NewReference_float64_or_hole_0(state_, TNode<Object>{tmp6}, TNode<IntPtrT>{tmp14}).Flatten();
    std::tie(tmp17, tmp18) = kDoubleHole_0(state_).Flatten();
    StoreFloat64OrHole_0(state_, TorqueStructReference_float64_or_hole_0{TNode<Object>{tmp15}, TNode<IntPtrT>{tmp16}, TorqueStructUnsafe_0{}}, TorqueStructfloat64_or_hole_0{TNode<BoolT>{tmp17}, TNode<Float64T>{tmp18}});
    tmp19 = kSuccess_0(state_);
    CodeStubAssembler(state_).Return(tmp19);
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    CodeStubAssembler(state_).Unreachable();
  }
}

TF_BUILTIN(SortCompareDefault, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kComparefn);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kX);
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kY);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).TaggedIsSmi(TNode<Object>{parameter2});
    ca_.Branch(tmp0, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp1;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp1 = CodeStubAssembler(state_).TaggedIsSmi(TNode<Object>{parameter3});
    ca_.Goto(&block9, tmp1);
  }

  TNode<BoolT> tmp2;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp2 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block9, tmp2);
  }

  TNode<BoolT> phi_bb9_5;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_5);
    ca_.Branch(phi_bb9_5, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  TNode<Smi> tmp3;
  TNode<Smi> tmp4;
  TNode<Smi> tmp5;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp3 = UnsafeCast_Smi_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2});
    tmp4 = UnsafeCast_Smi_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter3});
    tmp5 = CodeStubAssembler(state_).SmiLexicographicCompare(TNode<Smi>{tmp3}, TNode<Smi>{tmp4});
    CodeStubAssembler(state_).Return(tmp5);
  }

  TNode<String> tmp6;
  TNode<String> tmp7;
  TNode<Oddball> tmp8;
  TNode<Oddball> tmp9;
  TNode<BoolT> tmp10;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp6 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{parameter0}, TNode<Object>{parameter2});
    tmp7 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{parameter0}, TNode<Object>{parameter3});
    tmp8 = ca_.CallStub<Oddball>(Builtins::CallableFor(ca_.isolate(), Builtin::kStringLessThan), parameter0, tmp6, tmp7);
    tmp9 = True_0(state_);
    tmp10 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp8}, TNode<HeapObject>{tmp9});
    ca_.Branch(tmp10, &block10, std::vector<compiler::Node*>{}, &block11, std::vector<compiler::Node*>{});
  }

  TNode<Number> tmp11;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp11 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    CodeStubAssembler(state_).Return(tmp11);
  }

  TNode<Oddball> tmp12;
  TNode<Oddball> tmp13;
  TNode<BoolT> tmp14;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp12 = ca_.CallStub<Oddball>(Builtins::CallableFor(ca_.isolate(), Builtin::kStringLessThan), parameter0, tmp7, tmp6);
    tmp13 = True_0(state_);
    tmp14 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp12}, TNode<HeapObject>{tmp13});
    ca_.Branch(tmp14, &block12, std::vector<compiler::Node*>{}, &block13, std::vector<compiler::Node*>{});
  }

  TNode<Number> tmp15;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp15 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    CodeStubAssembler(state_).Return(tmp15);
  }

  TNode<Number> tmp16;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp16 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    CodeStubAssembler(state_).Return(tmp16);
  }
}

TF_BUILTIN(SortCompareUserFn, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kComparefn);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kX);
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kY);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSReceiver> tmp0;
  TNode<Oddball> tmp1;
  TNode<Object> tmp2;
  TNode<Number> tmp3;
  TNode<BoolT> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = UnsafeCast_Callable_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1});
    tmp1 = Undefined_0(state_);
    tmp2 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<Object>{tmp0}, TNode<Object>{tmp1}, TNode<Object>{parameter2}, TNode<Object>{parameter3});
    tmp3 = CodeStubAssembler(state_).ToNumber_Inline(TNode<Context>{parameter0}, TNode<Object>{tmp2});
    tmp4 = NumberIsNaN_0(state_, TNode<Number>{tmp3});
    ca_.Branch(tmp4, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  TNode<Number> tmp5;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp5 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    CodeStubAssembler(state_).Return(tmp5);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    CodeStubAssembler(state_).Return(tmp3);
  }
}

TF_BUILTIN(CanUseSameAccessor_GenericElementsAccessor_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSReceiver> parameter1 = UncheckedParameter<JSReceiver>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<Map> parameter2 = UncheckedParameter<Map>(Descriptor::kInitialReceiverMap);
  USE(parameter2);
  TNode<Number> parameter3 = UncheckedParameter<Number>(Descriptor::kInitialReceiverLength);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Oddball> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = True_0(state_);
    CodeStubAssembler(state_).Return(tmp0);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=402&c=1
TNode<Smi> GetPendingRunsSize_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 44);
    tmp1 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_sortState, tmp0});
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<Smi>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=408&c=1
TNode<Smi> GetPendingRunBase_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArray> p_pendingRuns, TNode<Smi> p_run) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Smi> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<UintPtrT> tmp5;
  TNode<UintPtrT> tmp6;
  TNode<BoolT> tmp7;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{p_pendingRuns}).Flatten();
    tmp3 = CodeStubAssembler(state_).SmiShl(TNode<Smi>{p_run}, (FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull))));
    tmp4 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp3});
    tmp5 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp4});
    tmp6 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp7 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp5}, TNode<UintPtrT>{tmp6});
    ca_.Branch(tmp7, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Object> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<Object> tmp12;
  TNode<Smi> tmp13;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp8 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp4});
    tmp9 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp8});
    std::tie(tmp10, tmp11) = NewReference_Object_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp9}).Flatten();
    tmp12 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp10, tmp11});
    tmp13 = UnsafeCast_Smi_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp12});
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
  return TNode<Smi>{tmp13};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=413&c=1
void SetPendingRunBase_0(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_pendingRuns, TNode<Smi> p_run, TNode<Smi> p_value) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Smi> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<UintPtrT> tmp5;
  TNode<UintPtrT> tmp6;
  TNode<BoolT> tmp7;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{p_pendingRuns}).Flatten();
    tmp3 = CodeStubAssembler(state_).SmiShl(TNode<Smi>{p_run}, (FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull))));
    tmp4 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp3});
    tmp5 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp4});
    tmp6 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp7 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp5}, TNode<UintPtrT>{tmp6});
    ca_.Branch(tmp7, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Object> tmp10;
  TNode<IntPtrT> tmp11;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp8 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp4});
    tmp9 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp8});
    std::tie(tmp10, tmp11) = NewReference_Object_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp9}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp10, tmp11}, p_value);
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=417&c=1
TNode<Smi> GetPendingRunLength_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArray> p_pendingRuns, TNode<Smi> p_run) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Smi> tmp3;
  TNode<Smi> tmp4;
  TNode<Smi> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<UintPtrT> tmp7;
  TNode<UintPtrT> tmp8;
  TNode<BoolT> tmp9;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{p_pendingRuns}).Flatten();
    tmp3 = CodeStubAssembler(state_).SmiShl(TNode<Smi>{p_run}, (FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull))));
    tmp4 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp5 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp3}, TNode<Smi>{tmp4});
    tmp6 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp5});
    tmp7 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp6});
    tmp8 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp9 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp7}, TNode<UintPtrT>{tmp8});
    ca_.Branch(tmp9, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<Object> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<Object> tmp14;
  TNode<Smi> tmp15;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp10 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp6});
    tmp11 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp10});
    std::tie(tmp12, tmp13) = NewReference_Object_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp11}).Flatten();
    tmp14 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp12, tmp13});
    tmp15 = UnsafeCast_Smi_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp14});
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
  return TNode<Smi>{tmp15};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=422&c=1
void SetPendingRunLength_0(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_pendingRuns, TNode<Smi> p_run, TNode<Smi> p_value) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Smi> tmp3;
  TNode<Smi> tmp4;
  TNode<Smi> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<UintPtrT> tmp7;
  TNode<UintPtrT> tmp8;
  TNode<BoolT> tmp9;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{p_pendingRuns}).Flatten();
    tmp3 = CodeStubAssembler(state_).SmiShl(TNode<Smi>{p_run}, (FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull))));
    tmp4 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp5 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp3}, TNode<Smi>{tmp4});
    tmp6 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp5});
    tmp7 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp6});
    tmp8 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp9 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp7}, TNode<UintPtrT>{tmp8});
    ca_.Branch(tmp9, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<Object> tmp12;
  TNode<IntPtrT> tmp13;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp10 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp6});
    tmp11 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp10});
    std::tie(tmp12, tmp13) = NewReference_Object_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp11}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp12, tmp13}, p_value);
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=426&c=1
void PushRun_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState, TNode<Smi> p_base, TNode<Smi> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<FixedArray> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<Smi> tmp4;
  TNode<Smi> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = GetPendingRunsSize_0(state_, TNode<Context>{p_context}, TNode<SortState>{p_sortState});
    tmp1 = FromConstexpr_intptr_constexpr_int31_0(state_, 48);
    tmp2 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{p_sortState, tmp1});
    SetPendingRunBase_0(state_, TNode<FixedArray>{tmp2}, TNode<Smi>{tmp0}, TNode<Smi>{p_base});
    SetPendingRunLength_0(state_, TNode<FixedArray>{tmp2}, TNode<Smi>{tmp0}, TNode<Smi>{p_length});
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, 44);
    tmp4 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp5 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp0}, TNode<Smi>{tmp4});
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{p_sortState, tmp3}, tmp5);
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=441&c=1
TNode<FixedArray> GetTempArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState, TNode<Smi> p_requestedSize) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<Smi> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<FixedArray> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Smi> tmp5;
  TNode<BoolT> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = kSortStateTempSize_0(state_);
    tmp1 = CodeStubAssembler(state_).SmiMax(TNode<Smi>{tmp0}, TNode<Smi>{p_requestedSize});
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, 56);
    tmp3 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{p_sortState, tmp2});
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp5 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp3, tmp4});
    tmp6 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(TNode<Smi>{tmp5}, TNode<Smi>{tmp1});
    ca_.Branch(tmp6, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp7;
  TNode<FixedArray> tmp8;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 56);
    tmp8 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{p_sortState, tmp7});
    ca_.Goto(&block1, tmp8);
  }

  TNode<IntPtrT> tmp9;
  TNode<FixedArray> tmp10;
  TNode<IntPtrT> tmp11;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp9 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp1});
    tmp10 = CodeStubAssembler(state_).AllocateZeroedFixedArray(TNode<IntPtrT>{tmp9});
    tmp11 = FromConstexpr_intptr_constexpr_int31_0(state_, 56);
    CodeStubAssembler(state_).StoreReference<FixedArray>(CodeStubAssembler::Reference{p_sortState, tmp11}, tmp10);
    ca_.Goto(&block1, tmp10);
  }

  TNode<FixedArray> phi_bb1_3;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_3);
    ca_.Goto(&block4);
  }

    ca_.Bind(&block4);
  return TNode<FixedArray>{phi_bb1_3};
}

TF_BUILTIN(Copy, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<FixedArray> parameter1 = UncheckedParameter<FixedArray>(Descriptor::kSource);
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedParameter<Smi>(Descriptor::kSrcPos);
  USE(parameter2);
  TNode<FixedArray> parameter3 = UncheckedParameter<FixedArray>(Descriptor::kTarget);
  USE(parameter3);
  TNode<Smi> parameter4 = UncheckedParameter<Smi>(Descriptor::kDstPos);
  USE(parameter4);
  TNode<Smi> parameter5 = UncheckedParameter<Smi>(Descriptor::kLength);
  USE(parameter5);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{parameter2}, TNode<Smi>{parameter4});
    ca_.Branch(tmp0, &block17, std::vector<compiler::Node*>{}, &block18, std::vector<compiler::Node*>{});
  }

  TNode<Smi> tmp1;
  TNode<Smi> tmp2;
  TNode<Smi> tmp3;
  TNode<Smi> tmp4;
  TNode<Smi> tmp5;
  TNode<Smi> tmp6;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    tmp1 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{parameter2}, TNode<Smi>{parameter5});
    tmp2 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp1}, TNode<Smi>{tmp2});
    tmp4 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{parameter4}, TNode<Smi>{parameter5});
    tmp5 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp6 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp4}, TNode<Smi>{tmp5});
    ca_.Goto(&block22, tmp3, tmp6);
  }

  TNode<Smi> phi_bb22_6;
  TNode<Smi> phi_bb22_7;
  TNode<BoolT> tmp7;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_6, &phi_bb22_7);
    tmp7 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(TNode<Smi>{phi_bb22_6}, TNode<Smi>{parameter2});
    ca_.Branch(tmp7, &block20, std::vector<compiler::Node*>{phi_bb22_6, phi_bb22_7}, &block21, std::vector<compiler::Node*>{phi_bb22_6, phi_bb22_7});
  }

  TNode<Smi> phi_bb20_6;
  TNode<Smi> phi_bb20_7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<Smi> tmp11;
  TNode<Smi> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<UintPtrT> tmp14;
  TNode<UintPtrT> tmp15;
  TNode<BoolT> tmp16;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_6, &phi_bb20_7);
    std::tie(tmp8, tmp9, tmp10) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter3}).Flatten();
    tmp11 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp12 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb20_7}, TNode<Smi>{tmp11});
    tmp13 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb20_7});
    tmp14 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp13});
    tmp15 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp10});
    tmp16 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp14}, TNode<UintPtrT>{tmp15});
    ca_.Branch(tmp16, &block27, std::vector<compiler::Node*>{phi_bb20_6, phi_bb20_7, phi_bb20_7}, &block28, std::vector<compiler::Node*>{phi_bb20_6, phi_bb20_7, phi_bb20_7});
  }

  TNode<Smi> phi_bb27_6;
  TNode<Smi> phi_bb27_12;
  TNode<Smi> phi_bb27_13;
  TNode<IntPtrT> tmp17;
  TNode<IntPtrT> tmp18;
  TNode<Object> tmp19;
  TNode<IntPtrT> tmp20;
  TNode<Object> tmp21;
  TNode<IntPtrT> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<Smi> tmp24;
  TNode<Smi> tmp25;
  TNode<IntPtrT> tmp26;
  TNode<UintPtrT> tmp27;
  TNode<UintPtrT> tmp28;
  TNode<BoolT> tmp29;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_6, &phi_bb27_12, &phi_bb27_13);
    tmp17 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp13});
    tmp18 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp9}, TNode<IntPtrT>{tmp17});
    std::tie(tmp19, tmp20) = NewReference_Object_0(state_, TNode<Object>{tmp8}, TNode<IntPtrT>{tmp18}).Flatten();
    std::tie(tmp21, tmp22, tmp23) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter1}).Flatten();
    tmp24 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp25 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb27_6}, TNode<Smi>{tmp24});
    tmp26 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb27_6});
    tmp27 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp26});
    tmp28 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp23});
    tmp29 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp27}, TNode<UintPtrT>{tmp28});
    ca_.Branch(tmp29, &block35, std::vector<compiler::Node*>{phi_bb27_12, phi_bb27_13, phi_bb27_6, phi_bb27_6}, &block36, std::vector<compiler::Node*>{phi_bb27_12, phi_bb27_13, phi_bb27_6, phi_bb27_6});
  }

  TNode<Smi> phi_bb28_6;
  TNode<Smi> phi_bb28_12;
  TNode<Smi> phi_bb28_13;
  if (block28.is_used()) {
    ca_.Bind(&block28, &phi_bb28_6, &phi_bb28_12, &phi_bb28_13);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb35_12;
  TNode<Smi> phi_bb35_13;
  TNode<Smi> phi_bb35_20;
  TNode<Smi> phi_bb35_21;
  TNode<IntPtrT> tmp30;
  TNode<IntPtrT> tmp31;
  TNode<Object> tmp32;
  TNode<IntPtrT> tmp33;
  TNode<Object> tmp34;
  if (block35.is_used()) {
    ca_.Bind(&block35, &phi_bb35_12, &phi_bb35_13, &phi_bb35_20, &phi_bb35_21);
    tmp30 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp26});
    tmp31 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp22}, TNode<IntPtrT>{tmp30});
    std::tie(tmp32, tmp33) = NewReference_Object_0(state_, TNode<Object>{tmp21}, TNode<IntPtrT>{tmp31}).Flatten();
    tmp34 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp32, tmp33});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp19, tmp20}, tmp34);
    ca_.Goto(&block22, tmp25, tmp12);
  }

  TNode<Smi> phi_bb36_12;
  TNode<Smi> phi_bb36_13;
  TNode<Smi> phi_bb36_20;
  TNode<Smi> phi_bb36_21;
  if (block36.is_used()) {
    ca_.Bind(&block36, &phi_bb36_12, &phi_bb36_13, &phi_bb36_20, &phi_bb36_21);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb21_6;
  TNode<Smi> phi_bb21_7;
  if (block21.is_used()) {
    ca_.Bind(&block21, &phi_bb21_6, &phi_bb21_7);
    ca_.Goto(&block19);
  }

  TNode<Smi> tmp35;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp35 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{parameter2}, TNode<Smi>{parameter5});
    ca_.Goto(&block41, parameter2, parameter4);
  }

  TNode<Smi> phi_bb41_6;
  TNode<Smi> phi_bb41_7;
  TNode<BoolT> tmp36;
  if (block41.is_used()) {
    ca_.Bind(&block41, &phi_bb41_6, &phi_bb41_7);
    tmp36 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb41_6}, TNode<Smi>{tmp35});
    ca_.Branch(tmp36, &block39, std::vector<compiler::Node*>{phi_bb41_6, phi_bb41_7}, &block40, std::vector<compiler::Node*>{phi_bb41_6, phi_bb41_7});
  }

  TNode<Smi> phi_bb39_6;
  TNode<Smi> phi_bb39_7;
  TNode<Object> tmp37;
  TNode<IntPtrT> tmp38;
  TNode<IntPtrT> tmp39;
  TNode<Smi> tmp40;
  TNode<Smi> tmp41;
  TNode<IntPtrT> tmp42;
  TNode<UintPtrT> tmp43;
  TNode<UintPtrT> tmp44;
  TNode<BoolT> tmp45;
  if (block39.is_used()) {
    ca_.Bind(&block39, &phi_bb39_6, &phi_bb39_7);
    std::tie(tmp37, tmp38, tmp39) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter3}).Flatten();
    tmp40 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp41 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb39_7}, TNode<Smi>{tmp40});
    tmp42 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb39_7});
    tmp43 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp42});
    tmp44 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp39});
    tmp45 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp43}, TNode<UintPtrT>{tmp44});
    ca_.Branch(tmp45, &block46, std::vector<compiler::Node*>{phi_bb39_6, phi_bb39_7, phi_bb39_7}, &block47, std::vector<compiler::Node*>{phi_bb39_6, phi_bb39_7, phi_bb39_7});
  }

  TNode<Smi> phi_bb46_6;
  TNode<Smi> phi_bb46_13;
  TNode<Smi> phi_bb46_14;
  TNode<IntPtrT> tmp46;
  TNode<IntPtrT> tmp47;
  TNode<Object> tmp48;
  TNode<IntPtrT> tmp49;
  TNode<Object> tmp50;
  TNode<IntPtrT> tmp51;
  TNode<IntPtrT> tmp52;
  TNode<Smi> tmp53;
  TNode<Smi> tmp54;
  TNode<IntPtrT> tmp55;
  TNode<UintPtrT> tmp56;
  TNode<UintPtrT> tmp57;
  TNode<BoolT> tmp58;
  if (block46.is_used()) {
    ca_.Bind(&block46, &phi_bb46_6, &phi_bb46_13, &phi_bb46_14);
    tmp46 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp42});
    tmp47 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp38}, TNode<IntPtrT>{tmp46});
    std::tie(tmp48, tmp49) = NewReference_Object_0(state_, TNode<Object>{tmp37}, TNode<IntPtrT>{tmp47}).Flatten();
    std::tie(tmp50, tmp51, tmp52) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter1}).Flatten();
    tmp53 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp54 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb46_6}, TNode<Smi>{tmp53});
    tmp55 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb46_6});
    tmp56 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp55});
    tmp57 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp52});
    tmp58 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp56}, TNode<UintPtrT>{tmp57});
    ca_.Branch(tmp58, &block54, std::vector<compiler::Node*>{phi_bb46_13, phi_bb46_14, phi_bb46_6, phi_bb46_6}, &block55, std::vector<compiler::Node*>{phi_bb46_13, phi_bb46_14, phi_bb46_6, phi_bb46_6});
  }

  TNode<Smi> phi_bb47_6;
  TNode<Smi> phi_bb47_13;
  TNode<Smi> phi_bb47_14;
  if (block47.is_used()) {
    ca_.Bind(&block47, &phi_bb47_6, &phi_bb47_13, &phi_bb47_14);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb54_13;
  TNode<Smi> phi_bb54_14;
  TNode<Smi> phi_bb54_21;
  TNode<Smi> phi_bb54_22;
  TNode<IntPtrT> tmp59;
  TNode<IntPtrT> tmp60;
  TNode<Object> tmp61;
  TNode<IntPtrT> tmp62;
  TNode<Object> tmp63;
  if (block54.is_used()) {
    ca_.Bind(&block54, &phi_bb54_13, &phi_bb54_14, &phi_bb54_21, &phi_bb54_22);
    tmp59 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp55});
    tmp60 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp51}, TNode<IntPtrT>{tmp59});
    std::tie(tmp61, tmp62) = NewReference_Object_0(state_, TNode<Object>{tmp50}, TNode<IntPtrT>{tmp60}).Flatten();
    tmp63 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp61, tmp62});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp48, tmp49}, tmp63);
    ca_.Goto(&block41, tmp54, tmp41);
  }

  TNode<Smi> phi_bb55_13;
  TNode<Smi> phi_bb55_14;
  TNode<Smi> phi_bb55_21;
  TNode<Smi> phi_bb55_22;
  if (block55.is_used()) {
    ca_.Bind(&block55, &phi_bb55_13, &phi_bb55_14, &phi_bb55_21, &phi_bb55_22);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb40_6;
  TNode<Smi> phi_bb40_7;
  if (block40.is_used()) {
    ca_.Bind(&block40, &phi_bb40_6, &phi_bb40_7);
    ca_.Goto(&block19);
  }

  TNode<Smi> tmp64;
  if (block19.is_used()) {
    ca_.Bind(&block19);
    tmp64 = kSuccess_0(state_);
    CodeStubAssembler(state_).Return(tmp64);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=500&c=1
void BinaryInsertionSort_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState, TNode<Smi> p_low, TNode<Smi> p_startArg, TNode<Smi> p_high) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi> block63(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi> block71(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi> block72(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block75(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<FixedArray> tmp1;
  TNode<BoolT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 52);
    tmp1 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{p_sortState, tmp0});
    tmp2 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{p_low}, TNode<Smi>{p_startArg});
    ca_.Branch(tmp2, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  TNode<Smi> tmp3;
  TNode<Smi> tmp4;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp3 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp4 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{p_startArg}, TNode<Smi>{tmp3});
    ca_.Goto(&block11, tmp4);
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    ca_.Goto(&block11, p_startArg);
  }

  TNode<Smi> phi_bb11_6;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_6);
    ca_.Goto(&block15, phi_bb11_6);
  }

  TNode<Smi> phi_bb15_6;
  TNode<BoolT> tmp5;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_6);
    tmp5 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb15_6}, TNode<Smi>{p_high});
    ca_.Branch(tmp5, &block13, std::vector<compiler::Node*>{phi_bb15_6}, &block14, std::vector<compiler::Node*>{phi_bb15_6});
  }

  TNode<Smi> phi_bb13_6;
  TNode<Object> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<UintPtrT> tmp10;
  TNode<UintPtrT> tmp11;
  TNode<BoolT> tmp12;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_6);
    std::tie(tmp6, tmp7, tmp8) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp9 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb13_6});
    tmp10 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp9});
    tmp11 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp8});
    tmp12 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp10}, TNode<UintPtrT>{tmp11});
    ca_.Branch(tmp12, &block21, std::vector<compiler::Node*>{phi_bb13_6, phi_bb13_6, phi_bb13_6, phi_bb13_6}, &block22, std::vector<compiler::Node*>{phi_bb13_6, phi_bb13_6, phi_bb13_6, phi_bb13_6});
  }

  TNode<Smi> phi_bb21_6;
  TNode<Smi> phi_bb21_8;
  TNode<Smi> phi_bb21_13;
  TNode<Smi> phi_bb21_14;
  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<Object> tmp15;
  TNode<IntPtrT> tmp16;
  TNode<Object> tmp17;
  TNode<Object> tmp18;
  if (block21.is_used()) {
    ca_.Bind(&block21, &phi_bb21_6, &phi_bb21_8, &phi_bb21_13, &phi_bb21_14);
    tmp13 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp9});
    tmp14 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp7}, TNode<IntPtrT>{tmp13});
    std::tie(tmp15, tmp16) = NewReference_Object_0(state_, TNode<Object>{tmp6}, TNode<IntPtrT>{tmp14}).Flatten();
    tmp17 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp15, tmp16});
    tmp18 = UnsafeCast_JSAny_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp17});
    ca_.Goto(&block31, phi_bb21_6, p_low, phi_bb21_8);
  }

  TNode<Smi> phi_bb22_6;
  TNode<Smi> phi_bb22_8;
  TNode<Smi> phi_bb22_13;
  TNode<Smi> phi_bb22_14;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_6, &phi_bb22_8, &phi_bb22_13, &phi_bb22_14);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb31_6;
  TNode<Smi> phi_bb31_7;
  TNode<Smi> phi_bb31_8;
  TNode<BoolT> tmp19;
  if (block31.is_used()) {
    ca_.Bind(&block31, &phi_bb31_6, &phi_bb31_7, &phi_bb31_8);
    tmp19 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb31_7}, TNode<Smi>{phi_bb31_8});
    ca_.Branch(tmp19, &block29, std::vector<compiler::Node*>{phi_bb31_6, phi_bb31_7, phi_bb31_8}, &block30, std::vector<compiler::Node*>{phi_bb31_6, phi_bb31_7, phi_bb31_8});
  }

  TNode<Smi> phi_bb29_6;
  TNode<Smi> phi_bb29_7;
  TNode<Smi> phi_bb29_8;
  TNode<Smi> tmp20;
  TNode<Smi> tmp21;
  TNode<Smi> tmp22;
  TNode<Object> tmp23;
  TNode<IntPtrT> tmp24;
  TNode<IntPtrT> tmp25;
  TNode<IntPtrT> tmp26;
  TNode<UintPtrT> tmp27;
  TNode<UintPtrT> tmp28;
  TNode<BoolT> tmp29;
  if (block29.is_used()) {
    ca_.Bind(&block29, &phi_bb29_6, &phi_bb29_7, &phi_bb29_8);
    tmp20 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb29_8}, TNode<Smi>{phi_bb29_7});
    tmp21 = CodeStubAssembler(state_).SmiSar(TNode<Smi>{tmp20}, (FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull))));
    tmp22 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb29_7}, TNode<Smi>{tmp21});
    std::tie(tmp23, tmp24, tmp25) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp26 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp22});
    tmp27 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp26});
    tmp28 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp25});
    tmp29 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp27}, TNode<UintPtrT>{tmp28});
    ca_.Branch(tmp29, &block36, std::vector<compiler::Node*>{phi_bb29_6, phi_bb29_7, phi_bb29_8}, &block37, std::vector<compiler::Node*>{phi_bb29_6, phi_bb29_7, phi_bb29_8});
  }

  TNode<Smi> phi_bb36_6;
  TNode<Smi> phi_bb36_7;
  TNode<Smi> phi_bb36_8;
  TNode<IntPtrT> tmp30;
  TNode<IntPtrT> tmp31;
  TNode<Object> tmp32;
  TNode<IntPtrT> tmp33;
  TNode<Object> tmp34;
  TNode<Object> tmp35;
  TNode<Number> tmp36;
  TNode<Number> tmp37;
  TNode<BoolT> tmp38;
  if (block36.is_used()) {
    ca_.Bind(&block36, &phi_bb36_6, &phi_bb36_7, &phi_bb36_8);
    tmp30 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp26});
    tmp31 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp24}, TNode<IntPtrT>{tmp30});
    std::tie(tmp32, tmp33) = NewReference_Object_0(state_, TNode<Object>{tmp23}, TNode<IntPtrT>{tmp31}).Flatten();
    tmp34 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp32, tmp33});
    tmp35 = UnsafeCast_JSAny_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp34});
    tmp36 = Method_SortState_Compare_0(state_, TNode<Context>{p_context}, TNode<SortState>{p_sortState}, TNode<Object>{tmp18}, TNode<Object>{tmp35});
    tmp37 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp38 = NumberIsLessThan_0(state_, TNode<Number>{tmp36}, TNode<Number>{tmp37});
    ca_.Branch(tmp38, &block40, std::vector<compiler::Node*>{phi_bb36_6, phi_bb36_7, phi_bb36_8}, &block41, std::vector<compiler::Node*>{phi_bb36_6, phi_bb36_7, phi_bb36_8});
  }

  TNode<Smi> phi_bb37_6;
  TNode<Smi> phi_bb37_7;
  TNode<Smi> phi_bb37_8;
  if (block37.is_used()) {
    ca_.Bind(&block37, &phi_bb37_6, &phi_bb37_7, &phi_bb37_8);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb40_6;
  TNode<Smi> phi_bb40_7;
  TNode<Smi> phi_bb40_8;
  if (block40.is_used()) {
    ca_.Bind(&block40, &phi_bb40_6, &phi_bb40_7, &phi_bb40_8);
    ca_.Goto(&block42, phi_bb40_6, phi_bb40_7, tmp22);
  }

  TNode<Smi> phi_bb41_6;
  TNode<Smi> phi_bb41_7;
  TNode<Smi> phi_bb41_8;
  TNode<Smi> tmp39;
  TNode<Smi> tmp40;
  if (block41.is_used()) {
    ca_.Bind(&block41, &phi_bb41_6, &phi_bb41_7, &phi_bb41_8);
    tmp39 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp40 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp22}, TNode<Smi>{tmp39});
    ca_.Goto(&block42, phi_bb41_6, tmp40, phi_bb41_8);
  }

  TNode<Smi> phi_bb42_6;
  TNode<Smi> phi_bb42_7;
  TNode<Smi> phi_bb42_8;
  if (block42.is_used()) {
    ca_.Bind(&block42, &phi_bb42_6, &phi_bb42_7, &phi_bb42_8);
    ca_.Goto(&block31, phi_bb42_6, phi_bb42_7, phi_bb42_8);
  }

  TNode<Smi> phi_bb30_6;
  TNode<Smi> phi_bb30_7;
  TNode<Smi> phi_bb30_8;
  if (block30.is_used()) {
    ca_.Bind(&block30, &phi_bb30_6, &phi_bb30_7, &phi_bb30_8);
    ca_.Goto(&block49, phi_bb30_6, phi_bb30_7, phi_bb30_8, phi_bb30_6);
  }

  TNode<Smi> phi_bb49_6;
  TNode<Smi> phi_bb49_7;
  TNode<Smi> phi_bb49_8;
  TNode<Smi> phi_bb49_10;
  TNode<BoolT> tmp41;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_6, &phi_bb49_7, &phi_bb49_8, &phi_bb49_10);
    tmp41 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{phi_bb49_10}, TNode<Smi>{phi_bb49_7});
    ca_.Branch(tmp41, &block47, std::vector<compiler::Node*>{phi_bb49_6, phi_bb49_7, phi_bb49_8, phi_bb49_10}, &block48, std::vector<compiler::Node*>{phi_bb49_6, phi_bb49_7, phi_bb49_8, phi_bb49_10});
  }

  TNode<Smi> phi_bb47_6;
  TNode<Smi> phi_bb47_7;
  TNode<Smi> phi_bb47_8;
  TNode<Smi> phi_bb47_10;
  TNode<Object> tmp42;
  TNode<IntPtrT> tmp43;
  TNode<IntPtrT> tmp44;
  TNode<IntPtrT> tmp45;
  TNode<UintPtrT> tmp46;
  TNode<UintPtrT> tmp47;
  TNode<BoolT> tmp48;
  if (block47.is_used()) {
    ca_.Bind(&block47, &phi_bb47_6, &phi_bb47_7, &phi_bb47_8, &phi_bb47_10);
    std::tie(tmp42, tmp43, tmp44) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp45 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb47_10});
    tmp46 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp45});
    tmp47 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp44});
    tmp48 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp46}, TNode<UintPtrT>{tmp47});
    ca_.Branch(tmp48, &block55, std::vector<compiler::Node*>{phi_bb47_6, phi_bb47_7, phi_bb47_8, phi_bb47_10, phi_bb47_10, phi_bb47_10}, &block56, std::vector<compiler::Node*>{phi_bb47_6, phi_bb47_7, phi_bb47_8, phi_bb47_10, phi_bb47_10, phi_bb47_10});
  }

  TNode<Smi> phi_bb55_6;
  TNode<Smi> phi_bb55_7;
  TNode<Smi> phi_bb55_8;
  TNode<Smi> phi_bb55_10;
  TNode<Smi> phi_bb55_15;
  TNode<Smi> phi_bb55_16;
  TNode<IntPtrT> tmp49;
  TNode<IntPtrT> tmp50;
  TNode<Object> tmp51;
  TNode<IntPtrT> tmp52;
  TNode<Object> tmp53;
  TNode<IntPtrT> tmp54;
  TNode<IntPtrT> tmp55;
  TNode<Smi> tmp56;
  TNode<Smi> tmp57;
  TNode<IntPtrT> tmp58;
  TNode<UintPtrT> tmp59;
  TNode<UintPtrT> tmp60;
  TNode<BoolT> tmp61;
  if (block55.is_used()) {
    ca_.Bind(&block55, &phi_bb55_6, &phi_bb55_7, &phi_bb55_8, &phi_bb55_10, &phi_bb55_15, &phi_bb55_16);
    tmp49 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp45});
    tmp50 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp43}, TNode<IntPtrT>{tmp49});
    std::tie(tmp51, tmp52) = NewReference_Object_0(state_, TNode<Object>{tmp42}, TNode<IntPtrT>{tmp50}).Flatten();
    std::tie(tmp53, tmp54, tmp55) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp56 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp57 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb55_10}, TNode<Smi>{tmp56});
    tmp58 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp57});
    tmp59 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp58});
    tmp60 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp55});
    tmp61 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp59}, TNode<UintPtrT>{tmp60});
    ca_.Branch(tmp61, &block63, std::vector<compiler::Node*>{phi_bb55_6, phi_bb55_7, phi_bb55_8, phi_bb55_10, phi_bb55_15, phi_bb55_16}, &block64, std::vector<compiler::Node*>{phi_bb55_6, phi_bb55_7, phi_bb55_8, phi_bb55_10, phi_bb55_15, phi_bb55_16});
  }

  TNode<Smi> phi_bb56_6;
  TNode<Smi> phi_bb56_7;
  TNode<Smi> phi_bb56_8;
  TNode<Smi> phi_bb56_10;
  TNode<Smi> phi_bb56_15;
  TNode<Smi> phi_bb56_16;
  if (block56.is_used()) {
    ca_.Bind(&block56, &phi_bb56_6, &phi_bb56_7, &phi_bb56_8, &phi_bb56_10, &phi_bb56_15, &phi_bb56_16);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb63_6;
  TNode<Smi> phi_bb63_7;
  TNode<Smi> phi_bb63_8;
  TNode<Smi> phi_bb63_10;
  TNode<Smi> phi_bb63_15;
  TNode<Smi> phi_bb63_16;
  TNode<IntPtrT> tmp62;
  TNode<IntPtrT> tmp63;
  TNode<Object> tmp64;
  TNode<IntPtrT> tmp65;
  TNode<Object> tmp66;
  TNode<Smi> tmp67;
  TNode<Smi> tmp68;
  if (block63.is_used()) {
    ca_.Bind(&block63, &phi_bb63_6, &phi_bb63_7, &phi_bb63_8, &phi_bb63_10, &phi_bb63_15, &phi_bb63_16);
    tmp62 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp58});
    tmp63 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp54}, TNode<IntPtrT>{tmp62});
    std::tie(tmp64, tmp65) = NewReference_Object_0(state_, TNode<Object>{tmp53}, TNode<IntPtrT>{tmp63}).Flatten();
    tmp66 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp64, tmp65});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp51, tmp52}, tmp66);
    tmp67 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp68 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb63_10}, TNode<Smi>{tmp67});
    ca_.Goto(&block49, phi_bb63_6, phi_bb63_7, phi_bb63_8, tmp68);
  }

  TNode<Smi> phi_bb64_6;
  TNode<Smi> phi_bb64_7;
  TNode<Smi> phi_bb64_8;
  TNode<Smi> phi_bb64_10;
  TNode<Smi> phi_bb64_15;
  TNode<Smi> phi_bb64_16;
  if (block64.is_used()) {
    ca_.Bind(&block64, &phi_bb64_6, &phi_bb64_7, &phi_bb64_8, &phi_bb64_10, &phi_bb64_15, &phi_bb64_16);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb48_6;
  TNode<Smi> phi_bb48_7;
  TNode<Smi> phi_bb48_8;
  TNode<Smi> phi_bb48_10;
  TNode<Object> tmp69;
  TNode<IntPtrT> tmp70;
  TNode<IntPtrT> tmp71;
  TNode<IntPtrT> tmp72;
  TNode<UintPtrT> tmp73;
  TNode<UintPtrT> tmp74;
  TNode<BoolT> tmp75;
  if (block48.is_used()) {
    ca_.Bind(&block48, &phi_bb48_6, &phi_bb48_7, &phi_bb48_8, &phi_bb48_10);
    std::tie(tmp69, tmp70, tmp71) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp72 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb48_7});
    tmp73 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp72});
    tmp74 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp71});
    tmp75 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp73}, TNode<UintPtrT>{tmp74});
    ca_.Branch(tmp75, &block71, std::vector<compiler::Node*>{phi_bb48_6, phi_bb48_7, phi_bb48_8, phi_bb48_7, phi_bb48_7}, &block72, std::vector<compiler::Node*>{phi_bb48_6, phi_bb48_7, phi_bb48_8, phi_bb48_7, phi_bb48_7});
  }

  TNode<Smi> phi_bb71_6;
  TNode<Smi> phi_bb71_7;
  TNode<Smi> phi_bb71_8;
  TNode<Smi> phi_bb71_14;
  TNode<Smi> phi_bb71_15;
  TNode<IntPtrT> tmp76;
  TNode<IntPtrT> tmp77;
  TNode<Object> tmp78;
  TNode<IntPtrT> tmp79;
  TNode<Smi> tmp80;
  TNode<Smi> tmp81;
  if (block71.is_used()) {
    ca_.Bind(&block71, &phi_bb71_6, &phi_bb71_7, &phi_bb71_8, &phi_bb71_14, &phi_bb71_15);
    tmp76 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp72});
    tmp77 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp70}, TNode<IntPtrT>{tmp76});
    std::tie(tmp78, tmp79) = NewReference_Object_0(state_, TNode<Object>{tmp69}, TNode<IntPtrT>{tmp77}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp78, tmp79}, tmp18);
    tmp80 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp81 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb71_6}, TNode<Smi>{tmp80});
    ca_.Goto(&block15, tmp81);
  }

  TNode<Smi> phi_bb72_6;
  TNode<Smi> phi_bb72_7;
  TNode<Smi> phi_bb72_8;
  TNode<Smi> phi_bb72_14;
  TNode<Smi> phi_bb72_15;
  if (block72.is_used()) {
    ca_.Bind(&block72, &phi_bb72_6, &phi_bb72_7, &phi_bb72_8, &phi_bb72_14, &phi_bb72_15);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb14_6;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_6);
    ca_.Goto(&block75);
  }

    ca_.Bind(&block75);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=565&c=1
TNode<Smi> CountAndMakeRun_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState, TNode<Smi> p_lowArg, TNode<Smi> p_high) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Number, Object, Smi> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Number, Object, Smi> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Number, Object, Smi, Smi, Smi> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Number, Object, Smi, Smi, Smi> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Smi> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Smi> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Smi> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Smi> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Smi> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Smi> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Smi> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Number, Object, Smi> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Number, Object> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Number, Object> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<FixedArray> tmp1;
  TNode<Smi> tmp2;
  TNode<Smi> tmp3;
  TNode<BoolT> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 52);
    tmp1 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{p_sortState, tmp0});
    tmp2 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{p_lowArg}, TNode<Smi>{tmp2});
    tmp4 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp3}, TNode<Smi>{p_high});
    ca_.Branch(tmp4, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<Smi> tmp5;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp5 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    ca_.Goto(&block1, tmp5);
  }

  TNode<Smi> tmp6;
  TNode<Object> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<UintPtrT> tmp11;
  TNode<UintPtrT> tmp12;
  TNode<BoolT> tmp13;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp6 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    std::tie(tmp7, tmp8, tmp9) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp10 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp3});
    tmp11 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp10});
    tmp12 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp9});
    tmp13 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp11}, TNode<UintPtrT>{tmp12});
    ca_.Branch(tmp13, &block12, std::vector<compiler::Node*>{}, &block13, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<Object> tmp16;
  TNode<IntPtrT> tmp17;
  TNode<Object> tmp18;
  TNode<Object> tmp19;
  TNode<Object> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<IntPtrT> tmp22;
  TNode<Smi> tmp23;
  TNode<Smi> tmp24;
  TNode<IntPtrT> tmp25;
  TNode<UintPtrT> tmp26;
  TNode<UintPtrT> tmp27;
  TNode<BoolT> tmp28;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp14 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp10});
    tmp15 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp8}, TNode<IntPtrT>{tmp14});
    std::tie(tmp16, tmp17) = NewReference_Object_0(state_, TNode<Object>{tmp7}, TNode<IntPtrT>{tmp15}).Flatten();
    tmp18 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp16, tmp17});
    tmp19 = UnsafeCast_JSAny_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp18});
    std::tie(tmp20, tmp21, tmp22) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp23 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp24 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp3}, TNode<Smi>{tmp23});
    tmp25 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp24});
    tmp26 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp25});
    tmp27 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp22});
    tmp28 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp26}, TNode<UintPtrT>{tmp27});
    ca_.Branch(tmp28, &block20, std::vector<compiler::Node*>{}, &block21, std::vector<compiler::Node*>{});
  }

  if (block13.is_used()) {
    ca_.Bind(&block13);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp29;
  TNode<IntPtrT> tmp30;
  TNode<Object> tmp31;
  TNode<IntPtrT> tmp32;
  TNode<Object> tmp33;
  TNode<Object> tmp34;
  TNode<Number> tmp35;
  TNode<Number> tmp36;
  TNode<BoolT> tmp37;
  if (block20.is_used()) {
    ca_.Bind(&block20);
    tmp29 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp25});
    tmp30 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp21}, TNode<IntPtrT>{tmp29});
    std::tie(tmp31, tmp32) = NewReference_Object_0(state_, TNode<Object>{tmp20}, TNode<IntPtrT>{tmp30}).Flatten();
    tmp33 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp31, tmp32});
    tmp34 = UnsafeCast_JSAny_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp33});
    tmp35 = Method_SortState_Compare_0(state_, TNode<Context>{p_context}, TNode<SortState>{p_sortState}, TNode<Object>{tmp19}, TNode<Object>{tmp34});
    tmp36 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp37 = NumberIsLessThan_0(state_, TNode<Number>{tmp35}, TNode<Number>{tmp36});
    ca_.Branch(tmp37, &block24, std::vector<compiler::Node*>{}, &block25, std::vector<compiler::Node*>{});
  }

  if (block21.is_used()) {
    ca_.Bind(&block21);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<BoolT> tmp38;
  if (block24.is_used()) {
    ca_.Bind(&block24);
    tmp38 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block26, tmp38);
  }

  TNode<BoolT> tmp39;
  if (block25.is_used()) {
    ca_.Bind(&block25);
    tmp39 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block26, tmp39);
  }

  TNode<BoolT> phi_bb26_10;
  TNode<Smi> tmp40;
  TNode<Smi> tmp41;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_10);
    tmp40 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp41 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp3}, TNode<Smi>{tmp40});
    ca_.Goto(&block30, tmp6, tmp35, tmp19, tmp41);
  }

  TNode<Smi> phi_bb30_6;
  TNode<Number> phi_bb30_9;
  TNode<Object> phi_bb30_11;
  TNode<Smi> phi_bb30_12;
  TNode<BoolT> tmp42;
  if (block30.is_used()) {
    ca_.Bind(&block30, &phi_bb30_6, &phi_bb30_9, &phi_bb30_11, &phi_bb30_12);
    tmp42 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb30_12}, TNode<Smi>{p_high});
    ca_.Branch(tmp42, &block28, std::vector<compiler::Node*>{phi_bb30_6, phi_bb30_9, phi_bb30_11, phi_bb30_12}, &block29, std::vector<compiler::Node*>{phi_bb30_6, phi_bb30_9, phi_bb30_11, phi_bb30_12});
  }

  TNode<Smi> phi_bb28_6;
  TNode<Number> phi_bb28_9;
  TNode<Object> phi_bb28_11;
  TNode<Smi> phi_bb28_12;
  TNode<Object> tmp43;
  TNode<IntPtrT> tmp44;
  TNode<IntPtrT> tmp45;
  TNode<IntPtrT> tmp46;
  TNode<UintPtrT> tmp47;
  TNode<UintPtrT> tmp48;
  TNode<BoolT> tmp49;
  if (block28.is_used()) {
    ca_.Bind(&block28, &phi_bb28_6, &phi_bb28_9, &phi_bb28_11, &phi_bb28_12);
    std::tie(tmp43, tmp44, tmp45) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp46 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb28_12});
    tmp47 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp46});
    tmp48 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp45});
    tmp49 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp47}, TNode<UintPtrT>{tmp48});
    ca_.Branch(tmp49, &block36, std::vector<compiler::Node*>{phi_bb28_6, phi_bb28_9, phi_bb28_11, phi_bb28_12, phi_bb28_12, phi_bb28_12}, &block37, std::vector<compiler::Node*>{phi_bb28_6, phi_bb28_9, phi_bb28_11, phi_bb28_12, phi_bb28_12, phi_bb28_12});
  }

  TNode<Smi> phi_bb36_6;
  TNode<Number> phi_bb36_9;
  TNode<Object> phi_bb36_11;
  TNode<Smi> phi_bb36_12;
  TNode<Smi> phi_bb36_17;
  TNode<Smi> phi_bb36_18;
  TNode<IntPtrT> tmp50;
  TNode<IntPtrT> tmp51;
  TNode<Object> tmp52;
  TNode<IntPtrT> tmp53;
  TNode<Object> tmp54;
  TNode<Object> tmp55;
  TNode<Number> tmp56;
  if (block36.is_used()) {
    ca_.Bind(&block36, &phi_bb36_6, &phi_bb36_9, &phi_bb36_11, &phi_bb36_12, &phi_bb36_17, &phi_bb36_18);
    tmp50 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp46});
    tmp51 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp44}, TNode<IntPtrT>{tmp50});
    std::tie(tmp52, tmp53) = NewReference_Object_0(state_, TNode<Object>{tmp43}, TNode<IntPtrT>{tmp51}).Flatten();
    tmp54 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp52, tmp53});
    tmp55 = UnsafeCast_JSAny_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp54});
    tmp56 = Method_SortState_Compare_0(state_, TNode<Context>{p_context}, TNode<SortState>{p_sortState}, TNode<Object>{tmp55}, TNode<Object>{phi_bb36_11});
    ca_.Branch(phi_bb26_10, &block40, std::vector<compiler::Node*>{phi_bb36_6, phi_bb36_11, phi_bb36_12}, &block41, std::vector<compiler::Node*>{phi_bb36_6, phi_bb36_11, phi_bb36_12});
  }

  TNode<Smi> phi_bb37_6;
  TNode<Number> phi_bb37_9;
  TNode<Object> phi_bb37_11;
  TNode<Smi> phi_bb37_12;
  TNode<Smi> phi_bb37_17;
  TNode<Smi> phi_bb37_18;
  if (block37.is_used()) {
    ca_.Bind(&block37, &phi_bb37_6, &phi_bb37_9, &phi_bb37_11, &phi_bb37_12, &phi_bb37_17, &phi_bb37_18);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb40_6;
  TNode<Object> phi_bb40_11;
  TNode<Smi> phi_bb40_12;
  TNode<Number> tmp57;
  TNode<BoolT> tmp58;
  if (block40.is_used()) {
    ca_.Bind(&block40, &phi_bb40_6, &phi_bb40_11, &phi_bb40_12);
    tmp57 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp58 = NumberIsGreaterThanOrEqual_0(state_, TNode<Number>{tmp56}, TNode<Number>{tmp57});
    ca_.Branch(tmp58, &block43, std::vector<compiler::Node*>{phi_bb40_6, phi_bb40_11, phi_bb40_12}, &block44, std::vector<compiler::Node*>{phi_bb40_6, phi_bb40_11, phi_bb40_12});
  }

  TNode<Smi> phi_bb43_6;
  TNode<Object> phi_bb43_11;
  TNode<Smi> phi_bb43_12;
  if (block43.is_used()) {
    ca_.Bind(&block43, &phi_bb43_6, &phi_bb43_11, &phi_bb43_12);
    ca_.Goto(&block29, phi_bb43_6, tmp56, phi_bb43_11, phi_bb43_12);
  }

  TNode<Smi> phi_bb44_6;
  TNode<Object> phi_bb44_11;
  TNode<Smi> phi_bb44_12;
  if (block44.is_used()) {
    ca_.Bind(&block44, &phi_bb44_6, &phi_bb44_11, &phi_bb44_12);
    ca_.Goto(&block42, phi_bb44_6, phi_bb44_11, phi_bb44_12);
  }

  TNode<Smi> phi_bb41_6;
  TNode<Object> phi_bb41_11;
  TNode<Smi> phi_bb41_12;
  TNode<Number> tmp59;
  TNode<BoolT> tmp60;
  if (block41.is_used()) {
    ca_.Bind(&block41, &phi_bb41_6, &phi_bb41_11, &phi_bb41_12);
    tmp59 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp60 = NumberIsLessThan_0(state_, TNode<Number>{tmp56}, TNode<Number>{tmp59});
    ca_.Branch(tmp60, &block45, std::vector<compiler::Node*>{phi_bb41_6, phi_bb41_11, phi_bb41_12}, &block46, std::vector<compiler::Node*>{phi_bb41_6, phi_bb41_11, phi_bb41_12});
  }

  TNode<Smi> phi_bb45_6;
  TNode<Object> phi_bb45_11;
  TNode<Smi> phi_bb45_12;
  if (block45.is_used()) {
    ca_.Bind(&block45, &phi_bb45_6, &phi_bb45_11, &phi_bb45_12);
    ca_.Goto(&block29, phi_bb45_6, tmp56, phi_bb45_11, phi_bb45_12);
  }

  TNode<Smi> phi_bb46_6;
  TNode<Object> phi_bb46_11;
  TNode<Smi> phi_bb46_12;
  if (block46.is_used()) {
    ca_.Bind(&block46, &phi_bb46_6, &phi_bb46_11, &phi_bb46_12);
    ca_.Goto(&block42, phi_bb46_6, phi_bb46_11, phi_bb46_12);
  }

  TNode<Smi> phi_bb42_6;
  TNode<Object> phi_bb42_11;
  TNode<Smi> phi_bb42_12;
  TNode<Smi> tmp61;
  TNode<Smi> tmp62;
  TNode<Smi> tmp63;
  TNode<Smi> tmp64;
  if (block42.is_used()) {
    ca_.Bind(&block42, &phi_bb42_6, &phi_bb42_11, &phi_bb42_12);
    tmp61 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp62 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb42_6}, TNode<Smi>{tmp61});
    tmp63 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp64 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb42_12}, TNode<Smi>{tmp63});
    ca_.Goto(&block30, tmp62, tmp56, tmp55, tmp64);
  }

  TNode<Smi> phi_bb29_6;
  TNode<Number> phi_bb29_9;
  TNode<Object> phi_bb29_11;
  TNode<Smi> phi_bb29_12;
  if (block29.is_used()) {
    ca_.Bind(&block29, &phi_bb29_6, &phi_bb29_9, &phi_bb29_11, &phi_bb29_12);
    ca_.Branch(phi_bb26_10, &block47, std::vector<compiler::Node*>{phi_bb29_6, phi_bb29_9, phi_bb29_11}, &block48, std::vector<compiler::Node*>{phi_bb29_6, phi_bb29_9, phi_bb29_11});
  }

  TNode<Smi> phi_bb47_6;
  TNode<Number> phi_bb47_9;
  TNode<Object> phi_bb47_11;
  TNode<Smi> tmp65;
  if (block47.is_used()) {
    ca_.Bind(&block47, &phi_bb47_6, &phi_bb47_9, &phi_bb47_11);
    tmp65 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{p_lowArg}, TNode<Smi>{phi_bb47_6});
    ReverseRange_0(state_, TNode<FixedArray>{tmp1}, TNode<Smi>{p_lowArg}, TNode<Smi>{tmp65});
    ca_.Goto(&block48, phi_bb47_6, phi_bb47_9, phi_bb47_11);
  }

  TNode<Smi> phi_bb48_6;
  TNode<Number> phi_bb48_9;
  TNode<Object> phi_bb48_11;
  if (block48.is_used()) {
    ca_.Bind(&block48, &phi_bb48_6, &phi_bb48_9, &phi_bb48_11);
    ca_.Goto(&block1, phi_bb48_6);
  }

  TNode<Smi> phi_bb1_4;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_4);
    ca_.Goto(&block49, phi_bb1_4);
  }

  TNode<Smi> phi_bb49_4;
    ca_.Bind(&block49, &phi_bb49_4);
  return TNode<Smi>{phi_bb49_4};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=607&c=1
void ReverseRange_0(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_array, TNode<Smi> p_from, TNode<Smi> p_to) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp1 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{p_to}, TNode<Smi>{tmp0});
    ca_.Goto(&block4, p_from, tmp1);
  }

  TNode<Smi> phi_bb4_3;
  TNode<Smi> phi_bb4_4;
  TNode<BoolT> tmp2;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_3, &phi_bb4_4);
    tmp2 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb4_3}, TNode<Smi>{phi_bb4_4});
    ca_.Branch(tmp2, &block2, std::vector<compiler::Node*>{phi_bb4_3, phi_bb4_4}, &block3, std::vector<compiler::Node*>{phi_bb4_3, phi_bb4_4});
  }

  TNode<Smi> phi_bb2_3;
  TNode<Smi> phi_bb2_4;
  TNode<Object> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<UintPtrT> tmp7;
  TNode<UintPtrT> tmp8;
  TNode<BoolT> tmp9;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_3, &phi_bb2_4);
    std::tie(tmp3, tmp4, tmp5) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{p_array}).Flatten();
    tmp6 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb2_3});
    tmp7 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp6});
    tmp8 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp5});
    tmp9 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp7}, TNode<UintPtrT>{tmp8});
    ca_.Branch(tmp9, &block9, std::vector<compiler::Node*>{phi_bb2_3, phi_bb2_4, phi_bb2_3, phi_bb2_3}, &block10, std::vector<compiler::Node*>{phi_bb2_3, phi_bb2_4, phi_bb2_3, phi_bb2_3});
  }

  TNode<Smi> phi_bb9_3;
  TNode<Smi> phi_bb9_4;
  TNode<Smi> phi_bb9_9;
  TNode<Smi> phi_bb9_10;
  TNode<IntPtrT> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<Object> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<Object> tmp14;
  TNode<Object> tmp15;
  TNode<IntPtrT> tmp16;
  TNode<IntPtrT> tmp17;
  TNode<IntPtrT> tmp18;
  TNode<UintPtrT> tmp19;
  TNode<UintPtrT> tmp20;
  TNode<BoolT> tmp21;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_3, &phi_bb9_4, &phi_bb9_9, &phi_bb9_10);
    tmp10 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp6});
    tmp11 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp4}, TNode<IntPtrT>{tmp10});
    std::tie(tmp12, tmp13) = NewReference_Object_0(state_, TNode<Object>{tmp3}, TNode<IntPtrT>{tmp11}).Flatten();
    tmp14 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp12, tmp13});
    std::tie(tmp15, tmp16, tmp17) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{p_array}).Flatten();
    tmp18 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb9_4});
    tmp19 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp18});
    tmp20 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp17});
    tmp21 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp19}, TNode<UintPtrT>{tmp20});
    ca_.Branch(tmp21, &block17, std::vector<compiler::Node*>{phi_bb9_3, phi_bb9_4, phi_bb9_4, phi_bb9_4}, &block18, std::vector<compiler::Node*>{phi_bb9_3, phi_bb9_4, phi_bb9_4, phi_bb9_4});
  }

  TNode<Smi> phi_bb10_3;
  TNode<Smi> phi_bb10_4;
  TNode<Smi> phi_bb10_9;
  TNode<Smi> phi_bb10_10;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_3, &phi_bb10_4, &phi_bb10_9, &phi_bb10_10);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb17_3;
  TNode<Smi> phi_bb17_4;
  TNode<Smi> phi_bb17_10;
  TNode<Smi> phi_bb17_11;
  TNode<IntPtrT> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<Object> tmp24;
  TNode<IntPtrT> tmp25;
  TNode<Object> tmp26;
  TNode<Object> tmp27;
  TNode<IntPtrT> tmp28;
  TNode<IntPtrT> tmp29;
  TNode<Smi> tmp30;
  TNode<Smi> tmp31;
  TNode<IntPtrT> tmp32;
  TNode<UintPtrT> tmp33;
  TNode<UintPtrT> tmp34;
  TNode<BoolT> tmp35;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_3, &phi_bb17_4, &phi_bb17_10, &phi_bb17_11);
    tmp22 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp18});
    tmp23 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp16}, TNode<IntPtrT>{tmp22});
    std::tie(tmp24, tmp25) = NewReference_Object_0(state_, TNode<Object>{tmp15}, TNode<IntPtrT>{tmp23}).Flatten();
    tmp26 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp24, tmp25});
    std::tie(tmp27, tmp28, tmp29) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{p_array}).Flatten();
    tmp30 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp31 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb17_3}, TNode<Smi>{tmp30});
    tmp32 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb17_3});
    tmp33 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp32});
    tmp34 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp29});
    tmp35 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp33}, TNode<UintPtrT>{tmp34});
    ca_.Branch(tmp35, &block25, std::vector<compiler::Node*>{phi_bb17_4, phi_bb17_3, phi_bb17_3}, &block26, std::vector<compiler::Node*>{phi_bb17_4, phi_bb17_3, phi_bb17_3});
  }

  TNode<Smi> phi_bb18_3;
  TNode<Smi> phi_bb18_4;
  TNode<Smi> phi_bb18_10;
  TNode<Smi> phi_bb18_11;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_3, &phi_bb18_4, &phi_bb18_10, &phi_bb18_11);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb25_4;
  TNode<Smi> phi_bb25_11;
  TNode<Smi> phi_bb25_12;
  TNode<IntPtrT> tmp36;
  TNode<IntPtrT> tmp37;
  TNode<Object> tmp38;
  TNode<IntPtrT> tmp39;
  TNode<Object> tmp40;
  TNode<IntPtrT> tmp41;
  TNode<IntPtrT> tmp42;
  TNode<Smi> tmp43;
  TNode<Smi> tmp44;
  TNode<IntPtrT> tmp45;
  TNode<UintPtrT> tmp46;
  TNode<UintPtrT> tmp47;
  TNode<BoolT> tmp48;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_4, &phi_bb25_11, &phi_bb25_12);
    tmp36 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp32});
    tmp37 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp28}, TNode<IntPtrT>{tmp36});
    std::tie(tmp38, tmp39) = NewReference_Object_0(state_, TNode<Object>{tmp27}, TNode<IntPtrT>{tmp37}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp38, tmp39}, tmp26);
    std::tie(tmp40, tmp41, tmp42) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{p_array}).Flatten();
    tmp43 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp44 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb25_4}, TNode<Smi>{tmp43});
    tmp45 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb25_4});
    tmp46 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp45});
    tmp47 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp42});
    tmp48 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp46}, TNode<UintPtrT>{tmp47});
    ca_.Branch(tmp48, &block33, std::vector<compiler::Node*>{phi_bb25_4, phi_bb25_4}, &block34, std::vector<compiler::Node*>{phi_bb25_4, phi_bb25_4});
  }

  TNode<Smi> phi_bb26_4;
  TNode<Smi> phi_bb26_11;
  TNode<Smi> phi_bb26_12;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_4, &phi_bb26_11, &phi_bb26_12);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb33_11;
  TNode<Smi> phi_bb33_12;
  TNode<IntPtrT> tmp49;
  TNode<IntPtrT> tmp50;
  TNode<Object> tmp51;
  TNode<IntPtrT> tmp52;
  if (block33.is_used()) {
    ca_.Bind(&block33, &phi_bb33_11, &phi_bb33_12);
    tmp49 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp45});
    tmp50 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp41}, TNode<IntPtrT>{tmp49});
    std::tie(tmp51, tmp52) = NewReference_Object_0(state_, TNode<Object>{tmp40}, TNode<IntPtrT>{tmp50}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp51, tmp52}, tmp14);
    ca_.Goto(&block4, tmp31, tmp44);
  }

  TNode<Smi> phi_bb34_11;
  TNode<Smi> phi_bb34_12;
  if (block34.is_used()) {
    ca_.Bind(&block34, &phi_bb34_11, &phi_bb34_12);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb3_3;
  TNode<Smi> phi_bb3_4;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_3, &phi_bb3_4);
    ca_.Goto(&block37);
  }

    ca_.Bind(&block37);
}

TF_BUILTIN(MergeAt, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<SortState> parameter1 = UncheckedParameter<SortState>(Descriptor::kSortState);
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedParameter<Smi>(Descriptor::kI);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block63(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<FixedArray> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<FixedArray> tmp4;
  TNode<Smi> tmp5;
  TNode<Smi> tmp6;
  TNode<Smi> tmp7;
  TNode<Smi> tmp8;
  TNode<Smi> tmp9;
  TNode<Smi> tmp10;
  TNode<Smi> tmp11;
  TNode<Smi> tmp12;
  TNode<Smi> tmp13;
  TNode<Smi> tmp14;
  TNode<Smi> tmp15;
  TNode<BoolT> tmp16;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = GetPendingRunsSize_0(state_, TNode<Context>{parameter0}, TNode<SortState>{parameter1});
    tmp1 = FromConstexpr_intptr_constexpr_int31_0(state_, 52);
    tmp2 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{parameter1, tmp1});
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, 48);
    tmp4 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{parameter1, tmp3});
    tmp5 = GetPendingRunBase_0(state_, TNode<Context>{parameter0}, TNode<FixedArray>{tmp4}, TNode<Smi>{parameter2});
    tmp6 = GetPendingRunLength_0(state_, TNode<Context>{parameter0}, TNode<FixedArray>{tmp4}, TNode<Smi>{parameter2});
    tmp7 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp8 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{parameter2}, TNode<Smi>{tmp7});
    tmp9 = GetPendingRunBase_0(state_, TNode<Context>{parameter0}, TNode<FixedArray>{tmp4}, TNode<Smi>{tmp8});
    tmp10 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp11 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{parameter2}, TNode<Smi>{tmp10});
    tmp12 = GetPendingRunLength_0(state_, TNode<Context>{parameter0}, TNode<FixedArray>{tmp4}, TNode<Smi>{tmp11});
    tmp13 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp6}, TNode<Smi>{tmp12});
    SetPendingRunLength_0(state_, TNode<FixedArray>{tmp4}, TNode<Smi>{parameter2}, TNode<Smi>{tmp13});
    tmp14 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp15 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp0}, TNode<Smi>{tmp14});
    tmp16 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{parameter2}, TNode<Smi>{tmp15});
    ca_.Branch(tmp16, &block27, std::vector<compiler::Node*>{}, &block28, std::vector<compiler::Node*>{});
  }

  TNode<Smi> tmp17;
  TNode<Smi> tmp18;
  TNode<Smi> tmp19;
  TNode<Smi> tmp20;
  TNode<Smi> tmp21;
  TNode<Smi> tmp22;
  TNode<Smi> tmp23;
  TNode<Smi> tmp24;
  TNode<Smi> tmp25;
  TNode<Smi> tmp26;
  if (block27.is_used()) {
    ca_.Bind(&block27);
    tmp17 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp18 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{parameter2}, TNode<Smi>{tmp17});
    tmp19 = GetPendingRunBase_0(state_, TNode<Context>{parameter0}, TNode<FixedArray>{tmp4}, TNode<Smi>{tmp18});
    tmp20 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp21 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{parameter2}, TNode<Smi>{tmp20});
    tmp22 = GetPendingRunLength_0(state_, TNode<Context>{parameter0}, TNode<FixedArray>{tmp4}, TNode<Smi>{tmp21});
    tmp23 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp24 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{parameter2}, TNode<Smi>{tmp23});
    SetPendingRunBase_0(state_, TNode<FixedArray>{tmp4}, TNode<Smi>{tmp24}, TNode<Smi>{tmp19});
    tmp25 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp26 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{parameter2}, TNode<Smi>{tmp25});
    SetPendingRunLength_0(state_, TNode<FixedArray>{tmp4}, TNode<Smi>{tmp26}, TNode<Smi>{tmp22});
    ca_.Goto(&block28);
  }

  TNode<IntPtrT> tmp27;
  TNode<Smi> tmp28;
  TNode<Smi> tmp29;
  TNode<Object> tmp30;
  TNode<IntPtrT> tmp31;
  TNode<IntPtrT> tmp32;
  TNode<IntPtrT> tmp33;
  TNode<UintPtrT> tmp34;
  TNode<UintPtrT> tmp35;
  TNode<BoolT> tmp36;
  if (block28.is_used()) {
    ca_.Bind(&block28);
    tmp27 = FromConstexpr_intptr_constexpr_int31_0(state_, 44);
    tmp28 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp29 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp0}, TNode<Smi>{tmp28});
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{parameter1, tmp27}, tmp29);
    std::tie(tmp30, tmp31, tmp32) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp2}).Flatten();
    tmp33 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp9});
    tmp34 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp33});
    tmp35 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp32});
    tmp36 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp34}, TNode<UintPtrT>{tmp35});
    ca_.Branch(tmp36, &block33, std::vector<compiler::Node*>{}, &block34, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp37;
  TNode<IntPtrT> tmp38;
  TNode<Object> tmp39;
  TNode<IntPtrT> tmp40;
  TNode<Object> tmp41;
  TNode<Object> tmp42;
  TNode<Smi> tmp43;
  TNode<Smi> tmp44;
  TNode<Smi> tmp45;
  TNode<Smi> tmp46;
  TNode<Smi> tmp47;
  TNode<BoolT> tmp48;
  if (block33.is_used()) {
    ca_.Bind(&block33);
    tmp37 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp33});
    tmp38 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp31}, TNode<IntPtrT>{tmp37});
    std::tie(tmp39, tmp40) = NewReference_Object_0(state_, TNode<Object>{tmp30}, TNode<IntPtrT>{tmp38}).Flatten();
    tmp41 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp39, tmp40});
    tmp42 = UnsafeCast_JSAny_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp41});
    tmp43 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp44 = ca_.CallStub<Smi>(Builtins::CallableFor(ca_.isolate(), Builtin::kGallopRight), parameter0, parameter1, tmp2, tmp42, tmp5, tmp6, tmp43);
    tmp45 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp5}, TNode<Smi>{tmp44});
    tmp46 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp6}, TNode<Smi>{tmp44});
    tmp47 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp48 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp46}, TNode<Smi>{tmp47});
    ca_.Branch(tmp48, &block41, std::vector<compiler::Node*>{}, &block42, std::vector<compiler::Node*>{});
  }

  if (block34.is_used()) {
    ca_.Bind(&block34);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> tmp49;
  if (block41.is_used()) {
    ca_.Bind(&block41);
    tmp49 = kSuccess_0(state_);
    CodeStubAssembler(state_).Return(tmp49);
  }

  TNode<Object> tmp50;
  TNode<IntPtrT> tmp51;
  TNode<IntPtrT> tmp52;
  TNode<Smi> tmp53;
  TNode<Smi> tmp54;
  TNode<Smi> tmp55;
  TNode<IntPtrT> tmp56;
  TNode<UintPtrT> tmp57;
  TNode<UintPtrT> tmp58;
  TNode<BoolT> tmp59;
  if (block42.is_used()) {
    ca_.Bind(&block42);
    std::tie(tmp50, tmp51, tmp52) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp2}).Flatten();
    tmp53 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp45}, TNode<Smi>{tmp46});
    tmp54 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp55 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp53}, TNode<Smi>{tmp54});
    tmp56 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp55});
    tmp57 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp56});
    tmp58 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp52});
    tmp59 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp57}, TNode<UintPtrT>{tmp58});
    ca_.Branch(tmp59, &block51, std::vector<compiler::Node*>{}, &block52, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp60;
  TNode<IntPtrT> tmp61;
  TNode<Object> tmp62;
  TNode<IntPtrT> tmp63;
  TNode<Object> tmp64;
  TNode<Object> tmp65;
  TNode<Smi> tmp66;
  TNode<Smi> tmp67;
  TNode<Smi> tmp68;
  TNode<Smi> tmp69;
  TNode<BoolT> tmp70;
  if (block51.is_used()) {
    ca_.Bind(&block51);
    tmp60 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp56});
    tmp61 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp51}, TNode<IntPtrT>{tmp60});
    std::tie(tmp62, tmp63) = NewReference_Object_0(state_, TNode<Object>{tmp50}, TNode<IntPtrT>{tmp61}).Flatten();
    tmp64 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp62, tmp63});
    tmp65 = UnsafeCast_JSAny_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp64});
    tmp66 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp67 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp12}, TNode<Smi>{tmp66});
    tmp68 = ca_.CallStub<Smi>(Builtins::CallableFor(ca_.isolate(), Builtin::kGallopLeft), parameter0, parameter1, tmp2, tmp65, tmp9, tmp12, tmp67);
    tmp69 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp70 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp68}, TNode<Smi>{tmp69});
    ca_.Branch(tmp70, &block59, std::vector<compiler::Node*>{}, &block60, std::vector<compiler::Node*>{});
  }

  if (block52.is_used()) {
    ca_.Bind(&block52);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> tmp71;
  if (block59.is_used()) {
    ca_.Bind(&block59);
    tmp71 = kSuccess_0(state_);
    CodeStubAssembler(state_).Return(tmp71);
  }

  TNode<BoolT> tmp72;
  if (block60.is_used()) {
    ca_.Bind(&block60);
    tmp72 = CodeStubAssembler(state_).SmiLessThanOrEqual(TNode<Smi>{tmp46}, TNode<Smi>{tmp68});
    ca_.Branch(tmp72, &block61, std::vector<compiler::Node*>{}, &block62, std::vector<compiler::Node*>{});
  }

  if (block61.is_used()) {
    ca_.Bind(&block61);
    MergeLow_0(state_, TNode<Context>{parameter0}, TNode<SortState>{parameter1}, TNode<Smi>{tmp45}, TNode<Smi>{tmp46}, TNode<Smi>{tmp9}, TNode<Smi>{tmp68});
    ca_.Goto(&block63);
  }

  if (block62.is_used()) {
    ca_.Bind(&block62);
    MergeHigh_0(state_, TNode<Context>{parameter0}, TNode<SortState>{parameter1}, TNode<Smi>{tmp45}, TNode<Smi>{tmp46}, TNode<Smi>{tmp9}, TNode<Smi>{tmp68});
    ca_.Goto(&block63);
  }

  TNode<Smi> tmp73;
  if (block63.is_used()) {
    ca_.Bind(&block63);
    tmp73 = kSuccess_0(state_);
    CodeStubAssembler(state_).Return(tmp73);
  }
}

TF_BUILTIN(GallopLeft, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<SortState> parameter1 = UncheckedParameter<SortState>(Descriptor::kSortState);
  USE(parameter1);
  TNode<FixedArray> parameter2 = UncheckedParameter<FixedArray>(Descriptor::kArray);
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kKey);
  USE(parameter3);
  TNode<Smi> parameter4 = UncheckedParameter<Smi>(Descriptor::kBase);
  USE(parameter4);
  TNode<Smi> parameter5 = UncheckedParameter<Smi>(Descriptor::kLength);
  USE(parameter5);
  TNode<Smi> parameter6 = UncheckedParameter<Smi>(Descriptor::kHint);
  USE(parameter6);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block63(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block76(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block74(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block81(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block82(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block85(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block86(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block87(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block75(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<Smi> tmp1;
  TNode<Object> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Smi> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<UintPtrT> tmp7;
  TNode<UintPtrT> tmp8;
  TNode<BoolT> tmp9;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    std::tie(tmp2, tmp3, tmp4) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter2}).Flatten();
    tmp5 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{parameter4}, TNode<Smi>{parameter6});
    tmp6 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp5});
    tmp7 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp6});
    tmp8 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp4});
    tmp9 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp7}, TNode<UintPtrT>{tmp8});
    ca_.Branch(tmp9, &block19, std::vector<compiler::Node*>{}, &block20, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<Object> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<Object> tmp14;
  TNode<Object> tmp15;
  TNode<Number> tmp16;
  TNode<Number> tmp17;
  TNode<BoolT> tmp18;
  if (block19.is_used()) {
    ca_.Bind(&block19);
    tmp10 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp6});
    tmp11 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp10});
    std::tie(tmp12, tmp13) = NewReference_Object_0(state_, TNode<Object>{tmp2}, TNode<IntPtrT>{tmp11}).Flatten();
    tmp14 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp12, tmp13});
    tmp15 = UnsafeCast_JSAny_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp14});
    tmp16 = Method_SortState_Compare_0(state_, TNode<Context>{parameter0}, TNode<SortState>{parameter1}, TNode<Object>{tmp15}, TNode<Object>{parameter3});
    tmp17 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp18 = NumberIsLessThan_0(state_, TNode<Number>{tmp16}, TNode<Number>{tmp17});
    ca_.Branch(tmp18, &block23, std::vector<compiler::Node*>{}, &block24, std::vector<compiler::Node*>{});
  }

  if (block20.is_used()) {
    ca_.Bind(&block20);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> tmp19;
  if (block23.is_used()) {
    ca_.Bind(&block23);
    tmp19 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{parameter5}, TNode<Smi>{parameter6});
    ca_.Goto(&block28, tmp0, tmp1, tmp16);
  }

  TNode<Smi> phi_bb28_7;
  TNode<Smi> phi_bb28_8;
  TNode<Number> phi_bb28_10;
  TNode<BoolT> tmp20;
  if (block28.is_used()) {
    ca_.Bind(&block28, &phi_bb28_7, &phi_bb28_8, &phi_bb28_10);
    tmp20 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb28_8}, TNode<Smi>{tmp19});
    ca_.Branch(tmp20, &block26, std::vector<compiler::Node*>{phi_bb28_7, phi_bb28_8, phi_bb28_10}, &block27, std::vector<compiler::Node*>{phi_bb28_7, phi_bb28_8, phi_bb28_10});
  }

  TNode<Smi> phi_bb26_7;
  TNode<Smi> phi_bb26_8;
  TNode<Number> phi_bb26_10;
  TNode<Object> tmp21;
  TNode<IntPtrT> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<Smi> tmp24;
  TNode<Smi> tmp25;
  TNode<IntPtrT> tmp26;
  TNode<UintPtrT> tmp27;
  TNode<UintPtrT> tmp28;
  TNode<BoolT> tmp29;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_7, &phi_bb26_8, &phi_bb26_10);
    std::tie(tmp21, tmp22, tmp23) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter2}).Flatten();
    tmp24 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{parameter4}, TNode<Smi>{parameter6});
    tmp25 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp24}, TNode<Smi>{phi_bb26_8});
    tmp26 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp25});
    tmp27 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp26});
    tmp28 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp23});
    tmp29 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp27}, TNode<UintPtrT>{tmp28});
    ca_.Branch(tmp29, &block33, std::vector<compiler::Node*>{phi_bb26_7, phi_bb26_8, phi_bb26_10}, &block34, std::vector<compiler::Node*>{phi_bb26_7, phi_bb26_8, phi_bb26_10});
  }

  TNode<Smi> phi_bb33_7;
  TNode<Smi> phi_bb33_8;
  TNode<Number> phi_bb33_10;
  TNode<IntPtrT> tmp30;
  TNode<IntPtrT> tmp31;
  TNode<Object> tmp32;
  TNode<IntPtrT> tmp33;
  TNode<Object> tmp34;
  TNode<Object> tmp35;
  TNode<Number> tmp36;
  TNode<Number> tmp37;
  TNode<BoolT> tmp38;
  if (block33.is_used()) {
    ca_.Bind(&block33, &phi_bb33_7, &phi_bb33_8, &phi_bb33_10);
    tmp30 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp26});
    tmp31 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp22}, TNode<IntPtrT>{tmp30});
    std::tie(tmp32, tmp33) = NewReference_Object_0(state_, TNode<Object>{tmp21}, TNode<IntPtrT>{tmp31}).Flatten();
    tmp34 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp32, tmp33});
    tmp35 = UnsafeCast_JSAny_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp34});
    tmp36 = Method_SortState_Compare_0(state_, TNode<Context>{parameter0}, TNode<SortState>{parameter1}, TNode<Object>{tmp35}, TNode<Object>{parameter3});
    tmp37 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp38 = NumberIsGreaterThanOrEqual_0(state_, TNode<Number>{tmp36}, TNode<Number>{tmp37});
    ca_.Branch(tmp38, &block37, std::vector<compiler::Node*>{phi_bb33_7, phi_bb33_8}, &block38, std::vector<compiler::Node*>{phi_bb33_7, phi_bb33_8});
  }

  TNode<Smi> phi_bb34_7;
  TNode<Smi> phi_bb34_8;
  TNode<Number> phi_bb34_10;
  if (block34.is_used()) {
    ca_.Bind(&block34, &phi_bb34_7, &phi_bb34_8, &phi_bb34_10);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb37_7;
  TNode<Smi> phi_bb37_8;
  if (block37.is_used()) {
    ca_.Bind(&block37, &phi_bb37_7, &phi_bb37_8);
    ca_.Goto(&block27, phi_bb37_7, phi_bb37_8, tmp36);
  }

  TNode<Smi> phi_bb38_7;
  TNode<Smi> phi_bb38_8;
  TNode<Smi> tmp39;
  TNode<Smi> tmp40;
  TNode<Smi> tmp41;
  TNode<Smi> tmp42;
  TNode<BoolT> tmp43;
  if (block38.is_used()) {
    ca_.Bind(&block38, &phi_bb38_7, &phi_bb38_8);
    tmp39 = CodeStubAssembler(state_).SmiShl(TNode<Smi>{phi_bb38_8}, (FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull))));
    tmp40 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp41 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp39}, TNode<Smi>{tmp40});
    tmp42 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp43 = CodeStubAssembler(state_).SmiLessThanOrEqual(TNode<Smi>{tmp41}, TNode<Smi>{tmp42});
    ca_.Branch(tmp43, &block39, std::vector<compiler::Node*>{phi_bb38_8}, &block40, std::vector<compiler::Node*>{phi_bb38_8, tmp41});
  }

  TNode<Smi> phi_bb39_7;
  if (block39.is_used()) {
    ca_.Bind(&block39, &phi_bb39_7);
    ca_.Goto(&block40, phi_bb39_7, tmp19);
  }

  TNode<Smi> phi_bb40_7;
  TNode<Smi> phi_bb40_8;
  if (block40.is_used()) {
    ca_.Bind(&block40, &phi_bb40_7, &phi_bb40_8);
    ca_.Goto(&block28, phi_bb40_7, phi_bb40_8, tmp36);
  }

  TNode<Smi> phi_bb27_7;
  TNode<Smi> phi_bb27_8;
  TNode<Number> phi_bb27_10;
  TNode<BoolT> tmp44;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_7, &phi_bb27_8, &phi_bb27_10);
    tmp44 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{phi_bb27_8}, TNode<Smi>{tmp19});
    ca_.Branch(tmp44, &block41, std::vector<compiler::Node*>{phi_bb27_7, phi_bb27_8, phi_bb27_10}, &block42, std::vector<compiler::Node*>{phi_bb27_7, phi_bb27_8, phi_bb27_10});
  }

  TNode<Smi> phi_bb41_7;
  TNode<Smi> phi_bb41_8;
  TNode<Number> phi_bb41_10;
  if (block41.is_used()) {
    ca_.Bind(&block41, &phi_bb41_7, &phi_bb41_8, &phi_bb41_10);
    ca_.Goto(&block42, phi_bb41_7, tmp19, phi_bb41_10);
  }

  TNode<Smi> phi_bb42_7;
  TNode<Smi> phi_bb42_8;
  TNode<Number> phi_bb42_10;
  TNode<Smi> tmp45;
  TNode<Smi> tmp46;
  if (block42.is_used()) {
    ca_.Bind(&block42, &phi_bb42_7, &phi_bb42_8, &phi_bb42_10);
    tmp45 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb42_7}, TNode<Smi>{parameter6});
    tmp46 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb42_8}, TNode<Smi>{parameter6});
    ca_.Goto(&block25, tmp45, tmp46, phi_bb42_10);
  }

  TNode<Smi> tmp47;
  TNode<Smi> tmp48;
  if (block24.is_used()) {
    ca_.Bind(&block24);
    tmp47 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp48 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{parameter6}, TNode<Smi>{tmp47});
    ca_.Goto(&block49, tmp0, tmp1, tmp16);
  }

  TNode<Smi> phi_bb49_7;
  TNode<Smi> phi_bb49_8;
  TNode<Number> phi_bb49_10;
  TNode<BoolT> tmp49;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_7, &phi_bb49_8, &phi_bb49_10);
    tmp49 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb49_8}, TNode<Smi>{tmp48});
    ca_.Branch(tmp49, &block47, std::vector<compiler::Node*>{phi_bb49_7, phi_bb49_8, phi_bb49_10}, &block48, std::vector<compiler::Node*>{phi_bb49_7, phi_bb49_8, phi_bb49_10});
  }

  TNode<Smi> phi_bb47_7;
  TNode<Smi> phi_bb47_8;
  TNode<Number> phi_bb47_10;
  TNode<Object> tmp50;
  TNode<IntPtrT> tmp51;
  TNode<IntPtrT> tmp52;
  TNode<Smi> tmp53;
  TNode<Smi> tmp54;
  TNode<IntPtrT> tmp55;
  TNode<UintPtrT> tmp56;
  TNode<UintPtrT> tmp57;
  TNode<BoolT> tmp58;
  if (block47.is_used()) {
    ca_.Bind(&block47, &phi_bb47_7, &phi_bb47_8, &phi_bb47_10);
    std::tie(tmp50, tmp51, tmp52) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter2}).Flatten();
    tmp53 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{parameter4}, TNode<Smi>{parameter6});
    tmp54 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp53}, TNode<Smi>{phi_bb47_8});
    tmp55 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp54});
    tmp56 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp55});
    tmp57 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp52});
    tmp58 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp56}, TNode<UintPtrT>{tmp57});
    ca_.Branch(tmp58, &block54, std::vector<compiler::Node*>{phi_bb47_7, phi_bb47_8, phi_bb47_10}, &block55, std::vector<compiler::Node*>{phi_bb47_7, phi_bb47_8, phi_bb47_10});
  }

  TNode<Smi> phi_bb54_7;
  TNode<Smi> phi_bb54_8;
  TNode<Number> phi_bb54_10;
  TNode<IntPtrT> tmp59;
  TNode<IntPtrT> tmp60;
  TNode<Object> tmp61;
  TNode<IntPtrT> tmp62;
  TNode<Object> tmp63;
  TNode<Object> tmp64;
  TNode<Number> tmp65;
  TNode<Number> tmp66;
  TNode<BoolT> tmp67;
  if (block54.is_used()) {
    ca_.Bind(&block54, &phi_bb54_7, &phi_bb54_8, &phi_bb54_10);
    tmp59 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp55});
    tmp60 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp51}, TNode<IntPtrT>{tmp59});
    std::tie(tmp61, tmp62) = NewReference_Object_0(state_, TNode<Object>{tmp50}, TNode<IntPtrT>{tmp60}).Flatten();
    tmp63 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp61, tmp62});
    tmp64 = UnsafeCast_JSAny_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp63});
    tmp65 = Method_SortState_Compare_0(state_, TNode<Context>{parameter0}, TNode<SortState>{parameter1}, TNode<Object>{tmp64}, TNode<Object>{parameter3});
    tmp66 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp67 = NumberIsLessThan_0(state_, TNode<Number>{tmp65}, TNode<Number>{tmp66});
    ca_.Branch(tmp67, &block58, std::vector<compiler::Node*>{phi_bb54_7, phi_bb54_8}, &block59, std::vector<compiler::Node*>{phi_bb54_7, phi_bb54_8});
  }

  TNode<Smi> phi_bb55_7;
  TNode<Smi> phi_bb55_8;
  TNode<Number> phi_bb55_10;
  if (block55.is_used()) {
    ca_.Bind(&block55, &phi_bb55_7, &phi_bb55_8, &phi_bb55_10);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb58_7;
  TNode<Smi> phi_bb58_8;
  if (block58.is_used()) {
    ca_.Bind(&block58, &phi_bb58_7, &phi_bb58_8);
    ca_.Goto(&block48, phi_bb58_7, phi_bb58_8, tmp65);
  }

  TNode<Smi> phi_bb59_7;
  TNode<Smi> phi_bb59_8;
  TNode<Smi> tmp68;
  TNode<Smi> tmp69;
  TNode<Smi> tmp70;
  TNode<Smi> tmp71;
  TNode<BoolT> tmp72;
  if (block59.is_used()) {
    ca_.Bind(&block59, &phi_bb59_7, &phi_bb59_8);
    tmp68 = CodeStubAssembler(state_).SmiShl(TNode<Smi>{phi_bb59_8}, (FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull))));
    tmp69 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp70 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp68}, TNode<Smi>{tmp69});
    tmp71 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp72 = CodeStubAssembler(state_).SmiLessThanOrEqual(TNode<Smi>{tmp70}, TNode<Smi>{tmp71});
    ca_.Branch(tmp72, &block60, std::vector<compiler::Node*>{phi_bb59_8}, &block61, std::vector<compiler::Node*>{phi_bb59_8, tmp70});
  }

  TNode<Smi> phi_bb60_7;
  if (block60.is_used()) {
    ca_.Bind(&block60, &phi_bb60_7);
    ca_.Goto(&block61, phi_bb60_7, tmp48);
  }

  TNode<Smi> phi_bb61_7;
  TNode<Smi> phi_bb61_8;
  if (block61.is_used()) {
    ca_.Bind(&block61, &phi_bb61_7, &phi_bb61_8);
    ca_.Goto(&block49, phi_bb61_7, phi_bb61_8, tmp65);
  }

  TNode<Smi> phi_bb48_7;
  TNode<Smi> phi_bb48_8;
  TNode<Number> phi_bb48_10;
  TNode<BoolT> tmp73;
  if (block48.is_used()) {
    ca_.Bind(&block48, &phi_bb48_7, &phi_bb48_8, &phi_bb48_10);
    tmp73 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{phi_bb48_8}, TNode<Smi>{tmp48});
    ca_.Branch(tmp73, &block62, std::vector<compiler::Node*>{phi_bb48_7, phi_bb48_8, phi_bb48_10}, &block63, std::vector<compiler::Node*>{phi_bb48_7, phi_bb48_8, phi_bb48_10});
  }

  TNode<Smi> phi_bb62_7;
  TNode<Smi> phi_bb62_8;
  TNode<Number> phi_bb62_10;
  if (block62.is_used()) {
    ca_.Bind(&block62, &phi_bb62_7, &phi_bb62_8, &phi_bb62_10);
    ca_.Goto(&block63, phi_bb62_7, tmp48, phi_bb62_10);
  }

  TNode<Smi> phi_bb63_7;
  TNode<Smi> phi_bb63_8;
  TNode<Number> phi_bb63_10;
  TNode<Smi> tmp74;
  TNode<Smi> tmp75;
  if (block63.is_used()) {
    ca_.Bind(&block63, &phi_bb63_7, &phi_bb63_8, &phi_bb63_10);
    tmp74 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{parameter6}, TNode<Smi>{phi_bb63_8});
    tmp75 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{parameter6}, TNode<Smi>{phi_bb63_7});
    ca_.Goto(&block25, tmp74, tmp75, phi_bb63_10);
  }

  TNode<Smi> phi_bb25_7;
  TNode<Smi> phi_bb25_8;
  TNode<Number> phi_bb25_10;
  TNode<Smi> tmp76;
  TNode<Smi> tmp77;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_7, &phi_bb25_8, &phi_bb25_10);
    tmp76 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp77 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb25_7}, TNode<Smi>{tmp76});
    ca_.Goto(&block76, tmp77, phi_bb25_8, phi_bb25_10);
  }

  TNode<Smi> phi_bb76_7;
  TNode<Smi> phi_bb76_8;
  TNode<Number> phi_bb76_10;
  TNode<BoolT> tmp78;
  if (block76.is_used()) {
    ca_.Bind(&block76, &phi_bb76_7, &phi_bb76_8, &phi_bb76_10);
    tmp78 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb76_7}, TNode<Smi>{phi_bb76_8});
    ca_.Branch(tmp78, &block74, std::vector<compiler::Node*>{phi_bb76_7, phi_bb76_8, phi_bb76_10}, &block75, std::vector<compiler::Node*>{phi_bb76_7, phi_bb76_8, phi_bb76_10});
  }

  TNode<Smi> phi_bb74_7;
  TNode<Smi> phi_bb74_8;
  TNode<Number> phi_bb74_10;
  TNode<Smi> tmp79;
  TNode<Smi> tmp80;
  TNode<Smi> tmp81;
  TNode<Object> tmp82;
  TNode<IntPtrT> tmp83;
  TNode<IntPtrT> tmp84;
  TNode<Smi> tmp85;
  TNode<IntPtrT> tmp86;
  TNode<UintPtrT> tmp87;
  TNode<UintPtrT> tmp88;
  TNode<BoolT> tmp89;
  if (block74.is_used()) {
    ca_.Bind(&block74, &phi_bb74_7, &phi_bb74_8, &phi_bb74_10);
    tmp79 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb74_8}, TNode<Smi>{phi_bb74_7});
    tmp80 = CodeStubAssembler(state_).SmiSar(TNode<Smi>{tmp79}, (FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull))));
    tmp81 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb74_7}, TNode<Smi>{tmp80});
    std::tie(tmp82, tmp83, tmp84) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter2}).Flatten();
    tmp85 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{parameter4}, TNode<Smi>{tmp81});
    tmp86 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp85});
    tmp87 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp86});
    tmp88 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp84});
    tmp89 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp87}, TNode<UintPtrT>{tmp88});
    ca_.Branch(tmp89, &block81, std::vector<compiler::Node*>{phi_bb74_7, phi_bb74_8, phi_bb74_10}, &block82, std::vector<compiler::Node*>{phi_bb74_7, phi_bb74_8, phi_bb74_10});
  }

  TNode<Smi> phi_bb81_7;
  TNode<Smi> phi_bb81_8;
  TNode<Number> phi_bb81_10;
  TNode<IntPtrT> tmp90;
  TNode<IntPtrT> tmp91;
  TNode<Object> tmp92;
  TNode<IntPtrT> tmp93;
  TNode<Object> tmp94;
  TNode<Object> tmp95;
  TNode<Number> tmp96;
  TNode<Number> tmp97;
  TNode<BoolT> tmp98;
  if (block81.is_used()) {
    ca_.Bind(&block81, &phi_bb81_7, &phi_bb81_8, &phi_bb81_10);
    tmp90 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp86});
    tmp91 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp83}, TNode<IntPtrT>{tmp90});
    std::tie(tmp92, tmp93) = NewReference_Object_0(state_, TNode<Object>{tmp82}, TNode<IntPtrT>{tmp91}).Flatten();
    tmp94 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp92, tmp93});
    tmp95 = UnsafeCast_JSAny_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp94});
    tmp96 = Method_SortState_Compare_0(state_, TNode<Context>{parameter0}, TNode<SortState>{parameter1}, TNode<Object>{tmp95}, TNode<Object>{parameter3});
    tmp97 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp98 = NumberIsLessThan_0(state_, TNode<Number>{tmp96}, TNode<Number>{tmp97});
    ca_.Branch(tmp98, &block85, std::vector<compiler::Node*>{phi_bb81_7, phi_bb81_8}, &block86, std::vector<compiler::Node*>{phi_bb81_7, phi_bb81_8});
  }

  TNode<Smi> phi_bb82_7;
  TNode<Smi> phi_bb82_8;
  TNode<Number> phi_bb82_10;
  if (block82.is_used()) {
    ca_.Bind(&block82, &phi_bb82_7, &phi_bb82_8, &phi_bb82_10);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb85_7;
  TNode<Smi> phi_bb85_8;
  TNode<Smi> tmp99;
  TNode<Smi> tmp100;
  if (block85.is_used()) {
    ca_.Bind(&block85, &phi_bb85_7, &phi_bb85_8);
    tmp99 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp100 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp81}, TNode<Smi>{tmp99});
    ca_.Goto(&block87, tmp100, phi_bb85_8);
  }

  TNode<Smi> phi_bb86_7;
  TNode<Smi> phi_bb86_8;
  if (block86.is_used()) {
    ca_.Bind(&block86, &phi_bb86_7, &phi_bb86_8);
    ca_.Goto(&block87, phi_bb86_7, tmp81);
  }

  TNode<Smi> phi_bb87_7;
  TNode<Smi> phi_bb87_8;
  if (block87.is_used()) {
    ca_.Bind(&block87, &phi_bb87_7, &phi_bb87_8);
    ca_.Goto(&block76, phi_bb87_7, phi_bb87_8, tmp96);
  }

  TNode<Smi> phi_bb75_7;
  TNode<Smi> phi_bb75_8;
  TNode<Number> phi_bb75_10;
  if (block75.is_used()) {
    ca_.Bind(&block75, &phi_bb75_7, &phi_bb75_8, &phi_bb75_10);
    CodeStubAssembler(state_).Return(phi_bb75_8);
  }
}

TF_BUILTIN(GallopRight, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<SortState> parameter1 = UncheckedParameter<SortState>(Descriptor::kSortState);
  USE(parameter1);
  TNode<FixedArray> parameter2 = UncheckedParameter<FixedArray>(Descriptor::kArray);
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kKey);
  USE(parameter3);
  TNode<Smi> parameter4 = UncheckedParameter<Smi>(Descriptor::kBase);
  USE(parameter4);
  TNode<Smi> parameter5 = UncheckedParameter<Smi>(Descriptor::kLength);
  USE(parameter5);
  TNode<Smi> parameter6 = UncheckedParameter<Smi>(Descriptor::kHint);
  USE(parameter6);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block72(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block70(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block77(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block78(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block81(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block82(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block83(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Number> block71(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<Smi> tmp1;
  TNode<Object> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Smi> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<UintPtrT> tmp7;
  TNode<UintPtrT> tmp8;
  TNode<BoolT> tmp9;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    std::tie(tmp2, tmp3, tmp4) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter2}).Flatten();
    tmp5 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{parameter4}, TNode<Smi>{parameter6});
    tmp6 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp5});
    tmp7 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp6});
    tmp8 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp4});
    tmp9 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp7}, TNode<UintPtrT>{tmp8});
    ca_.Branch(tmp9, &block19, std::vector<compiler::Node*>{}, &block20, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<Object> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<Object> tmp14;
  TNode<Object> tmp15;
  TNode<Number> tmp16;
  TNode<Number> tmp17;
  TNode<BoolT> tmp18;
  if (block19.is_used()) {
    ca_.Bind(&block19);
    tmp10 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp6});
    tmp11 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp10});
    std::tie(tmp12, tmp13) = NewReference_Object_0(state_, TNode<Object>{tmp2}, TNode<IntPtrT>{tmp11}).Flatten();
    tmp14 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp12, tmp13});
    tmp15 = UnsafeCast_JSAny_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp14});
    tmp16 = Method_SortState_Compare_0(state_, TNode<Context>{parameter0}, TNode<SortState>{parameter1}, TNode<Object>{parameter3}, TNode<Object>{tmp15});
    tmp17 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp18 = NumberIsLessThan_0(state_, TNode<Number>{tmp16}, TNode<Number>{tmp17});
    ca_.Branch(tmp18, &block23, std::vector<compiler::Node*>{}, &block24, std::vector<compiler::Node*>{});
  }

  if (block20.is_used()) {
    ca_.Bind(&block20);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> tmp19;
  TNode<Smi> tmp20;
  if (block23.is_used()) {
    ca_.Bind(&block23);
    tmp19 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp20 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{parameter6}, TNode<Smi>{tmp19});
    ca_.Goto(&block28, tmp0, tmp1, tmp16);
  }

  TNode<Smi> phi_bb28_7;
  TNode<Smi> phi_bb28_8;
  TNode<Number> phi_bb28_10;
  TNode<BoolT> tmp21;
  if (block28.is_used()) {
    ca_.Bind(&block28, &phi_bb28_7, &phi_bb28_8, &phi_bb28_10);
    tmp21 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb28_8}, TNode<Smi>{tmp20});
    ca_.Branch(tmp21, &block26, std::vector<compiler::Node*>{phi_bb28_7, phi_bb28_8, phi_bb28_10}, &block27, std::vector<compiler::Node*>{phi_bb28_7, phi_bb28_8, phi_bb28_10});
  }

  TNode<Smi> phi_bb26_7;
  TNode<Smi> phi_bb26_8;
  TNode<Number> phi_bb26_10;
  TNode<Object> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<IntPtrT> tmp24;
  TNode<Smi> tmp25;
  TNode<Smi> tmp26;
  TNode<IntPtrT> tmp27;
  TNode<UintPtrT> tmp28;
  TNode<UintPtrT> tmp29;
  TNode<BoolT> tmp30;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_7, &phi_bb26_8, &phi_bb26_10);
    std::tie(tmp22, tmp23, tmp24) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter2}).Flatten();
    tmp25 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{parameter4}, TNode<Smi>{parameter6});
    tmp26 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp25}, TNode<Smi>{phi_bb26_8});
    tmp27 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp26});
    tmp28 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp27});
    tmp29 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp24});
    tmp30 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp28}, TNode<UintPtrT>{tmp29});
    ca_.Branch(tmp30, &block33, std::vector<compiler::Node*>{phi_bb26_7, phi_bb26_8, phi_bb26_10}, &block34, std::vector<compiler::Node*>{phi_bb26_7, phi_bb26_8, phi_bb26_10});
  }

  TNode<Smi> phi_bb33_7;
  TNode<Smi> phi_bb33_8;
  TNode<Number> phi_bb33_10;
  TNode<IntPtrT> tmp31;
  TNode<IntPtrT> tmp32;
  TNode<Object> tmp33;
  TNode<IntPtrT> tmp34;
  TNode<Object> tmp35;
  TNode<Object> tmp36;
  TNode<Number> tmp37;
  TNode<Number> tmp38;
  TNode<BoolT> tmp39;
  if (block33.is_used()) {
    ca_.Bind(&block33, &phi_bb33_7, &phi_bb33_8, &phi_bb33_10);
    tmp31 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp27});
    tmp32 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp23}, TNode<IntPtrT>{tmp31});
    std::tie(tmp33, tmp34) = NewReference_Object_0(state_, TNode<Object>{tmp22}, TNode<IntPtrT>{tmp32}).Flatten();
    tmp35 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp33, tmp34});
    tmp36 = UnsafeCast_JSAny_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp35});
    tmp37 = Method_SortState_Compare_0(state_, TNode<Context>{parameter0}, TNode<SortState>{parameter1}, TNode<Object>{parameter3}, TNode<Object>{tmp36});
    tmp38 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp39 = NumberIsGreaterThanOrEqual_0(state_, TNode<Number>{tmp37}, TNode<Number>{tmp38});
    ca_.Branch(tmp39, &block37, std::vector<compiler::Node*>{phi_bb33_7, phi_bb33_8}, &block38, std::vector<compiler::Node*>{phi_bb33_7, phi_bb33_8});
  }

  TNode<Smi> phi_bb34_7;
  TNode<Smi> phi_bb34_8;
  TNode<Number> phi_bb34_10;
  if (block34.is_used()) {
    ca_.Bind(&block34, &phi_bb34_7, &phi_bb34_8, &phi_bb34_10);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb37_7;
  TNode<Smi> phi_bb37_8;
  if (block37.is_used()) {
    ca_.Bind(&block37, &phi_bb37_7, &phi_bb37_8);
    ca_.Goto(&block27, phi_bb37_7, phi_bb37_8, tmp37);
  }

  TNode<Smi> phi_bb38_7;
  TNode<Smi> phi_bb38_8;
  TNode<Smi> tmp40;
  TNode<Smi> tmp41;
  TNode<Smi> tmp42;
  TNode<Smi> tmp43;
  TNode<BoolT> tmp44;
  if (block38.is_used()) {
    ca_.Bind(&block38, &phi_bb38_7, &phi_bb38_8);
    tmp40 = CodeStubAssembler(state_).SmiShl(TNode<Smi>{phi_bb38_8}, (FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull))));
    tmp41 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp42 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp40}, TNode<Smi>{tmp41});
    tmp43 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp44 = CodeStubAssembler(state_).SmiLessThanOrEqual(TNode<Smi>{tmp42}, TNode<Smi>{tmp43});
    ca_.Branch(tmp44, &block39, std::vector<compiler::Node*>{phi_bb38_8}, &block40, std::vector<compiler::Node*>{phi_bb38_8, tmp42});
  }

  TNode<Smi> phi_bb39_7;
  if (block39.is_used()) {
    ca_.Bind(&block39, &phi_bb39_7);
    ca_.Goto(&block40, phi_bb39_7, tmp20);
  }

  TNode<Smi> phi_bb40_7;
  TNode<Smi> phi_bb40_8;
  if (block40.is_used()) {
    ca_.Bind(&block40, &phi_bb40_7, &phi_bb40_8);
    ca_.Goto(&block28, phi_bb40_7, phi_bb40_8, tmp37);
  }

  TNode<Smi> phi_bb27_7;
  TNode<Smi> phi_bb27_8;
  TNode<Number> phi_bb27_10;
  TNode<BoolT> tmp45;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_7, &phi_bb27_8, &phi_bb27_10);
    tmp45 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{phi_bb27_8}, TNode<Smi>{tmp20});
    ca_.Branch(tmp45, &block41, std::vector<compiler::Node*>{phi_bb27_7, phi_bb27_8, phi_bb27_10}, &block42, std::vector<compiler::Node*>{phi_bb27_7, phi_bb27_8, phi_bb27_10});
  }

  TNode<Smi> phi_bb41_7;
  TNode<Smi> phi_bb41_8;
  TNode<Number> phi_bb41_10;
  if (block41.is_used()) {
    ca_.Bind(&block41, &phi_bb41_7, &phi_bb41_8, &phi_bb41_10);
    ca_.Goto(&block42, phi_bb41_7, tmp20, phi_bb41_10);
  }

  TNode<Smi> phi_bb42_7;
  TNode<Smi> phi_bb42_8;
  TNode<Number> phi_bb42_10;
  TNode<Smi> tmp46;
  TNode<Smi> tmp47;
  if (block42.is_used()) {
    ca_.Bind(&block42, &phi_bb42_7, &phi_bb42_8, &phi_bb42_10);
    tmp46 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{parameter6}, TNode<Smi>{phi_bb42_8});
    tmp47 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{parameter6}, TNode<Smi>{phi_bb42_7});
    ca_.Goto(&block25, tmp46, tmp47, phi_bb42_10);
  }

  TNode<Smi> tmp48;
  if (block24.is_used()) {
    ca_.Bind(&block24);
    tmp48 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{parameter5}, TNode<Smi>{parameter6});
    ca_.Goto(&block45, tmp0, tmp1, tmp16);
  }

  TNode<Smi> phi_bb45_7;
  TNode<Smi> phi_bb45_8;
  TNode<Number> phi_bb45_10;
  TNode<BoolT> tmp49;
  if (block45.is_used()) {
    ca_.Bind(&block45, &phi_bb45_7, &phi_bb45_8, &phi_bb45_10);
    tmp49 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb45_8}, TNode<Smi>{tmp48});
    ca_.Branch(tmp49, &block43, std::vector<compiler::Node*>{phi_bb45_7, phi_bb45_8, phi_bb45_10}, &block44, std::vector<compiler::Node*>{phi_bb45_7, phi_bb45_8, phi_bb45_10});
  }

  TNode<Smi> phi_bb43_7;
  TNode<Smi> phi_bb43_8;
  TNode<Number> phi_bb43_10;
  TNode<Object> tmp50;
  TNode<IntPtrT> tmp51;
  TNode<IntPtrT> tmp52;
  TNode<Smi> tmp53;
  TNode<Smi> tmp54;
  TNode<IntPtrT> tmp55;
  TNode<UintPtrT> tmp56;
  TNode<UintPtrT> tmp57;
  TNode<BoolT> tmp58;
  if (block43.is_used()) {
    ca_.Bind(&block43, &phi_bb43_7, &phi_bb43_8, &phi_bb43_10);
    std::tie(tmp50, tmp51, tmp52) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter2}).Flatten();
    tmp53 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{parameter4}, TNode<Smi>{parameter6});
    tmp54 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp53}, TNode<Smi>{phi_bb43_8});
    tmp55 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp54});
    tmp56 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp55});
    tmp57 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp52});
    tmp58 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp56}, TNode<UintPtrT>{tmp57});
    ca_.Branch(tmp58, &block50, std::vector<compiler::Node*>{phi_bb43_7, phi_bb43_8, phi_bb43_10}, &block51, std::vector<compiler::Node*>{phi_bb43_7, phi_bb43_8, phi_bb43_10});
  }

  TNode<Smi> phi_bb50_7;
  TNode<Smi> phi_bb50_8;
  TNode<Number> phi_bb50_10;
  TNode<IntPtrT> tmp59;
  TNode<IntPtrT> tmp60;
  TNode<Object> tmp61;
  TNode<IntPtrT> tmp62;
  TNode<Object> tmp63;
  TNode<Object> tmp64;
  TNode<Number> tmp65;
  TNode<Number> tmp66;
  TNode<BoolT> tmp67;
  if (block50.is_used()) {
    ca_.Bind(&block50, &phi_bb50_7, &phi_bb50_8, &phi_bb50_10);
    tmp59 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp55});
    tmp60 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp51}, TNode<IntPtrT>{tmp59});
    std::tie(tmp61, tmp62) = NewReference_Object_0(state_, TNode<Object>{tmp50}, TNode<IntPtrT>{tmp60}).Flatten();
    tmp63 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp61, tmp62});
    tmp64 = UnsafeCast_JSAny_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp63});
    tmp65 = Method_SortState_Compare_0(state_, TNode<Context>{parameter0}, TNode<SortState>{parameter1}, TNode<Object>{parameter3}, TNode<Object>{tmp64});
    tmp66 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp67 = NumberIsLessThan_0(state_, TNode<Number>{tmp65}, TNode<Number>{tmp66});
    ca_.Branch(tmp67, &block54, std::vector<compiler::Node*>{phi_bb50_7, phi_bb50_8}, &block55, std::vector<compiler::Node*>{phi_bb50_7, phi_bb50_8});
  }

  TNode<Smi> phi_bb51_7;
  TNode<Smi> phi_bb51_8;
  TNode<Number> phi_bb51_10;
  if (block51.is_used()) {
    ca_.Bind(&block51, &phi_bb51_7, &phi_bb51_8, &phi_bb51_10);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb54_7;
  TNode<Smi> phi_bb54_8;
  if (block54.is_used()) {
    ca_.Bind(&block54, &phi_bb54_7, &phi_bb54_8);
    ca_.Goto(&block44, phi_bb54_7, phi_bb54_8, tmp65);
  }

  TNode<Smi> phi_bb55_7;
  TNode<Smi> phi_bb55_8;
  TNode<Smi> tmp68;
  TNode<Smi> tmp69;
  TNode<Smi> tmp70;
  TNode<Smi> tmp71;
  TNode<BoolT> tmp72;
  if (block55.is_used()) {
    ca_.Bind(&block55, &phi_bb55_7, &phi_bb55_8);
    tmp68 = CodeStubAssembler(state_).SmiShl(TNode<Smi>{phi_bb55_8}, (FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull))));
    tmp69 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp70 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp68}, TNode<Smi>{tmp69});
    tmp71 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp72 = CodeStubAssembler(state_).SmiLessThanOrEqual(TNode<Smi>{tmp70}, TNode<Smi>{tmp71});
    ca_.Branch(tmp72, &block56, std::vector<compiler::Node*>{phi_bb55_8}, &block57, std::vector<compiler::Node*>{phi_bb55_8, tmp70});
  }

  TNode<Smi> phi_bb56_7;
  if (block56.is_used()) {
    ca_.Bind(&block56, &phi_bb56_7);
    ca_.Goto(&block57, phi_bb56_7, tmp48);
  }

  TNode<Smi> phi_bb57_7;
  TNode<Smi> phi_bb57_8;
  if (block57.is_used()) {
    ca_.Bind(&block57, &phi_bb57_7, &phi_bb57_8);
    ca_.Goto(&block45, phi_bb57_7, phi_bb57_8, tmp65);
  }

  TNode<Smi> phi_bb44_7;
  TNode<Smi> phi_bb44_8;
  TNode<Number> phi_bb44_10;
  TNode<BoolT> tmp73;
  if (block44.is_used()) {
    ca_.Bind(&block44, &phi_bb44_7, &phi_bb44_8, &phi_bb44_10);
    tmp73 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{phi_bb44_8}, TNode<Smi>{tmp48});
    ca_.Branch(tmp73, &block58, std::vector<compiler::Node*>{phi_bb44_7, phi_bb44_8, phi_bb44_10}, &block59, std::vector<compiler::Node*>{phi_bb44_7, phi_bb44_8, phi_bb44_10});
  }

  TNode<Smi> phi_bb58_7;
  TNode<Smi> phi_bb58_8;
  TNode<Number> phi_bb58_10;
  if (block58.is_used()) {
    ca_.Bind(&block58, &phi_bb58_7, &phi_bb58_8, &phi_bb58_10);
    ca_.Goto(&block59, phi_bb58_7, tmp48, phi_bb58_10);
  }

  TNode<Smi> phi_bb59_7;
  TNode<Smi> phi_bb59_8;
  TNode<Number> phi_bb59_10;
  TNode<Smi> tmp74;
  TNode<Smi> tmp75;
  if (block59.is_used()) {
    ca_.Bind(&block59, &phi_bb59_7, &phi_bb59_8, &phi_bb59_10);
    tmp74 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb59_7}, TNode<Smi>{parameter6});
    tmp75 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb59_8}, TNode<Smi>{parameter6});
    ca_.Goto(&block25, tmp74, tmp75, phi_bb59_10);
  }

  TNode<Smi> phi_bb25_7;
  TNode<Smi> phi_bb25_8;
  TNode<Number> phi_bb25_10;
  TNode<Smi> tmp76;
  TNode<Smi> tmp77;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_7, &phi_bb25_8, &phi_bb25_10);
    tmp76 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp77 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb25_7}, TNode<Smi>{tmp76});
    ca_.Goto(&block72, tmp77, phi_bb25_8, phi_bb25_10);
  }

  TNode<Smi> phi_bb72_7;
  TNode<Smi> phi_bb72_8;
  TNode<Number> phi_bb72_10;
  TNode<BoolT> tmp78;
  if (block72.is_used()) {
    ca_.Bind(&block72, &phi_bb72_7, &phi_bb72_8, &phi_bb72_10);
    tmp78 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb72_7}, TNode<Smi>{phi_bb72_8});
    ca_.Branch(tmp78, &block70, std::vector<compiler::Node*>{phi_bb72_7, phi_bb72_8, phi_bb72_10}, &block71, std::vector<compiler::Node*>{phi_bb72_7, phi_bb72_8, phi_bb72_10});
  }

  TNode<Smi> phi_bb70_7;
  TNode<Smi> phi_bb70_8;
  TNode<Number> phi_bb70_10;
  TNode<Smi> tmp79;
  TNode<Smi> tmp80;
  TNode<Smi> tmp81;
  TNode<Object> tmp82;
  TNode<IntPtrT> tmp83;
  TNode<IntPtrT> tmp84;
  TNode<Smi> tmp85;
  TNode<IntPtrT> tmp86;
  TNode<UintPtrT> tmp87;
  TNode<UintPtrT> tmp88;
  TNode<BoolT> tmp89;
  if (block70.is_used()) {
    ca_.Bind(&block70, &phi_bb70_7, &phi_bb70_8, &phi_bb70_10);
    tmp79 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb70_8}, TNode<Smi>{phi_bb70_7});
    tmp80 = CodeStubAssembler(state_).SmiSar(TNode<Smi>{tmp79}, (FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull))));
    tmp81 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb70_7}, TNode<Smi>{tmp80});
    std::tie(tmp82, tmp83, tmp84) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter2}).Flatten();
    tmp85 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{parameter4}, TNode<Smi>{tmp81});
    tmp86 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp85});
    tmp87 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp86});
    tmp88 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp84});
    tmp89 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp87}, TNode<UintPtrT>{tmp88});
    ca_.Branch(tmp89, &block77, std::vector<compiler::Node*>{phi_bb70_7, phi_bb70_8, phi_bb70_10}, &block78, std::vector<compiler::Node*>{phi_bb70_7, phi_bb70_8, phi_bb70_10});
  }

  TNode<Smi> phi_bb77_7;
  TNode<Smi> phi_bb77_8;
  TNode<Number> phi_bb77_10;
  TNode<IntPtrT> tmp90;
  TNode<IntPtrT> tmp91;
  TNode<Object> tmp92;
  TNode<IntPtrT> tmp93;
  TNode<Object> tmp94;
  TNode<Object> tmp95;
  TNode<Number> tmp96;
  TNode<Number> tmp97;
  TNode<BoolT> tmp98;
  if (block77.is_used()) {
    ca_.Bind(&block77, &phi_bb77_7, &phi_bb77_8, &phi_bb77_10);
    tmp90 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp86});
    tmp91 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp83}, TNode<IntPtrT>{tmp90});
    std::tie(tmp92, tmp93) = NewReference_Object_0(state_, TNode<Object>{tmp82}, TNode<IntPtrT>{tmp91}).Flatten();
    tmp94 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp92, tmp93});
    tmp95 = UnsafeCast_JSAny_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp94});
    tmp96 = Method_SortState_Compare_0(state_, TNode<Context>{parameter0}, TNode<SortState>{parameter1}, TNode<Object>{parameter3}, TNode<Object>{tmp95});
    tmp97 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp98 = NumberIsLessThan_0(state_, TNode<Number>{tmp96}, TNode<Number>{tmp97});
    ca_.Branch(tmp98, &block81, std::vector<compiler::Node*>{phi_bb77_7, phi_bb77_8}, &block82, std::vector<compiler::Node*>{phi_bb77_7, phi_bb77_8});
  }

  TNode<Smi> phi_bb78_7;
  TNode<Smi> phi_bb78_8;
  TNode<Number> phi_bb78_10;
  if (block78.is_used()) {
    ca_.Bind(&block78, &phi_bb78_7, &phi_bb78_8, &phi_bb78_10);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb81_7;
  TNode<Smi> phi_bb81_8;
  if (block81.is_used()) {
    ca_.Bind(&block81, &phi_bb81_7, &phi_bb81_8);
    ca_.Goto(&block83, phi_bb81_7, tmp81);
  }

  TNode<Smi> phi_bb82_7;
  TNode<Smi> phi_bb82_8;
  TNode<Smi> tmp99;
  TNode<Smi> tmp100;
  if (block82.is_used()) {
    ca_.Bind(&block82, &phi_bb82_7, &phi_bb82_8);
    tmp99 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp100 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp81}, TNode<Smi>{tmp99});
    ca_.Goto(&block83, tmp100, phi_bb82_8);
  }

  TNode<Smi> phi_bb83_7;
  TNode<Smi> phi_bb83_8;
  if (block83.is_used()) {
    ca_.Bind(&block83, &phi_bb83_7, &phi_bb83_8);
    ca_.Goto(&block72, phi_bb83_7, phi_bb83_8, tmp96);
  }

  TNode<Smi> phi_bb71_7;
  TNode<Smi> phi_bb71_8;
  TNode<Number> phi_bb71_10;
  if (block71.is_used()) {
    ca_.Bind(&block71, &phi_bb71_7, &phi_bb71_8, &phi_bb71_10);
    CodeStubAssembler(state_).Return(phi_bb71_8);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=892&c=1
void MergeLow_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState, TNode<Smi> p_baseA, TNode<Smi> p_lengthAArg, TNode<Smi> p_baseB, TNode<Smi> p_lengthBArg) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block69(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block70(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block73(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block80(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block81(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block88(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block89(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block92(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block93(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block94(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block95(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block74(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block100(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block101(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block108(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block109(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block112(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block113(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block114(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block115(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block75(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, BoolT> block118(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, BoolT> block119(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, BoolT> block120(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, BoolT, BoolT> block121(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, BoolT> block122(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, BoolT> block123(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, BoolT, BoolT> block124(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, BoolT> block116(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block136(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block137(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi> block144(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block146(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block147(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block148(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block149(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi> block145(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi> block154(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi> block155(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block162(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block163(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block166(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block167(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi> block172(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi> block173(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block180(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block182(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block183(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi> block181(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi> block188(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi> block189(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi> block196(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi> block197(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block200(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block201(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, BoolT> block117(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi> block202(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi> block203(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi> block215(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi> block216(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi> block223(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi> block224(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block227(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<FixedArray> tmp1;
  TNode<FixedArray> tmp2;
  TNode<Smi> tmp3;
  TNode<Object> tmp4;
  TNode<Smi> tmp5;
  TNode<Object> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<Smi> tmp9;
  TNode<Smi> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<UintPtrT> tmp12;
  TNode<UintPtrT> tmp13;
  TNode<BoolT> tmp14;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 52);
    tmp1 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{p_sortState, tmp0});
    tmp2 = GetTempArray_0(state_, TNode<Context>{p_context}, TNode<SortState>{p_sortState}, TNode<Smi>{p_lengthAArg});
    tmp3 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp4 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kCopy), p_context, tmp1, p_baseA, tmp2, tmp3, p_lengthAArg);
    tmp5 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    std::tie(tmp6, tmp7, tmp8) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp9 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp10 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{p_baseA}, TNode<Smi>{tmp9});
    tmp11 = Convert_intptr_Smi_0(state_, TNode<Smi>{p_baseA});
    tmp12 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp11});
    tmp13 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp8});
    tmp14 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp12}, TNode<UintPtrT>{tmp13});
    ca_.Branch(tmp14, &block24, std::vector<compiler::Node*>{}, &block25, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp15;
  TNode<IntPtrT> tmp16;
  TNode<Object> tmp17;
  TNode<IntPtrT> tmp18;
  TNode<Object> tmp19;
  TNode<IntPtrT> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<Smi> tmp22;
  TNode<Smi> tmp23;
  TNode<IntPtrT> tmp24;
  TNode<UintPtrT> tmp25;
  TNode<UintPtrT> tmp26;
  TNode<BoolT> tmp27;
  if (block24.is_used()) {
    ca_.Bind(&block24);
    tmp15 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp11});
    tmp16 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp7}, TNode<IntPtrT>{tmp15});
    std::tie(tmp17, tmp18) = NewReference_Object_0(state_, TNode<Object>{tmp6}, TNode<IntPtrT>{tmp16}).Flatten();
    std::tie(tmp19, tmp20, tmp21) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp22 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp23 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{p_baseB}, TNode<Smi>{tmp22});
    tmp24 = Convert_intptr_Smi_0(state_, TNode<Smi>{p_baseB});
    tmp25 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp24});
    tmp26 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp21});
    tmp27 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp25}, TNode<UintPtrT>{tmp26});
    ca_.Branch(tmp27, &block32, std::vector<compiler::Node*>{}, &block33, std::vector<compiler::Node*>{});
  }

  if (block25.is_used()) {
    ca_.Bind(&block25);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp28;
  TNode<IntPtrT> tmp29;
  TNode<Object> tmp30;
  TNode<IntPtrT> tmp31;
  TNode<Object> tmp32;
  TNode<Smi> tmp33;
  TNode<Smi> tmp34;
  TNode<Smi> tmp35;
  TNode<BoolT> tmp36;
  if (block32.is_used()) {
    ca_.Bind(&block32);
    tmp28 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp24});
    tmp29 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp20}, TNode<IntPtrT>{tmp28});
    std::tie(tmp30, tmp31) = NewReference_Object_0(state_, TNode<Object>{tmp19}, TNode<IntPtrT>{tmp29}).Flatten();
    tmp32 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp30, tmp31});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp17, tmp18}, tmp32);
    tmp33 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp34 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{p_lengthBArg}, TNode<Smi>{tmp33});
    tmp35 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp36 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp34}, TNode<Smi>{tmp35});
    ca_.Branch(tmp36, &block40, std::vector<compiler::Node*>{}, &block41, std::vector<compiler::Node*>{});
  }

  if (block33.is_used()) {
    ca_.Bind(&block33);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block40.is_used()) {
    ca_.Bind(&block40);
    ca_.Goto(&block39, p_lengthAArg, tmp34, tmp10, tmp5, tmp23);
  }

  TNode<Smi> tmp37;
  TNode<BoolT> tmp38;
  if (block41.is_used()) {
    ca_.Bind(&block41);
    tmp37 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp38 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{p_lengthAArg}, TNode<Smi>{tmp37});
    ca_.Branch(tmp38, &block42, std::vector<compiler::Node*>{}, &block43, std::vector<compiler::Node*>{});
  }

  if (block42.is_used()) {
    ca_.Bind(&block42);
    ca_.Goto(&block37, p_lengthAArg, tmp34, tmp10, tmp5, tmp23);
  }

  TNode<IntPtrT> tmp39;
  TNode<Smi> tmp40;
  if (block43.is_used()) {
    ca_.Bind(&block43);
    tmp39 = FromConstexpr_intptr_constexpr_int31_0(state_, 40);
    tmp40 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_sortState, tmp39});
    ca_.Goto(&block46, p_lengthAArg, tmp34, tmp10, tmp5, tmp23, tmp40);
  }

  TNode<Smi> phi_bb46_6;
  TNode<Smi> phi_bb46_7;
  TNode<Smi> phi_bb46_10;
  TNode<Smi> phi_bb46_11;
  TNode<Smi> phi_bb46_12;
  TNode<Smi> phi_bb46_13;
  TNode<BoolT> tmp41;
  if (block46.is_used()) {
    ca_.Bind(&block46, &phi_bb46_6, &phi_bb46_7, &phi_bb46_10, &phi_bb46_11, &phi_bb46_12, &phi_bb46_13);
    tmp41 = CodeStubAssembler(state_).Int32TrueConstant();
    ca_.Branch(tmp41, &block44, std::vector<compiler::Node*>{phi_bb46_6, phi_bb46_7, phi_bb46_10, phi_bb46_11, phi_bb46_12, phi_bb46_13}, &block45, std::vector<compiler::Node*>{phi_bb46_6, phi_bb46_7, phi_bb46_10, phi_bb46_11, phi_bb46_12, phi_bb46_13});
  }

  TNode<Smi> phi_bb44_6;
  TNode<Smi> phi_bb44_7;
  TNode<Smi> phi_bb44_10;
  TNode<Smi> phi_bb44_11;
  TNode<Smi> phi_bb44_12;
  TNode<Smi> phi_bb44_13;
  TNode<Smi> tmp42;
  TNode<Smi> tmp43;
  if (block44.is_used()) {
    ca_.Bind(&block44, &phi_bb44_6, &phi_bb44_7, &phi_bb44_10, &phi_bb44_11, &phi_bb44_12, &phi_bb44_13);
    tmp42 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp43 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block49, phi_bb44_6, phi_bb44_7, phi_bb44_10, phi_bb44_11, phi_bb44_12, phi_bb44_13, tmp42, tmp43);
  }

  TNode<Smi> phi_bb49_6;
  TNode<Smi> phi_bb49_7;
  TNode<Smi> phi_bb49_10;
  TNode<Smi> phi_bb49_11;
  TNode<Smi> phi_bb49_12;
  TNode<Smi> phi_bb49_13;
  TNode<Smi> phi_bb49_14;
  TNode<Smi> phi_bb49_15;
  TNode<BoolT> tmp44;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_6, &phi_bb49_7, &phi_bb49_10, &phi_bb49_11, &phi_bb49_12, &phi_bb49_13, &phi_bb49_14, &phi_bb49_15);
    tmp44 = CodeStubAssembler(state_).Int32TrueConstant();
    ca_.Branch(tmp44, &block47, std::vector<compiler::Node*>{phi_bb49_6, phi_bb49_7, phi_bb49_10, phi_bb49_11, phi_bb49_12, phi_bb49_13, phi_bb49_14, phi_bb49_15}, &block48, std::vector<compiler::Node*>{phi_bb49_6, phi_bb49_7, phi_bb49_10, phi_bb49_11, phi_bb49_12, phi_bb49_13, phi_bb49_14, phi_bb49_15});
  }

  TNode<Smi> phi_bb47_6;
  TNode<Smi> phi_bb47_7;
  TNode<Smi> phi_bb47_10;
  TNode<Smi> phi_bb47_11;
  TNode<Smi> phi_bb47_12;
  TNode<Smi> phi_bb47_13;
  TNode<Smi> phi_bb47_14;
  TNode<Smi> phi_bb47_15;
  TNode<Object> tmp45;
  TNode<IntPtrT> tmp46;
  TNode<IntPtrT> tmp47;
  TNode<IntPtrT> tmp48;
  TNode<UintPtrT> tmp49;
  TNode<UintPtrT> tmp50;
  TNode<BoolT> tmp51;
  if (block47.is_used()) {
    ca_.Bind(&block47, &phi_bb47_6, &phi_bb47_7, &phi_bb47_10, &phi_bb47_11, &phi_bb47_12, &phi_bb47_13, &phi_bb47_14, &phi_bb47_15);
    std::tie(tmp45, tmp46, tmp47) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp48 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb47_12});
    tmp49 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp48});
    tmp50 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp47});
    tmp51 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp49}, TNode<UintPtrT>{tmp50});
    ca_.Branch(tmp51, &block61, std::vector<compiler::Node*>{phi_bb47_6, phi_bb47_7, phi_bb47_10, phi_bb47_11, phi_bb47_12, phi_bb47_13, phi_bb47_14, phi_bb47_15, phi_bb47_12, phi_bb47_12}, &block62, std::vector<compiler::Node*>{phi_bb47_6, phi_bb47_7, phi_bb47_10, phi_bb47_11, phi_bb47_12, phi_bb47_13, phi_bb47_14, phi_bb47_15, phi_bb47_12, phi_bb47_12});
  }

  TNode<Smi> phi_bb61_6;
  TNode<Smi> phi_bb61_7;
  TNode<Smi> phi_bb61_10;
  TNode<Smi> phi_bb61_11;
  TNode<Smi> phi_bb61_12;
  TNode<Smi> phi_bb61_13;
  TNode<Smi> phi_bb61_14;
  TNode<Smi> phi_bb61_15;
  TNode<Smi> phi_bb61_21;
  TNode<Smi> phi_bb61_22;
  TNode<IntPtrT> tmp52;
  TNode<IntPtrT> tmp53;
  TNode<Object> tmp54;
  TNode<IntPtrT> tmp55;
  TNode<Object> tmp56;
  TNode<Object> tmp57;
  TNode<Object> tmp58;
  TNode<IntPtrT> tmp59;
  TNode<IntPtrT> tmp60;
  TNode<IntPtrT> tmp61;
  TNode<UintPtrT> tmp62;
  TNode<UintPtrT> tmp63;
  TNode<BoolT> tmp64;
  if (block61.is_used()) {
    ca_.Bind(&block61, &phi_bb61_6, &phi_bb61_7, &phi_bb61_10, &phi_bb61_11, &phi_bb61_12, &phi_bb61_13, &phi_bb61_14, &phi_bb61_15, &phi_bb61_21, &phi_bb61_22);
    tmp52 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp48});
    tmp53 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp46}, TNode<IntPtrT>{tmp52});
    std::tie(tmp54, tmp55) = NewReference_Object_0(state_, TNode<Object>{tmp45}, TNode<IntPtrT>{tmp53}).Flatten();
    tmp56 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp54, tmp55});
    tmp57 = UnsafeCast_JSAny_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp56});
    std::tie(tmp58, tmp59, tmp60) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp2}).Flatten();
    tmp61 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb61_11});
    tmp62 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp61});
    tmp63 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp60});
    tmp64 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp62}, TNode<UintPtrT>{tmp63});
    ca_.Branch(tmp64, &block69, std::vector<compiler::Node*>{phi_bb61_6, phi_bb61_7, phi_bb61_10, phi_bb61_11, phi_bb61_12, phi_bb61_13, phi_bb61_14, phi_bb61_15, phi_bb61_11, phi_bb61_11}, &block70, std::vector<compiler::Node*>{phi_bb61_6, phi_bb61_7, phi_bb61_10, phi_bb61_11, phi_bb61_12, phi_bb61_13, phi_bb61_14, phi_bb61_15, phi_bb61_11, phi_bb61_11});
  }

  TNode<Smi> phi_bb62_6;
  TNode<Smi> phi_bb62_7;
  TNode<Smi> phi_bb62_10;
  TNode<Smi> phi_bb62_11;
  TNode<Smi> phi_bb62_12;
  TNode<Smi> phi_bb62_13;
  TNode<Smi> phi_bb62_14;
  TNode<Smi> phi_bb62_15;
  TNode<Smi> phi_bb62_21;
  TNode<Smi> phi_bb62_22;
  if (block62.is_used()) {
    ca_.Bind(&block62, &phi_bb62_6, &phi_bb62_7, &phi_bb62_10, &phi_bb62_11, &phi_bb62_12, &phi_bb62_13, &phi_bb62_14, &phi_bb62_15, &phi_bb62_21, &phi_bb62_22);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb69_6;
  TNode<Smi> phi_bb69_7;
  TNode<Smi> phi_bb69_10;
  TNode<Smi> phi_bb69_11;
  TNode<Smi> phi_bb69_12;
  TNode<Smi> phi_bb69_13;
  TNode<Smi> phi_bb69_14;
  TNode<Smi> phi_bb69_15;
  TNode<Smi> phi_bb69_22;
  TNode<Smi> phi_bb69_23;
  TNode<IntPtrT> tmp65;
  TNode<IntPtrT> tmp66;
  TNode<Object> tmp67;
  TNode<IntPtrT> tmp68;
  TNode<Object> tmp69;
  TNode<Object> tmp70;
  TNode<Number> tmp71;
  TNode<Number> tmp72;
  TNode<BoolT> tmp73;
  if (block69.is_used()) {
    ca_.Bind(&block69, &phi_bb69_6, &phi_bb69_7, &phi_bb69_10, &phi_bb69_11, &phi_bb69_12, &phi_bb69_13, &phi_bb69_14, &phi_bb69_15, &phi_bb69_22, &phi_bb69_23);
    tmp65 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp61});
    tmp66 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp59}, TNode<IntPtrT>{tmp65});
    std::tie(tmp67, tmp68) = NewReference_Object_0(state_, TNode<Object>{tmp58}, TNode<IntPtrT>{tmp66}).Flatten();
    tmp69 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp67, tmp68});
    tmp70 = UnsafeCast_JSAny_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp69});
    tmp71 = Method_SortState_Compare_0(state_, TNode<Context>{p_context}, TNode<SortState>{p_sortState}, TNode<Object>{tmp57}, TNode<Object>{tmp70});
    tmp72 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp73 = NumberIsLessThan_0(state_, TNode<Number>{tmp71}, TNode<Number>{tmp72});
    ca_.Branch(tmp73, &block73, std::vector<compiler::Node*>{phi_bb69_6, phi_bb69_7, phi_bb69_10, phi_bb69_11, phi_bb69_12, phi_bb69_13, phi_bb69_14, phi_bb69_15}, &block74, std::vector<compiler::Node*>{phi_bb69_6, phi_bb69_7, phi_bb69_10, phi_bb69_11, phi_bb69_12, phi_bb69_13, phi_bb69_14, phi_bb69_15});
  }

  TNode<Smi> phi_bb70_6;
  TNode<Smi> phi_bb70_7;
  TNode<Smi> phi_bb70_10;
  TNode<Smi> phi_bb70_11;
  TNode<Smi> phi_bb70_12;
  TNode<Smi> phi_bb70_13;
  TNode<Smi> phi_bb70_14;
  TNode<Smi> phi_bb70_15;
  TNode<Smi> phi_bb70_22;
  TNode<Smi> phi_bb70_23;
  if (block70.is_used()) {
    ca_.Bind(&block70, &phi_bb70_6, &phi_bb70_7, &phi_bb70_10, &phi_bb70_11, &phi_bb70_12, &phi_bb70_13, &phi_bb70_14, &phi_bb70_15, &phi_bb70_22, &phi_bb70_23);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb73_6;
  TNode<Smi> phi_bb73_7;
  TNode<Smi> phi_bb73_10;
  TNode<Smi> phi_bb73_11;
  TNode<Smi> phi_bb73_12;
  TNode<Smi> phi_bb73_13;
  TNode<Smi> phi_bb73_14;
  TNode<Smi> phi_bb73_15;
  TNode<Object> tmp74;
  TNode<IntPtrT> tmp75;
  TNode<IntPtrT> tmp76;
  TNode<Smi> tmp77;
  TNode<Smi> tmp78;
  TNode<IntPtrT> tmp79;
  TNode<UintPtrT> tmp80;
  TNode<UintPtrT> tmp81;
  TNode<BoolT> tmp82;
  if (block73.is_used()) {
    ca_.Bind(&block73, &phi_bb73_6, &phi_bb73_7, &phi_bb73_10, &phi_bb73_11, &phi_bb73_12, &phi_bb73_13, &phi_bb73_14, &phi_bb73_15);
    std::tie(tmp74, tmp75, tmp76) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp77 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp78 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb73_10}, TNode<Smi>{tmp77});
    tmp79 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb73_10});
    tmp80 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp79});
    tmp81 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp76});
    tmp82 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp80}, TNode<UintPtrT>{tmp81});
    ca_.Branch(tmp82, &block80, std::vector<compiler::Node*>{phi_bb73_6, phi_bb73_7, phi_bb73_11, phi_bb73_12, phi_bb73_13, phi_bb73_14, phi_bb73_15, phi_bb73_10, phi_bb73_10}, &block81, std::vector<compiler::Node*>{phi_bb73_6, phi_bb73_7, phi_bb73_11, phi_bb73_12, phi_bb73_13, phi_bb73_14, phi_bb73_15, phi_bb73_10, phi_bb73_10});
  }

  TNode<Smi> phi_bb80_6;
  TNode<Smi> phi_bb80_7;
  TNode<Smi> phi_bb80_11;
  TNode<Smi> phi_bb80_12;
  TNode<Smi> phi_bb80_13;
  TNode<Smi> phi_bb80_14;
  TNode<Smi> phi_bb80_15;
  TNode<Smi> phi_bb80_21;
  TNode<Smi> phi_bb80_22;
  TNode<IntPtrT> tmp83;
  TNode<IntPtrT> tmp84;
  TNode<Object> tmp85;
  TNode<IntPtrT> tmp86;
  TNode<Object> tmp87;
  TNode<IntPtrT> tmp88;
  TNode<IntPtrT> tmp89;
  TNode<Smi> tmp90;
  TNode<Smi> tmp91;
  TNode<IntPtrT> tmp92;
  TNode<UintPtrT> tmp93;
  TNode<UintPtrT> tmp94;
  TNode<BoolT> tmp95;
  if (block80.is_used()) {
    ca_.Bind(&block80, &phi_bb80_6, &phi_bb80_7, &phi_bb80_11, &phi_bb80_12, &phi_bb80_13, &phi_bb80_14, &phi_bb80_15, &phi_bb80_21, &phi_bb80_22);
    tmp83 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp79});
    tmp84 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp75}, TNode<IntPtrT>{tmp83});
    std::tie(tmp85, tmp86) = NewReference_Object_0(state_, TNode<Object>{tmp74}, TNode<IntPtrT>{tmp84}).Flatten();
    std::tie(tmp87, tmp88, tmp89) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp90 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp91 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb80_12}, TNode<Smi>{tmp90});
    tmp92 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb80_12});
    tmp93 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp92});
    tmp94 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp89});
    tmp95 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp93}, TNode<UintPtrT>{tmp94});
    ca_.Branch(tmp95, &block88, std::vector<compiler::Node*>{phi_bb80_6, phi_bb80_7, phi_bb80_11, phi_bb80_13, phi_bb80_14, phi_bb80_15, phi_bb80_21, phi_bb80_22, phi_bb80_12, phi_bb80_12}, &block89, std::vector<compiler::Node*>{phi_bb80_6, phi_bb80_7, phi_bb80_11, phi_bb80_13, phi_bb80_14, phi_bb80_15, phi_bb80_21, phi_bb80_22, phi_bb80_12, phi_bb80_12});
  }

  TNode<Smi> phi_bb81_6;
  TNode<Smi> phi_bb81_7;
  TNode<Smi> phi_bb81_11;
  TNode<Smi> phi_bb81_12;
  TNode<Smi> phi_bb81_13;
  TNode<Smi> phi_bb81_14;
  TNode<Smi> phi_bb81_15;
  TNode<Smi> phi_bb81_21;
  TNode<Smi> phi_bb81_22;
  if (block81.is_used()) {
    ca_.Bind(&block81, &phi_bb81_6, &phi_bb81_7, &phi_bb81_11, &phi_bb81_12, &phi_bb81_13, &phi_bb81_14, &phi_bb81_15, &phi_bb81_21, &phi_bb81_22);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb88_6;
  TNode<Smi> phi_bb88_7;
  TNode<Smi> phi_bb88_11;
  TNode<Smi> phi_bb88_13;
  TNode<Smi> phi_bb88_14;
  TNode<Smi> phi_bb88_15;
  TNode<Smi> phi_bb88_21;
  TNode<Smi> phi_bb88_22;
  TNode<Smi> phi_bb88_29;
  TNode<Smi> phi_bb88_30;
  TNode<IntPtrT> tmp96;
  TNode<IntPtrT> tmp97;
  TNode<Object> tmp98;
  TNode<IntPtrT> tmp99;
  TNode<Object> tmp100;
  TNode<Smi> tmp101;
  TNode<Smi> tmp102;
  TNode<Smi> tmp103;
  TNode<Smi> tmp104;
  TNode<Smi> tmp105;
  TNode<Smi> tmp106;
  TNode<BoolT> tmp107;
  if (block88.is_used()) {
    ca_.Bind(&block88, &phi_bb88_6, &phi_bb88_7, &phi_bb88_11, &phi_bb88_13, &phi_bb88_14, &phi_bb88_15, &phi_bb88_21, &phi_bb88_22, &phi_bb88_29, &phi_bb88_30);
    tmp96 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp92});
    tmp97 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp88}, TNode<IntPtrT>{tmp96});
    std::tie(tmp98, tmp99) = NewReference_Object_0(state_, TNode<Object>{tmp87}, TNode<IntPtrT>{tmp97}).Flatten();
    tmp100 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp98, tmp99});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp85, tmp86}, tmp100);
    tmp101 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp102 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb88_15}, TNode<Smi>{tmp101});
    tmp103 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp104 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb88_7}, TNode<Smi>{tmp103});
    tmp105 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp106 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp107 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp104}, TNode<Smi>{tmp106});
    ca_.Branch(tmp107, &block92, std::vector<compiler::Node*>{phi_bb88_6, phi_bb88_11, phi_bb88_13}, &block93, std::vector<compiler::Node*>{phi_bb88_6, phi_bb88_11, phi_bb88_13});
  }

  TNode<Smi> phi_bb89_6;
  TNode<Smi> phi_bb89_7;
  TNode<Smi> phi_bb89_11;
  TNode<Smi> phi_bb89_13;
  TNode<Smi> phi_bb89_14;
  TNode<Smi> phi_bb89_15;
  TNode<Smi> phi_bb89_21;
  TNode<Smi> phi_bb89_22;
  TNode<Smi> phi_bb89_29;
  TNode<Smi> phi_bb89_30;
  if (block89.is_used()) {
    ca_.Bind(&block89, &phi_bb89_6, &phi_bb89_7, &phi_bb89_11, &phi_bb89_13, &phi_bb89_14, &phi_bb89_15, &phi_bb89_21, &phi_bb89_22, &phi_bb89_29, &phi_bb89_30);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb92_6;
  TNode<Smi> phi_bb92_11;
  TNode<Smi> phi_bb92_13;
  if (block92.is_used()) {
    ca_.Bind(&block92, &phi_bb92_6, &phi_bb92_11, &phi_bb92_13);
    ca_.Goto(&block39, phi_bb92_6, tmp104, tmp78, phi_bb92_11, tmp91);
  }

  TNode<Smi> phi_bb93_6;
  TNode<Smi> phi_bb93_11;
  TNode<Smi> phi_bb93_13;
  TNode<BoolT> tmp108;
  if (block93.is_used()) {
    ca_.Bind(&block93, &phi_bb93_6, &phi_bb93_11, &phi_bb93_13);
    tmp108 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(TNode<Smi>{tmp102}, TNode<Smi>{phi_bb93_13});
    ca_.Branch(tmp108, &block94, std::vector<compiler::Node*>{phi_bb93_6, phi_bb93_11, phi_bb93_13}, &block95, std::vector<compiler::Node*>{phi_bb93_6, phi_bb93_11, phi_bb93_13});
  }

  TNode<Smi> phi_bb94_6;
  TNode<Smi> phi_bb94_11;
  TNode<Smi> phi_bb94_13;
  if (block94.is_used()) {
    ca_.Bind(&block94, &phi_bb94_6, &phi_bb94_11, &phi_bb94_13);
    ca_.Goto(&block48, phi_bb94_6, tmp104, tmp78, phi_bb94_11, tmp91, phi_bb94_13, tmp105, tmp102);
  }

  TNode<Smi> phi_bb95_6;
  TNode<Smi> phi_bb95_11;
  TNode<Smi> phi_bb95_13;
  if (block95.is_used()) {
    ca_.Bind(&block95, &phi_bb95_6, &phi_bb95_11, &phi_bb95_13);
    ca_.Goto(&block75, phi_bb95_6, tmp104, tmp78, phi_bb95_11, tmp91, phi_bb95_13, tmp105, tmp102);
  }

  TNode<Smi> phi_bb74_6;
  TNode<Smi> phi_bb74_7;
  TNode<Smi> phi_bb74_10;
  TNode<Smi> phi_bb74_11;
  TNode<Smi> phi_bb74_12;
  TNode<Smi> phi_bb74_13;
  TNode<Smi> phi_bb74_14;
  TNode<Smi> phi_bb74_15;
  TNode<Object> tmp109;
  TNode<IntPtrT> tmp110;
  TNode<IntPtrT> tmp111;
  TNode<Smi> tmp112;
  TNode<Smi> tmp113;
  TNode<IntPtrT> tmp114;
  TNode<UintPtrT> tmp115;
  TNode<UintPtrT> tmp116;
  TNode<BoolT> tmp117;
  if (block74.is_used()) {
    ca_.Bind(&block74, &phi_bb74_6, &phi_bb74_7, &phi_bb74_10, &phi_bb74_11, &phi_bb74_12, &phi_bb74_13, &phi_bb74_14, &phi_bb74_15);
    std::tie(tmp109, tmp110, tmp111) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp112 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp113 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb74_10}, TNode<Smi>{tmp112});
    tmp114 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb74_10});
    tmp115 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp114});
    tmp116 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp111});
    tmp117 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp115}, TNode<UintPtrT>{tmp116});
    ca_.Branch(tmp117, &block100, std::vector<compiler::Node*>{phi_bb74_6, phi_bb74_7, phi_bb74_11, phi_bb74_12, phi_bb74_13, phi_bb74_14, phi_bb74_15, phi_bb74_10, phi_bb74_10}, &block101, std::vector<compiler::Node*>{phi_bb74_6, phi_bb74_7, phi_bb74_11, phi_bb74_12, phi_bb74_13, phi_bb74_14, phi_bb74_15, phi_bb74_10, phi_bb74_10});
  }

  TNode<Smi> phi_bb100_6;
  TNode<Smi> phi_bb100_7;
  TNode<Smi> phi_bb100_11;
  TNode<Smi> phi_bb100_12;
  TNode<Smi> phi_bb100_13;
  TNode<Smi> phi_bb100_14;
  TNode<Smi> phi_bb100_15;
  TNode<Smi> phi_bb100_21;
  TNode<Smi> phi_bb100_22;
  TNode<IntPtrT> tmp118;
  TNode<IntPtrT> tmp119;
  TNode<Object> tmp120;
  TNode<IntPtrT> tmp121;
  TNode<Object> tmp122;
  TNode<IntPtrT> tmp123;
  TNode<IntPtrT> tmp124;
  TNode<Smi> tmp125;
  TNode<Smi> tmp126;
  TNode<IntPtrT> tmp127;
  TNode<UintPtrT> tmp128;
  TNode<UintPtrT> tmp129;
  TNode<BoolT> tmp130;
  if (block100.is_used()) {
    ca_.Bind(&block100, &phi_bb100_6, &phi_bb100_7, &phi_bb100_11, &phi_bb100_12, &phi_bb100_13, &phi_bb100_14, &phi_bb100_15, &phi_bb100_21, &phi_bb100_22);
    tmp118 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp114});
    tmp119 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp110}, TNode<IntPtrT>{tmp118});
    std::tie(tmp120, tmp121) = NewReference_Object_0(state_, TNode<Object>{tmp109}, TNode<IntPtrT>{tmp119}).Flatten();
    std::tie(tmp122, tmp123, tmp124) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp2}).Flatten();
    tmp125 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp126 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb100_11}, TNode<Smi>{tmp125});
    tmp127 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb100_11});
    tmp128 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp127});
    tmp129 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp124});
    tmp130 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp128}, TNode<UintPtrT>{tmp129});
    ca_.Branch(tmp130, &block108, std::vector<compiler::Node*>{phi_bb100_6, phi_bb100_7, phi_bb100_12, phi_bb100_13, phi_bb100_14, phi_bb100_15, phi_bb100_21, phi_bb100_22, phi_bb100_11, phi_bb100_11}, &block109, std::vector<compiler::Node*>{phi_bb100_6, phi_bb100_7, phi_bb100_12, phi_bb100_13, phi_bb100_14, phi_bb100_15, phi_bb100_21, phi_bb100_22, phi_bb100_11, phi_bb100_11});
  }

  TNode<Smi> phi_bb101_6;
  TNode<Smi> phi_bb101_7;
  TNode<Smi> phi_bb101_11;
  TNode<Smi> phi_bb101_12;
  TNode<Smi> phi_bb101_13;
  TNode<Smi> phi_bb101_14;
  TNode<Smi> phi_bb101_15;
  TNode<Smi> phi_bb101_21;
  TNode<Smi> phi_bb101_22;
  if (block101.is_used()) {
    ca_.Bind(&block101, &phi_bb101_6, &phi_bb101_7, &phi_bb101_11, &phi_bb101_12, &phi_bb101_13, &phi_bb101_14, &phi_bb101_15, &phi_bb101_21, &phi_bb101_22);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb108_6;
  TNode<Smi> phi_bb108_7;
  TNode<Smi> phi_bb108_12;
  TNode<Smi> phi_bb108_13;
  TNode<Smi> phi_bb108_14;
  TNode<Smi> phi_bb108_15;
  TNode<Smi> phi_bb108_21;
  TNode<Smi> phi_bb108_22;
  TNode<Smi> phi_bb108_29;
  TNode<Smi> phi_bb108_30;
  TNode<IntPtrT> tmp131;
  TNode<IntPtrT> tmp132;
  TNode<Object> tmp133;
  TNode<IntPtrT> tmp134;
  TNode<Object> tmp135;
  TNode<Smi> tmp136;
  TNode<Smi> tmp137;
  TNode<Smi> tmp138;
  TNode<Smi> tmp139;
  TNode<Smi> tmp140;
  TNode<Smi> tmp141;
  TNode<BoolT> tmp142;
  if (block108.is_used()) {
    ca_.Bind(&block108, &phi_bb108_6, &phi_bb108_7, &phi_bb108_12, &phi_bb108_13, &phi_bb108_14, &phi_bb108_15, &phi_bb108_21, &phi_bb108_22, &phi_bb108_29, &phi_bb108_30);
    tmp131 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp127});
    tmp132 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp123}, TNode<IntPtrT>{tmp131});
    std::tie(tmp133, tmp134) = NewReference_Object_0(state_, TNode<Object>{tmp122}, TNode<IntPtrT>{tmp132}).Flatten();
    tmp135 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp133, tmp134});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp120, tmp121}, tmp135);
    tmp136 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp137 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb108_14}, TNode<Smi>{tmp136});
    tmp138 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp139 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb108_6}, TNode<Smi>{tmp138});
    tmp140 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp141 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp142 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp139}, TNode<Smi>{tmp141});
    ca_.Branch(tmp142, &block112, std::vector<compiler::Node*>{phi_bb108_7, phi_bb108_12, phi_bb108_13}, &block113, std::vector<compiler::Node*>{phi_bb108_7, phi_bb108_12, phi_bb108_13});
  }

  TNode<Smi> phi_bb109_6;
  TNode<Smi> phi_bb109_7;
  TNode<Smi> phi_bb109_12;
  TNode<Smi> phi_bb109_13;
  TNode<Smi> phi_bb109_14;
  TNode<Smi> phi_bb109_15;
  TNode<Smi> phi_bb109_21;
  TNode<Smi> phi_bb109_22;
  TNode<Smi> phi_bb109_29;
  TNode<Smi> phi_bb109_30;
  if (block109.is_used()) {
    ca_.Bind(&block109, &phi_bb109_6, &phi_bb109_7, &phi_bb109_12, &phi_bb109_13, &phi_bb109_14, &phi_bb109_15, &phi_bb109_21, &phi_bb109_22, &phi_bb109_29, &phi_bb109_30);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb112_7;
  TNode<Smi> phi_bb112_12;
  TNode<Smi> phi_bb112_13;
  if (block112.is_used()) {
    ca_.Bind(&block112, &phi_bb112_7, &phi_bb112_12, &phi_bb112_13);
    ca_.Goto(&block37, tmp139, phi_bb112_7, tmp113, tmp126, phi_bb112_12);
  }

  TNode<Smi> phi_bb113_7;
  TNode<Smi> phi_bb113_12;
  TNode<Smi> phi_bb113_13;
  TNode<BoolT> tmp143;
  if (block113.is_used()) {
    ca_.Bind(&block113, &phi_bb113_7, &phi_bb113_12, &phi_bb113_13);
    tmp143 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(TNode<Smi>{tmp137}, TNode<Smi>{phi_bb113_13});
    ca_.Branch(tmp143, &block114, std::vector<compiler::Node*>{phi_bb113_7, phi_bb113_12, phi_bb113_13}, &block115, std::vector<compiler::Node*>{phi_bb113_7, phi_bb113_12, phi_bb113_13});
  }

  TNode<Smi> phi_bb114_7;
  TNode<Smi> phi_bb114_12;
  TNode<Smi> phi_bb114_13;
  if (block114.is_used()) {
    ca_.Bind(&block114, &phi_bb114_7, &phi_bb114_12, &phi_bb114_13);
    ca_.Goto(&block48, tmp139, phi_bb114_7, tmp113, tmp126, phi_bb114_12, phi_bb114_13, tmp137, tmp140);
  }

  TNode<Smi> phi_bb115_7;
  TNode<Smi> phi_bb115_12;
  TNode<Smi> phi_bb115_13;
  if (block115.is_used()) {
    ca_.Bind(&block115, &phi_bb115_7, &phi_bb115_12, &phi_bb115_13);
    ca_.Goto(&block75, tmp139, phi_bb115_7, tmp113, tmp126, phi_bb115_12, phi_bb115_13, tmp137, tmp140);
  }

  TNode<Smi> phi_bb75_6;
  TNode<Smi> phi_bb75_7;
  TNode<Smi> phi_bb75_10;
  TNode<Smi> phi_bb75_11;
  TNode<Smi> phi_bb75_12;
  TNode<Smi> phi_bb75_13;
  TNode<Smi> phi_bb75_14;
  TNode<Smi> phi_bb75_15;
  if (block75.is_used()) {
    ca_.Bind(&block75, &phi_bb75_6, &phi_bb75_7, &phi_bb75_10, &phi_bb75_11, &phi_bb75_12, &phi_bb75_13, &phi_bb75_14, &phi_bb75_15);
    ca_.Goto(&block49, phi_bb75_6, phi_bb75_7, phi_bb75_10, phi_bb75_11, phi_bb75_12, phi_bb75_13, phi_bb75_14, phi_bb75_15);
  }

  TNode<Smi> phi_bb48_6;
  TNode<Smi> phi_bb48_7;
  TNode<Smi> phi_bb48_10;
  TNode<Smi> phi_bb48_11;
  TNode<Smi> phi_bb48_12;
  TNode<Smi> phi_bb48_13;
  TNode<Smi> phi_bb48_14;
  TNode<Smi> phi_bb48_15;
  TNode<Smi> tmp144;
  TNode<Smi> tmp145;
  TNode<BoolT> tmp146;
  if (block48.is_used()) {
    ca_.Bind(&block48, &phi_bb48_6, &phi_bb48_7, &phi_bb48_10, &phi_bb48_11, &phi_bb48_12, &phi_bb48_13, &phi_bb48_14, &phi_bb48_15);
    tmp144 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp145 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb48_13}, TNode<Smi>{tmp144});
    tmp146 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block118, phi_bb48_6, phi_bb48_7, phi_bb48_10, phi_bb48_11, phi_bb48_12, tmp145, phi_bb48_14, phi_bb48_15, tmp146);
  }

  TNode<Smi> phi_bb118_6;
  TNode<Smi> phi_bb118_7;
  TNode<Smi> phi_bb118_10;
  TNode<Smi> phi_bb118_11;
  TNode<Smi> phi_bb118_12;
  TNode<Smi> phi_bb118_13;
  TNode<Smi> phi_bb118_14;
  TNode<Smi> phi_bb118_15;
  TNode<BoolT> phi_bb118_16;
  TNode<Smi> tmp147;
  TNode<BoolT> tmp148;
  if (block118.is_used()) {
    ca_.Bind(&block118, &phi_bb118_6, &phi_bb118_7, &phi_bb118_10, &phi_bb118_11, &phi_bb118_12, &phi_bb118_13, &phi_bb118_14, &phi_bb118_15, &phi_bb118_16);
    tmp147 = FromConstexpr_Smi_constexpr_int31_0(state_, kMinGallopWins_0(state_));
    tmp148 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(TNode<Smi>{phi_bb118_14}, TNode<Smi>{tmp147});
    ca_.Branch(tmp148, &block119, std::vector<compiler::Node*>{phi_bb118_6, phi_bb118_7, phi_bb118_10, phi_bb118_11, phi_bb118_12, phi_bb118_13, phi_bb118_14, phi_bb118_15, phi_bb118_16}, &block120, std::vector<compiler::Node*>{phi_bb118_6, phi_bb118_7, phi_bb118_10, phi_bb118_11, phi_bb118_12, phi_bb118_13, phi_bb118_14, phi_bb118_15, phi_bb118_16});
  }

  TNode<Smi> phi_bb119_6;
  TNode<Smi> phi_bb119_7;
  TNode<Smi> phi_bb119_10;
  TNode<Smi> phi_bb119_11;
  TNode<Smi> phi_bb119_12;
  TNode<Smi> phi_bb119_13;
  TNode<Smi> phi_bb119_14;
  TNode<Smi> phi_bb119_15;
  TNode<BoolT> phi_bb119_16;
  TNode<BoolT> tmp149;
  if (block119.is_used()) {
    ca_.Bind(&block119, &phi_bb119_6, &phi_bb119_7, &phi_bb119_10, &phi_bb119_11, &phi_bb119_12, &phi_bb119_13, &phi_bb119_14, &phi_bb119_15, &phi_bb119_16);
    tmp149 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block121, phi_bb119_6, phi_bb119_7, phi_bb119_10, phi_bb119_11, phi_bb119_12, phi_bb119_13, phi_bb119_14, phi_bb119_15, phi_bb119_16, tmp149);
  }

  TNode<Smi> phi_bb120_6;
  TNode<Smi> phi_bb120_7;
  TNode<Smi> phi_bb120_10;
  TNode<Smi> phi_bb120_11;
  TNode<Smi> phi_bb120_12;
  TNode<Smi> phi_bb120_13;
  TNode<Smi> phi_bb120_14;
  TNode<Smi> phi_bb120_15;
  TNode<BoolT> phi_bb120_16;
  TNode<Smi> tmp150;
  TNode<BoolT> tmp151;
  if (block120.is_used()) {
    ca_.Bind(&block120, &phi_bb120_6, &phi_bb120_7, &phi_bb120_10, &phi_bb120_11, &phi_bb120_12, &phi_bb120_13, &phi_bb120_14, &phi_bb120_15, &phi_bb120_16);
    tmp150 = FromConstexpr_Smi_constexpr_int31_0(state_, kMinGallopWins_0(state_));
    tmp151 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(TNode<Smi>{phi_bb120_15}, TNode<Smi>{tmp150});
    ca_.Goto(&block121, phi_bb120_6, phi_bb120_7, phi_bb120_10, phi_bb120_11, phi_bb120_12, phi_bb120_13, phi_bb120_14, phi_bb120_15, phi_bb120_16, tmp151);
  }

  TNode<Smi> phi_bb121_6;
  TNode<Smi> phi_bb121_7;
  TNode<Smi> phi_bb121_10;
  TNode<Smi> phi_bb121_11;
  TNode<Smi> phi_bb121_12;
  TNode<Smi> phi_bb121_13;
  TNode<Smi> phi_bb121_14;
  TNode<Smi> phi_bb121_15;
  TNode<BoolT> phi_bb121_16;
  TNode<BoolT> phi_bb121_18;
  if (block121.is_used()) {
    ca_.Bind(&block121, &phi_bb121_6, &phi_bb121_7, &phi_bb121_10, &phi_bb121_11, &phi_bb121_12, &phi_bb121_13, &phi_bb121_14, &phi_bb121_15, &phi_bb121_16, &phi_bb121_18);
    ca_.Branch(phi_bb121_18, &block122, std::vector<compiler::Node*>{phi_bb121_6, phi_bb121_7, phi_bb121_10, phi_bb121_11, phi_bb121_12, phi_bb121_13, phi_bb121_14, phi_bb121_15, phi_bb121_16}, &block123, std::vector<compiler::Node*>{phi_bb121_6, phi_bb121_7, phi_bb121_10, phi_bb121_11, phi_bb121_12, phi_bb121_13, phi_bb121_14, phi_bb121_15, phi_bb121_16});
  }

  TNode<Smi> phi_bb122_6;
  TNode<Smi> phi_bb122_7;
  TNode<Smi> phi_bb122_10;
  TNode<Smi> phi_bb122_11;
  TNode<Smi> phi_bb122_12;
  TNode<Smi> phi_bb122_13;
  TNode<Smi> phi_bb122_14;
  TNode<Smi> phi_bb122_15;
  TNode<BoolT> phi_bb122_16;
  TNode<BoolT> tmp152;
  if (block122.is_used()) {
    ca_.Bind(&block122, &phi_bb122_6, &phi_bb122_7, &phi_bb122_10, &phi_bb122_11, &phi_bb122_12, &phi_bb122_13, &phi_bb122_14, &phi_bb122_15, &phi_bb122_16);
    tmp152 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block124, phi_bb122_6, phi_bb122_7, phi_bb122_10, phi_bb122_11, phi_bb122_12, phi_bb122_13, phi_bb122_14, phi_bb122_15, phi_bb122_16, tmp152);
  }

  TNode<Smi> phi_bb123_6;
  TNode<Smi> phi_bb123_7;
  TNode<Smi> phi_bb123_10;
  TNode<Smi> phi_bb123_11;
  TNode<Smi> phi_bb123_12;
  TNode<Smi> phi_bb123_13;
  TNode<Smi> phi_bb123_14;
  TNode<Smi> phi_bb123_15;
  TNode<BoolT> phi_bb123_16;
  if (block123.is_used()) {
    ca_.Bind(&block123, &phi_bb123_6, &phi_bb123_7, &phi_bb123_10, &phi_bb123_11, &phi_bb123_12, &phi_bb123_13, &phi_bb123_14, &phi_bb123_15, &phi_bb123_16);
    ca_.Goto(&block124, phi_bb123_6, phi_bb123_7, phi_bb123_10, phi_bb123_11, phi_bb123_12, phi_bb123_13, phi_bb123_14, phi_bb123_15, phi_bb123_16, phi_bb123_16);
  }

  TNode<Smi> phi_bb124_6;
  TNode<Smi> phi_bb124_7;
  TNode<Smi> phi_bb124_10;
  TNode<Smi> phi_bb124_11;
  TNode<Smi> phi_bb124_12;
  TNode<Smi> phi_bb124_13;
  TNode<Smi> phi_bb124_14;
  TNode<Smi> phi_bb124_15;
  TNode<BoolT> phi_bb124_16;
  TNode<BoolT> phi_bb124_18;
  if (block124.is_used()) {
    ca_.Bind(&block124, &phi_bb124_6, &phi_bb124_7, &phi_bb124_10, &phi_bb124_11, &phi_bb124_12, &phi_bb124_13, &phi_bb124_14, &phi_bb124_15, &phi_bb124_16, &phi_bb124_18);
    ca_.Branch(phi_bb124_18, &block116, std::vector<compiler::Node*>{phi_bb124_6, phi_bb124_7, phi_bb124_10, phi_bb124_11, phi_bb124_12, phi_bb124_13, phi_bb124_14, phi_bb124_15, phi_bb124_16}, &block117, std::vector<compiler::Node*>{phi_bb124_6, phi_bb124_7, phi_bb124_10, phi_bb124_11, phi_bb124_12, phi_bb124_13, phi_bb124_14, phi_bb124_15, phi_bb124_16});
  }

  TNode<Smi> phi_bb116_6;
  TNode<Smi> phi_bb116_7;
  TNode<Smi> phi_bb116_10;
  TNode<Smi> phi_bb116_11;
  TNode<Smi> phi_bb116_12;
  TNode<Smi> phi_bb116_13;
  TNode<Smi> phi_bb116_14;
  TNode<Smi> phi_bb116_15;
  TNode<BoolT> phi_bb116_16;
  TNode<BoolT> tmp153;
  TNode<Smi> tmp154;
  TNode<Smi> tmp155;
  TNode<Smi> tmp156;
  TNode<Smi> tmp157;
  TNode<IntPtrT> tmp158;
  TNode<Object> tmp159;
  TNode<IntPtrT> tmp160;
  TNode<IntPtrT> tmp161;
  TNode<IntPtrT> tmp162;
  TNode<UintPtrT> tmp163;
  TNode<UintPtrT> tmp164;
  TNode<BoolT> tmp165;
  if (block116.is_used()) {
    ca_.Bind(&block116, &phi_bb116_6, &phi_bb116_7, &phi_bb116_10, &phi_bb116_11, &phi_bb116_12, &phi_bb116_13, &phi_bb116_14, &phi_bb116_15, &phi_bb116_16);
    tmp153 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp154 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp155 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb116_13}, TNode<Smi>{tmp154});
    tmp156 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp157 = CodeStubAssembler(state_).SmiMax(TNode<Smi>{tmp156}, TNode<Smi>{tmp155});
    tmp158 = FromConstexpr_intptr_constexpr_int31_0(state_, 40);
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{p_sortState, tmp158}, tmp157);
    std::tie(tmp159, tmp160, tmp161) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp162 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb116_12});
    tmp163 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp162});
    tmp164 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp161});
    tmp165 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp163}, TNode<UintPtrT>{tmp164});
    ca_.Branch(tmp165, &block136, std::vector<compiler::Node*>{phi_bb116_6, phi_bb116_7, phi_bb116_10, phi_bb116_11, phi_bb116_12, phi_bb116_14, phi_bb116_15, phi_bb116_12, phi_bb116_12}, &block137, std::vector<compiler::Node*>{phi_bb116_6, phi_bb116_7, phi_bb116_10, phi_bb116_11, phi_bb116_12, phi_bb116_14, phi_bb116_15, phi_bb116_12, phi_bb116_12});
  }

  TNode<Smi> phi_bb136_6;
  TNode<Smi> phi_bb136_7;
  TNode<Smi> phi_bb136_10;
  TNode<Smi> phi_bb136_11;
  TNode<Smi> phi_bb136_12;
  TNode<Smi> phi_bb136_14;
  TNode<Smi> phi_bb136_15;
  TNode<Smi> phi_bb136_22;
  TNode<Smi> phi_bb136_23;
  TNode<IntPtrT> tmp166;
  TNode<IntPtrT> tmp167;
  TNode<Object> tmp168;
  TNode<IntPtrT> tmp169;
  TNode<Object> tmp170;
  TNode<Object> tmp171;
  TNode<Smi> tmp172;
  TNode<Smi> tmp173;
  TNode<Smi> tmp174;
  TNode<BoolT> tmp175;
  if (block136.is_used()) {
    ca_.Bind(&block136, &phi_bb136_6, &phi_bb136_7, &phi_bb136_10, &phi_bb136_11, &phi_bb136_12, &phi_bb136_14, &phi_bb136_15, &phi_bb136_22, &phi_bb136_23);
    tmp166 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp162});
    tmp167 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp160}, TNode<IntPtrT>{tmp166});
    std::tie(tmp168, tmp169) = NewReference_Object_0(state_, TNode<Object>{tmp159}, TNode<IntPtrT>{tmp167}).Flatten();
    tmp170 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp168, tmp169});
    tmp171 = UnsafeCast_JSAny_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp170});
    tmp172 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp173 = ca_.CallStub<Smi>(Builtins::CallableFor(ca_.isolate(), Builtin::kGallopRight), p_context, p_sortState, tmp2, tmp171, phi_bb136_11, phi_bb136_6, tmp172);
    tmp174 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp175 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp173}, TNode<Smi>{tmp174});
    ca_.Branch(tmp175, &block144, std::vector<compiler::Node*>{phi_bb136_6, phi_bb136_7, phi_bb136_10, phi_bb136_11, phi_bb136_12, phi_bb136_15}, &block145, std::vector<compiler::Node*>{phi_bb136_6, phi_bb136_7, phi_bb136_10, phi_bb136_11, phi_bb136_12, phi_bb136_15});
  }

  TNode<Smi> phi_bb137_6;
  TNode<Smi> phi_bb137_7;
  TNode<Smi> phi_bb137_10;
  TNode<Smi> phi_bb137_11;
  TNode<Smi> phi_bb137_12;
  TNode<Smi> phi_bb137_14;
  TNode<Smi> phi_bb137_15;
  TNode<Smi> phi_bb137_22;
  TNode<Smi> phi_bb137_23;
  if (block137.is_used()) {
    ca_.Bind(&block137, &phi_bb137_6, &phi_bb137_7, &phi_bb137_10, &phi_bb137_11, &phi_bb137_12, &phi_bb137_14, &phi_bb137_15, &phi_bb137_22, &phi_bb137_23);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb144_6;
  TNode<Smi> phi_bb144_7;
  TNode<Smi> phi_bb144_10;
  TNode<Smi> phi_bb144_11;
  TNode<Smi> phi_bb144_12;
  TNode<Smi> phi_bb144_15;
  TNode<Object> tmp176;
  TNode<Smi> tmp177;
  TNode<Smi> tmp178;
  TNode<Smi> tmp179;
  TNode<Smi> tmp180;
  TNode<BoolT> tmp181;
  if (block144.is_used()) {
    ca_.Bind(&block144, &phi_bb144_6, &phi_bb144_7, &phi_bb144_10, &phi_bb144_11, &phi_bb144_12, &phi_bb144_15);
    tmp176 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kCopy), p_context, tmp2, phi_bb144_11, tmp1, phi_bb144_10, tmp173);
    tmp177 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb144_10}, TNode<Smi>{tmp173});
    tmp178 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb144_11}, TNode<Smi>{tmp173});
    tmp179 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb144_6}, TNode<Smi>{tmp173});
    tmp180 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp181 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp179}, TNode<Smi>{tmp180});
    ca_.Branch(tmp181, &block146, std::vector<compiler::Node*>{phi_bb144_7, phi_bb144_12, phi_bb144_15}, &block147, std::vector<compiler::Node*>{phi_bb144_7, phi_bb144_12, phi_bb144_15});
  }

  TNode<Smi> phi_bb146_7;
  TNode<Smi> phi_bb146_12;
  TNode<Smi> phi_bb146_15;
  if (block146.is_used()) {
    ca_.Bind(&block146, &phi_bb146_7, &phi_bb146_12, &phi_bb146_15);
    ca_.Goto(&block37, tmp179, phi_bb146_7, tmp177, tmp178, phi_bb146_12);
  }

  TNode<Smi> phi_bb147_7;
  TNode<Smi> phi_bb147_12;
  TNode<Smi> phi_bb147_15;
  TNode<Smi> tmp182;
  TNode<BoolT> tmp183;
  if (block147.is_used()) {
    ca_.Bind(&block147, &phi_bb147_7, &phi_bb147_12, &phi_bb147_15);
    tmp182 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp183 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp179}, TNode<Smi>{tmp182});
    ca_.Branch(tmp183, &block148, std::vector<compiler::Node*>{phi_bb147_7, phi_bb147_12, phi_bb147_15}, &block149, std::vector<compiler::Node*>{phi_bb147_7, phi_bb147_12, phi_bb147_15});
  }

  TNode<Smi> phi_bb148_7;
  TNode<Smi> phi_bb148_12;
  TNode<Smi> phi_bb148_15;
  if (block148.is_used()) {
    ca_.Bind(&block148, &phi_bb148_7, &phi_bb148_12, &phi_bb148_15);
    ca_.Goto(&block39, tmp179, phi_bb148_7, tmp177, tmp178, phi_bb148_12);
  }

  TNode<Smi> phi_bb149_7;
  TNode<Smi> phi_bb149_12;
  TNode<Smi> phi_bb149_15;
  if (block149.is_used()) {
    ca_.Bind(&block149, &phi_bb149_7, &phi_bb149_12, &phi_bb149_15);
    ca_.Goto(&block145, tmp179, phi_bb149_7, tmp177, tmp178, phi_bb149_12, phi_bb149_15);
  }

  TNode<Smi> phi_bb145_6;
  TNode<Smi> phi_bb145_7;
  TNode<Smi> phi_bb145_10;
  TNode<Smi> phi_bb145_11;
  TNode<Smi> phi_bb145_12;
  TNode<Smi> phi_bb145_15;
  TNode<Object> tmp184;
  TNode<IntPtrT> tmp185;
  TNode<IntPtrT> tmp186;
  TNode<Smi> tmp187;
  TNode<Smi> tmp188;
  TNode<IntPtrT> tmp189;
  TNode<UintPtrT> tmp190;
  TNode<UintPtrT> tmp191;
  TNode<BoolT> tmp192;
  if (block145.is_used()) {
    ca_.Bind(&block145, &phi_bb145_6, &phi_bb145_7, &phi_bb145_10, &phi_bb145_11, &phi_bb145_12, &phi_bb145_15);
    std::tie(tmp184, tmp185, tmp186) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp187 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp188 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb145_10}, TNode<Smi>{tmp187});
    tmp189 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb145_10});
    tmp190 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp189});
    tmp191 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp186});
    tmp192 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp190}, TNode<UintPtrT>{tmp191});
    ca_.Branch(tmp192, &block154, std::vector<compiler::Node*>{phi_bb145_6, phi_bb145_7, phi_bb145_11, phi_bb145_12, phi_bb145_15, phi_bb145_10, phi_bb145_10}, &block155, std::vector<compiler::Node*>{phi_bb145_6, phi_bb145_7, phi_bb145_11, phi_bb145_12, phi_bb145_15, phi_bb145_10, phi_bb145_10});
  }

  TNode<Smi> phi_bb154_6;
  TNode<Smi> phi_bb154_7;
  TNode<Smi> phi_bb154_11;
  TNode<Smi> phi_bb154_12;
  TNode<Smi> phi_bb154_15;
  TNode<Smi> phi_bb154_21;
  TNode<Smi> phi_bb154_22;
  TNode<IntPtrT> tmp193;
  TNode<IntPtrT> tmp194;
  TNode<Object> tmp195;
  TNode<IntPtrT> tmp196;
  TNode<Object> tmp197;
  TNode<IntPtrT> tmp198;
  TNode<IntPtrT> tmp199;
  TNode<Smi> tmp200;
  TNode<Smi> tmp201;
  TNode<IntPtrT> tmp202;
  TNode<UintPtrT> tmp203;
  TNode<UintPtrT> tmp204;
  TNode<BoolT> tmp205;
  if (block154.is_used()) {
    ca_.Bind(&block154, &phi_bb154_6, &phi_bb154_7, &phi_bb154_11, &phi_bb154_12, &phi_bb154_15, &phi_bb154_21, &phi_bb154_22);
    tmp193 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp189});
    tmp194 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp185}, TNode<IntPtrT>{tmp193});
    std::tie(tmp195, tmp196) = NewReference_Object_0(state_, TNode<Object>{tmp184}, TNode<IntPtrT>{tmp194}).Flatten();
    std::tie(tmp197, tmp198, tmp199) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp200 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp201 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb154_12}, TNode<Smi>{tmp200});
    tmp202 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb154_12});
    tmp203 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp202});
    tmp204 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp199});
    tmp205 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp203}, TNode<UintPtrT>{tmp204});
    ca_.Branch(tmp205, &block162, std::vector<compiler::Node*>{phi_bb154_6, phi_bb154_7, phi_bb154_11, phi_bb154_15, phi_bb154_21, phi_bb154_22, phi_bb154_12, phi_bb154_12}, &block163, std::vector<compiler::Node*>{phi_bb154_6, phi_bb154_7, phi_bb154_11, phi_bb154_15, phi_bb154_21, phi_bb154_22, phi_bb154_12, phi_bb154_12});
  }

  TNode<Smi> phi_bb155_6;
  TNode<Smi> phi_bb155_7;
  TNode<Smi> phi_bb155_11;
  TNode<Smi> phi_bb155_12;
  TNode<Smi> phi_bb155_15;
  TNode<Smi> phi_bb155_21;
  TNode<Smi> phi_bb155_22;
  if (block155.is_used()) {
    ca_.Bind(&block155, &phi_bb155_6, &phi_bb155_7, &phi_bb155_11, &phi_bb155_12, &phi_bb155_15, &phi_bb155_21, &phi_bb155_22);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb162_6;
  TNode<Smi> phi_bb162_7;
  TNode<Smi> phi_bb162_11;
  TNode<Smi> phi_bb162_15;
  TNode<Smi> phi_bb162_21;
  TNode<Smi> phi_bb162_22;
  TNode<Smi> phi_bb162_29;
  TNode<Smi> phi_bb162_30;
  TNode<IntPtrT> tmp206;
  TNode<IntPtrT> tmp207;
  TNode<Object> tmp208;
  TNode<IntPtrT> tmp209;
  TNode<Object> tmp210;
  TNode<Smi> tmp211;
  TNode<Smi> tmp212;
  TNode<Smi> tmp213;
  TNode<BoolT> tmp214;
  if (block162.is_used()) {
    ca_.Bind(&block162, &phi_bb162_6, &phi_bb162_7, &phi_bb162_11, &phi_bb162_15, &phi_bb162_21, &phi_bb162_22, &phi_bb162_29, &phi_bb162_30);
    tmp206 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp202});
    tmp207 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp198}, TNode<IntPtrT>{tmp206});
    std::tie(tmp208, tmp209) = NewReference_Object_0(state_, TNode<Object>{tmp197}, TNode<IntPtrT>{tmp207}).Flatten();
    tmp210 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp208, tmp209});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp195, tmp196}, tmp210);
    tmp211 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp212 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb162_7}, TNode<Smi>{tmp211});
    tmp213 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp214 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp212}, TNode<Smi>{tmp213});
    ca_.Branch(tmp214, &block166, std::vector<compiler::Node*>{phi_bb162_6, phi_bb162_11, phi_bb162_15}, &block167, std::vector<compiler::Node*>{phi_bb162_6, phi_bb162_11, phi_bb162_15});
  }

  TNode<Smi> phi_bb163_6;
  TNode<Smi> phi_bb163_7;
  TNode<Smi> phi_bb163_11;
  TNode<Smi> phi_bb163_15;
  TNode<Smi> phi_bb163_21;
  TNode<Smi> phi_bb163_22;
  TNode<Smi> phi_bb163_29;
  TNode<Smi> phi_bb163_30;
  if (block163.is_used()) {
    ca_.Bind(&block163, &phi_bb163_6, &phi_bb163_7, &phi_bb163_11, &phi_bb163_15, &phi_bb163_21, &phi_bb163_22, &phi_bb163_29, &phi_bb163_30);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb166_6;
  TNode<Smi> phi_bb166_11;
  TNode<Smi> phi_bb166_15;
  if (block166.is_used()) {
    ca_.Bind(&block166, &phi_bb166_6, &phi_bb166_11, &phi_bb166_15);
    ca_.Goto(&block39, phi_bb166_6, tmp212, tmp188, phi_bb166_11, tmp201);
  }

  TNode<Smi> phi_bb167_6;
  TNode<Smi> phi_bb167_11;
  TNode<Smi> phi_bb167_15;
  TNode<Object> tmp215;
  TNode<IntPtrT> tmp216;
  TNode<IntPtrT> tmp217;
  TNode<IntPtrT> tmp218;
  TNode<UintPtrT> tmp219;
  TNode<UintPtrT> tmp220;
  TNode<BoolT> tmp221;
  if (block167.is_used()) {
    ca_.Bind(&block167, &phi_bb167_6, &phi_bb167_11, &phi_bb167_15);
    std::tie(tmp215, tmp216, tmp217) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp2}).Flatten();
    tmp218 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb167_11});
    tmp219 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp218});
    tmp220 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp217});
    tmp221 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp219}, TNode<UintPtrT>{tmp220});
    ca_.Branch(tmp221, &block172, std::vector<compiler::Node*>{phi_bb167_6, phi_bb167_11, phi_bb167_15, phi_bb167_11, phi_bb167_11}, &block173, std::vector<compiler::Node*>{phi_bb167_6, phi_bb167_11, phi_bb167_15, phi_bb167_11, phi_bb167_11});
  }

  TNode<Smi> phi_bb172_6;
  TNode<Smi> phi_bb172_11;
  TNode<Smi> phi_bb172_15;
  TNode<Smi> phi_bb172_22;
  TNode<Smi> phi_bb172_23;
  TNode<IntPtrT> tmp222;
  TNode<IntPtrT> tmp223;
  TNode<Object> tmp224;
  TNode<IntPtrT> tmp225;
  TNode<Object> tmp226;
  TNode<Object> tmp227;
  TNode<Smi> tmp228;
  TNode<Smi> tmp229;
  TNode<Smi> tmp230;
  TNode<BoolT> tmp231;
  if (block172.is_used()) {
    ca_.Bind(&block172, &phi_bb172_6, &phi_bb172_11, &phi_bb172_15, &phi_bb172_22, &phi_bb172_23);
    tmp222 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp218});
    tmp223 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp216}, TNode<IntPtrT>{tmp222});
    std::tie(tmp224, tmp225) = NewReference_Object_0(state_, TNode<Object>{tmp215}, TNode<IntPtrT>{tmp223}).Flatten();
    tmp226 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp224, tmp225});
    tmp227 = UnsafeCast_JSAny_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp226});
    tmp228 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp229 = ca_.CallStub<Smi>(Builtins::CallableFor(ca_.isolate(), Builtin::kGallopLeft), p_context, p_sortState, tmp1, tmp227, tmp201, tmp212, tmp228);
    tmp230 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp231 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp229}, TNode<Smi>{tmp230});
    ca_.Branch(tmp231, &block180, std::vector<compiler::Node*>{phi_bb172_6, phi_bb172_11}, &block181, std::vector<compiler::Node*>{phi_bb172_6, tmp212, tmp188, phi_bb172_11, tmp201});
  }

  TNode<Smi> phi_bb173_6;
  TNode<Smi> phi_bb173_11;
  TNode<Smi> phi_bb173_15;
  TNode<Smi> phi_bb173_22;
  TNode<Smi> phi_bb173_23;
  if (block173.is_used()) {
    ca_.Bind(&block173, &phi_bb173_6, &phi_bb173_11, &phi_bb173_15, &phi_bb173_22, &phi_bb173_23);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb180_6;
  TNode<Smi> phi_bb180_11;
  TNode<Object> tmp232;
  TNode<Smi> tmp233;
  TNode<Smi> tmp234;
  TNode<Smi> tmp235;
  TNode<Smi> tmp236;
  TNode<BoolT> tmp237;
  if (block180.is_used()) {
    ca_.Bind(&block180, &phi_bb180_6, &phi_bb180_11);
    tmp232 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kCopy), p_context, tmp1, tmp201, tmp1, tmp188, tmp229);
    tmp233 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp188}, TNode<Smi>{tmp229});
    tmp234 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp201}, TNode<Smi>{tmp229});
    tmp235 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp212}, TNode<Smi>{tmp229});
    tmp236 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp237 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp235}, TNode<Smi>{tmp236});
    ca_.Branch(tmp237, &block182, std::vector<compiler::Node*>{phi_bb180_6, phi_bb180_11}, &block183, std::vector<compiler::Node*>{phi_bb180_6, phi_bb180_11});
  }

  TNode<Smi> phi_bb182_6;
  TNode<Smi> phi_bb182_11;
  if (block182.is_used()) {
    ca_.Bind(&block182, &phi_bb182_6, &phi_bb182_11);
    ca_.Goto(&block39, phi_bb182_6, tmp235, tmp233, phi_bb182_11, tmp234);
  }

  TNode<Smi> phi_bb183_6;
  TNode<Smi> phi_bb183_11;
  if (block183.is_used()) {
    ca_.Bind(&block183, &phi_bb183_6, &phi_bb183_11);
    ca_.Goto(&block181, phi_bb183_6, tmp235, tmp233, phi_bb183_11, tmp234);
  }

  TNode<Smi> phi_bb181_6;
  TNode<Smi> phi_bb181_7;
  TNode<Smi> phi_bb181_10;
  TNode<Smi> phi_bb181_11;
  TNode<Smi> phi_bb181_12;
  TNode<Object> tmp238;
  TNode<IntPtrT> tmp239;
  TNode<IntPtrT> tmp240;
  TNode<Smi> tmp241;
  TNode<Smi> tmp242;
  TNode<IntPtrT> tmp243;
  TNode<UintPtrT> tmp244;
  TNode<UintPtrT> tmp245;
  TNode<BoolT> tmp246;
  if (block181.is_used()) {
    ca_.Bind(&block181, &phi_bb181_6, &phi_bb181_7, &phi_bb181_10, &phi_bb181_11, &phi_bb181_12);
    std::tie(tmp238, tmp239, tmp240) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp241 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp242 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb181_10}, TNode<Smi>{tmp241});
    tmp243 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb181_10});
    tmp244 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp243});
    tmp245 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp240});
    tmp246 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp244}, TNode<UintPtrT>{tmp245});
    ca_.Branch(tmp246, &block188, std::vector<compiler::Node*>{phi_bb181_6, phi_bb181_7, phi_bb181_11, phi_bb181_12, phi_bb181_10, phi_bb181_10}, &block189, std::vector<compiler::Node*>{phi_bb181_6, phi_bb181_7, phi_bb181_11, phi_bb181_12, phi_bb181_10, phi_bb181_10});
  }

  TNode<Smi> phi_bb188_6;
  TNode<Smi> phi_bb188_7;
  TNode<Smi> phi_bb188_11;
  TNode<Smi> phi_bb188_12;
  TNode<Smi> phi_bb188_21;
  TNode<Smi> phi_bb188_22;
  TNode<IntPtrT> tmp247;
  TNode<IntPtrT> tmp248;
  TNode<Object> tmp249;
  TNode<IntPtrT> tmp250;
  TNode<Object> tmp251;
  TNode<IntPtrT> tmp252;
  TNode<IntPtrT> tmp253;
  TNode<Smi> tmp254;
  TNode<Smi> tmp255;
  TNode<IntPtrT> tmp256;
  TNode<UintPtrT> tmp257;
  TNode<UintPtrT> tmp258;
  TNode<BoolT> tmp259;
  if (block188.is_used()) {
    ca_.Bind(&block188, &phi_bb188_6, &phi_bb188_7, &phi_bb188_11, &phi_bb188_12, &phi_bb188_21, &phi_bb188_22);
    tmp247 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp243});
    tmp248 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp239}, TNode<IntPtrT>{tmp247});
    std::tie(tmp249, tmp250) = NewReference_Object_0(state_, TNode<Object>{tmp238}, TNode<IntPtrT>{tmp248}).Flatten();
    std::tie(tmp251, tmp252, tmp253) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp2}).Flatten();
    tmp254 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp255 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb188_11}, TNode<Smi>{tmp254});
    tmp256 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb188_11});
    tmp257 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp256});
    tmp258 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp253});
    tmp259 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp257}, TNode<UintPtrT>{tmp258});
    ca_.Branch(tmp259, &block196, std::vector<compiler::Node*>{phi_bb188_6, phi_bb188_7, phi_bb188_12, phi_bb188_21, phi_bb188_22, phi_bb188_11, phi_bb188_11}, &block197, std::vector<compiler::Node*>{phi_bb188_6, phi_bb188_7, phi_bb188_12, phi_bb188_21, phi_bb188_22, phi_bb188_11, phi_bb188_11});
  }

  TNode<Smi> phi_bb189_6;
  TNode<Smi> phi_bb189_7;
  TNode<Smi> phi_bb189_11;
  TNode<Smi> phi_bb189_12;
  TNode<Smi> phi_bb189_21;
  TNode<Smi> phi_bb189_22;
  if (block189.is_used()) {
    ca_.Bind(&block189, &phi_bb189_6, &phi_bb189_7, &phi_bb189_11, &phi_bb189_12, &phi_bb189_21, &phi_bb189_22);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb196_6;
  TNode<Smi> phi_bb196_7;
  TNode<Smi> phi_bb196_12;
  TNode<Smi> phi_bb196_21;
  TNode<Smi> phi_bb196_22;
  TNode<Smi> phi_bb196_29;
  TNode<Smi> phi_bb196_30;
  TNode<IntPtrT> tmp260;
  TNode<IntPtrT> tmp261;
  TNode<Object> tmp262;
  TNode<IntPtrT> tmp263;
  TNode<Object> tmp264;
  TNode<Smi> tmp265;
  TNode<Smi> tmp266;
  TNode<Smi> tmp267;
  TNode<BoolT> tmp268;
  if (block196.is_used()) {
    ca_.Bind(&block196, &phi_bb196_6, &phi_bb196_7, &phi_bb196_12, &phi_bb196_21, &phi_bb196_22, &phi_bb196_29, &phi_bb196_30);
    tmp260 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp256});
    tmp261 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp252}, TNode<IntPtrT>{tmp260});
    std::tie(tmp262, tmp263) = NewReference_Object_0(state_, TNode<Object>{tmp251}, TNode<IntPtrT>{tmp261}).Flatten();
    tmp264 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp262, tmp263});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp249, tmp250}, tmp264);
    tmp265 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp266 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb196_6}, TNode<Smi>{tmp265});
    tmp267 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp268 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp266}, TNode<Smi>{tmp267});
    ca_.Branch(tmp268, &block200, std::vector<compiler::Node*>{phi_bb196_7, phi_bb196_12}, &block201, std::vector<compiler::Node*>{phi_bb196_7, phi_bb196_12});
  }

  TNode<Smi> phi_bb197_6;
  TNode<Smi> phi_bb197_7;
  TNode<Smi> phi_bb197_12;
  TNode<Smi> phi_bb197_21;
  TNode<Smi> phi_bb197_22;
  TNode<Smi> phi_bb197_29;
  TNode<Smi> phi_bb197_30;
  if (block197.is_used()) {
    ca_.Bind(&block197, &phi_bb197_6, &phi_bb197_7, &phi_bb197_12, &phi_bb197_21, &phi_bb197_22, &phi_bb197_29, &phi_bb197_30);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb200_7;
  TNode<Smi> phi_bb200_12;
  if (block200.is_used()) {
    ca_.Bind(&block200, &phi_bb200_7, &phi_bb200_12);
    ca_.Goto(&block37, tmp266, phi_bb200_7, tmp242, tmp255, phi_bb200_12);
  }

  TNode<Smi> phi_bb201_7;
  TNode<Smi> phi_bb201_12;
  if (block201.is_used()) {
    ca_.Bind(&block201, &phi_bb201_7, &phi_bb201_12);
    ca_.Goto(&block118, tmp266, phi_bb201_7, tmp242, tmp255, phi_bb201_12, tmp157, tmp173, tmp229, tmp153);
  }

  TNode<Smi> phi_bb117_6;
  TNode<Smi> phi_bb117_7;
  TNode<Smi> phi_bb117_10;
  TNode<Smi> phi_bb117_11;
  TNode<Smi> phi_bb117_12;
  TNode<Smi> phi_bb117_13;
  TNode<Smi> phi_bb117_14;
  TNode<Smi> phi_bb117_15;
  TNode<BoolT> phi_bb117_16;
  TNode<Smi> tmp269;
  TNode<Smi> tmp270;
  TNode<IntPtrT> tmp271;
  if (block117.is_used()) {
    ca_.Bind(&block117, &phi_bb117_6, &phi_bb117_7, &phi_bb117_10, &phi_bb117_11, &phi_bb117_12, &phi_bb117_13, &phi_bb117_14, &phi_bb117_15, &phi_bb117_16);
    tmp269 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp270 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb117_13}, TNode<Smi>{tmp269});
    tmp271 = FromConstexpr_intptr_constexpr_int31_0(state_, 40);
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{p_sortState, tmp271}, tmp270);
    ca_.Goto(&block46, phi_bb117_6, phi_bb117_7, phi_bb117_10, phi_bb117_11, phi_bb117_12, tmp270);
  }

  TNode<Smi> phi_bb45_6;
  TNode<Smi> phi_bb45_7;
  TNode<Smi> phi_bb45_10;
  TNode<Smi> phi_bb45_11;
  TNode<Smi> phi_bb45_12;
  TNode<Smi> phi_bb45_13;
  if (block45.is_used()) {
    ca_.Bind(&block45, &phi_bb45_6, &phi_bb45_7, &phi_bb45_10, &phi_bb45_11, &phi_bb45_12, &phi_bb45_13);
    ca_.Goto(&block38, phi_bb45_6, phi_bb45_7, phi_bb45_10, phi_bb45_11, phi_bb45_12);
  }

  TNode<Smi> phi_bb39_6;
  TNode<Smi> phi_bb39_7;
  TNode<Smi> phi_bb39_10;
  TNode<Smi> phi_bb39_11;
  TNode<Smi> phi_bb39_12;
  TNode<Smi> tmp272;
  TNode<BoolT> tmp273;
  if (block39.is_used()) {
    ca_.Bind(&block39, &phi_bb39_6, &phi_bb39_7, &phi_bb39_10, &phi_bb39_11, &phi_bb39_12);
    tmp272 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp273 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{phi_bb39_6}, TNode<Smi>{tmp272});
    ca_.Branch(tmp273, &block202, std::vector<compiler::Node*>{phi_bb39_6, phi_bb39_7, phi_bb39_10, phi_bb39_11, phi_bb39_12}, &block203, std::vector<compiler::Node*>{phi_bb39_6, phi_bb39_7, phi_bb39_10, phi_bb39_11, phi_bb39_12});
  }

  TNode<Smi> phi_bb202_6;
  TNode<Smi> phi_bb202_7;
  TNode<Smi> phi_bb202_10;
  TNode<Smi> phi_bb202_11;
  TNode<Smi> phi_bb202_12;
  TNode<Object> tmp274;
  if (block202.is_used()) {
    ca_.Bind(&block202, &phi_bb202_6, &phi_bb202_7, &phi_bb202_10, &phi_bb202_11, &phi_bb202_12);
    tmp274 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kCopy), p_context, tmp2, phi_bb202_11, tmp1, phi_bb202_10, phi_bb202_6);
    ca_.Goto(&block203, phi_bb202_6, phi_bb202_7, phi_bb202_10, phi_bb202_11, phi_bb202_12);
  }

  TNode<Smi> phi_bb203_6;
  TNode<Smi> phi_bb203_7;
  TNode<Smi> phi_bb203_10;
  TNode<Smi> phi_bb203_11;
  TNode<Smi> phi_bb203_12;
  if (block203.is_used()) {
    ca_.Bind(&block203, &phi_bb203_6, &phi_bb203_7, &phi_bb203_10, &phi_bb203_11, &phi_bb203_12);
    ca_.Goto(&block38, phi_bb203_6, phi_bb203_7, phi_bb203_10, phi_bb203_11, phi_bb203_12);
  }

  TNode<Smi> phi_bb38_6;
  TNode<Smi> phi_bb38_7;
  TNode<Smi> phi_bb38_10;
  TNode<Smi> phi_bb38_11;
  TNode<Smi> phi_bb38_12;
  if (block38.is_used()) {
    ca_.Bind(&block38, &phi_bb38_6, &phi_bb38_7, &phi_bb38_10, &phi_bb38_11, &phi_bb38_12);
    ca_.Goto(&block36, phi_bb38_6, phi_bb38_7, phi_bb38_10, phi_bb38_11, phi_bb38_12);
  }

  TNode<Smi> phi_bb37_6;
  TNode<Smi> phi_bb37_7;
  TNode<Smi> phi_bb37_10;
  TNode<Smi> phi_bb37_11;
  TNode<Smi> phi_bb37_12;
  TNode<Object> tmp275;
  TNode<Object> tmp276;
  TNode<IntPtrT> tmp277;
  TNode<IntPtrT> tmp278;
  TNode<Smi> tmp279;
  TNode<IntPtrT> tmp280;
  TNode<UintPtrT> tmp281;
  TNode<UintPtrT> tmp282;
  TNode<BoolT> tmp283;
  if (block37.is_used()) {
    ca_.Bind(&block37, &phi_bb37_6, &phi_bb37_7, &phi_bb37_10, &phi_bb37_11, &phi_bb37_12);
    tmp275 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kCopy), p_context, tmp1, phi_bb37_12, tmp1, phi_bb37_10, phi_bb37_7);
    std::tie(tmp276, tmp277, tmp278) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp279 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb37_10}, TNode<Smi>{phi_bb37_7});
    tmp280 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp279});
    tmp281 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp280});
    tmp282 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp278});
    tmp283 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp281}, TNode<UintPtrT>{tmp282});
    ca_.Branch(tmp283, &block215, std::vector<compiler::Node*>{phi_bb37_6, phi_bb37_7, phi_bb37_10, phi_bb37_11, phi_bb37_12}, &block216, std::vector<compiler::Node*>{phi_bb37_6, phi_bb37_7, phi_bb37_10, phi_bb37_11, phi_bb37_12});
  }

  TNode<Smi> phi_bb215_6;
  TNode<Smi> phi_bb215_7;
  TNode<Smi> phi_bb215_10;
  TNode<Smi> phi_bb215_11;
  TNode<Smi> phi_bb215_12;
  TNode<IntPtrT> tmp284;
  TNode<IntPtrT> tmp285;
  TNode<Object> tmp286;
  TNode<IntPtrT> tmp287;
  TNode<Object> tmp288;
  TNode<IntPtrT> tmp289;
  TNode<IntPtrT> tmp290;
  TNode<IntPtrT> tmp291;
  TNode<UintPtrT> tmp292;
  TNode<UintPtrT> tmp293;
  TNode<BoolT> tmp294;
  if (block215.is_used()) {
    ca_.Bind(&block215, &phi_bb215_6, &phi_bb215_7, &phi_bb215_10, &phi_bb215_11, &phi_bb215_12);
    tmp284 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp280});
    tmp285 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp277}, TNode<IntPtrT>{tmp284});
    std::tie(tmp286, tmp287) = NewReference_Object_0(state_, TNode<Object>{tmp276}, TNode<IntPtrT>{tmp285}).Flatten();
    std::tie(tmp288, tmp289, tmp290) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp2}).Flatten();
    tmp291 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb215_11});
    tmp292 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp291});
    tmp293 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp290});
    tmp294 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp292}, TNode<UintPtrT>{tmp293});
    ca_.Branch(tmp294, &block223, std::vector<compiler::Node*>{phi_bb215_6, phi_bb215_7, phi_bb215_10, phi_bb215_11, phi_bb215_12, phi_bb215_11, phi_bb215_11}, &block224, std::vector<compiler::Node*>{phi_bb215_6, phi_bb215_7, phi_bb215_10, phi_bb215_11, phi_bb215_12, phi_bb215_11, phi_bb215_11});
  }

  TNode<Smi> phi_bb216_6;
  TNode<Smi> phi_bb216_7;
  TNode<Smi> phi_bb216_10;
  TNode<Smi> phi_bb216_11;
  TNode<Smi> phi_bb216_12;
  if (block216.is_used()) {
    ca_.Bind(&block216, &phi_bb216_6, &phi_bb216_7, &phi_bb216_10, &phi_bb216_11, &phi_bb216_12);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb223_6;
  TNode<Smi> phi_bb223_7;
  TNode<Smi> phi_bb223_10;
  TNode<Smi> phi_bb223_11;
  TNode<Smi> phi_bb223_12;
  TNode<Smi> phi_bb223_25;
  TNode<Smi> phi_bb223_26;
  TNode<IntPtrT> tmp295;
  TNode<IntPtrT> tmp296;
  TNode<Object> tmp297;
  TNode<IntPtrT> tmp298;
  TNode<Object> tmp299;
  if (block223.is_used()) {
    ca_.Bind(&block223, &phi_bb223_6, &phi_bb223_7, &phi_bb223_10, &phi_bb223_11, &phi_bb223_12, &phi_bb223_25, &phi_bb223_26);
    tmp295 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp291});
    tmp296 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp289}, TNode<IntPtrT>{tmp295});
    std::tie(tmp297, tmp298) = NewReference_Object_0(state_, TNode<Object>{tmp288}, TNode<IntPtrT>{tmp296}).Flatten();
    tmp299 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp297, tmp298});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp286, tmp287}, tmp299);
    ca_.Goto(&block36, phi_bb223_6, phi_bb223_7, phi_bb223_10, phi_bb223_11, phi_bb223_12);
  }

  TNode<Smi> phi_bb224_6;
  TNode<Smi> phi_bb224_7;
  TNode<Smi> phi_bb224_10;
  TNode<Smi> phi_bb224_11;
  TNode<Smi> phi_bb224_12;
  TNode<Smi> phi_bb224_25;
  TNode<Smi> phi_bb224_26;
  if (block224.is_used()) {
    ca_.Bind(&block224, &phi_bb224_6, &phi_bb224_7, &phi_bb224_10, &phi_bb224_11, &phi_bb224_12, &phi_bb224_25, &phi_bb224_26);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb36_6;
  TNode<Smi> phi_bb36_7;
  TNode<Smi> phi_bb36_10;
  TNode<Smi> phi_bb36_11;
  TNode<Smi> phi_bb36_12;
  if (block36.is_used()) {
    ca_.Bind(&block36, &phi_bb36_6, &phi_bb36_7, &phi_bb36_10, &phi_bb36_11, &phi_bb36_12);
    ca_.Goto(&block227);
  }

    ca_.Bind(&block227);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=1022&c=1
void MergeHigh_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState, TNode<Smi> p_baseA, TNode<Smi> p_lengthAArg, TNode<Smi> p_baseB, TNode<Smi> p_lengthBArg) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block69(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block70(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block73(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block80(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block81(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block88(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block89(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block92(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block93(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block94(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block95(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block74(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block100(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block101(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block108(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block109(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block112(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block113(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block114(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block115(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block75(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, BoolT> block118(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, BoolT> block119(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, BoolT> block120(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, BoolT, BoolT> block121(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, BoolT> block122(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, BoolT> block123(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, BoolT, BoolT> block124(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, BoolT> block116(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block136(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block137(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi> block144(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block146(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block147(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi> block145(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi> block152(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi> block153(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block160(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi> block161(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block164(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block165(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi> block170(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi> block171(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block178(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block180(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block181(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block182(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block183(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi> block179(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi> block188(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi> block189(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi> block196(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi> block197(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block200(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block201(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi, Smi, Smi, BoolT> block117(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi, Smi> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi> block202(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi> block203(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block219(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block220(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi> block227(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi> block228(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block231(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<FixedArray> tmp1;
  TNode<FixedArray> tmp2;
  TNode<Smi> tmp3;
  TNode<Object> tmp4;
  TNode<Smi> tmp5;
  TNode<Smi> tmp6;
  TNode<Smi> tmp7;
  TNode<Smi> tmp8;
  TNode<Smi> tmp9;
  TNode<Smi> tmp10;
  TNode<Smi> tmp11;
  TNode<Smi> tmp12;
  TNode<Object> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<Smi> tmp16;
  TNode<Smi> tmp17;
  TNode<IntPtrT> tmp18;
  TNode<UintPtrT> tmp19;
  TNode<UintPtrT> tmp20;
  TNode<BoolT> tmp21;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 52);
    tmp1 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{p_sortState, tmp0});
    tmp2 = GetTempArray_0(state_, TNode<Context>{p_context}, TNode<SortState>{p_sortState}, TNode<Smi>{p_lengthBArg});
    tmp3 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp4 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kCopy), p_context, tmp1, p_baseB, tmp2, tmp3, p_lengthBArg);
    tmp5 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{p_baseB}, TNode<Smi>{p_lengthBArg});
    tmp6 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp7 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp5}, TNode<Smi>{tmp6});
    tmp8 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp9 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{p_lengthBArg}, TNode<Smi>{tmp8});
    tmp10 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{p_baseA}, TNode<Smi>{p_lengthAArg});
    tmp11 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp12 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp10}, TNode<Smi>{tmp11});
    std::tie(tmp13, tmp14, tmp15) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp16 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp17 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp7}, TNode<Smi>{tmp16});
    tmp18 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp7});
    tmp19 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp18});
    tmp20 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp15});
    tmp21 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp19}, TNode<UintPtrT>{tmp20});
    ca_.Branch(tmp21, &block24, std::vector<compiler::Node*>{}, &block25, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<Object> tmp24;
  TNode<IntPtrT> tmp25;
  TNode<Object> tmp26;
  TNode<IntPtrT> tmp27;
  TNode<IntPtrT> tmp28;
  TNode<Smi> tmp29;
  TNode<Smi> tmp30;
  TNode<IntPtrT> tmp31;
  TNode<UintPtrT> tmp32;
  TNode<UintPtrT> tmp33;
  TNode<BoolT> tmp34;
  if (block24.is_used()) {
    ca_.Bind(&block24);
    tmp22 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp18});
    tmp23 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp14}, TNode<IntPtrT>{tmp22});
    std::tie(tmp24, tmp25) = NewReference_Object_0(state_, TNode<Object>{tmp13}, TNode<IntPtrT>{tmp23}).Flatten();
    std::tie(tmp26, tmp27, tmp28) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp29 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp30 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp12}, TNode<Smi>{tmp29});
    tmp31 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp12});
    tmp32 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp31});
    tmp33 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp28});
    tmp34 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp32}, TNode<UintPtrT>{tmp33});
    ca_.Branch(tmp34, &block32, std::vector<compiler::Node*>{}, &block33, std::vector<compiler::Node*>{});
  }

  if (block25.is_used()) {
    ca_.Bind(&block25);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp35;
  TNode<IntPtrT> tmp36;
  TNode<Object> tmp37;
  TNode<IntPtrT> tmp38;
  TNode<Object> tmp39;
  TNode<Smi> tmp40;
  TNode<Smi> tmp41;
  TNode<Smi> tmp42;
  TNode<BoolT> tmp43;
  if (block32.is_used()) {
    ca_.Bind(&block32);
    tmp35 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp31});
    tmp36 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp27}, TNode<IntPtrT>{tmp35});
    std::tie(tmp37, tmp38) = NewReference_Object_0(state_, TNode<Object>{tmp26}, TNode<IntPtrT>{tmp36}).Flatten();
    tmp39 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp37, tmp38});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp24, tmp25}, tmp39);
    tmp40 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp41 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{p_lengthAArg}, TNode<Smi>{tmp40});
    tmp42 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp43 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp41}, TNode<Smi>{tmp42});
    ca_.Branch(tmp43, &block40, std::vector<compiler::Node*>{}, &block41, std::vector<compiler::Node*>{});
  }

  if (block33.is_used()) {
    ca_.Bind(&block33);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block40.is_used()) {
    ca_.Bind(&block40);
    ca_.Goto(&block39, tmp41, p_lengthBArg, tmp17, tmp9, tmp30);
  }

  TNode<Smi> tmp44;
  TNode<BoolT> tmp45;
  if (block41.is_used()) {
    ca_.Bind(&block41);
    tmp44 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp45 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{p_lengthBArg}, TNode<Smi>{tmp44});
    ca_.Branch(tmp45, &block42, std::vector<compiler::Node*>{}, &block43, std::vector<compiler::Node*>{});
  }

  if (block42.is_used()) {
    ca_.Bind(&block42);
    ca_.Goto(&block37, tmp41, p_lengthBArg, tmp17, tmp9, tmp30);
  }

  TNode<IntPtrT> tmp46;
  TNode<Smi> tmp47;
  if (block43.is_used()) {
    ca_.Bind(&block43);
    tmp46 = FromConstexpr_intptr_constexpr_int31_0(state_, 40);
    tmp47 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_sortState, tmp46});
    ca_.Goto(&block46, tmp41, p_lengthBArg, tmp17, tmp9, tmp30, tmp47);
  }

  TNode<Smi> phi_bb46_6;
  TNode<Smi> phi_bb46_7;
  TNode<Smi> phi_bb46_10;
  TNode<Smi> phi_bb46_11;
  TNode<Smi> phi_bb46_12;
  TNode<Smi> phi_bb46_13;
  TNode<BoolT> tmp48;
  if (block46.is_used()) {
    ca_.Bind(&block46, &phi_bb46_6, &phi_bb46_7, &phi_bb46_10, &phi_bb46_11, &phi_bb46_12, &phi_bb46_13);
    tmp48 = CodeStubAssembler(state_).Int32TrueConstant();
    ca_.Branch(tmp48, &block44, std::vector<compiler::Node*>{phi_bb46_6, phi_bb46_7, phi_bb46_10, phi_bb46_11, phi_bb46_12, phi_bb46_13}, &block45, std::vector<compiler::Node*>{phi_bb46_6, phi_bb46_7, phi_bb46_10, phi_bb46_11, phi_bb46_12, phi_bb46_13});
  }

  TNode<Smi> phi_bb44_6;
  TNode<Smi> phi_bb44_7;
  TNode<Smi> phi_bb44_10;
  TNode<Smi> phi_bb44_11;
  TNode<Smi> phi_bb44_12;
  TNode<Smi> phi_bb44_13;
  TNode<Smi> tmp49;
  TNode<Smi> tmp50;
  if (block44.is_used()) {
    ca_.Bind(&block44, &phi_bb44_6, &phi_bb44_7, &phi_bb44_10, &phi_bb44_11, &phi_bb44_12, &phi_bb44_13);
    tmp49 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp50 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block49, phi_bb44_6, phi_bb44_7, phi_bb44_10, phi_bb44_11, phi_bb44_12, phi_bb44_13, tmp49, tmp50);
  }

  TNode<Smi> phi_bb49_6;
  TNode<Smi> phi_bb49_7;
  TNode<Smi> phi_bb49_10;
  TNode<Smi> phi_bb49_11;
  TNode<Smi> phi_bb49_12;
  TNode<Smi> phi_bb49_13;
  TNode<Smi> phi_bb49_14;
  TNode<Smi> phi_bb49_15;
  TNode<BoolT> tmp51;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_6, &phi_bb49_7, &phi_bb49_10, &phi_bb49_11, &phi_bb49_12, &phi_bb49_13, &phi_bb49_14, &phi_bb49_15);
    tmp51 = CodeStubAssembler(state_).Int32TrueConstant();
    ca_.Branch(tmp51, &block47, std::vector<compiler::Node*>{phi_bb49_6, phi_bb49_7, phi_bb49_10, phi_bb49_11, phi_bb49_12, phi_bb49_13, phi_bb49_14, phi_bb49_15}, &block48, std::vector<compiler::Node*>{phi_bb49_6, phi_bb49_7, phi_bb49_10, phi_bb49_11, phi_bb49_12, phi_bb49_13, phi_bb49_14, phi_bb49_15});
  }

  TNode<Smi> phi_bb47_6;
  TNode<Smi> phi_bb47_7;
  TNode<Smi> phi_bb47_10;
  TNode<Smi> phi_bb47_11;
  TNode<Smi> phi_bb47_12;
  TNode<Smi> phi_bb47_13;
  TNode<Smi> phi_bb47_14;
  TNode<Smi> phi_bb47_15;
  TNode<Object> tmp52;
  TNode<IntPtrT> tmp53;
  TNode<IntPtrT> tmp54;
  TNode<IntPtrT> tmp55;
  TNode<UintPtrT> tmp56;
  TNode<UintPtrT> tmp57;
  TNode<BoolT> tmp58;
  if (block47.is_used()) {
    ca_.Bind(&block47, &phi_bb47_6, &phi_bb47_7, &phi_bb47_10, &phi_bb47_11, &phi_bb47_12, &phi_bb47_13, &phi_bb47_14, &phi_bb47_15);
    std::tie(tmp52, tmp53, tmp54) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp2}).Flatten();
    tmp55 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb47_11});
    tmp56 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp55});
    tmp57 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp54});
    tmp58 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp56}, TNode<UintPtrT>{tmp57});
    ca_.Branch(tmp58, &block61, std::vector<compiler::Node*>{phi_bb47_6, phi_bb47_7, phi_bb47_10, phi_bb47_11, phi_bb47_12, phi_bb47_13, phi_bb47_14, phi_bb47_15, phi_bb47_11, phi_bb47_11}, &block62, std::vector<compiler::Node*>{phi_bb47_6, phi_bb47_7, phi_bb47_10, phi_bb47_11, phi_bb47_12, phi_bb47_13, phi_bb47_14, phi_bb47_15, phi_bb47_11, phi_bb47_11});
  }

  TNode<Smi> phi_bb61_6;
  TNode<Smi> phi_bb61_7;
  TNode<Smi> phi_bb61_10;
  TNode<Smi> phi_bb61_11;
  TNode<Smi> phi_bb61_12;
  TNode<Smi> phi_bb61_13;
  TNode<Smi> phi_bb61_14;
  TNode<Smi> phi_bb61_15;
  TNode<Smi> phi_bb61_21;
  TNode<Smi> phi_bb61_22;
  TNode<IntPtrT> tmp59;
  TNode<IntPtrT> tmp60;
  TNode<Object> tmp61;
  TNode<IntPtrT> tmp62;
  TNode<Object> tmp63;
  TNode<Object> tmp64;
  TNode<Object> tmp65;
  TNode<IntPtrT> tmp66;
  TNode<IntPtrT> tmp67;
  TNode<IntPtrT> tmp68;
  TNode<UintPtrT> tmp69;
  TNode<UintPtrT> tmp70;
  TNode<BoolT> tmp71;
  if (block61.is_used()) {
    ca_.Bind(&block61, &phi_bb61_6, &phi_bb61_7, &phi_bb61_10, &phi_bb61_11, &phi_bb61_12, &phi_bb61_13, &phi_bb61_14, &phi_bb61_15, &phi_bb61_21, &phi_bb61_22);
    tmp59 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp55});
    tmp60 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp53}, TNode<IntPtrT>{tmp59});
    std::tie(tmp61, tmp62) = NewReference_Object_0(state_, TNode<Object>{tmp52}, TNode<IntPtrT>{tmp60}).Flatten();
    tmp63 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp61, tmp62});
    tmp64 = UnsafeCast_JSAny_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp63});
    std::tie(tmp65, tmp66, tmp67) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp68 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb61_12});
    tmp69 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp68});
    tmp70 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp67});
    tmp71 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp69}, TNode<UintPtrT>{tmp70});
    ca_.Branch(tmp71, &block69, std::vector<compiler::Node*>{phi_bb61_6, phi_bb61_7, phi_bb61_10, phi_bb61_11, phi_bb61_12, phi_bb61_13, phi_bb61_14, phi_bb61_15, phi_bb61_12, phi_bb61_12}, &block70, std::vector<compiler::Node*>{phi_bb61_6, phi_bb61_7, phi_bb61_10, phi_bb61_11, phi_bb61_12, phi_bb61_13, phi_bb61_14, phi_bb61_15, phi_bb61_12, phi_bb61_12});
  }

  TNode<Smi> phi_bb62_6;
  TNode<Smi> phi_bb62_7;
  TNode<Smi> phi_bb62_10;
  TNode<Smi> phi_bb62_11;
  TNode<Smi> phi_bb62_12;
  TNode<Smi> phi_bb62_13;
  TNode<Smi> phi_bb62_14;
  TNode<Smi> phi_bb62_15;
  TNode<Smi> phi_bb62_21;
  TNode<Smi> phi_bb62_22;
  if (block62.is_used()) {
    ca_.Bind(&block62, &phi_bb62_6, &phi_bb62_7, &phi_bb62_10, &phi_bb62_11, &phi_bb62_12, &phi_bb62_13, &phi_bb62_14, &phi_bb62_15, &phi_bb62_21, &phi_bb62_22);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb69_6;
  TNode<Smi> phi_bb69_7;
  TNode<Smi> phi_bb69_10;
  TNode<Smi> phi_bb69_11;
  TNode<Smi> phi_bb69_12;
  TNode<Smi> phi_bb69_13;
  TNode<Smi> phi_bb69_14;
  TNode<Smi> phi_bb69_15;
  TNode<Smi> phi_bb69_22;
  TNode<Smi> phi_bb69_23;
  TNode<IntPtrT> tmp72;
  TNode<IntPtrT> tmp73;
  TNode<Object> tmp74;
  TNode<IntPtrT> tmp75;
  TNode<Object> tmp76;
  TNode<Object> tmp77;
  TNode<Number> tmp78;
  TNode<Number> tmp79;
  TNode<BoolT> tmp80;
  if (block69.is_used()) {
    ca_.Bind(&block69, &phi_bb69_6, &phi_bb69_7, &phi_bb69_10, &phi_bb69_11, &phi_bb69_12, &phi_bb69_13, &phi_bb69_14, &phi_bb69_15, &phi_bb69_22, &phi_bb69_23);
    tmp72 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp68});
    tmp73 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp66}, TNode<IntPtrT>{tmp72});
    std::tie(tmp74, tmp75) = NewReference_Object_0(state_, TNode<Object>{tmp65}, TNode<IntPtrT>{tmp73}).Flatten();
    tmp76 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp74, tmp75});
    tmp77 = UnsafeCast_JSAny_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp76});
    tmp78 = Method_SortState_Compare_0(state_, TNode<Context>{p_context}, TNode<SortState>{p_sortState}, TNode<Object>{tmp64}, TNode<Object>{tmp77});
    tmp79 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp80 = NumberIsLessThan_0(state_, TNode<Number>{tmp78}, TNode<Number>{tmp79});
    ca_.Branch(tmp80, &block73, std::vector<compiler::Node*>{phi_bb69_6, phi_bb69_7, phi_bb69_10, phi_bb69_11, phi_bb69_12, phi_bb69_13, phi_bb69_14, phi_bb69_15}, &block74, std::vector<compiler::Node*>{phi_bb69_6, phi_bb69_7, phi_bb69_10, phi_bb69_11, phi_bb69_12, phi_bb69_13, phi_bb69_14, phi_bb69_15});
  }

  TNode<Smi> phi_bb70_6;
  TNode<Smi> phi_bb70_7;
  TNode<Smi> phi_bb70_10;
  TNode<Smi> phi_bb70_11;
  TNode<Smi> phi_bb70_12;
  TNode<Smi> phi_bb70_13;
  TNode<Smi> phi_bb70_14;
  TNode<Smi> phi_bb70_15;
  TNode<Smi> phi_bb70_22;
  TNode<Smi> phi_bb70_23;
  if (block70.is_used()) {
    ca_.Bind(&block70, &phi_bb70_6, &phi_bb70_7, &phi_bb70_10, &phi_bb70_11, &phi_bb70_12, &phi_bb70_13, &phi_bb70_14, &phi_bb70_15, &phi_bb70_22, &phi_bb70_23);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb73_6;
  TNode<Smi> phi_bb73_7;
  TNode<Smi> phi_bb73_10;
  TNode<Smi> phi_bb73_11;
  TNode<Smi> phi_bb73_12;
  TNode<Smi> phi_bb73_13;
  TNode<Smi> phi_bb73_14;
  TNode<Smi> phi_bb73_15;
  TNode<Object> tmp81;
  TNode<IntPtrT> tmp82;
  TNode<IntPtrT> tmp83;
  TNode<Smi> tmp84;
  TNode<Smi> tmp85;
  TNode<IntPtrT> tmp86;
  TNode<UintPtrT> tmp87;
  TNode<UintPtrT> tmp88;
  TNode<BoolT> tmp89;
  if (block73.is_used()) {
    ca_.Bind(&block73, &phi_bb73_6, &phi_bb73_7, &phi_bb73_10, &phi_bb73_11, &phi_bb73_12, &phi_bb73_13, &phi_bb73_14, &phi_bb73_15);
    std::tie(tmp81, tmp82, tmp83) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp84 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp85 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb73_10}, TNode<Smi>{tmp84});
    tmp86 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb73_10});
    tmp87 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp86});
    tmp88 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp83});
    tmp89 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp87}, TNode<UintPtrT>{tmp88});
    ca_.Branch(tmp89, &block80, std::vector<compiler::Node*>{phi_bb73_6, phi_bb73_7, phi_bb73_11, phi_bb73_12, phi_bb73_13, phi_bb73_14, phi_bb73_15, phi_bb73_10, phi_bb73_10}, &block81, std::vector<compiler::Node*>{phi_bb73_6, phi_bb73_7, phi_bb73_11, phi_bb73_12, phi_bb73_13, phi_bb73_14, phi_bb73_15, phi_bb73_10, phi_bb73_10});
  }

  TNode<Smi> phi_bb80_6;
  TNode<Smi> phi_bb80_7;
  TNode<Smi> phi_bb80_11;
  TNode<Smi> phi_bb80_12;
  TNode<Smi> phi_bb80_13;
  TNode<Smi> phi_bb80_14;
  TNode<Smi> phi_bb80_15;
  TNode<Smi> phi_bb80_21;
  TNode<Smi> phi_bb80_22;
  TNode<IntPtrT> tmp90;
  TNode<IntPtrT> tmp91;
  TNode<Object> tmp92;
  TNode<IntPtrT> tmp93;
  TNode<Object> tmp94;
  TNode<IntPtrT> tmp95;
  TNode<IntPtrT> tmp96;
  TNode<Smi> tmp97;
  TNode<Smi> tmp98;
  TNode<IntPtrT> tmp99;
  TNode<UintPtrT> tmp100;
  TNode<UintPtrT> tmp101;
  TNode<BoolT> tmp102;
  if (block80.is_used()) {
    ca_.Bind(&block80, &phi_bb80_6, &phi_bb80_7, &phi_bb80_11, &phi_bb80_12, &phi_bb80_13, &phi_bb80_14, &phi_bb80_15, &phi_bb80_21, &phi_bb80_22);
    tmp90 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp86});
    tmp91 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp82}, TNode<IntPtrT>{tmp90});
    std::tie(tmp92, tmp93) = NewReference_Object_0(state_, TNode<Object>{tmp81}, TNode<IntPtrT>{tmp91}).Flatten();
    std::tie(tmp94, tmp95, tmp96) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp97 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp98 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb80_12}, TNode<Smi>{tmp97});
    tmp99 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb80_12});
    tmp100 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp99});
    tmp101 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp96});
    tmp102 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp100}, TNode<UintPtrT>{tmp101});
    ca_.Branch(tmp102, &block88, std::vector<compiler::Node*>{phi_bb80_6, phi_bb80_7, phi_bb80_11, phi_bb80_13, phi_bb80_14, phi_bb80_15, phi_bb80_21, phi_bb80_22, phi_bb80_12, phi_bb80_12}, &block89, std::vector<compiler::Node*>{phi_bb80_6, phi_bb80_7, phi_bb80_11, phi_bb80_13, phi_bb80_14, phi_bb80_15, phi_bb80_21, phi_bb80_22, phi_bb80_12, phi_bb80_12});
  }

  TNode<Smi> phi_bb81_6;
  TNode<Smi> phi_bb81_7;
  TNode<Smi> phi_bb81_11;
  TNode<Smi> phi_bb81_12;
  TNode<Smi> phi_bb81_13;
  TNode<Smi> phi_bb81_14;
  TNode<Smi> phi_bb81_15;
  TNode<Smi> phi_bb81_21;
  TNode<Smi> phi_bb81_22;
  if (block81.is_used()) {
    ca_.Bind(&block81, &phi_bb81_6, &phi_bb81_7, &phi_bb81_11, &phi_bb81_12, &phi_bb81_13, &phi_bb81_14, &phi_bb81_15, &phi_bb81_21, &phi_bb81_22);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb88_6;
  TNode<Smi> phi_bb88_7;
  TNode<Smi> phi_bb88_11;
  TNode<Smi> phi_bb88_13;
  TNode<Smi> phi_bb88_14;
  TNode<Smi> phi_bb88_15;
  TNode<Smi> phi_bb88_21;
  TNode<Smi> phi_bb88_22;
  TNode<Smi> phi_bb88_29;
  TNode<Smi> phi_bb88_30;
  TNode<IntPtrT> tmp103;
  TNode<IntPtrT> tmp104;
  TNode<Object> tmp105;
  TNode<IntPtrT> tmp106;
  TNode<Object> tmp107;
  TNode<Smi> tmp108;
  TNode<Smi> tmp109;
  TNode<Smi> tmp110;
  TNode<Smi> tmp111;
  TNode<Smi> tmp112;
  TNode<Smi> tmp113;
  TNode<BoolT> tmp114;
  if (block88.is_used()) {
    ca_.Bind(&block88, &phi_bb88_6, &phi_bb88_7, &phi_bb88_11, &phi_bb88_13, &phi_bb88_14, &phi_bb88_15, &phi_bb88_21, &phi_bb88_22, &phi_bb88_29, &phi_bb88_30);
    tmp103 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp99});
    tmp104 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp95}, TNode<IntPtrT>{tmp103});
    std::tie(tmp105, tmp106) = NewReference_Object_0(state_, TNode<Object>{tmp94}, TNode<IntPtrT>{tmp104}).Flatten();
    tmp107 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp105, tmp106});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp92, tmp93}, tmp107);
    tmp108 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp109 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb88_14}, TNode<Smi>{tmp108});
    tmp110 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp111 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb88_6}, TNode<Smi>{tmp110});
    tmp112 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp113 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp114 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp111}, TNode<Smi>{tmp113});
    ca_.Branch(tmp114, &block92, std::vector<compiler::Node*>{phi_bb88_7, phi_bb88_11, phi_bb88_13}, &block93, std::vector<compiler::Node*>{phi_bb88_7, phi_bb88_11, phi_bb88_13});
  }

  TNode<Smi> phi_bb89_6;
  TNode<Smi> phi_bb89_7;
  TNode<Smi> phi_bb89_11;
  TNode<Smi> phi_bb89_13;
  TNode<Smi> phi_bb89_14;
  TNode<Smi> phi_bb89_15;
  TNode<Smi> phi_bb89_21;
  TNode<Smi> phi_bb89_22;
  TNode<Smi> phi_bb89_29;
  TNode<Smi> phi_bb89_30;
  if (block89.is_used()) {
    ca_.Bind(&block89, &phi_bb89_6, &phi_bb89_7, &phi_bb89_11, &phi_bb89_13, &phi_bb89_14, &phi_bb89_15, &phi_bb89_21, &phi_bb89_22, &phi_bb89_29, &phi_bb89_30);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb92_7;
  TNode<Smi> phi_bb92_11;
  TNode<Smi> phi_bb92_13;
  if (block92.is_used()) {
    ca_.Bind(&block92, &phi_bb92_7, &phi_bb92_11, &phi_bb92_13);
    ca_.Goto(&block39, tmp111, phi_bb92_7, tmp85, phi_bb92_11, tmp98);
  }

  TNode<Smi> phi_bb93_7;
  TNode<Smi> phi_bb93_11;
  TNode<Smi> phi_bb93_13;
  TNode<BoolT> tmp115;
  if (block93.is_used()) {
    ca_.Bind(&block93, &phi_bb93_7, &phi_bb93_11, &phi_bb93_13);
    tmp115 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(TNode<Smi>{tmp109}, TNode<Smi>{phi_bb93_13});
    ca_.Branch(tmp115, &block94, std::vector<compiler::Node*>{phi_bb93_7, phi_bb93_11, phi_bb93_13}, &block95, std::vector<compiler::Node*>{phi_bb93_7, phi_bb93_11, phi_bb93_13});
  }

  TNode<Smi> phi_bb94_7;
  TNode<Smi> phi_bb94_11;
  TNode<Smi> phi_bb94_13;
  if (block94.is_used()) {
    ca_.Bind(&block94, &phi_bb94_7, &phi_bb94_11, &phi_bb94_13);
    ca_.Goto(&block48, tmp111, phi_bb94_7, tmp85, phi_bb94_11, tmp98, phi_bb94_13, tmp109, tmp112);
  }

  TNode<Smi> phi_bb95_7;
  TNode<Smi> phi_bb95_11;
  TNode<Smi> phi_bb95_13;
  if (block95.is_used()) {
    ca_.Bind(&block95, &phi_bb95_7, &phi_bb95_11, &phi_bb95_13);
    ca_.Goto(&block75, tmp111, phi_bb95_7, tmp85, phi_bb95_11, tmp98, phi_bb95_13, tmp109, tmp112);
  }

  TNode<Smi> phi_bb74_6;
  TNode<Smi> phi_bb74_7;
  TNode<Smi> phi_bb74_10;
  TNode<Smi> phi_bb74_11;
  TNode<Smi> phi_bb74_12;
  TNode<Smi> phi_bb74_13;
  TNode<Smi> phi_bb74_14;
  TNode<Smi> phi_bb74_15;
  TNode<Object> tmp116;
  TNode<IntPtrT> tmp117;
  TNode<IntPtrT> tmp118;
  TNode<Smi> tmp119;
  TNode<Smi> tmp120;
  TNode<IntPtrT> tmp121;
  TNode<UintPtrT> tmp122;
  TNode<UintPtrT> tmp123;
  TNode<BoolT> tmp124;
  if (block74.is_used()) {
    ca_.Bind(&block74, &phi_bb74_6, &phi_bb74_7, &phi_bb74_10, &phi_bb74_11, &phi_bb74_12, &phi_bb74_13, &phi_bb74_14, &phi_bb74_15);
    std::tie(tmp116, tmp117, tmp118) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp119 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp120 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb74_10}, TNode<Smi>{tmp119});
    tmp121 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb74_10});
    tmp122 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp121});
    tmp123 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp118});
    tmp124 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp122}, TNode<UintPtrT>{tmp123});
    ca_.Branch(tmp124, &block100, std::vector<compiler::Node*>{phi_bb74_6, phi_bb74_7, phi_bb74_11, phi_bb74_12, phi_bb74_13, phi_bb74_14, phi_bb74_15, phi_bb74_10, phi_bb74_10}, &block101, std::vector<compiler::Node*>{phi_bb74_6, phi_bb74_7, phi_bb74_11, phi_bb74_12, phi_bb74_13, phi_bb74_14, phi_bb74_15, phi_bb74_10, phi_bb74_10});
  }

  TNode<Smi> phi_bb100_6;
  TNode<Smi> phi_bb100_7;
  TNode<Smi> phi_bb100_11;
  TNode<Smi> phi_bb100_12;
  TNode<Smi> phi_bb100_13;
  TNode<Smi> phi_bb100_14;
  TNode<Smi> phi_bb100_15;
  TNode<Smi> phi_bb100_21;
  TNode<Smi> phi_bb100_22;
  TNode<IntPtrT> tmp125;
  TNode<IntPtrT> tmp126;
  TNode<Object> tmp127;
  TNode<IntPtrT> tmp128;
  TNode<Object> tmp129;
  TNode<IntPtrT> tmp130;
  TNode<IntPtrT> tmp131;
  TNode<Smi> tmp132;
  TNode<Smi> tmp133;
  TNode<IntPtrT> tmp134;
  TNode<UintPtrT> tmp135;
  TNode<UintPtrT> tmp136;
  TNode<BoolT> tmp137;
  if (block100.is_used()) {
    ca_.Bind(&block100, &phi_bb100_6, &phi_bb100_7, &phi_bb100_11, &phi_bb100_12, &phi_bb100_13, &phi_bb100_14, &phi_bb100_15, &phi_bb100_21, &phi_bb100_22);
    tmp125 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp121});
    tmp126 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp117}, TNode<IntPtrT>{tmp125});
    std::tie(tmp127, tmp128) = NewReference_Object_0(state_, TNode<Object>{tmp116}, TNode<IntPtrT>{tmp126}).Flatten();
    std::tie(tmp129, tmp130, tmp131) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp2}).Flatten();
    tmp132 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp133 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb100_11}, TNode<Smi>{tmp132});
    tmp134 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb100_11});
    tmp135 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp134});
    tmp136 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp131});
    tmp137 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp135}, TNode<UintPtrT>{tmp136});
    ca_.Branch(tmp137, &block108, std::vector<compiler::Node*>{phi_bb100_6, phi_bb100_7, phi_bb100_12, phi_bb100_13, phi_bb100_14, phi_bb100_15, phi_bb100_21, phi_bb100_22, phi_bb100_11, phi_bb100_11}, &block109, std::vector<compiler::Node*>{phi_bb100_6, phi_bb100_7, phi_bb100_12, phi_bb100_13, phi_bb100_14, phi_bb100_15, phi_bb100_21, phi_bb100_22, phi_bb100_11, phi_bb100_11});
  }

  TNode<Smi> phi_bb101_6;
  TNode<Smi> phi_bb101_7;
  TNode<Smi> phi_bb101_11;
  TNode<Smi> phi_bb101_12;
  TNode<Smi> phi_bb101_13;
  TNode<Smi> phi_bb101_14;
  TNode<Smi> phi_bb101_15;
  TNode<Smi> phi_bb101_21;
  TNode<Smi> phi_bb101_22;
  if (block101.is_used()) {
    ca_.Bind(&block101, &phi_bb101_6, &phi_bb101_7, &phi_bb101_11, &phi_bb101_12, &phi_bb101_13, &phi_bb101_14, &phi_bb101_15, &phi_bb101_21, &phi_bb101_22);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb108_6;
  TNode<Smi> phi_bb108_7;
  TNode<Smi> phi_bb108_12;
  TNode<Smi> phi_bb108_13;
  TNode<Smi> phi_bb108_14;
  TNode<Smi> phi_bb108_15;
  TNode<Smi> phi_bb108_21;
  TNode<Smi> phi_bb108_22;
  TNode<Smi> phi_bb108_29;
  TNode<Smi> phi_bb108_30;
  TNode<IntPtrT> tmp138;
  TNode<IntPtrT> tmp139;
  TNode<Object> tmp140;
  TNode<IntPtrT> tmp141;
  TNode<Object> tmp142;
  TNode<Smi> tmp143;
  TNode<Smi> tmp144;
  TNode<Smi> tmp145;
  TNode<Smi> tmp146;
  TNode<Smi> tmp147;
  TNode<Smi> tmp148;
  TNode<BoolT> tmp149;
  if (block108.is_used()) {
    ca_.Bind(&block108, &phi_bb108_6, &phi_bb108_7, &phi_bb108_12, &phi_bb108_13, &phi_bb108_14, &phi_bb108_15, &phi_bb108_21, &phi_bb108_22, &phi_bb108_29, &phi_bb108_30);
    tmp138 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp134});
    tmp139 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp130}, TNode<IntPtrT>{tmp138});
    std::tie(tmp140, tmp141) = NewReference_Object_0(state_, TNode<Object>{tmp129}, TNode<IntPtrT>{tmp139}).Flatten();
    tmp142 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp140, tmp141});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp127, tmp128}, tmp142);
    tmp143 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp144 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb108_15}, TNode<Smi>{tmp143});
    tmp145 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp146 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb108_7}, TNode<Smi>{tmp145});
    tmp147 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp148 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp149 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp146}, TNode<Smi>{tmp148});
    ca_.Branch(tmp149, &block112, std::vector<compiler::Node*>{phi_bb108_6, phi_bb108_12, phi_bb108_13}, &block113, std::vector<compiler::Node*>{phi_bb108_6, phi_bb108_12, phi_bb108_13});
  }

  TNode<Smi> phi_bb109_6;
  TNode<Smi> phi_bb109_7;
  TNode<Smi> phi_bb109_12;
  TNode<Smi> phi_bb109_13;
  TNode<Smi> phi_bb109_14;
  TNode<Smi> phi_bb109_15;
  TNode<Smi> phi_bb109_21;
  TNode<Smi> phi_bb109_22;
  TNode<Smi> phi_bb109_29;
  TNode<Smi> phi_bb109_30;
  if (block109.is_used()) {
    ca_.Bind(&block109, &phi_bb109_6, &phi_bb109_7, &phi_bb109_12, &phi_bb109_13, &phi_bb109_14, &phi_bb109_15, &phi_bb109_21, &phi_bb109_22, &phi_bb109_29, &phi_bb109_30);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb112_6;
  TNode<Smi> phi_bb112_12;
  TNode<Smi> phi_bb112_13;
  if (block112.is_used()) {
    ca_.Bind(&block112, &phi_bb112_6, &phi_bb112_12, &phi_bb112_13);
    ca_.Goto(&block37, phi_bb112_6, tmp146, tmp120, tmp133, phi_bb112_12);
  }

  TNode<Smi> phi_bb113_6;
  TNode<Smi> phi_bb113_12;
  TNode<Smi> phi_bb113_13;
  TNode<BoolT> tmp150;
  if (block113.is_used()) {
    ca_.Bind(&block113, &phi_bb113_6, &phi_bb113_12, &phi_bb113_13);
    tmp150 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(TNode<Smi>{tmp144}, TNode<Smi>{phi_bb113_13});
    ca_.Branch(tmp150, &block114, std::vector<compiler::Node*>{phi_bb113_6, phi_bb113_12, phi_bb113_13}, &block115, std::vector<compiler::Node*>{phi_bb113_6, phi_bb113_12, phi_bb113_13});
  }

  TNode<Smi> phi_bb114_6;
  TNode<Smi> phi_bb114_12;
  TNode<Smi> phi_bb114_13;
  if (block114.is_used()) {
    ca_.Bind(&block114, &phi_bb114_6, &phi_bb114_12, &phi_bb114_13);
    ca_.Goto(&block48, phi_bb114_6, tmp146, tmp120, tmp133, phi_bb114_12, phi_bb114_13, tmp147, tmp144);
  }

  TNode<Smi> phi_bb115_6;
  TNode<Smi> phi_bb115_12;
  TNode<Smi> phi_bb115_13;
  if (block115.is_used()) {
    ca_.Bind(&block115, &phi_bb115_6, &phi_bb115_12, &phi_bb115_13);
    ca_.Goto(&block75, phi_bb115_6, tmp146, tmp120, tmp133, phi_bb115_12, phi_bb115_13, tmp147, tmp144);
  }

  TNode<Smi> phi_bb75_6;
  TNode<Smi> phi_bb75_7;
  TNode<Smi> phi_bb75_10;
  TNode<Smi> phi_bb75_11;
  TNode<Smi> phi_bb75_12;
  TNode<Smi> phi_bb75_13;
  TNode<Smi> phi_bb75_14;
  TNode<Smi> phi_bb75_15;
  if (block75.is_used()) {
    ca_.Bind(&block75, &phi_bb75_6, &phi_bb75_7, &phi_bb75_10, &phi_bb75_11, &phi_bb75_12, &phi_bb75_13, &phi_bb75_14, &phi_bb75_15);
    ca_.Goto(&block49, phi_bb75_6, phi_bb75_7, phi_bb75_10, phi_bb75_11, phi_bb75_12, phi_bb75_13, phi_bb75_14, phi_bb75_15);
  }

  TNode<Smi> phi_bb48_6;
  TNode<Smi> phi_bb48_7;
  TNode<Smi> phi_bb48_10;
  TNode<Smi> phi_bb48_11;
  TNode<Smi> phi_bb48_12;
  TNode<Smi> phi_bb48_13;
  TNode<Smi> phi_bb48_14;
  TNode<Smi> phi_bb48_15;
  TNode<Smi> tmp151;
  TNode<Smi> tmp152;
  TNode<BoolT> tmp153;
  if (block48.is_used()) {
    ca_.Bind(&block48, &phi_bb48_6, &phi_bb48_7, &phi_bb48_10, &phi_bb48_11, &phi_bb48_12, &phi_bb48_13, &phi_bb48_14, &phi_bb48_15);
    tmp151 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp152 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb48_13}, TNode<Smi>{tmp151});
    tmp153 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block118, phi_bb48_6, phi_bb48_7, phi_bb48_10, phi_bb48_11, phi_bb48_12, tmp152, phi_bb48_14, phi_bb48_15, tmp153);
  }

  TNode<Smi> phi_bb118_6;
  TNode<Smi> phi_bb118_7;
  TNode<Smi> phi_bb118_10;
  TNode<Smi> phi_bb118_11;
  TNode<Smi> phi_bb118_12;
  TNode<Smi> phi_bb118_13;
  TNode<Smi> phi_bb118_14;
  TNode<Smi> phi_bb118_15;
  TNode<BoolT> phi_bb118_16;
  TNode<Smi> tmp154;
  TNode<BoolT> tmp155;
  if (block118.is_used()) {
    ca_.Bind(&block118, &phi_bb118_6, &phi_bb118_7, &phi_bb118_10, &phi_bb118_11, &phi_bb118_12, &phi_bb118_13, &phi_bb118_14, &phi_bb118_15, &phi_bb118_16);
    tmp154 = FromConstexpr_Smi_constexpr_int31_0(state_, kMinGallopWins_0(state_));
    tmp155 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(TNode<Smi>{phi_bb118_14}, TNode<Smi>{tmp154});
    ca_.Branch(tmp155, &block119, std::vector<compiler::Node*>{phi_bb118_6, phi_bb118_7, phi_bb118_10, phi_bb118_11, phi_bb118_12, phi_bb118_13, phi_bb118_14, phi_bb118_15, phi_bb118_16}, &block120, std::vector<compiler::Node*>{phi_bb118_6, phi_bb118_7, phi_bb118_10, phi_bb118_11, phi_bb118_12, phi_bb118_13, phi_bb118_14, phi_bb118_15, phi_bb118_16});
  }

  TNode<Smi> phi_bb119_6;
  TNode<Smi> phi_bb119_7;
  TNode<Smi> phi_bb119_10;
  TNode<Smi> phi_bb119_11;
  TNode<Smi> phi_bb119_12;
  TNode<Smi> phi_bb119_13;
  TNode<Smi> phi_bb119_14;
  TNode<Smi> phi_bb119_15;
  TNode<BoolT> phi_bb119_16;
  TNode<BoolT> tmp156;
  if (block119.is_used()) {
    ca_.Bind(&block119, &phi_bb119_6, &phi_bb119_7, &phi_bb119_10, &phi_bb119_11, &phi_bb119_12, &phi_bb119_13, &phi_bb119_14, &phi_bb119_15, &phi_bb119_16);
    tmp156 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block121, phi_bb119_6, phi_bb119_7, phi_bb119_10, phi_bb119_11, phi_bb119_12, phi_bb119_13, phi_bb119_14, phi_bb119_15, phi_bb119_16, tmp156);
  }

  TNode<Smi> phi_bb120_6;
  TNode<Smi> phi_bb120_7;
  TNode<Smi> phi_bb120_10;
  TNode<Smi> phi_bb120_11;
  TNode<Smi> phi_bb120_12;
  TNode<Smi> phi_bb120_13;
  TNode<Smi> phi_bb120_14;
  TNode<Smi> phi_bb120_15;
  TNode<BoolT> phi_bb120_16;
  TNode<Smi> tmp157;
  TNode<BoolT> tmp158;
  if (block120.is_used()) {
    ca_.Bind(&block120, &phi_bb120_6, &phi_bb120_7, &phi_bb120_10, &phi_bb120_11, &phi_bb120_12, &phi_bb120_13, &phi_bb120_14, &phi_bb120_15, &phi_bb120_16);
    tmp157 = FromConstexpr_Smi_constexpr_int31_0(state_, kMinGallopWins_0(state_));
    tmp158 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(TNode<Smi>{phi_bb120_15}, TNode<Smi>{tmp157});
    ca_.Goto(&block121, phi_bb120_6, phi_bb120_7, phi_bb120_10, phi_bb120_11, phi_bb120_12, phi_bb120_13, phi_bb120_14, phi_bb120_15, phi_bb120_16, tmp158);
  }

  TNode<Smi> phi_bb121_6;
  TNode<Smi> phi_bb121_7;
  TNode<Smi> phi_bb121_10;
  TNode<Smi> phi_bb121_11;
  TNode<Smi> phi_bb121_12;
  TNode<Smi> phi_bb121_13;
  TNode<Smi> phi_bb121_14;
  TNode<Smi> phi_bb121_15;
  TNode<BoolT> phi_bb121_16;
  TNode<BoolT> phi_bb121_18;
  if (block121.is_used()) {
    ca_.Bind(&block121, &phi_bb121_6, &phi_bb121_7, &phi_bb121_10, &phi_bb121_11, &phi_bb121_12, &phi_bb121_13, &phi_bb121_14, &phi_bb121_15, &phi_bb121_16, &phi_bb121_18);
    ca_.Branch(phi_bb121_18, &block122, std::vector<compiler::Node*>{phi_bb121_6, phi_bb121_7, phi_bb121_10, phi_bb121_11, phi_bb121_12, phi_bb121_13, phi_bb121_14, phi_bb121_15, phi_bb121_16}, &block123, std::vector<compiler::Node*>{phi_bb121_6, phi_bb121_7, phi_bb121_10, phi_bb121_11, phi_bb121_12, phi_bb121_13, phi_bb121_14, phi_bb121_15, phi_bb121_16});
  }

  TNode<Smi> phi_bb122_6;
  TNode<Smi> phi_bb122_7;
  TNode<Smi> phi_bb122_10;
  TNode<Smi> phi_bb122_11;
  TNode<Smi> phi_bb122_12;
  TNode<Smi> phi_bb122_13;
  TNode<Smi> phi_bb122_14;
  TNode<Smi> phi_bb122_15;
  TNode<BoolT> phi_bb122_16;
  TNode<BoolT> tmp159;
  if (block122.is_used()) {
    ca_.Bind(&block122, &phi_bb122_6, &phi_bb122_7, &phi_bb122_10, &phi_bb122_11, &phi_bb122_12, &phi_bb122_13, &phi_bb122_14, &phi_bb122_15, &phi_bb122_16);
    tmp159 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block124, phi_bb122_6, phi_bb122_7, phi_bb122_10, phi_bb122_11, phi_bb122_12, phi_bb122_13, phi_bb122_14, phi_bb122_15, phi_bb122_16, tmp159);
  }

  TNode<Smi> phi_bb123_6;
  TNode<Smi> phi_bb123_7;
  TNode<Smi> phi_bb123_10;
  TNode<Smi> phi_bb123_11;
  TNode<Smi> phi_bb123_12;
  TNode<Smi> phi_bb123_13;
  TNode<Smi> phi_bb123_14;
  TNode<Smi> phi_bb123_15;
  TNode<BoolT> phi_bb123_16;
  if (block123.is_used()) {
    ca_.Bind(&block123, &phi_bb123_6, &phi_bb123_7, &phi_bb123_10, &phi_bb123_11, &phi_bb123_12, &phi_bb123_13, &phi_bb123_14, &phi_bb123_15, &phi_bb123_16);
    ca_.Goto(&block124, phi_bb123_6, phi_bb123_7, phi_bb123_10, phi_bb123_11, phi_bb123_12, phi_bb123_13, phi_bb123_14, phi_bb123_15, phi_bb123_16, phi_bb123_16);
  }

  TNode<Smi> phi_bb124_6;
  TNode<Smi> phi_bb124_7;
  TNode<Smi> phi_bb124_10;
  TNode<Smi> phi_bb124_11;
  TNode<Smi> phi_bb124_12;
  TNode<Smi> phi_bb124_13;
  TNode<Smi> phi_bb124_14;
  TNode<Smi> phi_bb124_15;
  TNode<BoolT> phi_bb124_16;
  TNode<BoolT> phi_bb124_18;
  if (block124.is_used()) {
    ca_.Bind(&block124, &phi_bb124_6, &phi_bb124_7, &phi_bb124_10, &phi_bb124_11, &phi_bb124_12, &phi_bb124_13, &phi_bb124_14, &phi_bb124_15, &phi_bb124_16, &phi_bb124_18);
    ca_.Branch(phi_bb124_18, &block116, std::vector<compiler::Node*>{phi_bb124_6, phi_bb124_7, phi_bb124_10, phi_bb124_11, phi_bb124_12, phi_bb124_13, phi_bb124_14, phi_bb124_15, phi_bb124_16}, &block117, std::vector<compiler::Node*>{phi_bb124_6, phi_bb124_7, phi_bb124_10, phi_bb124_11, phi_bb124_12, phi_bb124_13, phi_bb124_14, phi_bb124_15, phi_bb124_16});
  }

  TNode<Smi> phi_bb116_6;
  TNode<Smi> phi_bb116_7;
  TNode<Smi> phi_bb116_10;
  TNode<Smi> phi_bb116_11;
  TNode<Smi> phi_bb116_12;
  TNode<Smi> phi_bb116_13;
  TNode<Smi> phi_bb116_14;
  TNode<Smi> phi_bb116_15;
  TNode<BoolT> phi_bb116_16;
  TNode<BoolT> tmp160;
  TNode<Smi> tmp161;
  TNode<Smi> tmp162;
  TNode<Smi> tmp163;
  TNode<Smi> tmp164;
  TNode<IntPtrT> tmp165;
  TNode<Object> tmp166;
  TNode<IntPtrT> tmp167;
  TNode<IntPtrT> tmp168;
  TNode<IntPtrT> tmp169;
  TNode<UintPtrT> tmp170;
  TNode<UintPtrT> tmp171;
  TNode<BoolT> tmp172;
  if (block116.is_used()) {
    ca_.Bind(&block116, &phi_bb116_6, &phi_bb116_7, &phi_bb116_10, &phi_bb116_11, &phi_bb116_12, &phi_bb116_13, &phi_bb116_14, &phi_bb116_15, &phi_bb116_16);
    tmp160 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp161 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp162 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb116_13}, TNode<Smi>{tmp161});
    tmp163 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp164 = CodeStubAssembler(state_).SmiMax(TNode<Smi>{tmp163}, TNode<Smi>{tmp162});
    tmp165 = FromConstexpr_intptr_constexpr_int31_0(state_, 40);
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{p_sortState, tmp165}, tmp164);
    std::tie(tmp166, tmp167, tmp168) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp2}).Flatten();
    tmp169 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb116_11});
    tmp170 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp169});
    tmp171 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp168});
    tmp172 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp170}, TNode<UintPtrT>{tmp171});
    ca_.Branch(tmp172, &block136, std::vector<compiler::Node*>{phi_bb116_6, phi_bb116_7, phi_bb116_10, phi_bb116_11, phi_bb116_12, phi_bb116_14, phi_bb116_15, phi_bb116_11, phi_bb116_11}, &block137, std::vector<compiler::Node*>{phi_bb116_6, phi_bb116_7, phi_bb116_10, phi_bb116_11, phi_bb116_12, phi_bb116_14, phi_bb116_15, phi_bb116_11, phi_bb116_11});
  }

  TNode<Smi> phi_bb136_6;
  TNode<Smi> phi_bb136_7;
  TNode<Smi> phi_bb136_10;
  TNode<Smi> phi_bb136_11;
  TNode<Smi> phi_bb136_12;
  TNode<Smi> phi_bb136_14;
  TNode<Smi> phi_bb136_15;
  TNode<Smi> phi_bb136_22;
  TNode<Smi> phi_bb136_23;
  TNode<IntPtrT> tmp173;
  TNode<IntPtrT> tmp174;
  TNode<Object> tmp175;
  TNode<IntPtrT> tmp176;
  TNode<Object> tmp177;
  TNode<Object> tmp178;
  TNode<Smi> tmp179;
  TNode<Smi> tmp180;
  TNode<Smi> tmp181;
  TNode<Smi> tmp182;
  TNode<Smi> tmp183;
  TNode<BoolT> tmp184;
  if (block136.is_used()) {
    ca_.Bind(&block136, &phi_bb136_6, &phi_bb136_7, &phi_bb136_10, &phi_bb136_11, &phi_bb136_12, &phi_bb136_14, &phi_bb136_15, &phi_bb136_22, &phi_bb136_23);
    tmp173 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp169});
    tmp174 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp167}, TNode<IntPtrT>{tmp173});
    std::tie(tmp175, tmp176) = NewReference_Object_0(state_, TNode<Object>{tmp166}, TNode<IntPtrT>{tmp174}).Flatten();
    tmp177 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp175, tmp176});
    tmp178 = UnsafeCast_JSAny_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp177});
    tmp179 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp180 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb136_6}, TNode<Smi>{tmp179});
    tmp181 = ca_.CallStub<Smi>(Builtins::CallableFor(ca_.isolate(), Builtin::kGallopRight), p_context, p_sortState, tmp1, tmp178, p_baseA, phi_bb136_6, tmp180);
    tmp182 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb136_6}, TNode<Smi>{tmp181});
    tmp183 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp184 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp182}, TNode<Smi>{tmp183});
    ca_.Branch(tmp184, &block144, std::vector<compiler::Node*>{phi_bb136_6, phi_bb136_7, phi_bb136_10, phi_bb136_11, phi_bb136_12, phi_bb136_15}, &block145, std::vector<compiler::Node*>{phi_bb136_6, phi_bb136_7, phi_bb136_10, phi_bb136_11, phi_bb136_12, phi_bb136_15});
  }

  TNode<Smi> phi_bb137_6;
  TNode<Smi> phi_bb137_7;
  TNode<Smi> phi_bb137_10;
  TNode<Smi> phi_bb137_11;
  TNode<Smi> phi_bb137_12;
  TNode<Smi> phi_bb137_14;
  TNode<Smi> phi_bb137_15;
  TNode<Smi> phi_bb137_22;
  TNode<Smi> phi_bb137_23;
  if (block137.is_used()) {
    ca_.Bind(&block137, &phi_bb137_6, &phi_bb137_7, &phi_bb137_10, &phi_bb137_11, &phi_bb137_12, &phi_bb137_14, &phi_bb137_15, &phi_bb137_22, &phi_bb137_23);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb144_6;
  TNode<Smi> phi_bb144_7;
  TNode<Smi> phi_bb144_10;
  TNode<Smi> phi_bb144_11;
  TNode<Smi> phi_bb144_12;
  TNode<Smi> phi_bb144_15;
  TNode<Smi> tmp185;
  TNode<Smi> tmp186;
  TNode<Smi> tmp187;
  TNode<Smi> tmp188;
  TNode<Smi> tmp189;
  TNode<Smi> tmp190;
  TNode<Object> tmp191;
  TNode<Smi> tmp192;
  TNode<Smi> tmp193;
  TNode<BoolT> tmp194;
  if (block144.is_used()) {
    ca_.Bind(&block144, &phi_bb144_6, &phi_bb144_7, &phi_bb144_10, &phi_bb144_11, &phi_bb144_12, &phi_bb144_15);
    tmp185 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb144_10}, TNode<Smi>{tmp182});
    tmp186 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb144_12}, TNode<Smi>{tmp182});
    tmp187 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp188 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp186}, TNode<Smi>{tmp187});
    tmp189 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp190 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp185}, TNode<Smi>{tmp189});
    tmp191 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kCopy), p_context, tmp1, tmp188, tmp1, tmp190, tmp182);
    tmp192 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb144_6}, TNode<Smi>{tmp182});
    tmp193 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp194 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp192}, TNode<Smi>{tmp193});
    ca_.Branch(tmp194, &block146, std::vector<compiler::Node*>{phi_bb144_7, phi_bb144_11, phi_bb144_15}, &block147, std::vector<compiler::Node*>{phi_bb144_7, phi_bb144_11, phi_bb144_15});
  }

  TNode<Smi> phi_bb146_7;
  TNode<Smi> phi_bb146_11;
  TNode<Smi> phi_bb146_15;
  if (block146.is_used()) {
    ca_.Bind(&block146, &phi_bb146_7, &phi_bb146_11, &phi_bb146_15);
    ca_.Goto(&block39, tmp192, phi_bb146_7, tmp185, phi_bb146_11, tmp186);
  }

  TNode<Smi> phi_bb147_7;
  TNode<Smi> phi_bb147_11;
  TNode<Smi> phi_bb147_15;
  if (block147.is_used()) {
    ca_.Bind(&block147, &phi_bb147_7, &phi_bb147_11, &phi_bb147_15);
    ca_.Goto(&block145, tmp192, phi_bb147_7, tmp185, phi_bb147_11, tmp186, phi_bb147_15);
  }

  TNode<Smi> phi_bb145_6;
  TNode<Smi> phi_bb145_7;
  TNode<Smi> phi_bb145_10;
  TNode<Smi> phi_bb145_11;
  TNode<Smi> phi_bb145_12;
  TNode<Smi> phi_bb145_15;
  TNode<Object> tmp195;
  TNode<IntPtrT> tmp196;
  TNode<IntPtrT> tmp197;
  TNode<Smi> tmp198;
  TNode<Smi> tmp199;
  TNode<IntPtrT> tmp200;
  TNode<UintPtrT> tmp201;
  TNode<UintPtrT> tmp202;
  TNode<BoolT> tmp203;
  if (block145.is_used()) {
    ca_.Bind(&block145, &phi_bb145_6, &phi_bb145_7, &phi_bb145_10, &phi_bb145_11, &phi_bb145_12, &phi_bb145_15);
    std::tie(tmp195, tmp196, tmp197) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp198 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp199 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb145_10}, TNode<Smi>{tmp198});
    tmp200 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb145_10});
    tmp201 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp200});
    tmp202 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp197});
    tmp203 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp201}, TNode<UintPtrT>{tmp202});
    ca_.Branch(tmp203, &block152, std::vector<compiler::Node*>{phi_bb145_6, phi_bb145_7, phi_bb145_11, phi_bb145_12, phi_bb145_15, phi_bb145_10, phi_bb145_10}, &block153, std::vector<compiler::Node*>{phi_bb145_6, phi_bb145_7, phi_bb145_11, phi_bb145_12, phi_bb145_15, phi_bb145_10, phi_bb145_10});
  }

  TNode<Smi> phi_bb152_6;
  TNode<Smi> phi_bb152_7;
  TNode<Smi> phi_bb152_11;
  TNode<Smi> phi_bb152_12;
  TNode<Smi> phi_bb152_15;
  TNode<Smi> phi_bb152_22;
  TNode<Smi> phi_bb152_23;
  TNode<IntPtrT> tmp204;
  TNode<IntPtrT> tmp205;
  TNode<Object> tmp206;
  TNode<IntPtrT> tmp207;
  TNode<Object> tmp208;
  TNode<IntPtrT> tmp209;
  TNode<IntPtrT> tmp210;
  TNode<Smi> tmp211;
  TNode<Smi> tmp212;
  TNode<IntPtrT> tmp213;
  TNode<UintPtrT> tmp214;
  TNode<UintPtrT> tmp215;
  TNode<BoolT> tmp216;
  if (block152.is_used()) {
    ca_.Bind(&block152, &phi_bb152_6, &phi_bb152_7, &phi_bb152_11, &phi_bb152_12, &phi_bb152_15, &phi_bb152_22, &phi_bb152_23);
    tmp204 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp200});
    tmp205 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp196}, TNode<IntPtrT>{tmp204});
    std::tie(tmp206, tmp207) = NewReference_Object_0(state_, TNode<Object>{tmp195}, TNode<IntPtrT>{tmp205}).Flatten();
    std::tie(tmp208, tmp209, tmp210) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp2}).Flatten();
    tmp211 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp212 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb152_11}, TNode<Smi>{tmp211});
    tmp213 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb152_11});
    tmp214 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp213});
    tmp215 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp210});
    tmp216 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp214}, TNode<UintPtrT>{tmp215});
    ca_.Branch(tmp216, &block160, std::vector<compiler::Node*>{phi_bb152_6, phi_bb152_7, phi_bb152_12, phi_bb152_15, phi_bb152_22, phi_bb152_23, phi_bb152_11, phi_bb152_11}, &block161, std::vector<compiler::Node*>{phi_bb152_6, phi_bb152_7, phi_bb152_12, phi_bb152_15, phi_bb152_22, phi_bb152_23, phi_bb152_11, phi_bb152_11});
  }

  TNode<Smi> phi_bb153_6;
  TNode<Smi> phi_bb153_7;
  TNode<Smi> phi_bb153_11;
  TNode<Smi> phi_bb153_12;
  TNode<Smi> phi_bb153_15;
  TNode<Smi> phi_bb153_22;
  TNode<Smi> phi_bb153_23;
  if (block153.is_used()) {
    ca_.Bind(&block153, &phi_bb153_6, &phi_bb153_7, &phi_bb153_11, &phi_bb153_12, &phi_bb153_15, &phi_bb153_22, &phi_bb153_23);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb160_6;
  TNode<Smi> phi_bb160_7;
  TNode<Smi> phi_bb160_12;
  TNode<Smi> phi_bb160_15;
  TNode<Smi> phi_bb160_22;
  TNode<Smi> phi_bb160_23;
  TNode<Smi> phi_bb160_30;
  TNode<Smi> phi_bb160_31;
  TNode<IntPtrT> tmp217;
  TNode<IntPtrT> tmp218;
  TNode<Object> tmp219;
  TNode<IntPtrT> tmp220;
  TNode<Object> tmp221;
  TNode<Smi> tmp222;
  TNode<Smi> tmp223;
  TNode<Smi> tmp224;
  TNode<BoolT> tmp225;
  if (block160.is_used()) {
    ca_.Bind(&block160, &phi_bb160_6, &phi_bb160_7, &phi_bb160_12, &phi_bb160_15, &phi_bb160_22, &phi_bb160_23, &phi_bb160_30, &phi_bb160_31);
    tmp217 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp213});
    tmp218 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp209}, TNode<IntPtrT>{tmp217});
    std::tie(tmp219, tmp220) = NewReference_Object_0(state_, TNode<Object>{tmp208}, TNode<IntPtrT>{tmp218}).Flatten();
    tmp221 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp219, tmp220});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp206, tmp207}, tmp221);
    tmp222 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp223 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb160_7}, TNode<Smi>{tmp222});
    tmp224 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp225 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp223}, TNode<Smi>{tmp224});
    ca_.Branch(tmp225, &block164, std::vector<compiler::Node*>{phi_bb160_6, phi_bb160_12, phi_bb160_15}, &block165, std::vector<compiler::Node*>{phi_bb160_6, phi_bb160_12, phi_bb160_15});
  }

  TNode<Smi> phi_bb161_6;
  TNode<Smi> phi_bb161_7;
  TNode<Smi> phi_bb161_12;
  TNode<Smi> phi_bb161_15;
  TNode<Smi> phi_bb161_22;
  TNode<Smi> phi_bb161_23;
  TNode<Smi> phi_bb161_30;
  TNode<Smi> phi_bb161_31;
  if (block161.is_used()) {
    ca_.Bind(&block161, &phi_bb161_6, &phi_bb161_7, &phi_bb161_12, &phi_bb161_15, &phi_bb161_22, &phi_bb161_23, &phi_bb161_30, &phi_bb161_31);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb164_6;
  TNode<Smi> phi_bb164_12;
  TNode<Smi> phi_bb164_15;
  if (block164.is_used()) {
    ca_.Bind(&block164, &phi_bb164_6, &phi_bb164_12, &phi_bb164_15);
    ca_.Goto(&block37, phi_bb164_6, tmp223, tmp199, tmp212, phi_bb164_12);
  }

  TNode<Smi> phi_bb165_6;
  TNode<Smi> phi_bb165_12;
  TNode<Smi> phi_bb165_15;
  TNode<Object> tmp226;
  TNode<IntPtrT> tmp227;
  TNode<IntPtrT> tmp228;
  TNode<IntPtrT> tmp229;
  TNode<UintPtrT> tmp230;
  TNode<UintPtrT> tmp231;
  TNode<BoolT> tmp232;
  if (block165.is_used()) {
    ca_.Bind(&block165, &phi_bb165_6, &phi_bb165_12, &phi_bb165_15);
    std::tie(tmp226, tmp227, tmp228) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp229 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb165_12});
    tmp230 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp229});
    tmp231 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp228});
    tmp232 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp230}, TNode<UintPtrT>{tmp231});
    ca_.Branch(tmp232, &block170, std::vector<compiler::Node*>{phi_bb165_6, phi_bb165_12, phi_bb165_15, phi_bb165_12, phi_bb165_12}, &block171, std::vector<compiler::Node*>{phi_bb165_6, phi_bb165_12, phi_bb165_15, phi_bb165_12, phi_bb165_12});
  }

  TNode<Smi> phi_bb170_6;
  TNode<Smi> phi_bb170_12;
  TNode<Smi> phi_bb170_15;
  TNode<Smi> phi_bb170_23;
  TNode<Smi> phi_bb170_24;
  TNode<IntPtrT> tmp233;
  TNode<IntPtrT> tmp234;
  TNode<Object> tmp235;
  TNode<IntPtrT> tmp236;
  TNode<Object> tmp237;
  TNode<Object> tmp238;
  TNode<Smi> tmp239;
  TNode<Smi> tmp240;
  TNode<Smi> tmp241;
  TNode<Smi> tmp242;
  TNode<Smi> tmp243;
  TNode<Smi> tmp244;
  TNode<BoolT> tmp245;
  if (block170.is_used()) {
    ca_.Bind(&block170, &phi_bb170_6, &phi_bb170_12, &phi_bb170_15, &phi_bb170_23, &phi_bb170_24);
    tmp233 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp229});
    tmp234 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp227}, TNode<IntPtrT>{tmp233});
    std::tie(tmp235, tmp236) = NewReference_Object_0(state_, TNode<Object>{tmp226}, TNode<IntPtrT>{tmp234}).Flatten();
    tmp237 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp235, tmp236});
    tmp238 = UnsafeCast_JSAny_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp237});
    tmp239 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp240 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp223}, TNode<Smi>{tmp239});
    tmp241 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp242 = ca_.CallStub<Smi>(Builtins::CallableFor(ca_.isolate(), Builtin::kGallopLeft), p_context, p_sortState, tmp2, tmp238, tmp241, tmp223, tmp240);
    tmp243 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp223}, TNode<Smi>{tmp242});
    tmp244 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp245 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp243}, TNode<Smi>{tmp244});
    ca_.Branch(tmp245, &block178, std::vector<compiler::Node*>{phi_bb170_6, phi_bb170_12}, &block179, std::vector<compiler::Node*>{phi_bb170_6, tmp223, tmp199, tmp212, phi_bb170_12});
  }

  TNode<Smi> phi_bb171_6;
  TNode<Smi> phi_bb171_12;
  TNode<Smi> phi_bb171_15;
  TNode<Smi> phi_bb171_23;
  TNode<Smi> phi_bb171_24;
  if (block171.is_used()) {
    ca_.Bind(&block171, &phi_bb171_6, &phi_bb171_12, &phi_bb171_15, &phi_bb171_23, &phi_bb171_24);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb178_6;
  TNode<Smi> phi_bb178_12;
  TNode<Smi> tmp246;
  TNode<Smi> tmp247;
  TNode<Smi> tmp248;
  TNode<Smi> tmp249;
  TNode<Smi> tmp250;
  TNode<Smi> tmp251;
  TNode<Object> tmp252;
  TNode<Smi> tmp253;
  TNode<Smi> tmp254;
  TNode<BoolT> tmp255;
  if (block178.is_used()) {
    ca_.Bind(&block178, &phi_bb178_6, &phi_bb178_12);
    tmp246 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp199}, TNode<Smi>{tmp243});
    tmp247 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp212}, TNode<Smi>{tmp243});
    tmp248 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp249 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp247}, TNode<Smi>{tmp248});
    tmp250 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp251 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp246}, TNode<Smi>{tmp250});
    tmp252 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kCopy), p_context, tmp2, tmp249, tmp1, tmp251, tmp243);
    tmp253 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp223}, TNode<Smi>{tmp243});
    tmp254 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp255 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp253}, TNode<Smi>{tmp254});
    ca_.Branch(tmp255, &block180, std::vector<compiler::Node*>{phi_bb178_6, phi_bb178_12}, &block181, std::vector<compiler::Node*>{phi_bb178_6, phi_bb178_12});
  }

  TNode<Smi> phi_bb180_6;
  TNode<Smi> phi_bb180_12;
  if (block180.is_used()) {
    ca_.Bind(&block180, &phi_bb180_6, &phi_bb180_12);
    ca_.Goto(&block37, phi_bb180_6, tmp253, tmp246, tmp247, phi_bb180_12);
  }

  TNode<Smi> phi_bb181_6;
  TNode<Smi> phi_bb181_12;
  TNode<Smi> tmp256;
  TNode<BoolT> tmp257;
  if (block181.is_used()) {
    ca_.Bind(&block181, &phi_bb181_6, &phi_bb181_12);
    tmp256 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp257 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp253}, TNode<Smi>{tmp256});
    ca_.Branch(tmp257, &block182, std::vector<compiler::Node*>{phi_bb181_6, phi_bb181_12}, &block183, std::vector<compiler::Node*>{phi_bb181_6, phi_bb181_12});
  }

  TNode<Smi> phi_bb182_6;
  TNode<Smi> phi_bb182_12;
  if (block182.is_used()) {
    ca_.Bind(&block182, &phi_bb182_6, &phi_bb182_12);
    ca_.Goto(&block39, phi_bb182_6, tmp253, tmp246, tmp247, phi_bb182_12);
  }

  TNode<Smi> phi_bb183_6;
  TNode<Smi> phi_bb183_12;
  if (block183.is_used()) {
    ca_.Bind(&block183, &phi_bb183_6, &phi_bb183_12);
    ca_.Goto(&block179, phi_bb183_6, tmp253, tmp246, tmp247, phi_bb183_12);
  }

  TNode<Smi> phi_bb179_6;
  TNode<Smi> phi_bb179_7;
  TNode<Smi> phi_bb179_10;
  TNode<Smi> phi_bb179_11;
  TNode<Smi> phi_bb179_12;
  TNode<Object> tmp258;
  TNode<IntPtrT> tmp259;
  TNode<IntPtrT> tmp260;
  TNode<Smi> tmp261;
  TNode<Smi> tmp262;
  TNode<IntPtrT> tmp263;
  TNode<UintPtrT> tmp264;
  TNode<UintPtrT> tmp265;
  TNode<BoolT> tmp266;
  if (block179.is_used()) {
    ca_.Bind(&block179, &phi_bb179_6, &phi_bb179_7, &phi_bb179_10, &phi_bb179_11, &phi_bb179_12);
    std::tie(tmp258, tmp259, tmp260) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp261 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp262 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb179_10}, TNode<Smi>{tmp261});
    tmp263 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb179_10});
    tmp264 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp263});
    tmp265 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp260});
    tmp266 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp264}, TNode<UintPtrT>{tmp265});
    ca_.Branch(tmp266, &block188, std::vector<compiler::Node*>{phi_bb179_6, phi_bb179_7, phi_bb179_11, phi_bb179_12, phi_bb179_10, phi_bb179_10}, &block189, std::vector<compiler::Node*>{phi_bb179_6, phi_bb179_7, phi_bb179_11, phi_bb179_12, phi_bb179_10, phi_bb179_10});
  }

  TNode<Smi> phi_bb188_6;
  TNode<Smi> phi_bb188_7;
  TNode<Smi> phi_bb188_11;
  TNode<Smi> phi_bb188_12;
  TNode<Smi> phi_bb188_22;
  TNode<Smi> phi_bb188_23;
  TNode<IntPtrT> tmp267;
  TNode<IntPtrT> tmp268;
  TNode<Object> tmp269;
  TNode<IntPtrT> tmp270;
  TNode<Object> tmp271;
  TNode<IntPtrT> tmp272;
  TNode<IntPtrT> tmp273;
  TNode<Smi> tmp274;
  TNode<Smi> tmp275;
  TNode<IntPtrT> tmp276;
  TNode<UintPtrT> tmp277;
  TNode<UintPtrT> tmp278;
  TNode<BoolT> tmp279;
  if (block188.is_used()) {
    ca_.Bind(&block188, &phi_bb188_6, &phi_bb188_7, &phi_bb188_11, &phi_bb188_12, &phi_bb188_22, &phi_bb188_23);
    tmp267 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp263});
    tmp268 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp259}, TNode<IntPtrT>{tmp267});
    std::tie(tmp269, tmp270) = NewReference_Object_0(state_, TNode<Object>{tmp258}, TNode<IntPtrT>{tmp268}).Flatten();
    std::tie(tmp271, tmp272, tmp273) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp274 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp275 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb188_12}, TNode<Smi>{tmp274});
    tmp276 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb188_12});
    tmp277 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp276});
    tmp278 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp273});
    tmp279 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp277}, TNode<UintPtrT>{tmp278});
    ca_.Branch(tmp279, &block196, std::vector<compiler::Node*>{phi_bb188_6, phi_bb188_7, phi_bb188_11, phi_bb188_22, phi_bb188_23, phi_bb188_12, phi_bb188_12}, &block197, std::vector<compiler::Node*>{phi_bb188_6, phi_bb188_7, phi_bb188_11, phi_bb188_22, phi_bb188_23, phi_bb188_12, phi_bb188_12});
  }

  TNode<Smi> phi_bb189_6;
  TNode<Smi> phi_bb189_7;
  TNode<Smi> phi_bb189_11;
  TNode<Smi> phi_bb189_12;
  TNode<Smi> phi_bb189_22;
  TNode<Smi> phi_bb189_23;
  if (block189.is_used()) {
    ca_.Bind(&block189, &phi_bb189_6, &phi_bb189_7, &phi_bb189_11, &phi_bb189_12, &phi_bb189_22, &phi_bb189_23);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb196_6;
  TNode<Smi> phi_bb196_7;
  TNode<Smi> phi_bb196_11;
  TNode<Smi> phi_bb196_22;
  TNode<Smi> phi_bb196_23;
  TNode<Smi> phi_bb196_30;
  TNode<Smi> phi_bb196_31;
  TNode<IntPtrT> tmp280;
  TNode<IntPtrT> tmp281;
  TNode<Object> tmp282;
  TNode<IntPtrT> tmp283;
  TNode<Object> tmp284;
  TNode<Smi> tmp285;
  TNode<Smi> tmp286;
  TNode<Smi> tmp287;
  TNode<BoolT> tmp288;
  if (block196.is_used()) {
    ca_.Bind(&block196, &phi_bb196_6, &phi_bb196_7, &phi_bb196_11, &phi_bb196_22, &phi_bb196_23, &phi_bb196_30, &phi_bb196_31);
    tmp280 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp276});
    tmp281 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp272}, TNode<IntPtrT>{tmp280});
    std::tie(tmp282, tmp283) = NewReference_Object_0(state_, TNode<Object>{tmp271}, TNode<IntPtrT>{tmp281}).Flatten();
    tmp284 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp282, tmp283});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp269, tmp270}, tmp284);
    tmp285 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp286 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb196_6}, TNode<Smi>{tmp285});
    tmp287 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp288 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp286}, TNode<Smi>{tmp287});
    ca_.Branch(tmp288, &block200, std::vector<compiler::Node*>{phi_bb196_7, phi_bb196_11}, &block201, std::vector<compiler::Node*>{phi_bb196_7, phi_bb196_11});
  }

  TNode<Smi> phi_bb197_6;
  TNode<Smi> phi_bb197_7;
  TNode<Smi> phi_bb197_11;
  TNode<Smi> phi_bb197_22;
  TNode<Smi> phi_bb197_23;
  TNode<Smi> phi_bb197_30;
  TNode<Smi> phi_bb197_31;
  if (block197.is_used()) {
    ca_.Bind(&block197, &phi_bb197_6, &phi_bb197_7, &phi_bb197_11, &phi_bb197_22, &phi_bb197_23, &phi_bb197_30, &phi_bb197_31);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb200_7;
  TNode<Smi> phi_bb200_11;
  if (block200.is_used()) {
    ca_.Bind(&block200, &phi_bb200_7, &phi_bb200_11);
    ca_.Goto(&block39, tmp286, phi_bb200_7, tmp262, phi_bb200_11, tmp275);
  }

  TNode<Smi> phi_bb201_7;
  TNode<Smi> phi_bb201_11;
  if (block201.is_used()) {
    ca_.Bind(&block201, &phi_bb201_7, &phi_bb201_11);
    ca_.Goto(&block118, tmp286, phi_bb201_7, tmp262, phi_bb201_11, tmp275, tmp164, tmp182, tmp243, tmp160);
  }

  TNode<Smi> phi_bb117_6;
  TNode<Smi> phi_bb117_7;
  TNode<Smi> phi_bb117_10;
  TNode<Smi> phi_bb117_11;
  TNode<Smi> phi_bb117_12;
  TNode<Smi> phi_bb117_13;
  TNode<Smi> phi_bb117_14;
  TNode<Smi> phi_bb117_15;
  TNode<BoolT> phi_bb117_16;
  TNode<Smi> tmp289;
  TNode<Smi> tmp290;
  TNode<IntPtrT> tmp291;
  if (block117.is_used()) {
    ca_.Bind(&block117, &phi_bb117_6, &phi_bb117_7, &phi_bb117_10, &phi_bb117_11, &phi_bb117_12, &phi_bb117_13, &phi_bb117_14, &phi_bb117_15, &phi_bb117_16);
    tmp289 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp290 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb117_13}, TNode<Smi>{tmp289});
    tmp291 = FromConstexpr_intptr_constexpr_int31_0(state_, 40);
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{p_sortState, tmp291}, tmp290);
    ca_.Goto(&block46, phi_bb117_6, phi_bb117_7, phi_bb117_10, phi_bb117_11, phi_bb117_12, tmp290);
  }

  TNode<Smi> phi_bb45_6;
  TNode<Smi> phi_bb45_7;
  TNode<Smi> phi_bb45_10;
  TNode<Smi> phi_bb45_11;
  TNode<Smi> phi_bb45_12;
  TNode<Smi> phi_bb45_13;
  if (block45.is_used()) {
    ca_.Bind(&block45, &phi_bb45_6, &phi_bb45_7, &phi_bb45_10, &phi_bb45_11, &phi_bb45_12, &phi_bb45_13);
    ca_.Goto(&block38, phi_bb45_6, phi_bb45_7, phi_bb45_10, phi_bb45_11, phi_bb45_12);
  }

  TNode<Smi> phi_bb39_6;
  TNode<Smi> phi_bb39_7;
  TNode<Smi> phi_bb39_10;
  TNode<Smi> phi_bb39_11;
  TNode<Smi> phi_bb39_12;
  TNode<Smi> tmp292;
  TNode<BoolT> tmp293;
  if (block39.is_used()) {
    ca_.Bind(&block39, &phi_bb39_6, &phi_bb39_7, &phi_bb39_10, &phi_bb39_11, &phi_bb39_12);
    tmp292 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp293 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{phi_bb39_7}, TNode<Smi>{tmp292});
    ca_.Branch(tmp293, &block202, std::vector<compiler::Node*>{phi_bb39_6, phi_bb39_7, phi_bb39_10, phi_bb39_11, phi_bb39_12}, &block203, std::vector<compiler::Node*>{phi_bb39_6, phi_bb39_7, phi_bb39_10, phi_bb39_11, phi_bb39_12});
  }

  TNode<Smi> phi_bb202_6;
  TNode<Smi> phi_bb202_7;
  TNode<Smi> phi_bb202_10;
  TNode<Smi> phi_bb202_11;
  TNode<Smi> phi_bb202_12;
  TNode<Smi> tmp294;
  TNode<Smi> tmp295;
  TNode<Smi> tmp296;
  TNode<Smi> tmp297;
  TNode<Object> tmp298;
  if (block202.is_used()) {
    ca_.Bind(&block202, &phi_bb202_6, &phi_bb202_7, &phi_bb202_10, &phi_bb202_11, &phi_bb202_12);
    tmp294 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp295 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb202_7}, TNode<Smi>{tmp294});
    tmp296 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb202_10}, TNode<Smi>{tmp295});
    tmp297 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp298 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kCopy), p_context, tmp2, tmp297, tmp1, tmp296, phi_bb202_7);
    ca_.Goto(&block203, phi_bb202_6, phi_bb202_7, phi_bb202_10, phi_bb202_11, phi_bb202_12);
  }

  TNode<Smi> phi_bb203_6;
  TNode<Smi> phi_bb203_7;
  TNode<Smi> phi_bb203_10;
  TNode<Smi> phi_bb203_11;
  TNode<Smi> phi_bb203_12;
  if (block203.is_used()) {
    ca_.Bind(&block203, &phi_bb203_6, &phi_bb203_7, &phi_bb203_10, &phi_bb203_11, &phi_bb203_12);
    ca_.Goto(&block38, phi_bb203_6, phi_bb203_7, phi_bb203_10, phi_bb203_11, phi_bb203_12);
  }

  TNode<Smi> phi_bb38_6;
  TNode<Smi> phi_bb38_7;
  TNode<Smi> phi_bb38_10;
  TNode<Smi> phi_bb38_11;
  TNode<Smi> phi_bb38_12;
  if (block38.is_used()) {
    ca_.Bind(&block38, &phi_bb38_6, &phi_bb38_7, &phi_bb38_10, &phi_bb38_11, &phi_bb38_12);
    ca_.Goto(&block36, phi_bb38_6, phi_bb38_7, phi_bb38_10, phi_bb38_11, phi_bb38_12);
  }

  TNode<Smi> phi_bb37_6;
  TNode<Smi> phi_bb37_7;
  TNode<Smi> phi_bb37_10;
  TNode<Smi> phi_bb37_11;
  TNode<Smi> phi_bb37_12;
  TNode<Smi> tmp299;
  TNode<Smi> tmp300;
  TNode<Smi> tmp301;
  TNode<Smi> tmp302;
  TNode<Smi> tmp303;
  TNode<Smi> tmp304;
  TNode<Object> tmp305;
  TNode<Object> tmp306;
  TNode<IntPtrT> tmp307;
  TNode<IntPtrT> tmp308;
  TNode<IntPtrT> tmp309;
  TNode<UintPtrT> tmp310;
  TNode<UintPtrT> tmp311;
  TNode<BoolT> tmp312;
  if (block37.is_used()) {
    ca_.Bind(&block37, &phi_bb37_6, &phi_bb37_7, &phi_bb37_10, &phi_bb37_11, &phi_bb37_12);
    tmp299 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb37_10}, TNode<Smi>{phi_bb37_6});
    tmp300 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb37_12}, TNode<Smi>{phi_bb37_6});
    tmp301 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp302 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp300}, TNode<Smi>{tmp301});
    tmp303 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp304 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp299}, TNode<Smi>{tmp303});
    tmp305 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kCopy), p_context, tmp1, tmp302, tmp1, tmp304, phi_bb37_6);
    std::tie(tmp306, tmp307, tmp308) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp309 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp299});
    tmp310 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp309});
    tmp311 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp308});
    tmp312 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp310}, TNode<UintPtrT>{tmp311});
    ca_.Branch(tmp312, &block219, std::vector<compiler::Node*>{phi_bb37_6, phi_bb37_7, phi_bb37_11}, &block220, std::vector<compiler::Node*>{phi_bb37_6, phi_bb37_7, phi_bb37_11});
  }

  TNode<Smi> phi_bb219_6;
  TNode<Smi> phi_bb219_7;
  TNode<Smi> phi_bb219_11;
  TNode<IntPtrT> tmp313;
  TNode<IntPtrT> tmp314;
  TNode<Object> tmp315;
  TNode<IntPtrT> tmp316;
  TNode<Object> tmp317;
  TNode<IntPtrT> tmp318;
  TNode<IntPtrT> tmp319;
  TNode<IntPtrT> tmp320;
  TNode<UintPtrT> tmp321;
  TNode<UintPtrT> tmp322;
  TNode<BoolT> tmp323;
  if (block219.is_used()) {
    ca_.Bind(&block219, &phi_bb219_6, &phi_bb219_7, &phi_bb219_11);
    tmp313 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp309});
    tmp314 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp307}, TNode<IntPtrT>{tmp313});
    std::tie(tmp315, tmp316) = NewReference_Object_0(state_, TNode<Object>{tmp306}, TNode<IntPtrT>{tmp314}).Flatten();
    std::tie(tmp317, tmp318, tmp319) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp2}).Flatten();
    tmp320 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb219_11});
    tmp321 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp320});
    tmp322 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp319});
    tmp323 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp321}, TNode<UintPtrT>{tmp322});
    ca_.Branch(tmp323, &block227, std::vector<compiler::Node*>{phi_bb219_6, phi_bb219_7, phi_bb219_11, phi_bb219_11, phi_bb219_11}, &block228, std::vector<compiler::Node*>{phi_bb219_6, phi_bb219_7, phi_bb219_11, phi_bb219_11, phi_bb219_11});
  }

  TNode<Smi> phi_bb220_6;
  TNode<Smi> phi_bb220_7;
  TNode<Smi> phi_bb220_11;
  if (block220.is_used()) {
    ca_.Bind(&block220, &phi_bb220_6, &phi_bb220_7, &phi_bb220_11);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb227_6;
  TNode<Smi> phi_bb227_7;
  TNode<Smi> phi_bb227_11;
  TNode<Smi> phi_bb227_25;
  TNode<Smi> phi_bb227_26;
  TNode<IntPtrT> tmp324;
  TNode<IntPtrT> tmp325;
  TNode<Object> tmp326;
  TNode<IntPtrT> tmp327;
  TNode<Object> tmp328;
  if (block227.is_used()) {
    ca_.Bind(&block227, &phi_bb227_6, &phi_bb227_7, &phi_bb227_11, &phi_bb227_25, &phi_bb227_26);
    tmp324 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp320});
    tmp325 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp318}, TNode<IntPtrT>{tmp324});
    std::tie(tmp326, tmp327) = NewReference_Object_0(state_, TNode<Object>{tmp317}, TNode<IntPtrT>{tmp325}).Flatten();
    tmp328 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp326, tmp327});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp315, tmp316}, tmp328);
    ca_.Goto(&block36, phi_bb227_6, phi_bb227_7, tmp299, phi_bb227_11, tmp300);
  }

  TNode<Smi> phi_bb228_6;
  TNode<Smi> phi_bb228_7;
  TNode<Smi> phi_bb228_11;
  TNode<Smi> phi_bb228_25;
  TNode<Smi> phi_bb228_26;
  if (block228.is_used()) {
    ca_.Bind(&block228, &phi_bb228_6, &phi_bb228_7, &phi_bb228_11, &phi_bb228_25, &phi_bb228_26);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb36_6;
  TNode<Smi> phi_bb36_7;
  TNode<Smi> phi_bb36_10;
  TNode<Smi> phi_bb36_11;
  TNode<Smi> phi_bb36_12;
  if (block36.is_used()) {
    ca_.Bind(&block36, &phi_bb36_6, &phi_bb36_7, &phi_bb36_10, &phi_bb36_11, &phi_bb36_12);
    ca_.Goto(&block231);
  }

    ca_.Bind(&block231);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=1165&c=1
TNode<Smi> ComputeMinRunLength_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_nArg) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block8, p_nArg, tmp0);
  }

  TNode<Smi> phi_bb8_1;
  TNode<Smi> phi_bb8_2;
  TNode<Smi> tmp1;
  TNode<BoolT> tmp2;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_1, &phi_bb8_2);
    tmp1 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x40ull));
    tmp2 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(TNode<Smi>{phi_bb8_1}, TNode<Smi>{tmp1});
    ca_.Branch(tmp2, &block6, std::vector<compiler::Node*>{phi_bb8_1, phi_bb8_2}, &block7, std::vector<compiler::Node*>{phi_bb8_1, phi_bb8_2});
  }

  TNode<Smi> phi_bb6_1;
  TNode<Smi> phi_bb6_2;
  TNode<Smi> tmp3;
  TNode<Smi> tmp4;
  TNode<Smi> tmp5;
  TNode<Smi> tmp6;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_1, &phi_bb6_2);
    tmp3 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp4 = CodeStubAssembler(state_).SmiAnd(TNode<Smi>{phi_bb6_1}, TNode<Smi>{tmp3});
    tmp5 = CodeStubAssembler(state_).SmiOr(TNode<Smi>{phi_bb6_2}, TNode<Smi>{tmp4});
    tmp6 = CodeStubAssembler(state_).SmiSar(TNode<Smi>{phi_bb6_1}, (FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull))));
    ca_.Goto(&block8, tmp6, tmp5);
  }

  TNode<Smi> phi_bb7_1;
  TNode<Smi> phi_bb7_2;
  TNode<Smi> tmp7;
  if (block7.is_used()) {
    ca_.Bind(&block7, &phi_bb7_1, &phi_bb7_2);
    tmp7 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb7_1}, TNode<Smi>{phi_bb7_2});
    ca_.Goto(&block19);
  }

    ca_.Bind(&block19);
  return TNode<Smi>{tmp7};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=1181&c=1
TNode<BoolT> RunInvariantEstablished_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArray> p_pendingRuns, TNode<Smi> p_n) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp1 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{p_n}, TNode<Smi>{tmp0});
    ca_.Branch(tmp1, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp2;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp2 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block1, tmp2);
  }

  TNode<Smi> tmp3;
  TNode<Smi> tmp4;
  TNode<Smi> tmp5;
  TNode<Smi> tmp6;
  TNode<Smi> tmp7;
  TNode<Smi> tmp8;
  TNode<Smi> tmp9;
  TNode<Smi> tmp10;
  TNode<BoolT> tmp11;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp3 = GetPendingRunLength_0(state_, TNode<Context>{p_context}, TNode<FixedArray>{p_pendingRuns}, TNode<Smi>{p_n});
    tmp4 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp5 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{p_n}, TNode<Smi>{tmp4});
    tmp6 = GetPendingRunLength_0(state_, TNode<Context>{p_context}, TNode<FixedArray>{p_pendingRuns}, TNode<Smi>{tmp5});
    tmp7 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp8 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{p_n}, TNode<Smi>{tmp7});
    tmp9 = GetPendingRunLength_0(state_, TNode<Context>{p_context}, TNode<FixedArray>{p_pendingRuns}, TNode<Smi>{tmp8});
    tmp10 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp6}, TNode<Smi>{tmp3});
    tmp11 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp9}, TNode<Smi>{tmp10});
    ca_.Goto(&block1, tmp11);
  }

  TNode<BoolT> phi_bb1_3;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_3);
    ca_.Goto(&block4);
  }

    ca_.Bind(&block4);
  return TNode<BoolT>{phi_bb1_3};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=1201&c=1
void MergeCollapse_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<FixedArray> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 48);
    tmp1 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{p_sortState, tmp0});
    ca_.Goto(&block4);
  }

  TNode<Smi> tmp2;
  TNode<Smi> tmp3;
  TNode<BoolT> tmp4;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = GetPendingRunsSize_0(state_, TNode<Context>{p_context}, TNode<SortState>{p_sortState});
    tmp3 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp4 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp2}, TNode<Smi>{tmp3});
    ca_.Branch(tmp4, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<Smi> tmp5;
  TNode<Smi> tmp6;
  TNode<Smi> tmp7;
  TNode<Smi> tmp8;
  TNode<Smi> tmp9;
  TNode<BoolT> tmp10;
  TNode<BoolT> tmp11;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp5 = GetPendingRunsSize_0(state_, TNode<Context>{p_context}, TNode<SortState>{p_sortState});
    tmp6 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp7 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp5}, TNode<Smi>{tmp6});
    tmp8 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp9 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp7}, TNode<Smi>{tmp8});
    tmp10 = RunInvariantEstablished_0(state_, TNode<Context>{p_context}, TNode<FixedArray>{tmp1}, TNode<Smi>{tmp9});
    tmp11 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp10});
    ca_.Branch(tmp11, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp12;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp12 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block9, tmp12);
  }

  TNode<BoolT> tmp13;
  TNode<BoolT> tmp14;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp13 = RunInvariantEstablished_0(state_, TNode<Context>{p_context}, TNode<FixedArray>{tmp1}, TNode<Smi>{tmp7});
    tmp14 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp13});
    ca_.Goto(&block9, tmp14);
  }

  TNode<BoolT> phi_bb9_5;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_5);
    ca_.Branch(phi_bb9_5, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  TNode<Smi> tmp15;
  TNode<Smi> tmp16;
  TNode<Smi> tmp17;
  TNode<Smi> tmp18;
  TNode<Smi> tmp19;
  TNode<Smi> tmp20;
  TNode<BoolT> tmp21;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp15 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp16 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp7}, TNode<Smi>{tmp15});
    tmp17 = GetPendingRunLength_0(state_, TNode<Context>{p_context}, TNode<FixedArray>{tmp1}, TNode<Smi>{tmp16});
    tmp18 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp19 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp7}, TNode<Smi>{tmp18});
    tmp20 = GetPendingRunLength_0(state_, TNode<Context>{p_context}, TNode<FixedArray>{tmp1}, TNode<Smi>{tmp19});
    tmp21 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp17}, TNode<Smi>{tmp20});
    ca_.Branch(tmp21, &block11, std::vector<compiler::Node*>{}, &block12, std::vector<compiler::Node*>{tmp7});
  }

  TNode<Smi> tmp22;
  TNode<Smi> tmp23;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp22 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp23 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp7}, TNode<Smi>{tmp22});
    ca_.Goto(&block12, tmp23);
  }

  TNode<Smi> phi_bb12_3;
  TNode<Smi> tmp24;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_3);
    tmp24 = ca_.CallStub<Smi>(Builtins::CallableFor(ca_.isolate(), Builtin::kMergeAt), p_context, p_sortState, phi_bb12_3);
    ca_.Goto(&block10, phi_bb12_3);
  }

  TNode<Smi> tmp25;
  TNode<Smi> tmp26;
  TNode<Smi> tmp27;
  TNode<Smi> tmp28;
  TNode<BoolT> tmp29;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp25 = GetPendingRunLength_0(state_, TNode<Context>{p_context}, TNode<FixedArray>{tmp1}, TNode<Smi>{tmp7});
    tmp26 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp27 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp7}, TNode<Smi>{tmp26});
    tmp28 = GetPendingRunLength_0(state_, TNode<Context>{p_context}, TNode<FixedArray>{tmp1}, TNode<Smi>{tmp27});
    tmp29 = CodeStubAssembler(state_).SmiLessThanOrEqual(TNode<Smi>{tmp25}, TNode<Smi>{tmp28});
    ca_.Branch(tmp29, &block13, std::vector<compiler::Node*>{}, &block14, std::vector<compiler::Node*>{});
  }

  TNode<Smi> tmp30;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp30 = ca_.CallStub<Smi>(Builtins::CallableFor(ca_.isolate(), Builtin::kMergeAt), p_context, p_sortState, tmp7);
    ca_.Goto(&block10, tmp7);
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    ca_.Goto(&block3);
  }

  TNode<Smi> phi_bb10_3;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_3);
    ca_.Goto(&block4);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block16);
  }

    ca_.Bind(&block16);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=1229&c=1
void MergeForceCollapse_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<FixedArray> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 48);
    tmp1 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{p_sortState, tmp0});
    ca_.Goto(&block4);
  }

  TNode<Smi> tmp2;
  TNode<Smi> tmp3;
  TNode<BoolT> tmp4;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = GetPendingRunsSize_0(state_, TNode<Context>{p_context}, TNode<SortState>{p_sortState});
    tmp3 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp4 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp2}, TNode<Smi>{tmp3});
    ca_.Branch(tmp4, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<Smi> tmp5;
  TNode<Smi> tmp6;
  TNode<Smi> tmp7;
  TNode<Smi> tmp8;
  TNode<BoolT> tmp9;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp5 = GetPendingRunsSize_0(state_, TNode<Context>{p_context}, TNode<SortState>{p_sortState});
    tmp6 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp7 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp5}, TNode<Smi>{tmp6});
    tmp8 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp9 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp7}, TNode<Smi>{tmp8});
    ca_.Branch(tmp9, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  TNode<Smi> tmp10;
  TNode<Smi> tmp11;
  TNode<Smi> tmp12;
  TNode<Smi> tmp13;
  TNode<Smi> tmp14;
  TNode<Smi> tmp15;
  TNode<BoolT> tmp16;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp10 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp11 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp7}, TNode<Smi>{tmp10});
    tmp12 = GetPendingRunLength_0(state_, TNode<Context>{p_context}, TNode<FixedArray>{tmp1}, TNode<Smi>{tmp11});
    tmp13 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp14 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp7}, TNode<Smi>{tmp13});
    tmp15 = GetPendingRunLength_0(state_, TNode<Context>{p_context}, TNode<FixedArray>{tmp1}, TNode<Smi>{tmp14});
    tmp16 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp12}, TNode<Smi>{tmp15});
    ca_.Goto(&block9, tmp16);
  }

  TNode<BoolT> tmp17;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp17 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block9, tmp17);
  }

  TNode<BoolT> phi_bb9_5;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_5);
    ca_.Branch(phi_bb9_5, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{tmp7});
  }

  TNode<Smi> tmp18;
  TNode<Smi> tmp19;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp18 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp19 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp7}, TNode<Smi>{tmp18});
    ca_.Goto(&block6, tmp19);
  }

  TNode<Smi> phi_bb6_3;
  TNode<Smi> tmp20;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_3);
    tmp20 = ca_.CallStub<Smi>(Builtins::CallableFor(ca_.isolate(), Builtin::kMergeAt), p_context, p_sortState, phi_bb6_3);
    ca_.Goto(&block4);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block10);
  }

    ca_.Bind(&block10);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=1246&c=1
void ArrayTimSortImpl_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState, TNode<Smi> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp1 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{p_length}, TNode<Smi>{tmp0});
    ca_.Branch(tmp1, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(&block1);
  }

  TNode<Smi> tmp2;
  TNode<Smi> tmp3;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp2 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp3 = ComputeMinRunLength_0(state_, TNode<Smi>{p_length});
    ca_.Goto(&block6, p_length, tmp2);
  }

  TNode<Smi> phi_bb6_3;
  TNode<Smi> phi_bb6_4;
  TNode<Smi> tmp4;
  TNode<BoolT> tmp5;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_3, &phi_bb6_4);
    tmp4 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp5 = CodeStubAssembler(state_).SmiNotEqual(TNode<Smi>{phi_bb6_3}, TNode<Smi>{tmp4});
    ca_.Branch(tmp5, &block4, std::vector<compiler::Node*>{phi_bb6_3, phi_bb6_4}, &block5, std::vector<compiler::Node*>{phi_bb6_3, phi_bb6_4});
  }

  TNode<Smi> phi_bb4_3;
  TNode<Smi> phi_bb4_4;
  TNode<Smi> tmp6;
  TNode<Smi> tmp7;
  TNode<BoolT> tmp8;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_3, &phi_bb4_4);
    tmp6 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb4_4}, TNode<Smi>{phi_bb4_3});
    tmp7 = CountAndMakeRun_0(state_, TNode<Context>{p_context}, TNode<SortState>{p_sortState}, TNode<Smi>{phi_bb4_4}, TNode<Smi>{tmp6});
    tmp8 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp7}, TNode<Smi>{tmp3});
    ca_.Branch(tmp8, &block7, std::vector<compiler::Node*>{phi_bb4_3, phi_bb4_4}, &block8, std::vector<compiler::Node*>{phi_bb4_3, phi_bb4_4, tmp7});
  }

  TNode<Smi> phi_bb7_3;
  TNode<Smi> phi_bb7_4;
  TNode<Smi> tmp9;
  TNode<Smi> tmp10;
  TNode<Smi> tmp11;
  if (block7.is_used()) {
    ca_.Bind(&block7, &phi_bb7_3, &phi_bb7_4);
    tmp9 = CodeStubAssembler(state_).SmiMin(TNode<Smi>{tmp3}, TNode<Smi>{phi_bb7_3});
    tmp10 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb7_4}, TNode<Smi>{tmp7});
    tmp11 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb7_4}, TNode<Smi>{tmp9});
    BinaryInsertionSort_0(state_, TNode<Context>{p_context}, TNode<SortState>{p_sortState}, TNode<Smi>{phi_bb7_4}, TNode<Smi>{tmp10}, TNode<Smi>{tmp11});
    ca_.Goto(&block8, phi_bb7_3, phi_bb7_4, tmp9);
  }

  TNode<Smi> phi_bb8_3;
  TNode<Smi> phi_bb8_4;
  TNode<Smi> phi_bb8_6;
  TNode<Smi> tmp12;
  TNode<Smi> tmp13;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_3, &phi_bb8_4, &phi_bb8_6);
    PushRun_0(state_, TNode<Context>{p_context}, TNode<SortState>{p_sortState}, TNode<Smi>{phi_bb8_4}, TNode<Smi>{phi_bb8_6});
    MergeCollapse_0(state_, TNode<Context>{p_context}, TNode<SortState>{p_sortState});
    tmp12 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb8_4}, TNode<Smi>{phi_bb8_6});
    tmp13 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb8_3}, TNode<Smi>{phi_bb8_6});
    ca_.Goto(&block6, tmp13, tmp12);
  }

  TNode<Smi> phi_bb5_3;
  TNode<Smi> phi_bb5_4;
  if (block5.is_used()) {
    ca_.Bind(&block5, &phi_bb5_3, &phi_bb5_4);
    MergeForceCollapse_0(state_, TNode<Context>{p_context}, TNode<SortState>{p_sortState});
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block17);
  }

    ca_.Bind(&block17);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=1280&c=1
TNode<Smi> CompactReceiverElementsIntoWorkArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, Smi, Smi, Smi> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, Smi, Smi, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, Smi, Smi, Smi> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, Smi, Smi, Smi> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, Smi, Smi, Smi> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, Smi, Smi, Smi> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, Smi, Smi, Smi> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, Smi, Smi, Smi> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, Smi, Smi, Smi> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, Smi, Smi, Smi> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, Smi, Smi, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<FixedArray> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<FixedArray> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Smi> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<BuiltinPtr> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<Number> tmp11;
  TNode<BoolT> tmp12;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 52);
    tmp1 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{p_sortState, tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, 52);
    tmp3 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{p_sortState, tmp2});
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp5 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp3, tmp4});
    tmp6 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp5});
    tmp7 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp8 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp9 = CodeStubAssembler(state_).LoadReference<BuiltinPtr>(CodeStubAssembler::Reference{p_sortState, tmp8});
    tmp10 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp11 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{p_sortState, tmp10});
    tmp12 = CodeStubAssembler(state_).TaggedIsSmi(TNode<Object>{tmp11});
    ca_.Branch(tmp12, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<Smi> tmp13;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp13 = UnsafeCast_Smi_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp11});
    ca_.Goto(&block8, tmp13);
  }

  TNode<UintPtrT> tmp14;
  TNode<Smi> tmp15;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp14 = kSmiMax_0(state_);
    compiler::CodeAssemblerLabel label16(&ca_);
    tmp15 = Convert_PositiveSmi_uintptr_0(state_, TNode<UintPtrT>{tmp14}, &label16);
    ca_.Goto(&block12);
    if (label16.is_used()) {
      ca_.Bind(&label16);
      ca_.Goto(&block13);
    }
  }

  if (block13.is_used()) {
    ca_.Bind(&block13);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    ca_.Goto(&block8, tmp15);
  }

  TNode<Smi> phi_bb8_7;
  TNode<Smi> tmp17;
  TNode<Smi> tmp18;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_7);
    tmp17 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp18 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block16, tmp1, tmp6, tmp7, phi_bb8_7, tmp17, tmp18);
  }

  TNode<FixedArray> phi_bb16_2;
  TNode<IntPtrT> phi_bb16_3;
  TNode<IntPtrT> phi_bb16_4;
  TNode<Smi> phi_bb16_7;
  TNode<Smi> phi_bb16_8;
  TNode<Smi> phi_bb16_9;
  TNode<BoolT> tmp19;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_2, &phi_bb16_3, &phi_bb16_4, &phi_bb16_7, &phi_bb16_8, &phi_bb16_9);
    tmp19 = NumberIsLessThan_0(state_, TNode<Number>{phi_bb16_9}, TNode<Number>{tmp11});
    ca_.Branch(tmp19, &block14, std::vector<compiler::Node*>{phi_bb16_2, phi_bb16_3, phi_bb16_4, phi_bb16_7, phi_bb16_8, phi_bb16_9}, &block15, std::vector<compiler::Node*>{phi_bb16_2, phi_bb16_3, phi_bb16_4, phi_bb16_7, phi_bb16_8, phi_bb16_9});
  }

  TNode<FixedArray> phi_bb14_2;
  TNode<IntPtrT> phi_bb14_3;
  TNode<IntPtrT> phi_bb14_4;
  TNode<Smi> phi_bb14_7;
  TNode<Smi> phi_bb14_8;
  TNode<Smi> phi_bb14_9;
  TNode<Object> tmp20;
  TNode<Oddball> tmp21;
  TNode<BoolT> tmp22;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_2, &phi_bb14_3, &phi_bb14_4, &phi_bb14_7, &phi_bb14_8, &phi_bb14_9);
tmp20 = CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(5)).descriptor(), tmp9, p_context, p_sortState, phi_bb14_9);
    tmp21 = TheHole_0(state_);
    tmp22 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp20}, TNode<HeapObject>{tmp21});
    ca_.Branch(tmp22, &block18, std::vector<compiler::Node*>{phi_bb14_2, phi_bb14_3, phi_bb14_4, phi_bb14_7, phi_bb14_8, phi_bb14_9}, &block19, std::vector<compiler::Node*>{phi_bb14_2, phi_bb14_3, phi_bb14_4, phi_bb14_7, phi_bb14_8, phi_bb14_9});
  }

  TNode<FixedArray> phi_bb18_2;
  TNode<IntPtrT> phi_bb18_3;
  TNode<IntPtrT> phi_bb18_4;
  TNode<Smi> phi_bb18_7;
  TNode<Smi> phi_bb18_8;
  TNode<Smi> phi_bb18_9;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_2, &phi_bb18_3, &phi_bb18_4, &phi_bb18_7, &phi_bb18_8, &phi_bb18_9);
    ca_.Goto(&block20, phi_bb18_2, phi_bb18_3, phi_bb18_4, phi_bb18_7, phi_bb18_8, phi_bb18_9);
  }

  TNode<FixedArray> phi_bb19_2;
  TNode<IntPtrT> phi_bb19_3;
  TNode<IntPtrT> phi_bb19_4;
  TNode<Smi> phi_bb19_7;
  TNode<Smi> phi_bb19_8;
  TNode<Smi> phi_bb19_9;
  TNode<Oddball> tmp23;
  TNode<BoolT> tmp24;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_2, &phi_bb19_3, &phi_bb19_4, &phi_bb19_7, &phi_bb19_8, &phi_bb19_9);
    tmp23 = Undefined_0(state_);
    tmp24 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp20}, TNode<HeapObject>{tmp23});
    ca_.Branch(tmp24, &block21, std::vector<compiler::Node*>{phi_bb19_2, phi_bb19_3, phi_bb19_4, phi_bb19_7, phi_bb19_8, phi_bb19_9}, &block22, std::vector<compiler::Node*>{phi_bb19_2, phi_bb19_3, phi_bb19_4, phi_bb19_7, phi_bb19_8, phi_bb19_9});
  }

  TNode<FixedArray> phi_bb21_2;
  TNode<IntPtrT> phi_bb21_3;
  TNode<IntPtrT> phi_bb21_4;
  TNode<Smi> phi_bb21_7;
  TNode<Smi> phi_bb21_8;
  TNode<Smi> phi_bb21_9;
  TNode<Smi> tmp25;
  TNode<Smi> tmp26;
  if (block21.is_used()) {
    ca_.Bind(&block21, &phi_bb21_2, &phi_bb21_3, &phi_bb21_4, &phi_bb21_7, &phi_bb21_8, &phi_bb21_9);
    tmp25 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp26 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb21_8}, TNode<Smi>{tmp25});
    ca_.Goto(&block23, phi_bb21_2, phi_bb21_3, phi_bb21_4, phi_bb21_7, tmp26, phi_bb21_9);
  }

  TNode<FixedArray> phi_bb22_2;
  TNode<IntPtrT> phi_bb22_3;
  TNode<IntPtrT> phi_bb22_4;
  TNode<Smi> phi_bb22_7;
  TNode<Smi> phi_bb22_8;
  TNode<Smi> phi_bb22_9;
  TNode<BoolT> tmp27;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_2, &phi_bb22_3, &phi_bb22_4, &phi_bb22_7, &phi_bb22_8, &phi_bb22_9);
    tmp27 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb22_3}, TNode<IntPtrT>{phi_bb22_4});
    ca_.Branch(tmp27, &block30, std::vector<compiler::Node*>{phi_bb22_2, phi_bb22_3, phi_bb22_4, phi_bb22_7, phi_bb22_8, phi_bb22_9}, &block31, std::vector<compiler::Node*>{phi_bb22_2, phi_bb22_3, phi_bb22_4, phi_bb22_7, phi_bb22_8, phi_bb22_9});
  }

  TNode<FixedArray> phi_bb30_2;
  TNode<IntPtrT> phi_bb30_3;
  TNode<IntPtrT> phi_bb30_4;
  TNode<Smi> phi_bb30_7;
  TNode<Smi> phi_bb30_8;
  TNode<Smi> phi_bb30_9;
  TNode<IntPtrT> tmp28;
  TNode<IntPtrT> tmp29;
  TNode<IntPtrT> tmp30;
  TNode<IntPtrT> tmp31;
  TNode<IntPtrT> tmp32;
  TNode<IntPtrT> tmp33;
  TNode<FixedArray> tmp34;
  if (block30.is_used()) {
    ca_.Bind(&block30, &phi_bb30_2, &phi_bb30_3, &phi_bb30_4, &phi_bb30_7, &phi_bb30_8, &phi_bb30_9);
    tmp28 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp29 = CodeStubAssembler(state_).WordSar(TNode<IntPtrT>{phi_bb30_3}, TNode<IntPtrT>{tmp28});
    tmp30 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb30_3}, TNode<IntPtrT>{tmp29});
    tmp31 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x10ull));
    tmp32 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp30}, TNode<IntPtrT>{tmp31});
    tmp33 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp34 = ExtractFixedArray_0(state_, TNode<FixedArray>{phi_bb30_2}, TNode<IntPtrT>{tmp33}, TNode<IntPtrT>{phi_bb30_4}, TNode<IntPtrT>{tmp32});
    ca_.Goto(&block31, tmp34, tmp32, phi_bb30_4, phi_bb30_7, phi_bb30_8, phi_bb30_9);
  }

  TNode<FixedArray> phi_bb31_2;
  TNode<IntPtrT> phi_bb31_3;
  TNode<IntPtrT> phi_bb31_4;
  TNode<Smi> phi_bb31_7;
  TNode<Smi> phi_bb31_8;
  TNode<Smi> phi_bb31_9;
  TNode<Object> tmp35;
  TNode<IntPtrT> tmp36;
  TNode<IntPtrT> tmp37;
  TNode<IntPtrT> tmp38;
  TNode<IntPtrT> tmp39;
  TNode<UintPtrT> tmp40;
  TNode<UintPtrT> tmp41;
  TNode<BoolT> tmp42;
  if (block31.is_used()) {
    ca_.Bind(&block31, &phi_bb31_2, &phi_bb31_3, &phi_bb31_4, &phi_bb31_7, &phi_bb31_8, &phi_bb31_9);
    std::tie(tmp35, tmp36, tmp37) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{phi_bb31_2}).Flatten();
    tmp38 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp39 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb31_4}, TNode<IntPtrT>{tmp38});
    tmp40 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb31_4});
    tmp41 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp37});
    tmp42 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp40}, TNode<UintPtrT>{tmp41});
    ca_.Branch(tmp42, &block49, std::vector<compiler::Node*>{phi_bb31_7, phi_bb31_8, phi_bb31_9, phi_bb31_4, phi_bb31_4, phi_bb31_4, phi_bb31_4}, &block50, std::vector<compiler::Node*>{phi_bb31_7, phi_bb31_8, phi_bb31_9, phi_bb31_4, phi_bb31_4, phi_bb31_4, phi_bb31_4});
  }

  TNode<Smi> phi_bb49_7;
  TNode<Smi> phi_bb49_8;
  TNode<Smi> phi_bb49_9;
  TNode<IntPtrT> phi_bb49_17;
  TNode<IntPtrT> phi_bb49_18;
  TNode<IntPtrT> phi_bb49_22;
  TNode<IntPtrT> phi_bb49_23;
  TNode<IntPtrT> tmp43;
  TNode<IntPtrT> tmp44;
  TNode<Object> tmp45;
  TNode<IntPtrT> tmp46;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_7, &phi_bb49_8, &phi_bb49_9, &phi_bb49_17, &phi_bb49_18, &phi_bb49_22, &phi_bb49_23);
    tmp43 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb49_23});
    tmp44 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp36}, TNode<IntPtrT>{tmp43});
    std::tie(tmp45, tmp46) = NewReference_Object_0(state_, TNode<Object>{tmp35}, TNode<IntPtrT>{tmp44}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp45, tmp46}, tmp20);
    ca_.Goto(&block23, phi_bb31_2, phi_bb31_3, tmp39, phi_bb49_7, phi_bb49_8, phi_bb49_9);
  }

  TNode<Smi> phi_bb50_7;
  TNode<Smi> phi_bb50_8;
  TNode<Smi> phi_bb50_9;
  TNode<IntPtrT> phi_bb50_17;
  TNode<IntPtrT> phi_bb50_18;
  TNode<IntPtrT> phi_bb50_22;
  TNode<IntPtrT> phi_bb50_23;
  if (block50.is_used()) {
    ca_.Bind(&block50, &phi_bb50_7, &phi_bb50_8, &phi_bb50_9, &phi_bb50_17, &phi_bb50_18, &phi_bb50_22, &phi_bb50_23);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<FixedArray> phi_bb23_2;
  TNode<IntPtrT> phi_bb23_3;
  TNode<IntPtrT> phi_bb23_4;
  TNode<Smi> phi_bb23_7;
  TNode<Smi> phi_bb23_8;
  TNode<Smi> phi_bb23_9;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_2, &phi_bb23_3, &phi_bb23_4, &phi_bb23_7, &phi_bb23_8, &phi_bb23_9);
    ca_.Goto(&block20, phi_bb23_2, phi_bb23_3, phi_bb23_4, phi_bb23_7, phi_bb23_8, phi_bb23_9);
  }

  TNode<FixedArray> phi_bb20_2;
  TNode<IntPtrT> phi_bb20_3;
  TNode<IntPtrT> phi_bb20_4;
  TNode<Smi> phi_bb20_7;
  TNode<Smi> phi_bb20_8;
  TNode<Smi> phi_bb20_9;
  TNode<Smi> tmp47;
  TNode<Smi> tmp48;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_2, &phi_bb20_3, &phi_bb20_4, &phi_bb20_7, &phi_bb20_8, &phi_bb20_9);
    tmp47 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp48 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb20_9}, TNode<Smi>{tmp47});
    ca_.Goto(&block16, phi_bb20_2, phi_bb20_3, phi_bb20_4, phi_bb20_7, phi_bb20_8, tmp48);
  }

  TNode<FixedArray> phi_bb15_2;
  TNode<IntPtrT> phi_bb15_3;
  TNode<IntPtrT> phi_bb15_4;
  TNode<Smi> phi_bb15_7;
  TNode<Smi> phi_bb15_8;
  TNode<Smi> phi_bb15_9;
  TNode<IntPtrT> tmp49;
  TNode<IntPtrT> tmp50;
  TNode<IntPtrT> tmp51;
  TNode<Smi> tmp52;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_2, &phi_bb15_3, &phi_bb15_4, &phi_bb15_7, &phi_bb15_8, &phi_bb15_9);
    tmp49 = FromConstexpr_intptr_constexpr_int31_0(state_, 52);
    CodeStubAssembler(state_).StoreReference<FixedArray>(CodeStubAssembler::Reference{p_sortState, tmp49}, phi_bb15_2);
    tmp50 = FromConstexpr_intptr_constexpr_int31_0(state_, 60);
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{p_sortState, tmp50}, phi_bb15_7);
    tmp51 = FromConstexpr_intptr_constexpr_int31_0(state_, 64);
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{p_sortState, tmp51}, phi_bb15_8);
    tmp52 = Convert_Smi_intptr_0(state_, TNode<IntPtrT>{phi_bb15_4});
    ca_.Goto(&block53);
  }

    ca_.Bind(&block53);
  return TNode<Smi>{tmp52};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=1324&c=1
void CopyWorkArrayToReceiver_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_sortState, TNode<Smi> p_numberOfNonUndefined) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<BuiltinPtr> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<FixedArray> tmp3;
  TNode<Smi> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 28);
    tmp1 = CodeStubAssembler(state_).LoadReference<BuiltinPtr>(CodeStubAssembler::Reference{p_sortState, tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, 52);
    tmp3 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{p_sortState, tmp2});
    tmp4 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block12, tmp4);
  }

  TNode<Smi> phi_bb12_5;
  TNode<BoolT> tmp5;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_5);
    tmp5 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb12_5}, TNode<Smi>{p_numberOfNonUndefined});
    ca_.Branch(tmp5, &block10, std::vector<compiler::Node*>{phi_bb12_5}, &block11, std::vector<compiler::Node*>{phi_bb12_5});
  }

  TNode<Smi> phi_bb10_5;
  TNode<Object> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<UintPtrT> tmp10;
  TNode<UintPtrT> tmp11;
  TNode<BoolT> tmp12;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_5);
    std::tie(tmp6, tmp7, tmp8) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp3}).Flatten();
    tmp9 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb10_5});
    tmp10 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp9});
    tmp11 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp8});
    tmp12 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp10}, TNode<UintPtrT>{tmp11});
    ca_.Branch(tmp12, &block18, std::vector<compiler::Node*>{phi_bb10_5, phi_bb10_5, phi_bb10_5, phi_bb10_5}, &block19, std::vector<compiler::Node*>{phi_bb10_5, phi_bb10_5, phi_bb10_5, phi_bb10_5});
  }

  TNode<Smi> phi_bb18_5;
  TNode<Smi> phi_bb18_8;
  TNode<Smi> phi_bb18_13;
  TNode<Smi> phi_bb18_14;
  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<Object> tmp15;
  TNode<IntPtrT> tmp16;
  TNode<Object> tmp17;
  TNode<Object> tmp18;
  TNode<Smi> tmp19;
  TNode<Smi> tmp20;
  TNode<Smi> tmp21;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_5, &phi_bb18_8, &phi_bb18_13, &phi_bb18_14);
    tmp13 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp9});
    tmp14 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp7}, TNode<IntPtrT>{tmp13});
    std::tie(tmp15, tmp16) = NewReference_Object_0(state_, TNode<Object>{tmp6}, TNode<IntPtrT>{tmp14}).Flatten();
    tmp17 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp15, tmp16});
    tmp18 = UnsafeCast_JSAny_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp17});
tmp19 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(6)).descriptor(), tmp1, p_context, p_sortState, phi_bb18_8, tmp18));
    tmp20 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp21 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb18_5}, TNode<Smi>{tmp20});
    ca_.Goto(&block12, tmp21);
  }

  TNode<Smi> phi_bb19_5;
  TNode<Smi> phi_bb19_8;
  TNode<Smi> phi_bb19_13;
  TNode<Smi> phi_bb19_14;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_5, &phi_bb19_8, &phi_bb19_13, &phi_bb19_14);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb11_5;
  TNode<IntPtrT> tmp22;
  TNode<Smi> tmp23;
  TNode<Smi> tmp24;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_5);
    tmp22 = FromConstexpr_intptr_constexpr_int31_0(state_, 64);
    tmp23 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_sortState, tmp22});
    tmp24 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp23}, TNode<Smi>{p_numberOfNonUndefined});
    ca_.Goto(&block24, phi_bb11_5);
  }

  TNode<Smi> phi_bb24_5;
  TNode<BoolT> tmp25;
  if (block24.is_used()) {
    ca_.Bind(&block24, &phi_bb24_5);
    tmp25 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb24_5}, TNode<Smi>{tmp24});
    ca_.Branch(tmp25, &block22, std::vector<compiler::Node*>{phi_bb24_5}, &block23, std::vector<compiler::Node*>{phi_bb24_5});
  }

  TNode<Smi> phi_bb22_5;
  TNode<Oddball> tmp26;
  TNode<Smi> tmp27;
  TNode<Smi> tmp28;
  TNode<Smi> tmp29;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_5);
    tmp26 = Undefined_0(state_);
tmp27 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(6)).descriptor(), tmp1, p_context, p_sortState, phi_bb22_5, tmp26));
    tmp28 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp29 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb22_5}, TNode<Smi>{tmp28});
    ca_.Goto(&block24, tmp29);
  }

  TNode<Smi> phi_bb23_5;
  TNode<IntPtrT> tmp30;
  TNode<Smi> tmp31;
  TNode<IntPtrT> tmp32;
  TNode<BuiltinPtr> tmp33;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_5);
    tmp30 = FromConstexpr_intptr_constexpr_int31_0(state_, 60);
    tmp31 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_sortState, tmp30});
    tmp32 = FromConstexpr_intptr_constexpr_int31_0(state_, 32);
    tmp33 = CodeStubAssembler(state_).LoadReference<BuiltinPtr>(CodeStubAssembler::Reference{p_sortState, tmp32});
    ca_.Goto(&block28, phi_bb23_5);
  }

  TNode<Smi> phi_bb28_5;
  TNode<BoolT> tmp34;
  if (block28.is_used()) {
    ca_.Bind(&block28, &phi_bb28_5);
    tmp34 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb28_5}, TNode<Smi>{tmp31});
    ca_.Branch(tmp34, &block26, std::vector<compiler::Node*>{phi_bb28_5}, &block27, std::vector<compiler::Node*>{phi_bb28_5});
  }

  TNode<Smi> phi_bb26_5;
  TNode<Smi> tmp35;
  TNode<Smi> tmp36;
  TNode<Smi> tmp37;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_5);
tmp35 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(7)).descriptor(), tmp33, p_context, p_sortState, phi_bb26_5));
    tmp36 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp37 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb26_5}, TNode<Smi>{tmp36});
    ca_.Goto(&block28, tmp37);
  }

  TNode<Smi> phi_bb27_5;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_5);
    ca_.Goto(&block30);
  }

    ca_.Bind(&block30);
}

TF_BUILTIN(ArrayTimSort, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<SortState> parameter1 = UncheckedParameter<SortState>(Descriptor::kSortState);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CompactReceiverElementsIntoWorkArray_0(state_, TNode<Context>{parameter0}, TNode<SortState>{parameter1});
    ArrayTimSortImpl_0(state_, TNode<Context>{parameter0}, TNode<SortState>{parameter1}, TNode<Smi>{tmp0});
    compiler::CodeAssemblerLabel label1(&ca_);
    Method_SortState_CheckAccessor_0(state_, TNode<Context>{parameter0}, TNode<SortState>{parameter1}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    Method_SortState_ResetToGenericAccessor_0(state_, TNode<SortState>{parameter1});
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block1);
  }

  TNode<Smi> tmp2;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    CopyWorkArrayToReceiver_0(state_, TNode<Context>{parameter0}, TNode<SortState>{parameter1}, TNode<Smi>{tmp0});
    tmp2 = kSuccess_0(state_);
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(ArrayPrototypeSort, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<HeapObject> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp0});
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_Undefined_OR_CallableApiObject_OR_CallableJSProxy_OR_JSWrappedFunction_OR_JSBoundFunction_OR_JSFunction_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp1}, &label3);
    ca_.Goto(&block3);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kBadSortComparisonFunction, TNode<Object>{tmp1});
  }

  TNode<JSReceiver> tmp4;
  TNode<Number> tmp5;
  TNode<Number> tmp6;
  TNode<BoolT> tmp7;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp4 = ca_.CallStub<JSReceiver>(Builtins::CallableFor(ca_.isolate(), Builtin::kToObject), parameter0, parameter1);
    tmp5 = GetLengthProperty_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp4});
    tmp6 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp7 = NumberIsLessThan_0(state_, TNode<Number>{tmp5}, TNode<Number>{tmp6});
    ca_.Branch(tmp7, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    arguments.PopAndReturn(tmp4);
  }

  TNode<SortState> tmp8;
  TNode<Object> tmp9;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp8 = NewSortState_0(state_, TNode<Context>{parameter0}, TNode<JSReceiver>{tmp4}, TNode<HeapObject>{tmp2}, TNode<Number>{tmp5});
    tmp9 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kArrayTimSort), parameter0, tmp8);
    arguments.PopAndReturn(tmp4);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=43&c=3
TNode<JSReceiver> LoadSortStateReceiver_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<JSReceiver> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp1 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<JSReceiver>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=43&c=3
void StoreSortStateReceiver_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<JSReceiver> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    CodeStubAssembler(state_).StoreReference<JSReceiver>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=48&c=3
TNode<Map> LoadSortStateInitialReceiverMap_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Map> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp1 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Map>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=48&c=3
void StoreSortStateInitialReceiverMap_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<Map> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=49&c=3
TNode<Number> LoadSortStateInitialReceiverLength_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Number> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp1 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Number>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=49&c=3
void StoreSortStateInitialReceiverLength_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<Number> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    CodeStubAssembler(state_).StoreReference<Number>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=52&c=3
TNode<HeapObject> LoadSortStateUserCmpFn_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<HeapObject> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp1 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<HeapObject>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=52&c=3
void StoreSortStateUserCmpFn_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<HeapObject> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    CodeStubAssembler(state_).StoreReference<HeapObject>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=57&c=3
TNode<BuiltinPtr> LoadSortStateSortComparePtr_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<BuiltinPtr> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    tmp1 = CodeStubAssembler(state_).LoadReference<BuiltinPtr>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<BuiltinPtr>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=57&c=3
void StoreSortStateSortComparePtr_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<BuiltinPtr> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    CodeStubAssembler(state_).StoreReference<BuiltinPtr>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=62&c=3
TNode<BuiltinPtr> LoadSortStateLoadFn_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<BuiltinPtr> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp1 = CodeStubAssembler(state_).LoadReference<BuiltinPtr>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<BuiltinPtr>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=62&c=3
void StoreSortStateLoadFn_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<BuiltinPtr> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    CodeStubAssembler(state_).StoreReference<BuiltinPtr>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=63&c=3
TNode<BuiltinPtr> LoadSortStateStoreFn_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<BuiltinPtr> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 28);
    tmp1 = CodeStubAssembler(state_).LoadReference<BuiltinPtr>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<BuiltinPtr>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=63&c=3
void StoreSortStateStoreFn_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<BuiltinPtr> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 28);
    CodeStubAssembler(state_).StoreReference<BuiltinPtr>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=64&c=3
TNode<BuiltinPtr> LoadSortStateDeleteFn_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<BuiltinPtr> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 32);
    tmp1 = CodeStubAssembler(state_).LoadReference<BuiltinPtr>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<BuiltinPtr>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=64&c=3
void StoreSortStateDeleteFn_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<BuiltinPtr> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 32);
    CodeStubAssembler(state_).StoreReference<BuiltinPtr>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=65&c=3
TNode<BuiltinPtr> LoadSortStateCanUseSameAccessorFn_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<BuiltinPtr> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 36);
    tmp1 = CodeStubAssembler(state_).LoadReference<BuiltinPtr>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<BuiltinPtr>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=65&c=3
void StoreSortStateCanUseSameAccessorFn_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<BuiltinPtr> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 36);
    CodeStubAssembler(state_).StoreReference<BuiltinPtr>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=70&c=3
TNode<Smi> LoadSortStateMinGallop_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 40);
    tmp1 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Smi>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=70&c=3
void StoreSortStateMinGallop_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 40);
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=82&c=3
TNode<Smi> LoadSortStatePendingRunsSize_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 44);
    tmp1 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Smi>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=82&c=3
void StoreSortStatePendingRunsSize_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 44);
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=83&c=3
TNode<FixedArray> LoadSortStatePendingRuns_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<FixedArray> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 48);
    tmp1 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<FixedArray>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=83&c=3
void StoreSortStatePendingRuns_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<FixedArray> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 48);
    CodeStubAssembler(state_).StoreReference<FixedArray>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=88&c=3
TNode<FixedArray> LoadSortStateWorkArray_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<FixedArray> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 52);
    tmp1 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<FixedArray>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=88&c=3
void StoreSortStateWorkArray_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<FixedArray> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 52);
    CodeStubAssembler(state_).StoreReference<FixedArray>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=91&c=3
TNode<FixedArray> LoadSortStateTempArray_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<FixedArray> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 56);
    tmp1 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<FixedArray>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=91&c=3
void StoreSortStateTempArray_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<FixedArray> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 56);
    CodeStubAssembler(state_).StoreReference<FixedArray>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=94&c=3
TNode<Smi> LoadSortStateSortLength_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 60);
    tmp1 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Smi>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=94&c=3
void StoreSortStateSortLength_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 60);
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=98&c=3
TNode<Smi> LoadSortStateNumberOfUndefined_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 64);
    tmp1 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Smi>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=98&c=3
void StoreSortStateNumberOfUndefined_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_o, TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 64);
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=18&c=3
TNode<Number> Method_SortState_Compare_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_this, TNode<Object> p_x, TNode<Object> p_y) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<BuiltinPtr> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<HeapObject> tmp3;
  TNode<Number> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    tmp1 = CodeStubAssembler(state_).LoadReference<BuiltinPtr>(CodeStubAssembler::Reference{p_this, tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp3 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{p_this, tmp2});
tmp4 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(9)).descriptor(), tmp1, p_context, tmp3, p_x, p_y));
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Number>{tmp4};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=23&c=3
void Method_SortState_CheckAccessor_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<SortState> p_this, compiler::CodeAssemblerLabel* label_Bailout) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<JSReceiver> tmp1;
  TNode<BoolT> tmp2;
  TNode<BoolT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp1 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{p_this, tmp0});
    tmp2 = IsFastJSArray_0(state_, TNode<Object>{tmp1}, TNode<Context>{p_context});
    tmp3 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp2});
    ca_.Branch(tmp3, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block1);
  }

  TNode<IntPtrT> tmp4;
  TNode<BuiltinPtr> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<JSReceiver> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<Map> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<Number> tmp11;
  TNode<Oddball> tmp12;
  TNode<BoolT> tmp13;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, 36);
    tmp5 = CodeStubAssembler(state_).LoadReference<BuiltinPtr>(CodeStubAssembler::Reference{p_this, tmp4});
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp7 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{p_this, tmp6});
    tmp8 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp9 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{p_this, tmp8});
    tmp10 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp11 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{p_this, tmp10});
tmp12 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(8)).descriptor(), tmp5, p_context, tmp7, tmp9, tmp11));
    tmp13 = CodeStubAssembler(state_).IsFalse(TNode<Oddball>{tmp12});
    ca_.Branch(tmp13, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block1);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block7);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Bailout);
  }

    ca_.Bind(&block7);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=36&c=3
void Method_SortState_ResetToGenericAccessor_0(compiler::CodeAssemblerState* state_, TNode<SortState> p_this) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    CodeStubAssembler(state_).StoreReference<BuiltinPtr>(CodeStubAssembler::Reference{p_this, tmp0}, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoad_GenericElementsAccessor_0)));
    tmp1 = FromConstexpr_intptr_constexpr_int31_0(state_, 28);
    CodeStubAssembler(state_).StoreReference<BuiltinPtr>(CodeStubAssembler::Reference{p_this, tmp1}, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kStore_GenericElementsAccessor_0)));
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, 32);
    CodeStubAssembler(state_).StoreReference<BuiltinPtr>(CodeStubAssembler::Reference{p_this, tmp2}, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kDelete_GenericElementsAccessor_0)));
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=17&c=1
TNode<SortState> DownCastForTorqueClass_SortState_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
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
    if (((CodeStubAssembler(state_).ConstexprInt31Equal(static_cast<InstanceType>(260), static_cast<InstanceType>(260))))) {
      ca_.Goto(&block3);
    } else {
      ca_.Goto(&block4);
    }
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    if ((CodeStubAssembler(state_).ClassHasMapConstant<SortState>())) {
      ca_.Goto(&block6);
    } else {
      ca_.Goto(&block7);
    }
  }

  TNode<Map> tmp2;
  TNode<BoolT> tmp3;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp2 = CodeStubAssembler(state_).GetClassMapConstant<SortState>();
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
    tmp6 = FromConstexpr_uint32_constexpr_uint32_0(state_, static_cast<InstanceType>(260));
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
    tmp8 = FromConstexpr_int32_constexpr_int32_0(state_, (CodeStubAssembler(state_).ConstexprUint32Sub(static_cast<InstanceType>(260), static_cast<InstanceType>(260))));
    tmp9 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp10 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp1, tmp9});
    tmp11 = Convert_uint16_InstanceType_0(state_, TNode<Uint16T>{tmp10});
    tmp12 = Convert_int32_uint16_0(state_, TNode<Uint16T>{tmp11});
    tmp13 = FromConstexpr_InstanceType_constexpr_InstanceType_0(state_, static_cast<InstanceType>(260));
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

  TNode<SortState> tmp20;
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
  return TNode<SortState>{tmp20};
}

TF_BUILTIN(CanUseSameAccessor_FastDoubleElements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSReceiver> parameter1 = UncheckedParameter<JSReceiver>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<Map> parameter2 = UncheckedParameter<Map>(Descriptor::kInitialReceiverMap);
  USE(parameter2);
  TNode<Number> parameter3 = UncheckedParameter<Number>(Descriptor::kInitialReceiverLength);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Map> tmp1;
  TNode<BoolT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp1 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{parameter1, tmp0});
    tmp2 = CodeStubAssembler(state_).TaggedNotEqual(TNode<HeapObject>{tmp1}, TNode<HeapObject>{parameter2});
    ca_.Branch(tmp2, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<Oddball> tmp3;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp3 = False_0(state_);
    CodeStubAssembler(state_).Return(tmp3);
  }

  TNode<JSArray> tmp4;
  TNode<Smi> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<Number> tmp7;
  TNode<Smi> tmp8;
  TNode<BoolT> tmp9;
  TNode<Oddball> tmp10;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp4 = UnsafeCast_JSArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1});
    tmp5 = UnsafeCast_Smi_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter3});
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp7 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp4, tmp6});
    tmp8 = UnsafeCast_Smi_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp7});
    tmp9 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp8}, TNode<Smi>{tmp5});
    tmp10 = CodeStubAssembler(state_).SelectBooleanConstant(TNode<BoolT>{tmp9});
    CodeStubAssembler(state_).Return(tmp10);
  }
}

TF_BUILTIN(CanUseSameAccessor_FastSmiElements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSReceiver> parameter1 = UncheckedParameter<JSReceiver>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<Map> parameter2 = UncheckedParameter<Map>(Descriptor::kInitialReceiverMap);
  USE(parameter2);
  TNode<Number> parameter3 = UncheckedParameter<Number>(Descriptor::kInitialReceiverLength);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Map> tmp1;
  TNode<BoolT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp1 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{parameter1, tmp0});
    tmp2 = CodeStubAssembler(state_).TaggedNotEqual(TNode<HeapObject>{tmp1}, TNode<HeapObject>{parameter2});
    ca_.Branch(tmp2, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<Oddball> tmp3;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp3 = False_0(state_);
    CodeStubAssembler(state_).Return(tmp3);
  }

  TNode<JSArray> tmp4;
  TNode<Smi> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<Number> tmp7;
  TNode<Smi> tmp8;
  TNode<BoolT> tmp9;
  TNode<Oddball> tmp10;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp4 = UnsafeCast_JSArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1});
    tmp5 = UnsafeCast_Smi_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter3});
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp7 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp4, tmp6});
    tmp8 = UnsafeCast_Smi_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp7});
    tmp9 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp8}, TNode<Smi>{tmp5});
    tmp10 = CodeStubAssembler(state_).SelectBooleanConstant(TNode<BoolT>{tmp9});
    CodeStubAssembler(state_).Return(tmp10);
  }
}

TF_BUILTIN(CanUseSameAccessor_FastObjectElements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSReceiver> parameter1 = UncheckedParameter<JSReceiver>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<Map> parameter2 = UncheckedParameter<Map>(Descriptor::kInitialReceiverMap);
  USE(parameter2);
  TNode<Number> parameter3 = UncheckedParameter<Number>(Descriptor::kInitialReceiverLength);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Map> tmp1;
  TNode<BoolT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp1 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{parameter1, tmp0});
    tmp2 = CodeStubAssembler(state_).TaggedNotEqual(TNode<HeapObject>{tmp1}, TNode<HeapObject>{parameter2});
    ca_.Branch(tmp2, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<Oddball> tmp3;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp3 = False_0(state_);
    CodeStubAssembler(state_).Return(tmp3);
  }

  TNode<JSArray> tmp4;
  TNode<Smi> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<Number> tmp7;
  TNode<Smi> tmp8;
  TNode<BoolT> tmp9;
  TNode<Oddball> tmp10;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp4 = UnsafeCast_JSArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1});
    tmp5 = UnsafeCast_Smi_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter3});
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp7 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp4, tmp6});
    tmp8 = UnsafeCast_Smi_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp7});
    tmp9 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp8}, TNode<Smi>{tmp5});
    tmp10 = CodeStubAssembler(state_).SelectBooleanConstant(TNode<BoolT>{tmp9});
    CodeStubAssembler(state_).Return(tmp10);
  }
}

TF_BUILTIN(Load_GenericElementsAccessor_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<SortState> parameter1 = UncheckedParameter<SortState>(Descriptor::kSortState);
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedParameter<Smi>(Descriptor::kIndex);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<JSReceiver> tmp1;
  TNode<Oddball> tmp2;
  TNode<BoolT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp1 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{parameter1, tmp0});
    tmp2 = CodeStubAssembler(state_).HasProperty_Inline(TNode<Context>{parameter0}, TNode<JSReceiver>{tmp1}, TNode<Object>{parameter2});
    tmp3 = CodeStubAssembler(state_).IsFalse(TNode<Oddball>{tmp2});
    ca_.Branch(tmp3, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<Oddball> tmp4;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp4 = TheHole_0(state_);
    CodeStubAssembler(state_).Return(tmp4);
  }

  TNode<Object> tmp5;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp5 = CodeStubAssembler(state_).GetProperty(TNode<Context>{parameter0}, TNode<Object>{tmp1}, TNode<Object>{parameter2});
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TF_BUILTIN(Store_GenericElementsAccessor_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<SortState> parameter1 = UncheckedParameter<SortState>(Descriptor::kSortState);
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedParameter<Smi>(Descriptor::kIndex);
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<JSReceiver> tmp1;
  TNode<Object> tmp2;
  TNode<Smi> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp1 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{parameter1, tmp0});
    tmp2 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kSetProperty), parameter0, tmp1, parameter2, parameter3);
    tmp3 = kSuccess_0(state_);
    CodeStubAssembler(state_).Return(tmp3);
  }
}

TF_BUILTIN(Delete_GenericElementsAccessor_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<SortState> parameter1 = UncheckedParameter<SortState>(Descriptor::kSortState);
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedParameter<Smi>(Descriptor::kIndex);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<JSReceiver> tmp1;
  TNode<Smi> tmp2;
  TNode<Oddball> tmp3;
  TNode<Smi> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp1 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{parameter1, tmp0});
    tmp2 = FromConstexpr_LanguageModeSmi_constexpr_LanguageMode_0(state_, LanguageMode::kStrict);
    tmp3 = ca_.CallStub<Oddball>(Builtins::CallableFor(ca_.isolate(), Builtin::kDeleteProperty), parameter0, tmp1, parameter2, tmp2);
    tmp4 = kSuccess_0(state_);
    CodeStubAssembler(state_).Return(tmp4);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=244&c=18
TNode<JSObject> UnsafeCast_JSObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSObject> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TORQUE_CAST(TNode<Object>{p_o});
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<JSObject>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=295&c=19
TNode<HeapNumber> UnsafeCast_HeapNumber_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<HeapNumber> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TORQUE_CAST(TNode<Object>{p_o});
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<HeapNumber>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=1383&c=21
TNode<HeapObject> Cast_Undefined_OR_CallableApiObject_OR_CallableJSProxy_OR_JSWrappedFunction_OR_JSBoundFunction_OR_JSFunction_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
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

  TNode<HeapObject> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_Undefined_OR_CallableApiObject_OR_CallableJSProxy_OR_JSWrappedFunction_OR_JSBoundFunction_OR_JSFunction_0(state_, TNode<HeapObject>{tmp0}, &label3);
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
  return TNode<HeapObject>{tmp2};
}

} // namespace internal
} // namespace v8
