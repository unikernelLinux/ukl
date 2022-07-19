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
#include "torque-generated/src/builtins/object-fromentries-tq-csa.h"
#include "torque-generated/src/builtins/array-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/collections-tq-csa.h"
#include "torque-generated/src/builtins/conversion-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/frame-arguments-tq-csa.h"
#include "torque-generated/src/builtins/iterator-tq-csa.h"
#include "torque-generated/src/builtins/object-fromentries-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/objects/fixed-array-tq-csa.h"
#include "torque-generated/src/objects/js-objects-tq-csa.h"
#include "torque-generated/src/objects/oddball-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object-fromentries.tq?l=7&c=1
TNode<JSObject> ObjectFromEntriesFastCase_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_iterable, compiler::CodeAssemblerLabel* label_IfSlow) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSArray> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_FastJSArrayWithNoCustomIteration_1(state_, TNode<Context>{p_context}, TNode<Object>{p_iterable}, &label1);
    ca_.Goto(&block5);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block1);
  }

  TNode<IntPtrT> tmp2;
  TNode<FixedArrayBase> tmp3;
  TNode<FixedArray> tmp4;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp3 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp0, tmp2});
    compiler::CodeAssemblerLabel label5(&ca_);
    tmp4 = Cast_FixedArray_0(state_, TNode<HeapObject>{tmp3}, &label5);
    ca_.Goto(&block7);
    if (label5.is_used()) {
      ca_.Bind(&label5);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block1);
  }

  TNode<Smi> tmp6;
  TNode<JSObject> tmp7;
  TNode<Smi> tmp8;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp6 = CodeStubAssembler(state_).LoadFastJSArrayLength(TNode<JSArray>{tmp0});
    tmp7 = NewJSObject_0(state_, TNode<Context>{p_context});
    tmp8 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block11, tmp8);
  }

  TNode<Smi> phi_bb11_7;
  TNode<BoolT> tmp9;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_7);
    tmp9 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb11_7}, TNode<Smi>{tmp6});
    ca_.Branch(tmp9, &block9, std::vector<compiler::Node*>{phi_bb11_7}, &block10, std::vector<compiler::Node*>{phi_bb11_7});
  }

  TNode<Smi> phi_bb9_7;
  TNode<Object> tmp10;
  TNode<Object> tmp11;
  TNode<Object> tmp12;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_7);
    tmp10 = LoadElementOrUndefined_0(state_, TNode<Context>{p_context}, TNode<FixedArray>{tmp4}, TNode<Smi>{phi_bb9_7});
    compiler::CodeAssemblerLabel label13(&ca_);
    std::tie(tmp11, tmp12) = LoadKeyValuePairNoSideEffects_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp10}, &label13).Flatten();
    ca_.Goto(&block13, phi_bb9_7);
    if (label13.is_used()) {
      ca_.Bind(&label13);
      ca_.Goto(&block14, phi_bb9_7);
    }
  }

  TNode<Smi> phi_bb14_7;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_7);
    ca_.Goto(&block1);
  }

  TNode<Smi> phi_bb13_7;
  TNode<Name> tmp14;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_7);
    compiler::CodeAssemblerLabel label15(&ca_);
    tmp14 = Cast_Name_1(state_, TNode<Context>{p_context}, TNode<Object>{tmp11}, &label15);
    ca_.Goto(&block17, phi_bb13_7);
    if (label15.is_used()) {
      ca_.Bind(&label15);
      ca_.Goto(&block18, phi_bb13_7);
    }
  }

  TNode<Smi> phi_bb18_7;
  TNode<Number> tmp16;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_7);
    compiler::CodeAssemblerLabel label17(&ca_);
    tmp16 = Cast_Number_0(state_, TNode<Object>{ca_.UncheckedCast<Object>(tmp11)}, &label17);
    ca_.Goto(&block21, phi_bb18_7);
    if (label17.is_used()) {
      ca_.Bind(&label17);
      ca_.Goto(&block22, phi_bb18_7);
    }
  }

  TNode<Smi> phi_bb17_7;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_7);
    CodeStubAssembler(state_).CallRuntime(Runtime::kCreateDataProperty, p_context, tmp7, tmp11, tmp12);
    ca_.Goto(&block15, phi_bb17_7);
  }

  TNode<Smi> phi_bb22_7;
  TNode<Oddball> tmp18;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_7);
    compiler::CodeAssemblerLabel label19(&ca_);
    tmp18 = Cast_Oddball_0(state_, TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(tmp11)}, &label19);
    ca_.Goto(&block25, phi_bb22_7);
    if (label19.is_used()) {
      ca_.Bind(&label19);
      ca_.Goto(&block26, phi_bb22_7);
    }
  }

  TNode<Smi> phi_bb21_7;
  if (block21.is_used()) {
    ca_.Bind(&block21, &phi_bb21_7);
    CodeStubAssembler(state_).CallRuntime(Runtime::kCreateDataProperty, p_context, tmp7, tmp11, tmp12);
    ca_.Goto(&block19, phi_bb21_7);
  }

  TNode<Smi> phi_bb26_7;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_7);
    ca_.Goto(&block1);
  }

  TNode<Smi> phi_bb25_7;
  TNode<IntPtrT> tmp20;
  TNode<String> tmp21;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_7);
    tmp20 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp21 = CodeStubAssembler(state_).LoadReference<String>(CodeStubAssembler::Reference{tmp18, tmp20});
    CodeStubAssembler(state_).CallRuntime(Runtime::kCreateDataProperty, p_context, tmp7, tmp21, tmp12);
    ca_.Goto(&block19, phi_bb25_7);
  }

  TNode<Smi> phi_bb19_7;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_7);
    ca_.Goto(&block15, phi_bb19_7);
  }

  TNode<Smi> phi_bb15_7;
  TNode<Smi> tmp22;
  TNode<Smi> tmp23;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_7);
    tmp22 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp23 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb15_7}, TNode<Smi>{tmp22});
    ca_.Goto(&block11, tmp23);
  }

  TNode<Smi> phi_bb10_7;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_7);
    ca_.Goto(&block27);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_IfSlow);
  }

    ca_.Bind(&block27);
  return TNode<JSObject>{tmp7};
}

