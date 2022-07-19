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
#include "torque-generated/src/builtins/typed-array-slice-tq-csa.h"
#include "torque-generated/src/builtins/array-join-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/frame-arguments-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-createtypedarray-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-slice-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-tq-csa.h"
#include "torque-generated/src/objects/js-array-buffer-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array-slice.tq?l=8&c=1
const char* kBuiltinNameSlice_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  return "%TypedArray%.prototype.slice";}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array-slice.tq?l=13&c=1
void FastCopy_0(compiler::CodeAssemblerState* state_, TNode<JSTypedArray> p_src, TNode<JSTypedArray> p_dest, TNode<UintPtrT> p_k, TNode<UintPtrT> p_count, compiler::CodeAssemblerLabel* label_IfSlow) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = IsForceSlowPath_0(state_);
    ca_.Branch(tmp0, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block1);
  }

  TNode<Int32T> tmp1;
  TNode<UintPtrT> tmp2;
  TNode<Int32T> tmp3;
  TNode<BoolT> tmp4;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp1 = CodeStubAssembler(state_).LoadElementsKind(TNode<JSTypedArray>{p_src});
    std::tie(tmp2, tmp3) = TypedArrayBuiltinsAssembler(state_).GetTypedArrayElementsInfo(TNode<JSTypedArray>{p_dest}).Flatten();
    tmp4 = ElementsKindNotEqual_0(state_, TNode<Int32T>{tmp1}, TNode<Int32T>{tmp3});
    ca_.Branch(tmp4, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block1);
  }

  TNode<IntPtrT> tmp5;
  TNode<JSArrayBuffer> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<JSArrayBuffer> tmp8;
  TNode<BoolT> tmp9;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp5 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp6 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{p_dest, tmp5});
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp8 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{p_src, tmp7});
    tmp9 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp6}, TNode<HeapObject>{tmp8});
    ca_.Branch(tmp9, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    ca_.Goto(&block1);
  }

  TNode<UintPtrT> tmp10;
  TNode<BoolT> tmp11;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp10 = FromConstexpr_uintptr_constexpr_uintptr_0(state_, JSTypedArray::kMaxLength);
    tmp11 = CodeStubAssembler(state_).UintPtrGreaterThan(TNode<UintPtrT>{p_count}, TNode<UintPtrT>{tmp10});
    ca_.Branch(tmp11, &block12, std::vector<compiler::Node*>{}, &block13, std::vector<compiler::Node*>{});
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    ca_.Goto(&block10);
  }

  TNode<UintPtrT> tmp12;
  TNode<UintPtrT> tmp13;
  TNode<BoolT> tmp14;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp12 = FromConstexpr_uintptr_constexpr_uintptr_0(state_, JSArrayBuffer::kMaxByteLength);
    tmp13 = CodeStubAssembler(state_).WordShr(TNode<UintPtrT>{tmp12}, TNode<UintPtrT>{tmp2});
    tmp14 = CodeStubAssembler(state_).UintPtrGreaterThan(TNode<UintPtrT>{p_count}, TNode<UintPtrT>{tmp13});
    ca_.Branch(tmp14, &block14, std::vector<compiler::Node*>{}, &block15, std::vector<compiler::Node*>{});
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    ca_.Goto(&block10);
  }

  TNode<UintPtrT> tmp15;
  TNode<UintPtrT> tmp16;
  TNode<BoolT> tmp17;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp15 = CodeStubAssembler(state_).WordShl(TNode<UintPtrT>{p_count}, TNode<UintPtrT>{tmp2});
    tmp16 = FromConstexpr_uintptr_constexpr_uintptr_0(state_, JSTypedArray::kMaxLength);
    tmp17 = CodeStubAssembler(state_).UintPtrGreaterThan(TNode<UintPtrT>{p_k}, TNode<UintPtrT>{tmp16});
    ca_.Branch(tmp17, &block19, std::vector<compiler::Node*>{}, &block20, std::vector<compiler::Node*>{});
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    ca_.Goto(&block17);
  }

  TNode<UintPtrT> tmp18;
  TNode<UintPtrT> tmp19;
  TNode<BoolT> tmp20;
  if (block20.is_used()) {
    ca_.Bind(&block20);
    tmp18 = FromConstexpr_uintptr_constexpr_uintptr_0(state_, JSArrayBuffer::kMaxByteLength);
    tmp19 = CodeStubAssembler(state_).WordShr(TNode<UintPtrT>{tmp18}, TNode<UintPtrT>{tmp2});
    tmp20 = CodeStubAssembler(state_).UintPtrGreaterThan(TNode<UintPtrT>{p_k}, TNode<UintPtrT>{tmp19});
    ca_.Branch(tmp20, &block21, std::vector<compiler::Node*>{}, &block22, std::vector<compiler::Node*>{});
  }

  if (block21.is_used()) {
    ca_.Bind(&block21);
    ca_.Goto(&block17);
  }

  TNode<UintPtrT> tmp21;
  TNode<RawPtrT> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<RawPtrT> tmp24;
  TNode<IntPtrT> tmp25;
  TNode<JSArrayBuffer> tmp26;
  TNode<BoolT> tmp27;
  if (block22.is_used()) {
    ca_.Bind(&block22);
    tmp21 = CodeStubAssembler(state_).WordShl(TNode<UintPtrT>{p_k}, TNode<UintPtrT>{tmp2});
    tmp22 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{p_src});
    tmp23 = Convert_intptr_uintptr_0(state_, TNode<UintPtrT>{tmp21});
    tmp24 = CodeStubAssembler(state_).RawPtrAdd(TNode<RawPtrT>{tmp22}, TNode<IntPtrT>{tmp23});
    tmp25 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp26 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{p_src, tmp25});
    tmp27 = IsSharedArrayBuffer_0(state_, TNode<JSArrayBuffer>{tmp26});
    ca_.Branch(tmp27, &block31, std::vector<compiler::Node*>{}, &block32, std::vector<compiler::Node*>{});
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<RawPtrT> tmp28;
  if (block31.is_used()) {
    ca_.Bind(&block31);
    tmp28 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{p_dest});
    TypedArrayBuiltinsAssembler(state_).CallCRelaxedMemmove(TNode<RawPtrT>{tmp28}, TNode<RawPtrT>{tmp24}, TNode<UintPtrT>{tmp15});
    ca_.Goto(&block33);
  }

  TNode<RawPtrT> tmp29;
  if (block32.is_used()) {
    ca_.Bind(&block32);
    tmp29 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{p_dest});
    TypedArrayBuiltinsAssembler(state_).CallCMemmove(TNode<RawPtrT>{tmp29}, TNode<RawPtrT>{tmp24}, TNode<UintPtrT>{tmp15});
    ca_.Goto(&block33);
  }

  if (block33.is_used()) {
    ca_.Bind(&block33);
    ca_.Goto(&block34);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_IfSlow);
  }

    ca_.Bind(&block34);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array-slice.tq?l=50&c=1
