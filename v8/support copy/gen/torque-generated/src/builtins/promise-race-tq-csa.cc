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
#include "torque-generated/src/builtins/promise-race-tq-csa.h"
#include "torque-generated/src/builtins/array-every-tq-csa.h"
#include "torque-generated/src/builtins/array-join-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/iterator-tq-csa.h"
#include "torque-generated/src/builtins/promise-abstract-operations-tq-csa.h"
#include "torque-generated/src/builtins/promise-any-tq-csa.h"
#include "torque-generated/src/builtins/promise-constructor-tq-csa.h"
#include "torque-generated/src/builtins/promise-race-tq-csa.h"
#include "torque-generated/src/builtins/promise-resolve-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/objects/contexts-tq-csa.h"
#include "torque-generated/src/objects/js-promise-tq-csa.h"

namespace v8 {
namespace internal {

TF_BUILTIN(PromiseRace, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, HeapObject> block16(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, HeapObject> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block35(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block36(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block37(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block38(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block41(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block45(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block46(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block47(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block39(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block48(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, HeapObject> block20(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block14(&ca_, compiler::CodeAssemblerLabel::kDeferred);
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
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kCalledOnNonObject, "Promise.race");
  }

  TNode<BoolT> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp2 = Is_NativeContext_Context_0(state_, TNode<Context>{parameter0}, TNode<Context>{parameter0});
    ca_.Branch(tmp2, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"src/builtins/promise-race.tq", 18});
      CodeStubAssembler(state_).FailAssert("Torque assert 'Is<NativeContext>(context)' failed", pos_stack);
    }
  }

  TNode<NativeContext> tmp3;
  TNode<Oddball> tmp4;
  TNode<PromiseCapability> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<Object> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<Object> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<HeapObject> tmp11;
  TNode<JSReceiver> tmp12;
  TNode<BoolT> tmp13;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp3 = UnsafeCast_NativeContext_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter0});
    tmp4 = False_0(state_);
    tmp5 = ca_.CallStub<PromiseCapability>(Builtins::CallableFor(ca_.isolate(), Builtin::kNewPromiseCapability), parameter0, tmp0, tmp4);
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp7 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp5, tmp6});
    tmp8 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp9 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp5, tmp8});
    tmp10 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp11 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp5, tmp10});
    tmp12 = UnsafeCast_Constructor_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp0});
    tmp13 = CodeStubAssembler(state_).IsDebugActive();
    ca_.Branch(tmp13, &block11, std::vector<compiler::Node*>{}, &block12, std::vector<compiler::Node*>{});
  }

  TNode<Symbol> tmp14;
  TNode<Oddball> tmp15;
  TNode<Object> tmp16;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp14 = kPromiseForwardingHandlerSymbol_0(state_);
    tmp15 = True_0(state_);
    tmp16 = CodeStubAssembler(state_).SetPropertyStrict(TNode<Context>{parameter0}, TNode<Object>{tmp9}, TNode<Object>{tmp14}, TNode<Object>{tmp15});
    ca_.Goto(&block12);
  }

  TNode<Object> tmp17;
      TNode<Object> tmp19;
  TNode<JSReceiver> tmp20;
  TNode<Object> tmp21;
      TNode<Object> tmp23;
  TNode<IntPtrT> tmp24;
  TNode<Object> tmp25;
  TNode<IntPtrT> tmp26;
      TNode<Object> tmp28;
  TNode<Map> tmp29;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    compiler::CodeAssemblerExceptionHandlerLabel catch18__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch18__label);
    tmp17 = GetPromiseResolve_0(state_, TNode<Context>{parameter0}, TNode<NativeContext>{tmp3}, TNode<JSReceiver>{tmp12});
    }
    if (catch18__label.is_used()) {
      compiler::CodeAssemblerLabel catch18_skip(&ca_);
      ca_.Goto(&catch18_skip);
      ca_.Bind(&catch18__label, &tmp19);
      ca_.Goto(&block17);
      ca_.Bind(&catch18_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch22__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch22__label);
    std::tie(tmp20, tmp21) = IteratorBuiltinsAssembler(state_).GetIterator(TNode<Context>{parameter0}, TNode<Object>{parameter2}).Flatten();
    }
    if (catch22__label.is_used()) {
      compiler::CodeAssemblerLabel catch22_skip(&ca_);
      ca_.Goto(&catch22_skip);
      ca_.Bind(&catch22__label, &tmp23);
      ca_.Goto(&block18);
      ca_.Bind(&catch22_skip);
    }
    tmp24 = ITERATOR_RESULT_MAP_INDEX_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch27__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch27__label);
    std::tie(tmp25, tmp26) = NativeContextSlot_Map_0(state_, TNode<NativeContext>{tmp3}, TNode<IntPtrT>{tmp24}).Flatten();
    }
    if (catch27__label.is_used()) {
      compiler::CodeAssemblerLabel catch27_skip(&ca_);
      ca_.Goto(&catch27_skip);
      ca_.Bind(&catch27__label, &tmp28);
      ca_.Goto(&block21);
      ca_.Bind(&catch27_skip);
    }
    tmp29 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp25, tmp26});
    ca_.Goto(&block24);
  }

  TNode<HeapObject> tmp30;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    tmp30 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block16, ca_.Uninitialized<Object>(), tmp19, tmp30);
  }

  TNode<HeapObject> tmp31;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp31 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block16, tmp17, tmp23, tmp31);
  }

  TNode<Object> phi_bb16_10;
  TNode<Object> phi_bb16_13;
  TNode<HeapObject> phi_bb16_14;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_10, &phi_bb16_13, &phi_bb16_14);
    ca_.Goto(&block14, phi_bb16_13);
  }

  TNode<HeapObject> tmp32;
  if (block21.is_used()) {
    ca_.Bind(&block21);
    tmp32 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block20, tmp28, tmp32);
  }

  TNode<BoolT> tmp33;
      TNode<Object> tmp35;
  if (block24.is_used()) {
    ca_.Bind(&block24);
    compiler::CodeAssemblerExceptionHandlerLabel catch34__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch34__label);
    tmp33 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    }
    if (catch34__label.is_used()) {
      compiler::CodeAssemblerLabel catch34_skip(&ca_);
      ca_.Goto(&catch34_skip);
      ca_.Bind(&catch34__label, &tmp35);
      ca_.Goto(&block25);
      ca_.Bind(&catch34_skip);
    }
    ca_.Branch(tmp33, &block22, std::vector<compiler::Node*>{}, &block23, std::vector<compiler::Node*>{});
  }

  TNode<HeapObject> tmp36;
  if (block25.is_used()) {
    ca_.Bind(&block25);
    tmp36 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block20, tmp35, tmp36);
  }

  TNode<JSReceiver> tmp37;
      TNode<Object> tmp40;
  if (block22.is_used()) {
    ca_.Bind(&block22);
    compiler::CodeAssemblerLabel label38(&ca_);
    compiler::CodeAssemblerExceptionHandlerLabel catch39__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch39__label);
    tmp37 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp20}, TNode<Object>{tmp21}}, TNode<Map>{tmp29}, &label38);
    }
    if (catch39__label.is_used()) {
      compiler::CodeAssemblerLabel catch39_skip(&ca_);
      ca_.Goto(&catch39_skip);
      ca_.Bind(&catch39__label, &tmp40);
      ca_.Goto(&block32);
      ca_.Bind(&catch39_skip);
    }
    ca_.Goto(&block30);
    if (label38.is_used()) {
      ca_.Bind(&label38);
      ca_.Goto(&block31);
    }
  }

  TNode<HeapObject> tmp41;
  if (block32.is_used()) {
    ca_.Bind(&block32);
    tmp41 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block27, tmp40, tmp41);
  }

  if (block31.is_used()) {
    ca_.Bind(&block31);
    CodeStubAssembler(state_).Return(tmp11);
  }

  TNode<Object> tmp42;
      TNode<Object> tmp44;
  TNode<Object> tmp45;
      TNode<Object> tmp47;
  TNode<String> tmp48;
  TNode<Object> tmp49;
      TNode<Object> tmp51;
  TNode<Object> tmp52;
      TNode<Object> tmp54;
  TNode<Object> tmp55;
      TNode<Object> tmp57;
  TNode<Object> tmp58;
      TNode<Object> tmp60;
  TNode<BoolT> tmp61;
      TNode<Object> tmp63;
  if (block30.is_used()) {
    ca_.Bind(&block30);
    compiler::CodeAssemblerExceptionHandlerLabel catch43__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch43__label);
    tmp42 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{parameter0}, TNode<JSReceiver>{tmp37}, TNode<Map>{tmp29});
    }
    if (catch43__label.is_used()) {
      compiler::CodeAssemblerLabel catch43_skip(&ca_);
      ca_.Goto(&catch43_skip);
      ca_.Bind(&catch43__label, &tmp44);
      ca_.Goto(&block33);
      ca_.Bind(&catch43_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch46__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch46__label);
    tmp45 = CallResolve_0(state_, TNode<Context>{parameter0}, TNode<JSReceiver>{tmp12}, TNode<Object>{tmp17}, TNode<Object>{tmp42});
    }
    if (catch46__label.is_used()) {
      compiler::CodeAssemblerLabel catch46_skip(&ca_);
      ca_.Goto(&catch46_skip);
      ca_.Bind(&catch46__label, &tmp47);
      ca_.Goto(&block34);
      ca_.Bind(&catch46_skip);
    }
    tmp48 = kThenString_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch50__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch50__label);
    tmp49 = CodeStubAssembler(state_).GetProperty(TNode<Context>{parameter0}, TNode<Object>{tmp45}, TNode<Object>{tmp48});
    }
    if (catch50__label.is_used()) {
      compiler::CodeAssemblerLabel catch50_skip(&ca_);
      ca_.Goto(&catch50_skip);
      ca_.Bind(&catch50__label, &tmp51);
      ca_.Goto(&block35);
      ca_.Bind(&catch50_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch53__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch53__label);
    tmp52 = UnsafeCast_JSAny_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp7});
    }
    if (catch53__label.is_used()) {
      compiler::CodeAssemblerLabel catch53_skip(&ca_);
      ca_.Goto(&catch53_skip);
      ca_.Bind(&catch53__label, &tmp54);
      ca_.Goto(&block36);
      ca_.Bind(&catch53_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch56__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch56__label);
    tmp55 = UnsafeCast_JSAny_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp9});
    }
    if (catch56__label.is_used()) {
      compiler::CodeAssemblerLabel catch56_skip(&ca_);
      ca_.Goto(&catch56_skip);
      ca_.Bind(&catch56__label, &tmp57);
      ca_.Goto(&block37);
      ca_.Bind(&catch56_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch59__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch59__label);
    tmp58 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<Object>{tmp49}, TNode<Object>{tmp45}, TNode<Object>{tmp52}, TNode<Object>{tmp55});
    }
    if (catch59__label.is_used()) {
      compiler::CodeAssemblerLabel catch59_skip(&ca_);
      ca_.Goto(&catch59_skip);
      ca_.Bind(&catch59__label, &tmp60);
      ca_.Goto(&block38);
      ca_.Bind(&catch59_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch62__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch62__label);
    tmp61 = CodeStubAssembler(state_).IsDebugActive();
    }
    if (catch62__label.is_used()) {
      compiler::CodeAssemblerLabel catch62_skip(&ca_);
      ca_.Goto(&catch62_skip);
      ca_.Bind(&catch62__label, &tmp63);
      ca_.Goto(&block41);
      ca_.Bind(&catch62_skip);
    }
    ca_.Branch(tmp61, &block42, std::vector<compiler::Node*>{}, &block43, std::vector<compiler::Node*>{});
  }

  TNode<HeapObject> tmp64;
  if (block33.is_used()) {
    ca_.Bind(&block33);
    tmp64 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block27, tmp44, tmp64);
  }

  TNode<Object> phi_bb27_15;
  TNode<HeapObject> phi_bb27_16;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_15, &phi_bb27_16);
    ca_.Goto(&block14, phi_bb27_15);
  }

  TNode<HeapObject> tmp65;
  if (block34.is_used()) {
    ca_.Bind(&block34);
    tmp65 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block20, tmp47, tmp65);
  }

  TNode<HeapObject> tmp66;
  if (block35.is_used()) {
    ca_.Bind(&block35);
    tmp66 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block20, tmp51, tmp66);
  }

  TNode<HeapObject> tmp67;
  if (block36.is_used()) {
    ca_.Bind(&block36);
    tmp67 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block20, tmp54, tmp67);
  }

  TNode<HeapObject> tmp68;
  if (block37.is_used()) {
    ca_.Bind(&block37);
    tmp68 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block20, tmp57, tmp68);
  }

  TNode<HeapObject> tmp69;
  if (block38.is_used()) {
    ca_.Bind(&block38);
    tmp69 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block20, tmp60, tmp69);
  }

  TNode<HeapObject> tmp70;
  if (block41.is_used()) {
    ca_.Bind(&block41);
    tmp70 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block20, tmp63, tmp70);
  }

  TNode<BoolT> tmp71;
      TNode<Object> tmp73;
  TNode<BoolT> tmp74;
      TNode<Object> tmp76;
  if (block42.is_used()) {
    ca_.Bind(&block42);
    compiler::CodeAssemblerExceptionHandlerLabel catch72__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch72__label);
    tmp71 = Is_JSPromise_JSReceiver_OR_Undefined_0(state_, TNode<Context>{parameter0}, TNode<HeapObject>{tmp11});
    }
    if (catch72__label.is_used()) {
      compiler::CodeAssemblerLabel catch72_skip(&ca_);
      ca_.Goto(&catch72_skip);
      ca_.Bind(&catch72__label, &tmp73);
      ca_.Goto(&block45);
      ca_.Bind(&catch72_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch75__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch75__label);
    tmp74 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp71});
    }
    if (catch75__label.is_used()) {
      compiler::CodeAssemblerLabel catch75_skip(&ca_);
      ca_.Goto(&catch75_skip);
      ca_.Bind(&catch75__label, &tmp76);
      ca_.Goto(&block46);
      ca_.Bind(&catch75_skip);
    }
    ca_.Goto(&block44, tmp74);
  }

  TNode<HeapObject> tmp77;
  if (block45.is_used()) {
    ca_.Bind(&block45);
    tmp77 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block20, tmp73, tmp77);
  }

  TNode<HeapObject> tmp78;
  if (block46.is_used()) {
    ca_.Bind(&block46);
    tmp78 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block20, tmp76, tmp78);
  }

  TNode<BoolT> tmp79;
      TNode<Object> tmp81;
  if (block43.is_used()) {
    ca_.Bind(&block43);
    compiler::CodeAssemblerExceptionHandlerLabel catch80__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch80__label);
    tmp79 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    }
    if (catch80__label.is_used()) {
      compiler::CodeAssemblerLabel catch80_skip(&ca_);
      ca_.Goto(&catch80_skip);
      ca_.Bind(&catch80__label, &tmp81);
      ca_.Goto(&block47);
      ca_.Bind(&catch80_skip);
    }
    ca_.Goto(&block44, tmp79);
  }

  TNode<HeapObject> tmp82;
  if (block47.is_used()) {
    ca_.Bind(&block47);
    tmp82 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block20, tmp81, tmp82);
  }

  TNode<BoolT> phi_bb44_19;
  if (block44.is_used()) {
    ca_.Bind(&block44, &phi_bb44_19);
    ca_.Branch(phi_bb44_19, &block39, std::vector<compiler::Node*>{}, &block40, std::vector<compiler::Node*>{});
  }

  TNode<Symbol> tmp83;
  TNode<Object> tmp84;
      TNode<Object> tmp86;
  if (block39.is_used()) {
    ca_.Bind(&block39);
    tmp83 = kPromiseHandledBySymbol_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch85__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch85__label);
    tmp84 = CodeStubAssembler(state_).SetPropertyStrict(TNode<Context>{parameter0}, TNode<Object>{tmp58}, TNode<Object>{tmp83}, TNode<Object>{tmp11});
    }
    if (catch85__label.is_used()) {
      compiler::CodeAssemblerLabel catch85_skip(&ca_);
      ca_.Goto(&catch85_skip);
      ca_.Bind(&catch85__label, &tmp86);
      ca_.Goto(&block48);
      ca_.Bind(&catch85_skip);
    }
    ca_.Goto(&block40);
  }

  TNode<HeapObject> tmp87;
  if (block48.is_used()) {
    ca_.Bind(&block48);
    tmp87 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block20, tmp86, tmp87);
  }

  if (block40.is_used()) {
    ca_.Bind(&block40);
    ca_.Goto(&block24);
  }

  if (block23.is_used()) {
    ca_.Bind(&block23);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Object> phi_bb20_13;
  TNode<HeapObject> phi_bb20_14;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_13, &phi_bb20_14);
    IteratorCloseOnException_0(state_, TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp20}, TNode<Object>{tmp21}});
    ca_.Goto(&block14, phi_bb20_13);
  }

  TNode<Object> phi_bb14_10;
  TNode<Object> tmp88;
  TNode<Oddball> tmp89;
  TNode<Object> tmp90;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_10);
    tmp88 = UnsafeCast_JSAny_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp9});
    tmp89 = Undefined_0(state_);
    tmp90 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<Object>{tmp88}, TNode<Object>{tmp89}, TNode<Object>{phi_bb14_10});
    CodeStubAssembler(state_).Return(tmp11);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-race.tq?l=89&c=33
TNode<BoolT> Is_JSPromise_JSReceiver_OR_Undefined_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o) {
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
    tmp0 = Cast_JSPromise_0(state_, TNode<HeapObject>{p_o}, &label1);
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
