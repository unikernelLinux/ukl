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
#include "torque-generated/test/torque/test-torque-tq-csa.h"
#include "torque-generated/src/builtins/array-findindex-tq-csa.h"
#include "torque-generated/src/builtins/array-isarray-tq-csa.h"
#include "torque-generated/src/builtins/array-join-tq-csa.h"
#include "torque-generated/src/builtins/array-reverse-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/frames-tq-csa.h"
#include "torque-generated/src/builtins/frame-arguments-tq-csa.h"
#include "torque-generated/src/builtins/iterator-tq-csa.h"
#include "torque-generated/src/builtins/number-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/objects/arguments-tq-csa.h"
#include "torque-generated/src/objects/contexts-tq-csa.h"
#include "torque-generated/src/objects/fixed-array-tq-csa.h"
#include "torque-generated/src/objects/js-array-buffer-tq-csa.h"
#include "torque-generated/src/objects/js-array-tq-csa.h"
#include "torque-generated/src/objects/js-objects-tq-csa.h"
#include "torque-generated/src/objects/scope-info-tq-csa.h"
#include "torque-generated/src/objects/string-tq-csa.h"
#include "torque-generated/src/objects/turbofan-types-tq-csa.h"
#include "torque-generated/test/torque/test-torque-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=12&c=1
TNode<BoolT> ElementsKindTestHelper1_0(compiler::CodeAssemblerState* state_, ElementsKind p_kind) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    if ((((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::UINT8_ELEMENTS)) || (CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::UINT16_ELEMENTS))))) {
      ca_.Goto(&block2);
    } else {
      ca_.Goto(&block3);
    }
  }

  TNode<BoolT> tmp0;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp0 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block1, tmp0);
  }

  TNode<BoolT> tmp1;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp1 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block1, tmp1);
  }

  TNode<BoolT> phi_bb1_0;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_0);
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
  return TNode<BoolT>{phi_bb1_0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=22&c=1
bool ElementsKindTestHelper2_0(compiler::CodeAssemblerState* state_, ElementsKind p_kind) {
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
  return ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::UINT8_ELEMENTS)) || (CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::UINT16_ELEMENTS)));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=27&c=1
void LabelTestHelper1_0(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label1) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.Goto(label_Label1);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=32&c=1
void LabelTestHelper2_0(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label2, compiler::TypedCodeAssemblerVariable<Smi>* label_Label2_parameter_0) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2aull));
    *label_Label2_parameter_0 = tmp0;
    ca_.Goto(label_Label2);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=37&c=1
void LabelTestHelper3_0(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label3, compiler::TypedCodeAssemblerVariable<Oddball>* label_Label3_parameter_0, compiler::TypedCodeAssemblerVariable<Smi>* label_Label3_parameter_1) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Oddball> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Null_0(state_);
    tmp1 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x7ull));
    *label_Label3_parameter_1 = tmp1;
    *label_Label3_parameter_0 = tmp0;
    ca_.Goto(label_Label3);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=42&c=1
void TestConstexpr1_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_bool_constexpr_bool_0(state_, (CodeStubAssembler(state_).IsFastElementsKind(ElementsKind::PACKED_SMI_ELEMENTS)));
    ca_.Branch(tmp0, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 44});
      CodeStubAssembler(state_).FailAssert("Torque assert 'FromConstexpr<bool>( IsFastElementsKind(ElementsKind::PACKED_SMI_ELEMENTS))' failed", pos_stack);
    }
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(&block4);
  }

    ca_.Bind(&block4);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=48&c=1
void TestConstexprIf_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ElementsKindTestHelper1_0(state_, ElementsKind::UINT8_ELEMENTS);
    ca_.Branch(tmp0, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 50});
      CodeStubAssembler(state_).FailAssert("Torque assert 'ElementsKindTestHelper1(ElementsKind::UINT8_ELEMENTS)' failed", pos_stack);
    }
  }

  TNode<BoolT> tmp1;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp1 = ElementsKindTestHelper1_0(state_, ElementsKind::UINT16_ELEMENTS);
    ca_.Branch(tmp1, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 51});
      CodeStubAssembler(state_).FailAssert("Torque assert 'ElementsKindTestHelper1(ElementsKind::UINT16_ELEMENTS)' failed", pos_stack);
    }
  }

  TNode<BoolT> tmp2;
  TNode<BoolT> tmp3;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = ElementsKindTestHelper1_0(state_, ElementsKind::UINT32_ELEMENTS);
    tmp3 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp2});
    ca_.Branch(tmp3, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 52});
      CodeStubAssembler(state_).FailAssert("Torque assert '!ElementsKindTestHelper1(ElementsKind::UINT32_ELEMENTS)' failed", pos_stack);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block8);
  }

    ca_.Bind(&block8);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=55&c=1
void TestConstexprReturn_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_bool_constexpr_bool_0(state_, (ElementsKindTestHelper2_0(state_, ElementsKind::UINT8_ELEMENTS)));
    ca_.Branch(tmp0, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 57});
      CodeStubAssembler(state_).FailAssert("Torque assert 'FromConstexpr<bool>( ElementsKindTestHelper2(ElementsKind::UINT8_ELEMENTS))' failed", pos_stack);
    }
  }

  TNode<BoolT> tmp1;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp1 = FromConstexpr_bool_constexpr_bool_0(state_, (ElementsKindTestHelper2_0(state_, ElementsKind::UINT16_ELEMENTS)));
    ca_.Branch(tmp1, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 59});
      CodeStubAssembler(state_).FailAssert("Torque assert 'FromConstexpr<bool>( ElementsKindTestHelper2(ElementsKind::UINT16_ELEMENTS))' failed", pos_stack);
    }
  }

  TNode<BoolT> tmp2;
  TNode<BoolT> tmp3;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = FromConstexpr_bool_constexpr_bool_0(state_, (ElementsKindTestHelper2_0(state_, ElementsKind::UINT32_ELEMENTS)));
    tmp3 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp2});
    ca_.Branch(tmp3, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 61});
      CodeStubAssembler(state_).FailAssert("Torque assert '!FromConstexpr<bool>( ElementsKindTestHelper2(ElementsKind::UINT32_ELEMENTS))' failed", pos_stack);
    }
  }

  TNode<BoolT> tmp4;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp4 = FromConstexpr_bool_constexpr_bool_0(state_, (CodeStubAssembler(state_).ConstexprBoolNot((ElementsKindTestHelper2_0(state_, ElementsKind::UINT32_ELEMENTS)))));
    ca_.Branch(tmp4, &block8, std::vector<compiler::Node*>{}, &block9, std::vector<compiler::Node*>{});
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 63});
      CodeStubAssembler(state_).FailAssert("Torque assert 'FromConstexpr<bool>( !ElementsKindTestHelper2(ElementsKind::UINT32_ELEMENTS))' failed", pos_stack);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block10);
  }

    ca_.Bind(&block10);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=67&c=1
TNode<Oddball> TestGotoLabel_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label0(&ca_);
    LabelTestHelper1_0(state_, &label0);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4);
    }
  }

  TNode<Oddball> tmp1;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp1 = True_0(state_);
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
  return TNode<Oddball>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=76&c=1
TNode<Oddball> TestGotoLabelWithOneParameter_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    compiler::TypedCodeAssemblerVariable<Smi> tmp1(&ca_);
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label0(&ca_);
    LabelTestHelper2_0(state_, &label0, &tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4);
    }
  }

  TNode<Smi> tmp2;
  TNode<BoolT> tmp3;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2aull));
    tmp3 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp1.value()}, TNode<Smi>{tmp2});
    ca_.Branch(tmp3, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 81});
      CodeStubAssembler(state_).FailAssert("Torque assert 'smi == 42' failed", pos_stack);
    }
  }

  TNode<Oddball> tmp4;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp4 = True_0(state_);
    ca_.Goto(&block7);
  }

    ca_.Bind(&block7);
  return TNode<Oddball>{tmp4};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=86&c=1
TNode<Oddball> TestGotoLabelWithTwoParameters_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    compiler::TypedCodeAssemblerVariable<Oddball> tmp1(&ca_);
    compiler::TypedCodeAssemblerVariable<Smi> tmp2(&ca_);
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label0(&ca_);
    LabelTestHelper3_0(state_, &label0, &tmp1, &tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4);
    }
  }

  TNode<Oddball> tmp3;
  TNode<BoolT> tmp4;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp3 = Null_0(state_);
    tmp4 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp1.value()}, TNode<HeapObject>{tmp3});
    ca_.Branch(tmp4, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 91});
      CodeStubAssembler(state_).FailAssert("Torque assert 'o == Null' failed", pos_stack);
    }
  }

  TNode<Smi> tmp5;
  TNode<BoolT> tmp6;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp5 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x7ull));
    tmp6 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp2.value()}, TNode<Smi>{tmp5});
    ca_.Branch(tmp6, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 92});
      CodeStubAssembler(state_).FailAssert("Torque assert 'smi == 7' failed", pos_stack);
    }
  }

  TNode<Oddball> tmp7;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp7 = True_0(state_);
    ca_.Goto(&block9);
  }

    ca_.Bind(&block9);
  return TNode<Oddball>{tmp7};
}

TF_BUILTIN(GenericBuiltinTest_JSAny_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Object> parameter0 = UncheckedParameter<Object>(Descriptor::kParam);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    CodeStubAssembler(state_).Return(parameter0);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=105&c=1
void TestBuiltinSpecialization_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<Object> tmp1;
  TNode<Oddball> tmp2;
  TNode<BoolT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kGenericBuiltinTest_Smi_0), TNode<Object>(), tmp0);
    tmp2 = Null_0(state_);
    tmp3 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp1}, TNode<HeapObject>{tmp2});
    ca_.Branch(tmp3, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 107});
      CodeStubAssembler(state_).FailAssert("Torque assert 'GenericBuiltinTest<Smi>(0) == Null' failed", pos_stack);
    }
  }

  TNode<Smi> tmp4;
  TNode<Object> tmp5;
  TNode<Oddball> tmp6;
  TNode<BoolT> tmp7;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp4 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp5 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kGenericBuiltinTest_Smi_0), TNode<Object>(), tmp4);
    tmp6 = Null_0(state_);
    tmp7 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp5}, TNode<HeapObject>{tmp6});
    ca_.Branch(tmp7, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 108});
      CodeStubAssembler(state_).FailAssert("Torque assert 'GenericBuiltinTest<Smi>(1) == Null' failed", pos_stack);
    }
  }

  TNode<Oddball> tmp8;
  TNode<Object> tmp9;
  TNode<Oddball> tmp10;
  TNode<BoolT> tmp11;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp8 = Undefined_0(state_);
    tmp9 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kGenericBuiltinTest_JSAny_0), TNode<Object>(), tmp8);
    tmp10 = Undefined_0(state_);
    tmp11 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp9}, TNode<HeapObject>{tmp10});
    ca_.Branch(tmp11, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 109});
      CodeStubAssembler(state_).FailAssert("Torque assert 'GenericBuiltinTest<JSAny>(Undefined) == Undefined' failed", pos_stack);
    }
  }

  TNode<Oddball> tmp12;
  TNode<Object> tmp13;
  TNode<Oddball> tmp14;
  TNode<BoolT> tmp15;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp12 = Undefined_0(state_);
    tmp13 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kGenericBuiltinTest_JSAny_0), TNode<Object>(), tmp12);
    tmp14 = Undefined_0(state_);
    tmp15 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp13}, TNode<HeapObject>{tmp14});
    ca_.Branch(tmp15, &block8, std::vector<compiler::Node*>{}, &block9, std::vector<compiler::Node*>{});
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 110});
      CodeStubAssembler(state_).FailAssert("Torque assert 'GenericBuiltinTest<JSAny>(Undefined) == Undefined' failed", pos_stack);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block10);
  }

    ca_.Bind(&block10);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=113&c=1
void LabelTestHelper4_0(compiler::CodeAssemblerState* state_, bool p_flag, compiler::CodeAssemblerLabel* label_Label4, compiler::CodeAssemblerLabel* label_Label5) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    if ((p_flag)) {
      ca_.Goto(&block3);
    } else {
      ca_.Goto(&block4);
    }
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(label_Label4);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(label_Label5);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=122&c=1
TNode<BoolT> CallLabelTestHelper4_0(compiler::CodeAssemblerState* state_, bool p_flag) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    LabelTestHelper4_0(state_, p_flag, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7);
    }
  }

  TNode<BoolT> tmp2;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp2 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block1, tmp2);
  }

  TNode<BoolT> tmp3;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp3 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block1, tmp3);
  }

  TNode<BoolT> phi_bb1_0;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_0);
    ca_.Goto(&block8);
  }

    ca_.Bind(&block8);
  return TNode<BoolT>{phi_bb1_0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=132&c=1
TNode<Oddball> TestPartiallyUnusedLabel_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CallLabelTestHelper4_0(state_, true);
    tmp1 = CallLabelTestHelper4_0(state_, false);
    ca_.Branch(tmp0, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp2;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp1});
    ca_.Goto(&block6, tmp2);
  }

  TNode<BoolT> tmp3;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp3 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block6, tmp3);
  }

  TNode<BoolT> phi_bb6_3;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_3);
    ca_.Branch(phi_bb6_3, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<Oddball> tmp4;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp4 = True_0(state_);
    ca_.Goto(&block1, tmp4);
  }

  TNode<Oddball> tmp5;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp5 = False_0(state_);
    ca_.Goto(&block1, tmp5);
  }

  TNode<Oddball> phi_bb1_0;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_0);
    ca_.Goto(&block8);
  }

    ca_.Bind(&block8);
  return TNode<Oddball>{phi_bb1_0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=148&c=1
TNode<Object> GenericMacroTest_Object_0(compiler::CodeAssemblerState* state_, TNode<Object> p_param2) {
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
  return TNode<Object>{p_param2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=157&c=1
TNode<Object> GenericMacroTestWithLabels_Object_0(compiler::CodeAssemblerState* state_, TNode<Object> p_param2, compiler::CodeAssemblerLabel* label_Y) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_Smi_0(state_, TNode<Object>{p_param2}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(label_Y);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
  return TNode<Object>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=162&c=1
void TestMacroSpecialization_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<Smi> tmp1;
  TNode<Object> tmp2;
  TNode<Oddball> tmp3;
  TNode<BoolT> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp2 = GenericMacroTest_Smi_0(state_, TNode<Smi>{tmp1});
    tmp3 = Undefined_0(state_);
    tmp4 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp2}, TNode<HeapObject>{tmp3});
    ca_.Branch(tmp4, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 166});
      CodeStubAssembler(state_).FailAssert("Torque assert 'GenericMacroTest<Smi>(0) == Undefined' failed", pos_stack);
    }
  }

  TNode<Smi> tmp5;
  TNode<Object> tmp6;
  TNode<Oddball> tmp7;
  TNode<BoolT> tmp8;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp5 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp6 = GenericMacroTest_Smi_0(state_, TNode<Smi>{tmp5});
    tmp7 = Undefined_0(state_);
    tmp8 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp6}, TNode<HeapObject>{tmp7});
    ca_.Branch(tmp8, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 167});
      CodeStubAssembler(state_).FailAssert("Torque assert 'GenericMacroTest<Smi>(1) == Undefined' failed", pos_stack);
    }
  }

  TNode<Oddball> tmp9;
  TNode<Object> tmp10;
  TNode<Oddball> tmp11;
  TNode<BoolT> tmp12;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp9 = Null_0(state_);
    tmp10 = GenericMacroTest_Object_0(state_, TNode<Object>{tmp9});
    tmp11 = Null_0(state_);
    tmp12 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp10}, TNode<HeapObject>{tmp11});
    ca_.Branch(tmp12, &block8, std::vector<compiler::Node*>{}, &block9, std::vector<compiler::Node*>{});
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 168});
      CodeStubAssembler(state_).FailAssert("Torque assert 'GenericMacroTest<Object>(Null) == Null' failed", pos_stack);
    }
  }

  TNode<Oddball> tmp13;
  TNode<Object> tmp14;
  TNode<Oddball> tmp15;
  TNode<BoolT> tmp16;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp13 = False_0(state_);
    tmp14 = GenericMacroTest_Object_0(state_, TNode<Object>{tmp13});
    tmp15 = False_0(state_);
    tmp16 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp14}, TNode<HeapObject>{tmp15});
    ca_.Branch(tmp16, &block10, std::vector<compiler::Node*>{}, &block11, std::vector<compiler::Node*>{});
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 169});
      CodeStubAssembler(state_).FailAssert("Torque assert 'GenericMacroTest<Object>(False) == False' failed", pos_stack);
    }
  }

  TNode<Oddball> tmp17;
  TNode<Object> tmp18;
  TNode<Oddball> tmp19;
  TNode<BoolT> tmp20;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp17 = True_0(state_);
    tmp18 = GenericMacroTest_Object_0(state_, TNode<Object>{tmp17});
    tmp19 = True_0(state_);
    tmp20 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp18}, TNode<HeapObject>{tmp19});
    ca_.Branch(tmp20, &block12, std::vector<compiler::Node*>{}, &block13, std::vector<compiler::Node*>{});
  }

  if (block13.is_used()) {
    ca_.Bind(&block13);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 170});
      CodeStubAssembler(state_).FailAssert("Torque assert 'GenericMacroTest<Object>(True) == True' failed", pos_stack);
    }
  }

  TNode<Smi> tmp21;
  TNode<Object> tmp22;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp21 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    compiler::CodeAssemblerLabel label23(&ca_);
    tmp22 = GenericMacroTestWithLabels_Smi_0(state_, TNode<Smi>{tmp21}, &label23);
    ca_.Goto(&block16);
    if (label23.is_used()) {
      ca_.Bind(&label23);
      ca_.Goto(&block17);
    }
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    ca_.Goto(&block3);
  }

  TNode<Oddball> tmp24;
  TNode<BoolT> tmp25;
  if (block16.is_used()) {
    ca_.Bind(&block16);
    tmp24 = Undefined_0(state_);
    tmp25 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp22}, TNode<HeapObject>{tmp24});
    ca_.Branch(tmp25, &block14, std::vector<compiler::Node*>{}, &block15, std::vector<compiler::Node*>{});
  }

  if (block15.is_used()) {
    ca_.Bind(&block15);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 171});
      CodeStubAssembler(state_).FailAssert("Torque assert '(GenericMacroTestWithLabels<Smi>(0) otherwise Fail) == Undefined' failed", pos_stack);
    }
  }

  TNode<Smi> tmp26;
  TNode<Object> tmp27;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp26 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    compiler::CodeAssemblerLabel label28(&ca_);
    tmp27 = GenericMacroTestWithLabels_Smi_0(state_, TNode<Smi>{tmp26}, &label28);
    ca_.Goto(&block20);
    if (label28.is_used()) {
      ca_.Bind(&label28);
      ca_.Goto(&block21);
    }
  }

  if (block21.is_used()) {
    ca_.Bind(&block21);
    ca_.Goto(&block3);
  }

  TNode<Oddball> tmp29;
  TNode<BoolT> tmp30;
  if (block20.is_used()) {
    ca_.Bind(&block20);
    tmp29 = Undefined_0(state_);
    tmp30 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp27}, TNode<HeapObject>{tmp29});
    ca_.Branch(tmp30, &block18, std::vector<compiler::Node*>{}, &block19, std::vector<compiler::Node*>{});
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 172});
      CodeStubAssembler(state_).FailAssert("Torque assert '(GenericMacroTestWithLabels<Smi>(0) otherwise Fail) == Undefined' failed", pos_stack);
    }
  }

  TNode<Oddball> tmp31;
  TNode<Object> tmp32;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp31 = False_0(state_);
    compiler::CodeAssemblerLabel label33(&ca_);
    tmp32 = GenericMacroTestWithLabels_Object_0(state_, TNode<Object>{tmp31}, &label33);
    ca_.Goto(&block24);
    if (label33.is_used()) {
      ca_.Bind(&label33);
      ca_.Goto(&block25);
    }
  }

  if (block25.is_used()) {
    ca_.Bind(&block25);
    ca_.Goto(&block22);
  }

  if (block24.is_used()) {
    ca_.Bind(&block24);
    ca_.Goto(&block22);
  }

  if (block22.is_used()) {
    ca_.Bind(&block22);
    ca_.Goto(&block26);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block26);
}

TF_BUILTIN(TestHelperPlus1, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Smi> parameter0 = UncheckedParameter<Smi>(Descriptor::kX);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp1 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{parameter0}, TNode<Smi>{tmp0});
    CodeStubAssembler(state_).Return(tmp1);
  }
}

TF_BUILTIN(TestHelperPlus2, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Smi> parameter0 = UncheckedParameter<Smi>(Descriptor::kX);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp1 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{parameter0}, TNode<Smi>{tmp0});
    CodeStubAssembler(state_).Return(tmp1);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=188&c=1
TNode<Oddball> TestFunctionPointers_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<Smi> tmp1;
  TNode<Smi> tmp2;
  TNode<BoolT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2aull));
tmp1 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(10)).descriptor(), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kTestHelperPlus1)), TNode<Object>(), tmp0));
    tmp2 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2bull));
    tmp3 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp1}, TNode<Smi>{tmp2});
    ca_.Branch(tmp3, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 191});
      CodeStubAssembler(state_).FailAssert("Torque assert 'fptr(42) == 43' failed", pos_stack);
    }
  }

  TNode<Smi> tmp4;
  TNode<Smi> tmp5;
  TNode<Smi> tmp6;
  TNode<BoolT> tmp7;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp4 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2aull));
tmp5 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(10)).descriptor(), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kTestHelperPlus2)), TNode<Object>(), tmp4));
    tmp6 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2cull));
    tmp7 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp5}, TNode<Smi>{tmp6});
    ca_.Branch(tmp7, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 193});
      CodeStubAssembler(state_).FailAssert("Torque assert 'fptr(42) == 44' failed", pos_stack);
    }
  }

  TNode<Oddball> tmp8;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp8 = True_0(state_);
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<Oddball>{tmp8};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=197&c=1
TNode<Oddball> TestVariableRedeclaration_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_bool_constexpr_bool_0(state_, (CodeStubAssembler(state_).ConstexprIntegerLiteralEqual(IntegerLiteral(false, 0x2aull), IntegerLiteral(false, 0x0ull))));
    ca_.Branch(tmp0, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<Int32T> tmp1;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp1 = FromConstexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block4, tmp1);
  }

  TNode<Int32T> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp2 = FromConstexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    ca_.Goto(&block4, tmp2);
  }

  TNode<Int32T> phi_bb4_1;
  TNode<BoolT> tmp3;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_1);
    tmp3 = FromConstexpr_bool_constexpr_bool_0(state_, (CodeStubAssembler(state_).ConstexprIntegerLiteralEqual(IntegerLiteral(false, 0x2aull), IntegerLiteral(false, 0x0ull))));
    ca_.Branch(tmp3, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<Int32T> tmp4;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp4 = FromConstexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    ca_.Goto(&block8, tmp4);
  }

  TNode<Int32T> tmp5;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp5 = FromConstexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block8, tmp5);
  }

  TNode<Int32T> phi_bb8_2;
  TNode<Oddball> tmp6;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_2);
    tmp6 = True_0(state_);
    ca_.Goto(&block10);
  }

    ca_.Bind(&block10);
  return TNode<Oddball>{tmp6};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=204&c=1
TNode<Smi> TestTernaryOperator_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_x) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{p_x}, TNode<Smi>{tmp0});
    ca_.Branch(tmp1, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp2;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp2 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block4, tmp2);
  }

  TNode<BoolT> tmp3;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp3 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block4, tmp3);
  }

  TNode<BoolT> phi_bb4_1;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_1);
    ca_.Branch(phi_bb4_1, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<Smi> tmp4;
  TNode<Smi> tmp5;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp4 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xaull));
    tmp5 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{p_x}, TNode<Smi>{tmp4});
    ca_.Goto(&block8, tmp5);
  }

  TNode<Smi> tmp6;
  TNode<Smi> tmp7;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp6 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x64ull));
    tmp7 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{p_x}, TNode<Smi>{tmp6});
    ca_.Goto(&block8, tmp7);
  }

  TNode<Smi> phi_bb8_2;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_2);
    ca_.Goto(&block10);
  }

    ca_.Bind(&block10);
  return TNode<Smi>{phi_bb8_2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=210&c=1
void TestFunctionPointerToGeneric_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<Object> tmp1;
  TNode<Oddball> tmp2;
  TNode<BoolT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
tmp1 = CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(11)).descriptor(), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kGenericBuiltinTest_Smi_0)), TNode<Object>(), tmp0);
    tmp2 = Null_0(state_);
    tmp3 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp1}, TNode<HeapObject>{tmp2});
    ca_.Branch(tmp3, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 215});
      CodeStubAssembler(state_).FailAssert("Torque assert 'fptr1(0) == Null' failed", pos_stack);
    }
  }

  TNode<Smi> tmp4;
  TNode<Object> tmp5;
  TNode<Oddball> tmp6;
  TNode<BoolT> tmp7;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp4 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
tmp5 = CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(11)).descriptor(), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kGenericBuiltinTest_Smi_0)), TNode<Object>(), tmp4);
    tmp6 = Null_0(state_);
    tmp7 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp5}, TNode<HeapObject>{tmp6});
    ca_.Branch(tmp7, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 216});
      CodeStubAssembler(state_).FailAssert("Torque assert 'fptr1(1) == Null' failed", pos_stack);
    }
  }

  TNode<Oddball> tmp8;
  TNode<Object> tmp9;
  TNode<Oddball> tmp10;
  TNode<BoolT> tmp11;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp8 = Undefined_0(state_);
tmp9 = CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(12)).descriptor(), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kGenericBuiltinTest_JSAny_0)), TNode<Object>(), tmp8);
    tmp10 = Undefined_0(state_);
    tmp11 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp9}, TNode<HeapObject>{tmp10});
    ca_.Branch(tmp11, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 217});
      CodeStubAssembler(state_).FailAssert("Torque assert 'fptr2(Undefined) == Undefined' failed", pos_stack);
    }
  }

  TNode<Oddball> tmp12;
  TNode<Object> tmp13;
  TNode<Oddball> tmp14;
  TNode<BoolT> tmp15;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp12 = Undefined_0(state_);
tmp13 = CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(12)).descriptor(), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kGenericBuiltinTest_JSAny_0)), TNode<Object>(), tmp12);
    tmp14 = Undefined_0(state_);
    tmp15 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp13}, TNode<HeapObject>{tmp14});
    ca_.Branch(tmp15, &block8, std::vector<compiler::Node*>{}, &block9, std::vector<compiler::Node*>{});
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 218});
      CodeStubAssembler(state_).FailAssert("Torque assert 'fptr2(Undefined) == Undefined' failed", pos_stack);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block10);
  }

    ca_.Bind(&block10);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=222&c=1
TNode<BuiltinPtr> TestTypeAlias_0(compiler::CodeAssemblerState* state_, TNode<BuiltinPtr> p_x) {
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
  return TNode<BuiltinPtr>{p_x};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=227&c=1
TNode<Oddball> TestUnsafeCast_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Number> p_n) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).TaggedIsSmi(TNode<Object>{p_n});
    ca_.Branch(tmp0, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<Smi> tmp1;
  TNode<Smi> tmp2;
  TNode<Smi> tmp3;
  TNode<BoolT> tmp4;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp1 = UnsafeCast_Smi_0(state_, TNode<Context>{p_context}, TNode<Object>{p_n});
    tmp2 = ca_.CallStub<Smi>(Builtins::CallableFor(ca_.isolate(), Builtin::kTestHelperPlus1), TNode<Object>(), tmp1);
    tmp3 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xbull));
    tmp4 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp2}, TNode<Smi>{tmp3});
    ca_.Branch(tmp4, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 232});
      CodeStubAssembler(state_).FailAssert("Torque assert 'TestHelperPlus1(m) == 11' failed", pos_stack);
    }
  }

  TNode<Oddball> tmp5;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp5 = True_0(state_);
    ca_.Goto(&block1, tmp5);
  }

  TNode<Oddball> tmp6;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp6 = False_0(state_);
    ca_.Goto(&block1, tmp6);
  }

  TNode<Oddball> phi_bb1_2;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_2);
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<Oddball>{phi_bb1_2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=238&c=1
void TestHexLiteral_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<BoolT> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Convert_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xffffull));
    tmp1 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp2 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp1});
    tmp3 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x10000ull));
    tmp4 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp3});
    ca_.Branch(tmp4, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 240});
      CodeStubAssembler(state_).FailAssert("Torque assert 'Convert<intptr>(0xffff) + 1 == 0x10000' failed", pos_stack);
    }
  }

  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<BoolT> tmp7;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp5 = Convert_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0xffffull));
    tmp6 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0xffffull));
    tmp7 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp5}, TNode<IntPtrT>{tmp6});
    ca_.Branch(tmp7, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 241});
      CodeStubAssembler(state_).FailAssert("Torque assert 'Convert<intptr>(-0xffff) == -65535' failed", pos_stack);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=244&c=1
void TestLargeIntegerLiterals_0(compiler::CodeAssemblerState* state_, TNode<Context> p_c) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Int32T> tmp0;
  TNode<Int32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x40000000ull));
    tmp1 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x7fffffffull));
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=250&c=1
void TestMultilineAssert_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<Smi> tmp1;
  TNode<BoolT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp1 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp2 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp0}, TNode<Smi>{tmp1});
    ca_.Branch(tmp2, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  TNode<Smi> tmp3;
  TNode<BoolT> tmp4;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp3 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xaull));
    tmp4 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp0}, TNode<Smi>{tmp3});
    ca_.Goto(&block6, tmp4);
  }

  TNode<BoolT> tmp5;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp5 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block6, tmp5);
  }

  TNode<BoolT> phi_bb6_2;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_2);
    ca_.Branch(phi_bb6_2, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 253});
      CodeStubAssembler(state_).FailAssert("Torque assert 'someVeryLongVariableNameThatWillCauseLineBreaks > 0 && someVeryLongVariableNameThatWillCauseLineBreaks < 10' failed", pos_stack);
    }
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(&block7);
  }

    ca_.Bind(&block7);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=258&c=1
void TestNewlineInString_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    CodeStubAssembler(state_).Print("Hello, World!\n");
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=263&c=1
int31_t kConstexprConst_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  return (FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull)));}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=264&c=1
TNode<IntPtrT> kIntptrConst_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  TNode<IntPtrT> tmp0;
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x4ull));
  return TNode<IntPtrT>{tmp0};}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=265&c=1
TNode<Smi> kSmiConst_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  TNode<Smi> tmp0;
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
  return TNode<Smi>{tmp0};}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=267&c=1
void TestModuleConstBindings_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Int32T> tmp0;
  TNode<Int32T> tmp1;
  TNode<BoolT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Int32Constant_0(state_, IntegerLiteral(false, 0x5ull));
    tmp1 = FromConstexpr_int32_constexpr_int31_0(state_, kConstexprConst_0(state_));
    tmp2 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp1}, TNode<Int32T>{tmp0});
    ca_.Branch(tmp2, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 269});
      CodeStubAssembler(state_).FailAssert("Torque assert 'kConstexprConst == Int32Constant(5)' failed", pos_stack);
    }
  }

  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp3 = kIntptrConst_0(state_);
    tmp4 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x4ull));
    tmp5 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp4});
    ca_.Branch(tmp5, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 270});
      CodeStubAssembler(state_).FailAssert("Torque assert 'kIntptrConst == 4' failed", pos_stack);
    }
  }

  TNode<Smi> tmp6;
  TNode<Smi> tmp7;
  TNode<BoolT> tmp8;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp6 = kSmiConst_0(state_);
    tmp7 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp8 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp6}, TNode<Smi>{tmp7});
    ca_.Branch(tmp8, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 271});
      CodeStubAssembler(state_).FailAssert("Torque assert 'kSmiConst == 3' failed", pos_stack);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block8);
  }

    ca_.Bind(&block8);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=274&c=1
void TestLocalConstBindings_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<Smi> tmp1;
  TNode<Smi> tmp2;
  TNode<Smi> tmp3;
  TNode<Smi> tmp4;
  TNode<Smi> tmp5;
  TNode<BoolT> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_int31_0(state_, (FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull))));
    tmp1 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp2 = FromConstexpr_Smi_constexpr_int31_0(state_, (FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull))));
    tmp3 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp2}, TNode<Smi>{tmp1});
    tmp4 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp5 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp0}, TNode<Smi>{tmp4});
    tmp6 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp3}, TNode<Smi>{tmp5});
    ca_.Branch(tmp6, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 280});
      CodeStubAssembler(state_).FailAssert("Torque assert 'x == xSmi + 1' failed", pos_stack);
    }
  }

  TNode<BoolT> tmp7;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp7 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp3}, TNode<Smi>{tmp3});
    ca_.Branch(tmp7, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 282});
      CodeStubAssembler(state_).FailAssert("Torque assert 'x == xSmi' failed", pos_stack);
    }
  }

  TNode<Smi> tmp8;
  TNode<BoolT> tmp9;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp8 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x4ull));
    tmp9 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp3}, TNode<Smi>{tmp8});
    ca_.Branch(tmp9, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 283});
      CodeStubAssembler(state_).FailAssert("Torque assert 'x == 4' failed", pos_stack);
    }
  }

  TNode<Smi> tmp10;
  TNode<BoolT> tmp11;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp10 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp11 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp0}, TNode<Smi>{tmp10});
    ca_.Branch(tmp11, &block8, std::vector<compiler::Node*>{}, &block9, std::vector<compiler::Node*>{});
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 285});
      CodeStubAssembler(state_).FailAssert("Torque assert 'xSmi == 3' failed", pos_stack);
    }
  }

  TNode<Smi> tmp12;
  TNode<BoolT> tmp13;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp12 = FromConstexpr_Smi_constexpr_int31_0(state_, (FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull))));
    tmp13 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp12}, TNode<Smi>{tmp0});
    ca_.Branch(tmp13, &block10, std::vector<compiler::Node*>{}, &block11, std::vector<compiler::Node*>{});
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 286});
      CodeStubAssembler(state_).FailAssert("Torque assert 'x == xSmi' failed", pos_stack);
    }
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    ca_.Goto(&block12);
  }

    ca_.Bind(&block12);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=300&c=1
