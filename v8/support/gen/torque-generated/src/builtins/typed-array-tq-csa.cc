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
#include "torque-generated/src/builtins/typed-array-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=99&c=1
TNode<Smi> kStoreSucceded_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  TNode<Smi> tmp0;
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
  return TNode<Smi>{tmp0};}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=100&c=1
TNode<Smi> kStoreFailureArrayDetached_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  TNode<Smi> tmp0;
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
  return TNode<Smi>{tmp0};}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=140&c=1
TorqueStructTypedArrayAccessor_0 GetTypedArrayAccessor_0(compiler::CodeAssemblerState* state_, TNode<Int32T> p_elementsKindParam) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr, BuiltinPtr, BuiltinPtr> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).IsElementsKindGreaterThanOrEqual(TNode<Int32T>{p_elementsKindParam}, kFirstRabGsabFixedTypedArrayElementsKind_0(state_));
    ca_.Branch(tmp0, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{p_elementsKindParam});
  }

  TNode<Int32T> tmp1;
  TNode<Int32T> tmp2;
  TNode<Int32T> tmp3;
  TNode<Int32T> tmp4;
  TNode<Int32T> tmp5;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp1 = FromConstexpr_int32_constexpr_int32_0(state_, kFirstRabGsabFixedTypedArrayElementsKind_0(state_));
    tmp2 = CodeStubAssembler(state_).Int32Sub(TNode<Int32T>{p_elementsKindParam}, TNode<Int32T>{tmp1});
    tmp3 = FromConstexpr_int32_constexpr_int32_0(state_, kFirstFixedTypedArrayElementsKind_0(state_));
    tmp4 = CodeStubAssembler(state_).Int32Add(TNode<Int32T>{tmp2}, TNode<Int32T>{tmp3});
    tmp5 = (TNode<Int32T>{tmp4});
    ca_.Goto(&block3, tmp5);
  }

  TNode<Int32T> phi_bb3_1;
  TNode<BoolT> tmp6;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_1);
    tmp6 = CodeStubAssembler(state_).IsElementsKindGreaterThan(TNode<Int32T>{phi_bb3_1}, ElementsKind::UINT32_ELEMENTS);
    ca_.Branch(tmp6, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  TNode<Int32T> tmp7;
  TNode<BoolT> tmp8;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp7 = FromConstexpr_ElementsKind_constexpr_INT32_ELEMENTS_0(state_, ElementsKind::INT32_ELEMENTS);
    tmp8 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{phi_bb3_1}, TNode<Int32T>{tmp7});
    ca_.Branch(tmp8, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  TNode<BuiltinPtr> tmp9;
  TNode<BuiltinPtr> tmp10;
  TNode<BuiltinPtr> tmp11;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    std::tie(tmp9, tmp10, tmp11) = GetTypedArrayAccessor_Int32Elements_0(state_).Flatten();
    ca_.Goto(&block1, tmp9, tmp10, tmp11);
  }

  TNode<Int32T> tmp12;
  TNode<BoolT> tmp13;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp12 = FromConstexpr_ElementsKind_constexpr_FLOAT32_ELEMENTS_0(state_, ElementsKind::FLOAT32_ELEMENTS);
    tmp13 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{phi_bb3_1}, TNode<Int32T>{tmp12});
    ca_.Branch(tmp13, &block10, std::vector<compiler::Node*>{}, &block11, std::vector<compiler::Node*>{});
  }

  TNode<BuiltinPtr> tmp14;
  TNode<BuiltinPtr> tmp15;
  TNode<BuiltinPtr> tmp16;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    std::tie(tmp14, tmp15, tmp16) = GetTypedArrayAccessor_Float32Elements_0(state_).Flatten();
    ca_.Goto(&block1, tmp14, tmp15, tmp16);
  }

  TNode<Int32T> tmp17;
  TNode<BoolT> tmp18;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp17 = FromConstexpr_ElementsKind_constexpr_FLOAT64_ELEMENTS_0(state_, ElementsKind::FLOAT64_ELEMENTS);
    tmp18 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{phi_bb3_1}, TNode<Int32T>{tmp17});
    ca_.Branch(tmp18, &block13, std::vector<compiler::Node*>{}, &block14, std::vector<compiler::Node*>{});
  }

  TNode<BuiltinPtr> tmp19;
  TNode<BuiltinPtr> tmp20;
  TNode<BuiltinPtr> tmp21;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    std::tie(tmp19, tmp20, tmp21) = GetTypedArrayAccessor_Float64Elements_0(state_).Flatten();
    ca_.Goto(&block1, tmp19, tmp20, tmp21);
  }

  TNode<Int32T> tmp22;
  TNode<BoolT> tmp23;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp22 = FromConstexpr_ElementsKind_constexpr_UINT8_CLAMPED_ELEMENTS_0(state_, ElementsKind::UINT8_CLAMPED_ELEMENTS);
    tmp23 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{phi_bb3_1}, TNode<Int32T>{tmp22});
    ca_.Branch(tmp23, &block16, std::vector<compiler::Node*>{}, &block17, std::vector<compiler::Node*>{});
  }

  TNode<BuiltinPtr> tmp24;
  TNode<BuiltinPtr> tmp25;
  TNode<BuiltinPtr> tmp26;
  if (block16.is_used()) {
    ca_.Bind(&block16);
    std::tie(tmp24, tmp25, tmp26) = GetTypedArrayAccessor_Uint8ClampedElements_0(state_).Flatten();
    ca_.Goto(&block1, tmp24, tmp25, tmp26);
  }

  TNode<Int32T> tmp27;
  TNode<BoolT> tmp28;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    tmp27 = FromConstexpr_ElementsKind_constexpr_BIGUINT64_ELEMENTS_0(state_, ElementsKind::BIGUINT64_ELEMENTS);
    tmp28 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{phi_bb3_1}, TNode<Int32T>{tmp27});
    ca_.Branch(tmp28, &block19, std::vector<compiler::Node*>{}, &block20, std::vector<compiler::Node*>{});
  }

  TNode<BuiltinPtr> tmp29;
  TNode<BuiltinPtr> tmp30;
  TNode<BuiltinPtr> tmp31;
  if (block19.is_used()) {
    ca_.Bind(&block19);
    std::tie(tmp29, tmp30, tmp31) = GetTypedArrayAccessor_BigUint64Elements_0(state_).Flatten();
    ca_.Goto(&block1, tmp29, tmp30, tmp31);
  }

  TNode<Int32T> tmp32;
  TNode<BoolT> tmp33;
  if (block20.is_used()) {
    ca_.Bind(&block20);
    tmp32 = FromConstexpr_ElementsKind_constexpr_BIGINT64_ELEMENTS_0(state_, ElementsKind::BIGINT64_ELEMENTS);
    tmp33 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{phi_bb3_1}, TNode<Int32T>{tmp32});
    ca_.Branch(tmp33, &block22, std::vector<compiler::Node*>{}, &block23, std::vector<compiler::Node*>{});
  }

  TNode<BuiltinPtr> tmp34;
  TNode<BuiltinPtr> tmp35;
  TNode<BuiltinPtr> tmp36;
  if (block22.is_used()) {
    ca_.Bind(&block22);
    std::tie(tmp34, tmp35, tmp36) = GetTypedArrayAccessor_BigInt64Elements_0(state_).Flatten();
    ca_.Goto(&block1, tmp34, tmp35, tmp36);
  }

  if (block23.is_used()) {
    ca_.Bind(&block23);
    ca_.Goto(&block6);
  }

  TNode<Int32T> tmp37;
  TNode<BoolT> tmp38;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp37 = FromConstexpr_ElementsKind_constexpr_UINT8_ELEMENTS_0(state_, ElementsKind::UINT8_ELEMENTS);
    tmp38 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{phi_bb3_1}, TNode<Int32T>{tmp37});
    ca_.Branch(tmp38, &block24, std::vector<compiler::Node*>{}, &block25, std::vector<compiler::Node*>{});
  }

  TNode<BuiltinPtr> tmp39;
  TNode<BuiltinPtr> tmp40;
  TNode<BuiltinPtr> tmp41;
  if (block24.is_used()) {
    ca_.Bind(&block24);
    std::tie(tmp39, tmp40, tmp41) = GetTypedArrayAccessor_Uint8Elements_0(state_).Flatten();
    ca_.Goto(&block1, tmp39, tmp40, tmp41);
  }

  TNode<Int32T> tmp42;
  TNode<BoolT> tmp43;
  if (block25.is_used()) {
    ca_.Bind(&block25);
    tmp42 = FromConstexpr_ElementsKind_constexpr_INT8_ELEMENTS_0(state_, ElementsKind::INT8_ELEMENTS);
    tmp43 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{phi_bb3_1}, TNode<Int32T>{tmp42});
    ca_.Branch(tmp43, &block27, std::vector<compiler::Node*>{}, &block28, std::vector<compiler::Node*>{});
  }

  TNode<BuiltinPtr> tmp44;
  TNode<BuiltinPtr> tmp45;
  TNode<BuiltinPtr> tmp46;
  if (block27.is_used()) {
    ca_.Bind(&block27);
    std::tie(tmp44, tmp45, tmp46) = GetTypedArrayAccessor_Int8Elements_0(state_).Flatten();
    ca_.Goto(&block1, tmp44, tmp45, tmp46);
  }

  TNode<Int32T> tmp47;
  TNode<BoolT> tmp48;
  if (block28.is_used()) {
    ca_.Bind(&block28);
    tmp47 = FromConstexpr_ElementsKind_constexpr_UINT16_ELEMENTS_0(state_, ElementsKind::UINT16_ELEMENTS);
    tmp48 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{phi_bb3_1}, TNode<Int32T>{tmp47});
    ca_.Branch(tmp48, &block30, std::vector<compiler::Node*>{}, &block31, std::vector<compiler::Node*>{});
  }

  TNode<BuiltinPtr> tmp49;
  TNode<BuiltinPtr> tmp50;
  TNode<BuiltinPtr> tmp51;
  if (block30.is_used()) {
    ca_.Bind(&block30);
    std::tie(tmp49, tmp50, tmp51) = GetTypedArrayAccessor_Uint16Elements_0(state_).Flatten();
    ca_.Goto(&block1, tmp49, tmp50, tmp51);
  }

  TNode<Int32T> tmp52;
  TNode<BoolT> tmp53;
  if (block31.is_used()) {
    ca_.Bind(&block31);
    tmp52 = FromConstexpr_ElementsKind_constexpr_INT16_ELEMENTS_0(state_, ElementsKind::INT16_ELEMENTS);
    tmp53 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{phi_bb3_1}, TNode<Int32T>{tmp52});
    ca_.Branch(tmp53, &block33, std::vector<compiler::Node*>{}, &block34, std::vector<compiler::Node*>{});
  }

  TNode<BuiltinPtr> tmp54;
  TNode<BuiltinPtr> tmp55;
  TNode<BuiltinPtr> tmp56;
  if (block33.is_used()) {
    ca_.Bind(&block33);
    std::tie(tmp54, tmp55, tmp56) = GetTypedArrayAccessor_Int16Elements_0(state_).Flatten();
    ca_.Goto(&block1, tmp54, tmp55, tmp56);
  }

  TNode<Int32T> tmp57;
  TNode<BoolT> tmp58;
  if (block34.is_used()) {
    ca_.Bind(&block34);
    tmp57 = FromConstexpr_ElementsKind_constexpr_UINT32_ELEMENTS_0(state_, ElementsKind::UINT32_ELEMENTS);
    tmp58 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{phi_bb3_1}, TNode<Int32T>{tmp57});
    ca_.Branch(tmp58, &block36, std::vector<compiler::Node*>{}, &block37, std::vector<compiler::Node*>{});
  }

  TNode<BuiltinPtr> tmp59;
  TNode<BuiltinPtr> tmp60;
  TNode<BuiltinPtr> tmp61;
  if (block36.is_used()) {
    ca_.Bind(&block36);
    std::tie(tmp59, tmp60, tmp61) = GetTypedArrayAccessor_Uint32Elements_0(state_).Flatten();
    ca_.Goto(&block1, tmp59, tmp60, tmp61);
  }

  if (block37.is_used()) {
    ca_.Bind(&block37);
    ca_.Goto(&block6);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<BuiltinPtr> phi_bb1_1;
  TNode<BuiltinPtr> phi_bb1_2;
  TNode<BuiltinPtr> phi_bb1_3;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_1, &phi_bb1_2, &phi_bb1_3);
    ca_.Goto(&block38);
  }

    ca_.Bind(&block38);
  return TorqueStructTypedArrayAccessor_0{TNode<BuiltinPtr>{phi_bb1_1}, TNode<BuiltinPtr>{phi_bb1_2}, TNode<BuiltinPtr>{phi_bb1_3}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=191&c=1
TNode<JSTypedArray> EnsureAttached_0(compiler::CodeAssemblerState* state_, TNode<JSTypedArray> p_array, compiler::CodeAssemblerLabel* label_DetachedOrOutOfBounds) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).IsJSArrayBufferViewDetachedOrOutOfBounds(TNode<JSArrayBufferView>{p_array}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block6);
    }
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(label_DetachedOrOutOfBounds);
  }

  TNode<JSTypedArray> tmp2;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp2 = (TNode<JSTypedArray>{p_array});
    ca_.Goto(&block7);
  }

    ca_.Bind(&block7);
  return TNode<JSTypedArray>{tmp2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=206&c=1
TorqueStructAttachedJSTypedArrayAndLength_0 EnsureAttachedAndReadLength_0(compiler::CodeAssemblerState* state_, TNode<JSTypedArray> p_array, compiler::CodeAssemblerLabel* label_DetachedOrOutOfBounds) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<UintPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = CodeStubAssembler(state_).LoadJSTypedArrayLengthAndCheckDetached(TNode<JSTypedArray>{p_array}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(label_DetachedOrOutOfBounds);
  }

  TNode<JSTypedArray> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp2 = (TNode<JSTypedArray>{p_array});
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
  return TorqueStructAttachedJSTypedArrayAndLength_0{TNode<JSTypedArray>{tmp2}, TNode<UintPtrT>{tmp0}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=241&c=1
TorqueStructAttachedJSTypedArrayWitness_0 NewAttachedJSTypedArrayWitness_0(compiler::CodeAssemblerState* state_, TNode<JSTypedArray> p_array) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Int32T> tmp0;
  TNode<BuiltinPtr> tmp1;
  TNode<BuiltinPtr> tmp2;
  TNode<BuiltinPtr> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadElementsKind(TNode<JSTypedArray>{p_array});
    std::tie(tmp1, tmp2, tmp3) = GetTypedArrayAccessor_0(state_, TNode<Int32T>{tmp0}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructAttachedJSTypedArrayWitness_0{TNode<JSTypedArray>{p_array}, TNode<JSTypedArray>{p_array}, TNode<BuiltinPtr>{tmp1}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=253&c=1
ElementsKind KindForArrayType_Uint8Elements_0(compiler::CodeAssemblerState* state_) {
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
  return ElementsKind::UINT8_ELEMENTS;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=256&c=1
ElementsKind KindForArrayType_Int8Elements_0(compiler::CodeAssemblerState* state_) {
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
  return ElementsKind::INT8_ELEMENTS;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=259&c=1
ElementsKind KindForArrayType_Uint16Elements_0(compiler::CodeAssemblerState* state_) {
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
  return ElementsKind::UINT16_ELEMENTS;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=262&c=1
ElementsKind KindForArrayType_Int16Elements_0(compiler::CodeAssemblerState* state_) {
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
  return ElementsKind::INT16_ELEMENTS;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=265&c=1
ElementsKind KindForArrayType_Uint32Elements_0(compiler::CodeAssemblerState* state_) {
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
  return ElementsKind::UINT32_ELEMENTS;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=268&c=1
ElementsKind KindForArrayType_Int32Elements_0(compiler::CodeAssemblerState* state_) {
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
  return ElementsKind::INT32_ELEMENTS;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=271&c=1
ElementsKind KindForArrayType_Float32Elements_0(compiler::CodeAssemblerState* state_) {
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
  return ElementsKind::FLOAT32_ELEMENTS;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=274&c=1
ElementsKind KindForArrayType_Float64Elements_0(compiler::CodeAssemblerState* state_) {
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
  return ElementsKind::FLOAT64_ELEMENTS;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=277&c=1
ElementsKind KindForArrayType_Uint8ClampedElements_0(compiler::CodeAssemblerState* state_) {
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
  return ElementsKind::UINT8_CLAMPED_ELEMENTS;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=280&c=1
ElementsKind KindForArrayType_BigUint64Elements_0(compiler::CodeAssemblerState* state_) {
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
  return ElementsKind::BIGUINT64_ELEMENTS;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=283&c=1
ElementsKind KindForArrayType_BigInt64Elements_0(compiler::CodeAssemblerState* state_) {
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
  return ElementsKind::BIGINT64_ELEMENTS;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=151&c=14
TorqueStructTypedArrayAccessor_0 GetTypedArrayAccessor_Int32Elements_0(compiler::CodeAssemblerState* state_) {
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
  return TorqueStructTypedArrayAccessor_0{TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadTypedElement_Int32Elements_0))}, TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kStoreTypedElementNumeric_Int32Elements_0))}, TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kStoreTypedElementJSAny_Int32Elements_0))}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=153&c=14
TorqueStructTypedArrayAccessor_0 GetTypedArrayAccessor_Float32Elements_0(compiler::CodeAssemblerState* state_) {
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
  return TorqueStructTypedArrayAccessor_0{TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadTypedElement_Float32Elements_0))}, TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kStoreTypedElementNumeric_Float32Elements_0))}, TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kStoreTypedElementJSAny_Float32Elements_0))}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=155&c=14
TorqueStructTypedArrayAccessor_0 GetTypedArrayAccessor_Float64Elements_0(compiler::CodeAssemblerState* state_) {
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
  return TorqueStructTypedArrayAccessor_0{TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadTypedElement_Float64Elements_0))}, TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kStoreTypedElementNumeric_Float64Elements_0))}, TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kStoreTypedElementJSAny_Float64Elements_0))}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=157&c=14
