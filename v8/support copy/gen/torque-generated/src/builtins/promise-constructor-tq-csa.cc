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
#include "torque-generated/src/builtins/promise-constructor-tq-csa.h"
#include "torque-generated/src/builtins/array-from-tq-csa.h"
#include "torque-generated/src/builtins/array-join-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/boolean-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/promise-abstract-operations-tq-csa.h"
#include "torque-generated/src/builtins/promise-constructor-tq-csa.h"
#include "torque-generated/src/builtins/promise-misc-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/objects/contexts-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-constructor.tq?l=31&c=1
TNode<BoolT> HasAccessCheckFailed_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<NativeContext> p_nativeContext, TNode<Object> p_promiseFun, TNode<Object> p_executor) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label0(&ca_);
    BranchIfAccessCheckFailed_0(state_, TNode<Context>{p_context}, TNode<NativeContext>{p_nativeContext}, TNode<Object>{p_promiseFun}, TNode<Object>{p_executor}, &label0);
    ca_.Goto(&block4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5);
    }
  }

  TNode<BoolT> tmp1;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp1 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block1, tmp1);
  }

  TNode<BoolT> tmp2;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block1, tmp2);
  }

  TNode<BoolT> phi_bb1_4;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_4);
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<BoolT>{phi_bb1_4};
}

TF_BUILTIN(PromiseConstructor, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kJSNewTarget);
USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kExecutor);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSPromise> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, HeapObject> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Oddball> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Undefined_0(state_);
    tmp1 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{parameter2}, TNode<HeapObject>{tmp0});
    ca_.Branch(tmp1, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kPromiseNewTargetUndefined);
  }

  TNode<BoolT> tmp2;
  TNode<BoolT> tmp3;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp2 = Is_Callable_JSAny_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter3});
    tmp3 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp2});
    ca_.Branch(tmp3, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kResolverNotAFunction, TNode<Object>{parameter3});
  }

  TNode<IntPtrT> tmp4;
  TNode<Object> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<JSFunction> tmp7;
  TNode<BoolT> tmp8;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp4 = PROMISE_FUNCTION_INDEX_0(state_);
    std::tie(tmp5, tmp6) = NativeContextSlot_NativeContext_JSFunction_0(state_, TNode<NativeContext>{parameter0}, TNode<IntPtrT>{tmp4}).Flatten();
    tmp7 = CodeStubAssembler(state_).LoadReference<JSFunction>(CodeStubAssembler::Reference{tmp5, tmp6});
    tmp8 = HasAccessCheckFailed_0(state_, TNode<Context>{parameter0}, TNode<NativeContext>{parameter0}, TNode<Object>{tmp7}, TNode<Object>{parameter3});
    ca_.Branch(tmp8, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  TNode<Smi> tmp9;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp9 = CodeStubAssembler(state_).SmiConstant(v8::Isolate::kPromiseConstructorReturnedUndefined);
    CodeStubAssembler(state_).CallRuntime(Runtime::kIncrementUseCounter, parameter0, tmp9);
    CodeStubAssembler(state_).CallRuntime(Runtime::kThrowNoAccess, parameter0);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<BoolT> tmp10;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp10 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp7}, TNode<Object>{parameter2});
    ca_.Branch(tmp10, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  TNode<JSPromise> tmp11;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp11 = NewJSPromise_1(state_, TNode<Context>{parameter0});
    ca_.Goto(&block9, tmp11);
  }

  TNode<JSReceiver> tmp12;
  TNode<JSObject> tmp13;
  TNode<JSPromise> tmp14;
  TNode<Oddball> tmp15;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp12 = UnsafeCast_JSReceiver_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2});
    tmp13 = ConstructorBuiltinsAssembler(state_).FastNewObject(TNode<Context>{parameter0}, TNode<JSFunction>{tmp7}, TNode<JSReceiver>{tmp12});
    tmp14 = UnsafeCast_JSPromise_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp13});
    PromiseInit_0(state_, TNode<JSPromise>{tmp14});
    tmp15 = Undefined_0(state_);
    RunAnyPromiseHookInit_0(state_, TNode<Context>{parameter0}, TNode<JSPromise>{tmp14}, TNode<Object>{tmp15});
    ca_.Goto(&block9, tmp14);
  }

  TNode<JSPromise> phi_bb9_5;
  TNode<BoolT> tmp16;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_5);
    tmp16 = CodeStubAssembler(state_).IsDebugActive();
    ca_.Branch(tmp16, &block10, std::vector<compiler::Node*>{}, &block11, std::vector<compiler::Node*>{});
  }

  TNode<Object> tmp17;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp17 = CodeStubAssembler(state_).CallRuntime(Runtime::kDebugPushPromise, parameter0, phi_bb9_5); 
    ca_.Goto(&block11);
  }

  TNode<Oddball> tmp18;
  TNode<JSFunction> tmp19;
  TNode<JSFunction> tmp20;
  TNode<JSReceiver> tmp21;
      TNode<Object> tmp23;
  TNode<Oddball> tmp24;
  TNode<Object> tmp25;
      TNode<Object> tmp27;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp18 = True_0(state_);
    std::tie(tmp19, tmp20) = CreatePromiseResolvingFunctions_0(state_, TNode<Context>{parameter0}, TNode<JSPromise>{phi_bb9_5}, TNode<Oddball>{tmp18}, TNode<NativeContext>{parameter0}).Flatten();
    compiler::CodeAssemblerExceptionHandlerLabel catch22__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch22__label);
    tmp21 = UnsafeCast_Callable_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter3});
    }
    if (catch22__label.is_used()) {
      compiler::CodeAssemblerLabel catch22_skip(&ca_);
      ca_.Goto(&catch22_skip);
      ca_.Bind(&catch22__label, &tmp23);
      ca_.Goto(&block14);
      ca_.Bind(&catch22_skip);
    }
    tmp24 = Undefined_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch26__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch26__label);
    tmp25 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<Object>{tmp21}, TNode<Object>{tmp24}, TNode<Object>{tmp19}, TNode<Object>{tmp20});
    }
    if (catch26__label.is_used()) {
      compiler::CodeAssemblerLabel catch26_skip(&ca_);
      ca_.Goto(&catch26_skip);
      ca_.Bind(&catch26__label, &tmp27);
      ca_.Goto(&block15);
      ca_.Bind(&catch26_skip);
    }
    ca_.Goto(&block12);
  }

  TNode<HeapObject> tmp28;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp28 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block13, tmp23, tmp28);
  }

  TNode<HeapObject> tmp29;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp29 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block13, tmp27, tmp29);
  }

  TNode<Object> phi_bb13_11;
  TNode<HeapObject> phi_bb13_12;
  TNode<Oddball> tmp30;
  TNode<Object> tmp31;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_11, &phi_bb13_12);
    tmp30 = Undefined_0(state_);
    tmp31 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<Object>{tmp20}, TNode<Object>{tmp30}, TNode<Object>{phi_bb13_11});
    ca_.Goto(&block12);
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    ca_.Branch(tmp16, &block16, std::vector<compiler::Node*>{}, &block17, std::vector<compiler::Node*>{});
  }

  TNode<Object> tmp32;
  if (block16.is_used()) {
    ca_.Bind(&block16);
    tmp32 = CodeStubAssembler(state_).CallRuntime(Runtime::kDebugPopPromise, parameter0); 
    ca_.Goto(&block17);
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    CodeStubAssembler(state_).Return(phi_bb9_5);
  }
}