void SlowCopy_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSTypedArray> p_src, TNode<JSTypedArray> p_dest, TNode<UintPtrT> p_k, TNode<UintPtrT> p_final) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Int32T> tmp0;
  TNode<BoolT> tmp1;
  TNode<Int32T> tmp2;
  TNode<BoolT> tmp3;
  TNode<BoolT> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadElementsKind(TNode<JSTypedArray>{p_src});
    tmp1 = TypedArrayBuiltinsAssembler(state_).IsBigInt64ElementsKind(TNode<Int32T>{tmp0});
    tmp2 = CodeStubAssembler(state_).LoadElementsKind(TNode<JSTypedArray>{p_dest});
    tmp3 = TypedArrayBuiltinsAssembler(state_).IsBigInt64ElementsKind(TNode<Int32T>{tmp2});
    tmp4 = CodeStubAssembler(state_).Word32NotEqual(TNode<BoolT>{tmp1}, TNode<BoolT>{tmp3});
    ca_.Branch(tmp4, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{p_context}, MessageTemplate::kBigIntMixedTypes);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    TypedArrayBuiltinsAssembler(state_).CallCCopyTypedArrayElementsSlice(TNode<JSTypedArray>{p_src}, TNode<JSTypedArray>{p_dest}, TNode<UintPtrT>{p_k}, TNode<UintPtrT>{p_final});
    ca_.Goto(&block4);
  }

    ca_.Bind(&block4);
}

