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
#include "torque-generated/src/builtins/array-map-tq-csa.h"
#include "torque-generated/src/builtins/array-every-tq-csa.h"
#include "torque-generated/src/builtins/array-map-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/frame-arguments-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/objects/fixed-array-tq-csa.h"
#include "torque-generated/src/objects/heap-number-tq-csa.h"
#include "torque-generated/src/objects/js-array-tq-csa.h"

namespace v8 {
namespace internal {

TF_BUILTIN(ArrayMapPreLoopLazyDeoptContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kCallback);
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kThisArg);
  USE(parameter3);
  TNode<Object> parameter4 = UncheckedParameter<Object>(Descriptor::kLength);
  USE(parameter4);
  TNode<Object> parameter5 = UncheckedParameter<Object>(Descriptor::kResult);
  USE(parameter5);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSReceiver> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSReceiver_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<JSReceiver> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_JSReceiver_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter5}, &label3);
    ca_.Goto(&block7);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Number> tmp4;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    compiler::CodeAssemblerLabel label5(&ca_);
    tmp4 = Cast_Number_0(state_, TNode<Object>{parameter4}, &label5);
    ca_.Goto(&block11);
    if (label5.is_used()) {
      ca_.Bind(&label5);
      ca_.Goto(&block12);
    }
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<JSReceiver> tmp6;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    compiler::CodeAssemblerLabel label7(&ca_);
    tmp6 = Cast_Callable_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, &label7);
    ca_.Goto(&block15);
    if (label7.is_used()) {
      ca_.Bind(&label7);
      ca_.Goto(&block16);
    }
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kCalledNonCallable, TNode<Object>{parameter2});
  }

  TNode<Smi> tmp8;
  TNode<Object> tmp9;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp8 = kZero_0(state_);
    tmp9 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kArrayMapLoopContinuation), parameter0, tmp0, tmp6, parameter3, tmp2, tmp0, tmp8, tmp4);
    CodeStubAssembler(state_).Return(tmp9);
  }
}

TF_BUILTIN(ArrayMapLoopEagerDeoptContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kCallback);
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kThisArg);
  USE(parameter3);
  TNode<Object> parameter4 = UncheckedParameter<Object>(Descriptor::kArray);
  USE(parameter4);
  TNode<Object> parameter5 = UncheckedParameter<Object>(Descriptor::kInitialK);
  USE(parameter5);
  TNode<Object> parameter6 = UncheckedParameter<Object>(Descriptor::kLength);
  USE(parameter6);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSReceiver> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSReceiver_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<JSReceiver> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_Callable_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, &label3);
    ca_.Goto(&block7);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<JSReceiver> tmp4;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    compiler::CodeAssemblerLabel label5(&ca_);
    tmp4 = Cast_JSReceiver_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter4}, &label5);
    ca_.Goto(&block11);
    if (label5.is_used()) {
      ca_.Bind(&label5);
      ca_.Goto(&block12);
    }
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Number> tmp6;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    compiler::CodeAssemblerLabel label7(&ca_);
    tmp6 = Cast_Number_0(state_, TNode<Object>{parameter5}, &label7);
    ca_.Goto(&block15);
    if (label7.is_used()) {
      ca_.Bind(&label7);
      ca_.Goto(&block16);
    }
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Number> tmp8;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    compiler::CodeAssemblerLabel label9(&ca_);
    tmp8 = Cast_Number_0(state_, TNode<Object>{parameter6}, &label9);
    ca_.Goto(&block19);
    if (label9.is_used()) {
      ca_.Bind(&label9);
      ca_.Goto(&block20);
    }
  }

  if (block20.is_used()) {
    ca_.Bind(&block20);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Object> tmp10;
  if (block19.is_used()) {
    ca_.Bind(&block19);
    tmp10 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kArrayMapLoopContinuation), parameter0, tmp0, tmp2, parameter3, tmp4, tmp0, tmp6, tmp8);
    CodeStubAssembler(state_).Return(tmp10);
  }
}

TF_BUILTIN(ArrayMapLoopLazyDeoptContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kCallback);
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kThisArg);
  USE(parameter3);
  TNode<Object> parameter4 = UncheckedParameter<Object>(Descriptor::kArray);
  USE(parameter4);
  TNode<Object> parameter5 = UncheckedParameter<Object>(Descriptor::kInitialK);
  USE(parameter5);
  TNode<Object> parameter6 = UncheckedParameter<Object>(Descriptor::kLength);
  USE(parameter6);
  TNode<Object> parameter7 = UncheckedParameter<Object>(Descriptor::kResult);
  USE(parameter7);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSReceiver> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSReceiver_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<JSReceiver> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_Callable_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, &label3);
    ca_.Goto(&block7);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<JSReceiver> tmp4;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    compiler::CodeAssemblerLabel label5(&ca_);
    tmp4 = Cast_JSReceiver_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter4}, &label5);
    ca_.Goto(&block11);
    if (label5.is_used()) {
      ca_.Bind(&label5);
      ca_.Goto(&block12);
    }
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Number> tmp6;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    compiler::CodeAssemblerLabel label7(&ca_);
    tmp6 = Cast_Number_0(state_, TNode<Object>{parameter5}, &label7);
    ca_.Goto(&block15);
    if (label7.is_used()) {
      ca_.Bind(&label7);
      ca_.Goto(&block16);
    }
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Number> tmp8;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    compiler::CodeAssemblerLabel label9(&ca_);
    tmp8 = Cast_Number_0(state_, TNode<Object>{parameter6}, &label9);
    ca_.Goto(&block19);
    if (label9.is_used()) {
      ca_.Bind(&label9);
      ca_.Goto(&block20);
    }
  }

  if (block20.is_used()) {
    ca_.Bind(&block20);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Object> tmp10;
  TNode<Number> tmp11;
  TNode<Number> tmp12;
  TNode<Object> tmp13;
  if (block19.is_used()) {
    ca_.Bind(&block19);
    tmp10 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kFastCreateDataProperty), parameter0, tmp4, tmp6, parameter7);
    tmp11 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp12 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{tmp6}, TNode<Number>{tmp11});
    tmp13 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kArrayMapLoopContinuation), parameter0, tmp0, tmp2, parameter3, tmp4, tmp0, tmp12, tmp8);
    CodeStubAssembler(state_).Return(tmp13);
  }
}

TF_BUILTIN(ArrayMapLoopContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSReceiver> parameter1 = UncheckedParameter<JSReceiver>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<JSReceiver> parameter2 = UncheckedParameter<JSReceiver>(Descriptor::kCallbackfn);
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kThisArg);
  USE(parameter3);
  TNode<JSReceiver> parameter4 = UncheckedParameter<JSReceiver>(Descriptor::kArray);
  USE(parameter4);
  TNode<JSReceiver> parameter5 = UncheckedParameter<JSReceiver>(Descriptor::kO);
  USE(parameter5);
  TNode<Number> parameter6 = UncheckedParameter<Number>(Descriptor::kInitialK);
  USE(parameter6);
  TNode<Number> parameter7 = UncheckedParameter<Number>(Descriptor::kLength);
  USE(parameter7);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.Goto(&block3, parameter6);
  }

  TNode<Number> phi_bb3_8;
  TNode<BoolT> tmp0;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_8);
    tmp0 = NumberIsLessThan_0(state_, TNode<Number>{phi_bb3_8}, TNode<Number>{parameter7});
    ca_.Branch(tmp0, &block1, std::vector<compiler::Node*>{phi_bb3_8}, &block2, std::vector<compiler::Node*>{phi_bb3_8});
  }

  TNode<Number> phi_bb1_8;
  TNode<Oddball> tmp1;
  TNode<Oddball> tmp2;
  TNode<BoolT> tmp3;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_8);
    tmp1 = CodeStubAssembler(state_).HasProperty_Inline(TNode<Context>{parameter0}, TNode<JSReceiver>{parameter5}, TNode<Object>{phi_bb1_8});
    tmp2 = True_0(state_);
    tmp3 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp1}, TNode<HeapObject>{tmp2});
    ca_.Branch(tmp3, &block5, std::vector<compiler::Node*>{phi_bb1_8}, &block6, std::vector<compiler::Node*>{phi_bb1_8});
  }

  TNode<Number> phi_bb5_8;
  TNode<Object> tmp4;
  TNode<Object> tmp5;
  TNode<Object> tmp6;
  if (block5.is_used()) {
    ca_.Bind(&block5, &phi_bb5_8);
    tmp4 = CodeStubAssembler(state_).GetProperty(TNode<Context>{parameter0}, TNode<Object>{parameter5}, TNode<Object>{phi_bb5_8});
    tmp5 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<Object>{parameter2}, TNode<Object>{parameter3}, TNode<Object>{tmp4}, TNode<Object>{phi_bb5_8}, TNode<Object>{parameter5});
    tmp6 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kFastCreateDataProperty), parameter0, parameter4, phi_bb5_8, tmp5);
    ca_.Goto(&block6, phi_bb5_8);
  }

  TNode<Number> phi_bb6_8;
  TNode<Number> tmp7;
  TNode<Number> tmp8;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_8);
    tmp7 = FromConstexpr_Number_constexpr_int31_0(state_, 1);
    tmp8 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{phi_bb6_8}, TNode<Number>{tmp7});
    ca_.Goto(&block3, tmp8);
  }

  TNode<Number> phi_bb2_8;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_8);
    CodeStubAssembler(state_).Return(parameter4);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-map.tq?l=180&c=1