TorqueStructTypedArrayAccessor_0 GetTypedArrayAccessor_Uint8ClampedElements_0(compiler::CodeAssemblerState* state_) {
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
  return TorqueStructTypedArrayAccessor_0{TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadTypedElement_Uint8ClampedElements_0))}, TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kStoreTypedElementNumeric_Uint8ClampedElements_0))}, TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kStoreTypedElementJSAny_Uint8ClampedElements_0))}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=159&c=14
TorqueStructTypedArrayAccessor_0 GetTypedArrayAccessor_BigUint64Elements_0(compiler::CodeAssemblerState* state_) {
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
  return TorqueStructTypedArrayAccessor_0{TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadTypedElement_BigUint64Elements_0))}, TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kStoreTypedElementNumeric_BigUint64Elements_0))}, TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kStoreTypedElementJSAny_BigUint64Elements_0))}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=161&c=14
TorqueStructTypedArrayAccessor_0 GetTypedArrayAccessor_BigInt64Elements_0(compiler::CodeAssemblerState* state_) {
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
  return TorqueStructTypedArrayAccessor_0{TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadTypedElement_BigInt64Elements_0))}, TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kStoreTypedElementNumeric_BigInt64Elements_0))}, TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kStoreTypedElementJSAny_BigInt64Elements_0))}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=165&c=14
