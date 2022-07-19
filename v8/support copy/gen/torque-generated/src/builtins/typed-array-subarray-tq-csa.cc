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
#include "torque-generated/src/builtins/typed-array-subarray-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/frame-arguments-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-createtypedarray-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-every-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-tq-csa.h"

namespace v8 {
namespace internal {

TF_BUILTIN(TypedArrayPrototypeSubArray, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kIncompatibleMethodReceiver, "%TypedArray%.prototype.subarray");
  }

  TNode<JSArrayBuffer> tmp2;
  TNode<UintPtrT> tmp3;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp2 = CodeStubAssembler(state_).GetTypedArrayBuffer(TNode<Context>{parameter0}, TNode<JSTypedArray>{tmp0});
    compiler::CodeAssemblerLabel label4(&ca_);
    tmp3 = CodeStubAssembler(state_).LoadJSTypedArrayLengthAndCheckDetached(TNode<JSTypedArray>{tmp0}, &label4);
    ca_.Goto(&block7);
    if (label4.is_used()) {
      ca_.Bind(&label4);
      ca_.Goto(&block8);
    }
  }

  TNode<UintPtrT> tmp5;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp5 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block5, tmp5);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    ca_.Goto(&block5, tmp3);
  }

  TNode<UintPtrT> phi_bb5_8;
  TNode<IntPtrT> tmp6;
  TNode<Object> tmp7;
  TNode<Oddball> tmp8;
  TNode<BoolT> tmp9;
  if (block5.is_used()) {
    ca_.Bind(&block5, &phi_bb5_8);
    tmp6 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp7 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp6});
    tmp8 = Undefined_0(state_);
    tmp9 = CodeStubAssembler(state_).TaggedNotEqual(TNode<Object>{tmp7}, TNode<HeapObject>{tmp8});
    ca_.Branch(tmp9, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  TNode<UintPtrT> tmp10;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp10 = ConvertToRelativeIndex_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp7}, TNode<UintPtrT>{phi_bb5_8});
    ca_.Goto(&block11, tmp10);
  }

  TNode<UintPtrT> tmp11;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp11 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block11, tmp11);
  }

  TNode<UintPtrT> phi_bb11_10;
  TNode<IntPtrT> tmp12;
  TNode<Object> tmp13;
  TNode<Oddball> tmp14;
  TNode<BoolT> tmp15;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_10);
    tmp12 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp12});
    tmp14 = Undefined_0(state_);
    tmp15 = CodeStubAssembler(state_).TaggedNotEqual(TNode<Object>{tmp13}, TNode<HeapObject>{tmp14});
    ca_.Branch(tmp15, &block13, std::vector<compiler::Node*>{}, &block14, std::vector<compiler::Node*>{});
  }

  TNode<UintPtrT> tmp16;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp16 = ConvertToRelativeIndex_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp13}, TNode<UintPtrT>{phi_bb5_8});
    ca_.Goto(&block15, tmp16);
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    ca_.Goto(&block15, phi_bb5_8);
  }

  TNode<UintPtrT> phi_bb15_12;
  TNode<UintPtrT> tmp17;
  TNode<IntPtrT> tmp18;
  TNode<IntPtrT> tmp19;
  TNode<IntPtrT> tmp20;
  TNode<UintPtrT> tmp21;
  TNode<UintPtrT> tmp22;
  TNode<Int32T> tmp23;
  TNode<IntPtrT> tmp24;
  TNode<UintPtrT> tmp25;
  TNode<UintPtrT> tmp26;
  TNode<BoolT> tmp27;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_12);
    tmp17 = CodeStubAssembler(state_).UintPtrSub(TNode<UintPtrT>{phi_bb15_12}, TNode<UintPtrT>{phi_bb11_10});
    tmp18 = CodeStubAssembler(state_).Signed(TNode<UintPtrT>{tmp17});
    tmp19 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp20 = CodeStubAssembler(state_).IntPtrMax(TNode<IntPtrT>{tmp18}, TNode<IntPtrT>{tmp19});
    tmp21 = CodeStubAssembler(state_).Unsigned(TNode<IntPtrT>{tmp20});
    std::tie(tmp22, tmp23) = TypedArrayBuiltinsAssembler(state_).GetTypedArrayElementsInfo(TNode<JSTypedArray>{tmp0}).Flatten();
    tmp24 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp25 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp0, tmp24});
    tmp26 = FromConstexpr_uintptr_constexpr_uintptr_0(state_, JSTypedArray::kMaxLength);
    tmp27 = CodeStubAssembler(state_).UintPtrGreaterThan(TNode<UintPtrT>{phi_bb11_10}, TNode<UintPtrT>{tmp26});
    ca_.Branch(tmp27, &block20, std::vector<compiler::Node*>{}, &block21, std::vector<compiler::Node*>{});
  }

  if (block20.is_used()) {
    ca_.Bind(&block20);
    ca_.Goto(&block18);
  }

  TNode<UintPtrT> tmp28;
  TNode<UintPtrT> tmp29;
  TNode<BoolT> tmp30;
  if (block21.is_used()) {
    ca_.Bind(&block21);
    tmp28 = FromConstexpr_uintptr_constexpr_uintptr_0(state_, JSArrayBuffer::kMaxByteLength);
    tmp29 = CodeStubAssembler(state_).WordShr(TNode<UintPtrT>{tmp28}, TNode<UintPtrT>{tmp22});
    tmp30 = CodeStubAssembler(state_).UintPtrGreaterThan(TNode<UintPtrT>{phi_bb11_10}, TNode<UintPtrT>{tmp29});
    ca_.Branch(tmp30, &block22, std::vector<compiler::Node*>{}, &block23, std::vector<compiler::Node*>{});
  }

  if (block22.is_used()) {
    ca_.Bind(&block22);
    ca_.Goto(&block18);
  }

  TNode<UintPtrT> tmp31;
  TNode<UintPtrT> tmp32;
  TNode<JSTypedArray> tmp33;
  if (block23.is_used()) {
    ca_.Bind(&block23);
    tmp31 = CodeStubAssembler(state_).WordShl(TNode<UintPtrT>{phi_bb11_10}, TNode<UintPtrT>{tmp22});
    tmp32 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp25}, TNode<UintPtrT>{tmp31});
    tmp33 = TypedArraySpeciesCreateByBuffer_0(state_, TNode<Context>{parameter0}, "%TypedArray%.prototype.subarray", TNode<JSTypedArray>{tmp0}, TNode<JSArrayBuffer>{tmp2}, TNode<UintPtrT>{tmp32}, TNode<UintPtrT>{tmp21});
    arguments.PopAndReturn(tmp33);
  }

  if (block18.is_used()) {
    ca_.Bind(&block18);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{parameter0}, MessageTemplate::kInvalidArrayBufferLength);
  }
}

} // namespace internal
} // namespace v8
