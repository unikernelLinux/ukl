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
#include "torque-generated/src/builtins/iterator-tq-csa.h"
#include "torque-generated/src/builtins/array-every-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/ic-callable-tq-csa.h"
#include "torque-generated/src/builtins/ic-tq-csa.h"
#include "torque-generated/src/builtins/iterator-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"

namespace v8 {
namespace internal {

TF_BUILTIN(GetIteratorWithFeedback, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<TaggedIndex> parameter2 = UncheckedParameter<TaggedIndex>(Descriptor::kLoadSlot);
  USE(parameter2);
  TNode<TaggedIndex> parameter3 = UncheckedParameter<TaggedIndex>(Descriptor::kCallSlot);
  USE(parameter3);
  TNode<HeapObject> parameter4 = UncheckedParameter<HeapObject>(Descriptor::kMaybeFeedbackVector);
  USE(parameter4);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Oddball> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_Undefined_2(state_, TNode<HeapObject>{parameter4}, &label1);
    ca_.Goto(&block10);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block11);
    }
  }

  TNode<Symbol> tmp2;
  TNode<Object> tmp3;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp2 = CodeStubAssembler(state_).IteratorSymbolConstant();
    tmp3 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kLoadIC), parameter0, parameter1, tmp2, parameter2, ca_.UncheckedCast<FeedbackVector>(parameter4));
    ca_.Goto(&block8, tmp3);
  }

  TNode<Symbol> tmp4;
  TNode<Object> tmp5;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp4 = CodeStubAssembler(state_).IteratorSymbolConstant();
    tmp5 = CodeStubAssembler(state_).GetProperty(TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{tmp4});
    ca_.Goto(&block8, tmp5);
  }

  TNode<Object> phi_bb8_5;
  TNode<Smi> tmp6;
  TNode<Object> tmp7;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_5);
    tmp6 = CodeStubAssembler(state_).TaggedIndexToSmi(TNode<TaggedIndex>{parameter3});
    tmp7 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kCallIteratorWithFeedback), parameter0, parameter1, phi_bb8_5, tmp6, parameter4);
    CodeStubAssembler(state_).Return(tmp7);
  }
}

TF_BUILTIN(GetIteratorBaseline, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Object> parameter0 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter0);
  TNode<TaggedIndex> parameter1 = UncheckedParameter<TaggedIndex>(Descriptor::kLoadSlot);
  USE(parameter1);
  TNode<TaggedIndex> parameter2 = UncheckedParameter<TaggedIndex>(Descriptor::kCallSlot);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Context> tmp0;
  TNode<FeedbackVector> tmp1;
  TNode<Symbol> tmp2;
  TNode<Object> tmp3;
  TNode<Smi> tmp4;
  TNode<Object> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadContextFromBaseline();
    tmp1 = CodeStubAssembler(state_).LoadFeedbackVectorFromBaseline();
    tmp2 = CodeStubAssembler(state_).IteratorSymbolConstant();
    tmp3 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kLoadIC), tmp0, parameter0, tmp2, parameter1, tmp1);
    tmp4 = CodeStubAssembler(state_).TaggedIndexToSmi(TNode<TaggedIndex>{parameter2});
    tmp5 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kCallIteratorWithFeedback), tmp0, parameter0, tmp3, tmp4, tmp1);
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TF_BUILTIN(CreateAsyncFromSyncIteratorBaseline, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Object> parameter0 = UncheckedParameter<Object>(Descriptor::kSyncIterator);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Context> tmp0;
  TNode<Object> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadContextFromBaseline();
    tmp1 = CodeStubAssembler(state_).CreateAsyncFromSyncIterator(TNode<Context>{tmp0}, TNode<Object>{parameter0});
    CodeStubAssembler(state_).Return(tmp1);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator.tq?l=100&c=1
TNode<Object> GetLazyReceiver_0(compiler::CodeAssemblerState* state_, TNode<Object> p_receiver) {
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
  return TNode<Object>{p_receiver};
}

TF_BUILTIN(CallIteratorWithFeedback, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kIteratorMethod);
  USE(parameter2);
  TNode<Smi> parameter3 = UncheckedParameter<Smi>(Descriptor::kCallSlot);
  USE(parameter3);
  TNode<HeapObject> parameter4 = UncheckedParameter<HeapObject>(Descriptor::kFeedback);
  USE(parameter4);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<UintPtrT> tmp1;
  std::function<TNode<Object>()> tmp2;
  TNode<JSReceiver> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiUntag(TNode<Smi>{parameter3});
    tmp1 = CodeStubAssembler(state_).Unsigned(TNode<IntPtrT>{tmp0});
    tmp2 = [=] () { return GetLazyReceiver_0(state_, TNode<Object>{parameter1}); };
    CollectCallFeedback_1(state_, TNode<Object>{parameter2}, std::function<TNode<Object>()>{tmp2}, TNode<Context>{parameter0}, TNode<HeapObject>{parameter4}, TNode<UintPtrT>{tmp1});
    compiler::CodeAssemblerLabel label4(&ca_);
    tmp3 = Cast_Callable_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, &label4);
    ca_.Goto(&block3);
    if (label4.is_used()) {
      ca_.Bind(&label4);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    CodeStubAssembler(state_).CallRuntime(Runtime::kThrowIteratorError, parameter0, parameter1);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Object> tmp5;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp5 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<Object>{tmp3}, TNode<Object>{parameter1});
    CodeStubAssembler(state_).Return(tmp5);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator.tq?l=118&c=1
