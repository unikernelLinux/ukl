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
#include "torque-generated/src/builtins/typed-array-findlast-tq-csa.h"
#include "torque-generated/src/builtins/array-every-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/frame-arguments-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-every-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-findlast-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array-findlast.tq?l=8&c=1
const char* kBuiltinNameFindLast_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  return "%TypedArray%.prototype.findLast";}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array-findlast.tq?l=12&c=1
TNode<Object> FindLastAllElements_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructAttachedJSTypedArrayAndLength_0 p_attachedArrayAndLength, TNode<JSReceiver> p_predicate, TNode<Object> p_thisArg) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, UintPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSTypedArray> tmp0;
  TNode<JSTypedArray> tmp1;
  TNode<BuiltinPtr> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = NewAttachedJSTypedArrayWitness_0(state_, TNode<JSTypedArray>{p_attachedArrayAndLength.array}).Flatten();
    ca_.Goto(&block4, tmp1, p_attachedArrayAndLength.length);
  }

  TNode<JSTypedArray> phi_bb4_6;
  TNode<UintPtrT> phi_bb4_8;
  TNode<UintPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<UintPtrT> tmp5;
  TNode<BoolT> tmp6;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_6, &phi_bb4_8);
    tmp3 = FromConstexpr_uintptr_constexpr_int31_0(state_, 1);
    tmp4 = CodeStubAssembler(state_).UintPtrSub(TNode<UintPtrT>{phi_bb4_8}, TNode<UintPtrT>{tmp3});
    tmp5 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp6 = CodeStubAssembler(state_).UintPtrGreaterThan(TNode<UintPtrT>{phi_bb4_8}, TNode<UintPtrT>{tmp5});
    ca_.Branch(tmp6, &block2, std::vector<compiler::Node*>{phi_bb4_6}, &block3, std::vector<compiler::Node*>{phi_bb4_6});
  }

  TNode<JSTypedArray> phi_bb2_6;
  TNode<UintPtrT> tmp7;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_6);
    compiler::CodeAssemblerLabel label8(&ca_);
    tmp7 = CodeStubAssembler(state_).LoadJSTypedArrayLengthAndCheckDetached(TNode<JSTypedArray>{tmp0}, &label8);
    ca_.Goto(&block10, phi_bb2_6);
    if (label8.is_used()) {
      ca_.Bind(&label8);
      ca_.Goto(&block11, phi_bb2_6);
    }
  }

  TNode<JSTypedArray> phi_bb11_6;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_6);
    ca_.Goto(&block8, phi_bb11_6);
  }

  TNode<JSTypedArray> phi_bb10_6;
  TNode<BoolT> tmp9;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_6);
    tmp9 = CodeStubAssembler(state_).UintPtrGreaterThanOrEqual(TNode<UintPtrT>{tmp4}, TNode<UintPtrT>{tmp7});
    ca_.Branch(tmp9, &block12, std::vector<compiler::Node*>{phi_bb10_6}, &block13, std::vector<compiler::Node*>{phi_bb10_6});
  }

  TNode<JSTypedArray> phi_bb12_6;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_6);
    ca_.Goto(&block8, phi_bb12_6);
  }

  TNode<JSTypedArray> phi_bb13_6;
  TNode<JSTypedArray> tmp10;
  TNode<Numeric> tmp11;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_6);
    tmp10 = (TNode<JSTypedArray>{tmp0});
tmp11 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(1)).descriptor(), tmp2, TNode<Object>(), tmp10, tmp4));
    ca_.Goto(&block5, tmp10, tmp11);
  }

  TNode<JSTypedArray> phi_bb8_6;
  TNode<Oddball> tmp12;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_6);
    tmp12 = Undefined_0(state_);
    ca_.Goto(&block5, phi_bb8_6, tmp12);
  }

  TNode<JSTypedArray> phi_bb5_6;
  TNode<Object> phi_bb5_9;
  TNode<Number> tmp13;
  TNode<Object> tmp14;
  TNode<BoolT> tmp15;
  if (block5.is_used()) {
    ca_.Bind(&block5, &phi_bb5_6, &phi_bb5_9);
    tmp13 = Convert_Number_uintptr_0(state_, TNode<UintPtrT>{tmp4});
    tmp14 = CodeStubAssembler(state_).Call(TNode<Context>{p_context}, TNode<Object>{p_predicate}, TNode<Object>{p_thisArg}, TNode<Object>{phi_bb5_9}, TNode<Object>{tmp13}, TNode<Object>{tmp0});
    tmp15 = ToBoolean_0(state_, TNode<Object>{tmp14});
    ca_.Branch(tmp15, &block16, std::vector<compiler::Node*>{}, &block17, std::vector<compiler::Node*>{});
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    ca_.Goto(&block1, phi_bb5_9);
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    ca_.Goto(&block4, phi_bb5_6, tmp4);
  }

  TNode<JSTypedArray> phi_bb3_6;
  TNode<Oddball> tmp16;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_6);
    tmp16 = Undefined_0(state_);
    ca_.Goto(&block1, tmp16);
  }

  TNode<Object> phi_bb1_5;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_5);
    ca_.Goto(&block18, phi_bb1_5);
  }

  TNode<Object> phi_bb18_5;
    ca_.Bind(&block18, &phi_bb18_5);
  return TNode<Object>{phi_bb18_5};
}

TF_BUILTIN(TypedArrayPrototypeFindLast, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSTypedArray> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSTypedArray_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block7);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kNotTypedArray, kBuiltinNameFindLast_0(state_));
  }

  TNode<JSTypedArray> tmp2;
  TNode<UintPtrT> tmp3;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    compiler::CodeAssemblerLabel label4(&ca_);
    std::tie(tmp2, tmp3) = EnsureAttachedAndReadLength_0(state_, TNode<JSTypedArray>{tmp0}, &label4).Flatten();
    ca_.Goto(&block9);
    if (label4.is_used()) {
      ca_.Bind(&label4);
      ca_.Goto(&block10);
    }
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kDetachedOperation, kBuiltinNameFindLast_0(state_));
  }

  TNode<IntPtrT> tmp5;
  TNode<Object> tmp6;
  TNode<JSReceiver> tmp7;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp5 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp6 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp5});
    compiler::CodeAssemblerLabel label8(&ca_);
    tmp7 = Cast_Callable_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp6}, &label8);
    ca_.Goto(&block11);
    if (label8.is_used()) {
      ca_.Bind(&label8);
      ca_.Goto(&block12);
    }
  }

  TNode<IntPtrT> tmp9;
  TNode<Object> tmp10;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp9 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp10 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp9});
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kCalledNonCallable, TNode<Object>{tmp10});
  }

  TNode<IntPtrT> tmp11;
  TNode<Object> tmp12;
  TNode<Object> tmp13;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp11 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp12 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp11});
    tmp13 = FindLastAllElements_0(state_, TNode<Context>{parameter0}, TorqueStructAttachedJSTypedArrayAndLength_0{TNode<JSTypedArray>{tmp2}, TNode<UintPtrT>{tmp3}}, TNode<JSReceiver>{tmp7}, TNode<Object>{tmp12});
    arguments.PopAndReturn(tmp13);
  }
}

} // namespace internal
} // namespace v8
