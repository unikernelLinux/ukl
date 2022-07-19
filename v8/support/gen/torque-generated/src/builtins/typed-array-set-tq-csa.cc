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
#include "torque-generated/src/builtins/typed-array-set-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/frame-arguments-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-every-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-set-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-tq-csa.h"
#include "torque-generated/src/objects/js-array-buffer-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array-set.tq?l=8&c=1
const char* kBuiltinNameSet_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  return "%TypedArray%.prototype.set";}

TF_BUILTIN(TypedArrayPrototypeSet, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, UintPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, UintPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, UintPtrT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, UintPtrT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, UintPtrT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, UintPtrT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, UintPtrT> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, UintPtrT> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, UintPtrT, UintPtrT, BoolT> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, UintPtrT, UintPtrT, BoolT> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, UintPtrT, UintPtrT, BoolT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, UintPtrT, UintPtrT, BoolT> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<JSTypedArray> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSTypedArray_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kNotTypedArray, kBuiltinNameSet_0(state_));
  }

  TNode<BoolT> tmp2;
  TNode<UintPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp2 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp3 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp4 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp5 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{tmp4});
    ca_.Branch(tmp5, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<Object> tmp7;
  TNode<UintPtrT> tmp8;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp6 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp7 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp6});
    compiler::CodeAssemblerLabel label9(&ca_);
    compiler::CodeAssemblerLabel label10(&ca_);
    compiler::CodeAssemblerLabel label11(&ca_);
    tmp8 = ToUintPtr_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp7}, &label9, &label10, &label11);
    ca_.Goto(&block14);
    if (label9.is_used()) {
      ca_.Bind(&label9);
      ca_.Goto(&block15);
    }
    if (label10.is_used()) {
      ca_.Bind(&label10);
      ca_.Goto(&block16);
    }
    if (label11.is_used()) {
      ca_.Bind(&label11);
      ca_.Goto(&block17);
    }
  }

  if (block15.is_used()) {
    ca_.Bind(&block15);
    ca_.Goto(&block8);
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    ca_.Goto(&block13);
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    ca_.Goto(&block13);
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    ca_.Goto(&block12, tmp2, tmp8);
  }

  TNode<BoolT> tmp12;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp12 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block12, tmp12, tmp3);
  }

  TNode<BoolT> phi_bb12_7;
  TNode<UintPtrT> phi_bb12_8;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_7, &phi_bb12_8);
    ca_.Goto(&block11, phi_bb12_7, phi_bb12_8);
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    ca_.Goto(&block11, tmp2, tmp3);
  }

  TNode<BoolT> phi_bb11_7;
  TNode<UintPtrT> phi_bb11_8;
  TNode<JSTypedArray> tmp13;
  TNode<UintPtrT> tmp14;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_7, &phi_bb11_8);
    compiler::CodeAssemblerLabel label15(&ca_);
    std::tie(tmp13, tmp14) = EnsureAttachedAndReadLength_0(state_, TNode<JSTypedArray>{tmp0}, &label15).Flatten();
    ca_.Goto(&block18, phi_bb11_7, phi_bb11_8);
    if (label15.is_used()) {
      ca_.Bind(&label15);
      ca_.Goto(&block19, phi_bb11_7, phi_bb11_8);
    }
  }

  TNode<BoolT> phi_bb19_7;
  TNode<UintPtrT> phi_bb19_8;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_7, &phi_bb19_8);
    ca_.Goto(&block6);
  }

  TNode<BoolT> phi_bb18_7;
  TNode<UintPtrT> phi_bb18_8;
  TNode<IntPtrT> tmp16;
  TNode<Object> tmp17;
  TNode<JSTypedArray> tmp18;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_7, &phi_bb18_8);
    tmp16 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp17 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp16});
    compiler::CodeAssemblerLabel label19(&ca_);
    tmp18 = Cast_JSTypedArray_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp17}, &label19);
    ca_.Goto(&block22, phi_bb18_7, phi_bb18_8);
    if (label19.is_used()) {
      ca_.Bind(&label19);
      ca_.Goto(&block23, phi_bb18_7, phi_bb18_8);
    }
  }

  TNode<BoolT> phi_bb23_7;
  TNode<UintPtrT> phi_bb23_8;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_7, &phi_bb23_8);
    compiler::CodeAssemblerLabel label20(&ca_);
    TypedArrayPrototypeSetArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<JSTypedArray>{tmp0}, TNode<UintPtrT>{tmp14}, TNode<Object>{tmp17}, TNode<UintPtrT>{phi_bb23_8}, TNode<BoolT>{phi_bb23_7}, &label20);
    ca_.Goto(&block28, phi_bb23_7, phi_bb23_8, phi_bb23_8, phi_bb23_7);
    if (label20.is_used()) {
      ca_.Bind(&label20);
      ca_.Goto(&block29, phi_bb23_7, phi_bb23_8, phi_bb23_8, phi_bb23_7);
    }
  }

  TNode<BoolT> phi_bb22_7;
  TNode<UintPtrT> phi_bb22_8;
  TNode<JSTypedArray> tmp21;
  TNode<UintPtrT> tmp22;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_7, &phi_bb22_8);
    compiler::CodeAssemblerLabel label23(&ca_);
    std::tie(tmp21, tmp22) = EnsureAttachedAndReadLength_0(state_, TNode<JSTypedArray>{tmp18}, &label23).Flatten();
    ca_.Goto(&block24, phi_bb22_7, phi_bb22_8);
    if (label23.is_used()) {
      ca_.Bind(&label23);
      ca_.Goto(&block25, phi_bb22_7, phi_bb22_8);
    }
  }

  TNode<BoolT> phi_bb25_7;
  TNode<UintPtrT> phi_bb25_8;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_7, &phi_bb25_8);
    ca_.Goto(&block6);
  }

  TNode<BoolT> phi_bb24_7;
  TNode<UintPtrT> phi_bb24_8;
  if (block24.is_used()) {
    ca_.Bind(&block24, &phi_bb24_7, &phi_bb24_8);
    compiler::CodeAssemblerLabel label24(&ca_);
    TypedArrayPrototypeSetTypedArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TorqueStructAttachedJSTypedArrayAndLength_0{TNode<JSTypedArray>{tmp13}, TNode<UintPtrT>{tmp14}}, TorqueStructAttachedJSTypedArrayAndLength_0{TNode<JSTypedArray>{tmp21}, TNode<UintPtrT>{tmp22}}, TNode<UintPtrT>{phi_bb24_8}, TNode<BoolT>{phi_bb24_7}, &label24);
    ca_.Goto(&block26, phi_bb24_7, phi_bb24_8, phi_bb24_8, phi_bb24_7);
    if (label24.is_used()) {
      ca_.Bind(&label24);
      ca_.Goto(&block27, phi_bb24_7, phi_bb24_8, phi_bb24_8, phi_bb24_7);
    }
  }

  TNode<BoolT> phi_bb27_7;
  TNode<UintPtrT> phi_bb27_8;
  TNode<UintPtrT> phi_bb27_19;
  TNode<BoolT> phi_bb27_20;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_7, &phi_bb27_8, &phi_bb27_19, &phi_bb27_20);
    ca_.Goto(&block8);
  }

  TNode<BoolT> phi_bb26_7;
  TNode<UintPtrT> phi_bb26_8;
  TNode<UintPtrT> phi_bb26_19;
  TNode<BoolT> phi_bb26_20;
  TNode<Oddball> tmp25;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_7, &phi_bb26_8, &phi_bb26_19, &phi_bb26_20);
    tmp25 = Undefined_0(state_);
    arguments.PopAndReturn(tmp25);
  }

  TNode<BoolT> phi_bb29_7;
  TNode<UintPtrT> phi_bb29_8;
  TNode<UintPtrT> phi_bb29_15;
  TNode<BoolT> phi_bb29_16;
  if (block29.is_used()) {
    ca_.Bind(&block29, &phi_bb29_7, &phi_bb29_8, &phi_bb29_15, &phi_bb29_16);
    ca_.Goto(&block8);
  }

  TNode<BoolT> phi_bb28_7;
  TNode<UintPtrT> phi_bb28_8;
  TNode<UintPtrT> phi_bb28_15;
  TNode<BoolT> phi_bb28_16;
  TNode<Oddball> tmp26;
  if (block28.is_used()) {
    ca_.Bind(&block28, &phi_bb28_7, &phi_bb28_8, &phi_bb28_15, &phi_bb28_16);
    tmp26 = Undefined_0(state_);
    arguments.PopAndReturn(tmp26);
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{parameter0}, MessageTemplate::kTypedArraySetOffsetOutOfBounds);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kDetachedOperation, kBuiltinNameSet_0(state_));
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array-set.tq?l=112&c=1
void TypedArrayPrototypeSetArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, TNode<JSTypedArray> p_target, TNode<UintPtrT> p_targetLength, TNode<Object> p_arrayArg, TNode<UintPtrT> p_targetOffset, TNode<BoolT> p_targetOffsetOverflowed, compiler::CodeAssemblerLabel* label_IfOffsetOutOfBounds) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSReceiver> tmp0;
  TNode<Number> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).ToObject_Inline(TNode<Context>{p_context}, TNode<Object>{p_arrayArg});
    tmp1 = GetLengthProperty_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp0});
    ca_.Branch(p_targetOffsetOverflowed, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block1);
  }

  TNode<UintPtrT> tmp2;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = ChangeSafeIntegerNumberToUintPtr_0(state_, TNode<Number>{tmp1}, &label3);
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
    compiler::CodeAssemblerLabel label4(&ca_);
    CheckIntegerIndexAdditionOverflow_0(state_, TNode<UintPtrT>{tmp2}, TNode<UintPtrT>{p_targetOffset}, TNode<UintPtrT>{p_targetLength}, &label4);
    ca_.Goto(&block7);
    if (label4.is_used()) {
      ca_.Bind(&label4);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block1);
  }

  TNode<UintPtrT> tmp5;
  TNode<BoolT> tmp6;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp5 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp6 = CodeStubAssembler(state_).WordEqual(TNode<UintPtrT>{tmp2}, TNode<UintPtrT>{tmp5});
    ca_.Branch(tmp6, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    ca_.Goto(&block2);
  }

  TNode<Int32T> tmp7;
  TNode<BoolT> tmp8;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp7 = CodeStubAssembler(state_).LoadElementsKind(TNode<JSTypedArray>{p_target});
    tmp8 = TypedArrayBuiltinsAssembler(state_).IsBigInt64ElementsKind(TNode<Int32T>{tmp7});
    ca_.Branch(tmp8, &block13, std::vector<compiler::Node*>{}, &block14, std::vector<compiler::Node*>{});
  }

  if (block13.is_used()) {
    ca_.Bind(&block13);
    ca_.Goto(&block12);
  }

  TNode<JSArray> tmp9;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    compiler::CodeAssemblerLabel label10(&ca_);
    tmp9 = Cast_FastJSArray_0(state_, TNode<Context>{p_context}, TNode<HeapObject>{tmp0}, &label10);
    ca_.Goto(&block17);
    if (label10.is_used()) {
      ca_.Bind(&label10);
      ca_.Goto(&block18);
    }
  }

  if (block18.is_used()) {
    ca_.Bind(&block18);
    ca_.Goto(&block12);
  }

  TNode<IntPtrT> tmp11;
  TNode<Map> tmp12;
  TNode<Int32T> tmp13;
  TNode<BoolT> tmp14;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    tmp11 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp12 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp9, tmp11});
    tmp13 = CodeStubAssembler(state_).LoadMapElementsKind(TNode<Map>{tmp12});
    tmp14 = CodeStubAssembler(state_).IsElementsKindInRange(TNode<Int32T>{tmp13}, ElementsKind::PACKED_SMI_ELEMENTS, ElementsKind::HOLEY_SMI_ELEMENTS);
    ca_.Branch(tmp14, &block21, std::vector<compiler::Node*>{}, &block22, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp15;
  if (block21.is_used()) {
    ca_.Bind(&block21);
    tmp15 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block23, tmp15);
  }

  TNode<BoolT> tmp16;
  if (block22.is_used()) {
    ca_.Bind(&block22);
    tmp16 = CodeStubAssembler(state_).IsElementsKindInRange(TNode<Int32T>{tmp13}, ElementsKind::PACKED_DOUBLE_ELEMENTS, ElementsKind::HOLEY_DOUBLE_ELEMENTS);
    ca_.Goto(&block23, tmp16);
  }

  TNode<BoolT> phi_bb23_13;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_13);
    ca_.Branch(phi_bb23_13, &block19, std::vector<compiler::Node*>{}, &block20, std::vector<compiler::Node*>{});
  }

  TNode<JSTypedArray> tmp17;
  if (block19.is_used()) {
    ca_.Bind(&block19);
    compiler::CodeAssemblerLabel label18(&ca_);
    tmp17 = EnsureAttached_0(state_, TNode<JSTypedArray>{p_target}, &label18);
    ca_.Goto(&block27);
    if (label18.is_used()) {
      ca_.Bind(&label18);
      ca_.Goto(&block28);
    }
  }

  if (block28.is_used()) {
    ca_.Bind(&block28);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block27.is_used()) {
    ca_.Bind(&block27);
    TypedArrayBuiltinsAssembler(state_).CallCCopyFastNumberJSArrayElementsToTypedArray(TNode<Context>{p_context}, TNode<JSArray>{tmp9}, TNode<JSTypedArray>{tmp17}, TNode<UintPtrT>{tmp2}, TNode<UintPtrT>{p_targetOffset});
    ca_.Goto(&block11);
  }

  if (block20.is_used()) {
    ca_.Bind(&block20);
    ca_.Goto(&block12);
  }

  TNode<Number> tmp19;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp19 = Convert_Number_uintptr_0(state_, TNode<UintPtrT>{p_targetOffset});
    CodeStubAssembler(state_).CallRuntime(Runtime::kTypedArraySet, p_context, p_target, tmp0, tmp1, tmp19);
    ca_.Goto(&block11);
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    ca_.Goto(&block2);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(&block29);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_IfOffsetOutOfBounds);
  }

    ca_.Bind(&block29);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array-set.tq?l=173&c=1
void TypedArrayPrototypeSetTypedArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, TorqueStructAttachedJSTypedArrayAndLength_0 p_attachedTargetAndLength, TorqueStructAttachedJSTypedArrayAndLength_0 p_attachedSourceAndLength, TNode<UintPtrT> p_targetOffset, TNode<BoolT> p_targetOffsetOverflowed, compiler::CodeAssemblerLabel* label_IfOffsetOutOfBounds) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block35(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.Branch(p_targetOffsetOverflowed, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    compiler::CodeAssemblerLabel label0(&ca_);
    CheckIntegerIndexAdditionOverflow_0(state_, TNode<UintPtrT>{p_attachedSourceAndLength.length}, TNode<UintPtrT>{p_targetOffset}, TNode<UintPtrT>{p_attachedTargetAndLength.length}, &label0);
    ca_.Goto(&block5);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block1);
  }

  TNode<UintPtrT> tmp1;
  TNode<Int32T> tmp2;
  TNode<Int32T> tmp3;
  TNode<BoolT> tmp4;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    std::tie(tmp1, tmp2) = TypedArrayBuiltinsAssembler(state_).GetTypedArrayElementsInfo(TNode<JSTypedArray>{p_attachedTargetAndLength.array}).Flatten();
    tmp3 = CodeStubAssembler(state_).LoadElementsKind(TNode<JSTypedArray>{p_attachedSourceAndLength.array});
    tmp4 = ElementsKindNotEqual_0(state_, TNode<Int32T>{tmp3}, TNode<Int32T>{tmp2});
    ca_.Branch(tmp4, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp5;
  TNode<BoolT> tmp6;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp5 = TypedArrayBuiltinsAssembler(state_).IsUint8ElementsKind(TNode<Int32T>{tmp3});
    tmp6 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp5});
    ca_.Branch(tmp6, &block13, std::vector<compiler::Node*>{}, &block14, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp7;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp7 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block15, tmp7);
  }

  TNode<BoolT> tmp8;
  TNode<BoolT> tmp9;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp8 = TypedArrayBuiltinsAssembler(state_).IsUint8ElementsKind(TNode<Int32T>{tmp2});
    tmp9 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp8});
    ca_.Goto(&block15, tmp9);
  }

  TNode<BoolT> phi_bb15_16;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_16);
    ca_.Branch(phi_bb15_16, &block11, std::vector<compiler::Node*>{}, &block12, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp10;
  TNode<BoolT> tmp11;
  TNode<BoolT> tmp12;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp10 = TypedArrayBuiltinsAssembler(state_).IsBigInt64ElementsKind(TNode<Int32T>{tmp3});
    tmp11 = TypedArrayBuiltinsAssembler(state_).IsBigInt64ElementsKind(TNode<Int32T>{tmp2});
    tmp12 = CodeStubAssembler(state_).Word32NotEqual(TNode<BoolT>{tmp10}, TNode<BoolT>{tmp11});
    ca_.Branch(tmp12, &block35, std::vector<compiler::Node*>{}, &block36, std::vector<compiler::Node*>{});
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    ca_.Goto(&block10);
  }

  TNode<UintPtrT> tmp13;
  TNode<BoolT> tmp14;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp13 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp14 = CodeStubAssembler(state_).WordEqual(TNode<UintPtrT>{p_attachedSourceAndLength.length}, TNode<UintPtrT>{tmp13});
    ca_.Branch(tmp14, &block16, std::vector<compiler::Node*>{}, &block17, std::vector<compiler::Node*>{});
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    ca_.Goto(&block2);
  }

  TNode<UintPtrT> tmp15;
  TNode<BoolT> tmp16;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    tmp15 = FromConstexpr_uintptr_constexpr_uintptr_0(state_, JSTypedArray::kMaxLength);
    tmp16 = CodeStubAssembler(state_).UintPtrGreaterThan(TNode<UintPtrT>{p_attachedSourceAndLength.length}, TNode<UintPtrT>{tmp15});
    ca_.Branch(tmp16, &block21, std::vector<compiler::Node*>{}, &block22, std::vector<compiler::Node*>{});
  }

  if (block21.is_used()) {
    ca_.Bind(&block21);
    ca_.Goto(&block19);
  }

  TNode<UintPtrT> tmp17;
  TNode<UintPtrT> tmp18;
  TNode<BoolT> tmp19;
  if (block22.is_used()) {
    ca_.Bind(&block22);
    tmp17 = FromConstexpr_uintptr_constexpr_uintptr_0(state_, JSArrayBuffer::kMaxByteLength);
    tmp18 = CodeStubAssembler(state_).WordShr(TNode<UintPtrT>{tmp17}, TNode<UintPtrT>{tmp1});
    tmp19 = CodeStubAssembler(state_).UintPtrGreaterThan(TNode<UintPtrT>{p_attachedSourceAndLength.length}, TNode<UintPtrT>{tmp18});
    ca_.Branch(tmp19, &block23, std::vector<compiler::Node*>{}, &block24, std::vector<compiler::Node*>{});
  }

  if (block23.is_used()) {
    ca_.Bind(&block23);
    ca_.Goto(&block19);
  }

  TNode<UintPtrT> tmp20;
  TNode<UintPtrT> tmp21;
  TNode<BoolT> tmp22;
  if (block24.is_used()) {
    ca_.Bind(&block24);
    tmp20 = CodeStubAssembler(state_).WordShl(TNode<UintPtrT>{p_attachedSourceAndLength.length}, TNode<UintPtrT>{tmp1});
    tmp21 = FromConstexpr_uintptr_constexpr_uintptr_0(state_, JSTypedArray::kMaxLength);
    tmp22 = CodeStubAssembler(state_).UintPtrGreaterThan(TNode<UintPtrT>{p_targetOffset}, TNode<UintPtrT>{tmp21});
    ca_.Branch(tmp22, &block28, std::vector<compiler::Node*>{}, &block29, std::vector<compiler::Node*>{});
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block28.is_used()) {
    ca_.Bind(&block28);
    ca_.Goto(&block26);
  }

  TNode<UintPtrT> tmp23;
  TNode<UintPtrT> tmp24;
  TNode<BoolT> tmp25;
  if (block29.is_used()) {
    ca_.Bind(&block29);
    tmp23 = FromConstexpr_uintptr_constexpr_uintptr_0(state_, JSArrayBuffer::kMaxByteLength);
    tmp24 = CodeStubAssembler(state_).WordShr(TNode<UintPtrT>{tmp23}, TNode<UintPtrT>{tmp1});
    tmp25 = CodeStubAssembler(state_).UintPtrGreaterThan(TNode<UintPtrT>{p_targetOffset}, TNode<UintPtrT>{tmp24});
    ca_.Branch(tmp25, &block30, std::vector<compiler::Node*>{}, &block31, std::vector<compiler::Node*>{});
  }

  if (block30.is_used()) {
    ca_.Bind(&block30);
    ca_.Goto(&block26);
  }

  TNode<UintPtrT> tmp26;
  TNode<RawPtrT> tmp27;
  TNode<IntPtrT> tmp28;
  TNode<RawPtrT> tmp29;
  TNode<IntPtrT> tmp30;
  TNode<JSArrayBuffer> tmp31;
  TNode<BoolT> tmp32;
  if (block31.is_used()) {
    ca_.Bind(&block31);
    tmp26 = CodeStubAssembler(state_).WordShl(TNode<UintPtrT>{p_targetOffset}, TNode<UintPtrT>{tmp1});
    tmp27 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{p_attachedTargetAndLength.array});
    tmp28 = Convert_intptr_uintptr_0(state_, TNode<UintPtrT>{tmp26});
    tmp29 = CodeStubAssembler(state_).RawPtrAdd(TNode<RawPtrT>{tmp27}, TNode<IntPtrT>{tmp28});
    tmp30 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp31 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{p_attachedTargetAndLength.array, tmp30});
    tmp32 = IsSharedArrayBuffer_0(state_, TNode<JSArrayBuffer>{tmp31});
    ca_.Branch(tmp32, &block32, std::vector<compiler::Node*>{}, &block33, std::vector<compiler::Node*>{});
  }

  if (block26.is_used()) {
    ca_.Bind(&block26);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<RawPtrT> tmp33;
  if (block32.is_used()) {
    ca_.Bind(&block32);
    tmp33 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{p_attachedSourceAndLength.array});
    TypedArrayBuiltinsAssembler(state_).CallCRelaxedMemmove(TNode<RawPtrT>{tmp29}, TNode<RawPtrT>{tmp33}, TNode<UintPtrT>{tmp20});
    ca_.Goto(&block34);
  }

  TNode<RawPtrT> tmp34;
  if (block33.is_used()) {
    ca_.Bind(&block33);
    tmp34 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{p_attachedSourceAndLength.array});
    TypedArrayBuiltinsAssembler(state_).CallCMemmove(TNode<RawPtrT>{tmp29}, TNode<RawPtrT>{tmp34}, TNode<UintPtrT>{tmp20});
    ca_.Goto(&block34);
  }

  if (block34.is_used()) {
    ca_.Bind(&block34);
    ca_.Goto(&block7);
  }

  if (block35.is_used()) {
    ca_.Bind(&block35);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{p_context}, MessageTemplate::kBigIntMixedTypes);
  }

  TNode<UintPtrT> tmp35;
  TNode<BoolT> tmp36;
  if (block36.is_used()) {
    ca_.Bind(&block36);
    tmp35 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp36 = CodeStubAssembler(state_).WordEqual(TNode<UintPtrT>{p_attachedSourceAndLength.length}, TNode<UintPtrT>{tmp35});
    ca_.Branch(tmp36, &block37, std::vector<compiler::Node*>{}, &block38, std::vector<compiler::Node*>{});
  }

  if (block37.is_used()) {
    ca_.Bind(&block37);
    ca_.Goto(&block2);
  }

  if (block38.is_used()) {
    ca_.Bind(&block38);
    TypedArrayBuiltinsAssembler(state_).CallCCopyTypedArrayElementsToTypedArray(TNode<JSTypedArray>{p_attachedSourceAndLength.array}, TNode<JSTypedArray>{p_attachedTargetAndLength.array}, TNode<UintPtrT>{p_attachedSourceAndLength.length}, TNode<UintPtrT>{p_targetOffset});
    ca_.Goto(&block7);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    ca_.Goto(&block2);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(&block39);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_IfOffsetOutOfBounds);
  }

    ca_.Bind(&block39);
}

} // namespace internal
} // namespace v8