TorqueStructTypedArrayAccessor_0 GetTypedArrayAccessor_Uint8Elements_0(compiler::CodeAssemblerState* state_) {
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
  return TorqueStructTypedArrayAccessor_0{TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadTypedElement_Uint8Elements_0))}, TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kStoreTypedElementNumeric_Uint8Elements_0))}, TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kStoreTypedElementJSAny_Uint8Elements_0))}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=167&c=14
TorqueStructTypedArrayAccessor_0 GetTypedArrayAccessor_Int8Elements_0(compiler::CodeAssemblerState* state_) {
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
  return TorqueStructTypedArrayAccessor_0{TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadTypedElement_Int8Elements_0))}, TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kStoreTypedElementNumeric_Int8Elements_0))}, TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kStoreTypedElementJSAny_Int8Elements_0))}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=169&c=14
TorqueStructTypedArrayAccessor_0 GetTypedArrayAccessor_Uint16Elements_0(compiler::CodeAssemblerState* state_) {
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
  return TorqueStructTypedArrayAccessor_0{TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadTypedElement_Uint16Elements_0))}, TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kStoreTypedElementNumeric_Uint16Elements_0))}, TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kStoreTypedElementJSAny_Uint16Elements_0))}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=171&c=14
TorqueStructTypedArrayAccessor_0 GetTypedArrayAccessor_Int16Elements_0(compiler::CodeAssemblerState* state_) {
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
  return TorqueStructTypedArrayAccessor_0{TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadTypedElement_Int16Elements_0))}, TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kStoreTypedElementNumeric_Int16Elements_0))}, TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kStoreTypedElementJSAny_Int16Elements_0))}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array.tq?l=173&c=14