TNode<Smi> TestStruct1_0(compiler::CodeAssemblerState* state_, TorqueStructTestStructA_0 p_i) {
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
  return TNode<Smi>{p_i.i};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=305&c=1
TorqueStructTestStructA_0 TestStruct2_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<FixedArray> tmp0;
  TNode<FixedArray> tmp1;
  TNode<Smi> tmp2;
  TNode<Number> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = kEmptyFixedArray_0(state_);
    tmp1 = UnsafeCast_FixedArray_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp0});
    tmp2 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1bull));
    tmp3 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1full));
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructTestStructA_0{TNode<FixedArray>{tmp1}, TNode<Smi>{tmp2}, TNode<Number>{tmp3}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=314&c=1
TorqueStructTestStructA_0 TestStruct3_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<FixedArray> tmp0;
  TNode<FixedArray> tmp1;
  TNode<Smi> tmp2;
  TNode<Number> tmp3;
  TNode<FixedArray> tmp4;
  TNode<Smi> tmp5;
  TNode<Number> tmp6;
  TNode<Smi> tmp7;
  TNode<Smi> tmp8;
  TNode<FixedArray> tmp9;
  TNode<FixedArray> tmp10;
  TNode<Smi> tmp11;
  TNode<Number> tmp12;
  TNode<FixedArray> tmp13;
  TNode<Smi> tmp14;
  TNode<Number> tmp15;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = kEmptyFixedArray_0(state_);
    tmp1 = UnsafeCast_FixedArray_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp0});
    tmp2 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xdull));
    tmp3 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    std::tie(tmp4, tmp5, tmp6) = TestStruct2_0(state_, TNode<Context>{p_context}).Flatten();
    tmp7 = TestStruct1_0(state_, TorqueStructTestStructA_0{TNode<FixedArray>{tmp4}, TNode<Smi>{tmp5}, TNode<Number>{tmp6}});
    tmp8 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x7ull));
    tmp9 = kEmptyFixedArray_0(state_);
    tmp10 = UnsafeCast_FixedArray_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp9});
    tmp11 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1bull));
    tmp12 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1full));
    std::tie(tmp13, tmp14, tmp15) = TestStruct2_0(state_, TNode<Context>{p_context}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructTestStructA_0{TNode<FixedArray>{tmp1}, TNode<Smi>{tmp7}, TNode<Number>{tmp7}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=340&c=1
TorqueStructTestStructC_0 TestStruct4_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<FixedArray> tmp0;
  TNode<Smi> tmp1;
  TNode<Number> tmp2;
  TNode<FixedArray> tmp3;
  TNode<Smi> tmp4;
  TNode<Number> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = TestStruct2_0(state_, TNode<Context>{p_context}).Flatten();
    std::tie(tmp3, tmp4, tmp5) = TestStruct2_0(state_, TNode<Context>{p_context}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructTestStructC_0{TorqueStructTestStructA_0{TNode<FixedArray>{tmp0}, TNode<Smi>{tmp1}, TNode<Number>{tmp2}}, TorqueStructTestStructA_0{TNode<FixedArray>{tmp3}, TNode<Smi>{tmp4}, TNode<Number>{tmp5}}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=349&c=1
void CallTestStructInLabel_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<FixedArray> tmp0;
  TNode<Smi> tmp1;
  TNode<Number> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = TestStruct2_0(state_, TNode<Context>{p_context}).Flatten();
    ca_.Goto(&block4);
  }

    ca_.Bind(&block4);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=358&c=1
void TestForLoop_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block18(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block26(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block33(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block41(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block49(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block56(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block63(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block66(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block65(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block69(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block70(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block71(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block72(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block73(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block75(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block74(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block80(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block81(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block82(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block84(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block83(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block76(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block87(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block85(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block86(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block89(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block4, tmp0, tmp1);
  }

  TNode<Smi> phi_bb4_0;
  TNode<Smi> phi_bb4_1;
  TNode<Smi> tmp2;
  TNode<BoolT> tmp3;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_0, &phi_bb4_1);
    tmp2 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp3 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb4_1}, TNode<Smi>{tmp2});
    ca_.Branch(tmp3, &block2, std::vector<compiler::Node*>{phi_bb4_0, phi_bb4_1}, &block3, std::vector<compiler::Node*>{phi_bb4_0, phi_bb4_1});
  }

  TNode<Smi> phi_bb2_0;
  TNode<Smi> phi_bb2_1;
  TNode<Smi> tmp4;
  TNode<Smi> tmp5;
  TNode<Smi> tmp6;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_0, &phi_bb2_1);
    tmp4 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb2_0}, TNode<Smi>{phi_bb2_1});
    tmp5 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp6 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb2_1}, TNode<Smi>{tmp5});
    ca_.Goto(&block4, tmp4, tmp6);
  }

  TNode<Smi> phi_bb3_0;
  TNode<Smi> phi_bb3_1;
  TNode<Smi> tmp7;
  TNode<BoolT> tmp8;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_0, &phi_bb3_1);
    tmp7 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xaull));
    tmp8 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{phi_bb3_0}, TNode<Smi>{tmp7});
    ca_.Branch(tmp8, &block6, std::vector<compiler::Node*>{phi_bb3_0}, &block7, std::vector<compiler::Node*>{phi_bb3_0});
  }

  TNode<Smi> phi_bb7_0;
  if (block7.is_used()) {
    ca_.Bind(&block7, &phi_bb7_0);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 362});
      CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 10' failed", pos_stack);
    }
  }

  TNode<Smi> phi_bb6_0;
  TNode<Smi> tmp9;
  TNode<Smi> tmp10;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_0);
    tmp9 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp10 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block10, tmp9, tmp10);
  }

  TNode<Smi> phi_bb10_0;
  TNode<Smi> phi_bb10_1;
  TNode<Smi> tmp11;
  TNode<BoolT> tmp12;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_0, &phi_bb10_1);
    tmp11 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp12 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb10_1}, TNode<Smi>{tmp11});
    ca_.Branch(tmp12, &block8, std::vector<compiler::Node*>{phi_bb10_0, phi_bb10_1}, &block9, std::vector<compiler::Node*>{phi_bb10_0, phi_bb10_1});
  }

  TNode<Smi> phi_bb8_0;
  TNode<Smi> phi_bb8_1;
  TNode<Smi> tmp13;
  TNode<Smi> tmp14;
  TNode<Smi> tmp15;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_0, &phi_bb8_1);
    tmp13 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb8_0}, TNode<Smi>{phi_bb8_1});
    tmp14 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp15 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb8_1}, TNode<Smi>{tmp14});
    ca_.Goto(&block10, tmp13, tmp15);
  }

  TNode<Smi> phi_bb9_0;
  TNode<Smi> phi_bb9_1;
  TNode<Smi> tmp16;
  TNode<BoolT> tmp17;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_0, &phi_bb9_1);
    tmp16 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xaull));
    tmp17 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{phi_bb9_0}, TNode<Smi>{tmp16});
    ca_.Branch(tmp17, &block12, std::vector<compiler::Node*>{phi_bb9_0, phi_bb9_1}, &block13, std::vector<compiler::Node*>{phi_bb9_0, phi_bb9_1});
  }

  TNode<Smi> phi_bb13_0;
  TNode<Smi> phi_bb13_1;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_0, &phi_bb13_1);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 367});
      CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 10' failed", pos_stack);
    }
  }

  TNode<Smi> phi_bb12_0;
  TNode<Smi> phi_bb12_1;
  TNode<Smi> tmp18;
  TNode<Smi> tmp19;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_0, &phi_bb12_1);
    tmp18 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp19 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block16, tmp18, tmp19);
  }

  TNode<Smi> phi_bb16_0;
  TNode<Smi> phi_bb16_1;
  TNode<Smi> tmp20;
  TNode<BoolT> tmp21;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_0, &phi_bb16_1);
    tmp20 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp21 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb16_1}, TNode<Smi>{tmp20});
    ca_.Branch(tmp21, &block14, std::vector<compiler::Node*>{phi_bb16_0, phi_bb16_1}, &block15, std::vector<compiler::Node*>{phi_bb16_0, phi_bb16_1});
  }

  TNode<Smi> phi_bb14_0;
  TNode<Smi> phi_bb14_1;
  TNode<Smi> tmp22;
  TNode<Smi> tmp23;
  TNode<Smi> tmp24;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_0, &phi_bb14_1);
    tmp22 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp23 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb14_1}, TNode<Smi>{tmp22});
    tmp24 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb14_0}, TNode<Smi>{phi_bb14_1});
    ca_.Goto(&block16, tmp24, tmp23);
  }

  TNode<Smi> phi_bb15_0;
  TNode<Smi> phi_bb15_1;
  TNode<Smi> tmp25;
  TNode<BoolT> tmp26;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_0, &phi_bb15_1);
    tmp25 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xaull));
    tmp26 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{phi_bb15_0}, TNode<Smi>{tmp25});
    ca_.Branch(tmp26, &block17, std::vector<compiler::Node*>{phi_bb15_0, phi_bb15_1}, &block18, std::vector<compiler::Node*>{phi_bb15_0, phi_bb15_1});
  }

  TNode<Smi> phi_bb18_0;
  TNode<Smi> phi_bb18_1;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_0, &phi_bb18_1);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 372});
      CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 10' failed", pos_stack);
    }
  }

  TNode<Smi> phi_bb17_0;
  TNode<Smi> phi_bb17_1;
  TNode<Smi> tmp27;
  TNode<Smi> tmp28;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_0, &phi_bb17_1);
    tmp27 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp28 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block21, tmp27, phi_bb17_1, tmp28);
  }

  TNode<Smi> phi_bb21_0;
  TNode<Smi> phi_bb21_1;
  TNode<Smi> phi_bb21_2;
  TNode<Smi> tmp29;
  TNode<BoolT> tmp30;
  if (block21.is_used()) {
    ca_.Bind(&block21, &phi_bb21_0, &phi_bb21_1, &phi_bb21_2);
    tmp29 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp30 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{phi_bb21_2}, TNode<Smi>{tmp29});
    ca_.Branch(tmp30, &block23, std::vector<compiler::Node*>{phi_bb21_0, phi_bb21_1, phi_bb21_2}, &block24, std::vector<compiler::Node*>{phi_bb21_0, phi_bb21_1, phi_bb21_2});
  }

  TNode<Smi> phi_bb23_0;
  TNode<Smi> phi_bb23_1;
  TNode<Smi> phi_bb23_2;
  TNode<Smi> tmp31;
  TNode<BoolT> tmp32;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_0, &phi_bb23_1, &phi_bb23_2);
    tmp31 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xaull));
    tmp32 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{phi_bb23_0}, TNode<Smi>{tmp31});
    ca_.Branch(tmp32, &block25, std::vector<compiler::Node*>{phi_bb23_0, phi_bb23_1}, &block26, std::vector<compiler::Node*>{phi_bb23_0, phi_bb23_1});
  }

  TNode<Smi> phi_bb24_0;
  TNode<Smi> phi_bb24_1;
  TNode<Smi> phi_bb24_2;
  TNode<Smi> tmp33;
  TNode<Smi> tmp34;
  TNode<Smi> tmp35;
  if (block24.is_used()) {
    ca_.Bind(&block24, &phi_bb24_0, &phi_bb24_1, &phi_bb24_2);
    tmp33 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb24_0}, TNode<Smi>{phi_bb24_2});
    tmp34 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp35 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb24_2}, TNode<Smi>{tmp34});
    ca_.Goto(&block21, tmp33, phi_bb24_1, tmp35);
  }

  TNode<Smi> phi_bb26_0;
  TNode<Smi> phi_bb26_1;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_0, &phi_bb26_1);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 380});
      CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 10' failed", pos_stack);
    }
  }

  TNode<Smi> phi_bb25_0;
  TNode<Smi> phi_bb25_1;
  TNode<Smi> tmp36;
  TNode<Smi> tmp37;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_0, &phi_bb25_1);
    tmp36 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp37 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block29, tmp36, tmp37);
  }

  TNode<Smi> phi_bb29_0;
  TNode<Smi> phi_bb29_1;
  TNode<Smi> tmp38;
  TNode<BoolT> tmp39;
  if (block29.is_used()) {
    ca_.Bind(&block29, &phi_bb29_0, &phi_bb29_1);
    tmp38 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp39 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{phi_bb29_1}, TNode<Smi>{tmp38});
    ca_.Branch(tmp39, &block30, std::vector<compiler::Node*>{phi_bb29_0, phi_bb29_1}, &block31, std::vector<compiler::Node*>{phi_bb29_0, phi_bb29_1});
  }

  TNode<Smi> phi_bb30_0;
  TNode<Smi> phi_bb30_1;
  TNode<Smi> tmp40;
  TNode<BoolT> tmp41;
  if (block30.is_used()) {
    ca_.Bind(&block30, &phi_bb30_0, &phi_bb30_1);
    tmp40 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xaull));
    tmp41 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{phi_bb30_0}, TNode<Smi>{tmp40});
    ca_.Branch(tmp41, &block32, std::vector<compiler::Node*>{phi_bb30_0, phi_bb30_1}, &block33, std::vector<compiler::Node*>{phi_bb30_0, phi_bb30_1});
  }

  TNode<Smi> phi_bb31_0;
  TNode<Smi> phi_bb31_1;
  TNode<Smi> tmp42;
  TNode<Smi> tmp43;
  TNode<Smi> tmp44;
  if (block31.is_used()) {
    ca_.Bind(&block31, &phi_bb31_0, &phi_bb31_1);
    tmp42 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb31_0}, TNode<Smi>{phi_bb31_1});
    tmp43 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp44 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb31_1}, TNode<Smi>{tmp43});
    ca_.Goto(&block29, tmp42, tmp44);
  }

  TNode<Smi> phi_bb33_0;
  TNode<Smi> phi_bb33_1;
  if (block33.is_used()) {
    ca_.Bind(&block33, &phi_bb33_0, &phi_bb33_1);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 389});
      CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 10' failed", pos_stack);
    }
  }

  TNode<Smi> phi_bb32_0;
  TNode<Smi> phi_bb32_1;
  TNode<Smi> tmp45;
  TNode<Smi> tmp46;
  if (block32.is_used()) {
    ca_.Bind(&block32, &phi_bb32_0, &phi_bb32_1);
    tmp45 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp46 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block36, tmp45, phi_bb32_1, tmp46);
  }

  TNode<Smi> phi_bb36_0;
  TNode<Smi> phi_bb36_1;
  TNode<Smi> phi_bb36_2;
  TNode<Smi> tmp47;
  TNode<BoolT> tmp48;
  if (block36.is_used()) {
    ca_.Bind(&block36, &phi_bb36_0, &phi_bb36_1, &phi_bb36_2);
    tmp47 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp48 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb36_2}, TNode<Smi>{tmp47});
    ca_.Branch(tmp48, &block34, std::vector<compiler::Node*>{phi_bb36_0, phi_bb36_1, phi_bb36_2}, &block35, std::vector<compiler::Node*>{phi_bb36_0, phi_bb36_1, phi_bb36_2});
  }

  TNode<Smi> phi_bb34_0;
  TNode<Smi> phi_bb34_1;
  TNode<Smi> phi_bb34_2;
  TNode<Smi> tmp49;
  TNode<BoolT> tmp50;
  if (block34.is_used()) {
    ca_.Bind(&block34, &phi_bb34_0, &phi_bb34_1, &phi_bb34_2);
    tmp49 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp50 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{phi_bb34_2}, TNode<Smi>{tmp49});
    ca_.Branch(tmp50, &block38, std::vector<compiler::Node*>{phi_bb34_0, phi_bb34_1, phi_bb34_2}, &block39, std::vector<compiler::Node*>{phi_bb34_0, phi_bb34_1, phi_bb34_2});
  }

  TNode<Smi> phi_bb38_0;
  TNode<Smi> phi_bb38_1;
  TNode<Smi> phi_bb38_2;
  if (block38.is_used()) {
    ca_.Bind(&block38, &phi_bb38_0, &phi_bb38_1, &phi_bb38_2);
    ca_.Goto(&block37, phi_bb38_0, phi_bb38_1, phi_bb38_2);
  }

  TNode<Smi> phi_bb39_0;
  TNode<Smi> phi_bb39_1;
  TNode<Smi> phi_bb39_2;
  TNode<Smi> tmp51;
  if (block39.is_used()) {
    ca_.Bind(&block39, &phi_bb39_0, &phi_bb39_1, &phi_bb39_2);
    tmp51 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb39_0}, TNode<Smi>{phi_bb39_2});
    ca_.Goto(&block37, tmp51, phi_bb39_1, phi_bb39_2);
  }

  TNode<Smi> phi_bb37_0;
  TNode<Smi> phi_bb37_1;
  TNode<Smi> phi_bb37_2;
  TNode<Smi> tmp52;
  TNode<Smi> tmp53;
  if (block37.is_used()) {
    ca_.Bind(&block37, &phi_bb37_0, &phi_bb37_1, &phi_bb37_2);
    tmp52 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp53 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb37_2}, TNode<Smi>{tmp52});
    ca_.Goto(&block36, phi_bb37_0, phi_bb37_1, tmp53);
  }

  TNode<Smi> phi_bb35_0;
  TNode<Smi> phi_bb35_1;
  TNode<Smi> phi_bb35_2;
  TNode<Smi> tmp54;
  TNode<BoolT> tmp55;
  if (block35.is_used()) {
    ca_.Bind(&block35, &phi_bb35_0, &phi_bb35_1, &phi_bb35_2);
    tmp54 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x7ull));
    tmp55 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{phi_bb35_0}, TNode<Smi>{tmp54});
    ca_.Branch(tmp55, &block40, std::vector<compiler::Node*>{phi_bb35_0, phi_bb35_1}, &block41, std::vector<compiler::Node*>{phi_bb35_0, phi_bb35_1});
  }

  TNode<Smi> phi_bb41_0;
  TNode<Smi> phi_bb41_1;
  if (block41.is_used()) {
    ca_.Bind(&block41, &phi_bb41_0, &phi_bb41_1);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 398});
      CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 7' failed", pos_stack);
    }
  }

  TNode<Smi> phi_bb40_0;
  TNode<Smi> phi_bb40_1;
  TNode<Smi> tmp56;
  TNode<Smi> tmp57;
  if (block40.is_used()) {
    ca_.Bind(&block40, &phi_bb40_0, &phi_bb40_1);
    tmp56 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp57 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block44, tmp56, tmp57);
  }

  TNode<Smi> phi_bb44_0;
  TNode<Smi> phi_bb44_1;
  TNode<Smi> tmp58;
  TNode<BoolT> tmp59;
  if (block44.is_used()) {
    ca_.Bind(&block44, &phi_bb44_0, &phi_bb44_1);
    tmp58 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp59 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb44_1}, TNode<Smi>{tmp58});
    ca_.Branch(tmp59, &block42, std::vector<compiler::Node*>{phi_bb44_0, phi_bb44_1}, &block43, std::vector<compiler::Node*>{phi_bb44_0, phi_bb44_1});
  }

  TNode<Smi> phi_bb42_0;
  TNode<Smi> phi_bb42_1;
  TNode<Smi> tmp60;
  TNode<BoolT> tmp61;
  if (block42.is_used()) {
    ca_.Bind(&block42, &phi_bb42_0, &phi_bb42_1);
    tmp60 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp61 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{phi_bb42_1}, TNode<Smi>{tmp60});
    ca_.Branch(tmp61, &block46, std::vector<compiler::Node*>{phi_bb42_0, phi_bb42_1}, &block47, std::vector<compiler::Node*>{phi_bb42_0, phi_bb42_1});
  }

  TNode<Smi> phi_bb46_0;
  TNode<Smi> phi_bb46_1;
  if (block46.is_used()) {
    ca_.Bind(&block46, &phi_bb46_0, &phi_bb46_1);
    ca_.Goto(&block45, phi_bb46_0, phi_bb46_1);
  }

  TNode<Smi> phi_bb47_0;
  TNode<Smi> phi_bb47_1;
  TNode<Smi> tmp62;
  if (block47.is_used()) {
    ca_.Bind(&block47, &phi_bb47_0, &phi_bb47_1);
    tmp62 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb47_0}, TNode<Smi>{phi_bb47_1});
    ca_.Goto(&block45, tmp62, phi_bb47_1);
  }

  TNode<Smi> phi_bb45_0;
  TNode<Smi> phi_bb45_1;
  TNode<Smi> tmp63;
  TNode<Smi> tmp64;
  if (block45.is_used()) {
    ca_.Bind(&block45, &phi_bb45_0, &phi_bb45_1);
    tmp63 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp64 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb45_1}, TNode<Smi>{tmp63});
    ca_.Goto(&block44, phi_bb45_0, tmp64);
  }

  TNode<Smi> phi_bb43_0;
  TNode<Smi> phi_bb43_1;
  TNode<Smi> tmp65;
  TNode<BoolT> tmp66;
  if (block43.is_used()) {
    ca_.Bind(&block43, &phi_bb43_0, &phi_bb43_1);
    tmp65 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x7ull));
    tmp66 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{phi_bb43_0}, TNode<Smi>{tmp65});
    ca_.Branch(tmp66, &block48, std::vector<compiler::Node*>{phi_bb43_0, phi_bb43_1}, &block49, std::vector<compiler::Node*>{phi_bb43_0, phi_bb43_1});
  }

  TNode<Smi> phi_bb49_0;
  TNode<Smi> phi_bb49_1;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_0, &phi_bb49_1);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 406});
      CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 7' failed", pos_stack);
    }
  }

  TNode<Smi> phi_bb48_0;
  TNode<Smi> phi_bb48_1;
  TNode<Smi> tmp67;
  TNode<Smi> tmp68;
  if (block48.is_used()) {
    ca_.Bind(&block48, &phi_bb48_0, &phi_bb48_1);
    tmp67 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp68 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block52, tmp67, tmp68);
  }

  TNode<Smi> phi_bb52_0;
  TNode<Smi> phi_bb52_1;
  TNode<Smi> tmp69;
  TNode<BoolT> tmp70;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_0, &phi_bb52_1);
    tmp69 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp70 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb52_1}, TNode<Smi>{tmp69});
    ca_.Branch(tmp70, &block50, std::vector<compiler::Node*>{phi_bb52_0, phi_bb52_1}, &block51, std::vector<compiler::Node*>{phi_bb52_0, phi_bb52_1});
  }

  TNode<Smi> phi_bb50_0;
  TNode<Smi> phi_bb50_1;
  TNode<Smi> tmp71;
  TNode<BoolT> tmp72;
  if (block50.is_used()) {
    ca_.Bind(&block50, &phi_bb50_0, &phi_bb50_1);
    tmp71 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp72 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{phi_bb50_1}, TNode<Smi>{tmp71});
    ca_.Branch(tmp72, &block53, std::vector<compiler::Node*>{phi_bb50_0, phi_bb50_1}, &block54, std::vector<compiler::Node*>{phi_bb50_0, phi_bb50_1});
  }

  TNode<Smi> phi_bb53_0;
  TNode<Smi> phi_bb53_1;
  TNode<Smi> tmp73;
  TNode<Smi> tmp74;
  if (block53.is_used()) {
    ca_.Bind(&block53, &phi_bb53_0, &phi_bb53_1);
    tmp73 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp74 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb53_1}, TNode<Smi>{tmp73});
    ca_.Goto(&block52, phi_bb53_0, tmp74);
  }

  TNode<Smi> phi_bb54_0;
  TNode<Smi> phi_bb54_1;
  TNode<Smi> tmp75;
  TNode<Smi> tmp76;
  TNode<Smi> tmp77;
  if (block54.is_used()) {
    ca_.Bind(&block54, &phi_bb54_0, &phi_bb54_1);
    tmp75 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb54_0}, TNode<Smi>{phi_bb54_1});
    tmp76 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp77 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb54_1}, TNode<Smi>{tmp76});
    ca_.Goto(&block52, tmp75, tmp77);
  }

  TNode<Smi> phi_bb51_0;
  TNode<Smi> phi_bb51_1;
  TNode<Smi> tmp78;
  TNode<BoolT> tmp79;
  if (block51.is_used()) {
    ca_.Bind(&block51, &phi_bb51_0, &phi_bb51_1);
    tmp78 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x7ull));
    tmp79 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{phi_bb51_0}, TNode<Smi>{tmp78});
    ca_.Branch(tmp79, &block55, std::vector<compiler::Node*>{phi_bb51_0, phi_bb51_1}, &block56, std::vector<compiler::Node*>{phi_bb51_0, phi_bb51_1});
  }

  TNode<Smi> phi_bb56_0;
  TNode<Smi> phi_bb56_1;
  if (block56.is_used()) {
    ca_.Bind(&block56, &phi_bb56_0, &phi_bb56_1);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 418});
      CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 7' failed", pos_stack);
    }
  }

  TNode<Smi> phi_bb55_0;
  TNode<Smi> phi_bb55_1;
  TNode<Smi> tmp80;
  TNode<Smi> tmp81;
  if (block55.is_used()) {
    ca_.Bind(&block55, &phi_bb55_0, &phi_bb55_1);
    tmp80 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp81 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block59, tmp80, phi_bb55_1, tmp81);
  }

  TNode<Smi> phi_bb59_0;
  TNode<Smi> phi_bb59_1;
  TNode<Smi> phi_bb59_2;
  TNode<Smi> tmp82;
  TNode<BoolT> tmp83;
  if (block59.is_used()) {
    ca_.Bind(&block59, &phi_bb59_0, &phi_bb59_1, &phi_bb59_2);
    tmp82 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp83 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{phi_bb59_2}, TNode<Smi>{tmp82});
    ca_.Branch(tmp83, &block61, std::vector<compiler::Node*>{phi_bb59_0, phi_bb59_1, phi_bb59_2}, &block62, std::vector<compiler::Node*>{phi_bb59_0, phi_bb59_1, phi_bb59_2});
  }

  TNode<Smi> phi_bb61_0;
  TNode<Smi> phi_bb61_1;
  TNode<Smi> phi_bb61_2;
  if (block61.is_used()) {
    ca_.Bind(&block61, &phi_bb61_0, &phi_bb61_1, &phi_bb61_2);
    ca_.Goto(&block60, phi_bb61_0, phi_bb61_1, phi_bb61_2);
  }

  TNode<Smi> phi_bb62_0;
  TNode<Smi> phi_bb62_1;
  TNode<Smi> phi_bb62_2;
  TNode<Smi> tmp84;
  TNode<BoolT> tmp85;
  if (block62.is_used()) {
    ca_.Bind(&block62, &phi_bb62_0, &phi_bb62_1, &phi_bb62_2);
    tmp84 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp85 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{phi_bb62_2}, TNode<Smi>{tmp84});
    ca_.Branch(tmp85, &block63, std::vector<compiler::Node*>{phi_bb62_0, phi_bb62_1, phi_bb62_2}, &block64, std::vector<compiler::Node*>{phi_bb62_0, phi_bb62_1, phi_bb62_2});
  }

  TNode<Smi> phi_bb63_0;
  TNode<Smi> phi_bb63_1;
  TNode<Smi> phi_bb63_2;
  TNode<Smi> tmp86;
  TNode<BoolT> tmp87;
  if (block63.is_used()) {
    ca_.Bind(&block63, &phi_bb63_0, &phi_bb63_1, &phi_bb63_2);
    tmp86 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x7ull));
    tmp87 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{phi_bb63_0}, TNode<Smi>{tmp86});
    ca_.Branch(tmp87, &block65, std::vector<compiler::Node*>{phi_bb63_0, phi_bb63_1}, &block66, std::vector<compiler::Node*>{phi_bb63_0, phi_bb63_1});
  }

  TNode<Smi> phi_bb64_0;
  TNode<Smi> phi_bb64_1;
  TNode<Smi> phi_bb64_2;
  TNode<Smi> tmp88;
  if (block64.is_used()) {
    ca_.Bind(&block64, &phi_bb64_0, &phi_bb64_1, &phi_bb64_2);
    tmp88 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb64_0}, TNode<Smi>{phi_bb64_2});
    ca_.Goto(&block60, tmp88, phi_bb64_1, phi_bb64_2);
  }

  TNode<Smi> phi_bb60_0;
  TNode<Smi> phi_bb60_1;
  TNode<Smi> phi_bb60_2;
  TNode<Smi> tmp89;
  TNode<Smi> tmp90;
  if (block60.is_used()) {
    ca_.Bind(&block60, &phi_bb60_0, &phi_bb60_1, &phi_bb60_2);
    tmp89 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp90 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb60_2}, TNode<Smi>{tmp89});
    ca_.Goto(&block59, phi_bb60_0, phi_bb60_1, tmp90);
  }

  TNode<Smi> phi_bb66_0;
  TNode<Smi> phi_bb66_1;
  if (block66.is_used()) {
    ca_.Bind(&block66, &phi_bb66_0, &phi_bb66_1);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 426});
      CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 7' failed", pos_stack);
    }
  }

  TNode<Smi> phi_bb65_0;
  TNode<Smi> phi_bb65_1;
  TNode<Smi> tmp91;
  TNode<Smi> tmp92;
  if (block65.is_used()) {
    ca_.Bind(&block65, &phi_bb65_0, &phi_bb65_1);
    tmp91 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp92 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block69, tmp91, tmp92);
  }

  TNode<Smi> phi_bb69_0;
  TNode<Smi> phi_bb69_1;
  TNode<Smi> tmp93;
  TNode<BoolT> tmp94;
  if (block69.is_used()) {
    ca_.Bind(&block69, &phi_bb69_0, &phi_bb69_1);
    tmp93 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp94 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{phi_bb69_1}, TNode<Smi>{tmp93});
    ca_.Branch(tmp94, &block70, std::vector<compiler::Node*>{phi_bb69_0, phi_bb69_1}, &block71, std::vector<compiler::Node*>{phi_bb69_0, phi_bb69_1});
  }

  TNode<Smi> phi_bb70_0;
  TNode<Smi> phi_bb70_1;
  TNode<Smi> tmp95;
  TNode<Smi> tmp96;
  if (block70.is_used()) {
    ca_.Bind(&block70, &phi_bb70_0, &phi_bb70_1);
    tmp95 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp96 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb70_1}, TNode<Smi>{tmp95});
    ca_.Goto(&block69, phi_bb70_0, tmp96);
  }

  TNode<Smi> phi_bb71_0;
  TNode<Smi> phi_bb71_1;
  TNode<Smi> tmp97;
  TNode<BoolT> tmp98;
  if (block71.is_used()) {
    ca_.Bind(&block71, &phi_bb71_0, &phi_bb71_1);
    tmp97 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp98 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{phi_bb71_1}, TNode<Smi>{tmp97});
    ca_.Branch(tmp98, &block72, std::vector<compiler::Node*>{phi_bb71_0, phi_bb71_1}, &block73, std::vector<compiler::Node*>{phi_bb71_0, phi_bb71_1});
  }

  TNode<Smi> phi_bb72_0;
  TNode<Smi> phi_bb72_1;
  TNode<Smi> tmp99;
  TNode<BoolT> tmp100;
  if (block72.is_used()) {
    ca_.Bind(&block72, &phi_bb72_0, &phi_bb72_1);
    tmp99 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x7ull));
    tmp100 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{phi_bb72_0}, TNode<Smi>{tmp99});
    ca_.Branch(tmp100, &block74, std::vector<compiler::Node*>{phi_bb72_0, phi_bb72_1}, &block75, std::vector<compiler::Node*>{phi_bb72_0, phi_bb72_1});
  }

  TNode<Smi> phi_bb73_0;
  TNode<Smi> phi_bb73_1;
  TNode<Smi> tmp101;
  TNode<Smi> tmp102;
  TNode<Smi> tmp103;
  if (block73.is_used()) {
    ca_.Bind(&block73, &phi_bb73_0, &phi_bb73_1);
    tmp101 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb73_0}, TNode<Smi>{phi_bb73_1});
    tmp102 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp103 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb73_1}, TNode<Smi>{tmp102});
    ca_.Goto(&block69, tmp101, tmp103);
  }

  TNode<Smi> phi_bb75_0;
  TNode<Smi> phi_bb75_1;
  if (block75.is_used()) {
    ca_.Bind(&block75, &phi_bb75_0, &phi_bb75_1);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 440});
      CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 7' failed", pos_stack);
    }
  }

  TNode<Smi> phi_bb74_0;
  TNode<Smi> phi_bb74_1;
  TNode<Smi> tmp104;
  if (block74.is_used()) {
    ca_.Bind(&block74, &phi_bb74_0, &phi_bb74_1);
    tmp104 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block80, phi_bb74_0, tmp104);
  }

  TNode<Smi> phi_bb80_0;
  TNode<Smi> phi_bb80_1;
  TNode<Smi> tmp105;
  TNode<Smi> tmp106;
  TNode<Smi> tmp107;
  TNode<BoolT> tmp108;
  if (block80.is_used()) {
    ca_.Bind(&block80, &phi_bb80_0, &phi_bb80_1);
    tmp105 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp106 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb80_1}, TNode<Smi>{tmp105});
    tmp107 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xaull));
    tmp108 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp106}, TNode<Smi>{tmp107});
    ca_.Branch(tmp108, &block81, std::vector<compiler::Node*>{phi_bb80_0}, &block82, std::vector<compiler::Node*>{phi_bb80_0});
  }

  TNode<Smi> phi_bb81_0;
  TNode<Smi> tmp109;
  TNode<BoolT> tmp110;
  if (block81.is_used()) {
    ca_.Bind(&block81, &phi_bb81_0);
    tmp109 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xaull));
    tmp110 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp106}, TNode<Smi>{tmp109});
    ca_.Branch(tmp110, &block83, std::vector<compiler::Node*>{phi_bb81_0}, &block84, std::vector<compiler::Node*>{phi_bb81_0});
  }

  TNode<Smi> phi_bb82_0;
  if (block82.is_used()) {
    ca_.Bind(&block82, &phi_bb82_0);
    ca_.Goto(&block80, phi_bb82_0, tmp106);
  }

  TNode<Smi> phi_bb84_0;
  if (block84.is_used()) {
    ca_.Bind(&block84, &phi_bb84_0);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 448});
      CodeStubAssembler(state_).FailAssert("Torque assert 'j == 10' failed", pos_stack);
    }
  }

  TNode<Smi> phi_bb83_0;
  if (block83.is_used()) {
    ca_.Bind(&block83, &phi_bb83_0);
    ca_.Goto(&block76, phi_bb83_0);
  }

  TNode<Smi> phi_bb76_0;
  TNode<Smi> tmp111;
  if (block76.is_used()) {
    ca_.Bind(&block76, &phi_bb76_0);
    tmp111 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block87, phi_bb76_0, tmp111);
  }

  TNode<Smi> phi_bb87_0;
  TNode<Smi> phi_bb87_3;
  TNode<Smi> tmp112;
  TNode<BoolT> tmp113;
  if (block87.is_used()) {
    ca_.Bind(&block87, &phi_bb87_0, &phi_bb87_3);
    tmp112 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xaull));
    tmp113 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb87_3}, TNode<Smi>{tmp112});
    ca_.Branch(tmp113, &block85, std::vector<compiler::Node*>{phi_bb87_0, phi_bb87_3}, &block86, std::vector<compiler::Node*>{phi_bb87_0, phi_bb87_3});
  }

  TNode<Smi> phi_bb85_0;
  TNode<Smi> phi_bb85_3;
  TNode<Smi> tmp114;
  TNode<Smi> tmp115;
  if (block85.is_used()) {
    ca_.Bind(&block85, &phi_bb85_0, &phi_bb85_3);
    tmp114 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp115 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb85_3}, TNode<Smi>{tmp114});
    ca_.Goto(&block87, phi_bb85_0, tmp115);
  }

  TNode<Smi> phi_bb86_0;
  TNode<Smi> phi_bb86_3;
  if (block86.is_used()) {
    ca_.Bind(&block86, &phi_bb86_0, &phi_bb86_3);
    ca_.Goto(&block89);
  }

    ca_.Bind(&block89);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=457&c=1