TF_BUILTIN(ObjectFromEntries, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, HeapObject> block10(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<BoolT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp0});
    tmp2 = CodeStubAssembler(state_).IsNullOrUndefined(TNode<Object>{tmp1});
    ca_.Branch(tmp2, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kNotIterable);
  }

  TNode<JSObject> tmp3;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    compiler::CodeAssemblerLabel label4(&ca_);
    tmp3 = ObjectFromEntriesFastCase_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp1}, &label4);
    ca_.Goto(&block7);
    if (label4.is_used()) {
      ca_.Bind(&label4);
      ca_.Goto(&block8);
    }
  }

  TNode<JSObject> tmp5;
  TNode<Map> tmp6;
  TNode<JSReceiver> tmp7;
  TNode<Object> tmp8;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp5 = NewJSObject_0(state_, TNode<Context>{parameter0});
    tmp6 = GetIteratorResultMap_0(state_, TNode<Context>{parameter0});
    std::tie(tmp7, tmp8) = IteratorBuiltinsAssembler(state_).GetIterator(TNode<Context>{parameter0}, TNode<Object>{tmp1}).Flatten();
    ca_.Goto(&block19);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    arguments.PopAndReturn(tmp3);
  }

  TNode<BoolT> tmp9;
      TNode<Object> tmp11;
  if (block19.is_used()) {
    ca_.Bind(&block19);
    compiler::CodeAssemblerExceptionHandlerLabel catch10__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch10__label);
    tmp9 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    }
    if (catch10__label.is_used()) {
      compiler::CodeAssemblerLabel catch10_skip(&ca_);
      ca_.Goto(&catch10_skip);
      ca_.Bind(&catch10__label, &tmp11);
      ca_.Goto(&block20);
      ca_.Bind(&catch10_skip);
    }
    ca_.Branch(tmp9, &block17, std::vector<compiler::Node*>{}, &block18, std::vector<compiler::Node*>{});
  }

  TNode<HeapObject> tmp12;
  if (block20.is_used()) {
    ca_.Bind(&block20);
    tmp12 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block10, tmp11, tmp12);
  }

  TNode<JSReceiver> tmp13;
      TNode<Object> tmp16;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    compiler::CodeAssemblerLabel label14(&ca_);
    compiler::CodeAssemblerExceptionHandlerLabel catch15__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch15__label);
    tmp13 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp7}, TNode<Object>{tmp8}}, TNode<Map>{tmp6}, &label14);
    }
    if (catch15__label.is_used()) {
      compiler::CodeAssemblerLabel catch15_skip(&ca_);
      ca_.Goto(&catch15_skip);
      ca_.Bind(&catch15__label, &tmp16);
      ca_.Goto(&block25);
      ca_.Bind(&catch15_skip);
    }
    ca_.Goto(&block23);
    if (label14.is_used()) {
      ca_.Bind(&label14);
      ca_.Goto(&block24);
    }
  }

  TNode<HeapObject> tmp17;
  if (block25.is_used()) {
    ca_.Bind(&block25);
    tmp17 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block10, tmp16, tmp17);
  }

  if (block24.is_used()) {
    ca_.Bind(&block24);
    arguments.PopAndReturn(tmp5);
  }

  TNode<Object> tmp18;
      TNode<Object> tmp20;
  TNode<Object> tmp21;
  TNode<Object> tmp22;
      TNode<Object> tmp24;
      TNode<Object> tmp26;
  if (block23.is_used()) {
    ca_.Bind(&block23);
    compiler::CodeAssemblerExceptionHandlerLabel catch19__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch19__label);
    tmp18 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{parameter0}, TNode<JSReceiver>{tmp13}, TNode<Map>{tmp6});
    }
    if (catch19__label.is_used()) {
      compiler::CodeAssemblerLabel catch19_skip(&ca_);
      ca_.Goto(&catch19_skip);
      ca_.Bind(&catch19__label, &tmp20);
      ca_.Goto(&block26);
      ca_.Bind(&catch19_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch23__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch23__label);
    std::tie(tmp21, tmp22) = LoadKeyValuePair_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp18}).Flatten();
    }
    if (catch23__label.is_used()) {
      compiler::CodeAssemblerLabel catch23_skip(&ca_);
      ca_.Goto(&catch23_skip);
      ca_.Bind(&catch23__label, &tmp24);
      ca_.Goto(&block27);
      ca_.Bind(&catch23_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch25__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch25__label);
    CodeStubAssembler(state_).CallRuntime(Runtime::kCreateDataProperty, parameter0, tmp5, tmp21, tmp22);
    }
    if (catch25__label.is_used()) {
      compiler::CodeAssemblerLabel catch25_skip(&ca_);
      ca_.Goto(&catch25_skip);
      ca_.Bind(&catch25__label, &tmp26);
      ca_.Goto(&block28);
      ca_.Bind(&catch25_skip);
    }
    ca_.Goto(&block19);
  }

  TNode<HeapObject> tmp27;
  if (block26.is_used()) {
    ca_.Bind(&block26);
    tmp27 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block10, tmp20, tmp27);
  }

  TNode<HeapObject> tmp28;
  if (block27.is_used()) {
    ca_.Bind(&block27);
    tmp28 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block10, tmp24, tmp28);
  }

  TNode<HeapObject> tmp29;
  if (block28.is_used()) {
    ca_.Bind(&block28);
    tmp29 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block10, tmp26, tmp29);
  }

  if (block18.is_used()) {
    ca_.Bind(&block18);
    arguments.PopAndReturn(tmp5);
  }

  TNode<Object> phi_bb10_11;
  TNode<HeapObject> phi_bb10_12;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_11, &phi_bb10_12);
    IteratorCloseOnException_0(state_, TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp7}, TNode<Object>{tmp8}});
    CodeStubAssembler(state_).CallRuntime(Runtime::kReThrowWithMessage, parameter0, phi_bb10_11, phi_bb10_12);
    CodeStubAssembler(state_).Unreachable();
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object-fromentries.tq?l=10&c=5
TNode<JSArray> Cast_FastJSArrayWithNoCustomIteration_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
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
    tmp2 = Cast_FastJSArrayWithNoCustomIteration_0(state_, TNode<Context>{p_context}, TNode<HeapObject>{tmp0}, &label3);
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