TorqueStructTypedArrayAccessor_0 GetTypedArrayAccessor_Uint32Elements_0(compiler::CodeAssemblerState* state_) {
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
  return TorqueStructTypedArrayAccessor_0{TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadTypedElement_Uint32Elements_0))}, TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kStoreTypedElementNumeric_Uint32Elements_0))}, TNode<BuiltinPtr>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kStoreTypedElementJSAny_Uint32Elements_0))}};
}

TF_BUILTIN(LoadTypedElement_Int32Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<JSTypedArray> parameter0 = UncheckedParameter<JSTypedArray>(Descriptor::kArray);
  USE(parameter0);
  TNode<UintPtrT> parameter1 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<Numeric> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{parameter0});
    tmp1 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{parameter1}, (KindForArrayType_Int32Elements_0(state_)));
    CodeStubAssembler(state_).Return(tmp1);
  }
}

TF_BUILTIN(StoreTypedElementNumeric_Int32Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedParameter<JSTypedArray>(Descriptor::kTypedArray);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter2);
  TNode<Numeric> parameter3 = UncheckedParameter<Numeric>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromNumeric(TNode<Context>{parameter0}, TNode<JSTypedArray>{parameter1}, TNode<UintPtrT>{parameter2}, TNode<Numeric>{parameter3}, (KindForArrayType_Int32Elements_0(state_)));
    tmp0 = kStoreSucceded_0(state_);
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(StoreTypedElementJSAny_Int32Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedParameter<JSTypedArray>(Descriptor::kTypedArray);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label0(&ca_);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromTagged(TNode<Context>{parameter0}, TNode<JSTypedArray>{parameter1}, TNode<UintPtrT>{parameter2}, TNode<Object>{parameter3}, (KindForArrayType_Int32Elements_0(state_)), &label0);
    ca_.Goto(&block3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4);
    }
  }

  TNode<Smi> tmp1;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp1 = kStoreFailureArrayDetached_0(state_);
    CodeStubAssembler(state_).Return(tmp1);
  }

  TNode<Smi> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp2 = kStoreSucceded_0(state_);
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(LoadTypedElement_Float32Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<JSTypedArray> parameter0 = UncheckedParameter<JSTypedArray>(Descriptor::kArray);
  USE(parameter0);
  TNode<UintPtrT> parameter1 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<Numeric> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{parameter0});
    tmp1 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{parameter1}, (KindForArrayType_Float32Elements_0(state_)));
    CodeStubAssembler(state_).Return(tmp1);
  }
}