void TestSubtyping_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_x) {
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
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=474&c=1
TNode<Int32T> TypeswitchExample_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_x) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Int32T> tmp0;
  TNode<Object> tmp1;
  TNode<FixedArray> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = IncrementIfSmi_NumberOrFixedArray_0(state_, TNode<Object>{p_x});
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_FixedArray_1(state_, TNode<Context>{p_context}, TNode<Object>{tmp1}, &label3);
    ca_.Goto(&block4);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block5);
    }
  }

  TNode<Int32T> tmp4;
  TNode<Int32T> tmp5;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp4 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp5 = CodeStubAssembler(state_).Int32Add(TNode<Int32T>{tmp0}, TNode<Int32T>{tmp4});
    ca_.Goto(&block2, tmp5);
  }

  TNode<Int32T> tmp6;
  TNode<Int32T> tmp7;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp6 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp7 = CodeStubAssembler(state_).Int32Add(TNode<Int32T>{tmp0}, TNode<Int32T>{tmp6});
    ca_.Goto(&block2, tmp7);
  }

  TNode<Int32T> phi_bb2_2;
  TNode<Int32T> tmp8;
  TNode<Int32T> tmp9;
  TNode<Object> tmp10;
  TNode<Smi> tmp11;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_2);
    tmp8 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xaull));
    tmp9 = CodeStubAssembler(state_).Int32Mul(TNode<Int32T>{phi_bb2_2}, TNode<Int32T>{tmp8});
    tmp10 = IncrementIfSmi_NumberOrFixedArray_0(state_, TNode<Object>{p_x});
    compiler::CodeAssemblerLabel label12(&ca_);
    tmp11 = Cast_Smi_0(state_, TNode<Object>{tmp10}, &label12);
    ca_.Goto(&block8);
    if (label12.is_used()) {
      ca_.Bind(&label12);
      ca_.Goto(&block9);
    }
  }

  TNode<FixedArray> tmp13;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    compiler::CodeAssemblerLabel label14(&ca_);
    tmp13 = Cast_FixedArray_0(state_, TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(tmp10)}, &label14);
    ca_.Goto(&block12);
    if (label14.is_used()) {
      ca_.Bind(&label14);
      ca_.Goto(&block13);
    }
  }

  TNode<Int32T> tmp15;
  TNode<Int32T> tmp16;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp15 = Convert_int32_Smi_0(state_, TNode<Smi>{tmp11});
    tmp16 = CodeStubAssembler(state_).Int32Add(TNode<Int32T>{tmp9}, TNode<Int32T>{tmp15});
    ca_.Goto(&block6, tmp16);
  }

  TNode<Int32T> tmp17;
  TNode<Int32T> tmp18;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp17 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x7ull));
    tmp18 = CodeStubAssembler(state_).Int32Add(TNode<Int32T>{tmp9}, TNode<Int32T>{tmp17});
    ca_.Goto(&block10, tmp18);
  }

  TNode<IntPtrT> tmp19;
  TNode<Smi> tmp20;
  TNode<Int32T> tmp21;
  TNode<Int32T> tmp22;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp19 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp20 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp13, tmp19});
    tmp21 = Convert_int32_Smi_0(state_, TNode<Smi>{tmp20});
    tmp22 = CodeStubAssembler(state_).Int32Add(TNode<Int32T>{tmp9}, TNode<Int32T>{tmp21});
    ca_.Goto(&block10, tmp22);
  }

  TNode<Int32T> phi_bb10_2;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_2);
    ca_.Goto(&block6, phi_bb10_2);
  }

  TNode<Int32T> phi_bb6_2;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_2);
    ca_.Goto(&block14, phi_bb6_2);
  }

  TNode<Int32T> phi_bb14_2;
    ca_.Bind(&block14, &phi_bb14_2);
  return TNode<Int32T>{phi_bb14_2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=503&c=1
void TestTypeswitch_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<Int32T> tmp1;
  TNode<Int32T> tmp2;
  TNode<BoolT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp1 = TypeswitchExample_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp0});
    tmp2 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1aull));
    tmp3 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp1}, TNode<Int32T>{tmp2});
    ca_.Branch(tmp3, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 505});
      CodeStubAssembler(state_).FailAssert("Torque assert 'TypeswitchExample(FromConstexpr<Smi>(5)) == 26' failed", pos_stack);
    }
  }

  TNode<IntPtrT> tmp4;
  TNode<FixedArray> tmp5;
  TNode<Int32T> tmp6;
  TNode<Int32T> tmp7;
  TNode<BoolT> tmp8;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp4 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp5 = CodeStubAssembler(state_).AllocateZeroedFixedArray(TNode<IntPtrT>{tmp4});
    tmp6 = TypeswitchExample_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp5});
    tmp7 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xdull));
    tmp8 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp6}, TNode<Int32T>{tmp7});
    ca_.Branch(tmp8, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 507});
      CodeStubAssembler(state_).FailAssert("Torque assert 'TypeswitchExample(a) == 13' failed", pos_stack);
    }
  }

  TNode<Number> tmp9;
  TNode<Int32T> tmp10;
  TNode<Int32T> tmp11;
  TNode<BoolT> tmp12;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp9 = FromConstexpr_Number_constexpr_float64_0(state_, 0.5);
    tmp10 = TypeswitchExample_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp9});
    tmp11 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1bull));
    tmp12 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp10}, TNode<Int32T>{tmp11});
    ca_.Branch(tmp12, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 508});
      CodeStubAssembler(state_).FailAssert("Torque assert 'TypeswitchExample(FromConstexpr<Number>(0.5)) == 27' failed", pos_stack);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block8);
  }

    ca_.Bind(&block8);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=511&c=1
void TestTypeswitchAsanLsanFailure_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_obj) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_Smi_0(state_, TNode<Object>{p_obj}, &label1);
    ca_.Goto(&block4);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block5);
    }
  }

  TNode<JSTypedArray> tmp2;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_JSTypedArray_0(state_, TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(p_obj)}, &label3);
    ca_.Goto(&block8);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block9);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block2);
  }

  TNode<JSReceiver> tmp4;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    compiler::CodeAssemblerLabel label5(&ca_);
    tmp4 = Cast_JSReceiver_0(state_, TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(p_obj)}, &label5);
    ca_.Goto(&block12);
    if (label5.is_used()) {
      ca_.Bind(&label5);
      ca_.Goto(&block13);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block6);
  }

  if (block13.is_used()) {
    ca_.Bind(&block13);
    ca_.Goto(&block10);
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    ca_.Goto(&block10);
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    ca_.Goto(&block6);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block2);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(&block14);
  }

    ca_.Bind(&block14);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=533&c=1
void TestGenericOverload_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<Smi> tmp1;
  TNode<Smi> tmp2;
  TNode<BoolT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp1 = ExampleGenericOverload_Smi_0(state_, TNode<Smi>{tmp0});
    tmp2 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x6ull));
    tmp3 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp1}, TNode<Smi>{tmp2});
    ca_.Branch(tmp3, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 537});
      CodeStubAssembler(state_).FailAssert("Torque assert 'ExampleGenericOverload<Smi>(xSmi) == 6' failed", pos_stack);
    }
  }

  TNode<Object> tmp4;
  TNode<Smi> tmp5;
  TNode<Smi> tmp6;
  TNode<BoolT> tmp7;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp4 = ExampleGenericOverload_Object_0(state_, TNode<Object>{tmp0});
    tmp5 = UnsafeCast_Smi_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp4});
    tmp6 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp7 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp5}, TNode<Smi>{tmp6});
    ca_.Branch(tmp7, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 538});
      CodeStubAssembler(state_).FailAssert("Torque assert 'UnsafeCast<Smi>(ExampleGenericOverload<Object>(xObject)) == 5' failed", pos_stack);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=541&c=1
void TestEquality_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Float64T> tmp0;
  TNode<HeapNumber> tmp1;
  TNode<Float64T> tmp2;
  TNode<HeapNumber> tmp3;
  TNode<BoolT> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_float64_constexpr_float64_0(state_, 0.5);
    tmp1 = CodeStubAssembler(state_).AllocateHeapNumberWithValue(TNode<Float64T>{tmp0});
    tmp2 = FromConstexpr_float64_constexpr_float64_0(state_, 0.5);
    tmp3 = CodeStubAssembler(state_).AllocateHeapNumberWithValue(TNode<Float64T>{tmp2});
    tmp4 = IsNumberNotEqual_0(state_, TNode<Number>{tmp1}, TNode<Number>{tmp3});
    tmp5 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp4});
    ca_.Branch(tmp5, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 545});
      CodeStubAssembler(state_).FailAssert("Torque assert '!notEqual' failed", pos_stack);
    }
  }

  TNode<Float64T> tmp6;
  TNode<HeapNumber> tmp7;
  TNode<Float64T> tmp8;
  TNode<HeapNumber> tmp9;
  TNode<BoolT> tmp10;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp6 = FromConstexpr_float64_constexpr_float64_0(state_, 0.5);
    tmp7 = CodeStubAssembler(state_).AllocateHeapNumberWithValue(TNode<Float64T>{tmp6});
    tmp8 = FromConstexpr_float64_constexpr_float64_0(state_, 0.5);
    tmp9 = CodeStubAssembler(state_).AllocateHeapNumberWithValue(TNode<Float64T>{tmp8});
    tmp10 = IsNumberEqual_0(state_, TNode<Number>{tmp7}, TNode<Number>{tmp9});
    ca_.Branch(tmp10, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 548});
      CodeStubAssembler(state_).FailAssert("Torque assert 'equal' failed", pos_stack);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=551&c=1
TNode<BoolT> TestOrAnd_0(compiler::CodeAssemblerState* state_, TNode<BoolT> p_x, TNode<BoolT> p_y, TNode<BoolT> p_z) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.Branch(p_x, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp0;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp0 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block8, tmp0);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    ca_.Branch(p_y, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    ca_.Goto(&block11, p_z);
  }

  TNode<BoolT> tmp1;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp1 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block11, tmp1);
  }

  TNode<BoolT> phi_bb11_5;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_5);
    ca_.Goto(&block8, phi_bb11_5);
  }

  TNode<BoolT> phi_bb8_4;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_4);
    ca_.Branch(phi_bb8_4, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp2;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp2 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block4, tmp2);
  }

  TNode<BoolT> tmp3;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp3 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block4, tmp3);
  }

  TNode<BoolT> phi_bb4_3;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_3);
    ca_.Goto(&block12);
  }

    ca_.Bind(&block12);
  return TNode<BoolT>{phi_bb4_3};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=556&c=1
TNode<BoolT> TestAndOr_0(compiler::CodeAssemblerState* state_, TNode<BoolT> p_x, TNode<BoolT> p_y, TNode<BoolT> p_z) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.Branch(p_x, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block8, p_y);
  }

  TNode<BoolT> tmp0;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp0 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block8, tmp0);
  }

  TNode<BoolT> phi_bb8_4;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_4);
    ca_.Branch(phi_bb8_4, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp1;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp1 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block11, tmp1);
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    ca_.Goto(&block11, p_z);
  }

  TNode<BoolT> phi_bb11_4;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_4);
    ca_.Branch(phi_bb11_4, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp2;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp2 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block4, tmp2);
  }

  TNode<BoolT> tmp3;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp3 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block4, tmp3);
  }

  TNode<BoolT> phi_bb4_3;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_3);
    ca_.Goto(&block12);
  }

    ca_.Bind(&block12);
  return TNode<BoolT>{phi_bb4_3};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=561&c=1
void TestLogicalOperators_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block31(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  TNode<BoolT> tmp1;
  TNode<BoolT> tmp2;
  TNode<BoolT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp1 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp2 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp3 = TestAndOr_0(state_, TNode<BoolT>{tmp0}, TNode<BoolT>{tmp1}, TNode<BoolT>{tmp2});
    ca_.Branch(tmp3, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 563});
      CodeStubAssembler(state_).FailAssert("Torque assert 'TestAndOr(true, true, true)' failed", pos_stack);
    }
  }

  TNode<BoolT> tmp4;
  TNode<BoolT> tmp5;
  TNode<BoolT> tmp6;
  TNode<BoolT> tmp7;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp4 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp5 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp6 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp7 = TestAndOr_0(state_, TNode<BoolT>{tmp4}, TNode<BoolT>{tmp5}, TNode<BoolT>{tmp6});
    ca_.Branch(tmp7, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 564});
      CodeStubAssembler(state_).FailAssert("Torque assert 'TestAndOr(true, true, false)' failed", pos_stack);
    }
  }

  TNode<BoolT> tmp8;
  TNode<BoolT> tmp9;
  TNode<BoolT> tmp10;
  TNode<BoolT> tmp11;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp8 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp9 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp10 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp11 = TestAndOr_0(state_, TNode<BoolT>{tmp8}, TNode<BoolT>{tmp9}, TNode<BoolT>{tmp10});
    ca_.Branch(tmp11, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 565});
      CodeStubAssembler(state_).FailAssert("Torque assert 'TestAndOr(true, false, true)' failed", pos_stack);
    }
  }

  TNode<BoolT> tmp12;
  TNode<BoolT> tmp13;
  TNode<BoolT> tmp14;
  TNode<BoolT> tmp15;
  TNode<BoolT> tmp16;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp12 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp13 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp14 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp15 = TestAndOr_0(state_, TNode<BoolT>{tmp12}, TNode<BoolT>{tmp13}, TNode<BoolT>{tmp14});
    tmp16 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp15});
    ca_.Branch(tmp16, &block8, std::vector<compiler::Node*>{}, &block9, std::vector<compiler::Node*>{});
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 566});
      CodeStubAssembler(state_).FailAssert("Torque assert '!TestAndOr(true, false, false)' failed", pos_stack);
    }
  }

  TNode<BoolT> tmp17;
  TNode<BoolT> tmp18;
  TNode<BoolT> tmp19;
  TNode<BoolT> tmp20;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp17 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp18 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp19 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp20 = TestAndOr_0(state_, TNode<BoolT>{tmp17}, TNode<BoolT>{tmp18}, TNode<BoolT>{tmp19});
    ca_.Branch(tmp20, &block10, std::vector<compiler::Node*>{}, &block11, std::vector<compiler::Node*>{});
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 567});
      CodeStubAssembler(state_).FailAssert("Torque assert 'TestAndOr(false, true, true)' failed", pos_stack);
    }
  }

  TNode<BoolT> tmp21;
  TNode<BoolT> tmp22;
  TNode<BoolT> tmp23;
  TNode<BoolT> tmp24;
  TNode<BoolT> tmp25;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp21 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp22 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp23 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp24 = TestAndOr_0(state_, TNode<BoolT>{tmp21}, TNode<BoolT>{tmp22}, TNode<BoolT>{tmp23});
    tmp25 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp24});
    ca_.Branch(tmp25, &block12, std::vector<compiler::Node*>{}, &block13, std::vector<compiler::Node*>{});
  }

  if (block13.is_used()) {
    ca_.Bind(&block13);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 568});
      CodeStubAssembler(state_).FailAssert("Torque assert '!TestAndOr(false, true, false)' failed", pos_stack);
    }
  }

  TNode<BoolT> tmp26;
  TNode<BoolT> tmp27;
  TNode<BoolT> tmp28;
  TNode<BoolT> tmp29;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp26 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp27 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp28 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp29 = TestAndOr_0(state_, TNode<BoolT>{tmp26}, TNode<BoolT>{tmp27}, TNode<BoolT>{tmp28});
    ca_.Branch(tmp29, &block14, std::vector<compiler::Node*>{}, &block15, std::vector<compiler::Node*>{});
  }

  if (block15.is_used()) {
    ca_.Bind(&block15);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 569});
      CodeStubAssembler(state_).FailAssert("Torque assert 'TestAndOr(false, false, true)' failed", pos_stack);
    }
  }

  TNode<BoolT> tmp30;
  TNode<BoolT> tmp31;
  TNode<BoolT> tmp32;
  TNode<BoolT> tmp33;
  TNode<BoolT> tmp34;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp30 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp31 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp32 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp33 = TestAndOr_0(state_, TNode<BoolT>{tmp30}, TNode<BoolT>{tmp31}, TNode<BoolT>{tmp32});
    tmp34 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp33});
    ca_.Branch(tmp34, &block16, std::vector<compiler::Node*>{}, &block17, std::vector<compiler::Node*>{});
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 570});
      CodeStubAssembler(state_).FailAssert("Torque assert '!TestAndOr(false, false, false)' failed", pos_stack);
    }
  }

  TNode<BoolT> tmp35;
  TNode<BoolT> tmp36;
  TNode<BoolT> tmp37;
  TNode<BoolT> tmp38;
  if (block16.is_used()) {
    ca_.Bind(&block16);
    tmp35 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp36 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp37 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp38 = TestOrAnd_0(state_, TNode<BoolT>{tmp35}, TNode<BoolT>{tmp36}, TNode<BoolT>{tmp37});
    ca_.Branch(tmp38, &block18, std::vector<compiler::Node*>{}, &block19, std::vector<compiler::Node*>{});
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 571});
      CodeStubAssembler(state_).FailAssert("Torque assert 'TestOrAnd(true, true, true)' failed", pos_stack);
    }
  }

  TNode<BoolT> tmp39;
  TNode<BoolT> tmp40;
  TNode<BoolT> tmp41;
  TNode<BoolT> tmp42;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp39 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp40 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp41 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp42 = TestOrAnd_0(state_, TNode<BoolT>{tmp39}, TNode<BoolT>{tmp40}, TNode<BoolT>{tmp41});
    ca_.Branch(tmp42, &block20, std::vector<compiler::Node*>{}, &block21, std::vector<compiler::Node*>{});
  }

  if (block21.is_used()) {
    ca_.Bind(&block21);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 572});
      CodeStubAssembler(state_).FailAssert("Torque assert 'TestOrAnd(true, true, false)' failed", pos_stack);
    }
  }

  TNode<BoolT> tmp43;
  TNode<BoolT> tmp44;
  TNode<BoolT> tmp45;
  TNode<BoolT> tmp46;
  if (block20.is_used()) {
    ca_.Bind(&block20);
    tmp43 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp44 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp45 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp46 = TestOrAnd_0(state_, TNode<BoolT>{tmp43}, TNode<BoolT>{tmp44}, TNode<BoolT>{tmp45});
    ca_.Branch(tmp46, &block22, std::vector<compiler::Node*>{}, &block23, std::vector<compiler::Node*>{});
  }

  if (block23.is_used()) {
    ca_.Bind(&block23);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 573});
      CodeStubAssembler(state_).FailAssert("Torque assert 'TestOrAnd(true, false, true)' failed", pos_stack);
    }
  }

  TNode<BoolT> tmp47;
  TNode<BoolT> tmp48;
  TNode<BoolT> tmp49;
  TNode<BoolT> tmp50;
  if (block22.is_used()) {
    ca_.Bind(&block22);
    tmp47 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp48 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp49 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp50 = TestOrAnd_0(state_, TNode<BoolT>{tmp47}, TNode<BoolT>{tmp48}, TNode<BoolT>{tmp49});
    ca_.Branch(tmp50, &block24, std::vector<compiler::Node*>{}, &block25, std::vector<compiler::Node*>{});
  }

  if (block25.is_used()) {
    ca_.Bind(&block25);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 574});
      CodeStubAssembler(state_).FailAssert("Torque assert 'TestOrAnd(true, false, false)' failed", pos_stack);
    }
  }

  TNode<BoolT> tmp51;
  TNode<BoolT> tmp52;
  TNode<BoolT> tmp53;
  TNode<BoolT> tmp54;
  if (block24.is_used()) {
    ca_.Bind(&block24);
    tmp51 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp52 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp53 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp54 = TestOrAnd_0(state_, TNode<BoolT>{tmp51}, TNode<BoolT>{tmp52}, TNode<BoolT>{tmp53});
    ca_.Branch(tmp54, &block26, std::vector<compiler::Node*>{}, &block27, std::vector<compiler::Node*>{});
  }

  if (block27.is_used()) {
    ca_.Bind(&block27);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 575});
      CodeStubAssembler(state_).FailAssert("Torque assert 'TestOrAnd(false, true, true)' failed", pos_stack);
    }
  }

  TNode<BoolT> tmp55;
  TNode<BoolT> tmp56;
  TNode<BoolT> tmp57;
  TNode<BoolT> tmp58;
  TNode<BoolT> tmp59;
  if (block26.is_used()) {
    ca_.Bind(&block26);
    tmp55 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp56 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp57 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp58 = TestOrAnd_0(state_, TNode<BoolT>{tmp55}, TNode<BoolT>{tmp56}, TNode<BoolT>{tmp57});
    tmp59 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp58});
    ca_.Branch(tmp59, &block28, std::vector<compiler::Node*>{}, &block29, std::vector<compiler::Node*>{});
  }

  if (block29.is_used()) {
    ca_.Bind(&block29);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 576});
      CodeStubAssembler(state_).FailAssert("Torque assert '!TestOrAnd(false, true, false)' failed", pos_stack);
    }
  }

  TNode<BoolT> tmp60;
  TNode<BoolT> tmp61;
  TNode<BoolT> tmp62;
  TNode<BoolT> tmp63;
  TNode<BoolT> tmp64;
  if (block28.is_used()) {
    ca_.Bind(&block28);
    tmp60 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp61 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp62 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp63 = TestOrAnd_0(state_, TNode<BoolT>{tmp60}, TNode<BoolT>{tmp61}, TNode<BoolT>{tmp62});
    tmp64 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp63});
    ca_.Branch(tmp64, &block30, std::vector<compiler::Node*>{}, &block31, std::vector<compiler::Node*>{});
  }

  if (block31.is_used()) {
    ca_.Bind(&block31);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 577});
      CodeStubAssembler(state_).FailAssert("Torque assert '!TestOrAnd(false, false, true)' failed", pos_stack);
    }
  }

  TNode<BoolT> tmp65;
  TNode<BoolT> tmp66;
  TNode<BoolT> tmp67;
  TNode<BoolT> tmp68;
  TNode<BoolT> tmp69;
  if (block30.is_used()) {
    ca_.Bind(&block30);
    tmp65 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp66 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp67 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp68 = TestOrAnd_0(state_, TNode<BoolT>{tmp65}, TNode<BoolT>{tmp66}, TNode<BoolT>{tmp67});
    tmp69 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp68});
    ca_.Branch(tmp69, &block32, std::vector<compiler::Node*>{}, &block33, std::vector<compiler::Node*>{});
  }

  if (block33.is_used()) {
    ca_.Bind(&block33);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 578});
      CodeStubAssembler(state_).FailAssert("Torque assert '!TestOrAnd(false, false, false)' failed", pos_stack);
    }
  }

  if (block32.is_used()) {
    ca_.Bind(&block32);
    ca_.Goto(&block34);
  }

    ca_.Bind(&block34);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=581&c=1
TNode<Smi> TestCall_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_i, compiler::CodeAssemblerLabel* label_A) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp1 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{p_i}, TNode<Smi>{tmp0});
    ca_.Branch(tmp1, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block5);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(label_A);
  }

    ca_.Bind(&block5);
  return TNode<Smi>{p_i};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=587&c=1
void TestOtherwiseWithCode1_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<Smi> tmp1;
  TNode<Smi> tmp2;
  TNode<Smi> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp2 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xaull));
    compiler::CodeAssemblerLabel label4(&ca_);
    tmp3 = TestCall_0(state_, TNode<Smi>{tmp2}, &label4);
    ca_.Goto(&block6);
    if (label4.is_used()) {
      ca_.Bind(&label4);
      ca_.Goto(&block7);
    }
  }

  TNode<Smi> tmp5;
  TNode<Smi> tmp6;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp5 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp6 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp1}, TNode<Smi>{tmp5});
    ca_.Goto(&block2, tmp6, tmp6);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block2, tmp0, tmp1);
  }

  TNode<Smi> phi_bb2_0;
  TNode<Smi> phi_bb2_1;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_0, &phi_bb2_1);
    ca_.Goto(&block12);
  }

    ca_.Bind(&block12);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=599&c=1
void TestOtherwiseWithCode2_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block4, tmp0, tmp1);
  }

  TNode<Smi> phi_bb4_0;
  TNode<Smi> phi_bb4_1;
  TNode<Smi> tmp2;
  TNode<BoolT> tmp3;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_0, &phi_bb4_1);
    tmp2 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xaull));
    tmp3 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb4_1}, TNode<Smi>{tmp2});
    ca_.Branch(tmp3, &block2, std::vector<compiler::Node*>{phi_bb4_0, phi_bb4_1}, &block3, std::vector<compiler::Node*>{phi_bb4_0, phi_bb4_1});
  }

  TNode<Smi> phi_bb2_0;
  TNode<Smi> phi_bb2_1;
  TNode<Smi> tmp4;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_0, &phi_bb2_1);
    compiler::CodeAssemblerLabel label5(&ca_);
    tmp4 = TestCall_0(state_, TNode<Smi>{phi_bb2_1}, &label5);
    ca_.Goto(&block8, phi_bb2_0, phi_bb2_1, phi_bb2_1);
    if (label5.is_used()) {
      ca_.Bind(&label5);
      ca_.Goto(&block9, phi_bb2_0, phi_bb2_1, phi_bb2_1);
    }
  }

  TNode<Smi> phi_bb9_0;
  TNode<Smi> phi_bb9_1;
  TNode<Smi> phi_bb9_2;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_0, &phi_bb9_1, &phi_bb9_2);
    ca_.Goto(&block3, phi_bb9_0, phi_bb9_1);
  }

  TNode<Smi> phi_bb8_0;
  TNode<Smi> phi_bb8_1;
  TNode<Smi> phi_bb8_2;
  TNode<Smi> tmp6;
  TNode<Smi> tmp7;
  TNode<Smi> tmp8;
  TNode<Smi> tmp9;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_0, &phi_bb8_1, &phi_bb8_2);
    tmp6 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp7 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb8_0}, TNode<Smi>{tmp6});
    tmp8 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp9 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb8_1}, TNode<Smi>{tmp8});
    ca_.Goto(&block4, tmp7, tmp9);
  }

  TNode<Smi> phi_bb3_0;
  TNode<Smi> phi_bb3_1;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_0, &phi_bb3_1);
    ca_.Goto(&block14);
  }

    ca_.Bind(&block14);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=609&c=1
void TestOtherwiseWithCode3_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block4, tmp0, tmp1);
  }

  TNode<Smi> phi_bb4_0;
  TNode<Smi> phi_bb4_1;
  TNode<Smi> tmp2;
  TNode<BoolT> tmp3;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_0, &phi_bb4_1);
    tmp2 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xaull));
    tmp3 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb4_1}, TNode<Smi>{tmp2});
    ca_.Branch(tmp3, &block2, std::vector<compiler::Node*>{phi_bb4_0, phi_bb4_1}, &block3, std::vector<compiler::Node*>{phi_bb4_0, phi_bb4_1});
  }

  TNode<Smi> phi_bb2_0;
  TNode<Smi> phi_bb2_1;
  TNode<Smi> tmp4;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_0, &phi_bb2_1);
    compiler::CodeAssemblerLabel label5(&ca_);
    tmp4 = TestCall_0(state_, TNode<Smi>{phi_bb2_1}, &label5);
    ca_.Goto(&block8, phi_bb2_0, phi_bb2_1, phi_bb2_0, phi_bb2_1);
    if (label5.is_used()) {
      ca_.Bind(&label5);
      ca_.Goto(&block9, phi_bb2_0, phi_bb2_1, phi_bb2_0, phi_bb2_1);
    }
  }

  TNode<Smi> phi_bb9_0;
  TNode<Smi> phi_bb9_1;
  TNode<Smi> phi_bb9_2;
  TNode<Smi> phi_bb9_3;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_0, &phi_bb9_1, &phi_bb9_2, &phi_bb9_3);
    ca_.Goto(&block3, phi_bb9_0, phi_bb9_1);
  }

  TNode<Smi> phi_bb8_0;
  TNode<Smi> phi_bb8_1;
  TNode<Smi> phi_bb8_2;
  TNode<Smi> phi_bb8_3;
  TNode<Smi> tmp6;
  TNode<Smi> tmp7;
  TNode<Smi> tmp8;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_0, &phi_bb8_1, &phi_bb8_2, &phi_bb8_3);
    tmp6 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb8_2}, TNode<Smi>{tmp4});
    tmp7 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp8 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb8_1}, TNode<Smi>{tmp7});
    ca_.Goto(&block4, tmp6, tmp8);
  }

  TNode<Smi> phi_bb3_0;
  TNode<Smi> phi_bb3_1;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_0, &phi_bb3_1);
    ca_.Goto(&block14);
  }

    ca_.Bind(&block14);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=618&c=1
void TestForwardLabel_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    ca_.Goto(&block10);
  }

    ca_.Bind(&block10);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=629&c=1
void TestQualifiedAccess_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<BoolT> tmp1;
  TNode<BoolT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = Is_JSArray_Smi_0(state_, TNode<Context>{p_context}, TNode<Smi>{tmp0});
    tmp2 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp1});
    ca_.Branch(tmp2, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 632});
      CodeStubAssembler(state_).FailAssert("Torque assert '!Is<JSArray>(s)' failed", pos_stack);
    }
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(&block4);
  }

    ca_.Bind(&block4);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=635&c=1
TNode<Smi> TestCatch1_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
      TNode<Object> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    compiler::CodeAssemblerExceptionHandlerLabel catch1__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch1__label);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{p_context}, MessageTemplate::kInvalidArrayLength);
    }
    if (catch1__label.is_used()) {
      compiler::CodeAssemblerLabel catch1_skip(&ca_);
      ca_.Bind(&catch1__label, &tmp2);
      ca_.Goto(&block4);
    }
  }

  TNode<HeapObject> tmp3;
  TNode<Smi> tmp4;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp3 = GetAndResetPendingMessage_0(state_);
    tmp4 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
  return TNode<Smi>{tmp4};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=646&c=1
void TestCatch2Wrapper_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{p_context}, MessageTemplate::kInvalidArrayLength);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=651&c=1
TNode<Smi> TestCatch2_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
      TNode<Object> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    compiler::CodeAssemblerExceptionHandlerLabel catch1__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch1__label);
    TestCatch2Wrapper_0(state_, TNode<Context>{p_context});
    }
    if (catch1__label.is_used()) {
      compiler::CodeAssemblerLabel catch1_skip(&ca_);
      ca_.Bind(&catch1__label, &tmp2);
      ca_.Goto(&block4);
    }
  }

  TNode<HeapObject> tmp3;
  TNode<Smi> tmp4;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp3 = GetAndResetPendingMessage_0(state_);
    tmp4 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
  return TNode<Smi>{tmp4};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=662&c=1
void TestCatch3WrapperWithLabel_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, compiler::CodeAssemblerLabel* label__Abort) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{p_context}, MessageTemplate::kInvalidArrayLength);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=668&c=1
TNode<Smi> TestCatch3_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
      TNode<Object> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    compiler::CodeAssemblerLabel label1(&ca_);
    compiler::CodeAssemblerExceptionHandlerLabel catch2__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch2__label);
    TestCatch3WrapperWithLabel_0(state_, TNode<Context>{p_context}, &label1);
    }
    if (catch2__label.is_used()) {
      compiler::CodeAssemblerLabel catch2_skip(&ca_);
      ca_.Bind(&catch2__label, &tmp3);
      ca_.Goto(&block7);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block6);
    }
  }

  TNode<HeapObject> tmp4;
  TNode<Smi> tmp5;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp4 = GetAndResetPendingMessage_0(state_);
    tmp5 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    ca_.Goto(&block1, tmp5);
  }

  TNode<Smi> tmp6;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp6 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    ca_.Goto(&block1, tmp6);
  }

  TNode<Smi> phi_bb1_1;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_1);
    ca_.Goto(&block8);
  }

    ca_.Bind(&block8);
  return TNode<Smi>{phi_bb1_1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=685&c=1
void TestIterator_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Map> p_map) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<JSReceiver> tmp1;
  TNode<Object> tmp2;
  TNode<JSReceiver> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = IteratorBuiltinsAssembler(state_).GetIteratorMethod(TNode<Context>{p_context}, TNode<Object>{p_o});
    std::tie(tmp1, tmp2) = IteratorBuiltinsAssembler(state_).GetIterator(TNode<Context>{p_context}, TNode<Object>{p_o}).Flatten();
    compiler::CodeAssemblerLabel label4(&ca_);
    tmp3 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{p_context}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp1}, TNode<Object>{tmp2}}, &label4);
    ca_.Goto(&block4);
    if (label4.is_used()) {
      ca_.Bind(&label4);
      ca_.Goto(&block5);
    }
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block3);
  }

  TNode<JSReceiver> tmp5;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    compiler::CodeAssemblerLabel label6(&ca_);
    tmp5 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{p_context}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp1}, TNode<Object>{tmp2}}, TNode<Map>{p_map}, &label6);
    ca_.Goto(&block6);
    if (label6.is_used()) {
      ca_.Bind(&label6);
      ca_.Goto(&block7);
    }
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    ca_.Goto(&block3);
  }

  TNode<Object> tmp7;
  TNode<Object> tmp8;
  TNode<JSArray> tmp9;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp7 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{p_context}, TNode<JSReceiver>{p_o});
    tmp8 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{p_context}, TNode<JSReceiver>{p_o}, TNode<Map>{p_map});
    tmp9 = IteratorBuiltinsAssembler(state_).IterableToList(TNode<Context>{p_context}, TNode<Object>{tmp0}, TNode<Object>{tmp0});
    IteratorCloseOnException_0(state_, TNode<Context>{p_context}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp1}, TNode<Object>{tmp2}});
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block2);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(&block8);
  }

    ca_.Bind(&block8);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=704&c=1
void TestFrame1_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<Smi> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadFramePointer();
    tmp1 = LoadContextOrFrameTypeFromFrame_0(state_, TNode<Context>{p_context}, TNode<RawPtrT>{tmp0});
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_FrameType_0(state_, TNode<Object>{tmp1}, &label3);
    ca_.Goto(&block4);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block5);
    }
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<RawPtrT> tmp4;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    compiler::CodeAssemblerLabel label5(&ca_);
    tmp4 = Cast_FrameWithArguments_0(state_, TNode<Context>{p_context}, TNode<RawPtrT>{tmp0}, &label5);
    ca_.Goto(&block16);
    if (label5.is_used()) {
      ca_.Bind(&label5);
      ca_.Goto(&block17);
    }
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    ca_.Goto(&block18);
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block18);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=720&c=1
void TestNew_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSArray> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = NewJSArray_1(state_, TNode<Context>{p_context});
    tmp1 = Method_JSArray_IsEmpty_0(state_, TNode<JSArray>{tmp0});
    ca_.Branch(tmp1, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 723});
      CodeStubAssembler(state_).FailAssert("Torque assert 'f.IsEmpty()' failed", pos_stack);
    }
  }

  TNode<IntPtrT> tmp2;
  TNode<Number> tmp3;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp3 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    CodeStubAssembler(state_).StoreReference<Number>(CodeStubAssembler::Reference{tmp0, tmp2}, tmp3);
    ca_.Goto(&block4);
  }

    ca_.Bind(&block4);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=744&c=1
