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
#include "torque-generated/src/builtins/promise-any-tq-csa.h"
#include "torque-generated/src/builtins/aggregate-error-tq-csa.h"
#include "torque-generated/src/builtins/array-every-tq-csa.h"
#include "torque-generated/src/builtins/array-from-tq-csa.h"
#include "torque-generated/src/builtins/array-join-tq-csa.h"
#include "torque-generated/src/builtins/array-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/iterator-tq-csa.h"
#include "torque-generated/src/builtins/promise-abstract-operations-tq-csa.h"
#include "torque-generated/src/builtins/promise-all-tq-csa.h"
#include "torque-generated/src/builtins/promise-all-element-closure-tq-csa.h"
#include "torque-generated/src/builtins/promise-any-tq-csa.h"
#include "torque-generated/src/builtins/promise-constructor-tq-csa.h"
#include "torque-generated/src/builtins/promise-misc-tq-csa.h"
#include "torque-generated/src/builtins/promise-resolve-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/objects/contexts-tq-csa.h"
#include "torque-generated/src/objects/fixed-array-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-any.tq?l=9&c=1
TNode<IntPtrT> FromConstexpr_PromiseAnyRejectElementContextSlots_constexpr_kPromiseAnyRejectElementRemainingSlot_0(compiler::CodeAssemblerState* state_, PromiseBuiltins::PromiseAnyRejectElementContextSlots p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.IntPtrConstant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<IntPtrT>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<IntPtrT>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-any.tq?l=9&c=1
TNode<IntPtrT> FromConstexpr_PromiseAnyRejectElementContextSlots_constexpr_kPromiseAnyRejectElementCapabilitySlot_0(compiler::CodeAssemblerState* state_, PromiseBuiltins::PromiseAnyRejectElementContextSlots p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.IntPtrConstant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<IntPtrT>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<IntPtrT>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-any.tq?l=9&c=1
TNode<IntPtrT> FromConstexpr_PromiseAnyRejectElementContextSlots_constexpr_kPromiseAnyRejectElementErrorsSlot_0(compiler::CodeAssemblerState* state_, PromiseBuiltins::PromiseAnyRejectElementContextSlots p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.IntPtrConstant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<IntPtrT>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<IntPtrT>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-any.tq?l=9&c=1
TNode<IntPtrT> FromConstexpr_PromiseAnyRejectElementContextSlots_constexpr_kPromiseAnyRejectElementLength_0(compiler::CodeAssemblerState* state_, PromiseBuiltins::PromiseAnyRejectElementContextSlots p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.IntPtrConstant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<IntPtrT>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<IntPtrT>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-any.tq?l=9&c=1
TNode<IntPtrT> kPromiseAnyRejectElementRemainingSlot_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  TNode<IntPtrT> tmp0;
    tmp0 = FromConstexpr_PromiseAnyRejectElementContextSlots_constexpr_kPromiseAnyRejectElementRemainingSlot_0(state_, PromiseBuiltins::PromiseAnyRejectElementContextSlots::kPromiseAnyRejectElementRemainingSlot);
  TNode<IntPtrT> tmp1;
    tmp1 = (TNode<IntPtrT>{tmp0});
  return TNode<IntPtrT>{tmp1};}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-any.tq?l=9&c=1
TNode<IntPtrT> kPromiseAnyRejectElementCapabilitySlot_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  TNode<IntPtrT> tmp0;
    tmp0 = FromConstexpr_PromiseAnyRejectElementContextSlots_constexpr_kPromiseAnyRejectElementCapabilitySlot_0(state_, PromiseBuiltins::PromiseAnyRejectElementContextSlots::kPromiseAnyRejectElementCapabilitySlot);
  TNode<IntPtrT> tmp1;
    tmp1 = (TNode<IntPtrT>{tmp0});
  return TNode<IntPtrT>{tmp1};}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-any.tq?l=9&c=1
TNode<IntPtrT> kPromiseAnyRejectElementErrorsSlot_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  TNode<IntPtrT> tmp0;
    tmp0 = FromConstexpr_PromiseAnyRejectElementContextSlots_constexpr_kPromiseAnyRejectElementErrorsSlot_0(state_, PromiseBuiltins::PromiseAnyRejectElementContextSlots::kPromiseAnyRejectElementErrorsSlot);
  TNode<IntPtrT> tmp1;
    tmp1 = (TNode<IntPtrT>{tmp0});
  return TNode<IntPtrT>{tmp1};}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-any.tq?l=32&c=1
TNode<Context> CreatePromiseAnyRejectElementContext_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<PromiseCapability> p_capability, TNode<NativeContext> p_nativeContext) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Context> tmp1;
  TNode<Context> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<FixedArray> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_intptr_0(state_, PromiseBuiltins::PromiseAnyRejectElementContextSlots::kPromiseAnyRejectElementLength);
    tmp1 = AllocateSyntheticFunctionContext_1(state_, TNode<NativeContext>{p_nativeContext}, TNode<IntPtrT>{tmp0});
    tmp2 = (TNode<Context>{tmp1});
    tmp3 = kPromiseAnyRejectElementRemainingSlot_0(state_);
    InitContextSlot_PromiseAnyRejectElementContext_PromiseAnyRejectElementContext_Smi_constexpr_IntegerLiteral_0(state_, TNode<Context>{tmp2}, TNode<IntPtrT>{tmp3}, IntegerLiteral(false, 0x1ull));
    tmp4 = kPromiseAnyRejectElementCapabilitySlot_0(state_);
    InitContextSlot_PromiseAnyRejectElementContext_PromiseAnyRejectElementContext_PromiseCapability_PromiseCapability_0(state_, TNode<Context>{tmp2}, TNode<IntPtrT>{tmp4}, TNode<PromiseCapability>{p_capability});
    tmp5 = kPromiseAnyRejectElementErrorsSlot_0(state_);
    tmp6 = kEmptyFixedArray_0(state_);
    InitContextSlot_PromiseAnyRejectElementContext_PromiseAnyRejectElementContext_FixedArray_EmptyFixedArray_0(state_, TNode<Context>{tmp2}, TNode<IntPtrT>{tmp5}, TNode<FixedArray>{tmp6});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Context>{tmp2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-any.tq?l=57&c=1
TNode<JSFunction> CreatePromiseAnyRejectElementFunction_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Context> p_rejectElementContext, TNode<Smi> p_index, TNode<NativeContext> p_nativeContext) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Map> tmp3;
  TNode<SharedFunctionInfo> tmp4;
  TNode<JSFunction> tmp5;
  TNode<IntPtrT> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = STRICT_FUNCTION_WITHOUT_PROTOTYPE_MAP_INDEX_0(state_);
    std::tie(tmp1, tmp2) = ContextSlot_NativeContext_NativeContext_Map_0(state_, TNode<NativeContext>{p_nativeContext}, TNode<IntPtrT>{tmp0}).Flatten();
    tmp3 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp1, tmp2});
    tmp4 = CodeStubAssembler(state_).PromiseAnyRejectElementSharedFunConstant();
    tmp5 = CodeStubAssembler(state_).AllocateFunctionWithMapAndContext(TNode<Map>{tmp3}, TNode<SharedFunctionInfo>{tmp4}, TNode<Context>{p_rejectElementContext});
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp5, tmp6}, p_index);
    ca_.Goto(&block14);
  }

    ca_.Bind(&block14);
  return TNode<JSFunction>{tmp5};
}