TF_BUILTIN(StoreTypedElementNumeric_Float32Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedParameter<JSTypedArray>(Descriptor::kTypedArray);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter2);
  TNode<Numeric> parameter3 = UncheckedParameter<Numeric>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromNumeric(TNode<Context>{parameter0}, TNode<JSTypedArray>{parameter1}, TNode<UintPtrT>{parameter2}, TNode<Numeric>{parameter3}, (KindForArrayType_Float32Elements_0(state_)));
    tmp0 = kStoreSucceded_0(state_);
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(StoreTypedElementJSAny_Float32Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedParameter<JSTypedArray>(Descriptor::kTypedArray);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label0(&ca_);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromTagged(TNode<Context>{parameter0}, TNode<JSTypedArray>{parameter1}, TNode<UintPtrT>{parameter2}, TNode<Object>{parameter3}, (KindForArrayType_Float32Elements_0(state_)), &label0);
    ca_.Goto(&block3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4);
    }
  }

  TNode<Smi> tmp1;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp1 = kStoreFailureArrayDetached_0(state_);
    CodeStubAssembler(state_).Return(tmp1);
  }

  TNode<Smi> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp2 = kStoreSucceded_0(state_);
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(LoadTypedElement_Float64Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<JSTypedArray> parameter0 = UncheckedParameter<JSTypedArray>(Descriptor::kArray);
  USE(parameter0);
  TNode<UintPtrT> parameter1 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<Numeric> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{parameter0});
    tmp1 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{parameter1}, (KindForArrayType_Float64Elements_0(state_)));
    CodeStubAssembler(state_).Return(tmp1);
  }
}