void TestStructConstructor_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Int32T> tmp0;
  TNode<Int32T> tmp1;
  TNode<Int32T> tmp2;
  TNode<Int32T> tmp3;
  TNode<Int32T> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x6ull));
    tmp1 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x7ull));
    tmp2 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp3 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x8ull));
    tmp4 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp5 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp2}, TNode<Int32T>{tmp4});
    ca_.Branch(tmp5, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 748});
      CodeStubAssembler(state_).FailAssert("Torque assert 'a.a == 5' failed", pos_stack);
    }
  }

  TNode<Int32T> tmp6;
  TNode<BoolT> tmp7;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp6 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x6ull));
    tmp7 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp0}, TNode<Int32T>{tmp6});
    ca_.Branch(tmp7, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 749});
      CodeStubAssembler(state_).FailAssert("Torque assert 'a.b.x == 6' failed", pos_stack);
    }
  }

  TNode<Int32T> tmp8;
  TNode<BoolT> tmp9;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp8 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x7ull));
    tmp9 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp1}, TNode<Int32T>{tmp8});
    ca_.Branch(tmp9, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 750});
      CodeStubAssembler(state_).FailAssert("Torque assert 'a.b.y == 7' failed", pos_stack);
    }
  }

  TNode<Int32T> tmp10;
  TNode<BoolT> tmp11;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp10 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x8ull));
    tmp11 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp3}, TNode<Int32T>{tmp10});
    ca_.Branch(tmp11, &block8, std::vector<compiler::Node*>{}, &block9, std::vector<compiler::Node*>{});
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 751});
      CodeStubAssembler(state_).FailAssert("Torque assert 'a.c == 8' failed", pos_stack);
    }
  }

  TNode<Int32T> tmp12;
  TNode<Int32T> tmp13;
  TNode<BoolT> tmp14;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp12 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp13 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp14 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp12}, TNode<Int32T>{tmp13});
    ca_.Branch(tmp14, &block10, std::vector<compiler::Node*>{}, &block11, std::vector<compiler::Node*>{});
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 753});
      CodeStubAssembler(state_).FailAssert("Torque assert 'a.b.x == 1' failed", pos_stack);
    }
  }

  TNode<Int32T> tmp15;
  TNode<Int32T> tmp16;
  TNode<BoolT> tmp17;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp15 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp16 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp17 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp15}, TNode<Int32T>{tmp16});
    ca_.Branch(tmp17, &block13, std::vector<compiler::Node*>{}, &block14, std::vector<compiler::Node*>{});
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 755});
      CodeStubAssembler(state_).FailAssert("Torque assert 'a.b.x == 2' failed", pos_stack);
    }
  }

  TNode<Int32T> tmp18;
  TNode<BoolT> tmp19;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp18 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp19 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp15}, TNode<Int32T>{tmp18});
    ca_.Branch(tmp19, &block15, std::vector<compiler::Node*>{}, &block16, std::vector<compiler::Node*>{});
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 756});
      CodeStubAssembler(state_).FailAssert("Torque assert 'a.b.GetX() == 2' failed", pos_stack);
    }
  }

  if (block15.is_used()) {
    ca_.Bind(&block15);
    ca_.Goto(&block18);
  }

    ca_.Bind(&block18);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=759&c=1
TNode<InternalClass> Cast_InternalClass_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<InternalClass> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = DownCastForTorqueClass_InternalClass_0(state_, TNode<HeapObject>{p_obj}, &label1);
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
  return TNode<InternalClass>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=769&c=1
TNode<InternalClass> NewInternalClass_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_x) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<Smi> tmp1;
  TNode<Map> tmp2;
  TNode<BoolT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<HeapObject> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<InternalClass> tmp9;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp1 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{p_x}, TNode<Smi>{tmp0});
    tmp2 = CodeStubAssembler(state_).GetInstanceTypeMap(INTERNAL_CLASS_TYPE);
    tmp3 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp5 = AllocateFromNew_0(state_, TNode<IntPtrT>{tmp4}, TNode<Map>{tmp2}, TNode<BoolT>{tmp3});
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp5, tmp6}, tmp2);
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp5, tmp7}, p_x);
    tmp8 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<Number>(CodeStubAssembler::Reference{tmp5, tmp8}, tmp1);
    tmp9 = TORQUE_CAST(TNode<HeapObject>{tmp5});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<InternalClass>{tmp9};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=773&c=1
void TestInternalClass_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<InternalClass> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp1 = NewInternalClass_0(state_, TNode<Smi>{tmp0});
    compiler::CodeAssemblerLabel label2(&ca_);
    Method_InternalClass_Flip_0(state_, TNode<InternalClass>{tmp1}, &label2);
    ca_.Goto(&block4);
    if (label2.is_used()) {
      ca_.Bind(&label2);
      ca_.Goto(&block5);
    }
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp3;
  TNode<Smi> tmp4;
  TNode<Smi> tmp5;
  TNode<BoolT> tmp6;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp4 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp1, tmp3});
    tmp5 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x6ull));
    tmp6 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp4}, TNode<Smi>{tmp5});
    ca_.Branch(tmp6, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 777});
      CodeStubAssembler(state_).FailAssert("Torque assert 'o.a == 6' failed", pos_stack);
    }
  }

  TNode<IntPtrT> tmp7;
  TNode<Number> tmp8;
  TNode<Number> tmp9;
  TNode<BoolT> tmp10;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp8 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp1, tmp7});
    tmp9 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp10 = IsNumberEqual_0(state_, TNode<Number>{tmp8}, TNode<Number>{tmp9});
    ca_.Branch(tmp10, &block8, std::vector<compiler::Node*>{}, &block9, std::vector<compiler::Node*>{});
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 778});
      CodeStubAssembler(state_).FailAssert("Torque assert 'o.b == 5' failed", pos_stack);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block10);
  }

    ca_.Bind(&block10);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=792&c=1
void TestConstInStructs_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Oddball> tmp0;
  TNode<Int32T> tmp1;
  TNode<Oddball> tmp2;
  TNode<Int32T> tmp3;
  TNode<Oddball> tmp4;
  TNode<Int32T> tmp5;
  TNode<BoolT> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Null_0(state_);
    tmp1 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp2 = Null_0(state_);
    tmp3 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp4 = Undefined_0(state_);
    tmp5 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp6 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp1}, TNode<Int32T>{tmp5});
    ca_.Branch(tmp6, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 799});
      CodeStubAssembler(state_).FailAssert("Torque assert 'x.TestMethod1() == 1' failed", pos_stack);
    }
  }

  TNode<Oddball> tmp7;
  TNode<BoolT> tmp8;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp7 = Null_0(state_);
    tmp8 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp0}, TNode<HeapObject>{tmp7});
    ca_.Branch(tmp8, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 800});
      CodeStubAssembler(state_).FailAssert("Torque assert 'x.TestMethod2() == Null' failed", pos_stack);
    }
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block8);
  }

    ca_.Bind(&block8);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=803&c=1
void TestParentFrameArguments_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<RawPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadParentFramePointer();
    compiler::CodeAssemblerLabel label2(&ca_);
    tmp1 = Cast_FrameWithArguments_0(state_, TNode<Context>{p_context}, TNode<RawPtrT>{tmp0}, &label2);
    ca_.Goto(&block4);
    if (label2.is_used()) {
      ca_.Bind(&label2);
      ca_.Goto(&block5);
    }
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp3;
  TNode<RawPtrT> tmp4;
  TNode<RawPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp3 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    std::tie(tmp4, tmp5, tmp6, tmp7) = CodeStubAssembler(state_).GetFrameArguments(TNode<RawPtrT>{tmp1}, TNode<IntPtrT>{tmp3}).Flatten();
    tmp8 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=819&c=1
TNode<Object> TestNewFixedArrayFromSpread_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<Map> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<BoolT> tmp5;
  TNode<HeapObject> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<Smi> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<FixedArray> tmp11;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp1 = kFixedArrayMap_0(state_);
    tmp2 = Convert_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp4 = AddIndexedFieldSizeToObjectSize_0(state_, TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp2}, kTaggedSize);
    tmp5 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp6 = AllocateFromNew_0(state_, TNode<IntPtrT>{tmp4}, TNode<Map>{tmp1}, TNode<BoolT>{tmp5});
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp6, tmp7}, tmp1);
    tmp8 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp9 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp6, tmp8}, tmp9);
    tmp10 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    InitializeFieldsFromIterator_Object_TestIterator_0(state_, TorqueStructSlice_Object_MutableReference_Object_0{TNode<Object>{tmp6}, TNode<IntPtrT>{tmp10}, TNode<IntPtrT>{tmp2}, TorqueStructUnsafe_0{}}, TorqueStructTestIterator_0{TNode<Smi>{tmp0}});
    tmp11 = TORQUE_CAST(TNode<HeapObject>{tmp6});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Object>{tmp11};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=825&c=1
TNode<SmiPair> Cast_SmiPair_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<SmiPair> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = DownCastForTorqueClass_SmiPair_0(state_, TNode<HeapObject>{p_obj}, &label1);
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
  return TNode<SmiPair>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=839&c=1
void TestReferences_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Map> tmp0;
  TNode<BoolT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<HeapObject> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<Smi> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Smi> tmp8;
  TNode<SmiPair> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<Smi> tmp11;
  TNode<Smi> tmp12;
  TNode<Smi> tmp13;
  TNode<Smi> tmp14;
  TNode<Smi> tmp15;
  TNode<Smi> tmp16;
  TNode<IntPtrT> tmp17;
  TNode<Object> tmp18;
  TNode<IntPtrT> tmp19;
  TNode<IntPtrT> tmp20;
  TNode<Smi> tmp21;
  TNode<Smi> tmp22;
  TNode<BoolT> tmp23;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).GetInstanceTypeMap(SMI_PAIR_TYPE);
    tmp1 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp3 = AllocateFromNew_0(state_, TNode<IntPtrT>{tmp2}, TNode<Map>{tmp0}, TNode<BoolT>{tmp1});
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp3, tmp4}, tmp0);
    tmp5 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp6 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x7ull));
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp3, tmp5}, tmp6);
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp8 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp3, tmp7}, tmp8);
    tmp9 = TORQUE_CAST(TNode<HeapObject>{tmp3});
    tmp10 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp11 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp9, tmp10});
    tmp12 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp13 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp12}, TNode<Smi>{tmp11});
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp9, tmp10}, tmp13);
    tmp14 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp9, tmp10});
    tmp15 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp16 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp14}, TNode<Smi>{tmp15});
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp9, tmp10}, tmp16);
    tmp17 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    std::tie(tmp18, tmp19) = Method_SmiPair_GetA_0(state_, TNode<SmiPair>{tmp9}).Flatten();
    Swap_Smi_0(state_, TorqueStructReference_Smi_0{TNode<Object>{tmp9}, TNode<IntPtrT>{tmp17}, TorqueStructUnsafe_0{}}, TorqueStructReference_Smi_0{TNode<Object>{tmp18}, TNode<IntPtrT>{tmp19}, TorqueStructUnsafe_0{}});
    tmp20 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp21 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp9, tmp20});
    tmp22 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp23 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp21}, TNode<Smi>{tmp22});
    ca_.Branch(tmp23, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 846});
      CodeStubAssembler(state_).FailAssert("Torque assert 'array.a == 2' failed", pos_stack);
    }
  }

  TNode<IntPtrT> tmp24;
  TNode<Smi> tmp25;
  TNode<Smi> tmp26;
  TNode<BoolT> tmp27;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp24 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp25 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp9, tmp24});
    tmp26 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x9ull));
    tmp27 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp25}, TNode<Smi>{tmp26});
    ca_.Branch(tmp27, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 847});
      CodeStubAssembler(state_).FailAssert("Torque assert 'array.b == 9' failed", pos_stack);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=850&c=1
void TestSlices_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<Map> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<BoolT> tmp5;
  TNode<HeapObject> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<Smi> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<FixedArray> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<Smi> tmp13;
  TNode<Smi> tmp14;
  TNode<BoolT> tmp15;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp1 = kFixedArrayMap_0(state_);
    tmp2 = Convert_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp4 = AddIndexedFieldSizeToObjectSize_0(state_, TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp2}, kTaggedSize);
    tmp5 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp6 = AllocateFromNew_0(state_, TNode<IntPtrT>{tmp4}, TNode<Map>{tmp1}, TNode<BoolT>{tmp5});
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp6, tmp7}, tmp1);
    tmp8 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp9 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp6, tmp8}, tmp9);
    tmp10 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    InitializeFieldsFromIterator_Object_TestIterator_0(state_, TorqueStructSlice_Object_MutableReference_Object_0{TNode<Object>{tmp6}, TNode<IntPtrT>{tmp10}, TNode<IntPtrT>{tmp2}, TorqueStructUnsafe_0{}}, TorqueStructTestIterator_0{TNode<Smi>{tmp0}});
    tmp11 = TORQUE_CAST(TNode<HeapObject>{tmp6});
    tmp12 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp13 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp11, tmp12});
    tmp14 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp15 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp13}, TNode<Smi>{tmp14});
    ca_.Branch(tmp15, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 854});
      CodeStubAssembler(state_).FailAssert("Torque assert 'a.length == 3' failed", pos_stack);
    }
  }

  TNode<Smi> tmp16;
  TNode<Object> tmp17;
  TNode<IntPtrT> tmp18;
  TNode<IntPtrT> tmp19;
  TNode<UintPtrT> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<UintPtrT> tmp22;
  TNode<UintPtrT> tmp23;
  TNode<BoolT> tmp24;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp16 = Convert_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x7bull));
    std::tie(tmp17, tmp18, tmp19) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp11}).Flatten();
    tmp20 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp21 = Convert_intptr_uintptr_0(state_, TNode<UintPtrT>{tmp20});
    tmp22 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp21});
    tmp23 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp19});
    tmp24 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp22}, TNode<UintPtrT>{tmp23});
    ca_.Branch(tmp24, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp25;
  TNode<IntPtrT> tmp26;
  TNode<Object> tmp27;
  TNode<IntPtrT> tmp28;
  TNode<Object> tmp29;
  TNode<IntPtrT> tmp30;
  TNode<IntPtrT> tmp31;
  TNode<UintPtrT> tmp32;
  TNode<IntPtrT> tmp33;
  TNode<UintPtrT> tmp34;
  TNode<UintPtrT> tmp35;
  TNode<BoolT> tmp36;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp25 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp21});
    tmp26 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp18}, TNode<IntPtrT>{tmp25});
    std::tie(tmp27, tmp28) = NewReference_Object_0(state_, TNode<Object>{tmp17}, TNode<IntPtrT>{tmp26}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp27, tmp28}, tmp16);
    std::tie(tmp29, tmp30, tmp31) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp11}).Flatten();
    tmp32 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp33 = Convert_intptr_uintptr_0(state_, TNode<UintPtrT>{tmp32});
    tmp34 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp33});
    tmp35 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp31});
    tmp36 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp34}, TNode<UintPtrT>{tmp35});
    ca_.Branch(tmp36, &block18, std::vector<compiler::Node*>{}, &block19, std::vector<compiler::Node*>{});
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp37;
  TNode<IntPtrT> tmp38;
  TNode<Object> tmp39;
  TNode<IntPtrT> tmp40;
  TNode<Object> tmp41;
  TNode<BoolT> tmp42;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp37 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp33});
    tmp38 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp30}, TNode<IntPtrT>{tmp37});
    std::tie(tmp39, tmp40) = NewReference_Object_0(state_, TNode<Object>{tmp29}, TNode<IntPtrT>{tmp38}).Flatten();
    tmp41 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp39, tmp40});
    tmp42 = CodeStubAssembler(state_).TaggedEqual(TNode<MaybeObject>{tmp41}, TNode<MaybeObject>{tmp16});
    ca_.Branch(tmp42, &block22, std::vector<compiler::Node*>{}, &block23, std::vector<compiler::Node*>{});
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block23.is_used()) {
    ca_.Bind(&block23);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 859});
      CodeStubAssembler(state_).FailAssert("Torque assert 'TaggedEqual(*firstRef, oneTwoThree)' failed", pos_stack);
    }
  }

  TNode<Object> tmp43;
  TNode<IntPtrT> tmp44;
  TNode<IntPtrT> tmp45;
  TNode<IntPtrT> tmp46;
  TNode<UintPtrT> tmp47;
  TNode<UintPtrT> tmp48;
  TNode<BoolT> tmp49;
  if (block22.is_used()) {
    ca_.Bind(&block22);
    std::tie(tmp43, tmp44, tmp45) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp11}).Flatten();
    tmp46 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp47 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp46});
    tmp48 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp45});
    tmp49 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp47}, TNode<UintPtrT>{tmp48});
    ca_.Branch(tmp49, &block27, std::vector<compiler::Node*>{}, &block28, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp50;
  TNode<IntPtrT> tmp51;
  TNode<Object> tmp52;
  TNode<IntPtrT> tmp53;
  TNode<Object> tmp54;
  TNode<BoolT> tmp55;
  if (block27.is_used()) {
    ca_.Bind(&block27);
    tmp50 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp46});
    tmp51 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp44}, TNode<IntPtrT>{tmp50});
    std::tie(tmp52, tmp53) = NewReference_Object_0(state_, TNode<Object>{tmp43}, TNode<IntPtrT>{tmp51}).Flatten();
    tmp54 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp52, tmp53});
    tmp55 = CodeStubAssembler(state_).TaggedEqual(TNode<MaybeObject>{tmp54}, TNode<MaybeObject>{tmp16});
    ca_.Branch(tmp55, &block31, std::vector<compiler::Node*>{}, &block32, std::vector<compiler::Node*>{});
  }

  if (block28.is_used()) {
    ca_.Bind(&block28);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block32.is_used()) {
    ca_.Bind(&block32);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 863});
      CodeStubAssembler(state_).FailAssert("Torque assert 'TaggedEqual(*firstRefAgain, oneTwoThree)' failed", pos_stack);
    }
  }

  TNode<Smi> tmp56;
  TNode<Object> tmp57;
  TNode<IntPtrT> tmp58;
  TNode<IntPtrT> tmp59;
  TNode<UintPtrT> tmp60;
  TNode<IntPtrT> tmp61;
  TNode<UintPtrT> tmp62;
  TNode<UintPtrT> tmp63;
  TNode<BoolT> tmp64;
  if (block31.is_used()) {
    ca_.Bind(&block31);
    tmp56 = Convert_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x141ull));
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp52, tmp53}, tmp56);
    std::tie(tmp57, tmp58, tmp59) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp11}).Flatten();
    tmp60 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp61 = Convert_intptr_uintptr_0(state_, TNode<UintPtrT>{tmp60});
    tmp62 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp61});
    tmp63 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp59});
    tmp64 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp62}, TNode<UintPtrT>{tmp63});
    ca_.Branch(tmp64, &block40, std::vector<compiler::Node*>{}, &block41, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp65;
  TNode<IntPtrT> tmp66;
  TNode<Object> tmp67;
  TNode<IntPtrT> tmp68;
  TNode<Object> tmp69;
  TNode<BoolT> tmp70;
  if (block40.is_used()) {
    ca_.Bind(&block40);
    tmp65 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp61});
    tmp66 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp58}, TNode<IntPtrT>{tmp65});
    std::tie(tmp67, tmp68) = NewReference_Object_0(state_, TNode<Object>{tmp57}, TNode<IntPtrT>{tmp66}).Flatten();
    tmp69 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp67, tmp68});
    tmp70 = CodeStubAssembler(state_).TaggedEqual(TNode<MaybeObject>{tmp69}, TNode<MaybeObject>{tmp56});
    ca_.Branch(tmp70, &block33, std::vector<compiler::Node*>{}, &block34, std::vector<compiler::Node*>{});
  }

  if (block41.is_used()) {
    ca_.Bind(&block41);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block34.is_used()) {
    ca_.Bind(&block34);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 867});
      CodeStubAssembler(state_).FailAssert("Torque assert 'TaggedEqual(a.objects[0], threeTwoOne)' failed", pos_stack);
    }
  }

  if (block33.is_used()) {
    ca_.Bind(&block33);
    ca_.Goto(&block44);
  }

    ca_.Bind(&block44);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=878&c=1
TNode<Oddball> TestSliceEnumeration_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block36(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block50(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi> block52(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi> block54(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<FixedArray> tmp1;
  TNode<IntPtrT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp1 = CodeStubAssembler(state_).AllocateZeroedFixedArray(TNode<IntPtrT>{tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block4, tmp2);
  }

  TNode<IntPtrT> phi_bb4_2;
  TNode<IntPtrT> tmp3;
  TNode<BoolT> tmp4;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_2);
    tmp3 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp4 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{phi_bb4_2}, TNode<IntPtrT>{tmp3});
    ca_.Branch(tmp4, &block2, std::vector<compiler::Node*>{phi_bb4_2}, &block3, std::vector<compiler::Node*>{phi_bb4_2});
  }

  TNode<IntPtrT> phi_bb2_2;
  TNode<Object> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<UintPtrT> tmp8;
  TNode<UintPtrT> tmp9;
  TNode<BoolT> tmp10;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_2);
    std::tie(tmp5, tmp6, tmp7) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp8 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb2_2});
    tmp9 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp7});
    tmp10 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp8}, TNode<UintPtrT>{tmp9});
    ca_.Branch(tmp10, &block12, std::vector<compiler::Node*>{phi_bb2_2, phi_bb2_2, phi_bb2_2, phi_bb2_2, phi_bb2_2}, &block13, std::vector<compiler::Node*>{phi_bb2_2, phi_bb2_2, phi_bb2_2, phi_bb2_2, phi_bb2_2});
  }

  TNode<IntPtrT> phi_bb12_2;
  TNode<IntPtrT> phi_bb12_7;
  TNode<IntPtrT> phi_bb12_8;
  TNode<IntPtrT> phi_bb12_12;
  TNode<IntPtrT> phi_bb12_13;
  TNode<IntPtrT> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<Object> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<Object> tmp15;
  TNode<Smi> tmp16;
  TNode<Smi> tmp17;
  TNode<BoolT> tmp18;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_2, &phi_bb12_7, &phi_bb12_8, &phi_bb12_12, &phi_bb12_13);
    tmp11 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb12_13});
    tmp12 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp6}, TNode<IntPtrT>{tmp11});
    std::tie(tmp13, tmp14) = NewReference_Object_0(state_, TNode<Object>{tmp5}, TNode<IntPtrT>{tmp12}).Flatten();
    tmp15 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp13, tmp14});
    tmp16 = UnsafeCast_Smi_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp15});
    tmp17 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp18 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp16}, TNode<Smi>{tmp17});
    ca_.Branch(tmp18, &block6, std::vector<compiler::Node*>{phi_bb12_2}, &block7, std::vector<compiler::Node*>{phi_bb12_2});
  }

  TNode<IntPtrT> phi_bb13_2;
  TNode<IntPtrT> phi_bb13_7;
  TNode<IntPtrT> phi_bb13_8;
  TNode<IntPtrT> phi_bb13_12;
  TNode<IntPtrT> phi_bb13_13;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_2, &phi_bb13_7, &phi_bb13_8, &phi_bb13_12, &phi_bb13_13);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb7_2;
  if (block7.is_used()) {
    ca_.Bind(&block7, &phi_bb7_2);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 882});
      CodeStubAssembler(state_).FailAssert("Torque assert 'UnsafeCast<Smi>(fixedArray.objects[i]) == 0' failed", pos_stack);
    }
  }

  TNode<IntPtrT> phi_bb6_2;
  TNode<Object> tmp19;
  TNode<IntPtrT> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<UintPtrT> tmp22;
  TNode<UintPtrT> tmp23;
  TNode<BoolT> tmp24;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_2);
    std::tie(tmp19, tmp20, tmp21) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp22 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb6_2});
    tmp23 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp21});
    tmp24 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp22}, TNode<UintPtrT>{tmp23});
    ca_.Branch(tmp24, &block20, std::vector<compiler::Node*>{phi_bb6_2, phi_bb6_2, phi_bb6_2, phi_bb6_2, phi_bb6_2}, &block21, std::vector<compiler::Node*>{phi_bb6_2, phi_bb6_2, phi_bb6_2, phi_bb6_2, phi_bb6_2});
  }

  TNode<IntPtrT> phi_bb20_2;
  TNode<IntPtrT> phi_bb20_7;
  TNode<IntPtrT> phi_bb20_8;
  TNode<IntPtrT> phi_bb20_12;
  TNode<IntPtrT> phi_bb20_13;
  TNode<IntPtrT> tmp25;
  TNode<IntPtrT> tmp26;
  TNode<Object> tmp27;
  TNode<IntPtrT> tmp28;
  TNode<Smi> tmp29;
  TNode<Smi> tmp30;
  TNode<Smi> tmp31;
  TNode<IntPtrT> tmp32;
  TNode<IntPtrT> tmp33;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_2, &phi_bb20_7, &phi_bb20_8, &phi_bb20_12, &phi_bb20_13);
    tmp25 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb20_13});
    tmp26 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp20}, TNode<IntPtrT>{tmp25});
    std::tie(tmp27, tmp28) = NewReference_Object_0(state_, TNode<Object>{tmp19}, TNode<IntPtrT>{tmp26}).Flatten();
    tmp29 = Convert_Smi_intptr_0(state_, TNode<IntPtrT>{phi_bb20_2});
    tmp30 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp31 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp29}, TNode<Smi>{tmp30});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp27, tmp28}, tmp31);
    tmp32 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp33 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb20_2}, TNode<IntPtrT>{tmp32});
    ca_.Goto(&block4, tmp33);
  }

  TNode<IntPtrT> phi_bb21_2;
  TNode<IntPtrT> phi_bb21_7;
  TNode<IntPtrT> phi_bb21_8;
  TNode<IntPtrT> phi_bb21_12;
  TNode<IntPtrT> phi_bb21_13;
  if (block21.is_used()) {
    ca_.Bind(&block21, &phi_bb21_2, &phi_bb21_7, &phi_bb21_8, &phi_bb21_12, &phi_bb21_13);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb3_2;
  TNode<Object> tmp34;
  TNode<IntPtrT> tmp35;
  TNode<IntPtrT> tmp36;
  TNode<IntPtrT> tmp37;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_2);
    std::tie(tmp34, tmp35, tmp36) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp37 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block26, tmp37);
  }

  TNode<IntPtrT> phi_bb26_5;
  TNode<BoolT> tmp38;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_5);
    tmp38 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{phi_bb26_5}, TNode<IntPtrT>{tmp36});
    ca_.Branch(tmp38, &block24, std::vector<compiler::Node*>{phi_bb26_5}, &block25, std::vector<compiler::Node*>{phi_bb26_5});
  }

  TNode<IntPtrT> phi_bb24_5;
  TNode<UintPtrT> tmp39;
  TNode<UintPtrT> tmp40;
  TNode<BoolT> tmp41;
  if (block24.is_used()) {
    ca_.Bind(&block24, &phi_bb24_5);
    tmp39 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb24_5});
    tmp40 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp36});
    tmp41 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp39}, TNode<UintPtrT>{tmp40});
    ca_.Branch(tmp41, &block31, std::vector<compiler::Node*>{phi_bb24_5, phi_bb24_5, phi_bb24_5}, &block32, std::vector<compiler::Node*>{phi_bb24_5, phi_bb24_5, phi_bb24_5});
  }

  TNode<IntPtrT> phi_bb31_5;
  TNode<IntPtrT> phi_bb31_6;
  TNode<IntPtrT> phi_bb31_7;
  TNode<IntPtrT> tmp42;
  TNode<IntPtrT> tmp43;
  TNode<Object> tmp44;
  TNode<IntPtrT> tmp45;
  TNode<Object> tmp46;
  TNode<Smi> tmp47;
  TNode<Smi> tmp48;
  TNode<Smi> tmp49;
  TNode<Smi> tmp50;
  TNode<BoolT> tmp51;
  if (block31.is_used()) {
    ca_.Bind(&block31, &phi_bb31_5, &phi_bb31_6, &phi_bb31_7);
    tmp42 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb31_7});
    tmp43 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp35}, TNode<IntPtrT>{tmp42});
    std::tie(tmp44, tmp45) = NewReference_Object_0(state_, TNode<Object>{tmp34}, TNode<IntPtrT>{tmp43}).Flatten();
    tmp46 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp44, tmp45});
    tmp47 = UnsafeCast_Smi_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp46});
    tmp48 = Convert_Smi_intptr_0(state_, TNode<IntPtrT>{phi_bb31_5});
    tmp49 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp50 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp48}, TNode<Smi>{tmp49});
    tmp51 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp47}, TNode<Smi>{tmp50});
    ca_.Branch(tmp51, &block35, std::vector<compiler::Node*>{phi_bb31_5}, &block36, std::vector<compiler::Node*>{phi_bb31_5});
  }

  TNode<IntPtrT> phi_bb32_5;
  TNode<IntPtrT> phi_bb32_6;
  TNode<IntPtrT> phi_bb32_7;
  if (block32.is_used()) {
    ca_.Bind(&block32, &phi_bb32_5, &phi_bb32_6, &phi_bb32_7);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb36_5;
  if (block36.is_used()) {
    ca_.Bind(&block36, &phi_bb36_5);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 890});
      CodeStubAssembler(state_).FailAssert("Torque assert 'value == Convert<Smi>(i) + 3' failed", pos_stack);
    }
  }

  TNode<IntPtrT> phi_bb35_5;
  TNode<Smi> tmp52;
  TNode<Smi> tmp53;
  TNode<IntPtrT> tmp54;
  TNode<IntPtrT> tmp55;
  if (block35.is_used()) {
    ca_.Bind(&block35, &phi_bb35_5);
    tmp52 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x4ull));
    tmp53 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp47}, TNode<Smi>{tmp52});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp44, tmp45}, tmp53);
    tmp54 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp55 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb35_5}, TNode<IntPtrT>{tmp54});
    ca_.Goto(&block26, tmp55);
  }

  TNode<IntPtrT> phi_bb25_5;
  TNode<IntPtrT> tmp56;
  TNode<IntPtrT> tmp57;
  TNode<Smi> tmp58;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_5);
    tmp56 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp36});
    tmp57 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp35}, TNode<IntPtrT>{tmp56});
    tmp58 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block40, tmp35, tmp58);
  }

  TNode<IntPtrT> phi_bb40_6;
  TNode<Smi> phi_bb40_8;
  TNode<BoolT> tmp59;
  if (block40.is_used()) {
    ca_.Bind(&block40, &phi_bb40_6, &phi_bb40_8);
    tmp59 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp59, &block38, std::vector<compiler::Node*>{phi_bb40_6, phi_bb40_8}, &block39, std::vector<compiler::Node*>{phi_bb40_6, phi_bb40_8});
  }

  TNode<IntPtrT> phi_bb38_6;
  TNode<Smi> phi_bb38_8;
  TNode<BoolT> tmp60;
  if (block38.is_used()) {
    ca_.Bind(&block38, &phi_bb38_6, &phi_bb38_8);
    tmp60 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb38_6}, TNode<IntPtrT>{tmp57});
    ca_.Branch(tmp60, &block45, std::vector<compiler::Node*>{phi_bb38_6, phi_bb38_8}, &block46, std::vector<compiler::Node*>{phi_bb38_6, phi_bb38_8});
  }

  TNode<IntPtrT> phi_bb45_6;
  TNode<Smi> phi_bb45_8;
  if (block45.is_used()) {
    ca_.Bind(&block45, &phi_bb45_6, &phi_bb45_8);
    ca_.Goto(&block39, phi_bb45_6, phi_bb45_8);
  }

  TNode<IntPtrT> phi_bb46_6;
  TNode<Smi> phi_bb46_8;
  TNode<Object> tmp61;
  TNode<IntPtrT> tmp62;
  TNode<IntPtrT> tmp63;
  TNode<IntPtrT> tmp64;
  TNode<Object> tmp65;
  TNode<Smi> tmp66;
  TNode<Smi> tmp67;
  TNode<Smi> tmp68;
  TNode<BoolT> tmp69;
  if (block46.is_used()) {
    ca_.Bind(&block46, &phi_bb46_6, &phi_bb46_8);
    std::tie(tmp61, tmp62) = NewReference_Object_0(state_, TNode<Object>{tmp34}, TNode<IntPtrT>{phi_bb46_6}).Flatten();
    tmp63 = FromConstexpr_intptr_constexpr_int31_0(state_, kTaggedSize);
    tmp64 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb46_6}, TNode<IntPtrT>{tmp63});
    tmp65 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp61, tmp62});
    tmp66 = UnsafeCast_Smi_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp65});
    tmp67 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x7ull));
    tmp68 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb46_8}, TNode<Smi>{tmp67});
    tmp69 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp66}, TNode<Smi>{tmp68});
    ca_.Branch(tmp69, &block49, std::vector<compiler::Node*>{phi_bb46_8}, &block50, std::vector<compiler::Node*>{phi_bb46_8});
  }

  TNode<Smi> phi_bb50_8;
  if (block50.is_used()) {
    ca_.Bind(&block50, &phi_bb50_8);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 898});
      CodeStubAssembler(state_).FailAssert("Torque assert 'value == count + 7' failed", pos_stack);
    }
  }

  TNode<Smi> phi_bb49_8;
  TNode<Smi> tmp70;
  TNode<Smi> tmp71;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_8);
    tmp70 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp71 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb49_8}, TNode<Smi>{tmp70});
    ca_.Goto(&block40, tmp64, tmp71);
  }

  TNode<IntPtrT> phi_bb39_6;
  TNode<Smi> phi_bb39_8;
  TNode<Smi> tmp72;
  TNode<BoolT> tmp73;
  if (block39.is_used()) {
    ca_.Bind(&block39, &phi_bb39_6, &phi_bb39_8);
    tmp72 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp73 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{phi_bb39_8}, TNode<Smi>{tmp72});
    ca_.Branch(tmp73, &block51, std::vector<compiler::Node*>{phi_bb39_6, phi_bb39_8}, &block52, std::vector<compiler::Node*>{phi_bb39_6, phi_bb39_8});
  }

  TNode<IntPtrT> phi_bb52_6;
  TNode<Smi> phi_bb52_8;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_6, &phi_bb52_8);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 901});
      CodeStubAssembler(state_).FailAssert("Torque assert 'count == 3' failed", pos_stack);
    }
  }

  TNode<IntPtrT> phi_bb51_6;
  TNode<Smi> phi_bb51_8;
  TNode<BoolT> tmp74;
  if (block51.is_used()) {
    ca_.Bind(&block51, &phi_bb51_6, &phi_bb51_8);
    tmp74 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb51_6}, TNode<IntPtrT>{tmp57});
    ca_.Branch(tmp74, &block53, std::vector<compiler::Node*>{phi_bb51_6, phi_bb51_8}, &block54, std::vector<compiler::Node*>{phi_bb51_6, phi_bb51_8});
  }

  TNode<IntPtrT> phi_bb54_6;
  TNode<Smi> phi_bb54_8;
  if (block54.is_used()) {
    ca_.Bind(&block54, &phi_bb54_6, &phi_bb54_8);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 902});
      CodeStubAssembler(state_).FailAssert("Torque assert 'it.Empty()' failed", pos_stack);
    }
  }

  TNode<IntPtrT> phi_bb53_6;
  TNode<Smi> phi_bb53_8;
  TNode<Oddball> tmp75;
  if (block53.is_used()) {
    ca_.Bind(&block53, &phi_bb53_6, &phi_bb53_8);
    tmp75 = Undefined_0(state_);
    ca_.Goto(&block56);
  }

    ca_.Bind(&block56);
  return TNode<Oddball>{tmp75};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=907&c=1