TorqueStructVector_0 NewVector_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Smi> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{p_length}, TNode<Smi>{tmp0});
    ca_.Branch(tmp1, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp2;
  TNode<FixedArray> tmp3;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp2 = CodeStubAssembler(state_).SmiUntag(TNode<Smi>{p_length});
    tmp3 = CodeStubAssembler(state_).AllocateFixedArrayWithHoles(TNode<IntPtrT>{tmp2}, CodeStubAssembler::AllocationFlag::kAllowLargeObjectAllocation);
    ca_.Goto(&block4, tmp3);
  }

  TNode<FixedArray> tmp4;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp4 = kEmptyFixedArray_0(state_);
    ca_.Goto(&block4, tmp4);
  }

  TNode<FixedArray> phi_bb4_2;
  TNode<BoolT> tmp5;
  TNode<BoolT> tmp6;
  TNode<BoolT> tmp7;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_2);
    tmp5 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp6 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp7 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TorqueStructVector_0{TNode<FixedArray>{phi_bb4_2}, TNode<BoolT>{tmp5}, TNode<BoolT>{tmp6}, TNode<BoolT>{tmp7}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-map.tq?l=193&c=1
TNode<JSArray> FastArrayMap_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSArray> p_fastO, TNode<Smi> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, compiler::CodeAssemblerLabel* label_Bailout, compiler::TypedCodeAssemblerVariable<JSArray>* label_Bailout_parameter_0, compiler::TypedCodeAssemblerVariable<Smi>* label_Bailout_parameter_1) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, Smi, Smi> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, Smi, Smi, Smi> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, Smi, Smi, Smi> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, Smi, Smi> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, Smi, Smi, Smi> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, Smi, Smi, Smi> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, Smi, Smi, Object> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, Smi, Smi> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, Smi, Smi> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, Smi, Smi, Smi, Smi> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, Smi, Smi, Smi, Smi> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, Smi, Smi> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, Smi, Smi> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, Smi, Smi, Smi, Smi> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, Smi, Smi, Smi, Smi> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, Smi, Smi, Smi, Smi> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, Smi, Smi, Smi, Smi> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, Smi, Smi> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, Smi, Smi> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi, Smi, Smi> block69(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi, Smi, Smi> block71(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi, Smi, Smi> block72(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi, Smi, Smi, Int32T> block73(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi, Smi, Smi, Int32T> block70(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi, Smi, Smi, Int32T, BoolT> block76(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi, Smi, Smi, Int32T, BoolT> block77(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi, Smi, Smi, Int32T, BoolT, BoolT> block78(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi, Smi, Smi, Int32T> block74(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi, Smi, Smi, Int32T> block75(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi, Smi, Smi> block79(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi, Smi, Smi, Smi> block84(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi, Smi, Smi, Smi> block82(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi, Smi, Smi, Smi, Smi, Smi> block90(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi, Smi, Smi, Smi, Smi, Smi> block91(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi, Smi, Smi, Smi> block97(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi, Smi, Smi, Smi> block96(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi, Smi, Smi, Smi, Smi, Smi> block102(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi, Smi, Smi, Smi, Smi, Smi> block103(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi, Smi, Smi, Smi> block94(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi, Smi, Smi, Smi> block83(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi, Smi, Smi> block80(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi, Smi, Smi, JSArray> block81(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT> block111(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT> block113(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT> block114(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Int32T> block115(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Int32T> block112(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Int32T, BoolT> block118(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Int32T, BoolT> block119(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Int32T, BoolT, BoolT> block120(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Int32T> block116(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Int32T> block117(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT> block121(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi> block126(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi> block124(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi, Smi, Smi> block132(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi, Smi, Smi> block133(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi> block139(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi> block138(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi, Smi, Smi> block144(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi, Smi, Smi> block145(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi> block136(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, Smi> block125(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT> block122(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, JSArray> block123(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArray> block148(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<JSArray> tmp1;
  TNode<JSArray> tmp2;
  TNode<Map> tmp3;
  TNode<BoolT> tmp4;
  TNode<FixedArray> tmp5;
  TNode<BoolT> tmp6;
  TNode<BoolT> tmp7;
  TNode<BoolT> tmp8;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    std::tie(tmp1, tmp2, tmp3, tmp4) = NewFastJSArrayForReadWitness_0(state_, TNode<JSArray>{p_fastO}).Flatten();
    std::tie(tmp5, tmp6, tmp7, tmp8) = NewVector_0(state_, TNode<Context>{p_context}, TNode<Smi>{p_len}).Flatten();
    ca_.Goto(&block7, tmp0, tmp2, tmp6, tmp7, tmp8);
  }

  TNode<Smi> phi_bb7_5;
  TNode<JSArray> phi_bb7_7;
  TNode<BoolT> phi_bb7_11;
  TNode<BoolT> phi_bb7_12;
  TNode<BoolT> phi_bb7_13;
  TNode<BoolT> tmp9;
  if (block7.is_used()) {
    ca_.Bind(&block7, &phi_bb7_5, &phi_bb7_7, &phi_bb7_11, &phi_bb7_12, &phi_bb7_13);
    tmp9 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb7_5}, TNode<Smi>{p_len});
    ca_.Branch(tmp9, &block5, std::vector<compiler::Node*>{phi_bb7_5, phi_bb7_7, phi_bb7_11, phi_bb7_12, phi_bb7_13}, &block6, std::vector<compiler::Node*>{phi_bb7_5, phi_bb7_7, phi_bb7_11, phi_bb7_12, phi_bb7_13});
  }

  TNode<Smi> phi_bb5_5;
  TNode<JSArray> phi_bb5_7;
  TNode<BoolT> phi_bb5_11;
  TNode<BoolT> phi_bb5_12;
  TNode<BoolT> phi_bb5_13;
  TNode<IntPtrT> tmp10;
  TNode<Map> tmp11;
  TNode<BoolT> tmp12;
  if (block5.is_used()) {
    ca_.Bind(&block5, &phi_bb5_5, &phi_bb5_7, &phi_bb5_11, &phi_bb5_12, &phi_bb5_13);
    tmp10 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp11 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp1, tmp10});
    tmp12 = CodeStubAssembler(state_).TaggedNotEqual(TNode<HeapObject>{tmp11}, TNode<HeapObject>{tmp3});
    ca_.Branch(tmp12, &block12, std::vector<compiler::Node*>{phi_bb5_5, phi_bb5_7, phi_bb5_11, phi_bb5_12, phi_bb5_13}, &block13, std::vector<compiler::Node*>{phi_bb5_5, phi_bb5_7, phi_bb5_11, phi_bb5_12, phi_bb5_13});
  }

  TNode<Smi> phi_bb12_5;
  TNode<JSArray> phi_bb12_7;
  TNode<BoolT> phi_bb12_11;
  TNode<BoolT> phi_bb12_12;
  TNode<BoolT> phi_bb12_13;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_5, &phi_bb12_7, &phi_bb12_11, &phi_bb12_12, &phi_bb12_13);
    ca_.Goto(&block10, phi_bb12_5, phi_bb12_7, phi_bb12_11, phi_bb12_12, phi_bb12_13);
  }

  TNode<Smi> phi_bb13_5;
  TNode<JSArray> phi_bb13_7;
  TNode<BoolT> phi_bb13_11;
  TNode<BoolT> phi_bb13_12;
  TNode<BoolT> phi_bb13_13;
  TNode<BoolT> tmp13;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_5, &phi_bb13_7, &phi_bb13_11, &phi_bb13_12, &phi_bb13_13);
    tmp13 = CodeStubAssembler(state_).IsNoElementsProtectorCellInvalid();
    ca_.Branch(tmp13, &block14, std::vector<compiler::Node*>{phi_bb13_5, phi_bb13_7, phi_bb13_11, phi_bb13_12, phi_bb13_13}, &block15, std::vector<compiler::Node*>{phi_bb13_5, phi_bb13_7, phi_bb13_11, phi_bb13_12, phi_bb13_13});
  }

  TNode<Smi> phi_bb14_5;
  TNode<JSArray> phi_bb14_7;
  TNode<BoolT> phi_bb14_11;
  TNode<BoolT> phi_bb14_12;
  TNode<BoolT> phi_bb14_13;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_5, &phi_bb14_7, &phi_bb14_11, &phi_bb14_12, &phi_bb14_13);
    ca_.Goto(&block10, phi_bb14_5, phi_bb14_7, phi_bb14_11, phi_bb14_12, phi_bb14_13);
  }

  TNode<Smi> phi_bb15_5;
  TNode<JSArray> phi_bb15_7;
  TNode<BoolT> phi_bb15_11;
  TNode<BoolT> phi_bb15_12;
  TNode<BoolT> phi_bb15_13;
  TNode<JSArray> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<Number> tmp16;
  TNode<BoolT> tmp17;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_5, &phi_bb15_7, &phi_bb15_11, &phi_bb15_12, &phi_bb15_13);
    tmp14 = (TNode<JSArray>{tmp1});
    tmp15 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp16 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp14, tmp15});
    tmp17 = NumberIsGreaterThanOrEqual_0(state_, TNode<Number>{phi_bb15_5}, TNode<Number>{tmp16});
    ca_.Branch(tmp17, &block16, std::vector<compiler::Node*>{phi_bb15_5, phi_bb15_11, phi_bb15_12, phi_bb15_13}, &block17, std::vector<compiler::Node*>{phi_bb15_5, phi_bb15_11, phi_bb15_12, phi_bb15_13});
  }

  TNode<Smi> phi_bb10_5;
  TNode<JSArray> phi_bb10_7;
  TNode<BoolT> phi_bb10_11;
  TNode<BoolT> phi_bb10_12;
  TNode<BoolT> phi_bb10_13;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_5, &phi_bb10_7, &phi_bb10_11, &phi_bb10_12, &phi_bb10_13);
    ca_.Goto(&block4, phi_bb10_5, phi_bb10_7, phi_bb10_11, phi_bb10_12, phi_bb10_13, phi_bb10_5);
  }

  TNode<Smi> phi_bb16_5;
  TNode<BoolT> phi_bb16_11;
  TNode<BoolT> phi_bb16_12;
  TNode<BoolT> phi_bb16_13;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_5, &phi_bb16_11, &phi_bb16_12, &phi_bb16_13);
    ca_.Goto(&block4, phi_bb16_5, tmp14, phi_bb16_11, phi_bb16_12, phi_bb16_13, phi_bb16_5);
  }

  TNode<Smi> phi_bb17_5;
  TNode<BoolT> phi_bb17_11;
  TNode<BoolT> phi_bb17_12;
  TNode<BoolT> phi_bb17_13;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_5, &phi_bb17_11, &phi_bb17_12, &phi_bb17_13);
    ca_.Branch(tmp4, &block22, std::vector<compiler::Node*>{phi_bb17_5, phi_bb17_11, phi_bb17_12, phi_bb17_13, phi_bb17_5, phi_bb17_5}, &block23, std::vector<compiler::Node*>{phi_bb17_5, phi_bb17_11, phi_bb17_12, phi_bb17_13, phi_bb17_5, phi_bb17_5});
  }

  TNode<Smi> phi_bb22_5;
  TNode<BoolT> phi_bb22_11;
  TNode<BoolT> phi_bb22_12;
  TNode<BoolT> phi_bb22_13;
  TNode<Smi> phi_bb22_14;
  TNode<Smi> phi_bb22_17;
  TNode<Object> tmp18;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_5, &phi_bb22_11, &phi_bb22_12, &phi_bb22_13, &phi_bb22_14, &phi_bb22_17);
    compiler::CodeAssemblerLabel label19(&ca_);
    tmp18 = LoadElementNoHole_FixedDoubleArray_0(state_, TNode<Context>{p_context}, TNode<JSArray>{tmp14}, TNode<Smi>{phi_bb22_17}, &label19);
    ca_.Goto(&block25, phi_bb22_5, phi_bb22_11, phi_bb22_12, phi_bb22_13, phi_bb22_14, phi_bb22_17, phi_bb22_17);
    if (label19.is_used()) {
      ca_.Bind(&label19);
      ca_.Goto(&block26, phi_bb22_5, phi_bb22_11, phi_bb22_12, phi_bb22_13, phi_bb22_14, phi_bb22_17, phi_bb22_17);
    }
  }

  TNode<Smi> phi_bb26_5;
  TNode<BoolT> phi_bb26_11;
  TNode<BoolT> phi_bb26_12;
  TNode<BoolT> phi_bb26_13;
  TNode<Smi> phi_bb26_14;
  TNode<Smi> phi_bb26_17;
  TNode<Smi> phi_bb26_19;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_5, &phi_bb26_11, &phi_bb26_12, &phi_bb26_13, &phi_bb26_14, &phi_bb26_17, &phi_bb26_19);
    ca_.Goto(&block20, phi_bb26_5, phi_bb26_11, phi_bb26_12, phi_bb26_13);
  }

  TNode<Smi> phi_bb25_5;
  TNode<BoolT> phi_bb25_11;
  TNode<BoolT> phi_bb25_12;
  TNode<BoolT> phi_bb25_13;
  TNode<Smi> phi_bb25_14;
  TNode<Smi> phi_bb25_17;
  TNode<Smi> phi_bb25_19;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_5, &phi_bb25_11, &phi_bb25_12, &phi_bb25_13, &phi_bb25_14, &phi_bb25_17, &phi_bb25_19);
    ca_.Goto(&block21, phi_bb25_5, phi_bb25_11, phi_bb25_12, phi_bb25_13, phi_bb25_14, phi_bb25_17, tmp18);
  }

  TNode<Smi> phi_bb23_5;
  TNode<BoolT> phi_bb23_11;
  TNode<BoolT> phi_bb23_12;
  TNode<BoolT> phi_bb23_13;
  TNode<Smi> phi_bb23_14;
  TNode<Smi> phi_bb23_17;
  TNode<Object> tmp20;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_5, &phi_bb23_11, &phi_bb23_12, &phi_bb23_13, &phi_bb23_14, &phi_bb23_17);
    compiler::CodeAssemblerLabel label21(&ca_);
    tmp20 = LoadElementNoHole_FixedArray_0(state_, TNode<Context>{p_context}, TNode<JSArray>{tmp14}, TNode<Smi>{phi_bb23_17}, &label21);
    ca_.Goto(&block27, phi_bb23_5, phi_bb23_11, phi_bb23_12, phi_bb23_13, phi_bb23_14, phi_bb23_17, phi_bb23_17);
    if (label21.is_used()) {
      ca_.Bind(&label21);
      ca_.Goto(&block28, phi_bb23_5, phi_bb23_11, phi_bb23_12, phi_bb23_13, phi_bb23_14, phi_bb23_17, phi_bb23_17);
    }
  }

  TNode<Smi> phi_bb28_5;
  TNode<BoolT> phi_bb28_11;
  TNode<BoolT> phi_bb28_12;
  TNode<BoolT> phi_bb28_13;
  TNode<Smi> phi_bb28_14;
  TNode<Smi> phi_bb28_17;
  TNode<Smi> phi_bb28_19;
  if (block28.is_used()) {
    ca_.Bind(&block28, &phi_bb28_5, &phi_bb28_11, &phi_bb28_12, &phi_bb28_13, &phi_bb28_14, &phi_bb28_17, &phi_bb28_19);
    ca_.Goto(&block20, phi_bb28_5, phi_bb28_11, phi_bb28_12, phi_bb28_13);
  }

  TNode<Smi> phi_bb27_5;
  TNode<BoolT> phi_bb27_11;
  TNode<BoolT> phi_bb27_12;
  TNode<BoolT> phi_bb27_13;
  TNode<Smi> phi_bb27_14;
  TNode<Smi> phi_bb27_17;
  TNode<Smi> phi_bb27_19;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_5, &phi_bb27_11, &phi_bb27_12, &phi_bb27_13, &phi_bb27_14, &phi_bb27_17, &phi_bb27_19);
    ca_.Goto(&block21, phi_bb27_5, phi_bb27_11, phi_bb27_12, phi_bb27_13, phi_bb27_14, phi_bb27_17, tmp20);
  }

  TNode<Smi> phi_bb21_5;
  TNode<BoolT> phi_bb21_11;
  TNode<BoolT> phi_bb21_12;
  TNode<BoolT> phi_bb21_13;
  TNode<Smi> phi_bb21_14;
  TNode<Smi> phi_bb21_17;
  TNode<Object> phi_bb21_18;
  TNode<Object> tmp22;
  TNode<Smi> tmp23;
  if (block21.is_used()) {
    ca_.Bind(&block21, &phi_bb21_5, &phi_bb21_11, &phi_bb21_12, &phi_bb21_13, &phi_bb21_14, &phi_bb21_17, &phi_bb21_18);
    tmp22 = CodeStubAssembler(state_).Call(TNode<Context>{p_context}, TNode<Object>{p_callbackfn}, TNode<Object>{p_thisArg}, TNode<Object>{phi_bb21_18}, TNode<Object>{phi_bb21_5}, TNode<Object>{tmp14});
    compiler::CodeAssemblerLabel label24(&ca_);
    tmp23 = Cast_Smi_0(state_, TNode<Object>{tmp22}, &label24);
    ca_.Goto(&block33, phi_bb21_5, phi_bb21_11, phi_bb21_12, phi_bb21_13, phi_bb21_5, phi_bb21_5);
    if (label24.is_used()) {
      ca_.Bind(&label24);
      ca_.Goto(&block34, phi_bb21_5, phi_bb21_11, phi_bb21_12, phi_bb21_13, phi_bb21_5, phi_bb21_5);
    }
  }

  TNode<Smi> phi_bb34_5;
  TNode<BoolT> phi_bb34_11;
  TNode<BoolT> phi_bb34_12;
  TNode<BoolT> phi_bb34_13;
  TNode<Smi> phi_bb34_16;
  TNode<Smi> phi_bb34_20;
  TNode<HeapNumber> tmp25;
  if (block34.is_used()) {
    ca_.Bind(&block34, &phi_bb34_5, &phi_bb34_11, &phi_bb34_12, &phi_bb34_13, &phi_bb34_16, &phi_bb34_20);
    compiler::CodeAssemblerLabel label26(&ca_);
    tmp25 = Cast_HeapNumber_0(state_, TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(tmp22)}, &label26);
    ca_.Goto(&block45, phi_bb34_5, phi_bb34_11, phi_bb34_12, phi_bb34_13, phi_bb34_16, phi_bb34_20);
    if (label26.is_used()) {
      ca_.Bind(&label26);
      ca_.Goto(&block46, phi_bb34_5, phi_bb34_11, phi_bb34_12, phi_bb34_13, phi_bb34_16, phi_bb34_20);
    }
  }

  TNode<Smi> phi_bb33_5;
  TNode<BoolT> phi_bb33_11;
  TNode<BoolT> phi_bb33_12;
  TNode<BoolT> phi_bb33_13;
  TNode<Smi> phi_bb33_16;
  TNode<Smi> phi_bb33_20;
  TNode<Object> tmp27;
  TNode<IntPtrT> tmp28;
  TNode<IntPtrT> tmp29;
  TNode<IntPtrT> tmp30;
  TNode<UintPtrT> tmp31;
  TNode<UintPtrT> tmp32;
  TNode<BoolT> tmp33;
  if (block33.is_used()) {
    ca_.Bind(&block33, &phi_bb33_5, &phi_bb33_11, &phi_bb33_12, &phi_bb33_13, &phi_bb33_16, &phi_bb33_20);
    std::tie(tmp27, tmp28, tmp29) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp5}).Flatten();
    tmp30 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb33_20});
    tmp31 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp30});
    tmp32 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp29});
    tmp33 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp31}, TNode<UintPtrT>{tmp32});
    ca_.Branch(tmp33, &block39, std::vector<compiler::Node*>{phi_bb33_5, phi_bb33_11, phi_bb33_12, phi_bb33_13, phi_bb33_16, phi_bb33_20, phi_bb33_20, phi_bb33_20}, &block40, std::vector<compiler::Node*>{phi_bb33_5, phi_bb33_11, phi_bb33_12, phi_bb33_13, phi_bb33_16, phi_bb33_20, phi_bb33_20, phi_bb33_20});
  }

  TNode<Smi> phi_bb39_5;
  TNode<BoolT> phi_bb39_11;
  TNode<BoolT> phi_bb39_12;
  TNode<BoolT> phi_bb39_13;
  TNode<Smi> phi_bb39_16;
  TNode<Smi> phi_bb39_20;
  TNode<Smi> phi_bb39_28;
  TNode<Smi> phi_bb39_29;
  TNode<IntPtrT> tmp34;
  TNode<IntPtrT> tmp35;
  TNode<Object> tmp36;
  TNode<IntPtrT> tmp37;
  if (block39.is_used()) {
    ca_.Bind(&block39, &phi_bb39_5, &phi_bb39_11, &phi_bb39_12, &phi_bb39_13, &phi_bb39_16, &phi_bb39_20, &phi_bb39_28, &phi_bb39_29);
    tmp34 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp30});
    tmp35 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp28}, TNode<IntPtrT>{tmp34});
    std::tie(tmp36, tmp37) = NewReference_Object_0(state_, TNode<Object>{tmp27}, TNode<IntPtrT>{tmp35}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp36, tmp37}, tmp23);
    ca_.Goto(&block31, phi_bb39_5, phi_bb39_11, phi_bb39_12, phi_bb39_13, phi_bb39_16, phi_bb39_20);
  }

  TNode<Smi> phi_bb40_5;
  TNode<BoolT> phi_bb40_11;
  TNode<BoolT> phi_bb40_12;
  TNode<BoolT> phi_bb40_13;
  TNode<Smi> phi_bb40_16;
  TNode<Smi> phi_bb40_20;
  TNode<Smi> phi_bb40_28;
  TNode<Smi> phi_bb40_29;
  if (block40.is_used()) {
    ca_.Bind(&block40, &phi_bb40_5, &phi_bb40_11, &phi_bb40_12, &phi_bb40_13, &phi_bb40_16, &phi_bb40_20, &phi_bb40_28, &phi_bb40_29);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb46_5;
  TNode<BoolT> phi_bb46_11;
  TNode<BoolT> phi_bb46_12;
  TNode<BoolT> phi_bb46_13;
  TNode<Smi> phi_bb46_16;
  TNode<Smi> phi_bb46_20;
  TNode<BoolT> tmp38;
  TNode<BoolT> tmp39;
  TNode<Object> tmp40;
  TNode<IntPtrT> tmp41;
  TNode<IntPtrT> tmp42;
  TNode<IntPtrT> tmp43;
  TNode<UintPtrT> tmp44;
  TNode<UintPtrT> tmp45;
  TNode<BoolT> tmp46;
  if (block46.is_used()) {
    ca_.Bind(&block46, &phi_bb46_5, &phi_bb46_11, &phi_bb46_12, &phi_bb46_13, &phi_bb46_16, &phi_bb46_20);
    tmp38 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp39 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    std::tie(tmp40, tmp41, tmp42) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp5}).Flatten();
    tmp43 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb46_20});
    tmp44 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp43});
    tmp45 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp42});
    tmp46 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp44}, TNode<UintPtrT>{tmp45});
    ca_.Branch(tmp46, &block59, std::vector<compiler::Node*>{phi_bb46_5, phi_bb46_13, phi_bb46_16, phi_bb46_20, phi_bb46_20, phi_bb46_20}, &block60, std::vector<compiler::Node*>{phi_bb46_5, phi_bb46_13, phi_bb46_16, phi_bb46_20, phi_bb46_20, phi_bb46_20});
  }

  TNode<Smi> phi_bb45_5;
  TNode<BoolT> phi_bb45_11;
  TNode<BoolT> phi_bb45_12;
  TNode<BoolT> phi_bb45_13;
  TNode<Smi> phi_bb45_16;
  TNode<Smi> phi_bb45_20;
  TNode<BoolT> tmp47;
  TNode<Object> tmp48;
  TNode<IntPtrT> tmp49;
  TNode<IntPtrT> tmp50;
  TNode<IntPtrT> tmp51;
  TNode<UintPtrT> tmp52;
  TNode<UintPtrT> tmp53;
  TNode<BoolT> tmp54;
  if (block45.is_used()) {
    ca_.Bind(&block45, &phi_bb45_5, &phi_bb45_11, &phi_bb45_12, &phi_bb45_13, &phi_bb45_16, &phi_bb45_20);
    tmp47 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    std::tie(tmp48, tmp49, tmp50) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp5}).Flatten();
    tmp51 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb45_20});
    tmp52 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp51});
    tmp53 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp50});
    tmp54 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp52}, TNode<UintPtrT>{tmp53});
    ca_.Branch(tmp54, &block51, std::vector<compiler::Node*>{phi_bb45_5, phi_bb45_12, phi_bb45_13, phi_bb45_16, phi_bb45_20, phi_bb45_20, phi_bb45_20}, &block52, std::vector<compiler::Node*>{phi_bb45_5, phi_bb45_12, phi_bb45_13, phi_bb45_16, phi_bb45_20, phi_bb45_20, phi_bb45_20});
  }

  TNode<Smi> phi_bb51_5;
  TNode<BoolT> phi_bb51_12;
  TNode<BoolT> phi_bb51_13;
  TNode<Smi> phi_bb51_16;
  TNode<Smi> phi_bb51_20;
  TNode<Smi> phi_bb51_28;
  TNode<Smi> phi_bb51_29;
  TNode<IntPtrT> tmp55;
  TNode<IntPtrT> tmp56;
  TNode<Object> tmp57;
  TNode<IntPtrT> tmp58;
  if (block51.is_used()) {
    ca_.Bind(&block51, &phi_bb51_5, &phi_bb51_12, &phi_bb51_13, &phi_bb51_16, &phi_bb51_20, &phi_bb51_28, &phi_bb51_29);
    tmp55 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp51});
    tmp56 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp49}, TNode<IntPtrT>{tmp55});
    std::tie(tmp57, tmp58) = NewReference_Object_0(state_, TNode<Object>{tmp48}, TNode<IntPtrT>{tmp56}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp57, tmp58}, tmp25);
    ca_.Goto(&block43, phi_bb51_5, tmp47, phi_bb51_12, phi_bb51_13, phi_bb51_16, phi_bb51_20);
  }

  TNode<Smi> phi_bb52_5;
  TNode<BoolT> phi_bb52_12;
  TNode<BoolT> phi_bb52_13;
  TNode<Smi> phi_bb52_16;
  TNode<Smi> phi_bb52_20;
  TNode<Smi> phi_bb52_28;
  TNode<Smi> phi_bb52_29;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_5, &phi_bb52_12, &phi_bb52_13, &phi_bb52_16, &phi_bb52_20, &phi_bb52_28, &phi_bb52_29);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb59_5;
  TNode<BoolT> phi_bb59_13;
  TNode<Smi> phi_bb59_16;
  TNode<Smi> phi_bb59_20;
  TNode<Smi> phi_bb59_28;
  TNode<Smi> phi_bb59_29;
  TNode<IntPtrT> tmp59;
  TNode<IntPtrT> tmp60;
  TNode<Object> tmp61;
  TNode<IntPtrT> tmp62;
  if (block59.is_used()) {
    ca_.Bind(&block59, &phi_bb59_5, &phi_bb59_13, &phi_bb59_16, &phi_bb59_20, &phi_bb59_28, &phi_bb59_29);
    tmp59 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp43});
    tmp60 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp41}, TNode<IntPtrT>{tmp59});
    std::tie(tmp61, tmp62) = NewReference_Object_0(state_, TNode<Object>{tmp40}, TNode<IntPtrT>{tmp60}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp61, tmp62}, ca_.UncheckedCast<HeapObject>(tmp22));
    ca_.Goto(&block43, phi_bb59_5, tmp38, tmp39, phi_bb59_13, phi_bb59_16, phi_bb59_20);
  }

  TNode<Smi> phi_bb60_5;
  TNode<BoolT> phi_bb60_13;
  TNode<Smi> phi_bb60_16;
  TNode<Smi> phi_bb60_20;
  TNode<Smi> phi_bb60_28;
  TNode<Smi> phi_bb60_29;
  if (block60.is_used()) {
    ca_.Bind(&block60, &phi_bb60_5, &phi_bb60_13, &phi_bb60_16, &phi_bb60_20, &phi_bb60_28, &phi_bb60_29);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb43_5;
  TNode<BoolT> phi_bb43_11;
  TNode<BoolT> phi_bb43_12;
  TNode<BoolT> phi_bb43_13;
  TNode<Smi> phi_bb43_16;
  TNode<Smi> phi_bb43_20;
  if (block43.is_used()) {
    ca_.Bind(&block43, &phi_bb43_5, &phi_bb43_11, &phi_bb43_12, &phi_bb43_13, &phi_bb43_16, &phi_bb43_20);
    ca_.Goto(&block31, phi_bb43_5, phi_bb43_11, phi_bb43_12, phi_bb43_13, phi_bb43_16, phi_bb43_20);
  }

  TNode<Smi> phi_bb31_5;
  TNode<BoolT> phi_bb31_11;
  TNode<BoolT> phi_bb31_12;
  TNode<BoolT> phi_bb31_13;
  TNode<Smi> phi_bb31_16;
  TNode<Smi> phi_bb31_20;
  if (block31.is_used()) {
    ca_.Bind(&block31, &phi_bb31_5, &phi_bb31_11, &phi_bb31_12, &phi_bb31_13, &phi_bb31_16, &phi_bb31_20);
    ca_.Goto(&block19, phi_bb31_5, phi_bb31_11, phi_bb31_12, phi_bb31_13);
  }

  TNode<Smi> phi_bb20_5;
  TNode<BoolT> phi_bb20_11;
  TNode<BoolT> phi_bb20_12;
  TNode<BoolT> phi_bb20_13;
  TNode<BoolT> tmp63;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_5, &phi_bb20_11, &phi_bb20_12, &phi_bb20_13);
    tmp63 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block19, phi_bb20_5, phi_bb20_11, phi_bb20_12, tmp63);
  }

  TNode<Smi> phi_bb19_5;
  TNode<BoolT> phi_bb19_11;
  TNode<BoolT> phi_bb19_12;
  TNode<BoolT> phi_bb19_13;
  TNode<Smi> tmp64;
  TNode<Smi> tmp65;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_5, &phi_bb19_11, &phi_bb19_12, &phi_bb19_13);
    tmp64 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp65 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb19_5}, TNode<Smi>{tmp64});
    ca_.Goto(&block7, tmp65, tmp14, phi_bb19_11, phi_bb19_12, phi_bb19_13);
  }

  TNode<Smi> phi_bb6_5;
  TNode<JSArray> phi_bb6_7;
  TNode<BoolT> phi_bb6_11;
  TNode<BoolT> phi_bb6_12;
  TNode<BoolT> phi_bb6_13;
  TNode<IntPtrT> tmp66;
  TNode<Smi> tmp67;
  TNode<Int32T> tmp68;
  TNode<BoolT> tmp69;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_5, &phi_bb6_7, &phi_bb6_11, &phi_bb6_12, &phi_bb6_13);
    tmp66 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp67 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp5, tmp66});
    tmp68 = FromConstexpr_ElementsKind_constexpr_PACKED_SMI_ELEMENTS_0(state_, ElementsKind::PACKED_SMI_ELEMENTS);
    tmp69 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{phi_bb6_11});
    ca_.Branch(tmp69, &block111, std::vector<compiler::Node*>{phi_bb6_5, phi_bb6_7, phi_bb6_11, phi_bb6_12, phi_bb6_13}, &block112, std::vector<compiler::Node*>{phi_bb6_5, phi_bb6_7, phi_bb6_11, phi_bb6_12, phi_bb6_13, tmp68});
  }

  TNode<Smi> phi_bb4_5;
  TNode<JSArray> phi_bb4_7;
  TNode<BoolT> phi_bb4_11;
  TNode<BoolT> phi_bb4_12;
  TNode<BoolT> phi_bb4_13;
  TNode<Smi> phi_bb4_14;
  TNode<IntPtrT> tmp70;
  TNode<Smi> tmp71;
  TNode<Int32T> tmp72;
  TNode<BoolT> tmp73;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_5, &phi_bb4_7, &phi_bb4_11, &phi_bb4_12, &phi_bb4_13, &phi_bb4_14);
    tmp70 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp71 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp5, tmp70});
    tmp72 = FromConstexpr_ElementsKind_constexpr_PACKED_SMI_ELEMENTS_0(state_, ElementsKind::PACKED_SMI_ELEMENTS);
    tmp73 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{phi_bb4_11});
    ca_.Branch(tmp73, &block69, std::vector<compiler::Node*>{phi_bb4_5, phi_bb4_7, phi_bb4_11, phi_bb4_12, phi_bb4_13, phi_bb4_14, phi_bb4_14, phi_bb4_14}, &block70, std::vector<compiler::Node*>{phi_bb4_5, phi_bb4_7, phi_bb4_11, phi_bb4_12, phi_bb4_13, phi_bb4_14, phi_bb4_14, phi_bb4_14, tmp72});
  }

  TNode<Smi> phi_bb69_5;
  TNode<JSArray> phi_bb69_7;
  TNode<BoolT> phi_bb69_11;
  TNode<BoolT> phi_bb69_12;
  TNode<BoolT> phi_bb69_13;
  TNode<Smi> phi_bb69_14;
  TNode<Smi> phi_bb69_15;
  TNode<Smi> phi_bb69_18;
  if (block69.is_used()) {
    ca_.Bind(&block69, &phi_bb69_5, &phi_bb69_7, &phi_bb69_11, &phi_bb69_12, &phi_bb69_13, &phi_bb69_14, &phi_bb69_15, &phi_bb69_18);
    ca_.Branch(phi_bb69_12, &block71, std::vector<compiler::Node*>{phi_bb69_5, phi_bb69_7, phi_bb69_11, phi_bb69_12, phi_bb69_13, phi_bb69_14, phi_bb69_15, phi_bb69_18}, &block72, std::vector<compiler::Node*>{phi_bb69_5, phi_bb69_7, phi_bb69_11, phi_bb69_12, phi_bb69_13, phi_bb69_14, phi_bb69_15, phi_bb69_18});
  }

  TNode<Smi> phi_bb71_5;
  TNode<JSArray> phi_bb71_7;
  TNode<BoolT> phi_bb71_11;
  TNode<BoolT> phi_bb71_12;
  TNode<BoolT> phi_bb71_13;
  TNode<Smi> phi_bb71_14;
  TNode<Smi> phi_bb71_15;
  TNode<Smi> phi_bb71_18;
  TNode<Int32T> tmp74;
  if (block71.is_used()) {
    ca_.Bind(&block71, &phi_bb71_5, &phi_bb71_7, &phi_bb71_11, &phi_bb71_12, &phi_bb71_13, &phi_bb71_14, &phi_bb71_15, &phi_bb71_18);
    tmp74 = FromConstexpr_ElementsKind_constexpr_PACKED_DOUBLE_ELEMENTS_0(state_, ElementsKind::PACKED_DOUBLE_ELEMENTS);
    ca_.Goto(&block73, phi_bb71_5, phi_bb71_7, phi_bb71_11, phi_bb71_12, phi_bb71_13, phi_bb71_14, phi_bb71_15, phi_bb71_18, tmp74);
  }

  TNode<Smi> phi_bb72_5;
  TNode<JSArray> phi_bb72_7;
  TNode<BoolT> phi_bb72_11;
  TNode<BoolT> phi_bb72_12;
  TNode<BoolT> phi_bb72_13;
  TNode<Smi> phi_bb72_14;
  TNode<Smi> phi_bb72_15;
  TNode<Smi> phi_bb72_18;
  TNode<Int32T> tmp75;
  if (block72.is_used()) {
    ca_.Bind(&block72, &phi_bb72_5, &phi_bb72_7, &phi_bb72_11, &phi_bb72_12, &phi_bb72_13, &phi_bb72_14, &phi_bb72_15, &phi_bb72_18);
    tmp75 = FromConstexpr_ElementsKind_constexpr_PACKED_ELEMENTS_0(state_, ElementsKind::PACKED_ELEMENTS);
    ca_.Goto(&block73, phi_bb72_5, phi_bb72_7, phi_bb72_11, phi_bb72_12, phi_bb72_13, phi_bb72_14, phi_bb72_15, phi_bb72_18, tmp75);
  }

  TNode<Smi> phi_bb73_5;
  TNode<JSArray> phi_bb73_7;
  TNode<BoolT> phi_bb73_11;
  TNode<BoolT> phi_bb73_12;
  TNode<BoolT> phi_bb73_13;
  TNode<Smi> phi_bb73_14;
  TNode<Smi> phi_bb73_15;
  TNode<Smi> phi_bb73_18;
  TNode<Int32T> phi_bb73_20;
  if (block73.is_used()) {
    ca_.Bind(&block73, &phi_bb73_5, &phi_bb73_7, &phi_bb73_11, &phi_bb73_12, &phi_bb73_13, &phi_bb73_14, &phi_bb73_15, &phi_bb73_18, &phi_bb73_20);
    ca_.Goto(&block70, phi_bb73_5, phi_bb73_7, phi_bb73_11, phi_bb73_12, phi_bb73_13, phi_bb73_14, phi_bb73_15, phi_bb73_18, phi_bb73_20);
  }

  TNode<Smi> phi_bb70_5;
  TNode<JSArray> phi_bb70_7;
  TNode<BoolT> phi_bb70_11;
  TNode<BoolT> phi_bb70_12;
  TNode<BoolT> phi_bb70_13;
  TNode<Smi> phi_bb70_14;
  TNode<Smi> phi_bb70_15;
  TNode<Smi> phi_bb70_18;
  TNode<Int32T> phi_bb70_20;
  if (block70.is_used()) {
    ca_.Bind(&block70, &phi_bb70_5, &phi_bb70_7, &phi_bb70_11, &phi_bb70_12, &phi_bb70_13, &phi_bb70_14, &phi_bb70_15, &phi_bb70_18, &phi_bb70_20);
    ca_.Branch(phi_bb70_13, &block76, std::vector<compiler::Node*>{phi_bb70_5, phi_bb70_7, phi_bb70_11, phi_bb70_12, phi_bb70_13, phi_bb70_14, phi_bb70_15, phi_bb70_18, phi_bb70_20, phi_bb70_13}, &block77, std::vector<compiler::Node*>{phi_bb70_5, phi_bb70_7, phi_bb70_11, phi_bb70_12, phi_bb70_13, phi_bb70_14, phi_bb70_15, phi_bb70_18, phi_bb70_20, phi_bb70_13});
  }

  TNode<Smi> phi_bb76_5;
  TNode<JSArray> phi_bb76_7;
  TNode<BoolT> phi_bb76_11;
  TNode<BoolT> phi_bb76_12;
  TNode<BoolT> phi_bb76_13;
  TNode<Smi> phi_bb76_14;
  TNode<Smi> phi_bb76_15;
  TNode<Smi> phi_bb76_18;
  TNode<Int32T> phi_bb76_20;
  TNode<BoolT> phi_bb76_21;
  TNode<BoolT> tmp76;
  if (block76.is_used()) {
    ca_.Bind(&block76, &phi_bb76_5, &phi_bb76_7, &phi_bb76_11, &phi_bb76_12, &phi_bb76_13, &phi_bb76_14, &phi_bb76_15, &phi_bb76_18, &phi_bb76_20, &phi_bb76_21);
    tmp76 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block78, phi_bb76_5, phi_bb76_7, phi_bb76_11, phi_bb76_12, phi_bb76_13, phi_bb76_14, phi_bb76_15, phi_bb76_18, phi_bb76_20, phi_bb76_21, tmp76);
  }

  TNode<Smi> phi_bb77_5;
  TNode<JSArray> phi_bb77_7;
  TNode<BoolT> phi_bb77_11;
  TNode<BoolT> phi_bb77_12;
  TNode<BoolT> phi_bb77_13;
  TNode<Smi> phi_bb77_14;
  TNode<Smi> phi_bb77_15;
  TNode<Smi> phi_bb77_18;
  TNode<Int32T> phi_bb77_20;
  TNode<BoolT> phi_bb77_21;
  TNode<BoolT> tmp77;
  if (block77.is_used()) {
    ca_.Bind(&block77, &phi_bb77_5, &phi_bb77_7, &phi_bb77_11, &phi_bb77_12, &phi_bb77_13, &phi_bb77_14, &phi_bb77_15, &phi_bb77_18, &phi_bb77_20, &phi_bb77_21);
    tmp77 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb77_18}, TNode<Smi>{tmp71});
    ca_.Goto(&block78, phi_bb77_5, phi_bb77_7, phi_bb77_11, phi_bb77_12, phi_bb77_13, phi_bb77_14, phi_bb77_15, phi_bb77_18, phi_bb77_20, phi_bb77_21, tmp77);
  }

  TNode<Smi> phi_bb78_5;
  TNode<JSArray> phi_bb78_7;
  TNode<BoolT> phi_bb78_11;
  TNode<BoolT> phi_bb78_12;
  TNode<BoolT> phi_bb78_13;
  TNode<Smi> phi_bb78_14;
  TNode<Smi> phi_bb78_15;
  TNode<Smi> phi_bb78_18;
  TNode<Int32T> phi_bb78_20;
  TNode<BoolT> phi_bb78_21;
  TNode<BoolT> phi_bb78_22;
  if (block78.is_used()) {
    ca_.Bind(&block78, &phi_bb78_5, &phi_bb78_7, &phi_bb78_11, &phi_bb78_12, &phi_bb78_13, &phi_bb78_14, &phi_bb78_15, &phi_bb78_18, &phi_bb78_20, &phi_bb78_21, &phi_bb78_22);
    ca_.Branch(phi_bb78_22, &block74, std::vector<compiler::Node*>{phi_bb78_5, phi_bb78_7, phi_bb78_11, phi_bb78_12, phi_bb78_13, phi_bb78_14, phi_bb78_15, phi_bb78_18, phi_bb78_20}, &block75, std::vector<compiler::Node*>{phi_bb78_5, phi_bb78_7, phi_bb78_11, phi_bb78_12, phi_bb78_13, phi_bb78_14, phi_bb78_15, phi_bb78_18, phi_bb78_20});
  }

  TNode<Smi> phi_bb74_5;
  TNode<JSArray> phi_bb74_7;
  TNode<BoolT> phi_bb74_11;
  TNode<BoolT> phi_bb74_12;
  TNode<BoolT> phi_bb74_13;
  TNode<Smi> phi_bb74_14;
  TNode<Smi> phi_bb74_15;
  TNode<Smi> phi_bb74_18;
  TNode<Int32T> phi_bb74_20;
  TNode<Int32T> tmp78;
  if (block74.is_used()) {
    ca_.Bind(&block74, &phi_bb74_5, &phi_bb74_7, &phi_bb74_11, &phi_bb74_12, &phi_bb74_13, &phi_bb74_14, &phi_bb74_15, &phi_bb74_18, &phi_bb74_20);
    tmp78 = FastHoleyElementsKind_0(state_, TNode<Int32T>{phi_bb74_20});
    ca_.Goto(&block75, phi_bb74_5, phi_bb74_7, phi_bb74_11, phi_bb74_12, phi_bb74_13, phi_bb74_14, phi_bb74_15, phi_bb74_18, tmp78);
  }

  TNode<Smi> phi_bb75_5;
  TNode<JSArray> phi_bb75_7;
  TNode<BoolT> phi_bb75_11;
  TNode<BoolT> phi_bb75_12;
  TNode<BoolT> phi_bb75_13;
  TNode<Smi> phi_bb75_14;
  TNode<Smi> phi_bb75_15;
  TNode<Smi> phi_bb75_18;
  TNode<Int32T> phi_bb75_20;
  TNode<NativeContext> tmp79;
  TNode<Map> tmp80;
  TNode<BoolT> tmp81;
  if (block75.is_used()) {
    ca_.Bind(&block75, &phi_bb75_5, &phi_bb75_7, &phi_bb75_11, &phi_bb75_12, &phi_bb75_13, &phi_bb75_14, &phi_bb75_15, &phi_bb75_18, &phi_bb75_20);
    tmp79 = CodeStubAssembler(state_).LoadNativeContext(TNode<Context>{p_context});
    tmp80 = CodeStubAssembler(state_).LoadJSArrayElementsMap(TNode<Int32T>{phi_bb75_20}, TNode<NativeContext>{tmp79});
    tmp81 = CodeStubAssembler(state_).IsDoubleElementsKind(TNode<Int32T>{phi_bb75_20});
    ca_.Branch(tmp81, &block79, std::vector<compiler::Node*>{phi_bb75_5, phi_bb75_7, phi_bb75_11, phi_bb75_12, phi_bb75_13, phi_bb75_14, phi_bb75_15, phi_bb75_18}, &block80, std::vector<compiler::Node*>{phi_bb75_5, phi_bb75_7, phi_bb75_11, phi_bb75_12, phi_bb75_13, phi_bb75_14, phi_bb75_15, phi_bb75_18});
  }

  TNode<Smi> phi_bb79_5;
  TNode<JSArray> phi_bb79_7;
  TNode<BoolT> phi_bb79_11;
  TNode<BoolT> phi_bb79_12;
  TNode<BoolT> phi_bb79_13;
  TNode<Smi> phi_bb79_14;
  TNode<Smi> phi_bb79_15;
  TNode<Smi> phi_bb79_18;
  TNode<IntPtrT> tmp82;
  TNode<FixedDoubleArray> tmp83;
  TNode<JSArray> tmp84;
  TNode<Smi> tmp85;
  if (block79.is_used()) {
    ca_.Bind(&block79, &phi_bb79_5, &phi_bb79_7, &phi_bb79_11, &phi_bb79_12, &phi_bb79_13, &phi_bb79_14, &phi_bb79_15, &phi_bb79_18);
    tmp82 = CodeStubAssembler(state_).SmiUntag(TNode<Smi>{tmp71});
    tmp83 = CodeStubAssembler(state_).AllocateFixedDoubleArrayWithHoles(TNode<IntPtrT>{tmp82}, CodeStubAssembler::AllocationFlag::kAllowLargeObjectAllocation);
    tmp84 = NewJSArray_0(state_, TNode<Context>{p_context}, TNode<Map>{tmp80}, TNode<FixedArrayBase>{tmp5});
    tmp85 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block84, phi_bb79_5, phi_bb79_7, phi_bb79_11, phi_bb79_12, phi_bb79_13, phi_bb79_14, phi_bb79_15, phi_bb79_18, tmp85);
  }

  TNode<Smi> phi_bb84_5;
  TNode<JSArray> phi_bb84_7;
  TNode<BoolT> phi_bb84_11;
  TNode<BoolT> phi_bb84_12;
  TNode<BoolT> phi_bb84_13;
  TNode<Smi> phi_bb84_14;
  TNode<Smi> phi_bb84_15;
  TNode<Smi> phi_bb84_18;
  TNode<Smi> phi_bb84_24;
  TNode<BoolT> tmp86;
  if (block84.is_used()) {
    ca_.Bind(&block84, &phi_bb84_5, &phi_bb84_7, &phi_bb84_11, &phi_bb84_12, &phi_bb84_13, &phi_bb84_14, &phi_bb84_15, &phi_bb84_18, &phi_bb84_24);
    tmp86 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb84_24}, TNode<Smi>{phi_bb84_18});
    ca_.Branch(tmp86, &block82, std::vector<compiler::Node*>{phi_bb84_5, phi_bb84_7, phi_bb84_11, phi_bb84_12, phi_bb84_13, phi_bb84_14, phi_bb84_15, phi_bb84_18, phi_bb84_24}, &block83, std::vector<compiler::Node*>{phi_bb84_5, phi_bb84_7, phi_bb84_11, phi_bb84_12, phi_bb84_13, phi_bb84_14, phi_bb84_15, phi_bb84_18, phi_bb84_24});
  }

  TNode<Smi> phi_bb82_5;
  TNode<JSArray> phi_bb82_7;
  TNode<BoolT> phi_bb82_11;
  TNode<BoolT> phi_bb82_12;
  TNode<BoolT> phi_bb82_13;
  TNode<Smi> phi_bb82_14;
  TNode<Smi> phi_bb82_15;
  TNode<Smi> phi_bb82_18;
  TNode<Smi> phi_bb82_24;
  TNode<Object> tmp87;
  TNode<IntPtrT> tmp88;
  TNode<IntPtrT> tmp89;
  TNode<IntPtrT> tmp90;
  TNode<UintPtrT> tmp91;
  TNode<UintPtrT> tmp92;
  TNode<BoolT> tmp93;
  if (block82.is_used()) {
    ca_.Bind(&block82, &phi_bb82_5, &phi_bb82_7, &phi_bb82_11, &phi_bb82_12, &phi_bb82_13, &phi_bb82_14, &phi_bb82_15, &phi_bb82_18, &phi_bb82_24);
    std::tie(tmp87, tmp88, tmp89) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp5}).Flatten();
    tmp90 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb82_24});
    tmp91 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp90});
    tmp92 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp89});
    tmp93 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp91}, TNode<UintPtrT>{tmp92});
    ca_.Branch(tmp93, &block90, std::vector<compiler::Node*>{phi_bb82_5, phi_bb82_7, phi_bb82_11, phi_bb82_12, phi_bb82_13, phi_bb82_14, phi_bb82_15, phi_bb82_18, phi_bb82_24, phi_bb82_24, phi_bb82_24}, &block91, std::vector<compiler::Node*>{phi_bb82_5, phi_bb82_7, phi_bb82_11, phi_bb82_12, phi_bb82_13, phi_bb82_14, phi_bb82_15, phi_bb82_18, phi_bb82_24, phi_bb82_24, phi_bb82_24});
  }

  TNode<Smi> phi_bb90_5;
  TNode<JSArray> phi_bb90_7;
  TNode<BoolT> phi_bb90_11;
  TNode<BoolT> phi_bb90_12;
  TNode<BoolT> phi_bb90_13;
  TNode<Smi> phi_bb90_14;
  TNode<Smi> phi_bb90_15;
  TNode<Smi> phi_bb90_18;
  TNode<Smi> phi_bb90_24;
  TNode<Smi> phi_bb90_29;
  TNode<Smi> phi_bb90_30;
  TNode<IntPtrT> tmp94;
  TNode<IntPtrT> tmp95;
  TNode<Object> tmp96;
  TNode<IntPtrT> tmp97;
  TNode<Object> tmp98;
  TNode<Object> tmp99;
  TNode<Number> tmp100;
  if (block90.is_used()) {
    ca_.Bind(&block90, &phi_bb90_5, &phi_bb90_7, &phi_bb90_11, &phi_bb90_12, &phi_bb90_13, &phi_bb90_14, &phi_bb90_15, &phi_bb90_18, &phi_bb90_24, &phi_bb90_29, &phi_bb90_30);
    tmp94 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp90});
    tmp95 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp88}, TNode<IntPtrT>{tmp94});
    std::tie(tmp96, tmp97) = NewReference_Object_0(state_, TNode<Object>{tmp87}, TNode<IntPtrT>{tmp95}).Flatten();
    tmp98 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp96, tmp97});
    tmp99 = UnsafeCast_HeapNumber_OR_Smi_OR_TheHole_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp98});
    compiler::CodeAssemblerLabel label101(&ca_);
    tmp100 = Cast_Number_0(state_, TNode<Object>{tmp99}, &label101);
    ca_.Goto(&block96, phi_bb90_5, phi_bb90_7, phi_bb90_11, phi_bb90_12, phi_bb90_13, phi_bb90_14, phi_bb90_15, phi_bb90_18, phi_bb90_24);
    if (label101.is_used()) {
      ca_.Bind(&label101);
      ca_.Goto(&block97, phi_bb90_5, phi_bb90_7, phi_bb90_11, phi_bb90_12, phi_bb90_13, phi_bb90_14, phi_bb90_15, phi_bb90_18, phi_bb90_24);
    }
  }

  TNode<Smi> phi_bb91_5;
  TNode<JSArray> phi_bb91_7;
  TNode<BoolT> phi_bb91_11;
  TNode<BoolT> phi_bb91_12;
  TNode<BoolT> phi_bb91_13;
  TNode<Smi> phi_bb91_14;
  TNode<Smi> phi_bb91_15;
  TNode<Smi> phi_bb91_18;
  TNode<Smi> phi_bb91_24;
  TNode<Smi> phi_bb91_29;
  TNode<Smi> phi_bb91_30;
  if (block91.is_used()) {
    ca_.Bind(&block91, &phi_bb91_5, &phi_bb91_7, &phi_bb91_11, &phi_bb91_12, &phi_bb91_13, &phi_bb91_14, &phi_bb91_15, &phi_bb91_18, &phi_bb91_24, &phi_bb91_29, &phi_bb91_30);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb97_5;
  TNode<JSArray> phi_bb97_7;
  TNode<BoolT> phi_bb97_11;
  TNode<BoolT> phi_bb97_12;
  TNode<BoolT> phi_bb97_13;
  TNode<Smi> phi_bb97_14;
  TNode<Smi> phi_bb97_15;
  TNode<Smi> phi_bb97_18;
  TNode<Smi> phi_bb97_24;
  if (block97.is_used()) {
    ca_.Bind(&block97, &phi_bb97_5, &phi_bb97_7, &phi_bb97_11, &phi_bb97_12, &phi_bb97_13, &phi_bb97_14, &phi_bb97_15, &phi_bb97_18, &phi_bb97_24);
    ca_.Goto(&block94, phi_bb97_5, phi_bb97_7, phi_bb97_11, phi_bb97_12, phi_bb97_13, phi_bb97_14, phi_bb97_15, phi_bb97_18, phi_bb97_24);
  }

  TNode<Smi> phi_bb96_5;
  TNode<JSArray> phi_bb96_7;
  TNode<BoolT> phi_bb96_11;
  TNode<BoolT> phi_bb96_12;
  TNode<BoolT> phi_bb96_13;
  TNode<Smi> phi_bb96_14;
  TNode<Smi> phi_bb96_15;
  TNode<Smi> phi_bb96_18;
  TNode<Smi> phi_bb96_24;
  TNode<Object> tmp102;
  TNode<IntPtrT> tmp103;
  TNode<IntPtrT> tmp104;
  TNode<IntPtrT> tmp105;
  TNode<UintPtrT> tmp106;
  TNode<UintPtrT> tmp107;
  TNode<BoolT> tmp108;
  if (block96.is_used()) {
    ca_.Bind(&block96, &phi_bb96_5, &phi_bb96_7, &phi_bb96_11, &phi_bb96_12, &phi_bb96_13, &phi_bb96_14, &phi_bb96_15, &phi_bb96_18, &phi_bb96_24);
    std::tie(tmp102, tmp103, tmp104) = FieldSliceFixedDoubleArrayFloats_0(state_, TNode<FixedDoubleArray>{tmp83}).Flatten();
    tmp105 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb96_24});
    tmp106 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp105});
    tmp107 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp104});
    tmp108 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp106}, TNode<UintPtrT>{tmp107});
    ca_.Branch(tmp108, &block102, std::vector<compiler::Node*>{phi_bb96_5, phi_bb96_7, phi_bb96_11, phi_bb96_12, phi_bb96_13, phi_bb96_14, phi_bb96_15, phi_bb96_18, phi_bb96_24, phi_bb96_24, phi_bb96_24}, &block103, std::vector<compiler::Node*>{phi_bb96_5, phi_bb96_7, phi_bb96_11, phi_bb96_12, phi_bb96_13, phi_bb96_14, phi_bb96_15, phi_bb96_18, phi_bb96_24, phi_bb96_24, phi_bb96_24});
  }

  TNode<Smi> phi_bb102_5;
  TNode<JSArray> phi_bb102_7;
  TNode<BoolT> phi_bb102_11;
  TNode<BoolT> phi_bb102_12;
  TNode<BoolT> phi_bb102_13;
  TNode<Smi> phi_bb102_14;
  TNode<Smi> phi_bb102_15;
  TNode<Smi> phi_bb102_18;
  TNode<Smi> phi_bb102_24;
  TNode<Smi> phi_bb102_31;
  TNode<Smi> phi_bb102_32;
  TNode<IntPtrT> tmp109;
  TNode<IntPtrT> tmp110;
  TNode<Object> tmp111;
  TNode<IntPtrT> tmp112;
  TNode<BoolT> tmp113;
  TNode<Float64T> tmp114;
  if (block102.is_used()) {
    ca_.Bind(&block102, &phi_bb102_5, &phi_bb102_7, &phi_bb102_11, &phi_bb102_12, &phi_bb102_13, &phi_bb102_14, &phi_bb102_15, &phi_bb102_18, &phi_bb102_24, &phi_bb102_31, &phi_bb102_32);
    tmp109 = TimesSizeOf_float64_or_hole_0(state_, TNode<IntPtrT>{tmp105});
    tmp110 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp103}, TNode<IntPtrT>{tmp109});
    std::tie(tmp111, tmp112) = NewReference_float64_or_hole_0(state_, TNode<Object>{tmp102}, TNode<IntPtrT>{tmp110}).Flatten();
    std::tie(tmp113, tmp114) = Convert_float64_or_hole_Number_0(state_, TNode<Number>{tmp100}).Flatten();
    StoreFloat64OrHole_0(state_, TorqueStructReference_float64_or_hole_0{TNode<Object>{tmp111}, TNode<IntPtrT>{tmp112}, TorqueStructUnsafe_0{}}, TorqueStructfloat64_or_hole_0{TNode<BoolT>{tmp113}, TNode<Float64T>{tmp114}});
    ca_.Goto(&block94, phi_bb102_5, phi_bb102_7, phi_bb102_11, phi_bb102_12, phi_bb102_13, phi_bb102_14, phi_bb102_15, phi_bb102_18, phi_bb102_24);
  }

  TNode<Smi> phi_bb103_5;
  TNode<JSArray> phi_bb103_7;
  TNode<BoolT> phi_bb103_11;
  TNode<BoolT> phi_bb103_12;
  TNode<BoolT> phi_bb103_13;
  TNode<Smi> phi_bb103_14;
  TNode<Smi> phi_bb103_15;
  TNode<Smi> phi_bb103_18;
  TNode<Smi> phi_bb103_24;
  TNode<Smi> phi_bb103_31;
  TNode<Smi> phi_bb103_32;
  if (block103.is_used()) {
    ca_.Bind(&block103, &phi_bb103_5, &phi_bb103_7, &phi_bb103_11, &phi_bb103_12, &phi_bb103_13, &phi_bb103_14, &phi_bb103_15, &phi_bb103_18, &phi_bb103_24, &phi_bb103_31, &phi_bb103_32);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb94_5;
  TNode<JSArray> phi_bb94_7;
  TNode<BoolT> phi_bb94_11;
  TNode<BoolT> phi_bb94_12;
  TNode<BoolT> phi_bb94_13;
  TNode<Smi> phi_bb94_14;
  TNode<Smi> phi_bb94_15;
  TNode<Smi> phi_bb94_18;
  TNode<Smi> phi_bb94_24;
  TNode<Smi> tmp115;
  TNode<Smi> tmp116;
  if (block94.is_used()) {
    ca_.Bind(&block94, &phi_bb94_5, &phi_bb94_7, &phi_bb94_11, &phi_bb94_12, &phi_bb94_13, &phi_bb94_14, &phi_bb94_15, &phi_bb94_18, &phi_bb94_24);
    tmp115 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp116 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb94_24}, TNode<Smi>{tmp115});
    ca_.Goto(&block84, phi_bb94_5, phi_bb94_7, phi_bb94_11, phi_bb94_12, phi_bb94_13, phi_bb94_14, phi_bb94_15, phi_bb94_18, tmp116);
  }

  TNode<Smi> phi_bb83_5;
  TNode<JSArray> phi_bb83_7;
  TNode<BoolT> phi_bb83_11;
  TNode<BoolT> phi_bb83_12;
  TNode<BoolT> phi_bb83_13;
  TNode<Smi> phi_bb83_14;
  TNode<Smi> phi_bb83_15;
  TNode<Smi> phi_bb83_18;
  TNode<Smi> phi_bb83_24;
  TNode<IntPtrT> tmp117;
  if (block83.is_used()) {
    ca_.Bind(&block83, &phi_bb83_5, &phi_bb83_7, &phi_bb83_11, &phi_bb83_12, &phi_bb83_13, &phi_bb83_14, &phi_bb83_15, &phi_bb83_18, &phi_bb83_24);
    tmp117 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp84, tmp117}, tmp83);
    ca_.Goto(&block81, phi_bb83_5, phi_bb83_7, phi_bb83_11, phi_bb83_12, phi_bb83_13, phi_bb83_14, phi_bb83_15, phi_bb83_18, tmp84);
  }

  TNode<Smi> phi_bb80_5;
  TNode<JSArray> phi_bb80_7;
  TNode<BoolT> phi_bb80_11;
  TNode<BoolT> phi_bb80_12;
  TNode<BoolT> phi_bb80_13;
  TNode<Smi> phi_bb80_14;
  TNode<Smi> phi_bb80_15;
  TNode<Smi> phi_bb80_18;
  TNode<JSArray> tmp118;
  if (block80.is_used()) {
    ca_.Bind(&block80, &phi_bb80_5, &phi_bb80_7, &phi_bb80_11, &phi_bb80_12, &phi_bb80_13, &phi_bb80_14, &phi_bb80_15, &phi_bb80_18);
    tmp118 = NewJSArray_0(state_, TNode<Context>{p_context}, TNode<Map>{tmp80}, TNode<FixedArrayBase>{tmp5});
    ca_.Goto(&block81, phi_bb80_5, phi_bb80_7, phi_bb80_11, phi_bb80_12, phi_bb80_13, phi_bb80_14, phi_bb80_15, phi_bb80_18, tmp118);
  }

  TNode<Smi> phi_bb81_5;
  TNode<JSArray> phi_bb81_7;
  TNode<BoolT> phi_bb81_11;
  TNode<BoolT> phi_bb81_12;
  TNode<BoolT> phi_bb81_13;
  TNode<Smi> phi_bb81_14;
  TNode<Smi> phi_bb81_15;
  TNode<Smi> phi_bb81_18;
  TNode<JSArray> phi_bb81_22;
  TNode<FixedArray> tmp119;
  if (block81.is_used()) {
    ca_.Bind(&block81, &phi_bb81_5, &phi_bb81_7, &phi_bb81_11, &phi_bb81_12, &phi_bb81_13, &phi_bb81_14, &phi_bb81_15, &phi_bb81_18, &phi_bb81_22);
    tmp119 = kEmptyFixedArray_0(state_);
    *label_Bailout_parameter_1 = phi_bb81_14;
    *label_Bailout_parameter_0 = phi_bb81_22;
    ca_.Goto(label_Bailout);
  }

  TNode<Smi> phi_bb111_5;
  TNode<JSArray> phi_bb111_7;
  TNode<BoolT> phi_bb111_11;
  TNode<BoolT> phi_bb111_12;
  TNode<BoolT> phi_bb111_13;
  if (block111.is_used()) {
    ca_.Bind(&block111, &phi_bb111_5, &phi_bb111_7, &phi_bb111_11, &phi_bb111_12, &phi_bb111_13);
    ca_.Branch(phi_bb111_12, &block113, std::vector<compiler::Node*>{phi_bb111_5, phi_bb111_7, phi_bb111_11, phi_bb111_12, phi_bb111_13}, &block114, std::vector<compiler::Node*>{phi_bb111_5, phi_bb111_7, phi_bb111_11, phi_bb111_12, phi_bb111_13});
  }

  TNode<Smi> phi_bb113_5;
  TNode<JSArray> phi_bb113_7;
  TNode<BoolT> phi_bb113_11;
  TNode<BoolT> phi_bb113_12;
  TNode<BoolT> phi_bb113_13;
  TNode<Int32T> tmp120;
  if (block113.is_used()) {
    ca_.Bind(&block113, &phi_bb113_5, &phi_bb113_7, &phi_bb113_11, &phi_bb113_12, &phi_bb113_13);
    tmp120 = FromConstexpr_ElementsKind_constexpr_PACKED_DOUBLE_ELEMENTS_0(state_, ElementsKind::PACKED_DOUBLE_ELEMENTS);
    ca_.Goto(&block115, phi_bb113_5, phi_bb113_7, phi_bb113_11, phi_bb113_12, phi_bb113_13, tmp120);
  }

  TNode<Smi> phi_bb114_5;
  TNode<JSArray> phi_bb114_7;
  TNode<BoolT> phi_bb114_11;
  TNode<BoolT> phi_bb114_12;
  TNode<BoolT> phi_bb114_13;
  TNode<Int32T> tmp121;
  if (block114.is_used()) {
    ca_.Bind(&block114, &phi_bb114_5, &phi_bb114_7, &phi_bb114_11, &phi_bb114_12, &phi_bb114_13);
    tmp121 = FromConstexpr_ElementsKind_constexpr_PACKED_ELEMENTS_0(state_, ElementsKind::PACKED_ELEMENTS);
    ca_.Goto(&block115, phi_bb114_5, phi_bb114_7, phi_bb114_11, phi_bb114_12, phi_bb114_13, tmp121);
  }

  TNode<Smi> phi_bb115_5;
  TNode<JSArray> phi_bb115_7;
  TNode<BoolT> phi_bb115_11;
  TNode<BoolT> phi_bb115_12;
  TNode<BoolT> phi_bb115_13;
  TNode<Int32T> phi_bb115_19;
  if (block115.is_used()) {
    ca_.Bind(&block115, &phi_bb115_5, &phi_bb115_7, &phi_bb115_11, &phi_bb115_12, &phi_bb115_13, &phi_bb115_19);
    ca_.Goto(&block112, phi_bb115_5, phi_bb115_7, phi_bb115_11, phi_bb115_12, phi_bb115_13, phi_bb115_19);
  }

  TNode<Smi> phi_bb112_5;
  TNode<JSArray> phi_bb112_7;
  TNode<BoolT> phi_bb112_11;
  TNode<BoolT> phi_bb112_12;
  TNode<BoolT> phi_bb112_13;
  TNode<Int32T> phi_bb112_19;
  if (block112.is_used()) {
    ca_.Bind(&block112, &phi_bb112_5, &phi_bb112_7, &phi_bb112_11, &phi_bb112_12, &phi_bb112_13, &phi_bb112_19);
    ca_.Branch(phi_bb112_13, &block118, std::vector<compiler::Node*>{phi_bb112_5, phi_bb112_7, phi_bb112_11, phi_bb112_12, phi_bb112_13, phi_bb112_19, phi_bb112_13}, &block119, std::vector<compiler::Node*>{phi_bb112_5, phi_bb112_7, phi_bb112_11, phi_bb112_12, phi_bb112_13, phi_bb112_19, phi_bb112_13});
  }

  TNode<Smi> phi_bb118_5;
  TNode<JSArray> phi_bb118_7;
  TNode<BoolT> phi_bb118_11;
  TNode<BoolT> phi_bb118_12;
  TNode<BoolT> phi_bb118_13;
  TNode<Int32T> phi_bb118_19;
  TNode<BoolT> phi_bb118_20;
  TNode<BoolT> tmp122;
  if (block118.is_used()) {
    ca_.Bind(&block118, &phi_bb118_5, &phi_bb118_7, &phi_bb118_11, &phi_bb118_12, &phi_bb118_13, &phi_bb118_19, &phi_bb118_20);
    tmp122 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block120, phi_bb118_5, phi_bb118_7, phi_bb118_11, phi_bb118_12, phi_bb118_13, phi_bb118_19, phi_bb118_20, tmp122);
  }

  TNode<Smi> phi_bb119_5;
  TNode<JSArray> phi_bb119_7;
  TNode<BoolT> phi_bb119_11;
  TNode<BoolT> phi_bb119_12;
  TNode<BoolT> phi_bb119_13;
  TNode<Int32T> phi_bb119_19;
  TNode<BoolT> phi_bb119_20;
  TNode<BoolT> tmp123;
  if (block119.is_used()) {
    ca_.Bind(&block119, &phi_bb119_5, &phi_bb119_7, &phi_bb119_11, &phi_bb119_12, &phi_bb119_13, &phi_bb119_19, &phi_bb119_20);
    tmp123 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{p_len}, TNode<Smi>{tmp67});
    ca_.Goto(&block120, phi_bb119_5, phi_bb119_7, phi_bb119_11, phi_bb119_12, phi_bb119_13, phi_bb119_19, phi_bb119_20, tmp123);
  }

  TNode<Smi> phi_bb120_5;
  TNode<JSArray> phi_bb120_7;
  TNode<BoolT> phi_bb120_11;
  TNode<BoolT> phi_bb120_12;
  TNode<BoolT> phi_bb120_13;
  TNode<Int32T> phi_bb120_19;
  TNode<BoolT> phi_bb120_20;
  TNode<BoolT> phi_bb120_21;
  if (block120.is_used()) {
    ca_.Bind(&block120, &phi_bb120_5, &phi_bb120_7, &phi_bb120_11, &phi_bb120_12, &phi_bb120_13, &phi_bb120_19, &phi_bb120_20, &phi_bb120_21);
    ca_.Branch(phi_bb120_21, &block116, std::vector<compiler::Node*>{phi_bb120_5, phi_bb120_7, phi_bb120_11, phi_bb120_12, phi_bb120_13, phi_bb120_19}, &block117, std::vector<compiler::Node*>{phi_bb120_5, phi_bb120_7, phi_bb120_11, phi_bb120_12, phi_bb120_13, phi_bb120_19});
  }

  TNode<Smi> phi_bb116_5;
  TNode<JSArray> phi_bb116_7;
  TNode<BoolT> phi_bb116_11;
  TNode<BoolT> phi_bb116_12;
  TNode<BoolT> phi_bb116_13;
  TNode<Int32T> phi_bb116_19;
  TNode<Int32T> tmp124;
  if (block116.is_used()) {
    ca_.Bind(&block116, &phi_bb116_5, &phi_bb116_7, &phi_bb116_11, &phi_bb116_12, &phi_bb116_13, &phi_bb116_19);
    tmp124 = FastHoleyElementsKind_0(state_, TNode<Int32T>{phi_bb116_19});
    ca_.Goto(&block117, phi_bb116_5, phi_bb116_7, phi_bb116_11, phi_bb116_12, phi_bb116_13, tmp124);
  }

  TNode<Smi> phi_bb117_5;
  TNode<JSArray> phi_bb117_7;
  TNode<BoolT> phi_bb117_11;
  TNode<BoolT> phi_bb117_12;
  TNode<BoolT> phi_bb117_13;
  TNode<Int32T> phi_bb117_19;
  TNode<NativeContext> tmp125;
  TNode<Map> tmp126;
  TNode<BoolT> tmp127;
  if (block117.is_used()) {
    ca_.Bind(&block117, &phi_bb117_5, &phi_bb117_7, &phi_bb117_11, &phi_bb117_12, &phi_bb117_13, &phi_bb117_19);
    tmp125 = CodeStubAssembler(state_).LoadNativeContext(TNode<Context>{p_context});
    tmp126 = CodeStubAssembler(state_).LoadJSArrayElementsMap(TNode<Int32T>{phi_bb117_19}, TNode<NativeContext>{tmp125});
    tmp127 = CodeStubAssembler(state_).IsDoubleElementsKind(TNode<Int32T>{phi_bb117_19});
    ca_.Branch(tmp127, &block121, std::vector<compiler::Node*>{phi_bb117_5, phi_bb117_7, phi_bb117_11, phi_bb117_12, phi_bb117_13}, &block122, std::vector<compiler::Node*>{phi_bb117_5, phi_bb117_7, phi_bb117_11, phi_bb117_12, phi_bb117_13});
  }

  TNode<Smi> phi_bb121_5;
  TNode<JSArray> phi_bb121_7;
  TNode<BoolT> phi_bb121_11;
  TNode<BoolT> phi_bb121_12;
  TNode<BoolT> phi_bb121_13;
  TNode<IntPtrT> tmp128;
  TNode<FixedDoubleArray> tmp129;
  TNode<JSArray> tmp130;
  TNode<Smi> tmp131;
  if (block121.is_used()) {
    ca_.Bind(&block121, &phi_bb121_5, &phi_bb121_7, &phi_bb121_11, &phi_bb121_12, &phi_bb121_13);
    tmp128 = CodeStubAssembler(state_).SmiUntag(TNode<Smi>{tmp67});
    tmp129 = CodeStubAssembler(state_).AllocateFixedDoubleArrayWithHoles(TNode<IntPtrT>{tmp128}, CodeStubAssembler::AllocationFlag::kAllowLargeObjectAllocation);
    tmp130 = NewJSArray_0(state_, TNode<Context>{p_context}, TNode<Map>{tmp126}, TNode<FixedArrayBase>{tmp5});
    tmp131 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block126, phi_bb121_5, phi_bb121_7, phi_bb121_11, phi_bb121_12, phi_bb121_13, tmp131);
  }

  TNode<Smi> phi_bb126_5;
  TNode<JSArray> phi_bb126_7;
  TNode<BoolT> phi_bb126_11;
  TNode<BoolT> phi_bb126_12;
  TNode<BoolT> phi_bb126_13;
  TNode<Smi> phi_bb126_23;
  TNode<BoolT> tmp132;
  if (block126.is_used()) {
    ca_.Bind(&block126, &phi_bb126_5, &phi_bb126_7, &phi_bb126_11, &phi_bb126_12, &phi_bb126_13, &phi_bb126_23);
    tmp132 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb126_23}, TNode<Smi>{p_len});
    ca_.Branch(tmp132, &block124, std::vector<compiler::Node*>{phi_bb126_5, phi_bb126_7, phi_bb126_11, phi_bb126_12, phi_bb126_13, phi_bb126_23}, &block125, std::vector<compiler::Node*>{phi_bb126_5, phi_bb126_7, phi_bb126_11, phi_bb126_12, phi_bb126_13, phi_bb126_23});
  }

  TNode<Smi> phi_bb124_5;
  TNode<JSArray> phi_bb124_7;
  TNode<BoolT> phi_bb124_11;
  TNode<BoolT> phi_bb124_12;
  TNode<BoolT> phi_bb124_13;
  TNode<Smi> phi_bb124_23;
  TNode<Object> tmp133;
  TNode<IntPtrT> tmp134;
  TNode<IntPtrT> tmp135;
  TNode<IntPtrT> tmp136;
  TNode<UintPtrT> tmp137;
  TNode<UintPtrT> tmp138;
  TNode<BoolT> tmp139;
  if (block124.is_used()) {
    ca_.Bind(&block124, &phi_bb124_5, &phi_bb124_7, &phi_bb124_11, &phi_bb124_12, &phi_bb124_13, &phi_bb124_23);
    std::tie(tmp133, tmp134, tmp135) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp5}).Flatten();
    tmp136 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb124_23});
    tmp137 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp136});
    tmp138 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp135});
    tmp139 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp137}, TNode<UintPtrT>{tmp138});
    ca_.Branch(tmp139, &block132, std::vector<compiler::Node*>{phi_bb124_5, phi_bb124_7, phi_bb124_11, phi_bb124_12, phi_bb124_13, phi_bb124_23, phi_bb124_23, phi_bb124_23}, &block133, std::vector<compiler::Node*>{phi_bb124_5, phi_bb124_7, phi_bb124_11, phi_bb124_12, phi_bb124_13, phi_bb124_23, phi_bb124_23, phi_bb124_23});
  }

  TNode<Smi> phi_bb132_5;
  TNode<JSArray> phi_bb132_7;
  TNode<BoolT> phi_bb132_11;
  TNode<BoolT> phi_bb132_12;
  TNode<BoolT> phi_bb132_13;
  TNode<Smi> phi_bb132_23;
  TNode<Smi> phi_bb132_28;
  TNode<Smi> phi_bb132_29;
  TNode<IntPtrT> tmp140;
  TNode<IntPtrT> tmp141;
  TNode<Object> tmp142;
  TNode<IntPtrT> tmp143;
  TNode<Object> tmp144;
  TNode<Object> tmp145;
  TNode<Number> tmp146;
  if (block132.is_used()) {
    ca_.Bind(&block132, &phi_bb132_5, &phi_bb132_7, &phi_bb132_11, &phi_bb132_12, &phi_bb132_13, &phi_bb132_23, &phi_bb132_28, &phi_bb132_29);
    tmp140 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp136});
    tmp141 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp134}, TNode<IntPtrT>{tmp140});
    std::tie(tmp142, tmp143) = NewReference_Object_0(state_, TNode<Object>{tmp133}, TNode<IntPtrT>{tmp141}).Flatten();
    tmp144 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp142, tmp143});
    tmp145 = UnsafeCast_HeapNumber_OR_Smi_OR_TheHole_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp144});
    compiler::CodeAssemblerLabel label147(&ca_);
    tmp146 = Cast_Number_0(state_, TNode<Object>{tmp145}, &label147);
    ca_.Goto(&block138, phi_bb132_5, phi_bb132_7, phi_bb132_11, phi_bb132_12, phi_bb132_13, phi_bb132_23);
    if (label147.is_used()) {
      ca_.Bind(&label147);
      ca_.Goto(&block139, phi_bb132_5, phi_bb132_7, phi_bb132_11, phi_bb132_12, phi_bb132_13, phi_bb132_23);
    }
  }

  TNode<Smi> phi_bb133_5;
  TNode<JSArray> phi_bb133_7;
  TNode<BoolT> phi_bb133_11;
  TNode<BoolT> phi_bb133_12;
  TNode<BoolT> phi_bb133_13;
  TNode<Smi> phi_bb133_23;
  TNode<Smi> phi_bb133_28;
  TNode<Smi> phi_bb133_29;
  if (block133.is_used()) {
    ca_.Bind(&block133, &phi_bb133_5, &phi_bb133_7, &phi_bb133_11, &phi_bb133_12, &phi_bb133_13, &phi_bb133_23, &phi_bb133_28, &phi_bb133_29);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb139_5;
  TNode<JSArray> phi_bb139_7;
  TNode<BoolT> phi_bb139_11;
  TNode<BoolT> phi_bb139_12;
  TNode<BoolT> phi_bb139_13;
  TNode<Smi> phi_bb139_23;
  if (block139.is_used()) {
    ca_.Bind(&block139, &phi_bb139_5, &phi_bb139_7, &phi_bb139_11, &phi_bb139_12, &phi_bb139_13, &phi_bb139_23);
    ca_.Goto(&block136, phi_bb139_5, phi_bb139_7, phi_bb139_11, phi_bb139_12, phi_bb139_13, phi_bb139_23);
  }

  TNode<Smi> phi_bb138_5;
  TNode<JSArray> phi_bb138_7;
  TNode<BoolT> phi_bb138_11;
  TNode<BoolT> phi_bb138_12;
  TNode<BoolT> phi_bb138_13;
  TNode<Smi> phi_bb138_23;
  TNode<Object> tmp148;
  TNode<IntPtrT> tmp149;
  TNode<IntPtrT> tmp150;
  TNode<IntPtrT> tmp151;
  TNode<UintPtrT> tmp152;
  TNode<UintPtrT> tmp153;
  TNode<BoolT> tmp154;
  if (block138.is_used()) {
    ca_.Bind(&block138, &phi_bb138_5, &phi_bb138_7, &phi_bb138_11, &phi_bb138_12, &phi_bb138_13, &phi_bb138_23);
    std::tie(tmp148, tmp149, tmp150) = FieldSliceFixedDoubleArrayFloats_0(state_, TNode<FixedDoubleArray>{tmp129}).Flatten();
    tmp151 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb138_23});
    tmp152 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp151});
    tmp153 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp150});
    tmp154 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp152}, TNode<UintPtrT>{tmp153});
    ca_.Branch(tmp154, &block144, std::vector<compiler::Node*>{phi_bb138_5, phi_bb138_7, phi_bb138_11, phi_bb138_12, phi_bb138_13, phi_bb138_23, phi_bb138_23, phi_bb138_23}, &block145, std::vector<compiler::Node*>{phi_bb138_5, phi_bb138_7, phi_bb138_11, phi_bb138_12, phi_bb138_13, phi_bb138_23, phi_bb138_23, phi_bb138_23});
  }

  TNode<Smi> phi_bb144_5;
  TNode<JSArray> phi_bb144_7;
  TNode<BoolT> phi_bb144_11;
  TNode<BoolT> phi_bb144_12;
  TNode<BoolT> phi_bb144_13;
  TNode<Smi> phi_bb144_23;
  TNode<Smi> phi_bb144_30;
  TNode<Smi> phi_bb144_31;
  TNode<IntPtrT> tmp155;
  TNode<IntPtrT> tmp156;
  TNode<Object> tmp157;
  TNode<IntPtrT> tmp158;
  TNode<BoolT> tmp159;
  TNode<Float64T> tmp160;
  if (block144.is_used()) {
    ca_.Bind(&block144, &phi_bb144_5, &phi_bb144_7, &phi_bb144_11, &phi_bb144_12, &phi_bb144_13, &phi_bb144_23, &phi_bb144_30, &phi_bb144_31);
    tmp155 = TimesSizeOf_float64_or_hole_0(state_, TNode<IntPtrT>{tmp151});
    tmp156 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp149}, TNode<IntPtrT>{tmp155});
    std::tie(tmp157, tmp158) = NewReference_float64_or_hole_0(state_, TNode<Object>{tmp148}, TNode<IntPtrT>{tmp156}).Flatten();
    std::tie(tmp159, tmp160) = Convert_float64_or_hole_Number_0(state_, TNode<Number>{tmp146}).Flatten();
    StoreFloat64OrHole_0(state_, TorqueStructReference_float64_or_hole_0{TNode<Object>{tmp157}, TNode<IntPtrT>{tmp158}, TorqueStructUnsafe_0{}}, TorqueStructfloat64_or_hole_0{TNode<BoolT>{tmp159}, TNode<Float64T>{tmp160}});
    ca_.Goto(&block136, phi_bb144_5, phi_bb144_7, phi_bb144_11, phi_bb144_12, phi_bb144_13, phi_bb144_23);
  }

  TNode<Smi> phi_bb145_5;
  TNode<JSArray> phi_bb145_7;
  TNode<BoolT> phi_bb145_11;
  TNode<BoolT> phi_bb145_12;
  TNode<BoolT> phi_bb145_13;
  TNode<Smi> phi_bb145_23;
  TNode<Smi> phi_bb145_30;
  TNode<Smi> phi_bb145_31;
  if (block145.is_used()) {
    ca_.Bind(&block145, &phi_bb145_5, &phi_bb145_7, &phi_bb145_11, &phi_bb145_12, &phi_bb145_13, &phi_bb145_23, &phi_bb145_30, &phi_bb145_31);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb136_5;
  TNode<JSArray> phi_bb136_7;
  TNode<BoolT> phi_bb136_11;
  TNode<BoolT> phi_bb136_12;
  TNode<BoolT> phi_bb136_13;
  TNode<Smi> phi_bb136_23;
  TNode<Smi> tmp161;
  TNode<Smi> tmp162;
  if (block136.is_used()) {
    ca_.Bind(&block136, &phi_bb136_5, &phi_bb136_7, &phi_bb136_11, &phi_bb136_12, &phi_bb136_13, &phi_bb136_23);
    tmp161 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp162 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb136_23}, TNode<Smi>{tmp161});
    ca_.Goto(&block126, phi_bb136_5, phi_bb136_7, phi_bb136_11, phi_bb136_12, phi_bb136_13, tmp162);
  }

  TNode<Smi> phi_bb125_5;
  TNode<JSArray> phi_bb125_7;
  TNode<BoolT> phi_bb125_11;
  TNode<BoolT> phi_bb125_12;
  TNode<BoolT> phi_bb125_13;
  TNode<Smi> phi_bb125_23;
  TNode<IntPtrT> tmp163;
  if (block125.is_used()) {
    ca_.Bind(&block125, &phi_bb125_5, &phi_bb125_7, &phi_bb125_11, &phi_bb125_12, &phi_bb125_13, &phi_bb125_23);
    tmp163 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp130, tmp163}, tmp129);
    ca_.Goto(&block123, phi_bb125_5, phi_bb125_7, phi_bb125_11, phi_bb125_12, phi_bb125_13, tmp130);
  }

  TNode<Smi> phi_bb122_5;
  TNode<JSArray> phi_bb122_7;
  TNode<BoolT> phi_bb122_11;
  TNode<BoolT> phi_bb122_12;
  TNode<BoolT> phi_bb122_13;
  TNode<JSArray> tmp164;
  if (block122.is_used()) {
    ca_.Bind(&block122, &phi_bb122_5, &phi_bb122_7, &phi_bb122_11, &phi_bb122_12, &phi_bb122_13);
    tmp164 = NewJSArray_0(state_, TNode<Context>{p_context}, TNode<Map>{tmp126}, TNode<FixedArrayBase>{tmp5});
    ca_.Goto(&block123, phi_bb122_5, phi_bb122_7, phi_bb122_11, phi_bb122_12, phi_bb122_13, tmp164);
  }

  TNode<Smi> phi_bb123_5;
  TNode<JSArray> phi_bb123_7;
  TNode<BoolT> phi_bb123_11;
  TNode<BoolT> phi_bb123_12;
  TNode<BoolT> phi_bb123_13;
  TNode<JSArray> phi_bb123_21;
  TNode<FixedArray> tmp165;
  if (block123.is_used()) {
    ca_.Bind(&block123, &phi_bb123_5, &phi_bb123_7, &phi_bb123_11, &phi_bb123_12, &phi_bb123_13, &phi_bb123_21);
    tmp165 = kEmptyFixedArray_0(state_);
    ca_.Goto(&block148, phi_bb123_21);
  }

  TNode<JSArray> phi_bb148_5;
    ca_.Bind(&block148, &phi_bb148_5);
  return TNode<JSArray>{phi_bb148_5};
}