TF_BUILTIN(StoreTypedElementNumeric_Float64Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedParameter<JSTypedArray>(Descriptor::kTypedArray);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter2);
  TNode<Numeric> parameter3 = UncheckedParameter<Numeric>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromNumeric(TNode<Context>{parameter0}, TNode<JSTypedArray>{parameter1}, TNode<UintPtrT>{parameter2}, TNode<Numeric>{parameter3}, (KindForArrayType_Float64Elements_0(state_)));
    tmp0 = kStoreSucceded_0(state_);
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(StoreTypedElementJSAny_Float64Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedParameter<JSTypedArray>(Descriptor::kTypedArray);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label0(&ca_);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromTagged(TNode<Context>{parameter0}, TNode<JSTypedArray>{parameter1}, TNode<UintPtrT>{parameter2}, TNode<Object>{parameter3}, (KindForArrayType_Float64Elements_0(state_)), &label0);
    ca_.Goto(&block3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4);
    }
  }

  TNode<Smi> tmp1;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp1 = kStoreFailureArrayDetached_0(state_);
    CodeStubAssembler(state_).Return(tmp1);
  }

  TNode<Smi> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp2 = kStoreSucceded_0(state_);
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(LoadTypedElement_Uint8ClampedElements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<JSTypedArray> parameter0 = UncheckedParameter<JSTypedArray>(Descriptor::kArray);
  USE(parameter0);
  TNode<UintPtrT> parameter1 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<Numeric> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{parameter0});
    tmp1 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{parameter1}, (KindForArrayType_Uint8ClampedElements_0(state_)));
    CodeStubAssembler(state_).Return(tmp1);
  }
}

TF_BUILTIN(StoreTypedElementNumeric_Uint8ClampedElements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedParameter<JSTypedArray>(Descriptor::kTypedArray);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter2);
  TNode<Numeric> parameter3 = UncheckedParameter<Numeric>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromNumeric(TNode<Context>{parameter0}, TNode<JSTypedArray>{parameter1}, TNode<UintPtrT>{parameter2}, TNode<Numeric>{parameter3}, (KindForArrayType_Uint8ClampedElements_0(state_)));
    tmp0 = kStoreSucceded_0(state_);
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(StoreTypedElementJSAny_Uint8ClampedElements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedParameter<JSTypedArray>(Descriptor::kTypedArray);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label0(&ca_);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromTagged(TNode<Context>{parameter0}, TNode<JSTypedArray>{parameter1}, TNode<UintPtrT>{parameter2}, TNode<Object>{parameter3}, (KindForArrayType_Uint8ClampedElements_0(state_)), &label0);
    ca_.Goto(&block3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4);
    }
  }

  TNode<Smi> tmp1;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp1 = kStoreFailureArrayDetached_0(state_);
    CodeStubAssembler(state_).Return(tmp1);
  }

  TNode<Smi> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp2 = kStoreSucceded_0(state_);
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(LoadTypedElement_BigUint64Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<JSTypedArray> parameter0 = UncheckedParameter<JSTypedArray>(Descriptor::kArray);
  USE(parameter0);
  TNode<UintPtrT> parameter1 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<Numeric> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{parameter0});
    tmp1 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{parameter1}, (KindForArrayType_BigUint64Elements_0(state_)));
    CodeStubAssembler(state_).Return(tmp1);
  }
}

TF_BUILTIN(StoreTypedElementNumeric_BigUint64Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedParameter<JSTypedArray>(Descriptor::kTypedArray);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter2);
  TNode<Numeric> parameter3 = UncheckedParameter<Numeric>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromNumeric(TNode<Context>{parameter0}, TNode<JSTypedArray>{parameter1}, TNode<UintPtrT>{parameter2}, TNode<Numeric>{parameter3}, (KindForArrayType_BigUint64Elements_0(state_)));
    tmp0 = kStoreSucceded_0(state_);
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(StoreTypedElementJSAny_BigUint64Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedParameter<JSTypedArray>(Descriptor::kTypedArray);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label0(&ca_);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromTagged(TNode<Context>{parameter0}, TNode<JSTypedArray>{parameter1}, TNode<UintPtrT>{parameter2}, TNode<Object>{parameter3}, (KindForArrayType_BigUint64Elements_0(state_)), &label0);
    ca_.Goto(&block3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4);
    }
  }

  TNode<Smi> tmp1;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp1 = kStoreFailureArrayDetached_0(state_);
    CodeStubAssembler(state_).Return(tmp1);
  }

  TNode<Smi> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp2 = kStoreSucceded_0(state_);
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(LoadTypedElement_BigInt64Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<JSTypedArray> parameter0 = UncheckedParameter<JSTypedArray>(Descriptor::kArray);
  USE(parameter0);
  TNode<UintPtrT> parameter1 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<Numeric> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{parameter0});
    tmp1 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{parameter1}, (KindForArrayType_BigInt64Elements_0(state_)));
    CodeStubAssembler(state_).Return(tmp1);
  }
}