void TestStaticAssert_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  TNode<UintPtrT> tmp1;
  TNode<UintPtrT> tmp2;
  TNode<BoolT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<UintPtrT> tmp5;
  TNode<BoolT> tmp6;
  TNode<BoolT> tmp7;
  TNode<UintPtrT> tmp8;
  TNode<UintPtrT> tmp9;
  TNode<BoolT> tmp10;
  TNode<BoolT> tmp11;
  TNode<UintPtrT> tmp12;
  TNode<UintPtrT> tmp13;
  TNode<BoolT> tmp14;
  TNode<UintPtrT> tmp15;
  TNode<UintPtrT> tmp16;
  TNode<BoolT> tmp17;
  TNode<UintPtrT> tmp18;
  TNode<UintPtrT> tmp19;
  TNode<BoolT> tmp20;
  TNode<BoolT> tmp21;
  TNode<IntPtrT> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<BoolT> tmp24;
  TNode<IntPtrT> tmp25;
  TNode<IntPtrT> tmp26;
  TNode<BoolT> tmp27;
  TNode<BoolT> tmp28;
  TNode<IntPtrT> tmp29;
  TNode<IntPtrT> tmp30;
  TNode<BoolT> tmp31;
  TNode<BoolT> tmp32;
  TNode<IntPtrT> tmp33;
  TNode<IntPtrT> tmp34;
  TNode<BoolT> tmp35;
  TNode<IntPtrT> tmp36;
  TNode<IntPtrT> tmp37;
  TNode<BoolT> tmp38;
  TNode<IntPtrT> tmp39;
  TNode<IntPtrT> tmp40;
  TNode<BoolT> tmp41;
  TNode<BoolT> tmp42;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_bool_constexpr_bool_0(state_, (CodeStubAssembler(state_).ConstexprIntegerLiteralEqual((CodeStubAssembler(state_).ConstexprIntegerLiteralAdd(IntegerLiteral(false, 0x1ull), IntegerLiteral(false, 0x2ull))), IntegerLiteral(false, 0x3ull))));
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp0}, "static_assert(1 + 2 == 3) at https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=909&c=3");
    tmp1 = Convert_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp2 = Convert_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x6ull));
    tmp3 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp1}, TNode<UintPtrT>{tmp2});
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp3}, "static_assert(Convert<uintptr>(5) < Convert<uintptr>(6)) at https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=911&c=3");
    tmp4 = Convert_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp5 = Convert_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp6 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp4}, TNode<UintPtrT>{tmp5});
    tmp7 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp6});
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp7}, "static_assert(!(Convert<uintptr>(5) < Convert<uintptr>(5))) at https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=912&c=3");
    tmp8 = Convert_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x6ull));
    tmp9 = Convert_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp10 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp8}, TNode<UintPtrT>{tmp9});
    tmp11 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp10});
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp11}, "static_assert(!(Convert<uintptr>(6) < Convert<uintptr>(5))) at https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=913&c=3");
    tmp12 = Convert_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp13 = Convert_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp14 = CodeStubAssembler(state_).UintPtrLessThanOrEqual(TNode<UintPtrT>{tmp12}, TNode<UintPtrT>{tmp13});
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp14}, "static_assert(Convert<uintptr>(5) <= Convert<uintptr>(5)) at https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=914&c=3");
    tmp15 = Convert_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp16 = Convert_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x6ull));
    tmp17 = CodeStubAssembler(state_).UintPtrLessThanOrEqual(TNode<UintPtrT>{tmp15}, TNode<UintPtrT>{tmp16});
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp17}, "static_assert(Convert<uintptr>(5) <= Convert<uintptr>(6)) at https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=915&c=3");
    tmp18 = Convert_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x6ull));
    tmp19 = Convert_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp20 = CodeStubAssembler(state_).UintPtrLessThanOrEqual(TNode<UintPtrT>{tmp18}, TNode<UintPtrT>{tmp19});
    tmp21 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp20});
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp21}, "static_assert(!(Convert<uintptr>(6) <= Convert<uintptr>(5))) at https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=916&c=3");
    tmp22 = Convert_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x6ull));
    tmp23 = Convert_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x5ull));
    tmp24 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{tmp22}, TNode<IntPtrT>{tmp23});
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp24}, "static_assert(Convert<intptr>(-6) < Convert<intptr>(-5)) at https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=918&c=3");
    tmp25 = Convert_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x5ull));
    tmp26 = Convert_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x5ull));
    tmp27 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{tmp25}, TNode<IntPtrT>{tmp26});
    tmp28 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp27});
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp28}, "static_assert(!(Convert<intptr>(-5) < Convert<intptr>(-5))) at https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=919&c=3");
    tmp29 = Convert_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x5ull));
    tmp30 = Convert_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x6ull));
    tmp31 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{tmp29}, TNode<IntPtrT>{tmp30});
    tmp32 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp31});
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp32}, "static_assert(!(Convert<intptr>(-5) < Convert<intptr>(-6))) at https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=920&c=3");
    tmp33 = Convert_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x5ull));
    tmp34 = Convert_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x5ull));
    tmp35 = CodeStubAssembler(state_).IntPtrLessThanOrEqual(TNode<IntPtrT>{tmp33}, TNode<IntPtrT>{tmp34});
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp35}, "static_assert(Convert<intptr>(-5) <= Convert<intptr>(-5)) at https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=921&c=3");
    tmp36 = Convert_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x6ull));
    tmp37 = Convert_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x5ull));
    tmp38 = CodeStubAssembler(state_).IntPtrLessThanOrEqual(TNode<IntPtrT>{tmp36}, TNode<IntPtrT>{tmp37});
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp38}, "static_assert(Convert<intptr>(-6) <= Convert<intptr>(-5)) at https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=922&c=3");
    tmp39 = Convert_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x5ull));
    tmp40 = Convert_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x6ull));
    tmp41 = CodeStubAssembler(state_).IntPtrLessThanOrEqual(TNode<IntPtrT>{tmp39}, TNode<IntPtrT>{tmp40});
    tmp42 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp41});
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp42}, "static_assert(!(Convert<intptr>(-5) <= Convert<intptr>(-6))) at https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=923&c=3");
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=926&c=1
TNode<SmiBox> Cast_SmiBox_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<SmiBox> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = DownCastForTorqueClass_SmiBox_0(state_, TNode<HeapObject>{p_obj}, &label1);
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
  return TNode<SmiBox>{tmp0};
}

TF_BUILTIN(NewSmiBox, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<Smi> parameter1 = UncheckedParameter<Smi>(Descriptor::kValue);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Map> tmp0;
  TNode<BoolT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<HeapObject> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<Smi> tmp7;
  TNode<SmiBox> tmp8;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).GetInstanceTypeMap(SMI_BOX_TYPE);
    tmp1 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp3 = AllocateFromNew_0(state_, TNode<IntPtrT>{tmp2}, TNode<Map>{tmp0}, TNode<BoolT>{tmp1});
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp3, tmp4}, tmp0);
    tmp5 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp3, tmp5}, parameter1);
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp7 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp3, tmp6}, tmp7);
    tmp8 = TORQUE_CAST(TNode<HeapObject>{tmp3});
    CodeStubAssembler(state_).Return(tmp8);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=935&c=1
void TestLoadEliminationFixed_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<SmiBox> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Smi> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Smi> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<Smi> tmp7;
  TNode<Smi> tmp8;
  TNode<BoolT> tmp9;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x7bull));
    tmp1 = ca_.CallStub<SmiBox>(Builtins::CallableFor(ca_.isolate(), Builtin::kNewSmiBox), p_context, tmp0);
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp3 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp1, tmp2});
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp5 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3e7ull));
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp1, tmp4}, tmp5);
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp7 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp1, tmp6});
    tmp8 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp9 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp7}, TNode<Smi>{tmp8});
    ca_.Branch(tmp9, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp10;
  TNode<Smi> tmp11;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp10 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp11 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp1, tmp10});
    ca_.Goto(&block4, tmp11);
  }

  TNode<IntPtrT> tmp12;
  TNode<Smi> tmp13;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp12 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp13 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp1, tmp12});
    ca_.Goto(&block4, tmp13);
  }

  TNode<Smi> phi_bb4_3;
  TNode<BoolT> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<Smi> tmp16;
  TNode<IntPtrT> tmp17;
  TNode<Smi> tmp18;
  TNode<Smi> tmp19;
  TNode<BoolT> tmp20;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_3);
    tmp14 = CodeStubAssembler(state_).TaggedEqual(TNode<MaybeObject>{tmp3}, TNode<MaybeObject>{phi_bb4_3});
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp14}, "static_assert(TaggedEqual(v1, v2)) at https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=941&c=3");
    tmp15 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp16 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xbull));
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp1, tmp15}, tmp16);
    tmp17 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp18 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp1, tmp17});
    tmp19 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xbull));
    tmp20 = CodeStubAssembler(state_).TaggedEqual(TNode<MaybeObject>{tmp18}, TNode<MaybeObject>{tmp19});
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp20}, "static_assert(TaggedEqual(v3, eleven)) at https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=946&c=3");
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=949&c=1
void TestLoadEliminationVariable_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<FixedArray> tmp0;
  TNode<FixedArray> tmp1;
  TNode<Smi> tmp2;
  TNode<SmiBox> tmp3;
  TNode<Object> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Smi> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<UintPtrT> tmp10;
  TNode<UintPtrT> tmp11;
  TNode<BoolT> tmp12;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = kEmptyFixedArray_0(state_);
    tmp1 = UnsafeCast_FixedArray_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp0});
    tmp2 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = ca_.CallStub<SmiBox>(Builtins::CallableFor(ca_.isolate(), Builtin::kNewSmiBox), p_context, tmp2);
    std::tie(tmp4, tmp5, tmp6) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp8 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp3, tmp7});
    tmp9 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp8});
    tmp10 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp9});
    tmp11 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp6});
    tmp12 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp10}, TNode<UintPtrT>{tmp11});
    ca_.Branch(tmp12, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<Object> tmp15;
  TNode<IntPtrT> tmp16;
  TNode<Object> tmp17;
  TNode<Object> tmp18;
  TNode<IntPtrT> tmp19;
  TNode<IntPtrT> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<Smi> tmp22;
  TNode<Smi> tmp23;
  TNode<Smi> tmp24;
  TNode<IntPtrT> tmp25;
  TNode<UintPtrT> tmp26;
  TNode<UintPtrT> tmp27;
  TNode<BoolT> tmp28;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp13 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp9});
    tmp14 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp5}, TNode<IntPtrT>{tmp13});
    std::tie(tmp15, tmp16) = NewReference_Object_0(state_, TNode<Object>{tmp4}, TNode<IntPtrT>{tmp14}).Flatten();
    tmp17 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp15, tmp16});
    std::tie(tmp18, tmp19, tmp20) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp21 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp22 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp3, tmp21});
    tmp23 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp24 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp22}, TNode<Smi>{tmp23});
    tmp25 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp24});
    tmp26 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp25});
    tmp27 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp20});
    tmp28 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp26}, TNode<UintPtrT>{tmp27});
    ca_.Branch(tmp28, &block14, std::vector<compiler::Node*>{}, &block15, std::vector<compiler::Node*>{});
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp29;
  TNode<IntPtrT> tmp30;
  TNode<Object> tmp31;
  TNode<IntPtrT> tmp32;
  TNode<Object> tmp33;
  TNode<Object> tmp34;
  TNode<IntPtrT> tmp35;
  TNode<IntPtrT> tmp36;
  TNode<IntPtrT> tmp37;
  TNode<Smi> tmp38;
  TNode<IntPtrT> tmp39;
  TNode<UintPtrT> tmp40;
  TNode<UintPtrT> tmp41;
  TNode<BoolT> tmp42;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp29 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp25});
    tmp30 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp19}, TNode<IntPtrT>{tmp29});
    std::tie(tmp31, tmp32) = NewReference_Object_0(state_, TNode<Object>{tmp18}, TNode<IntPtrT>{tmp30}).Flatten();
    tmp33 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp31, tmp32});
    std::tie(tmp34, tmp35, tmp36) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp37 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp38 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp3, tmp37});
    tmp39 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp38});
    tmp40 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp39});
    tmp41 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp36});
    tmp42 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp40}, TNode<UintPtrT>{tmp41});
    ca_.Branch(tmp42, &block22, std::vector<compiler::Node*>{}, &block23, std::vector<compiler::Node*>{});
  }

  if (block15.is_used()) {
    ca_.Bind(&block15);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp43;
  TNode<IntPtrT> tmp44;
  TNode<Object> tmp45;
  TNode<IntPtrT> tmp46;
  TNode<Object> tmp47;
  TNode<Object> tmp48;
  TNode<IntPtrT> tmp49;
  TNode<IntPtrT> tmp50;
  TNode<IntPtrT> tmp51;
  TNode<Smi> tmp52;
  TNode<Smi> tmp53;
  TNode<Smi> tmp54;
  TNode<IntPtrT> tmp55;
  TNode<UintPtrT> tmp56;
  TNode<UintPtrT> tmp57;
  TNode<BoolT> tmp58;
  if (block22.is_used()) {
    ca_.Bind(&block22);
    tmp43 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp39});
    tmp44 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp35}, TNode<IntPtrT>{tmp43});
    std::tie(tmp45, tmp46) = NewReference_Object_0(state_, TNode<Object>{tmp34}, TNode<IntPtrT>{tmp44}).Flatten();
    tmp47 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp45, tmp46});
    std::tie(tmp48, tmp49, tmp50) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp1}).Flatten();
    tmp51 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp52 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp3, tmp51});
    tmp53 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp54 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp52}, TNode<Smi>{tmp53});
    tmp55 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp54});
    tmp56 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp55});
    tmp57 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp50});
    tmp58 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp56}, TNode<UintPtrT>{tmp57});
    ca_.Branch(tmp58, &block30, std::vector<compiler::Node*>{}, &block31, std::vector<compiler::Node*>{});
  }

  if (block23.is_used()) {
    ca_.Bind(&block23);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp59;
  TNode<IntPtrT> tmp60;
  TNode<Object> tmp61;
  TNode<IntPtrT> tmp62;
  TNode<Object> tmp63;
  TNode<BoolT> tmp64;
  TNode<BoolT> tmp65;
  if (block30.is_used()) {
    ca_.Bind(&block30);
    tmp59 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp55});
    tmp60 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp49}, TNode<IntPtrT>{tmp59});
    std::tie(tmp61, tmp62) = NewReference_Object_0(state_, TNode<Object>{tmp48}, TNode<IntPtrT>{tmp60}).Flatten();
    tmp63 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp61, tmp62});
    tmp64 = CodeStubAssembler(state_).TaggedEqual(TNode<MaybeObject>{tmp17}, TNode<MaybeObject>{tmp47});
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp64}, "static_assert(TaggedEqual(v1, v2)) at https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=957&c=3");
    tmp65 = CodeStubAssembler(state_).TaggedEqual(TNode<MaybeObject>{tmp33}, TNode<MaybeObject>{tmp63});
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp65}, "static_assert(TaggedEqual(u1, u2)) at https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=958&c=3");
    ca_.Goto(&block34);
  }

  if (block31.is_used()) {
    ca_.Bind(&block31);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block34);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=961&c=1
TNode<Smi> TestRedundantArrayElementCheck_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<FixedArray> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = kEmptyFixedArray_0(state_);
    tmp1 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block4, tmp1);
  }

  TNode<Smi> phi_bb4_2;
  TNode<IntPtrT> tmp2;
  TNode<Smi> tmp3;
  TNode<BoolT> tmp4;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_2);
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp3 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp2});
    tmp4 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb4_2}, TNode<Smi>{tmp3});
    ca_.Branch(tmp4, &block2, std::vector<compiler::Node*>{phi_bb4_2}, &block3, std::vector<compiler::Node*>{phi_bb4_2});
  }

  TNode<Smi> phi_bb2_2;
  TNode<Object> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<UintPtrT> tmp9;
  TNode<UintPtrT> tmp10;
  TNode<BoolT> tmp11;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_2);
    std::tie(tmp5, tmp6, tmp7) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp0}).Flatten();
    tmp8 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb2_2});
    tmp9 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp8});
    tmp10 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp7});
    tmp11 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp9}, TNode<UintPtrT>{tmp10});
    ca_.Branch(tmp11, &block12, std::vector<compiler::Node*>{phi_bb2_2, phi_bb2_2, phi_bb2_2}, &block13, std::vector<compiler::Node*>{phi_bb2_2, phi_bb2_2, phi_bb2_2});
  }

  TNode<Smi> phi_bb12_2;
  TNode<Smi> phi_bb12_7;
  TNode<Smi> phi_bb12_8;
  TNode<IntPtrT> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<Object> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<Object> tmp16;
  TNode<Oddball> tmp17;
  TNode<BoolT> tmp18;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_2, &phi_bb12_7, &phi_bb12_8);
    tmp12 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp8});
    tmp13 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp6}, TNode<IntPtrT>{tmp12});
    std::tie(tmp14, tmp15) = NewReference_Object_0(state_, TNode<Object>{tmp5}, TNode<IntPtrT>{tmp13}).Flatten();
    tmp16 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp14, tmp15});
    tmp17 = TheHole_0(state_);
    tmp18 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp16}, TNode<HeapObject>{tmp17});
    ca_.Branch(tmp18, &block6, std::vector<compiler::Node*>{phi_bb12_2}, &block7, std::vector<compiler::Node*>{phi_bb12_2});
  }

  TNode<Smi> phi_bb13_2;
  TNode<Smi> phi_bb13_7;
  TNode<Smi> phi_bb13_8;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_2, &phi_bb13_7, &phi_bb13_8);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb6_2;
  TNode<Object> tmp19;
  TNode<IntPtrT> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<IntPtrT> tmp22;
  TNode<UintPtrT> tmp23;
  TNode<UintPtrT> tmp24;
  TNode<BoolT> tmp25;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_2);
    std::tie(tmp19, tmp20, tmp21) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp0}).Flatten();
    tmp22 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb6_2});
    tmp23 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp22});
    tmp24 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp21});
    tmp25 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp23}, TNode<UintPtrT>{tmp24});
    ca_.Branch(tmp25, &block22, std::vector<compiler::Node*>{phi_bb6_2, phi_bb6_2, phi_bb6_2}, &block23, std::vector<compiler::Node*>{phi_bb6_2, phi_bb6_2, phi_bb6_2});
  }

  TNode<Smi> phi_bb22_2;
  TNode<Smi> phi_bb22_7;
  TNode<Smi> phi_bb22_8;
  TNode<IntPtrT> tmp26;
  TNode<IntPtrT> tmp27;
  TNode<Object> tmp28;
  TNode<IntPtrT> tmp29;
  TNode<Object> tmp30;
  TNode<Oddball> tmp31;
  TNode<BoolT> tmp32;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_2, &phi_bb22_7, &phi_bb22_8);
    tmp26 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp22});
    tmp27 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp20}, TNode<IntPtrT>{tmp26});
    std::tie(tmp28, tmp29) = NewReference_Object_0(state_, TNode<Object>{tmp19}, TNode<IntPtrT>{tmp27}).Flatten();
    tmp30 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp28, tmp29});
    tmp31 = TheHole_0(state_);
    tmp32 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp30}, TNode<HeapObject>{tmp31});
    ca_.Branch(tmp32, &block16, std::vector<compiler::Node*>{phi_bb22_2}, &block17, std::vector<compiler::Node*>{phi_bb22_2});
  }

  TNode<Smi> phi_bb23_2;
  TNode<Smi> phi_bb23_7;
  TNode<Smi> phi_bb23_8;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_2, &phi_bb23_7, &phi_bb23_8);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb16_2;
  TNode<Smi> tmp33;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_2);
    tmp33 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    ca_.Goto(&block1, tmp33);
  }

  TNode<Smi> phi_bb17_2;
  TNode<BoolT> tmp34;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_2);
    tmp34 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp34}, "static_assert(false) at https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=969&c=9");
    ca_.Goto(&block7, phi_bb17_2);
  }

  TNode<Smi> phi_bb7_2;
  TNode<Smi> tmp35;
  TNode<Smi> tmp36;
  if (block7.is_used()) {
    ca_.Bind(&block7, &phi_bb7_2);
    tmp35 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp36 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb7_2}, TNode<Smi>{tmp35});
    ca_.Goto(&block4, tmp36);
  }

  TNode<Smi> phi_bb3_2;
  TNode<Smi> tmp37;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_2);
    tmp37 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    ca_.Goto(&block1, tmp37);
  }

  TNode<Smi> phi_bb1_1;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_1);
    ca_.Goto(&block27, phi_bb1_1);
  }

  TNode<Smi> phi_bb27_1;
    ca_.Bind(&block27, &phi_bb27_1);
  return TNode<Smi>{phi_bb27_1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=976&c=1
TNode<Smi> TestRedundantSmiCheck_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<FixedArray> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<UintPtrT> tmp6;
  TNode<UintPtrT> tmp7;
  TNode<BoolT> tmp8;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = kEmptyFixedArray_0(state_);
    std::tie(tmp1, tmp2, tmp3) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp0}).Flatten();
    tmp4 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp5 = Convert_intptr_uintptr_0(state_, TNode<UintPtrT>{tmp4});
    tmp6 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp5});
    tmp7 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp3});
    tmp8 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp6}, TNode<UintPtrT>{tmp7});
    ca_.Branch(tmp8, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<Object> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<Object> tmp13;
  TNode<Smi> tmp14;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp9 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp5});
    tmp10 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp9});
    std::tie(tmp11, tmp12) = NewReference_Object_0(state_, TNode<Object>{tmp1}, TNode<IntPtrT>{tmp10}).Flatten();
    tmp13 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp11, tmp12});
    compiler::CodeAssemblerLabel label15(&ca_);
    tmp14 = Cast_Smi_0(state_, TNode<Object>{tmp13}, &label15);
    ca_.Goto(&block13);
    if (label15.is_used()) {
      ca_.Bind(&label15);
      ca_.Goto(&block14);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> tmp16;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp16 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    ca_.Goto(&block1, tmp16);
  }

  TNode<Smi> tmp17;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    compiler::CodeAssemblerLabel label18(&ca_);
    tmp17 = Cast_Smi_0(state_, TNode<Object>{tmp13}, &label18);
    ca_.Goto(&block17);
    if (label18.is_used()) {
      ca_.Bind(&label18);
      ca_.Goto(&block18);
    }
  }

  if (block18.is_used()) {
    ca_.Bind(&block18);
    VerifiedUnreachable_0(state_);
  }

  TNode<Smi> tmp19;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    tmp19 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    ca_.Goto(&block1, tmp19);
  }

  TNode<Smi> phi_bb1_1;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_1);
    ca_.Goto(&block19, phi_bb1_1);
  }

  TNode<Smi> phi_bb19_1;
    ca_.Bind(&block19, &phi_bb19_1);
  return TNode<Smi>{phi_bb19_1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=995&c=1
TNode<IntPtrT> TestGenericStruct1_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<BoolT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x7bull));
    tmp1 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x7bull));
    tmp2 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp1});
    ca_.Branch(tmp2, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 1000});
      CodeStubAssembler(state_).FailAssert("Torque assert 'box.value == 123' failed", pos_stack);
    }
  }

  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<BoolT> tmp6;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp3 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp4 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp3});
    tmp5 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xf6ull));
    tmp6 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp4}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 1002});
      CodeStubAssembler(state_).FailAssert("Torque assert 'boxbox.value.value == 246' failed", pos_stack);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<IntPtrT>{tmp4};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1016&c=1
TorqueStructTestTuple_TestTuple_intptr_Smi_TestTuple_Smi_intptr_0 TestGenericStruct2_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Smi> tmp1;
  TNode<Smi> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<BoolT> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp1 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    std::tie(tmp2, tmp3) = TupleSwap_intptr_Smi_0(state_, TorqueStructTestTuple_intptr_Smi_0{TNode<IntPtrT>{tmp0}, TNode<Smi>{tmp1}}).Flatten();
    tmp4 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp3});
    ca_.Branch(tmp4, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 1021});
      CodeStubAssembler(state_).FailAssert("Torque assert 'intptrAndSmi.fst == smiAndIntptr.snd' failed", pos_stack);
    }
  }

  TNode<BoolT> tmp5;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp5 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp1}, TNode<Smi>{tmp2});
    ca_.Branch(tmp5, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 1022});
      CodeStubAssembler(state_).FailAssert("Torque assert 'intptrAndSmi.snd == smiAndIntptr.fst' failed", pos_stack);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TorqueStructTestTuple_TestTuple_intptr_Smi_TestTuple_Smi_intptr_0{TorqueStructTestTuple_intptr_Smi_0{TNode<IntPtrT>{tmp0}, TNode<Smi>{tmp1}}, TorqueStructTestTuple_Smi_intptr_0{TNode<Smi>{tmp2}, TNode<IntPtrT>{tmp3}}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1028&c=1
TNode<BoolT> BranchAndWriteResult_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_x, TNode<SmiBox> p_box) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp1 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{p_x}, TNode<Smi>{tmp0});
    ca_.Branch(tmp1, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp2;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block6, tmp2);
  }

  TNode<Smi> tmp3;
  TNode<BoolT> tmp4;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp3 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp4 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{p_x}, TNode<Smi>{tmp3});
    ca_.Goto(&block6, tmp4);
  }

  TNode<BoolT> phi_bb6_3;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_3);
    ca_.Branch(phi_bb6_3, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp5;
  TNode<Smi> tmp6;
  TNode<BoolT> tmp7;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp5 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp6 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{p_box, tmp5}, tmp6);
    tmp7 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block1, tmp7);
  }

  TNode<IntPtrT> tmp8;
  TNode<Smi> tmp9;
  TNode<BoolT> tmp10;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp8 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp9 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{p_box, tmp8}, tmp9);
    tmp10 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block1, tmp10);
  }

  TNode<BoolT> phi_bb1_2;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_2);
    ca_.Goto(&block8);
  }

    ca_.Bind(&block8);
  return TNode<BoolT>{phi_bb1_2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1038&c=1
void TestBranchOnBoolOptimization_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Smi> p_input) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<SmiBox> tmp1;
  TNode<BoolT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp1 = ca_.CallStub<SmiBox>(Builtins::CallableFor(ca_.isolate(), Builtin::kNewSmiBox), p_context, tmp0);
    tmp2 = BranchAndWriteResult_0(state_, TNode<Smi>{p_input}, TNode<SmiBox>{tmp1});
    ca_.Branch(tmp2, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp3;
  TNode<Smi> tmp4;
  TNode<Smi> tmp5;
  TNode<BoolT> tmp6;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp4 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp1, tmp3});
    tmp5 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp6 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp4}, TNode<Smi>{tmp5});
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp6}, "static_assert(box.value == 1) at https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1045&c=5");
    ca_.Goto(&block4);
  }

  TNode<IntPtrT> tmp7;
  TNode<Smi> tmp8;
  TNode<Smi> tmp9;
  TNode<BoolT> tmp10;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp8 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp1, tmp7});
    tmp9 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp10 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp8}, TNode<Smi>{tmp9});
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp10}, "static_assert(box.value == 2) at https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1047&c=5");
    ca_.Goto(&block4);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1058&c=1
void TestBitFieldLoad_0(compiler::CodeAssemblerState* state_, TNode<Uint8T> p_val, TNode<BoolT> p_expectedA, TNode<Uint16T> p_expectedB, TNode<Uint32T> p_expectedC, TNode<BoolT> p_expectedD) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 0, 1, uint8_t>>(ca_.UncheckedCast<Word32T>(p_val)));
    tmp1 = CodeStubAssembler(state_).Word32Equal(TNode<BoolT>{tmp0}, TNode<BoolT>{p_expectedA});
    ca_.Branch(tmp1, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 1062});
      CodeStubAssembler(state_).FailAssert("Torque assert 'val.a == expectedA' failed", pos_stack);
    }
  }

  TNode<Uint16T> tmp2;
  TNode<BoolT> tmp3;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp2 = ca_.UncheckedCast<Uint16T>(CodeStubAssembler(state_).DecodeWord32<base::BitField<uint16_t, 1, 3, uint8_t>>(ca_.UncheckedCast<Word32T>(p_val)));
    tmp3 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp2}, TNode<Uint32T>{p_expectedB});
    ca_.Branch(tmp3, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 1063});
      CodeStubAssembler(state_).FailAssert("Torque assert 'val.b == expectedB' failed", pos_stack);
    }
  }

  TNode<Uint32T> tmp4;
  TNode<BoolT> tmp5;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp4 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).DecodeWord32<base::BitField<uint32_t, 4, 3, uint8_t>>(ca_.UncheckedCast<Word32T>(p_val)));
    tmp5 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp4}, TNode<Uint32T>{p_expectedC});
    ca_.Branch(tmp5, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 1064});
      CodeStubAssembler(state_).FailAssert("Torque assert 'val.c == expectedC' failed", pos_stack);
    }
  }

  TNode<BoolT> tmp6;
  TNode<BoolT> tmp7;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp6 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 7, 1, uint8_t>>(ca_.UncheckedCast<Word32T>(p_val)));
    tmp7 = CodeStubAssembler(state_).Word32Equal(TNode<BoolT>{tmp6}, TNode<BoolT>{p_expectedD});
    ca_.Branch(tmp7, &block8, std::vector<compiler::Node*>{}, &block9, std::vector<compiler::Node*>{});
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 1065});
      CodeStubAssembler(state_).FailAssert("Torque assert 'val.d == expectedD' failed", pos_stack);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block10);
  }

    ca_.Bind(&block10);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1068&c=1
void TestBitFieldStore_0(compiler::CodeAssemblerState* state_, TNode<Uint8T> p_val) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  TNode<Uint16T> tmp1;
  TNode<Uint32T> tmp2;
  TNode<BoolT> tmp3;
  TNode<BoolT> tmp4;
  TNode<Uint8T> tmp5;
  TNode<BoolT> tmp6;
  TNode<Uint32T> tmp7;
  TNode<Int32T> tmp8;
  TNode<Int32T> tmp9;
  TNode<Int32T> tmp10;
  TNode<Uint32T> tmp11;
  TNode<Uint8T> tmp12;
  TNode<BoolT> tmp13;
  TNode<Uint16T> tmp14;
  TNode<Uint32T> tmp15;
  TNode<BoolT> tmp16;
  TNode<Uint8T> tmp17;
  TNode<BoolT> tmp18;
  TNode<BoolT> tmp19;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 0, 1, uint8_t>>(ca_.UncheckedCast<Word32T>(p_val)));
    tmp1 = ca_.UncheckedCast<Uint16T>(CodeStubAssembler(state_).DecodeWord32<base::BitField<uint16_t, 1, 3, uint8_t>>(ca_.UncheckedCast<Word32T>(p_val)));
    tmp2 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).DecodeWord32<base::BitField<uint32_t, 4, 3, uint8_t>>(ca_.UncheckedCast<Word32T>(p_val)));
    tmp3 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 7, 1, uint8_t>>(ca_.UncheckedCast<Word32T>(p_val)));
    tmp4 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp0});
    tmp5 = ca_.UncheckedCast<Uint8T>(CodeStubAssembler(state_).UpdateWord32<base::BitField<bool, 0, 1, uint8_t>>(ca_.UncheckedCast<Word32T>(p_val), ca_.UncheckedCast<Uint32T>(tmp4)));
    tmp6 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp0});
    TestBitFieldLoad_0(state_, TNode<Uint8T>{tmp5}, TNode<BoolT>{tmp6}, TNode<Uint16T>{tmp1}, TNode<Uint32T>{tmp2}, TNode<BoolT>{tmp3});
    tmp7 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).DecodeWord32<base::BitField<uint32_t, 4, 3, uint8_t>>(ca_.UncheckedCast<Word32T>(tmp5)));
    tmp8 = CodeStubAssembler(state_).Signed(TNode<Uint32T>{tmp7});
    tmp9 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x7ull));
    tmp10 = CodeStubAssembler(state_).Int32Sub(TNode<Int32T>{tmp9}, TNode<Int32T>{tmp8});
    tmp11 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp10});
    tmp12 = ca_.UncheckedCast<Uint8T>(CodeStubAssembler(state_).UpdateWord32<base::BitField<uint32_t, 4, 3, uint8_t>>(ca_.UncheckedCast<Word32T>(tmp5), ca_.UncheckedCast<Uint32T>(tmp11)));
    tmp13 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp0});
    TestBitFieldLoad_0(state_, TNode<Uint8T>{tmp12}, TNode<BoolT>{tmp13}, TNode<Uint16T>{tmp1}, TNode<Uint32T>{tmp11}, TNode<BoolT>{tmp3});
    tmp14 = ca_.UncheckedCast<Uint16T>(CodeStubAssembler(state_).DecodeWord32<base::BitField<uint16_t, 1, 3, uint8_t>>(ca_.UncheckedCast<Word32T>(tmp12)));
    tmp15 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).DecodeWord32<base::BitField<uint32_t, 4, 3, uint8_t>>(ca_.UncheckedCast<Word32T>(tmp12)));
    tmp16 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp14}, TNode<Uint32T>{tmp15});
    tmp17 = ca_.UncheckedCast<Uint8T>(CodeStubAssembler(state_).UpdateWord32<base::BitField<bool, 7, 1, uint8_t>>(ca_.UncheckedCast<Word32T>(tmp12), ca_.UncheckedCast<Uint32T>(tmp16)));
    tmp18 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp0});
    tmp19 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp1}, TNode<Uint32T>{tmp11});
    TestBitFieldLoad_0(state_, TNode<Uint8T>{tmp17}, TNode<BoolT>{tmp18}, TNode<Uint16T>{tmp1}, TNode<Uint32T>{tmp11}, TNode<BoolT>{tmp19});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1087&c=1