TF_BUILTIN(PromiseAnyRejectElementClosure, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<JSFunction> parameter2 = UncheckedParameter<JSFunction>(Descriptor::kJSTarget);
USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = IsNativeContext_0(state_, TNode<HeapObject>{parameter0});
    ca_.Branch(tmp0, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<Oddball> tmp1;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp1 = Undefined_0(state_);
    CodeStubAssembler(state_).Return(tmp1);
  }

  TNode<Context> tmp2;
  TNode<NativeContext> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp2 = (TNode<Context>{parameter0});
    tmp3 = CodeStubAssembler(state_).LoadNativeContext(TNode<Context>{tmp2});
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    CodeStubAssembler(state_).StoreReference<Context>(CodeStubAssembler::Reference{parameter2, tmp4}, tmp3);
    compiler::CodeAssemblerLabel label6(&ca_);
    tmp5 = CodeStubAssembler(state_).LoadJSReceiverIdentityHash(TNode<JSReceiver>{parameter2}, &label6);
    ca_.Goto(&block13);
    if (label6.is_used()) {
      ca_.Bind(&label6);
      ca_.Goto(&block14);
    }
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Object> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<FixedArray> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<Object> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<Smi> tmp16;
  TNode<IntPtrT> tmp17;
  TNode<IntPtrT> tmp18;
  TNode<IntPtrT> tmp19;
  TNode<IntPtrT> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<BoolT> tmp22;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp7 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp8 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{tmp5}, TNode<IntPtrT>{tmp7});
    tmp9 = kPromiseAnyRejectElementErrorsSlot_0(state_);
    std::tie(tmp10, tmp11) = ContextSlot_PromiseAnyRejectElementContext_PromiseAnyRejectElementContext_FixedArray_0(state_, TNode<Context>{tmp2}, TNode<IntPtrT>{tmp9}).Flatten();
    tmp12 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{tmp10, tmp11});
    tmp13 = kPromiseAnyRejectElementRemainingSlot_0(state_);
    std::tie(tmp14, tmp15) = ContextSlot_PromiseAnyRejectElementContext_PromiseAnyRejectElementContext_Smi_0(state_, TNode<Context>{tmp2}, TNode<IntPtrT>{tmp13}).Flatten();
    tmp16 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp14, tmp15});
    tmp17 = CodeStubAssembler(state_).SmiUntag(TNode<Smi>{tmp16});
    tmp18 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp19 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp8}, TNode<IntPtrT>{tmp18});
    tmp20 = CodeStubAssembler(state_).IntPtrMax(TNode<IntPtrT>{tmp17}, TNode<IntPtrT>{tmp19});
    tmp21 = CodeStubAssembler(state_).LoadAndUntagFixedArrayBaseLength(TNode<FixedArrayBase>{tmp12});
    tmp22 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp20}, TNode<IntPtrT>{tmp21});
    ca_.Branch(tmp22, &block19, std::vector<compiler::Node*>{}, &block20, std::vector<compiler::Node*>{tmp12});
  }

  TNode<IntPtrT> tmp23;
  TNode<IntPtrT> tmp24;
  TNode<FixedArray> tmp25;
  TNode<IntPtrT> tmp26;
  TNode<Object> tmp27;
  TNode<IntPtrT> tmp28;
  if (block19.is_used()) {
    ca_.Bind(&block19);
    tmp23 = CodeStubAssembler(state_).LoadAndUntagFixedArrayBaseLength(TNode<FixedArrayBase>{tmp12});
    tmp24 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp25 = ExtractFixedArray_0(state_, TNode<FixedArray>{tmp12}, TNode<IntPtrT>{tmp24}, TNode<IntPtrT>{tmp23}, TNode<IntPtrT>{tmp20});
    tmp26 = kPromiseAnyRejectElementErrorsSlot_0(state_);
    std::tie(tmp27, tmp28) = ContextSlot_PromiseAnyRejectElementContext_PromiseAnyRejectElementContext_FixedArray_0(state_, TNode<Context>{tmp2}, TNode<IntPtrT>{tmp26}).Flatten();
    CodeStubAssembler(state_).StoreReference<FixedArray>(CodeStubAssembler::Reference{tmp27, tmp28}, tmp25);
    ca_.Goto(&block20, tmp25);
  }

  TNode<FixedArray> phi_bb20_8;
  TNode<Object> tmp29;
  TNode<IntPtrT> tmp30;
  TNode<IntPtrT> tmp31;
  TNode<UintPtrT> tmp32;
  TNode<UintPtrT> tmp33;
  TNode<BoolT> tmp34;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_8);
    std::tie(tmp29, tmp30, tmp31) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{phi_bb20_8}).Flatten();
    tmp32 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp8});
    tmp33 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp31});
    tmp34 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp32}, TNode<UintPtrT>{tmp33});
    ca_.Branch(tmp34, &block25, std::vector<compiler::Node*>{}, &block26, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp35;
  TNode<IntPtrT> tmp36;
  TNode<Object> tmp37;
  TNode<IntPtrT> tmp38;
  TNode<Smi> tmp39;
  TNode<Smi> tmp40;
  TNode<IntPtrT> tmp41;
  TNode<Object> tmp42;
  TNode<IntPtrT> tmp43;
  TNode<Smi> tmp44;
  TNode<BoolT> tmp45;
  if (block25.is_used()) {
    ca_.Bind(&block25);
    tmp35 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp8});
    tmp36 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp30}, TNode<IntPtrT>{tmp35});
    std::tie(tmp37, tmp38) = NewReference_Object_0(state_, TNode<Object>{tmp29}, TNode<IntPtrT>{tmp36}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp37, tmp38}, parameter3);
    tmp39 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp40 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp16}, TNode<Smi>{tmp39});
    tmp41 = kPromiseAnyRejectElementRemainingSlot_0(state_);
    std::tie(tmp42, tmp43) = ContextSlot_PromiseAnyRejectElementContext_PromiseAnyRejectElementContext_Smi_0(state_, TNode<Context>{tmp2}, TNode<IntPtrT>{tmp41}).Flatten();
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp42, tmp43}, tmp40);
    tmp44 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp45 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp40}, TNode<Smi>{tmp44});
    ca_.Branch(tmp45, &block29, std::vector<compiler::Node*>{}, &block30, std::vector<compiler::Node*>{});
  }

  if (block26.is_used()) {
    ca_.Bind(&block26);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<JSObject> tmp46;
  TNode<IntPtrT> tmp47;
  TNode<Object> tmp48;
  TNode<IntPtrT> tmp49;
  TNode<PromiseCapability> tmp50;
  TNode<IntPtrT> tmp51;
  TNode<Object> tmp52;
  TNode<JSReceiver> tmp53;
  TNode<Oddball> tmp54;
  TNode<Object> tmp55;
  if (block29.is_used()) {
    ca_.Bind(&block29);
    tmp46 = ConstructAggregateError_0(state_, TNode<Context>{tmp2}, TNode<FixedArray>{phi_bb20_8});
    tmp47 = kPromiseAnyRejectElementCapabilitySlot_0(state_);
    std::tie(tmp48, tmp49) = ContextSlot_PromiseAnyRejectElementContext_PromiseAnyRejectElementContext_PromiseCapability_0(state_, TNode<Context>{tmp2}, TNode<IntPtrT>{tmp47}).Flatten();
    tmp50 = CodeStubAssembler(state_).LoadReference<PromiseCapability>(CodeStubAssembler::Reference{tmp48, tmp49});
    tmp51 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp52 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp50, tmp51});
    tmp53 = UnsafeCast_Callable_0(state_, TNode<Context>{tmp2}, TNode<Object>{tmp52});
    tmp54 = Undefined_0(state_);
    tmp55 = CodeStubAssembler(state_).Call(TNode<Context>{tmp2}, TNode<Object>{tmp53}, TNode<Object>{tmp54}, TNode<Object>{tmp46});
    ca_.Goto(&block30);
  }

  TNode<Oddball> tmp56;
  if (block30.is_used()) {
    ca_.Bind(&block30);
    tmp56 = Undefined_0(state_);
    CodeStubAssembler(state_).Return(tmp56);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-any.tq?l=158&c=1
TNode<Object> PerformPromiseAny_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<NativeContext> p_nativeContext, TorqueStructIteratorRecord p_iteratorRecord, TNode<JSReceiver> p_constructor, TNode<PromiseCapability> p_resultCapability, TNode<Object> p_promiseResolveFunction, compiler::CodeAssemblerLabel* label_Reject, compiler::TypedCodeAssemblerVariable<Object>* label_Reject_parameter_0) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block11(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block18(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block19(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, HeapObject> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block22(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block23(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block24(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block25(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block26(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block27(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block28(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block29(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block30(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block31(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block32(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block33(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block34(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block35(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block36(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block37(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block40(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block44(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block45(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block38(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block46(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block47(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block48(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block49(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Context> tmp0;
  TNode<Smi> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<IntPtrT> tmp4;
      TNode<Object> tmp6;
  TNode<Map> tmp7;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CreatePromiseAnyRejectElementContext_0(state_, TNode<Context>{p_context}, TNode<PromiseCapability>{p_resultCapability}, TNode<NativeContext>{p_nativeContext});
    tmp1 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp2 = ITERATOR_RESULT_MAP_INDEX_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch5__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch5__label);
    std::tie(tmp3, tmp4) = NativeContextSlot_Map_0(state_, TNode<NativeContext>{p_nativeContext}, TNode<IntPtrT>{tmp2}).Flatten();
    }
    if (catch5__label.is_used()) {
      compiler::CodeAssemblerLabel catch5_skip(&ca_);
      ca_.Goto(&catch5_skip);
      ca_.Bind(&catch5__label, &tmp6);
      ca_.Goto(&block7);
      ca_.Bind(&catch5_skip);
    }
    tmp7 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp3, tmp4});
    ca_.Goto(&block10, tmp1);
  }

  TNode<HeapObject> tmp8;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp8 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, tmp1, tmp6, tmp8);
  }

  TNode<Smi> phi_bb10_8;
  TNode<BoolT> tmp9;
      TNode<Object> tmp11;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_8);
    compiler::CodeAssemblerExceptionHandlerLabel catch10__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch10__label);
    tmp9 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    }
    if (catch10__label.is_used()) {
      compiler::CodeAssemblerLabel catch10_skip(&ca_);
      ca_.Goto(&catch10_skip);
      ca_.Bind(&catch10__label, &tmp11);
      ca_.Goto(&block11, phi_bb10_8);
      ca_.Bind(&catch10_skip);
    }
    ca_.Branch(tmp9, &block8, std::vector<compiler::Node*>{phi_bb10_8}, &block9, std::vector<compiler::Node*>{phi_bb10_8});
  }

  TNode<Smi> phi_bb11_8;
  TNode<HeapObject> tmp12;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_8);
    tmp12 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, phi_bb11_8, tmp11, tmp12);
  }

  TNode<Smi> phi_bb8_8;
  TNode<JSReceiver> tmp13;
      TNode<Object> tmp16;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_8);
    compiler::CodeAssemblerLabel label14(&ca_);
    compiler::CodeAssemblerExceptionHandlerLabel catch15__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch15__label);
    tmp13 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{p_context}, TorqueStructIteratorRecord{TNode<JSReceiver>{p_iteratorRecord.object}, TNode<Object>{p_iteratorRecord.next}}, TNode<Map>{tmp7}, &label14);
    }
    if (catch15__label.is_used()) {
      compiler::CodeAssemblerLabel catch15_skip(&ca_);
      ca_.Goto(&catch15_skip);
      ca_.Bind(&catch15__label, &tmp16);
      ca_.Goto(&block18, phi_bb8_8);
      ca_.Bind(&catch15_skip);
    }
    ca_.Goto(&block16, phi_bb8_8);
    if (label14.is_used()) {
      ca_.Bind(&label14);
      ca_.Goto(&block17, phi_bb8_8);
    }
  }

  TNode<Smi> phi_bb18_8;
  TNode<HeapObject> tmp17;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_8);
    tmp17 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block13, phi_bb18_8, tmp16, tmp17);
  }

  TNode<Smi> phi_bb17_8;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_8);
    ca_.Goto(&block3, phi_bb17_8);
  }

  TNode<Smi> phi_bb16_8;
  TNode<Object> tmp18;
      TNode<Object> tmp20;
  TNode<Smi> tmp21;
      TNode<Object> tmp23;
  TNode<BoolT> tmp24;
      TNode<Object> tmp26;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_8);
    compiler::CodeAssemblerExceptionHandlerLabel catch19__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch19__label);
    tmp18 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{p_context}, TNode<JSReceiver>{tmp13}, TNode<Map>{tmp7});
    }
    if (catch19__label.is_used()) {
      compiler::CodeAssemblerLabel catch19_skip(&ca_);
      ca_.Goto(&catch19_skip);
      ca_.Bind(&catch19__label, &tmp20);
      ca_.Goto(&block19, phi_bb16_8);
      ca_.Bind(&catch19_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch22__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch22__label);
    tmp21 = FromConstexpr_Smi_constexpr_int31_0(state_, PropertyArray::HashField::kMax);
    }
    if (catch22__label.is_used()) {
      compiler::CodeAssemblerLabel catch22_skip(&ca_);
      ca_.Goto(&catch22_skip);
      ca_.Bind(&catch22__label, &tmp23);
      ca_.Goto(&block22, phi_bb16_8, phi_bb16_8, phi_bb16_8);
      ca_.Bind(&catch22_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch25__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch25__label);
    tmp24 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{phi_bb16_8}, TNode<Smi>{tmp21});
    }
    if (catch25__label.is_used()) {
      compiler::CodeAssemblerLabel catch25_skip(&ca_);
      ca_.Goto(&catch25_skip);
      ca_.Bind(&catch25__label, &tmp26);
      ca_.Goto(&block23, phi_bb16_8, phi_bb16_8);
      ca_.Bind(&catch25_skip);
    }
    ca_.Branch(tmp24, &block20, std::vector<compiler::Node*>{phi_bb16_8}, &block21, std::vector<compiler::Node*>{phi_bb16_8});
  }

  TNode<Smi> phi_bb19_8;
  TNode<HeapObject> tmp27;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_8);
    tmp27 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block13, phi_bb19_8, tmp20, tmp27);
  }

  TNode<Smi> phi_bb13_8;
  TNode<Object> phi_bb13_11;
  TNode<HeapObject> phi_bb13_12;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_8, &phi_bb13_11, &phi_bb13_12);
    ca_.Goto(&block1, phi_bb13_11);
  }

  TNode<Smi> phi_bb22_8;
  TNode<Smi> phi_bb22_11;
  TNode<Smi> phi_bb22_12;
  TNode<HeapObject> tmp28;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_8, &phi_bb22_11, &phi_bb22_12);
    tmp28 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, phi_bb22_8, tmp23, tmp28);
  }

  TNode<Smi> phi_bb23_8;
  TNode<Smi> phi_bb23_11;
  TNode<HeapObject> tmp29;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_8, &phi_bb23_11);
    tmp29 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, phi_bb23_8, tmp26, tmp29);
  }

  TNode<Smi> phi_bb20_8;
  TNode<Object> tmp30;
      TNode<Object> tmp32;
      TNode<Object> tmp34;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_8);
    compiler::CodeAssemblerExceptionHandlerLabel catch31__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch31__label);
    tmp30 = FromConstexpr_Object_constexpr_string_0(state_, "any");
    }
    if (catch31__label.is_used()) {
      compiler::CodeAssemblerLabel catch31_skip(&ca_);
      ca_.Goto(&catch31_skip);
      ca_.Bind(&catch31__label, &tmp32);
      ca_.Goto(&block24, phi_bb20_8);
      ca_.Bind(&catch31_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch33__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch33__label);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{p_context}, MessageTemplate::kTooManyElementsInPromiseCombinator, TNode<Object>{tmp30});
    }
    if (catch33__label.is_used()) {
      compiler::CodeAssemblerLabel catch33_skip(&ca_);
      ca_.Bind(&catch33__label, &tmp34);
      ca_.Goto(&block25, phi_bb20_8);
    }
  }

  TNode<Smi> phi_bb24_8;
  TNode<HeapObject> tmp35;
  if (block24.is_used()) {
    ca_.Bind(&block24, &phi_bb24_8);
    tmp35 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, phi_bb24_8, tmp32, tmp35);
  }

  TNode<Smi> phi_bb25_8;
  TNode<HeapObject> tmp36;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_8);
    tmp36 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, phi_bb25_8, tmp34, tmp36);
  }

  TNode<Smi> phi_bb21_8;
  TNode<Object> tmp37;
      TNode<Object> tmp39;
  TNode<JSFunction> tmp40;
      TNode<Object> tmp42;
  TNode<IntPtrT> tmp43;
  TNode<Object> tmp44;
  TNode<IntPtrT> tmp45;
      TNode<Object> tmp47;
  TNode<Smi> tmp48;
  TNode<IntPtrT> tmp49;
  TNode<Object> tmp50;
  TNode<IntPtrT> tmp51;
      TNode<Object> tmp53;
  TNode<Smi> tmp54;
      TNode<Object> tmp56;
  TNode<Smi> tmp57;
      TNode<Object> tmp59;
  TNode<String> tmp60;
  TNode<Object> tmp61;
      TNode<Object> tmp63;
  TNode<IntPtrT> tmp64;
      TNode<Object> tmp66;
  TNode<Object> tmp67;
  TNode<Object> tmp68;
      TNode<Object> tmp70;
  TNode<Object> tmp71;
      TNode<Object> tmp73;
  TNode<Smi> tmp74;
      TNode<Object> tmp76;
  TNode<Smi> tmp77;
      TNode<Object> tmp79;
  TNode<BoolT> tmp80;
      TNode<Object> tmp82;
  if (block21.is_used()) {
    ca_.Bind(&block21, &phi_bb21_8);
    compiler::CodeAssemblerExceptionHandlerLabel catch38__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch38__label);
    tmp37 = CallResolve_0(state_, TNode<Context>{p_context}, TNode<JSReceiver>{p_constructor}, TNode<Object>{p_promiseResolveFunction}, TNode<Object>{tmp18});
    }
    if (catch38__label.is_used()) {
      compiler::CodeAssemblerLabel catch38_skip(&ca_);
      ca_.Goto(&catch38_skip);
      ca_.Bind(&catch38__label, &tmp39);
      ca_.Goto(&block26, phi_bb21_8);
      ca_.Bind(&catch38_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch41__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch41__label);
    tmp40 = CreatePromiseAnyRejectElementFunction_0(state_, TNode<Context>{p_context}, TNode<Context>{tmp0}, TNode<Smi>{phi_bb21_8}, TNode<NativeContext>{p_nativeContext});
    }
    if (catch41__label.is_used()) {
      compiler::CodeAssemblerLabel catch41_skip(&ca_);
      ca_.Goto(&catch41_skip);
      ca_.Bind(&catch41__label, &tmp42);
      ca_.Goto(&block27, phi_bb21_8, phi_bb21_8);
      ca_.Bind(&catch41_skip);
    }
    tmp43 = kPromiseAnyRejectElementRemainingSlot_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch46__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch46__label);
    std::tie(tmp44, tmp45) = ContextSlot_PromiseAnyRejectElementContext_PromiseAnyRejectElementContext_Smi_0(state_, TNode<Context>{tmp0}, TNode<IntPtrT>{tmp43}).Flatten();
    }
    if (catch46__label.is_used()) {
      compiler::CodeAssemblerLabel catch46_skip(&ca_);
      ca_.Goto(&catch46_skip);
      ca_.Bind(&catch46__label, &tmp47);
      ca_.Goto(&block28, phi_bb21_8);
      ca_.Bind(&catch46_skip);
    }
    tmp48 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp44, tmp45});
    tmp49 = kPromiseAnyRejectElementRemainingSlot_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch52__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch52__label);
    std::tie(tmp50, tmp51) = ContextSlot_PromiseAnyRejectElementContext_PromiseAnyRejectElementContext_Smi_0(state_, TNode<Context>{tmp0}, TNode<IntPtrT>{tmp49}).Flatten();
    }
    if (catch52__label.is_used()) {
      compiler::CodeAssemblerLabel catch52_skip(&ca_);
      ca_.Goto(&catch52_skip);
      ca_.Bind(&catch52__label, &tmp53);
      ca_.Goto(&block29, phi_bb21_8);
      ca_.Bind(&catch52_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch55__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch55__label);
    tmp54 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    }
    if (catch55__label.is_used()) {
      compiler::CodeAssemblerLabel catch55_skip(&ca_);
      ca_.Goto(&catch55_skip);
      ca_.Bind(&catch55__label, &tmp56);
      ca_.Goto(&block30, phi_bb21_8);
      ca_.Bind(&catch55_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch58__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch58__label);
    tmp57 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp48}, TNode<Smi>{tmp54});
    }
    if (catch58__label.is_used()) {
      compiler::CodeAssemblerLabel catch58_skip(&ca_);
      ca_.Goto(&catch58_skip);
      ca_.Bind(&catch58__label, &tmp59);
      ca_.Goto(&block31, phi_bb21_8);
      ca_.Bind(&catch58_skip);
    }
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp50, tmp51}, tmp57);
    tmp60 = kThenString_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch62__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch62__label);
    tmp61 = CodeStubAssembler(state_).GetProperty(TNode<Context>{p_context}, TNode<Object>{tmp37}, TNode<Object>{tmp60});
    }
    if (catch62__label.is_used()) {
      compiler::CodeAssemblerLabel catch62_skip(&ca_);
      ca_.Goto(&catch62_skip);
      ca_.Bind(&catch62__label, &tmp63);
      ca_.Goto(&block32, phi_bb21_8);
      ca_.Bind(&catch62_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch65__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch65__label);
    tmp64 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    }
    if (catch65__label.is_used()) {
      compiler::CodeAssemblerLabel catch65_skip(&ca_);
      ca_.Goto(&catch65_skip);
      ca_.Bind(&catch65__label, &tmp66);
      ca_.Goto(&block33, phi_bb21_8);
      ca_.Bind(&catch65_skip);
    }
    tmp67 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{p_resultCapability, tmp64});
    compiler::CodeAssemblerExceptionHandlerLabel catch69__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch69__label);
    tmp68 = UnsafeCast_JSAny_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp67});
    }
    if (catch69__label.is_used()) {
      compiler::CodeAssemblerLabel catch69_skip(&ca_);
      ca_.Goto(&catch69_skip);
      ca_.Bind(&catch69__label, &tmp70);
      ca_.Goto(&block34, phi_bb21_8);
      ca_.Bind(&catch69_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch72__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch72__label);
    tmp71 = CodeStubAssembler(state_).Call(TNode<Context>{p_context}, TNode<Object>{tmp61}, TNode<Object>{tmp37}, TNode<Object>{tmp68}, TNode<Object>{tmp40});
    }
    if (catch72__label.is_used()) {
      compiler::CodeAssemblerLabel catch72_skip(&ca_);
      ca_.Goto(&catch72_skip);
      ca_.Bind(&catch72__label, &tmp73);
      ca_.Goto(&block35, phi_bb21_8);
      ca_.Bind(&catch72_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch75__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch75__label);
    tmp74 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    }
    if (catch75__label.is_used()) {
      compiler::CodeAssemblerLabel catch75_skip(&ca_);
      ca_.Goto(&catch75_skip);
      ca_.Bind(&catch75__label, &tmp76);
      ca_.Goto(&block36, phi_bb21_8, phi_bb21_8, phi_bb21_8);
      ca_.Bind(&catch75_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch78__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch78__label);
    tmp77 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb21_8}, TNode<Smi>{tmp74});
    }
    if (catch78__label.is_used()) {
      compiler::CodeAssemblerLabel catch78_skip(&ca_);
      ca_.Goto(&catch78_skip);
      ca_.Bind(&catch78__label, &tmp79);
      ca_.Goto(&block37, phi_bb21_8, phi_bb21_8);
      ca_.Bind(&catch78_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch81__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch81__label);
    tmp80 = CodeStubAssembler(state_).IsDebugActive();
    }
    if (catch81__label.is_used()) {
      compiler::CodeAssemblerLabel catch81_skip(&ca_);
      ca_.Goto(&catch81_skip);
      ca_.Bind(&catch81__label, &tmp82);
      ca_.Goto(&block40);
      ca_.Bind(&catch81_skip);
    }
    ca_.Branch(tmp80, &block41, std::vector<compiler::Node*>{}, &block42, std::vector<compiler::Node*>{});
  }

  TNode<Smi> phi_bb26_8;
  TNode<HeapObject> tmp83;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_8);
    tmp83 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, phi_bb26_8, tmp39, tmp83);
  }

  TNode<Smi> phi_bb27_8;
  TNode<Smi> phi_bb27_13;
  TNode<HeapObject> tmp84;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_8, &phi_bb27_13);
    tmp84 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, phi_bb27_8, tmp42, tmp84);
  }

  TNode<Smi> phi_bb28_8;
  TNode<HeapObject> tmp85;
  if (block28.is_used()) {
    ca_.Bind(&block28, &phi_bb28_8);
    tmp85 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, phi_bb28_8, tmp47, tmp85);
  }

  TNode<Smi> phi_bb29_8;
  TNode<HeapObject> tmp86;
  if (block29.is_used()) {
    ca_.Bind(&block29, &phi_bb29_8);
    tmp86 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, phi_bb29_8, tmp53, tmp86);
  }

  TNode<Smi> phi_bb30_8;
  TNode<HeapObject> tmp87;
  if (block30.is_used()) {
    ca_.Bind(&block30, &phi_bb30_8);
    tmp87 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, phi_bb30_8, tmp56, tmp87);
  }

  TNode<Smi> phi_bb31_8;
  TNode<HeapObject> tmp88;
  if (block31.is_used()) {
    ca_.Bind(&block31, &phi_bb31_8);
    tmp88 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, phi_bb31_8, tmp59, tmp88);
  }

  TNode<Smi> phi_bb32_8;
  TNode<HeapObject> tmp89;
  if (block32.is_used()) {
    ca_.Bind(&block32, &phi_bb32_8);
    tmp89 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, phi_bb32_8, tmp63, tmp89);
  }

  TNode<Smi> phi_bb33_8;
  TNode<HeapObject> tmp90;
  if (block33.is_used()) {
    ca_.Bind(&block33, &phi_bb33_8);
    tmp90 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, phi_bb33_8, tmp66, tmp90);
  }

  TNode<Smi> phi_bb34_8;
  TNode<HeapObject> tmp91;
  if (block34.is_used()) {
    ca_.Bind(&block34, &phi_bb34_8);
    tmp91 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, phi_bb34_8, tmp70, tmp91);
  }

  TNode<Smi> phi_bb35_8;
  TNode<HeapObject> tmp92;
  if (block35.is_used()) {
    ca_.Bind(&block35, &phi_bb35_8);
    tmp92 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, phi_bb35_8, tmp73, tmp92);
  }

  TNode<Smi> phi_bb36_8;
  TNode<Smi> phi_bb36_16;
  TNode<Smi> phi_bb36_17;
  TNode<HeapObject> tmp93;
  if (block36.is_used()) {
    ca_.Bind(&block36, &phi_bb36_8, &phi_bb36_16, &phi_bb36_17);
    tmp93 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, phi_bb36_8, tmp76, tmp93);
  }

  TNode<Smi> phi_bb37_8;
  TNode<Smi> phi_bb37_16;
  TNode<HeapObject> tmp94;
  if (block37.is_used()) {
    ca_.Bind(&block37, &phi_bb37_8, &phi_bb37_16);
    tmp94 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, phi_bb37_8, tmp79, tmp94);
  }

  TNode<HeapObject> tmp95;
  if (block40.is_used()) {
    ca_.Bind(&block40);
    tmp95 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, tmp77, tmp82, tmp95);
  }

  TNode<BoolT> tmp96;
      TNode<Object> tmp98;
  if (block41.is_used()) {
    ca_.Bind(&block41);
    compiler::CodeAssemblerExceptionHandlerLabel catch97__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch97__label);
    tmp96 = Is_JSPromise_JSAny_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp71});
    }
    if (catch97__label.is_used()) {
      compiler::CodeAssemblerLabel catch97_skip(&ca_);
      ca_.Goto(&catch97_skip);
      ca_.Bind(&catch97__label, &tmp98);
      ca_.Goto(&block44);
      ca_.Bind(&catch97_skip);
    }
    ca_.Goto(&block43, tmp96);
  }

  TNode<HeapObject> tmp99;
  if (block44.is_used()) {
    ca_.Bind(&block44);
    tmp99 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, tmp77, tmp98, tmp99);
  }

  TNode<BoolT> tmp100;
      TNode<Object> tmp102;
  if (block42.is_used()) {
    ca_.Bind(&block42);
    compiler::CodeAssemblerExceptionHandlerLabel catch101__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch101__label);
    tmp100 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    }
    if (catch101__label.is_used()) {
      compiler::CodeAssemblerLabel catch101_skip(&ca_);
      ca_.Goto(&catch101_skip);
      ca_.Bind(&catch101__label, &tmp102);
      ca_.Goto(&block45);
      ca_.Bind(&catch101_skip);
    }
    ca_.Goto(&block43, tmp100);
  }

  TNode<HeapObject> tmp103;
  if (block45.is_used()) {
    ca_.Bind(&block45);
    tmp103 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, tmp77, tmp102, tmp103);
  }

  TNode<BoolT> phi_bb43_17;
  if (block43.is_used()) {
    ca_.Bind(&block43, &phi_bb43_17);
    ca_.Branch(phi_bb43_17, &block38, std::vector<compiler::Node*>{}, &block39, std::vector<compiler::Node*>{});
  }

  TNode<Symbol> tmp104;
  TNode<IntPtrT> tmp105;
      TNode<Object> tmp107;
  TNode<HeapObject> tmp108;
  TNode<Object> tmp109;
      TNode<Object> tmp111;
  TNode<Symbol> tmp112;
  TNode<Oddball> tmp113;
  TNode<Object> tmp114;
      TNode<Object> tmp116;
  if (block38.is_used()) {
    ca_.Bind(&block38);
    tmp104 = kPromiseHandledBySymbol_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch106__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch106__label);
    tmp105 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    }
    if (catch106__label.is_used()) {
      compiler::CodeAssemblerLabel catch106_skip(&ca_);
      ca_.Goto(&catch106_skip);
      ca_.Bind(&catch106__label, &tmp107);
      ca_.Goto(&block46);
      ca_.Bind(&catch106_skip);
    }
    tmp108 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{p_resultCapability, tmp105});
    compiler::CodeAssemblerExceptionHandlerLabel catch110__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch110__label);
    tmp109 = CodeStubAssembler(state_).SetPropertyStrict(TNode<Context>{p_context}, TNode<Object>{tmp71}, TNode<Object>{tmp104}, TNode<Object>{tmp108});
    }
    if (catch110__label.is_used()) {
      compiler::CodeAssemblerLabel catch110_skip(&ca_);
      ca_.Goto(&catch110_skip);
      ca_.Bind(&catch110__label, &tmp111);
      ca_.Goto(&block47);
      ca_.Bind(&catch110_skip);
    }
    tmp112 = kPromiseForwardingHandlerSymbol_0(state_);
    tmp113 = True_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch115__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch115__label);
    tmp114 = CodeStubAssembler(state_).SetPropertyStrict(TNode<Context>{p_context}, TNode<Object>{tmp40}, TNode<Object>{tmp112}, TNode<Object>{tmp113});
    }
    if (catch115__label.is_used()) {
      compiler::CodeAssemblerLabel catch115_skip(&ca_);
      ca_.Goto(&catch115_skip);
      ca_.Bind(&catch115__label, &tmp116);
      ca_.Goto(&block48);
      ca_.Bind(&catch115_skip);
    }
    ca_.Goto(&block39);
  }

  TNode<HeapObject> tmp117;
  if (block46.is_used()) {
    ca_.Bind(&block46);
    tmp117 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, tmp77, tmp107, tmp117);
  }

  TNode<HeapObject> tmp118;
  if (block47.is_used()) {
    ca_.Bind(&block47);
    tmp118 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, tmp77, tmp111, tmp118);
  }

  TNode<HeapObject> tmp119;
  if (block48.is_used()) {
    ca_.Bind(&block48);
    tmp119 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, tmp77, tmp116, tmp119);
  }

  if (block39.is_used()) {
    ca_.Bind(&block39);
    ca_.Goto(&block10, tmp77);
  }

  TNode<Smi> phi_bb9_8;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_8);
    ca_.Goto(&block3, phi_bb9_8);
  }

  TNode<Smi> phi_bb6_8;
  TNode<Object> phi_bb6_9;
  TNode<HeapObject> phi_bb6_10;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_8, &phi_bb6_9, &phi_bb6_10);
    IteratorCloseOnException_0(state_, TNode<Context>{p_context}, TorqueStructIteratorRecord{TNode<JSReceiver>{p_iteratorRecord.object}, TNode<Object>{p_iteratorRecord.next}});
    ca_.Goto(&block1, phi_bb6_9);
  }

  TNode<Smi> phi_bb3_8;
  TNode<IntPtrT> tmp120;
  TNode<Object> tmp121;
  TNode<IntPtrT> tmp122;
  TNode<Smi> tmp123;
  TNode<Smi> tmp124;
  TNode<Smi> tmp125;
  TNode<Smi> tmp126;
  TNode<BoolT> tmp127;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_8);
    tmp120 = kPromiseAnyRejectElementRemainingSlot_0(state_);
    std::tie(tmp121, tmp122) = ContextSlot_PromiseAnyRejectElementContext_PromiseAnyRejectElementContext_Smi_0(state_, TNode<Context>{tmp0}, TNode<IntPtrT>{tmp120}).Flatten();
    tmp123 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp121, tmp122});
    tmp124 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp125 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp123}, TNode<Smi>{tmp124});
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp121, tmp122}, tmp125);
    tmp126 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp127 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp125}, TNode<Smi>{tmp126});
    ca_.Branch(tmp127, &block49, std::vector<compiler::Node*>{phi_bb3_8}, &block50, std::vector<compiler::Node*>{phi_bb3_8});
  }

  TNode<Smi> phi_bb49_8;
  TNode<IntPtrT> tmp128;
  TNode<Object> tmp129;
  TNode<IntPtrT> tmp130;
  TNode<FixedArray> tmp131;
  TNode<JSObject> tmp132;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_8);
    tmp128 = kPromiseAnyRejectElementErrorsSlot_0(state_);
    std::tie(tmp129, tmp130) = ContextSlot_PromiseAnyRejectElementContext_PromiseAnyRejectElementContext_FixedArray_0(state_, TNode<Context>{tmp0}, TNode<IntPtrT>{tmp128}).Flatten();
    tmp131 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{tmp129, tmp130});
    tmp132 = ConstructAggregateError_0(state_, TNode<Context>{p_context}, TNode<FixedArray>{tmp131});
    ca_.Goto(&block1, tmp132);
  }

  TNode<Smi> phi_bb50_8;
  TNode<IntPtrT> tmp133;
  TNode<HeapObject> tmp134;
  if (block50.is_used()) {
    ca_.Bind(&block50, &phi_bb50_8);
    tmp133 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp134 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{p_resultCapability, tmp133});
    ca_.Goto(&block51);
  }

  TNode<Object> phi_bb1_0;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_0);
    *label_Reject_parameter_0 = phi_bb1_0;
    ca_.Goto(label_Reject);
  }

    ca_.Bind(&block51);
  return TNode<Object>{tmp134};
}