TF_BUILTIN(StoreTypedElementNumeric_BigInt64Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedParameter<JSTypedArray>(Descriptor::kTypedArray);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter2);
  TNode<Numeric> parameter3 = UncheckedParameter<Numeric>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromNumeric(TNode<Context>{parameter0}, TNode<JSTypedArray>{parameter1}, TNode<UintPtrT>{parameter2}, TNode<Numeric>{parameter3}, (KindForArrayType_BigInt64Elements_0(state_)));
    tmp0 = kStoreSucceded_0(state_);
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(StoreTypedElementJSAny_BigInt64Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedParameter<JSTypedArray>(Descriptor::kTypedArray);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label0(&ca_);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromTagged(TNode<Context>{parameter0}, TNode<JSTypedArray>{parameter1}, TNode<UintPtrT>{parameter2}, TNode<Object>{parameter3}, (KindForArrayType_BigInt64Elements_0(state_)), &label0);
    ca_.Goto(&block3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4);
    }
  }

  TNode<Smi> tmp1;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp1 = kStoreFailureArrayDetached_0(state_);
    CodeStubAssembler(state_).Return(tmp1);
  }

  TNode<Smi> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp2 = kStoreSucceded_0(state_);
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(LoadTypedElement_Uint8Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<JSTypedArray> parameter0 = UncheckedParameter<JSTypedArray>(Descriptor::kArray);
  USE(parameter0);
  TNode<UintPtrT> parameter1 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<Numeric> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{parameter0});
    tmp1 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{parameter1}, (KindForArrayType_Uint8Elements_0(state_)));
    CodeStubAssembler(state_).Return(tmp1);
  }
}

TF_BUILTIN(StoreTypedElementNumeric_Uint8Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedParameter<JSTypedArray>(Descriptor::kTypedArray);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter2);
  TNode<Numeric> parameter3 = UncheckedParameter<Numeric>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromNumeric(TNode<Context>{parameter0}, TNode<JSTypedArray>{parameter1}, TNode<UintPtrT>{parameter2}, TNode<Numeric>{parameter3}, (KindForArrayType_Uint8Elements_0(state_)));
    tmp0 = kStoreSucceded_0(state_);
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(StoreTypedElementJSAny_Uint8Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedParameter<JSTypedArray>(Descriptor::kTypedArray);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label0(&ca_);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromTagged(TNode<Context>{parameter0}, TNode<JSTypedArray>{parameter1}, TNode<UintPtrT>{parameter2}, TNode<Object>{parameter3}, (KindForArrayType_Uint8Elements_0(state_)), &label0);
    ca_.Goto(&block3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4);
    }
  }

  TNode<Smi> tmp1;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp1 = kStoreFailureArrayDetached_0(state_);
    CodeStubAssembler(state_).Return(tmp1);
  }

  TNode<Smi> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp2 = kStoreSucceded_0(state_);
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(LoadTypedElement_Int8Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<JSTypedArray> parameter0 = UncheckedParameter<JSTypedArray>(Descriptor::kArray);
  USE(parameter0);
  TNode<UintPtrT> parameter1 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<Numeric> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{parameter0});
    tmp1 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{parameter1}, (KindForArrayType_Int8Elements_0(state_)));
    CodeStubAssembler(state_).Return(tmp1);
  }
}

TF_BUILTIN(StoreTypedElementNumeric_Int8Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedParameter<JSTypedArray>(Descriptor::kTypedArray);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter2);
  TNode<Numeric> parameter3 = UncheckedParameter<Numeric>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromNumeric(TNode<Context>{parameter0}, TNode<JSTypedArray>{parameter1}, TNode<UintPtrT>{parameter2}, TNode<Numeric>{parameter3}, (KindForArrayType_Int8Elements_0(state_)));
    tmp0 = kStoreSucceded_0(state_);
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(StoreTypedElementJSAny_Int8Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedParameter<JSTypedArray>(Descriptor::kTypedArray);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label0(&ca_);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromTagged(TNode<Context>{parameter0}, TNode<JSTypedArray>{parameter1}, TNode<UintPtrT>{parameter2}, TNode<Object>{parameter3}, (KindForArrayType_Int8Elements_0(state_)), &label0);
    ca_.Goto(&block3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4);
    }
  }

  TNode<Smi> tmp1;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp1 = kStoreFailureArrayDetached_0(state_);
    CodeStubAssembler(state_).Return(tmp1);
  }

  TNode<Smi> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp2 = kStoreSucceded_0(state_);
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(LoadTypedElement_Uint16Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<JSTypedArray> parameter0 = UncheckedParameter<JSTypedArray>(Descriptor::kArray);
  USE(parameter0);
  TNode<UintPtrT> parameter1 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<Numeric> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{parameter0});
    tmp1 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{parameter1}, (KindForArrayType_Uint16Elements_0(state_)));
    CodeStubAssembler(state_).Return(tmp1);
  }
}