void TestBitFieldInit_0(compiler::CodeAssemblerState* state_, TNode<BoolT> p_a, TNode<Uint16T> p_b, TNode<Uint32T> p_c, TNode<BoolT> p_d) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Int32T> tmp0;
  TNode<Uint32T> tmp1;
  TNode<Uint8T> tmp2;
  TNode<Uint8T> tmp3;
  TNode<Uint8T> tmp4;
  TNode<Uint8T> tmp5;
  TNode<Uint8T> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_int32_constexpr_int32_0(state_, 0);
    tmp1 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp0});
    tmp2 = ca_.UncheckedCast<Uint8T>(TNode<Uint32T>{tmp1});
    tmp3 = ca_.UncheckedCast<Uint8T>(CodeStubAssembler(state_).UpdateWord32<base::BitField<bool, 0, 1, uint8_t>>(ca_.UncheckedCast<Word32T>(tmp2), ca_.UncheckedCast<Uint32T>(p_a), true));
    tmp4 = ca_.UncheckedCast<Uint8T>(CodeStubAssembler(state_).UpdateWord32<base::BitField<uint16_t, 1, 3, uint8_t>>(ca_.UncheckedCast<Word32T>(tmp3), ca_.UncheckedCast<Uint32T>(p_b), true));
    tmp5 = ca_.UncheckedCast<Uint8T>(CodeStubAssembler(state_).UpdateWord32<base::BitField<uint32_t, 4, 3, uint8_t>>(ca_.UncheckedCast<Word32T>(tmp4), ca_.UncheckedCast<Uint32T>(p_c), true));
    tmp6 = ca_.UncheckedCast<Uint8T>(CodeStubAssembler(state_).UpdateWord32<base::BitField<bool, 7, 1, uint8_t>>(ca_.UncheckedCast<Word32T>(tmp5), ca_.UncheckedCast<Uint32T>(p_d), true));
    TestBitFieldLoad_0(state_, TNode<Uint8T>{tmp6}, TNode<BoolT>{p_a}, TNode<Uint16T>{p_b}, TNode<Uint32T>{p_c}, TNode<BoolT>{p_d});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1105&c=1
void TestBitFieldUintptrOps_0(compiler::CodeAssemblerState* state_, TNode<Uint32T> p_val2, TNode<UintPtrT> p_val3) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<UintPtrT> tmp0;
  TNode<UintPtrT> tmp1;
  TNode<BoolT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).DecodeWordFromWord32<base::BitField<uintptr_t, 0, 5, uint32_t>>(ca_.UncheckedCast<Word32T>(p_val2)));
    tmp1 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp2 = CodeStubAssembler(state_).WordEqual(TNode<UintPtrT>{tmp0}, TNode<UintPtrT>{tmp1});
    ca_.Branch(tmp2, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 1113});
      CodeStubAssembler(state_).FailAssert("Torque assert 'val2.a == 3' failed", pos_stack);
    }
  }

  TNode<UintPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp3 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).DecodeWordFromWord32<base::BitField<uintptr_t, 5, 6, uint32_t>>(ca_.UncheckedCast<Word32T>(p_val2)));
    tmp4 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3dull));
    tmp5 = CodeStubAssembler(state_).WordEqual(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 1114});
      CodeStubAssembler(state_).FailAssert("Torque assert 'val2.b == 61' failed", pos_stack);
    }
  }

  TNode<BoolT> tmp6;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp6 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32FromWord<base::BitField<bool, 0, 1, uintptr_t>>(ca_.UncheckedCast<WordT>(p_val3)));
    ca_.Branch(tmp6, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 1115});
      CodeStubAssembler(state_).FailAssert("Torque assert 'val3.c' failed", pos_stack);
    }
  }

  TNode<Uint32T> tmp7;
  TNode<Uint32T> tmp8;
  TNode<BoolT> tmp9;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp7 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).DecodeWord32FromWord<base::BitField<uint32_t, 1, 9, uintptr_t>>(ca_.UncheckedCast<WordT>(p_val3)));
    tmp8 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1f4ull));
    tmp9 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp7}, TNode<Uint32T>{tmp8});
    ca_.Branch(tmp9, &block8, std::vector<compiler::Node*>{}, &block9, std::vector<compiler::Node*>{});
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 1116});
      CodeStubAssembler(state_).FailAssert("Torque assert 'val3.d == 500' failed", pos_stack);
    }
  }

  TNode<UintPtrT> tmp10;
  TNode<UintPtrT> tmp11;
  TNode<BoolT> tmp12;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp10 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).DecodeWord<base::BitField<uintptr_t, 10, 17, uintptr_t>>(ca_.UncheckedCast<WordT>(p_val3)));
    tmp11 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ccull));
    tmp12 = CodeStubAssembler(state_).WordEqual(TNode<UintPtrT>{tmp10}, TNode<UintPtrT>{tmp11});
    ca_.Branch(tmp12, &block10, std::vector<compiler::Node*>{}, &block11, std::vector<compiler::Node*>{});
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 1117});
      CodeStubAssembler(state_).FailAssert("Torque assert 'val3.e == 0x1cc' failed", pos_stack);
    }
  }

  TNode<UintPtrT> tmp13;
  TNode<Uint32T> tmp14;
  TNode<UintPtrT> tmp15;
  TNode<UintPtrT> tmp16;
  TNode<BoolT> tmp17;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp13 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x10ull));
    tmp14 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).UpdateWordInWord32<base::BitField<uintptr_t, 5, 6, uint32_t>>(ca_.UncheckedCast<Word32T>(p_val2), ca_.UncheckedCast<UintPtrT>(tmp13)));
    tmp15 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).DecodeWordFromWord32<base::BitField<uintptr_t, 0, 5, uint32_t>>(ca_.UncheckedCast<Word32T>(tmp14)));
    tmp16 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp17 = CodeStubAssembler(state_).WordEqual(TNode<UintPtrT>{tmp15}, TNode<UintPtrT>{tmp16});
    ca_.Branch(tmp17, &block12, std::vector<compiler::Node*>{}, &block13, std::vector<compiler::Node*>{});
  }

  if (block13.is_used()) {
    ca_.Bind(&block13);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 1120});
      CodeStubAssembler(state_).FailAssert("Torque assert 'val2.a == 3' failed", pos_stack);
    }
  }

  TNode<UintPtrT> tmp18;
  TNode<UintPtrT> tmp19;
  TNode<BoolT> tmp20;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp18 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).DecodeWordFromWord32<base::BitField<uintptr_t, 5, 6, uint32_t>>(ca_.UncheckedCast<Word32T>(tmp14)));
    tmp19 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x10ull));
    tmp20 = CodeStubAssembler(state_).WordEqual(TNode<UintPtrT>{tmp18}, TNode<UintPtrT>{tmp19});
    ca_.Branch(tmp20, &block14, std::vector<compiler::Node*>{}, &block15, std::vector<compiler::Node*>{});
  }

  if (block15.is_used()) {
    ca_.Bind(&block15);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 1121});
      CodeStubAssembler(state_).FailAssert("Torque assert 'val2.b == 16' failed", pos_stack);
    }
  }

  TNode<UintPtrT> tmp21;
  TNode<UintPtrT> tmp22;
  TNode<UintPtrT> tmp23;
  TNode<Uint32T> tmp24;
  TNode<UintPtrT> tmp25;
  TNode<UintPtrT> tmp26;
  TNode<BoolT> tmp27;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp21 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).DecodeWordFromWord32<base::BitField<uintptr_t, 5, 6, uint32_t>>(ca_.UncheckedCast<Word32T>(tmp14)));
    tmp22 = FromConstexpr_uintptr_constexpr_int31_0(state_, 1);
    tmp23 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp21}, TNode<UintPtrT>{tmp22});
    tmp24 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).UpdateWordInWord32<base::BitField<uintptr_t, 5, 6, uint32_t>>(ca_.UncheckedCast<Word32T>(tmp14), ca_.UncheckedCast<UintPtrT>(tmp23)));
    tmp25 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).DecodeWordFromWord32<base::BitField<uintptr_t, 0, 5, uint32_t>>(ca_.UncheckedCast<Word32T>(tmp24)));
    tmp26 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp27 = CodeStubAssembler(state_).WordEqual(TNode<UintPtrT>{tmp25}, TNode<UintPtrT>{tmp26});
    ca_.Branch(tmp27, &block16, std::vector<compiler::Node*>{}, &block17, std::vector<compiler::Node*>{});
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 1124});
      CodeStubAssembler(state_).FailAssert("Torque assert 'val2.a == 3' failed", pos_stack);
    }
  }

  TNode<UintPtrT> tmp28;
  TNode<UintPtrT> tmp29;
  TNode<BoolT> tmp30;
  if (block16.is_used()) {
    ca_.Bind(&block16);
    tmp28 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).DecodeWordFromWord32<base::BitField<uintptr_t, 5, 6, uint32_t>>(ca_.UncheckedCast<Word32T>(tmp24)));
    tmp29 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x11ull));
    tmp30 = CodeStubAssembler(state_).WordEqual(TNode<UintPtrT>{tmp28}, TNode<UintPtrT>{tmp29});
    ca_.Branch(tmp30, &block18, std::vector<compiler::Node*>{}, &block19, std::vector<compiler::Node*>{});
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 1125});
      CodeStubAssembler(state_).FailAssert("Torque assert 'val2.b == 17' failed", pos_stack);
    }
  }

  TNode<Uint32T> tmp31;
  TNode<UintPtrT> tmp32;
  TNode<UintPtrT> tmp33;
  TNode<UintPtrT> tmp34;
  TNode<BoolT> tmp35;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp31 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x63ull));
    tmp32 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UpdateWord32InWord<base::BitField<uint32_t, 1, 9, uintptr_t>>(ca_.UncheckedCast<WordT>(p_val3), ca_.UncheckedCast<Uint32T>(tmp31)));
    tmp33 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x4d2ull));
    tmp34 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UpdateWord<base::BitField<uintptr_t, 10, 17, uintptr_t>>(ca_.UncheckedCast<WordT>(tmp32), ca_.UncheckedCast<UintPtrT>(tmp33)));
    tmp35 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32FromWord<base::BitField<bool, 0, 1, uintptr_t>>(ca_.UncheckedCast<WordT>(tmp34)));
    ca_.Branch(tmp35, &block20, std::vector<compiler::Node*>{}, &block21, std::vector<compiler::Node*>{});
  }

  if (block21.is_used()) {
    ca_.Bind(&block21);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 1129});
      CodeStubAssembler(state_).FailAssert("Torque assert 'val3.c' failed", pos_stack);
    }
  }

  TNode<Uint32T> tmp36;
  TNode<Uint32T> tmp37;
  TNode<BoolT> tmp38;
  if (block20.is_used()) {
    ca_.Bind(&block20);
    tmp36 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).DecodeWord32FromWord<base::BitField<uint32_t, 1, 9, uintptr_t>>(ca_.UncheckedCast<WordT>(tmp34)));
    tmp37 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x63ull));
    tmp38 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp36}, TNode<Uint32T>{tmp37});
    ca_.Branch(tmp38, &block22, std::vector<compiler::Node*>{}, &block23, std::vector<compiler::Node*>{});
  }

  if (block23.is_used()) {
    ca_.Bind(&block23);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 1130});
      CodeStubAssembler(state_).FailAssert("Torque assert 'val3.d == 99' failed", pos_stack);
    }
  }

  TNode<UintPtrT> tmp39;
  TNode<UintPtrT> tmp40;
  TNode<BoolT> tmp41;
  if (block22.is_used()) {
    ca_.Bind(&block22);
    tmp39 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).DecodeWord<base::BitField<uintptr_t, 10, 17, uintptr_t>>(ca_.UncheckedCast<WordT>(tmp34)));
    tmp40 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x4d2ull));
    tmp41 = CodeStubAssembler(state_).WordEqual(TNode<UintPtrT>{tmp39}, TNode<UintPtrT>{tmp40});
    ca_.Branch(tmp41, &block24, std::vector<compiler::Node*>{}, &block25, std::vector<compiler::Node*>{});
  }

  if (block25.is_used()) {
    ca_.Bind(&block25);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 1131});
      CodeStubAssembler(state_).FailAssert("Torque assert 'val3.e == 1234' failed", pos_stack);
    }
  }

  if (block24.is_used()) {
    ca_.Bind(&block24);
    ca_.Goto(&block26);
  }

    ca_.Bind(&block26);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1146&c=1
void TestBitFieldMultipleFlags_0(compiler::CodeAssemblerState* state_, TNode<BoolT> p_a, TNode<Int32T> p_b, TNode<BoolT> p_c) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Int32T> tmp0;
  TNode<Uint32T> tmp1;
  TNode<Uint32T> tmp2;
  TNode<Uint32T> tmp3;
  TNode<Uint32T> tmp4;
  TNode<Uint32T> tmp5;
  TNode<BoolT> tmp6;
  TNode<Int32T> tmp7;
  TNode<Int32T> tmp8;
  TNode<BoolT> tmp9;
  TNode<BoolT> tmp10;
  TNode<BoolT> tmp11;
  TNode<BoolT> tmp12;
  TNode<BoolT> tmp13;
  TNode<Int32T> tmp14;
  TNode<Int32T> tmp15;
  TNode<Int32T> tmp16;
  TNode<Int32T> tmp17;
  TNode<BoolT> tmp18;
  TNode<BoolT> tmp19;
  TNode<BoolT> tmp20;
  TNode<BoolT> tmp21;
  TNode<Int32T> tmp22;
  TNode<Int32T> tmp23;
  TNode<BoolT> tmp24;
  TNode<BoolT> tmp25;
  TNode<BoolT> tmp26;
  TNode<BoolT> tmp27;
  TNode<Int32T> tmp28;
  TNode<Int32T> tmp29;
  TNode<Int32T> tmp30;
  TNode<Int32T> tmp31;
  TNode<BoolT> tmp32;
  TNode<BoolT> tmp33;
  TNode<Int32T> tmp34;
  TNode<Int32T> tmp35;
  TNode<BoolT> tmp36;
  TNode<BoolT> tmp37;
  TNode<BoolT> tmp38;
  TNode<Int32T> tmp39;
  TNode<Int32T> tmp40;
  TNode<Int32T> tmp41;
  TNode<Int32T> tmp42;
  TNode<BoolT> tmp43;
  TNode<BoolT> tmp44;
  TNode<BoolT> tmp45;
  TNode<BoolT> tmp46;
  TNode<BoolT> tmp47;
  TNode<Int32T> tmp48;
  TNode<Int32T> tmp49;
  TNode<Int32T> tmp50;
  TNode<Int32T> tmp51;
  TNode<BoolT> tmp52;
  TNode<BoolT> tmp53;
  TNode<Int32T> tmp54;
  TNode<Uint32T> tmp55;
  TNode<Uint32T> tmp56;
  TNode<Uint32T> tmp57;
  TNode<Uint32T> tmp58;
  TNode<Uint32T> tmp59;
  TNode<BoolT> tmp60;
  TNode<BoolT> tmp61;
  TNode<Int32T> tmp62;
  TNode<Int32T> tmp63;
  TNode<BoolT> tmp64;
  TNode<BoolT> tmp65;
  TNode<BoolT> tmp66;
  TNode<BoolT> tmp67;
  TNode<Int32T> tmp68;
  TNode<Int32T> tmp69;
  TNode<Int32T> tmp70;
  TNode<Int32T> tmp71;
  TNode<BoolT> tmp72;
  TNode<BoolT> tmp73;
  TNode<BoolT> tmp74;
  TNode<BoolT> tmp75;
  TNode<BoolT> tmp76;
  TNode<BoolT> tmp77;
  TNode<BoolT> tmp78;
  TNode<Int32T> tmp79;
  TNode<Int32T> tmp80;
  TNode<Int32T> tmp81;
  TNode<Int32T> tmp82;
  TNode<BoolT> tmp83;
  TNode<BoolT> tmp84;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_int32_constexpr_int32_0(state_, 0);
    tmp1 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp0});
    tmp2 = (TNode<Uint32T>{tmp1});
    tmp3 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).UpdateWord32<base::BitField<bool, 0, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(tmp2), ca_.UncheckedCast<Uint32T>(p_a), true));
    tmp4 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).UpdateWord32<base::BitField<int32_t, 1, 3, uint32_t>>(ca_.UncheckedCast<Word32T>(tmp3), ca_.UncheckedCast<Uint32T>(p_b), true));
    tmp5 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).UpdateWord32<base::BitField<bool, 4, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(tmp4), ca_.UncheckedCast<Uint32T>(p_c), true));
    tmp6 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 0, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(tmp5)));
    tmp7 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).DecodeWord32<base::BitField<int32_t, 1, 3, uint32_t>>(ca_.UncheckedCast<Word32T>(tmp5)));
    tmp8 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp9 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp7}, TNode<Int32T>{tmp8});
    tmp10 = CodeStubAssembler(state_).Word32And(TNode<BoolT>{tmp6}, TNode<BoolT>{tmp9});
    tmp11 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 4, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(tmp5)));
    tmp12 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp11});
    tmp13 = CodeStubAssembler(state_).Word32And(TNode<BoolT>{tmp10}, TNode<BoolT>{tmp12});
    tmp14 = CodeStubAssembler(state_).Signed(TNode<Uint32T>{tmp5});
    tmp15 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1full));
    tmp16 = CodeStubAssembler(state_).Word32And(TNode<Int32T>{tmp14}, TNode<Int32T>{tmp15});
    tmp17 = Convert_int32_constexpr_IntegerLiteral_0(state_, (CodeStubAssembler(state_).ConstexprIntegerLiteralBitwiseOr(IntegerLiteral(false, 0x1ull), (CodeStubAssembler(state_).ConstexprIntegerLiteralLeftShift(IntegerLiteral(false, 0x3ull), IntegerLiteral(false, 0x1ull))))));
    tmp18 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp16}, TNode<Int32T>{tmp17});
    tmp19 = CodeStubAssembler(state_).Word32Equal(TNode<BoolT>{tmp13}, TNode<BoolT>{tmp18});
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp19}, "static_assert(simpleExpression == expectedReduction) at https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1151&c=3");
    tmp20 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 0, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(tmp5)));
    tmp21 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp20});
    tmp22 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).DecodeWord32<base::BitField<int32_t, 1, 3, uint32_t>>(ca_.UncheckedCast<Word32T>(tmp5)));
    tmp23 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x4ull));
    tmp24 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp22}, TNode<Int32T>{tmp23});
    tmp25 = CodeStubAssembler(state_).Word32And(TNode<BoolT>{tmp21}, TNode<BoolT>{tmp24});
    tmp26 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 4, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(tmp5)));
    tmp27 = CodeStubAssembler(state_).Word32And(TNode<BoolT>{tmp25}, TNode<BoolT>{tmp26});
    tmp28 = CodeStubAssembler(state_).Signed(TNode<Uint32T>{tmp5});
    tmp29 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1full));
    tmp30 = CodeStubAssembler(state_).Word32And(TNode<Int32T>{tmp28}, TNode<Int32T>{tmp29});
    tmp31 = Convert_int32_constexpr_IntegerLiteral_0(state_, (CodeStubAssembler(state_).ConstexprIntegerLiteralBitwiseOr((CodeStubAssembler(state_).ConstexprIntegerLiteralLeftShift(IntegerLiteral(false, 0x4ull), IntegerLiteral(false, 0x1ull))), (CodeStubAssembler(state_).ConstexprIntegerLiteralLeftShift(IntegerLiteral(false, 0x1ull), IntegerLiteral(false, 0x4ull))))));
    tmp32 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp30}, TNode<Int32T>{tmp31});
    tmp33 = CodeStubAssembler(state_).Word32Equal(TNode<BoolT>{tmp27}, TNode<BoolT>{tmp32});
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp33}, "static_assert(simpleExpression == expectedReduction) at https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1154&c=3");
    tmp34 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).DecodeWord32<base::BitField<int32_t, 1, 3, uint32_t>>(ca_.UncheckedCast<Word32T>(tmp5)));
    tmp35 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp36 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp34}, TNode<Int32T>{tmp35});
    tmp37 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 4, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(tmp5)));
    tmp38 = CodeStubAssembler(state_).Word32And(TNode<BoolT>{tmp36}, TNode<BoolT>{tmp37});
    tmp39 = CodeStubAssembler(state_).Signed(TNode<Uint32T>{tmp5});
    tmp40 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1eull));
    tmp41 = CodeStubAssembler(state_).Word32And(TNode<Int32T>{tmp39}, TNode<Int32T>{tmp40});
    tmp42 = Convert_int32_constexpr_IntegerLiteral_0(state_, (CodeStubAssembler(state_).ConstexprIntegerLiteralLeftShift(IntegerLiteral(false, 0x1ull), IntegerLiteral(false, 0x4ull))));
    tmp43 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp41}, TNode<Int32T>{tmp42});
    tmp44 = CodeStubAssembler(state_).Word32Equal(TNode<BoolT>{tmp38}, TNode<BoolT>{tmp43});
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp44}, "static_assert(simpleExpression == expectedReduction) at https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1157&c=3");
    tmp45 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 0, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(tmp5)));
    tmp46 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 4, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(tmp5)));
    tmp47 = CodeStubAssembler(state_).Word32And(TNode<BoolT>{tmp45}, TNode<BoolT>{tmp46});
    tmp48 = CodeStubAssembler(state_).Signed(TNode<Uint32T>{tmp5});
    tmp49 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x11ull));
    tmp50 = CodeStubAssembler(state_).Word32And(TNode<Int32T>{tmp48}, TNode<Int32T>{tmp49});
    tmp51 = Convert_int32_constexpr_IntegerLiteral_0(state_, (CodeStubAssembler(state_).ConstexprIntegerLiteralBitwiseOr(IntegerLiteral(false, 0x1ull), (CodeStubAssembler(state_).ConstexprIntegerLiteralLeftShift(IntegerLiteral(false, 0x1ull), IntegerLiteral(false, 0x4ull))))));
    tmp52 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp50}, TNode<Int32T>{tmp51});
    tmp53 = CodeStubAssembler(state_).Word32Equal(TNode<BoolT>{tmp47}, TNode<BoolT>{tmp52});
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp53}, "static_assert(simpleExpression == expectedReduction) at https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1160&c=3");
    tmp54 = FromConstexpr_int32_constexpr_int32_0(state_, 0);
    tmp55 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp54});
    tmp56 = (TNode<Uint32T>{tmp55});
    tmp57 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).UpdateWord32<base::BitField<int32_t, 0, 19, uint32_t>>(ca_.UncheckedCast<Word32T>(tmp56), ca_.UncheckedCast<Uint32T>(p_b), true));
    tmp58 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).UpdateWord32<base::BitField<bool, 19, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(tmp57), ca_.UncheckedCast<Uint32T>(p_a), true));
    tmp59 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).UpdateWord32<base::BitField<bool, 20, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(tmp58), ca_.UncheckedCast<Uint32T>(p_c), true));
    tmp60 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 19, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(tmp59)));
    tmp61 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp60});
    tmp62 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).DecodeWord32<base::BitField<int32_t, 0, 19, uint32_t>>(ca_.UncheckedCast<Word32T>(tmp59)));
    tmp63 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x4d2ull));
    tmp64 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp62}, TNode<Int32T>{tmp63});
    tmp65 = CodeStubAssembler(state_).Word32And(TNode<BoolT>{tmp61}, TNode<BoolT>{tmp64});
    tmp66 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 20, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(tmp59)));
    tmp67 = CodeStubAssembler(state_).Word32And(TNode<BoolT>{tmp65}, TNode<BoolT>{tmp66});
    tmp68 = CodeStubAssembler(state_).Signed(TNode<Uint32T>{tmp59});
    tmp69 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1fffffull));
    tmp70 = CodeStubAssembler(state_).Word32And(TNode<Int32T>{tmp68}, TNode<Int32T>{tmp69});
    tmp71 = Convert_int32_constexpr_IntegerLiteral_0(state_, (CodeStubAssembler(state_).ConstexprIntegerLiteralBitwiseOr(IntegerLiteral(false, 0x4d2ull), (CodeStubAssembler(state_).ConstexprIntegerLiteralLeftShift(IntegerLiteral(false, 0x1ull), IntegerLiteral(false, 0x14ull))))));
    tmp72 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp70}, TNode<Int32T>{tmp71});
    tmp73 = CodeStubAssembler(state_).Word32Equal(TNode<BoolT>{tmp67}, TNode<BoolT>{tmp72});
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp73}, "static_assert(simpleExpression == expectedReduction) at https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1164&c=3");
    tmp74 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 19, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(tmp59)));
    tmp75 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp74});
    tmp76 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 20, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(tmp59)));
    tmp77 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp76});
    tmp78 = CodeStubAssembler(state_).Word32And(TNode<BoolT>{tmp75}, TNode<BoolT>{tmp77});
    tmp79 = CodeStubAssembler(state_).Signed(TNode<Uint32T>{tmp59});
    tmp80 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x180000ull));
    tmp81 = CodeStubAssembler(state_).Word32And(TNode<Int32T>{tmp79}, TNode<Int32T>{tmp80});
    tmp82 = Convert_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp83 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp81}, TNode<Int32T>{tmp82});
    tmp84 = CodeStubAssembler(state_).Word32Equal(TNode<BoolT>{tmp78}, TNode<BoolT>{tmp83});
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp84}, "static_assert(simpleExpression == expectedReduction) at https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1167&c=3");
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1170&c=1
TNode<ExportedSubClass> Cast_ExportedSubClass_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<ExportedSubClass> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = DownCastForTorqueClass_ExportedSubClass_0(state_, TNode<HeapObject>{p_obj}, &label1);
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
  return TNode<ExportedSubClass>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1177&c=1
TNode<ExportedSubClassBase> Cast_ExportedSubClassBase_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<ExportedSubClassBase> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = DownCastForTorqueClass_ExportedSubClassBase_0(state_, TNode<HeapObject>{p_obj}, &label1);
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
  return TNode<ExportedSubClassBase>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1183&c=1
TNode<AbstractInternalClass> Cast_AbstractInternalClass_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<AbstractInternalClass> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = DownCastForTorqueClass_AbstractInternalClass_0(state_, TNode<HeapObject>{p_obj}, &label1);
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
  return TNode<AbstractInternalClass>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1187&c=1
TNode<AbstractInternalClassSubclass1> Cast_AbstractInternalClassSubclass1_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<AbstractInternalClassSubclass1> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = DownCastForTorqueClass_AbstractInternalClassSubclass1_0(state_, TNode<HeapObject>{p_obj}, &label1);
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
  return TNode<AbstractInternalClassSubclass1>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1189&c=1
TNode<AbstractInternalClassSubclass2> Cast_AbstractInternalClassSubclass2_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<AbstractInternalClassSubclass2> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = DownCastForTorqueClass_AbstractInternalClassSubclass2_0(state_, TNode<HeapObject>{p_obj}, &label1);
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
  return TNode<AbstractInternalClassSubclass2>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1191&c=1
TNode<InternalClassWithSmiElements> Cast_InternalClassWithSmiElements_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<InternalClassWithSmiElements> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = DownCastForTorqueClass_InternalClassWithSmiElements_0(state_, TNode<HeapObject>{p_obj}, &label1);
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
  return TNode<InternalClassWithSmiElements>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1202&c=1
TNode<InternalClassWithStructElements> Cast_InternalClassWithStructElements_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<InternalClassWithStructElements> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = DownCastForTorqueClass_InternalClassWithStructElements_0(state_, TNode<HeapObject>{p_obj}, &label1);
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
  return TNode<InternalClassWithStructElements>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1226&c=1
void TestFullyGeneratedClassWithElements_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block190(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<Oddball> tmp1;
  TNode<Smi> tmp2;
  TNode<Map> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<BoolT> tmp7;
  TNode<HeapObject> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<Smi> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<InternalClassWithSmiElements> tmp15;
  TNode<Oddball> tmp16;
  TNode<Smi> tmp17;
  TNode<Smi> tmp18;
  TNode<Map> tmp19;
  TNode<IntPtrT> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<IntPtrT> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<IntPtrT> tmp24;
  TNode<BoolT> tmp25;
  TNode<HeapObject> tmp26;
  TNode<IntPtrT> tmp27;
  TNode<IntPtrT> tmp28;
  TNode<Int32T> tmp29;
  TNode<IntPtrT> tmp30;
  TNode<Int32T> tmp31;
  TNode<IntPtrT> tmp32;
  TNode<IntPtrT> tmp33;
  TNode<Smi> tmp34;
  TNode<IntPtrT> tmp35;
  TNode<IntPtrT> tmp36;
  TNode<InternalClassWithStructElements> tmp37;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Convert_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp1 = Undefined_0(state_);
    tmp2 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xbull));
    tmp3 = CodeStubAssembler(state_).GetInstanceTypeMap(INTERNAL_CLASS_WITH_SMI_ELEMENTS_TYPE);
    tmp4 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp0});
    tmp5 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp6 = AddIndexedFieldSizeToObjectSize_0(state_, TNode<IntPtrT>{tmp5}, TNode<IntPtrT>{tmp4}, kTaggedSize);
    tmp7 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp8 = AllocateFromNew_0(state_, TNode<IntPtrT>{tmp6}, TNode<Map>{tmp3}, TNode<BoolT>{tmp7});
    tmp9 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp8, tmp9}, tmp3);
    tmp10 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp8, tmp10}, tmp0);
    tmp11 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp12 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp8, tmp11}, tmp12);
    tmp13 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    CodeStubAssembler(state_).StoreReference<Oddball>(CodeStubAssembler::Reference{tmp8, tmp13}, tmp1);
    tmp14 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    InitializeFieldsFromIterator_Smi_SmiGeneratorIterator_0(state_, TorqueStructSlice_Smi_MutableReference_Smi_0{TNode<Object>{tmp8}, TNode<IntPtrT>{tmp14}, TNode<IntPtrT>{tmp4}, TorqueStructUnsafe_0{}}, TorqueStructSmiGeneratorIterator_0{TNode<Smi>{tmp2}});
    tmp15 = TORQUE_CAST(TNode<HeapObject>{tmp8});
    tmp16 = Undefined_0(state_);
    tmp17 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp18 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp19 = CodeStubAssembler(state_).GetInstanceTypeMap(INTERNAL_CLASS_WITH_STRUCT_ELEMENTS_TYPE);
    tmp20 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp0});
    tmp21 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp22 = AddIndexedFieldSizeToObjectSize_0(state_, TNode<IntPtrT>{tmp21}, TNode<IntPtrT>{tmp20}, kTaggedSize);
    tmp23 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp0});
    tmp24 = AddIndexedFieldSizeToObjectSize_0(state_, TNode<IntPtrT>{tmp22}, TNode<IntPtrT>{tmp23}, 8);
    tmp25 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp26 = AllocateFromNew_0(state_, TNode<IntPtrT>{tmp24}, TNode<Map>{tmp19}, TNode<BoolT>{tmp25});
    tmp27 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp26, tmp27}, tmp19);
    tmp28 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp29 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2cull));
    CodeStubAssembler(state_).StoreReference<Int32T>(CodeStubAssembler::Reference{tmp26, tmp28}, tmp29);
    tmp30 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp31 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2dull));
    CodeStubAssembler(state_).StoreReference<Int32T>(CodeStubAssembler::Reference{tmp26, tmp30}, tmp31);
    tmp32 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp26, tmp32}, tmp0);
    tmp33 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp34 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x37ull));
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp26, tmp33}, tmp34);
    tmp35 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp26, tmp35}, tmp16);
    tmp36 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    InitializeFieldsFromIterator_Smi_SmiGeneratorIterator_0(state_, TorqueStructSlice_Smi_MutableReference_Smi_0{TNode<Object>{tmp26}, TNode<IntPtrT>{tmp36}, TNode<IntPtrT>{tmp20}, TorqueStructUnsafe_0{}}, TorqueStructSmiGeneratorIterator_0{TNode<Smi>{tmp17}});
    InitializeFieldsFromIterator_InternalClassStructElement_InternalClassStructElementGeneratorIterator_0(state_, TorqueStructSlice_InternalClassStructElement_MutableReference_InternalClassStructElement_0{TNode<Object>{tmp26}, TNode<IntPtrT>{tmp22}, TNode<IntPtrT>{tmp23}, TorqueStructUnsafe_0{}}, TorqueStructInternalClassStructElementGeneratorIterator_0{TNode<Smi>{tmp18}});
    tmp37 = TORQUE_CAST(TNode<HeapObject>{tmp26});
    ca_.Goto(&block190);
  }

    ca_.Bind(&block190);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1276&c=1
TNode<ExportedSubClass> TestFullyGeneratedClassFromCpp_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Oddball> tmp0;
  TNode<Oddball> tmp1;
  TNode<Map> tmp2;
  TNode<BoolT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<HeapObject> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Int32T> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<Int32T> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<Smi> tmp14;
  TNode<ExportedSubClass> tmp15;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Null_0(state_);
    tmp1 = Null_0(state_);
    tmp2 = CodeStubAssembler(state_).GetInstanceTypeMap(EXPORTED_SUB_CLASS_TYPE);
    tmp3 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp5 = AllocateFromNew_0(state_, TNode<IntPtrT>{tmp4}, TNode<Map>{tmp2}, TNode<BoolT>{tmp3});
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp5, tmp6}, tmp2);
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    CodeStubAssembler(state_).StoreReference<HeapObject>(CodeStubAssembler::Reference{tmp5, tmp7}, tmp0);
    tmp8 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<HeapObject>(CodeStubAssembler::Reference{tmp5, tmp8}, tmp1);
    tmp9 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp10 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x7ull));
    CodeStubAssembler(state_).StoreReference<Int32T>(CodeStubAssembler::Reference{tmp5, tmp9}, tmp10);
    tmp11 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp12 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x8ull));
    CodeStubAssembler(state_).StoreReference<Int32T>(CodeStubAssembler::Reference{tmp5, tmp11}, tmp12);
    tmp13 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    tmp14 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x9ull));
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp5, tmp13}, tmp14);
    tmp15 = TORQUE_CAST(TNode<HeapObject>{tmp5});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<ExportedSubClass>{tmp15};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1282&c=1
TNode<ExportedSubClass2> Cast_ExportedSubClass2_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<ExportedSubClass2> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = DownCastForTorqueClass_ExportedSubClass2_0(state_, TNode<HeapObject>{p_obj}, &label1);
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
  return TNode<ExportedSubClass2>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1289&c=1