TF_BUILTIN(PromiseAny, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kIterable);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, HeapObject> block12(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block10(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<NativeContext> tmp0;
  TNode<JSReceiver> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadNativeContext(TNode<Context>{parameter0});
    compiler::CodeAssemblerLabel label2(&ca_);
    tmp1 = Cast_JSReceiver_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label2);
    ca_.Goto(&block3);
    if (label2.is_used()) {
      ca_.Bind(&label2);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kCalledOnNonObject, "Promise.any");
  }

  TNode<Oddball> tmp3;
  TNode<PromiseCapability> tmp4;
  TNode<JSReceiver> tmp5;
  TNode<Object> tmp6;
      TNode<Object> tmp8;
  TNode<JSReceiver> tmp9;
  TNode<Object> tmp10;
      TNode<Object> tmp12;
  TNode<Object> tmp13;
    compiler::TypedCodeAssemblerVariable<Object> tmp15(&ca_);
      TNode<Object> tmp17;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp3 = False_0(state_);
    tmp4 = ca_.CallStub<PromiseCapability>(Builtins::CallableFor(ca_.isolate(), Builtin::kNewPromiseCapability), parameter0, tmp1, tmp3);
    tmp5 = UnsafeCast_Constructor_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp1});
    compiler::CodeAssemblerExceptionHandlerLabel catch7__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch7__label);
    tmp6 = GetPromiseResolve_0(state_, TNode<Context>{parameter0}, TNode<NativeContext>{tmp0}, TNode<JSReceiver>{tmp5});
    }
    if (catch7__label.is_used()) {
      compiler::CodeAssemblerLabel catch7_skip(&ca_);
      ca_.Goto(&catch7_skip);
      ca_.Bind(&catch7__label, &tmp8);
      ca_.Goto(&block13);
      ca_.Bind(&catch7_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch11__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch11__label);
    std::tie(tmp9, tmp10) = IteratorBuiltinsAssembler(state_).GetIterator(TNode<Context>{parameter0}, TNode<Object>{parameter2}).Flatten();
    }
    if (catch11__label.is_used()) {
      compiler::CodeAssemblerLabel catch11_skip(&ca_);
      ca_.Goto(&catch11_skip);
      ca_.Bind(&catch11__label, &tmp12);
      ca_.Goto(&block14);
      ca_.Bind(&catch11_skip);
    }
    compiler::CodeAssemblerLabel label14(&ca_);
    compiler::CodeAssemblerExceptionHandlerLabel catch16__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch16__label);
    tmp13 = PerformPromiseAny_0(state_, TNode<Context>{parameter0}, TNode<NativeContext>{tmp0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp9}, TNode<Object>{tmp10}}, TNode<JSReceiver>{tmp5}, TNode<PromiseCapability>{tmp4}, TNode<Object>{tmp6}, &label14, &tmp15);
    }
    if (catch16__label.is_used()) {
      compiler::CodeAssemblerLabel catch16_skip(&ca_);
      ca_.Goto(&catch16_skip);
      ca_.Bind(&catch16__label, &tmp17);
      ca_.Goto(&block17);
      ca_.Bind(&catch16_skip);
    }
    ca_.Goto(&block15);
    if (label14.is_used()) {
      ca_.Bind(&label14);
      ca_.Goto(&block16);
    }
  }

  TNode<HeapObject> tmp18;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp18 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block12, tmp8, tmp18);
  }

  TNode<HeapObject> tmp19;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp19 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block12, tmp12, tmp19);
  }

  TNode<HeapObject> tmp20;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    tmp20 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block12, tmp17, tmp20);
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    ca_.Goto(&block10, tmp15.value());
  }

  if (block15.is_used()) {
    ca_.Bind(&block15);
    CodeStubAssembler(state_).Return(tmp13);
  }

  TNode<Object> phi_bb12_7;
  TNode<HeapObject> phi_bb12_8;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_7, &phi_bb12_8);
    ca_.Goto(&block10, phi_bb12_7);
  }

  TNode<Object> phi_bb10_7;
  TNode<IntPtrT> tmp21;
  TNode<Object> tmp22;
  TNode<JSReceiver> tmp23;
  TNode<Oddball> tmp24;
  TNode<Object> tmp25;
  TNode<Object> tmp26;
  TNode<IntPtrT> tmp27;
  TNode<HeapObject> tmp28;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_7);
    tmp21 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp22 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp4, tmp21});
    tmp23 = UnsafeCast_Callable_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp22});
    tmp24 = Undefined_0(state_);
    tmp25 = UnsafeCast_JSAny_0(state_, TNode<Context>{parameter0}, TNode<Object>{phi_bb10_7});
    tmp26 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<Object>{tmp23}, TNode<Object>{tmp24}, TNode<Object>{tmp25});
    tmp27 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp28 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp4, tmp27});
    CodeStubAssembler(state_).Return(tmp28);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-any.tq?l=376&c=1