TF_BUILTIN(PromisePrototypeCatch, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kOnRejected);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Is_NativeContext_Context_0(state_, TNode<Context>{parameter0}, TNode<Context>{parameter0});
    ca_.Branch(tmp0, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"src/builtins/promise-constructor.tq", 105});
      CodeStubAssembler(state_).FailAssert("Torque assert 'Is<NativeContext>(context)' failed", pos_stack);
    }
  }

  TNode<NativeContext> tmp1;
  TNode<Oddball> tmp2;
  TNode<Object> tmp3;
  TNode<Object> tmp4;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp1 = UnsafeCast_NativeContext_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter0});
    tmp2 = Undefined_0(state_);
    tmp3 = InvokeThen_1(state_, TNode<Context>{parameter0}, TNode<NativeContext>{tmp1}, TNode<Object>{parameter1}, TNode<Object>{tmp2}, TNode<Object>{parameter2});
    tmp4 = UnsafeCast_JSAny_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp3});
    CodeStubAssembler(state_).Return(tmp4);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-constructor.tq?l=74&c=14
TNode<JSPromise> UnsafeCast_JSPromise_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSPromise> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TORQUE_CAST(TNode<Object>{p_o});
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<JSPromise>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-constructor.tq?l=105&c=9
TNode<BoolT> Is_NativeContext_Context_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Context> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<NativeContext> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_NativeContext_0(state_, TNode<HeapObject>{p_o}, &label1);
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

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-constructor.tq?l=106&c=25
TNode<NativeContext> UnsafeCast_NativeContext_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<NativeContext> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TORQUE_CAST(TNode<Object>{p_o});
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<NativeContext>{tmp0};
}

} // namespace internal
} // namespace v8