void TestGeneratedCastOperators_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Oddball> tmp0;
  TNode<Oddball> tmp1;
  TNode<Map> tmp2;
  TNode<BoolT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<HeapObject> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Int32T> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<Int32T> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<Smi> tmp14;
  TNode<ExportedSubClass> tmp15;
  TNode<Oddball> tmp16;
  TNode<Oddball> tmp17;
  TNode<Map> tmp18;
  TNode<BoolT> tmp19;
  TNode<IntPtrT> tmp20;
  TNode<HeapObject> tmp21;
  TNode<IntPtrT> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<IntPtrT> tmp24;
  TNode<ExportedSubClassBase> tmp25;
  TNode<Oddball> tmp26;
  TNode<Oddball> tmp27;
  TNode<Map> tmp28;
  TNode<BoolT> tmp29;
  TNode<IntPtrT> tmp30;
  TNode<HeapObject> tmp31;
  TNode<IntPtrT> tmp32;
  TNode<IntPtrT> tmp33;
  TNode<IntPtrT> tmp34;
  TNode<IntPtrT> tmp35;
  TNode<Int32T> tmp36;
  TNode<IntPtrT> tmp37;
  TNode<Int32T> tmp38;
  TNode<IntPtrT> tmp39;
  TNode<Smi> tmp40;
  TNode<ExportedSubClass2> tmp41;
  TNode<IntPtrT> tmp42;
  TNode<Object> tmp43;
  TNode<IntPtrT> tmp44;
  TNode<JSFunction> tmp45;
  TNode<Oddball> tmp46;
  TNode<Oddball> tmp47;
  TNode<IntPtrT> tmp48;
  TNode<FixedArray> tmp49;
  TNode<Oddball> tmp50;
  TNode<Oddball> tmp51;
  TNode<Smi> tmp52;
  TNode<SloppyArgumentsElements> tmp53;
  TNode<Smi> tmp54;
  TNode<JSArgumentsObject> tmp55;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Null_0(state_);
    tmp1 = Null_0(state_);
    tmp2 = CodeStubAssembler(state_).GetInstanceTypeMap(EXPORTED_SUB_CLASS_TYPE);
    tmp3 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp5 = AllocateFromNew_0(state_, TNode<IntPtrT>{tmp4}, TNode<Map>{tmp2}, TNode<BoolT>{tmp3});
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp5, tmp6}, tmp2);
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    CodeStubAssembler(state_).StoreReference<HeapObject>(CodeStubAssembler::Reference{tmp5, tmp7}, tmp0);
    tmp8 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<HeapObject>(CodeStubAssembler::Reference{tmp5, tmp8}, tmp1);
    tmp9 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp10 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    CodeStubAssembler(state_).StoreReference<Int32T>(CodeStubAssembler::Reference{tmp5, tmp9}, tmp10);
    tmp11 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp12 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x4ull));
    CodeStubAssembler(state_).StoreReference<Int32T>(CodeStubAssembler::Reference{tmp5, tmp11}, tmp12);
    tmp13 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    tmp14 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp5, tmp13}, tmp14);
    tmp15 = TORQUE_CAST(TNode<HeapObject>{tmp5});
    tmp16 = Undefined_0(state_);
    tmp17 = Null_0(state_);
    tmp18 = CodeStubAssembler(state_).GetInstanceTypeMap(EXPORTED_SUB_CLASS_BASE_TYPE);
    tmp19 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp20 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp21 = AllocateFromNew_0(state_, TNode<IntPtrT>{tmp20}, TNode<Map>{tmp18}, TNode<BoolT>{tmp19});
    tmp22 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp21, tmp22}, tmp18);
    tmp23 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    CodeStubAssembler(state_).StoreReference<HeapObject>(CodeStubAssembler::Reference{tmp21, tmp23}, tmp16);
    tmp24 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<HeapObject>(CodeStubAssembler::Reference{tmp21, tmp24}, tmp17);
    tmp25 = TORQUE_CAST(TNode<HeapObject>{tmp21});
    tmp26 = Null_0(state_);
    tmp27 = Null_0(state_);
    tmp28 = CodeStubAssembler(state_).GetInstanceTypeMap(EXPORTED_SUB_CLASS2_TYPE);
    tmp29 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp30 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp31 = AllocateFromNew_0(state_, TNode<IntPtrT>{tmp30}, TNode<Map>{tmp28}, TNode<BoolT>{tmp29});
    tmp32 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp31, tmp32}, tmp28);
    tmp33 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    CodeStubAssembler(state_).StoreReference<HeapObject>(CodeStubAssembler::Reference{tmp31, tmp33}, tmp26);
    tmp34 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<HeapObject>(CodeStubAssembler::Reference{tmp31, tmp34}, tmp27);
    tmp35 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp36 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    CodeStubAssembler(state_).StoreReference<Int32T>(CodeStubAssembler::Reference{tmp31, tmp35}, tmp36);
    tmp37 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp38 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x4ull));
    CodeStubAssembler(state_).StoreReference<Int32T>(CodeStubAssembler::Reference{tmp31, tmp37}, tmp38);
    tmp39 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    tmp40 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp31, tmp39}, tmp40);
    tmp41 = TORQUE_CAST(TNode<HeapObject>{tmp31});
    tmp42 = REGEXP_FUNCTION_INDEX_0(state_);
    std::tie(tmp43, tmp44) = NativeContextSlot_Context_JSFunction_0(state_, TNode<Context>{p_context}, TNode<IntPtrT>{tmp42}).Flatten();
    tmp45 = CodeStubAssembler(state_).LoadReference<JSFunction>(CodeStubAssembler::Reference{tmp43, tmp44});
    tmp46 = TheHole_0(state_);
    std::tie(tmp47) = ConstantIterator_TheHole_0(state_, TNode<Oddball>{tmp46}).Flatten();
    tmp48 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp49 = NewFixedArray_ConstantIterator_TheHole_0(state_, TNode<IntPtrT>{tmp48}, TorqueStructConstantIterator_TheHole_0{TNode<Oddball>{tmp47}});
    tmp50 = TheHole_0(state_);
    std::tie(tmp51) = ConstantIterator_TheHole_0(state_, TNode<Oddball>{tmp50}).Flatten();
    tmp52 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp53 = NewSloppyArgumentsElements_ConstantIterator_TheHole_0(state_, TNode<Smi>{tmp52}, TNode<Context>{p_context}, TNode<FixedArray>{tmp49}, TorqueStructConstantIterator_TheHole_0{TNode<Oddball>{tmp51}});
    tmp54 = Convert_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp55 = NewJSFastAliasedArgumentsObject_0(state_, TNode<Context>{p_context}, TNode<FixedArrayBase>{tmp53}, TNode<Smi>{tmp54}, TNode<JSFunction>{tmp45});
    ca_.Goto(&block42);
  }

    ca_.Bind(&block42);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1323&c=1
void TestNewPretenured_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Oddball> tmp0;
  TNode<Oddball> tmp1;
  TNode<Map> tmp2;
  TNode<BoolT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<HeapObject> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<ExportedSubClassBase> tmp9;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Undefined_0(state_);
    tmp1 = Null_0(state_);
    tmp2 = CodeStubAssembler(state_).GetInstanceTypeMap(EXPORTED_SUB_CLASS_BASE_TYPE);
    tmp3 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp5 = AllocateFromNew_0(state_, TNode<IntPtrT>{tmp4}, TNode<Map>{tmp2}, TNode<BoolT>{tmp3});
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp5, tmp6}, tmp2);
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    CodeStubAssembler(state_).StoreReference<HeapObject>(CodeStubAssembler::Reference{tmp5, tmp7}, tmp0);
    tmp8 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<HeapObject>(CodeStubAssembler::Reference{tmp5, tmp8}, tmp1);
    tmp9 = TORQUE_CAST(TNode<HeapObject>{tmp5});
    ca_.Goto(&block10);
  }

    ca_.Bind(&block10);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1330&c=1
void TestWord8Phi_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Int8T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x5ull));
    ca_.Goto(&block4, tmp0);
  }

  TNode<IntPtrT> phi_bb4_0;
  TNode<IntPtrT> tmp1;
  TNode<BoolT> tmp2;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_0);
    tmp1 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp2 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{phi_bb4_0}, TNode<IntPtrT>{tmp1});
    ca_.Branch(tmp2, &block2, std::vector<compiler::Node*>{phi_bb4_0}, &block3, std::vector<compiler::Node*>{phi_bb4_0});
  }

  TNode<IntPtrT> phi_bb2_0;
  TNode<IntPtrT> tmp3;
  TNode<BoolT> tmp4;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_0);
    tmp3 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    tmp4 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb2_0}, TNode<IntPtrT>{tmp3});
    ca_.Branch(tmp4, &block6, std::vector<compiler::Node*>{phi_bb2_0}, &block7, std::vector<compiler::Node*>{phi_bb2_0});
  }

  TNode<IntPtrT> phi_bb6_0;
  TNode<Int8T> tmp5;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_0);
    tmp5 = FromConstexpr_int8_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    ca_.Goto(&block8, phi_bb6_0, tmp5);
  }

  TNode<IntPtrT> phi_bb7_0;
  TNode<Int8T> tmp6;
  if (block7.is_used()) {
    ca_.Bind(&block7, &phi_bb7_0);
    tmp6 = Convert_int8_intptr_0(state_, TNode<IntPtrT>{phi_bb7_0});
    ca_.Goto(&block8, phi_bb7_0, tmp6);
  }

  TNode<IntPtrT> phi_bb8_0;
  TNode<Int8T> phi_bb8_1;
  TNode<Int8T> tmp7;
  TNode<BoolT> tmp8;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_0, &phi_bb8_1);
    tmp7 = Convert_int8_intptr_0(state_, TNode<IntPtrT>{phi_bb8_0});
    tmp8 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{phi_bb8_1}, TNode<Int32T>{tmp7});
    ca_.Branch(tmp8, &block9, std::vector<compiler::Node*>{phi_bb8_0}, &block10, std::vector<compiler::Node*>{phi_bb8_0});
  }

  TNode<IntPtrT> phi_bb10_0;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_0);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 1339});
      CodeStubAssembler(state_).FailAssert("Torque assert 'x == Convert<int8>(i)' failed", pos_stack);
    }
  }

  TNode<IntPtrT> phi_bb9_0;
  TNode<IntPtrT> tmp9;
  TNode<IntPtrT> tmp10;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_0);
    tmp9 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp10 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb9_0}, TNode<IntPtrT>{tmp9});
    ca_.Goto(&block4, tmp10);
  }

  TNode<IntPtrT> phi_bb3_0;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_0);
    ca_.Goto(&block11);
  }

    ca_.Bind(&block11);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1343&c=1
void TestOffHeapSlice_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_ptr, TNode<IntPtrT> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block31(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<String> tmp0;
  TNode<SeqOneByteString> tmp1;
  TNode<Object> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<Uint8T> tmp4;
  TNode<Object> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<UintPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<UintPtrT> tmp10;
  TNode<UintPtrT> tmp11;
  TNode<BoolT> tmp12;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Convert_String_constexpr_string_0(state_, "Hello World!");
    tmp1 = TORQUE_CAST(TNode<Object>{tmp0});
    std::tie(tmp2, tmp3) = NewOffHeapReference_char8_0(state_, TNode<RawPtrT>{p_ptr}).Flatten();
    tmp4 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{tmp2, tmp3});
    std::tie(tmp5, tmp6, tmp7) = FieldSliceSeqOneByteStringChars_0(state_, TNode<SeqOneByteString>{tmp1}).Flatten();
    tmp8 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp9 = Convert_intptr_uintptr_0(state_, TNode<UintPtrT>{tmp8});
    tmp10 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp9});
    tmp11 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp7});
    tmp12 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp10}, TNode<UintPtrT>{tmp11});
    ca_.Branch(tmp12, &block22, std::vector<compiler::Node*>{}, &block23, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<Object> tmp15;
  TNode<IntPtrT> tmp16;
  TNode<Uint8T> tmp17;
  TNode<BoolT> tmp18;
  if (block22.is_used()) {
    ca_.Bind(&block22);
    tmp13 = TimesSizeOf_char8_0(state_, TNode<IntPtrT>{tmp9});
    tmp14 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp6}, TNode<IntPtrT>{tmp13});
    std::tie(tmp15, tmp16) = NewReference_char8_0(state_, TNode<Object>{tmp5}, TNode<IntPtrT>{tmp14}).Flatten();
    tmp17 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{tmp15, tmp16});
    tmp18 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp4}, TNode<Uint32T>{tmp17});
    ca_.Branch(tmp18, &block15, std::vector<compiler::Node*>{}, &block16, std::vector<compiler::Node*>{});
  }

  if (block23.is_used()) {
    ca_.Bind(&block23);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 1347});
      CodeStubAssembler(state_).FailAssert("Torque assert '*torque_internal::unsafe::NewOffHeapReference(ptr) == string.chars[0]' failed", pos_stack);
    }
  }

  TNode<Object> tmp19;
  TNode<IntPtrT> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<Object> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<IntPtrT> tmp24;
  TNode<IntPtrT> tmp25;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    std::tie(tmp19, tmp20, tmp21) = NewOffHeapConstSlice_char8_0(state_, TNode<RawPtrT>{p_ptr}, TNode<IntPtrT>{p_length}).Flatten();
    std::tie(tmp22, tmp23, tmp24) = FieldSliceSeqOneByteStringChars_0(state_, TNode<SeqOneByteString>{tmp1}).Flatten();
    tmp25 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block28, tmp25);
  }

  TNode<IntPtrT> phi_bb28_9;
  TNode<BoolT> tmp26;
  if (block28.is_used()) {
    ca_.Bind(&block28, &phi_bb28_9);
    tmp26 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{phi_bb28_9}, TNode<IntPtrT>{tmp24});
    ca_.Branch(tmp26, &block26, std::vector<compiler::Node*>{phi_bb28_9}, &block27, std::vector<compiler::Node*>{phi_bb28_9});
  }

  TNode<IntPtrT> phi_bb26_9;
  TNode<UintPtrT> tmp27;
  TNode<UintPtrT> tmp28;
  TNode<BoolT> tmp29;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_9);
    tmp27 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb26_9});
    tmp28 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp24});
    tmp29 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp27}, TNode<UintPtrT>{tmp28});
    ca_.Branch(tmp29, &block36, std::vector<compiler::Node*>{phi_bb26_9, phi_bb26_9, phi_bb26_9, phi_bb26_9, phi_bb26_9}, &block37, std::vector<compiler::Node*>{phi_bb26_9, phi_bb26_9, phi_bb26_9, phi_bb26_9, phi_bb26_9});
  }

  TNode<IntPtrT> phi_bb36_9;
  TNode<IntPtrT> phi_bb36_10;
  TNode<IntPtrT> phi_bb36_11;
  TNode<IntPtrT> phi_bb36_12;
  TNode<IntPtrT> phi_bb36_13;
  TNode<IntPtrT> tmp30;
  TNode<IntPtrT> tmp31;
  TNode<Object> tmp32;
  TNode<IntPtrT> tmp33;
  TNode<Uint8T> tmp34;
  TNode<UintPtrT> tmp35;
  TNode<UintPtrT> tmp36;
  TNode<BoolT> tmp37;
  if (block36.is_used()) {
    ca_.Bind(&block36, &phi_bb36_9, &phi_bb36_10, &phi_bb36_11, &phi_bb36_12, &phi_bb36_13);
    tmp30 = TimesSizeOf_char8_0(state_, TNode<IntPtrT>{phi_bb36_13});
    tmp31 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp23}, TNode<IntPtrT>{tmp30});
    std::tie(tmp32, tmp33) = NewReference_char8_0(state_, TNode<Object>{tmp22}, TNode<IntPtrT>{tmp31}).Flatten();
    tmp34 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{tmp32, tmp33});
    tmp35 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb36_9});
    tmp36 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp21});
    tmp37 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp35}, TNode<UintPtrT>{tmp36});
    ca_.Branch(tmp37, &block44, std::vector<compiler::Node*>{phi_bb36_9, phi_bb36_9, phi_bb36_9, phi_bb36_9, phi_bb36_9}, &block45, std::vector<compiler::Node*>{phi_bb36_9, phi_bb36_9, phi_bb36_9, phi_bb36_9, phi_bb36_9});
  }

  TNode<IntPtrT> phi_bb37_9;
  TNode<IntPtrT> phi_bb37_10;
  TNode<IntPtrT> phi_bb37_11;
  TNode<IntPtrT> phi_bb37_12;
  TNode<IntPtrT> phi_bb37_13;
  if (block37.is_used()) {
    ca_.Bind(&block37, &phi_bb37_9, &phi_bb37_10, &phi_bb37_11, &phi_bb37_12, &phi_bb37_13);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb44_9;
  TNode<IntPtrT> phi_bb44_11;
  TNode<IntPtrT> phi_bb44_12;
  TNode<IntPtrT> phi_bb44_13;
  TNode<IntPtrT> phi_bb44_14;
  TNode<IntPtrT> tmp38;
  TNode<IntPtrT> tmp39;
  TNode<Object> tmp40;
  TNode<IntPtrT> tmp41;
  TNode<Uint8T> tmp42;
  TNode<BoolT> tmp43;
  if (block44.is_used()) {
    ca_.Bind(&block44, &phi_bb44_9, &phi_bb44_11, &phi_bb44_12, &phi_bb44_13, &phi_bb44_14);
    tmp38 = TimesSizeOf_char8_0(state_, TNode<IntPtrT>{phi_bb44_14});
    tmp39 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp20}, TNode<IntPtrT>{tmp38});
    std::tie(tmp40, tmp41) = NewReference_char8_0(state_, TNode<Object>{tmp19}, TNode<IntPtrT>{tmp39}).Flatten();
    tmp42 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{tmp40, tmp41});
    tmp43 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp34}, TNode<Uint32T>{tmp42});
    ca_.Branch(tmp43, &block30, std::vector<compiler::Node*>{phi_bb44_9}, &block31, std::vector<compiler::Node*>{phi_bb44_9});
  }

  TNode<IntPtrT> phi_bb45_9;
  TNode<IntPtrT> phi_bb45_11;
  TNode<IntPtrT> phi_bb45_12;
  TNode<IntPtrT> phi_bb45_13;
  TNode<IntPtrT> phi_bb45_14;
  if (block45.is_used()) {
    ca_.Bind(&block45, &phi_bb45_9, &phi_bb45_11, &phi_bb45_12, &phi_bb45_13, &phi_bb45_14);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb31_9;
  if (block31.is_used()) {
    ca_.Bind(&block31, &phi_bb31_9);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 1352});
      CodeStubAssembler(state_).FailAssert("Torque assert '*onHeapSlice.AtIndex(i) == *offHeapSlice.AtIndex(i)' failed", pos_stack);
    }
  }

  TNode<IntPtrT> phi_bb30_9;
  TNode<IntPtrT> tmp44;
  TNode<IntPtrT> tmp45;
  if (block30.is_used()) {
    ca_.Bind(&block30, &phi_bb30_9);
    tmp44 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp45 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb30_9}, TNode<IntPtrT>{tmp44});
    ca_.Goto(&block28, tmp45);
  }

  TNode<IntPtrT> phi_bb27_9;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_9);
    ca_.Goto(&block48);
  }

    ca_.Bind(&block48);
}

TF_BUILTIN(ReturnTwoValues, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<Smi> parameter1 = UncheckedParameter<Smi>(Descriptor::kValue);
  USE(parameter1);
  TNode<HeapObject> parameter2 = UncheckedParameter<HeapObject>(Descriptor::kObj);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<Smi> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Map> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp1 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{parameter1}, TNode<Smi>{tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp3 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{parameter2, tmp2});
    CodeStubAssembler(state_).Return(tmp1, tmp3);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1366&c=1
void TestCallMultiReturnBuiltin_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<String> tmp0;
  TNode<Smi> tmp1;
  TNode<Smi> tmp2;
  TNode<Map> tmp3;
  TNode<PairT<Smi, Map>> tmp2_and_tmp3;
  TNode<Smi> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_String_constexpr_string_0(state_, "hi");
    tmp1 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1bcull));
    tmp2_and_tmp3 = ca_.CallStub<PairT<Smi, Map>>(Builtins::CallableFor(ca_.isolate(), Builtin::kReturnTwoValues), p_context, tmp1, tmp0);
    tmp2 = ca_.Projection<0>(tmp2_and_tmp3);
    tmp3 = ca_.Projection<1>(tmp2_and_tmp3);
    tmp4 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1bdull));
    tmp5 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp2}, TNode<Smi>{tmp4});
    ca_.Branch(tmp5, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 1369});
      CodeStubAssembler(state_).FailAssert("Torque assert 'result.a == 445' failed", pos_stack);
    }
  }

  TNode<String> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Map> tmp8;
  TNode<BoolT> tmp9;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp6 = FromConstexpr_String_constexpr_string_0(state_, "hi");
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp8 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp6, tmp7});
    tmp9 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp3}, TNode<HeapObject>{tmp8});
    ca_.Branch(tmp9, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 1370});
      CodeStubAssembler(state_).FailAssert("Torque assert 'result.b == FromConstexpr<String>('hi').map' failed", pos_stack);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1373&c=1
TNode<Smi> TestRunLazyTwice_0(compiler::CodeAssemblerState* state_, std::function<TNode<Smi>()> p_lazySmi) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<Smi> tmp1;
  TNode<Smi> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).RunLazy(std::function<TNode<Smi>()>{p_lazySmi});
    tmp1 = CodeStubAssembler(state_).RunLazy(std::function<TNode<Smi>()>{p_lazySmi});
    tmp2 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp0}, TNode<Smi>{tmp1});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Smi>{tmp2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1380&c=1
TNode<Smi> GetLazySmi_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Smi>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1384&c=1
TNode<Smi> AddTwoSmiValues_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_a, TNode<Smi> p_b) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{p_a}, TNode<Smi>{p_b});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Smi>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1388&c=1
TNode<Smi> AddSmiAndConstexprValues_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_a, int31_t p_b) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_int31_0(state_, p_b);
    tmp1 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{p_a}, TNode<Smi>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Smi>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1392&c=1
void TestCreateLazyNodeFromTorque_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  std::function<TNode<Smi>()> tmp0;
  TNode<Smi> tmp1;
  TNode<Smi> tmp2;
  TNode<BoolT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = [=] () { return GetLazySmi_0(state_); };
    tmp1 = TestRunLazyTwice_0(state_, std::function<TNode<Smi>()>{tmp0});
    tmp2 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x6ull));
    tmp3 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp1}, TNode<Smi>{tmp2});
    ca_.Branch(tmp3, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 1396});
      CodeStubAssembler(state_).FailAssert("Torque assert 'result == 6' failed", pos_stack);
    }
  }

  std::function<TNode<Smi>()> tmp4;
  TNode<Smi> tmp5;
  TNode<Smi> tmp6;
  TNode<BoolT> tmp7;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp4 = [=] () { return GetLazySmi_0(state_); };
    tmp5 = TestRunLazyTwice_0(state_, std::function<TNode<Smi>()>{tmp4});
    tmp6 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x6ull));
    tmp7 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp5}, TNode<Smi>{tmp6});
    ca_.Branch(tmp7, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 1401});
      CodeStubAssembler(state_).FailAssert("Torque assert 'result2 == 6' failed", pos_stack);
    }
  }

  TNode<Smi> tmp8;
  TNode<Smi> tmp9;
  std::function<TNode<Smi>()> tmp10;
  TNode<Smi> tmp11;
  TNode<Smi> tmp12;
  TNode<BoolT> tmp13;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp8 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp9 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x6ull));
    tmp10 = [=] () { return AddTwoSmiValues_0(state_, TNode<Smi>{tmp8}, TNode<Smi>{tmp9}); };
    tmp11 = TestRunLazyTwice_0(state_, std::function<TNode<Smi>()>{tmp10});
    tmp12 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x16ull));
    tmp13 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp11}, TNode<Smi>{tmp12});
    ca_.Branch(tmp13, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 1408});
      CodeStubAssembler(state_).FailAssert("Torque assert 'result3 == 22' failed", pos_stack);
    }
  }

  TNode<Smi> tmp14;
  std::function<TNode<Smi>()> tmp15;
  TNode<Smi> tmp16;
  TNode<Smi> tmp17;
  TNode<BoolT> tmp18;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp14 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x7ull));
    tmp15 = [=] () { return AddSmiAndConstexprValues_0(state_, TNode<Smi>{tmp14}, (FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x8ull)))); };
    tmp16 = TestRunLazyTwice_0(state_, std::function<TNode<Smi>()>{tmp15});
    tmp17 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1eull));
    tmp18 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp16}, TNode<Smi>{tmp17});
    ca_.Branch(tmp18, &block8, std::vector<compiler::Node*>{}, &block9, std::vector<compiler::Node*>{});
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"test/torque/test-torque.tq", 1413});
      CodeStubAssembler(state_).FailAssert("Torque assert 'result4 == 30' failed", pos_stack);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block10);
  }

    ca_.Bind(&block10);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=765&c=3
TNode<Smi> LoadInternalClassA_0(compiler::CodeAssemblerState* state_, TNode<InternalClass> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp1 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Smi>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=765&c=3
void StoreInternalClassA_0(compiler::CodeAssemblerState* state_, TNode<InternalClass> p_o, TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=766&c=3
TNode<Number> LoadInternalClassB_0(compiler::CodeAssemblerState* state_, TNode<InternalClass> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Number> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp1 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Number>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=766&c=3
void StoreInternalClassB_0(compiler::CodeAssemblerState* state_, TNode<InternalClass> p_o, TNode<Number> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<Number>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=760&c=3
void Method_InternalClass_Flip_0(compiler::CodeAssemblerState* state_, TNode<InternalClass> p_this, compiler::CodeAssemblerLabel* label_NotASmi) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Number> tmp1;
  TNode<Smi> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp1 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{p_this, tmp0});
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_Smi_0(state_, TNode<Object>{tmp1}, &label3);
    ca_.Goto(&block3);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(label_NotASmi);
  }

  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<Smi> tmp6;
  TNode<IntPtrT> tmp7;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp5 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp6 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_this, tmp5});
    CodeStubAssembler(state_).StoreReference<Number>(CodeStubAssembler::Reference{p_this, tmp4}, tmp6);
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{p_this, tmp7}, tmp2);
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=829&c=3
TNode<Smi> LoadSmiPairA_0(compiler::CodeAssemblerState* state_, TNode<SmiPair> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp1 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Smi>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=829&c=3
void StoreSmiPairA_0(compiler::CodeAssemblerState* state_, TNode<SmiPair> p_o, TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=830&c=3
TNode<Smi> LoadSmiPairB_0(compiler::CodeAssemblerState* state_, TNode<SmiPair> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp1 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Smi>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=830&c=3
void StoreSmiPairB_0(compiler::CodeAssemblerState* state_, TNode<SmiPair> p_o, TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=826&c=3
TorqueStructReference_Smi_0 Method_SmiPair_GetA_0(compiler::CodeAssemblerState* state_, TNode<SmiPair> p_this) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructReference_Smi_0{TNode<Object>{p_this}, TNode<IntPtrT>{tmp0}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=927&c=3
TNode<Smi> LoadSmiBoxValue_0(compiler::CodeAssemblerState* state_, TNode<SmiBox> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp1 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Smi>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=927&c=3
void StoreSmiBoxValue_0(compiler::CodeAssemblerState* state_, TNode<SmiBox> p_o, TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=928&c=3
TNode<Smi> LoadSmiBoxUnrelated_0(compiler::CodeAssemblerState* state_, TNode<SmiBox> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp1 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Smi>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=928&c=3
void StoreSmiBoxUnrelated_0(compiler::CodeAssemblerState* state_, TNode<SmiBox> p_o, TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1179&c=3
TNode<HeapObject> LoadExportedSubClassBaseA_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClassBase> p_o) {
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

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1179&c=3
void StoreExportedSubClassBaseA_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClassBase> p_o, TNode<HeapObject> p_v) {
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

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1180&c=3
TNode<HeapObject> LoadExportedSubClassBaseB_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClassBase> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<HeapObject> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp1 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<HeapObject>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1180&c=3
void StoreExportedSubClassBaseB_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClassBase> p_o, TNode<HeapObject> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<HeapObject>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1172&c=3
TNode<Int32T> LoadExportedSubClassCField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Int32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp1 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Int32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1172&c=3
void StoreExportedSubClassCField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass> p_o, TNode<Int32T> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    CodeStubAssembler(state_).StoreReference<Int32T>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1173&c=3
TNode<Int32T> LoadExportedSubClassDField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Int32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp1 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Int32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1173&c=3
void StoreExportedSubClassDField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass> p_o, TNode<Int32T> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    CodeStubAssembler(state_).StoreReference<Int32T>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1174&c=3
TNode<Smi> LoadExportedSubClassEField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    tmp1 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Smi>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1174&c=3
void StoreExportedSubClassEField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass> p_o, TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1192&c=3
TNode<Smi> LoadInternalClassWithSmiElementsData_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithSmiElements> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp1 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Smi>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1192&c=3
void StoreInternalClassWithSmiElementsData_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithSmiElements> p_o, TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1193&c=3
TNode<Oddball> LoadInternalClassWithSmiElementsObject_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithSmiElements> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Oddball> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp1 = CodeStubAssembler(state_).LoadReference<Oddball>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Oddball>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1193&c=3
void StoreInternalClassWithSmiElementsObject_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithSmiElements> p_o, TNode<Oddball> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    CodeStubAssembler(state_).StoreReference<Oddball>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1194&c=3
TorqueStructSlice_Smi_MutableReference_Smi_0 FieldSliceInternalClassWithSmiElementsEntries_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithSmiElements> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Smi> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<Object> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp1 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0});
    tmp2 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp1});
    tmp3 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x10ull));
    std::tie(tmp4, tmp5, tmp6) = NewMutableSlice_Smi_0(state_, TNode<Object>{p_o}, TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp2}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructSlice_Smi_MutableReference_Smi_0{TNode<Object>{tmp4}, TNode<IntPtrT>{tmp5}, TNode<IntPtrT>{tmp6}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1194&c=3
TNode<Smi> LoadInternalClassWithSmiElementsEntries_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithSmiElements> p_o, TNode<IntPtrT> p_i) {
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
    std::tie(tmp0, tmp1, tmp2) = FieldSliceInternalClassWithSmiElementsEntries_0(state_, TNode<InternalClassWithSmiElements>{p_o}).Flatten();
    tmp3 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_i});
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Smi> tmp10;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp6 = TimesSizeOf_Smi_0(state_, TNode<IntPtrT>{p_i});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_Smi_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    tmp10 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp8, tmp9});
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
  return TNode<Smi>{tmp10};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1194&c=3
void StoreInternalClassWithSmiElementsEntries_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithSmiElements> p_o, TNode<IntPtrT> p_i, TNode<Smi> p_v) {
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
    std::tie(tmp0, tmp1, tmp2) = FieldSliceInternalClassWithSmiElementsEntries_0(state_, TNode<InternalClassWithSmiElements>{p_o}).Flatten();
    tmp3 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_i});
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp6 = TimesSizeOf_Smi_0(state_, TNode<IntPtrT>{p_i});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_Smi_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp8, tmp9}, p_v);
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1203&c=3
TNode<Int32T> LoadInternalClassWithStructElementsDummy1_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Int32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp1 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Int32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1203&c=3
void StoreInternalClassWithStructElementsDummy1_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o, TNode<Int32T> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    CodeStubAssembler(state_).StoreReference<Int32T>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1204&c=3
TNode<Int32T> LoadInternalClassWithStructElementsDummy2_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Int32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp1 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Int32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1204&c=3
void StoreInternalClassWithStructElementsDummy2_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o, TNode<Int32T> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<Int32T>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1205&c=9
TNode<Smi> LoadInternalClassWithStructElementsCount_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp1 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Smi>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1206&c=3
TNode<Smi> LoadInternalClassWithStructElementsData_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp1 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Smi>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1206&c=3
void StoreInternalClassWithStructElementsData_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o, TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1207&c=3
TNode<Object> LoadInternalClassWithStructElementsObject_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    tmp1 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Object>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1207&c=3
void StoreInternalClassWithStructElementsObject_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o, TNode<Object> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1208&c=3
TorqueStructSlice_Smi_MutableReference_Smi_0 FieldSliceInternalClassWithStructElementsEntries_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Smi> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<Object> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp1 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0});
    tmp2 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp1});
    tmp3 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x18ull));
    std::tie(tmp4, tmp5, tmp6) = NewMutableSlice_Smi_0(state_, TNode<Object>{p_o}, TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp2}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructSlice_Smi_MutableReference_Smi_0{TNode<Object>{tmp4}, TNode<IntPtrT>{tmp5}, TNode<IntPtrT>{tmp6}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1208&c=3
TNode<Smi> LoadInternalClassWithStructElementsEntries_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o, TNode<IntPtrT> p_i) {
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
    std::tie(tmp0, tmp1, tmp2) = FieldSliceInternalClassWithStructElementsEntries_0(state_, TNode<InternalClassWithStructElements>{p_o}).Flatten();
    tmp3 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_i});
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Smi> tmp10;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp6 = TimesSizeOf_Smi_0(state_, TNode<IntPtrT>{p_i});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_Smi_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    tmp10 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp8, tmp9});
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
  return TNode<Smi>{tmp10};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1208&c=3