TF_BUILTIN(TypedArrayPrototypeSlice, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, UintPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, UintPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<UintPtrT> tmp0;
  TNode<JSTypedArray> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<Oddball> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TypedArrayBuiltinsAssembler(state_).ValidateTypedArrayAndGetLength(TNode<Context>{parameter0}, TNode<Object>{parameter1}, kBuiltinNameSlice_0(state_));
    tmp1 = UnsafeCast_JSTypedArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1});
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp3 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp2});
    tmp4 = Undefined_0(state_);
    tmp5 = CodeStubAssembler(state_).TaggedNotEqual(TNode<Object>{tmp3}, TNode<HeapObject>{tmp4});
    ca_.Branch(tmp5, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<UintPtrT> tmp6;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp6 = ConvertToRelativeIndex_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp3}, TNode<UintPtrT>{tmp0});
    ca_.Goto(&block3, tmp6);
  }

  TNode<UintPtrT> tmp7;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp7 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block3, tmp7);
  }

  TNode<UintPtrT> phi_bb3_9;
  TNode<IntPtrT> tmp8;
  TNode<Object> tmp9;
  TNode<Oddball> tmp10;
  TNode<BoolT> tmp11;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_9);
    tmp8 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp9 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp8});
    tmp10 = Undefined_0(state_);
    tmp11 = CodeStubAssembler(state_).TaggedNotEqual(TNode<Object>{tmp9}, TNode<HeapObject>{tmp10});
    ca_.Branch(tmp11, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  TNode<UintPtrT> tmp12;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp12 = ConvertToRelativeIndex_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp9}, TNode<UintPtrT>{tmp0});
    ca_.Goto(&block7, tmp12);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block7, tmp0);
  }

  TNode<UintPtrT> phi_bb7_11;
  TNode<UintPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<IntPtrT> tmp16;
  TNode<UintPtrT> tmp17;
  TNode<JSTypedArray> tmp18;
  TNode<UintPtrT> tmp19;
  TNode<BoolT> tmp20;
  if (block7.is_used()) {
    ca_.Bind(&block7, &phi_bb7_11);
    tmp13 = CodeStubAssembler(state_).UintPtrSub(TNode<UintPtrT>{phi_bb7_11}, TNode<UintPtrT>{phi_bb3_9});
    tmp14 = CodeStubAssembler(state_).Signed(TNode<UintPtrT>{tmp13});
    tmp15 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp16 = CodeStubAssembler(state_).IntPtrMax(TNode<IntPtrT>{tmp14}, TNode<IntPtrT>{tmp15});
    tmp17 = CodeStubAssembler(state_).Unsigned(TNode<IntPtrT>{tmp16});
    tmp18 = TypedArraySpeciesCreateByLength_0(state_, TNode<Context>{parameter0}, kBuiltinNameSlice_0(state_), TNode<JSTypedArray>{tmp1}, TNode<UintPtrT>{tmp17});
    tmp19 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp20 = CodeStubAssembler(state_).UintPtrGreaterThan(TNode<UintPtrT>{tmp17}, TNode<UintPtrT>{tmp19});
    ca_.Branch(tmp20, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{phi_bb7_11, tmp17});
  }

  TNode<UintPtrT> tmp21;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    compiler::CodeAssemblerLabel label22(&ca_);
    tmp21 = CodeStubAssembler(state_).LoadJSTypedArrayLengthAndCheckDetached(TNode<JSTypedArray>{tmp1}, &label22);
    ca_.Goto(&block15);
    if (label22.is_used()) {
      ca_.Bind(&label22);
      ca_.Goto(&block16);
    }
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kDetachedOperation, kBuiltinNameSlice_0(state_));
  }

  TNode<BoolT> tmp23;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp23 = CodeStubAssembler(state_).UintPtrGreaterThanOrEqual(TNode<UintPtrT>{phi_bb3_9}, TNode<UintPtrT>{tmp21});
    ca_.Branch(tmp23, &block17, std::vector<compiler::Node*>{}, &block18, std::vector<compiler::Node*>{});
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    arguments.PopAndReturn(tmp18);
  }

  TNode<BoolT> tmp24;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp24 = CodeStubAssembler(state_).UintPtrGreaterThan(TNode<UintPtrT>{phi_bb7_11}, TNode<UintPtrT>{tmp21});
    ca_.Branch(tmp24, &block19, std::vector<compiler::Node*>{}, &block20, std::vector<compiler::Node*>{phi_bb7_11, tmp17});
  }

  TNode<UintPtrT> tmp25;
  TNode<IntPtrT> tmp26;
  TNode<IntPtrT> tmp27;
  TNode<IntPtrT> tmp28;
  TNode<UintPtrT> tmp29;
  if (block19.is_used()) {
    ca_.Bind(&block19);
    tmp25 = CodeStubAssembler(state_).UintPtrSub(TNode<UintPtrT>{tmp21}, TNode<UintPtrT>{phi_bb3_9});
    tmp26 = CodeStubAssembler(state_).Signed(TNode<UintPtrT>{tmp25});
    tmp27 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp28 = CodeStubAssembler(state_).IntPtrMax(TNode<IntPtrT>{tmp26}, TNode<IntPtrT>{tmp27});
    tmp29 = CodeStubAssembler(state_).Unsigned(TNode<IntPtrT>{tmp28});
    ca_.Goto(&block20, tmp21, tmp29);
  }

  TNode<UintPtrT> phi_bb20_11;
  TNode<UintPtrT> phi_bb20_12;
  TNode<JSTypedArray> tmp30;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_11, &phi_bb20_12);
    tmp30 = (TNode<JSTypedArray>{tmp1});
    compiler::CodeAssemblerLabel label31(&ca_);
    FastCopy_0(state_, TNode<JSTypedArray>{tmp30}, TNode<JSTypedArray>{tmp18}, TNode<UintPtrT>{phi_bb3_9}, TNode<UintPtrT>{phi_bb20_12}, &label31);
    ca_.Goto(&block21);
    if (label31.is_used()) {
      ca_.Bind(&label31);
      ca_.Goto(&block22);
    }
  }

  if (block22.is_used()) {
    ca_.Bind(&block22);
    SlowCopy_0(state_, TNode<Context>{parameter0}, TNode<JSTypedArray>{tmp1}, TNode<JSTypedArray>{tmp18}, TNode<UintPtrT>{phi_bb3_9}, TNode<UintPtrT>{phi_bb20_11});
    ca_.Goto(&block11);
  }

  if (block21.is_used()) {
    ca_.Bind(&block21);
    ca_.Goto(&block11);
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    ca_.Goto(&block10, phi_bb20_11, phi_bb20_12);
  }

  TNode<UintPtrT> phi_bb10_11;
  TNode<UintPtrT> phi_bb10_12;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_11, &phi_bb10_12);
    arguments.PopAndReturn(tmp18);
  }
}

} // namespace internal
} // namespace v8