TNode<JSObject> ConstructAggregateError_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArray> p_errors) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<JSObject> tmp1;
  TNode<JSArray> tmp2;
  TNode<String> tmp3;
  TNode<Smi> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kAllPromisesRejected);
    tmp1 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kConstructInternalAggregateErrorHelper, p_context, tmp0)); 
    tmp2 = CreateJSArrayWithElements_0(state_, TNode<Context>{p_context}, TNode<FixedArray>{p_errors});
    tmp3 = CodeStubAssembler(state_).ErrorsStringConstant();
    tmp4 = CodeStubAssembler(state_).SmiConstant(PropertyAttributes::DONT_ENUM);
    CodeStubAssembler(state_).CallRuntime(Runtime::kSetOwnPropertyIgnoreAttributes, p_context, tmp1, tmp3, tmp2, tmp4);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<JSObject>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-any.tq?l=40&c=3
void InitContextSlot_PromiseAnyRejectElementContext_PromiseAnyRejectElementContext_Smi_constexpr_IntegerLiteral_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index, IntegerLiteral p_value) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<UintPtrT> tmp5;
  TNode<BoolT> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, p_value);
    std::tie(tmp1, tmp2, tmp3) = FieldSliceContextElements_0(state_, TNode<Context>{p_context}).Flatten();
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_index});
    tmp5 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp3});
    tmp6 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp4}, TNode<UintPtrT>{tmp5});
    ca_.Branch(tmp6, &block18, std::vector<compiler::Node*>{}, &block19, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<Object> tmp9;
  TNode<IntPtrT> tmp10;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp7 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp8 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp7});
    std::tie(tmp9, tmp10) = NewReference_Object_0(state_, TNode<Object>{tmp1}, TNode<IntPtrT>{tmp8}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp9, tmp10}, tmp0);
    ca_.Goto(&block22);
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block22);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-any.tq?l=45&c=3
void InitContextSlot_PromiseAnyRejectElementContext_PromiseAnyRejectElementContext_PromiseCapability_PromiseCapability_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index, TNode<PromiseCapability> p_value) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<UintPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceContextElements_0(state_, TNode<Context>{p_context}).Flatten();
    tmp3 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_index});
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block18, std::vector<compiler::Node*>{}, &block19, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp6 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_Object_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp8, tmp9}, p_value);
    ca_.Goto(&block22);
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block22);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-any.tq?l=50&c=3
void InitContextSlot_PromiseAnyRejectElementContext_PromiseAnyRejectElementContext_FixedArray_EmptyFixedArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index, TNode<FixedArray> p_value) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<UintPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceContextElements_0(state_, TNode<Context>{p_context}).Flatten();
    tmp3 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_index});
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block18, std::vector<compiler::Node*>{}, &block19, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp6 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_Object_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp8, tmp9}, p_value);
    ca_.Goto(&block22);
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block22);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-any.tq?l=109&c=17
TorqueStructReference_FixedArray_0 ContextSlot_PromiseAnyRejectElementContext_PromiseAnyRejectElementContext_FixedArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index) {
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
  TNode<UintPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceContextElements_0(state_, TNode<Context>{p_context}).Flatten();
    tmp3 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_index});
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Object> tmp10;
  TNode<IntPtrT> tmp11;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp6 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_Object_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    std::tie(tmp10, tmp11) = ReferenceCast_FixedArray_Object_0(state_, TorqueStructReference_Object_0{TNode<Object>{tmp8}, TNode<IntPtrT>{tmp9}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
  return TorqueStructReference_FixedArray_0{TNode<Object>{tmp10}, TNode<IntPtrT>{tmp11}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-any.tq?l=116&c=33
TorqueStructReference_Smi_0 ContextSlot_PromiseAnyRejectElementContext_PromiseAnyRejectElementContext_Smi_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index) {
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
  TNode<UintPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceContextElements_0(state_, TNode<Context>{p_context}).Flatten();
    tmp3 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_index});
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Object> tmp10;
  TNode<IntPtrT> tmp11;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp6 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_Object_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    std::tie(tmp10, tmp11) = ReferenceCast_Smi_Object_0(state_, TorqueStructReference_Object_0{TNode<Object>{tmp8}, TNode<IntPtrT>{tmp9}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
  return TorqueStructReference_Smi_0{TNode<Object>{tmp10}, TNode<IntPtrT>{tmp11}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-any.tq?l=147&c=25
TorqueStructReference_PromiseCapability_0 ContextSlot_PromiseAnyRejectElementContext_PromiseAnyRejectElementContext_PromiseCapability_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index) {
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
  TNode<UintPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceContextElements_0(state_, TNode<Context>{p_context}).Flatten();
    tmp3 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_index});
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Object> tmp10;
  TNode<IntPtrT> tmp11;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp6 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_Object_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    std::tie(tmp10, tmp11) = ReferenceCast_PromiseCapability_Object_0(state_, TorqueStructReference_Object_0{TNode<Object>{tmp8}, TNode<IntPtrT>{tmp9}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
  return TorqueStructReference_PromiseCapability_0{TNode<Object>{tmp10}, TNode<IntPtrT>{tmp11}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-any.tq?l=275&c=30
TNode<BoolT> Is_JSPromise_JSAny_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSPromise> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSPromise_1(state_, TNode<Context>{p_context}, TNode<Object>{p_o}, &label1);
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

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-any.tq?l=331&c=10
TNode<BoolT> Is_Constructor_JSReceiver_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_o) {
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
    tmp0 = Cast_Constructor_0(state_, TNode<HeapObject>{p_o}, &label1);
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