void StoreInternalClassWithStructElementsEntries_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o, TNode<IntPtrT> p_i, TNode<Smi> p_v) {
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
    std::tie(tmp0, tmp1, tmp2) = FieldSliceInternalClassWithStructElementsEntries_0(state_, TNode<InternalClassWithStructElements>{p_o}).Flatten();
    tmp3 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_i});
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp6 = TimesSizeOf_Smi_0(state_, TNode<IntPtrT>{p_i});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_Smi_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp8, tmp9}, p_v);
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1209&c=3
TorqueStructSlice_InternalClassStructElement_MutableReference_InternalClassStructElement_0 FieldSliceInternalClassWithStructElementsMoreEntries_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<Smi> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<Object> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<IntPtrT> tmp11;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceInternalClassWithStructElementsEntries_0(state_, TNode<InternalClassWithStructElements>{p_o}).Flatten();
    tmp3 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x4ull));
    tmp4 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp4});
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp7 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp6});
    tmp8 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp7});
    std::tie(tmp9, tmp10, tmp11) = NewMutableSlice_InternalClassStructElement_0(state_, TNode<Object>{p_o}, TNode<IntPtrT>{tmp5}, TNode<IntPtrT>{tmp8}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructSlice_InternalClassStructElement_MutableReference_InternalClassStructElement_0{TNode<Object>{tmp9}, TNode<IntPtrT>{tmp10}, TNode<IntPtrT>{tmp11}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1284&c=3
TNode<Int32T> LoadExportedSubClass2XField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass2> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Int32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp1 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Int32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1284&c=3
void StoreExportedSubClass2XField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass2> p_o, TNode<Int32T> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    CodeStubAssembler(state_).StoreReference<Int32T>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1285&c=3
TNode<Int32T> LoadExportedSubClass2YField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass2> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Int32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp1 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Int32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1285&c=3
void StoreExportedSubClass2YField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass2> p_o, TNode<Int32T> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    CodeStubAssembler(state_).StoreReference<Int32T>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1286&c=3
TNode<Smi> LoadExportedSubClass2ZField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass2> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    tmp1 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Smi>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1286&c=3
void StoreExportedSubClass2ZField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass2> p_o, TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

TF_BUILTIN(GenericBuiltinTest_Smi_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Smi> parameter0 = UncheckedParameter<Smi>(Descriptor::kParam);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Oddball> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Null_0(state_);
    CodeStubAssembler(state_).Return(tmp0);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=166&c=11
TNode<Object> GenericMacroTest_Smi_0(compiler::CodeAssemblerState* state_, TNode<Smi> p__param) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Oddball> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Undefined_0(state_);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Object>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=171&c=12
TNode<Object> GenericMacroTestWithLabels_Smi_0(compiler::CodeAssemblerState* state_, TNode<Smi> p__param, compiler::CodeAssemblerLabel* label__X) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Oddball> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Undefined_0(state_);
    ca_.Goto(&block3);
  }

    ca_.Bind(&block3);
  return TNode<Object>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=477&c=15
TNode<Object> IncrementIfSmi_NumberOrFixedArray_0(compiler::CodeAssemblerState* state_, TNode<Object> p_x) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_Smi_0(state_, TNode<Object>{p_x}, &label1);
    ca_.Goto(&block4);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block5);
    }
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block1, ca_.UncheckedCast<HeapObject>(p_x));
  }

  TNode<Smi> tmp2;
  TNode<Smi> tmp3;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp0}, TNode<Smi>{tmp2});
    ca_.Goto(&block1, tmp3);
  }

  TNode<Object> phi_bb1_1;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_1);
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<Object>{phi_bb1_1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=478&c=5
TNode<FixedArray> Cast_FixedArray_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
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

  TNode<FixedArray> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_FixedArray_0(state_, TNode<HeapObject>{tmp0}, &label3);
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
  return TNode<FixedArray>{tmp2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=537&c=9
TNode<Smi> ExampleGenericOverload_Smi_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp1 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{p_o}, TNode<Smi>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Smi>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=538&c=25
TNode<Object> ExampleGenericOverload_Object_0(compiler::CodeAssemblerState* state_, TNode<Object> p_o) {
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
  return TNode<Object>{p_o};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=632&c=10
TNode<BoolT> Is_JSArray_Smi_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Smi> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSArray> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSArray_1(state_, TNode<Context>{p_context}, TNode<Object>{p_o}, &label1);
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

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=759&c=1
TNode<InternalClass> DownCastForTorqueClass_InternalClass_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
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
    if (((CodeStubAssembler(state_).ConstexprInt31Equal(static_cast<InstanceType>(248), static_cast<InstanceType>(248))))) {
      ca_.Goto(&block3);
    } else {
      ca_.Goto(&block4);
    }
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    if ((CodeStubAssembler(state_).ClassHasMapConstant<InternalClass>())) {
      ca_.Goto(&block6);
    } else {
      ca_.Goto(&block7);
    }
  }

  TNode<Map> tmp2;
  TNode<BoolT> tmp3;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp2 = CodeStubAssembler(state_).GetClassMapConstant<InternalClass>();
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
    tmp6 = FromConstexpr_uint32_constexpr_uint32_0(state_, static_cast<InstanceType>(248));
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
    tmp8 = FromConstexpr_int32_constexpr_int32_0(state_, (CodeStubAssembler(state_).ConstexprUint32Sub(static_cast<InstanceType>(248), static_cast<InstanceType>(248))));
    tmp9 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp10 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp1, tmp9});
    tmp11 = Convert_uint16_InstanceType_0(state_, TNode<Uint16T>{tmp10});
    tmp12 = Convert_int32_uint16_0(state_, TNode<Uint16T>{tmp11});
    tmp13 = FromConstexpr_InstanceType_constexpr_InstanceType_0(state_, static_cast<InstanceType>(248));
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

  TNode<InternalClass> tmp20;
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
  return TNode<InternalClass>{tmp20};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=822&c=10
void InitializeFieldsFromIterator_Object_TestIterator_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_Object_MutableReference_Object_0 p_target, TorqueStructTestIterator_0 p_originIterator) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_target.length});
    tmp1 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_target.offset}, TNode<IntPtrT>{tmp0});
    ca_.Goto(&block5, p_target.offset, p_originIterator.count);
  }

  TNode<IntPtrT> phi_bb5_5;
  TNode<Smi> phi_bb5_7;
  TNode<BoolT> tmp2;
  if (block5.is_used()) {
    ca_.Bind(&block5, &phi_bb5_5, &phi_bb5_7);
    tmp2 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp2, &block3, std::vector<compiler::Node*>{phi_bb5_5, phi_bb5_7}, &block4, std::vector<compiler::Node*>{phi_bb5_5, phi_bb5_7});
  }

  TNode<IntPtrT> phi_bb3_5;
  TNode<Smi> phi_bb3_7;
  TNode<BoolT> tmp3;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_5, &phi_bb3_7);
    tmp3 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb3_5}, TNode<IntPtrT>{tmp1});
    ca_.Branch(tmp3, &block9, std::vector<compiler::Node*>{phi_bb3_5, phi_bb3_7}, &block10, std::vector<compiler::Node*>{phi_bb3_5, phi_bb3_7});
  }

  TNode<IntPtrT> phi_bb9_5;
  TNode<Smi> phi_bb9_7;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_5, &phi_bb9_7);
    ca_.Goto(&block4, phi_bb9_5, phi_bb9_7);
  }

  TNode<IntPtrT> phi_bb10_5;
  TNode<Smi> phi_bb10_7;
  TNode<Object> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Smi> tmp8;
  TNode<Smi> tmp9;
  TNode<Smi> tmp10;
  TNode<BoolT> tmp11;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_5, &phi_bb10_7);
    std::tie(tmp4, tmp5) = NewReference_Object_0(state_, TNode<Object>{p_target.object}, TNode<IntPtrT>{phi_bb10_5}).Flatten();
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, kTaggedSize);
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb10_5}, TNode<IntPtrT>{tmp6});
    tmp8 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp9 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb10_7}, TNode<Smi>{tmp8});
    tmp10 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp11 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{phi_bb10_7}, TNode<Smi>{tmp10});
    ca_.Branch(tmp11, &block16, std::vector<compiler::Node*>{}, &block17, std::vector<compiler::Node*>{});
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Oddball> tmp12;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    tmp12 = TheHole_0(state_);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp4, tmp5}, tmp12);
    ca_.Goto(&block5, tmp7, tmp9);
  }

  TNode<IntPtrT> phi_bb4_5;
  TNode<Smi> phi_bb4_7;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_5, &phi_bb4_7);
    ca_.Goto(&block18);
  }

    ca_.Bind(&block18);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=825&c=1
TNode<SmiPair> DownCastForTorqueClass_SmiPair_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
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
    if (((CodeStubAssembler(state_).ConstexprInt31Equal(static_cast<InstanceType>(259), static_cast<InstanceType>(259))))) {
      ca_.Goto(&block3);
    } else {
      ca_.Goto(&block4);
    }
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    if ((CodeStubAssembler(state_).ClassHasMapConstant<SmiPair>())) {
      ca_.Goto(&block6);
    } else {
      ca_.Goto(&block7);
    }
  }

  TNode<Map> tmp2;
  TNode<BoolT> tmp3;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp2 = CodeStubAssembler(state_).GetClassMapConstant<SmiPair>();
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
    tmp6 = FromConstexpr_uint32_constexpr_uint32_0(state_, static_cast<InstanceType>(259));
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
    tmp8 = FromConstexpr_int32_constexpr_int32_0(state_, (CodeStubAssembler(state_).ConstexprUint32Sub(static_cast<InstanceType>(259), static_cast<InstanceType>(259))));
    tmp9 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp10 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp1, tmp9});
    tmp11 = Convert_uint16_InstanceType_0(state_, TNode<Uint16T>{tmp10});
    tmp12 = Convert_int32_uint16_0(state_, TNode<Uint16T>{tmp11});
    tmp13 = FromConstexpr_InstanceType_constexpr_InstanceType_0(state_, static_cast<InstanceType>(259));
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

  TNode<SmiPair> tmp20;
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
  return TNode<SmiPair>{tmp20};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=845&c=3
void Swap_Smi_0(compiler::CodeAssemblerState* state_, TorqueStructReference_Smi_0 p_a, TorqueStructReference_Smi_0 p_b) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_a.object, p_a.offset});
    tmp1 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_b.object, p_b.offset});
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{p_a.object, p_a.offset}, tmp1);
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{p_b.object, p_b.offset}, tmp0);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=926&c=1
TNode<SmiBox> DownCastForTorqueClass_SmiBox_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
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
    if (((CodeStubAssembler(state_).ConstexprInt31Equal(static_cast<InstanceType>(258), static_cast<InstanceType>(258))))) {
      ca_.Goto(&block3);
    } else {
      ca_.Goto(&block4);
    }
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    if ((CodeStubAssembler(state_).ClassHasMapConstant<SmiBox>())) {
      ca_.Goto(&block6);
    } else {
      ca_.Goto(&block7);
    }
  }

  TNode<Map> tmp2;
  TNode<BoolT> tmp3;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp2 = CodeStubAssembler(state_).GetClassMapConstant<SmiBox>();
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
    tmp6 = FromConstexpr_uint32_constexpr_uint32_0(state_, static_cast<InstanceType>(258));
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
    tmp8 = FromConstexpr_int32_constexpr_int32_0(state_, (CodeStubAssembler(state_).ConstexprUint32Sub(static_cast<InstanceType>(258), static_cast<InstanceType>(258))));
    tmp9 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp10 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp1, tmp9});
    tmp11 = Convert_uint16_InstanceType_0(state_, TNode<Uint16T>{tmp10});
    tmp12 = Convert_int32_uint16_0(state_, TNode<Uint16T>{tmp11});
    tmp13 = FromConstexpr_InstanceType_constexpr_InstanceType_0(state_, static_cast<InstanceType>(258));
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

  TNode<SmiBox> tmp20;
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
  return TNode<SmiBox>{tmp20};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1020&c=24
TorqueStructTestTuple_Smi_intptr_0 TupleSwap_intptr_Smi_0(compiler::CodeAssemblerState* state_, TorqueStructTestTuple_intptr_Smi_0 p_tuple) {
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
  return TorqueStructTestTuple_Smi_intptr_0{TNode<Smi>{p_tuple.snd}, TNode<IntPtrT>{p_tuple.fst}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1170&c=1
TNode<ExportedSubClass> DownCastForTorqueClass_ExportedSubClass_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
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
    if (((CodeStubAssembler(state_).ConstexprInt31Equal(static_cast<InstanceType>(226), static_cast<InstanceType>(226))))) {
      ca_.Goto(&block3);
    } else {
      ca_.Goto(&block4);
    }
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    if ((CodeStubAssembler(state_).ClassHasMapConstant<ExportedSubClass>())) {
      ca_.Goto(&block6);
    } else {
      ca_.Goto(&block7);
    }
  }

  TNode<Map> tmp2;
  TNode<BoolT> tmp3;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp2 = CodeStubAssembler(state_).GetClassMapConstant<ExportedSubClass>();
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
    tmp6 = FromConstexpr_uint32_constexpr_uint32_0(state_, static_cast<InstanceType>(226));
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
    tmp8 = FromConstexpr_int32_constexpr_int32_0(state_, (CodeStubAssembler(state_).ConstexprUint32Sub(static_cast<InstanceType>(226), static_cast<InstanceType>(226))));
    tmp9 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp10 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp1, tmp9});
    tmp11 = Convert_uint16_InstanceType_0(state_, TNode<Uint16T>{tmp10});
    tmp12 = Convert_int32_uint16_0(state_, TNode<Uint16T>{tmp11});
    tmp13 = FromConstexpr_InstanceType_constexpr_InstanceType_0(state_, static_cast<InstanceType>(226));
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

  TNode<ExportedSubClass> tmp20;
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
  return TNode<ExportedSubClass>{tmp20};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1177&c=1
TNode<ExportedSubClassBase> DownCastForTorqueClass_ExportedSubClassBase_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
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
    if (((CodeStubAssembler(state_).ConstexprInt31Equal(static_cast<InstanceType>(225), static_cast<InstanceType>(227))))) {
      ca_.Goto(&block3);
    } else {
      ca_.Goto(&block4);
    }
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    if ((CodeStubAssembler(state_).ClassHasMapConstant<ExportedSubClassBase>())) {
      ca_.Goto(&block6);
    } else {
      ca_.Goto(&block7);
    }
  }

  TNode<Map> tmp2;
  TNode<BoolT> tmp3;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp2 = CodeStubAssembler(state_).GetClassMapConstant<ExportedSubClassBase>();
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
    tmp6 = FromConstexpr_uint32_constexpr_uint32_0(state_, static_cast<InstanceType>(225));
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
    tmp8 = FromConstexpr_int32_constexpr_int32_0(state_, (CodeStubAssembler(state_).ConstexprUint32Sub(static_cast<InstanceType>(227), static_cast<InstanceType>(225))));
    tmp9 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp10 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp1, tmp9});
    tmp11 = Convert_uint16_InstanceType_0(state_, TNode<Uint16T>{tmp10});
    tmp12 = Convert_int32_uint16_0(state_, TNode<Uint16T>{tmp11});
    tmp13 = FromConstexpr_InstanceType_constexpr_InstanceType_0(state_, static_cast<InstanceType>(225));
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

  TNode<ExportedSubClassBase> tmp20;
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
  return TNode<ExportedSubClassBase>{tmp20};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1183&c=1
TNode<AbstractInternalClass> DownCastForTorqueClass_AbstractInternalClass_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
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
    if (((CodeStubAssembler(state_).ConstexprInt31Equal(static_cast<InstanceType>(231), static_cast<InstanceType>(232))))) {
      ca_.Goto(&block3);
    } else {
      ca_.Goto(&block4);
    }
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    if ((CodeStubAssembler(state_).ClassHasMapConstant<AbstractInternalClass>())) {
      ca_.Goto(&block6);
    } else {
      ca_.Goto(&block7);
    }
  }

  TNode<Map> tmp2;
  TNode<BoolT> tmp3;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp2 = CodeStubAssembler(state_).GetClassMapConstant<AbstractInternalClass>();
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
    tmp6 = FromConstexpr_uint32_constexpr_uint32_0(state_, static_cast<InstanceType>(231));
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
    tmp8 = FromConstexpr_int32_constexpr_int32_0(state_, (CodeStubAssembler(state_).ConstexprUint32Sub(static_cast<InstanceType>(232), static_cast<InstanceType>(231))));
    tmp9 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp10 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp1, tmp9});
    tmp11 = Convert_uint16_InstanceType_0(state_, TNode<Uint16T>{tmp10});
    tmp12 = Convert_int32_uint16_0(state_, TNode<Uint16T>{tmp11});
    tmp13 = FromConstexpr_InstanceType_constexpr_InstanceType_0(state_, static_cast<InstanceType>(231));
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

  TNode<AbstractInternalClass> tmp20;
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
  return TNode<AbstractInternalClass>{tmp20};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1187&c=1
TNode<AbstractInternalClassSubclass1> DownCastForTorqueClass_AbstractInternalClassSubclass1_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
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
    if (((CodeStubAssembler(state_).ConstexprInt31Equal(static_cast<InstanceType>(231), static_cast<InstanceType>(231))))) {
      ca_.Goto(&block3);
    } else {
      ca_.Goto(&block4);
    }
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    if ((CodeStubAssembler(state_).ClassHasMapConstant<AbstractInternalClassSubclass1>())) {
      ca_.Goto(&block6);
    } else {
      ca_.Goto(&block7);
    }
  }

  TNode<Map> tmp2;
  TNode<BoolT> tmp3;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp2 = CodeStubAssembler(state_).GetClassMapConstant<AbstractInternalClassSubclass1>();
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
    tmp6 = FromConstexpr_uint32_constexpr_uint32_0(state_, static_cast<InstanceType>(231));
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
    tmp8 = FromConstexpr_int32_constexpr_int32_0(state_, (CodeStubAssembler(state_).ConstexprUint32Sub(static_cast<InstanceType>(231), static_cast<InstanceType>(231))));
    tmp9 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp10 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp1, tmp9});
    tmp11 = Convert_uint16_InstanceType_0(state_, TNode<Uint16T>{tmp10});
    tmp12 = Convert_int32_uint16_0(state_, TNode<Uint16T>{tmp11});
    tmp13 = FromConstexpr_InstanceType_constexpr_InstanceType_0(state_, static_cast<InstanceType>(231));
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

  TNode<AbstractInternalClassSubclass1> tmp20;
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
  return TNode<AbstractInternalClassSubclass1>{tmp20};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1189&c=1
TNode<AbstractInternalClassSubclass2> DownCastForTorqueClass_AbstractInternalClassSubclass2_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
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
    if (((CodeStubAssembler(state_).ConstexprInt31Equal(static_cast<InstanceType>(232), static_cast<InstanceType>(232))))) {
      ca_.Goto(&block3);
    } else {
      ca_.Goto(&block4);
    }
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    if ((CodeStubAssembler(state_).ClassHasMapConstant<AbstractInternalClassSubclass2>())) {
      ca_.Goto(&block6);
    } else {
      ca_.Goto(&block7);
    }
  }

  TNode<Map> tmp2;
  TNode<BoolT> tmp3;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp2 = CodeStubAssembler(state_).GetClassMapConstant<AbstractInternalClassSubclass2>();
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
    tmp6 = FromConstexpr_uint32_constexpr_uint32_0(state_, static_cast<InstanceType>(232));
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
    tmp8 = FromConstexpr_int32_constexpr_int32_0(state_, (CodeStubAssembler(state_).ConstexprUint32Sub(static_cast<InstanceType>(232), static_cast<InstanceType>(232))));
    tmp9 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp10 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp1, tmp9});
    tmp11 = Convert_uint16_InstanceType_0(state_, TNode<Uint16T>{tmp10});
    tmp12 = Convert_int32_uint16_0(state_, TNode<Uint16T>{tmp11});
    tmp13 = FromConstexpr_InstanceType_constexpr_InstanceType_0(state_, static_cast<InstanceType>(232));
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

  TNode<AbstractInternalClassSubclass2> tmp20;
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
  return TNode<AbstractInternalClassSubclass2>{tmp20};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1191&c=1
TNode<InternalClassWithSmiElements> DownCastForTorqueClass_InternalClassWithSmiElements_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
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
    if (((CodeStubAssembler(state_).ConstexprInt31Equal(static_cast<InstanceType>(197), static_cast<InstanceType>(197))))) {
      ca_.Goto(&block3);
    } else {
      ca_.Goto(&block4);
    }
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    if ((CodeStubAssembler(state_).ClassHasMapConstant<InternalClassWithSmiElements>())) {
      ca_.Goto(&block6);
    } else {
      ca_.Goto(&block7);
    }
  }

  TNode<Map> tmp2;
  TNode<BoolT> tmp3;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp2 = CodeStubAssembler(state_).GetClassMapConstant<InternalClassWithSmiElements>();
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
    tmp6 = FromConstexpr_uint32_constexpr_uint32_0(state_, static_cast<InstanceType>(197));
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
    tmp8 = FromConstexpr_int32_constexpr_int32_0(state_, (CodeStubAssembler(state_).ConstexprUint32Sub(static_cast<InstanceType>(197), static_cast<InstanceType>(197))));
    tmp9 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp10 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp1, tmp9});
    tmp11 = Convert_uint16_InstanceType_0(state_, TNode<Uint16T>{tmp10});
    tmp12 = Convert_int32_uint16_0(state_, TNode<Uint16T>{tmp11});
    tmp13 = FromConstexpr_InstanceType_constexpr_InstanceType_0(state_, static_cast<InstanceType>(197));
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

  TNode<InternalClassWithSmiElements> tmp20;
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
  return TNode<InternalClassWithSmiElements>{tmp20};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1202&c=1
TNode<InternalClassWithStructElements> DownCastForTorqueClass_InternalClassWithStructElements_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
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
    if (((CodeStubAssembler(state_).ConstexprInt31Equal(static_cast<InstanceType>(249), static_cast<InstanceType>(249))))) {
      ca_.Goto(&block3);
    } else {
      ca_.Goto(&block4);
    }
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    if ((CodeStubAssembler(state_).ClassHasMapConstant<InternalClassWithStructElements>())) {
      ca_.Goto(&block6);
    } else {
      ca_.Goto(&block7);
    }
  }

  TNode<Map> tmp2;
  TNode<BoolT> tmp3;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp2 = CodeStubAssembler(state_).GetClassMapConstant<InternalClassWithStructElements>();
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
    tmp6 = FromConstexpr_uint32_constexpr_uint32_0(state_, static_cast<InstanceType>(249));
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
    tmp8 = FromConstexpr_int32_constexpr_int32_0(state_, (CodeStubAssembler(state_).ConstexprUint32Sub(static_cast<InstanceType>(249), static_cast<InstanceType>(249))));
    tmp9 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp10 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp1, tmp9});
    tmp11 = Convert_uint16_InstanceType_0(state_, TNode<Uint16T>{tmp10});
    tmp12 = Convert_int32_uint16_0(state_, TNode<Uint16T>{tmp11});
    tmp13 = FromConstexpr_InstanceType_constexpr_InstanceType_0(state_, static_cast<InstanceType>(249));
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

  TNode<InternalClassWithStructElements> tmp20;
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
  return TNode<InternalClassWithStructElements>{tmp20};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1231&c=19
void InitializeFieldsFromIterator_Smi_SmiGeneratorIterator_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_Smi_MutableReference_Smi_0 p_target, TorqueStructSmiGeneratorIterator_0 p_originIterator) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TimesSizeOf_Smi_0(state_, TNode<IntPtrT>{p_target.length});
    tmp1 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_target.offset}, TNode<IntPtrT>{tmp0});
    ca_.Goto(&block5, p_target.offset, p_originIterator.value);
  }

  TNode<IntPtrT> phi_bb5_5;
  TNode<Smi> phi_bb5_7;
  TNode<BoolT> tmp2;
  if (block5.is_used()) {
    ca_.Bind(&block5, &phi_bb5_5, &phi_bb5_7);
    tmp2 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp2, &block3, std::vector<compiler::Node*>{phi_bb5_5, phi_bb5_7}, &block4, std::vector<compiler::Node*>{phi_bb5_5, phi_bb5_7});
  }

  TNode<IntPtrT> phi_bb3_5;
  TNode<Smi> phi_bb3_7;
  TNode<BoolT> tmp3;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_5, &phi_bb3_7);
    tmp3 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb3_5}, TNode<IntPtrT>{tmp1});
    ca_.Branch(tmp3, &block9, std::vector<compiler::Node*>{phi_bb3_5, phi_bb3_7}, &block10, std::vector<compiler::Node*>{phi_bb3_5, phi_bb3_7});
  }

  TNode<IntPtrT> phi_bb9_5;
  TNode<Smi> phi_bb9_7;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_5, &phi_bb9_7);
    ca_.Goto(&block4, phi_bb9_5, phi_bb9_7);
  }

  TNode<IntPtrT> phi_bb10_5;
  TNode<Smi> phi_bb10_7;
  TNode<Object> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Smi> tmp8;
  TNode<Smi> tmp9;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_5, &phi_bb10_7);
    std::tie(tmp4, tmp5) = NewReference_Smi_0(state_, TNode<Object>{p_target.object}, TNode<IntPtrT>{phi_bb10_5}).Flatten();
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, kTaggedSize);
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb10_5}, TNode<IntPtrT>{tmp6});
    tmp8 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp9 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb10_7}, TNode<Smi>{tmp8});
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp4, tmp5}, phi_bb10_7);
    ca_.Goto(&block5, tmp7, tmp9);
  }

  TNode<IntPtrT> phi_bb4_5;
  TNode<Smi> phi_bb4_7;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_5, &phi_bb4_7);
    ca_.Goto(&block16);
  }

    ca_.Bind(&block16);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1248&c=19
void InitializeFieldsFromIterator_InternalClassStructElement_InternalClassStructElementGeneratorIterator_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_InternalClassStructElement_MutableReference_InternalClassStructElement_0 p_target, TorqueStructInternalClassStructElementGeneratorIterator_0 p_originIterator) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TimesSizeOf_InternalClassStructElement_0(state_, TNode<IntPtrT>{p_target.length});
    tmp1 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_target.offset}, TNode<IntPtrT>{tmp0});
    ca_.Goto(&block5, p_target.offset, p_originIterator.value);
  }

  TNode<IntPtrT> phi_bb5_5;
  TNode<Smi> phi_bb5_7;
  TNode<BoolT> tmp2;
  if (block5.is_used()) {
    ca_.Bind(&block5, &phi_bb5_5, &phi_bb5_7);
    tmp2 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp2, &block3, std::vector<compiler::Node*>{phi_bb5_5, phi_bb5_7}, &block4, std::vector<compiler::Node*>{phi_bb5_5, phi_bb5_7});
  }

  TNode<IntPtrT> phi_bb3_5;
  TNode<Smi> phi_bb3_7;
  TNode<BoolT> tmp3;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_5, &phi_bb3_7);
    tmp3 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb3_5}, TNode<IntPtrT>{tmp1});
    ca_.Branch(tmp3, &block9, std::vector<compiler::Node*>{phi_bb3_5, phi_bb3_7}, &block10, std::vector<compiler::Node*>{phi_bb3_5, phi_bb3_7});
  }

  TNode<IntPtrT> phi_bb9_5;
  TNode<Smi> phi_bb9_7;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_5, &phi_bb9_7);
    ca_.Goto(&block4, phi_bb9_5, phi_bb9_7);
  }

  TNode<IntPtrT> phi_bb10_5;
  TNode<Smi> phi_bb10_7;
  TNode<Object> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Smi> tmp8;
  TNode<Smi> tmp9;
  TNode<Smi> tmp10;
  TNode<Smi> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<IntPtrT> tmp13;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_5, &phi_bb10_7);
    std::tie(tmp4, tmp5) = NewReference_InternalClassStructElement_0(state_, TNode<Object>{p_target.object}, TNode<IntPtrT>{phi_bb10_5}).Flatten();
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb10_5}, TNode<IntPtrT>{tmp6});
    tmp8 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp9 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb10_7}, TNode<Smi>{tmp8});
    tmp10 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp11 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp9}, TNode<Smi>{tmp10});
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp4, tmp5}, phi_bb10_7);
    tmp12 = FromConstexpr_intptr_constexpr_intptr_0(state_, 4);
    tmp13 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp5}, TNode<IntPtrT>{tmp12});
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp4, tmp13}, tmp9);
    ca_.Goto(&block5, tmp7, tmp11);
  }

  TNode<IntPtrT> phi_bb4_5;
  TNode<Smi> phi_bb4_7;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_5, &phi_bb4_7);
    ca_.Goto(&block16);
  }

    ca_.Bind(&block16);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1282&c=1
TNode<ExportedSubClass2> DownCastForTorqueClass_ExportedSubClass2_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
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
    if (((CodeStubAssembler(state_).ConstexprInt31Equal(static_cast<InstanceType>(227), static_cast<InstanceType>(227))))) {
      ca_.Goto(&block3);
    } else {
      ca_.Goto(&block4);
    }
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    if ((CodeStubAssembler(state_).ClassHasMapConstant<ExportedSubClass2>())) {
      ca_.Goto(&block6);
    } else {
      ca_.Goto(&block7);
    }
  }

  TNode<Map> tmp2;
  TNode<BoolT> tmp3;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp2 = CodeStubAssembler(state_).GetClassMapConstant<ExportedSubClass2>();
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
    tmp6 = FromConstexpr_uint32_constexpr_uint32_0(state_, static_cast<InstanceType>(227));
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
    tmp8 = FromConstexpr_int32_constexpr_int32_0(state_, (CodeStubAssembler(state_).ConstexprUint32Sub(static_cast<InstanceType>(227), static_cast<InstanceType>(227))));
    tmp9 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp10 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp1, tmp9});
    tmp11 = Convert_uint16_InstanceType_0(state_, TNode<Uint16T>{tmp10});
    tmp12 = Convert_int32_uint16_0(state_, TNode<Uint16T>{tmp11});
    tmp13 = FromConstexpr_InstanceType_constexpr_InstanceType_0(state_, static_cast<InstanceType>(227));
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

  TNode<ExportedSubClass2> tmp20;
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
  return TNode<ExportedSubClass2>{tmp20};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1299&c=10
TNode<BoolT> Is_ExportedSubClassBase_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<ExportedSubClassBase> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_ExportedSubClassBase_1(state_, TNode<Context>{p_context}, TNode<Object>{p_o}, &label1);
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

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1300&c=10
TNode<BoolT> Is_ExportedSubClass_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<ExportedSubClass> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_ExportedSubClass_1(state_, TNode<Context>{p_context}, TNode<Object>{p_o}, &label1);
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

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1301&c=11
TNode<BoolT> Is_ExportedSubClass2_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<ExportedSubClass2> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_ExportedSubClass2_1(state_, TNode<Context>{p_context}, TNode<Object>{p_o}, &label1);
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

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1310&c=11
TNode<BoolT> Is_JSSloppyArgumentsObject_JSFunction_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSFunction> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSArgumentsObject> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSSloppyArgumentsObject_0(state_, TNode<Context>{p_context}, TNode<HeapObject>{p_o}, &label1);
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

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1312&c=27
TNode<FixedArray> NewFixedArray_ConstantIterator_TheHole_0(compiler::CodeAssemblerState* state_, TNode<IntPtrT> p_length, TorqueStructConstantIterator_TheHole_0 p_it) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{p_length}, TNode<IntPtrT>{tmp0});
    ca_.Branch(tmp1, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<FixedArray> tmp2;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp2 = kEmptyFixedArray_0(state_);
    ca_.Goto(&block1, tmp2);
  }

  TNode<IntPtrT> tmp3;
  TNode<BoolT> tmp4;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, FixedArray::kMaxLength);
    tmp4 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{p_length}, TNode<IntPtrT>{tmp3});
    ca_.Branch(tmp4, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  TNode<Smi> tmp5;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp5 = kNoContext_0(state_);
    CodeStubAssembler(state_).CallRuntime(Runtime::kFatalProcessOutOfMemoryInvalidArrayLength, tmp5);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Map> tmp6;
  TNode<Smi> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<BoolT> tmp11;
  TNode<HeapObject> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<FixedArray> tmp16;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp6 = kFixedArrayMap_0(state_);
    tmp7 = Convert_Smi_intptr_0(state_, TNode<IntPtrT>{p_length});
    tmp8 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp7});
    tmp9 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp10 = AddIndexedFieldSizeToObjectSize_0(state_, TNode<IntPtrT>{tmp9}, TNode<IntPtrT>{tmp8}, kTaggedSize);
    tmp11 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp12 = AllocateFromNew_0(state_, TNode<IntPtrT>{tmp10}, TNode<Map>{tmp6}, TNode<BoolT>{tmp11});
    tmp13 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp12, tmp13}, tmp6);
    tmp14 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp12, tmp14}, tmp7);
    tmp15 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    InitializeFieldsFromIterator_Object_ConstantIterator_TheHole_0(state_, TorqueStructSlice_Object_MutableReference_Object_0{TNode<Object>{tmp12}, TNode<IntPtrT>{tmp15}, TNode<IntPtrT>{tmp8}, TorqueStructUnsafe_0{}}, TorqueStructConstantIterator_TheHole_0{TNode<Oddball>{p_it.value}});
    tmp16 = TORQUE_CAST(TNode<HeapObject>{tmp12});
    ca_.Goto(&block1, tmp16);
  }

  TNode<FixedArray> phi_bb1_2;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_2);
    ca_.Goto(&block6, phi_bb1_2);
  }

  TNode<FixedArray> phi_bb6_2;
    ca_.Bind(&block6, &phi_bb6_2);
  return TNode<FixedArray>{phi_bb6_2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1313&c=20
TNode<SloppyArgumentsElements> NewSloppyArgumentsElements_ConstantIterator_TheHole_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_length, TNode<Context> p_context, TNode<FixedArray> p_arguments, TorqueStructConstantIterator_TheHole_0 p_it) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Map> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<BoolT> tmp4;
  TNode<HeapObject> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<SloppyArgumentsElements> tmp11;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).GetInstanceTypeMap(SLOPPY_ARGUMENTS_ELEMENTS_TYPE);
    tmp1 = Convert_intptr_Smi_0(state_, TNode<Smi>{p_length});
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp3 = AddIndexedFieldSizeToObjectSize_0(state_, TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp1}, kTaggedSize);
    tmp4 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp5 = AllocateFromNew_0(state_, TNode<IntPtrT>{tmp3}, TNode<Map>{tmp0}, TNode<BoolT>{tmp4});
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp5, tmp6}, tmp0);
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp5, tmp7}, p_length);
    tmp8 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<Context>(CodeStubAssembler::Reference{tmp5, tmp8}, p_context);
    tmp9 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    CodeStubAssembler(state_).StoreReference<FixedArray>(CodeStubAssembler::Reference{tmp5, tmp9}, p_arguments);
    tmp10 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    InitializeFieldsFromIterator_Smi_OR_TheHole_ConstantIterator_TheHole_0(state_, TorqueStructSlice_Smi_OR_TheHole_MutableReference_Smi_OR_TheHole_0{TNode<Object>{tmp5}, TNode<IntPtrT>{tmp10}, TNode<IntPtrT>{tmp1}, TorqueStructUnsafe_0{}}, TorqueStructConstantIterator_TheHole_0{TNode<Oddball>{p_it.value}});
    tmp11 = TORQUE_CAST(TNode<HeapObject>{tmp5});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<SloppyArgumentsElements>{tmp11};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1317&c=10
TNode<BoolT> Is_JSArgumentsObject_JSSloppyArgumentsObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSArgumentsObject> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSArgumentsObject> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSArgumentsObject_0(state_, TNode<HeapObject>{p_o}, &label1);
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

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1326&c=10
TNode<BoolT> Is_ExportedSubClassBase_ExportedSubClassBase_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<ExportedSubClassBase> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<ExportedSubClassBase> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_ExportedSubClassBase_0(state_, TNode<HeapObject>{p_o}, &label1);
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

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1345&c=47
TNode<String> Convert_String_constexpr_string_0(compiler::CodeAssemblerState* state_, const char* p_i) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<String> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_String_constexpr_string_0(state_, p_i);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<String>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1345&c=18
TNode<SeqOneByteString> UnsafeCast_SeqOneByteString_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<SeqOneByteString> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TORQUE_CAST(TNode<Object>{p_o});
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<SeqOneByteString>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1347&c=10
TorqueStructReference_char8_0 NewOffHeapReference_char8_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_ptr) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<TaggedIndex> tmp0;
  TNode<RawPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Object> tmp5;
  TNode<IntPtrT> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = kZeroBitPattern_0(state_);
    tmp1 = Convert_RawPtr_RawPtr_char8_0(state_, TNode<RawPtrT>{p_ptr});
    tmp2 = Convert_intptr_RawPtr_0(state_, TNode<RawPtrT>{tmp1});
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, kHeapObjectTag);
    tmp4 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp3});
    std::tie(tmp5, tmp6) = (TorqueStructReference_char8_0{TNode<Object>{tmp0}, TNode<IntPtrT>{tmp4}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructReference_char8_0{TNode<Object>{tmp5}, TNode<IntPtrT>{tmp6}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1209&c=3
TorqueStructSlice_InternalClassStructElement_MutableReference_InternalClassStructElement_0 NewMutableSlice_InternalClassStructElement_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset, TNode<IntPtrT> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = (TorqueStructSlice_InternalClassStructElement_MutableReference_InternalClassStructElement_0{TNode<Object>{p_object}, TNode<IntPtrT>{p_offset}, TNode<IntPtrT>{p_length}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructSlice_InternalClassStructElement_MutableReference_InternalClassStructElement_0{TNode<Object>{tmp0}, TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp2}, TorqueStructUnsafe_0{}};
}

} // namespace internal
} // namespace v8