TF_BUILTIN(ArrayMap, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<JSReceiver> tmp1;
  TNode<Number> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<BoolT> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = RequireObjectCoercible_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, "Array.prototype.map");
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
  TNode<BoolT> tmp12;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp9 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp10 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp9});
    tmp11 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp12 = CodeStubAssembler(state_).IsArraySpeciesProtectorCellInvalid();
    ca_.Branch(tmp12, &block11, std::vector<compiler::Node*>{}, &block12, std::vector<compiler::Node*>{});
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    ca_.Goto(&block10);
  }

  TNode<JSArray> tmp13;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    compiler::CodeAssemblerLabel label14(&ca_);
    tmp13 = Cast_FastJSArrayForRead_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label14);
    ca_.Goto(&block13);
    if (label14.is_used()) {
      ca_.Bind(&label14);
      ca_.Goto(&block14);
    }
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    ca_.Goto(&block10);
  }

  TNode<Smi> tmp15;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    compiler::CodeAssemblerLabel label16(&ca_);
    tmp15 = Cast_Smi_0(state_, TNode<Object>{tmp2}, &label16);
    ca_.Goto(&block15);
    if (label16.is_used()) {
      ca_.Bind(&label16);
      ca_.Goto(&block16);
    }
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    ca_.Goto(&block10);
  }

  TNode<JSArray> tmp17;
    compiler::TypedCodeAssemblerVariable<JSArray> tmp19(&ca_);
    compiler::TypedCodeAssemblerVariable<Smi> tmp20(&ca_);
  if (block15.is_used()) {
    ca_.Bind(&block15);
    compiler::CodeAssemblerLabel label18(&ca_);
    tmp17 = FastArrayMap_0(state_, TNode<Context>{parameter0}, TNode<JSArray>{tmp13}, TNode<Smi>{tmp15}, TNode<JSReceiver>{tmp7}, TNode<Object>{tmp10}, &label18, &tmp19, &tmp20);
    ca_.Goto(&block17);
    if (label18.is_used()) {
      ca_.Bind(&label18);
      ca_.Goto(&block18);
    }
  }

  if (block18.is_used()) {
    ca_.Bind(&block18);
    ca_.Goto(&block7, tmp19.value(), tmp20.value());
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    arguments.PopAndReturn(tmp17);
  }

  TNode<JSReceiver> tmp21;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp21 = CodeStubAssembler(state_).ArraySpeciesCreate(TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Number>{tmp2});
    ca_.Goto(&block7, tmp21, tmp11);
  }

  TNode<JSReceiver> phi_bb7_10;
  TNode<Number> phi_bb7_11;
  TNode<Object> tmp22;
  if (block7.is_used()) {
    ca_.Bind(&block7, &phi_bb7_10, &phi_bb7_11);
    tmp22 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kArrayMapLoopContinuation), parameter0, tmp1, tmp7, tmp10, phi_bb7_10, tmp1, phi_bb7_11, tmp2);
    arguments.PopAndReturn(tmp22);
  }

  TNode<IntPtrT> tmp23;
  TNode<Object> tmp24;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp23 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp24 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp23});
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kCalledNonCallable, TNode<Object>{tmp24});
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-map.tq?l=137&c=13
TNode<Object> UnsafeCast_HeapNumber_OR_Smi_OR_TheHole_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = (TNode<Object>{p_o});
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<Object>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-map.tq?l=256&c=37
TNode<JSArray> Cast_FastJSArrayForRead_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
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

  TNode<JSArray> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_FastJSArrayForRead_0(state_, TNode<Context>{p_context}, TNode<HeapObject>{tmp0}, &label3);
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
  return TNode<JSArray>{tmp2};
}

} // namespace internal
} // namespace v8