void IteratorCloseOnException_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructIteratorRecord p_iterator) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<String> tmp0;
  TNode<Object> tmp1;
      TNode<Object> tmp3;
  TNode<Oddball> tmp4;
  TNode<BoolT> tmp5;
      TNode<Object> tmp7;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = kReturnString_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch2__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch2__label);
    tmp1 = CodeStubAssembler(state_).GetProperty(TNode<Context>{p_context}, TNode<Object>{p_iterator.object}, TNode<Object>{tmp0});
    }
    if (catch2__label.is_used()) {
      compiler::CodeAssemblerLabel catch2_skip(&ca_);
      ca_.Goto(&catch2_skip);
      ca_.Bind(&catch2__label, &tmp3);
      ca_.Goto(&block4);
      ca_.Bind(&catch2_skip);
    }
    tmp4 = Undefined_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch6__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch6__label);
    tmp5 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp1}, TNode<HeapObject>{tmp4});
    }
    if (catch6__label.is_used()) {
      compiler::CodeAssemblerLabel catch6_skip(&ca_);
      ca_.Goto(&catch6_skip);
      ca_.Bind(&catch6__label, &tmp7);
      ca_.Goto(&block7);
      ca_.Bind(&catch6_skip);
    }
    ca_.Branch(tmp5, &block8, std::vector<compiler::Node*>{}, &block9, std::vector<compiler::Node*>{});
  }

  TNode<HeapObject> tmp8;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp8 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp3, tmp8);
  }

  TNode<HeapObject> tmp9;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp9 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp7, tmp9);
  }

  TNode<BoolT> tmp10;
      TNode<Object> tmp12;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    compiler::CodeAssemblerExceptionHandlerLabel catch11__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch11__label);
    tmp10 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    }
    if (catch11__label.is_used()) {
      compiler::CodeAssemblerLabel catch11_skip(&ca_);
      ca_.Goto(&catch11_skip);
      ca_.Bind(&catch11__label, &tmp12);
      ca_.Goto(&block11);
      ca_.Bind(&catch11_skip);
    }
    ca_.Goto(&block10, tmp10);
  }

  TNode<HeapObject> tmp13;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp13 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp12, tmp13);
  }

  TNode<Oddball> tmp14;
  TNode<BoolT> tmp15;
      TNode<Object> tmp17;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp14 = Null_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch16__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch16__label);
    tmp15 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp1}, TNode<HeapObject>{tmp14});
    }
    if (catch16__label.is_used()) {
      compiler::CodeAssemblerLabel catch16_skip(&ca_);
      ca_.Goto(&catch16_skip);
      ca_.Bind(&catch16__label, &tmp17);
      ca_.Goto(&block12);
      ca_.Bind(&catch16_skip);
    }
    ca_.Goto(&block10, tmp15);
  }

  TNode<HeapObject> tmp18;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp18 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp17, tmp18);
  }

  TNode<BoolT> phi_bb10_5;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_5);
    ca_.Branch(phi_bb10_5, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block1);
  }

  TNode<Object> tmp19;
      TNode<Object> tmp21;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    compiler::CodeAssemblerExceptionHandlerLabel catch20__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch20__label);
    tmp19 = CodeStubAssembler(state_).Call(TNode<Context>{p_context}, TNode<Object>{tmp1}, TNode<Object>{p_iterator.object});
    }
    if (catch20__label.is_used()) {
      compiler::CodeAssemblerLabel catch20_skip(&ca_);
      ca_.Goto(&catch20_skip);
      ca_.Bind(&catch20__label, &tmp21);
      ca_.Goto(&block13);
      ca_.Bind(&catch20_skip);
    }
    ca_.Goto(&block2);
  }

  TNode<HeapObject> tmp22;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp22 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp21, tmp22);
  }

  TNode<Object> phi_bb3_3;
  TNode<HeapObject> phi_bb3_4;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_3, &phi_bb3_4);
    ca_.Goto(&block2);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block14);
  }

    ca_.Bind(&block14);
}

} // namespace internal
} // namespace v8