TF_BUILTIN(StoreTypedElementNumeric_Uint16Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedParameter<JSTypedArray>(Descriptor::kTypedArray);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter2);
  TNode<Numeric> parameter3 = UncheckedParameter<Numeric>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromNumeric(TNode<Context>{parameter0}, TNode<JSTypedArray>{parameter1}, TNode<UintPtrT>{parameter2}, TNode<Numeric>{parameter3}, (KindForArrayType_Uint16Elements_0(state_)));
    tmp0 = kStoreSucceded_0(state_);
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(StoreTypedElementJSAny_Uint16Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedParameter<JSTypedArray>(Descriptor::kTypedArray);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label0(&ca_);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromTagged(TNode<Context>{parameter0}, TNode<JSTypedArray>{parameter1}, TNode<UintPtrT>{parameter2}, TNode<Object>{parameter3}, (KindForArrayType_Uint16Elements_0(state_)), &label0);
    ca_.Goto(&block3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4);
    }
  }

  TNode<Smi> tmp1;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp1 = kStoreFailureArrayDetached_0(state_);
    CodeStubAssembler(state_).Return(tmp1);
  }

  TNode<Smi> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp2 = kStoreSucceded_0(state_);
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(LoadTypedElement_Int16Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<JSTypedArray> parameter0 = UncheckedParameter<JSTypedArray>(Descriptor::kArray);
  USE(parameter0);
  TNode<UintPtrT> parameter1 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<Numeric> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{parameter0});
    tmp1 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{parameter1}, (KindForArrayType_Int16Elements_0(state_)));
    CodeStubAssembler(state_).Return(tmp1);
  }
}

TF_BUILTIN(StoreTypedElementNumeric_Int16Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedParameter<JSTypedArray>(Descriptor::kTypedArray);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter2);
  TNode<Numeric> parameter3 = UncheckedParameter<Numeric>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromNumeric(TNode<Context>{parameter0}, TNode<JSTypedArray>{parameter1}, TNode<UintPtrT>{parameter2}, TNode<Numeric>{parameter3}, (KindForArrayType_Int16Elements_0(state_)));
    tmp0 = kStoreSucceded_0(state_);
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(StoreTypedElementJSAny_Int16Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedParameter<JSTypedArray>(Descriptor::kTypedArray);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label0(&ca_);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromTagged(TNode<Context>{parameter0}, TNode<JSTypedArray>{parameter1}, TNode<UintPtrT>{parameter2}, TNode<Object>{parameter3}, (KindForArrayType_Int16Elements_0(state_)), &label0);
    ca_.Goto(&block3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4);
    }
  }

  TNode<Smi> tmp1;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp1 = kStoreFailureArrayDetached_0(state_);
    CodeStubAssembler(state_).Return(tmp1);
  }

  TNode<Smi> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp2 = kStoreSucceded_0(state_);
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(LoadTypedElement_Uint32Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<JSTypedArray> parameter0 = UncheckedParameter<JSTypedArray>(Descriptor::kArray);
  USE(parameter0);
  TNode<UintPtrT> parameter1 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<Numeric> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{parameter0});
    tmp1 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{parameter1}, (KindForArrayType_Uint32Elements_0(state_)));
    CodeStubAssembler(state_).Return(tmp1);
  }
}

TF_BUILTIN(StoreTypedElementNumeric_Uint32Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedParameter<JSTypedArray>(Descriptor::kTypedArray);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter2);
  TNode<Numeric> parameter3 = UncheckedParameter<Numeric>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromNumeric(TNode<Context>{parameter0}, TNode<JSTypedArray>{parameter1}, TNode<UintPtrT>{parameter2}, TNode<Numeric>{parameter3}, (KindForArrayType_Uint32Elements_0(state_)));
    tmp0 = kStoreSucceded_0(state_);
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(StoreTypedElementJSAny_Uint32Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSTypedArray> parameter1 = UncheckedParameter<JSTypedArray>(Descriptor::kTypedArray);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kIndex);
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label0(&ca_);
    TypedArrayBuiltinsAssembler(state_).StoreJSTypedArrayElementFromTagged(TNode<Context>{parameter0}, TNode<JSTypedArray>{parameter1}, TNode<UintPtrT>{parameter2}, TNode<Object>{parameter3}, (KindForArrayType_Uint32Elements_0(state_)), &label0);
    ca_.Goto(&block3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4);
    }
  }

  TNode<Smi> tmp1;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp1 = kStoreFailureArrayDetached_0(state_);
    CodeStubAssembler(state_).Return(tmp1);
  }

  TNode<Smi> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp2 = kStoreSucceded_0(state_);
    CodeStubAssembler(state_).Return(tmp2);
  }
}

} // namespace internal
} // namespace v8
