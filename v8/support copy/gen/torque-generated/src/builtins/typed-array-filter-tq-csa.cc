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
#include "torque-generated/src/builtins/typed-array-filter-tq-csa.h"
#include "torque-generated/src/builtins/array-every-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/frame-arguments-tq-csa.h"
#include "torque-generated/src/builtins/growable-fixed-array-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-createtypedarray-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-every-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-filter-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-tq-csa.h"
#include "torque-generated/src/objects/fixed-array-tq-csa.h"
#include "torque-generated/src/objects/js-array-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array-filter.tq?l=6&c=1
const char* kBuiltinNameFilter_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  return "%TypedArray%.prototype.filter";}

TF_BUILTIN(TypedArrayPrototypeFilter, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, JSTypedArray, UintPtrT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, JSTypedArray, UintPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, JSTypedArray, UintPtrT, UintPtrT, UintPtrT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, JSTypedArray, UintPtrT, UintPtrT, UintPtrT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, JSTypedArray, UintPtrT, UintPtrT, UintPtrT> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, JSTypedArray, UintPtrT, UintPtrT, UintPtrT> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, JSTypedArray, UintPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, JSTypedArray, UintPtrT, Object> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, UintPtrT> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, UintPtrT> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, UintPtrT> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, UintPtrT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, JSTypedArray, UintPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSTypedArray> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSTypedArray_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block5);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kNotTypedArray, kBuiltinNameFilter_0(state_));
  }

  TNode<JSTypedArray> tmp2;
  TNode<UintPtrT> tmp3;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    compiler::CodeAssemblerLabel label4(&ca_);
    std::tie(tmp2, tmp3) = EnsureAttachedAndReadLength_0(state_, TNode<JSTypedArray>{tmp0}, &label4).Flatten();
    ca_.Goto(&block7);
    if (label4.is_used()) {
      ca_.Bind(&label4);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kDetachedOperation, kBuiltinNameFilter_0(state_));
  }

  TNode<IntPtrT> tmp5;
  TNode<Object> tmp6;
  TNode<JSReceiver> tmp7;
  if (block7.is_used()) {
    ca_.Bind(&block7);
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
  TNode<FixedArray> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<JSTypedArray> tmp16;
  TNode<JSTypedArray> tmp17;
  TNode<BuiltinPtr> tmp18;
  TNode<UintPtrT> tmp19;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp11 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp12 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp11});
    std::tie(tmp13, tmp14, tmp15) = NewGrowableFixedArray_0(state_).Flatten();
    std::tie(tmp16, tmp17, tmp18) = NewAttachedJSTypedArrayWitness_0(state_, TNode<JSTypedArray>{tmp2}).Flatten();
    tmp19 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block15, tmp13, tmp14, tmp15, tmp17, tmp19);
  }

  TNode<FixedArray> phi_bb15_11;
  TNode<IntPtrT> phi_bb15_12;
  TNode<IntPtrT> phi_bb15_13;
  TNode<JSTypedArray> phi_bb15_15;
  TNode<UintPtrT> phi_bb15_17;
  TNode<BoolT> tmp20;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_11, &phi_bb15_12, &phi_bb15_13, &phi_bb15_15, &phi_bb15_17);
    tmp20 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{phi_bb15_17}, TNode<UintPtrT>{tmp3});
    ca_.Branch(tmp20, &block13, std::vector<compiler::Node*>{phi_bb15_11, phi_bb15_12, phi_bb15_13, phi_bb15_15, phi_bb15_17}, &block14, std::vector<compiler::Node*>{phi_bb15_11, phi_bb15_12, phi_bb15_13, phi_bb15_15, phi_bb15_17});
  }

  TNode<FixedArray> phi_bb13_11;
  TNode<IntPtrT> phi_bb13_12;
  TNode<IntPtrT> phi_bb13_13;
  TNode<JSTypedArray> phi_bb13_15;
  TNode<UintPtrT> phi_bb13_17;
  TNode<UintPtrT> tmp21;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_11, &phi_bb13_12, &phi_bb13_13, &phi_bb13_15, &phi_bb13_17);
    compiler::CodeAssemblerLabel label22(&ca_);
    tmp21 = CodeStubAssembler(state_).LoadJSTypedArrayLengthAndCheckDetached(TNode<JSTypedArray>{tmp16}, &label22);
    ca_.Goto(&block22, phi_bb13_11, phi_bb13_12, phi_bb13_13, phi_bb13_15, phi_bb13_17, phi_bb13_17, phi_bb13_17);
    if (label22.is_used()) {
      ca_.Bind(&label22);
      ca_.Goto(&block23, phi_bb13_11, phi_bb13_12, phi_bb13_13, phi_bb13_15, phi_bb13_17, phi_bb13_17, phi_bb13_17);
    }
  }

  TNode<FixedArray> phi_bb23_11;
  TNode<IntPtrT> phi_bb23_12;
  TNode<IntPtrT> phi_bb23_13;
  TNode<JSTypedArray> phi_bb23_15;
  TNode<UintPtrT> phi_bb23_17;
  TNode<UintPtrT> phi_bb23_19;
  TNode<UintPtrT> phi_bb23_20;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_11, &phi_bb23_12, &phi_bb23_13, &phi_bb23_15, &phi_bb23_17, &phi_bb23_19, &phi_bb23_20);
    ca_.Goto(&block20, phi_bb23_11, phi_bb23_12, phi_bb23_13, phi_bb23_15, phi_bb23_17);
  }

  TNode<FixedArray> phi_bb22_11;
  TNode<IntPtrT> phi_bb22_12;
  TNode<IntPtrT> phi_bb22_13;
  TNode<JSTypedArray> phi_bb22_15;
  TNode<UintPtrT> phi_bb22_17;
  TNode<UintPtrT> phi_bb22_19;
  TNode<UintPtrT> phi_bb22_20;
  TNode<BoolT> tmp23;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_11, &phi_bb22_12, &phi_bb22_13, &phi_bb22_15, &phi_bb22_17, &phi_bb22_19, &phi_bb22_20);
    tmp23 = CodeStubAssembler(state_).UintPtrGreaterThanOrEqual(TNode<UintPtrT>{phi_bb22_20}, TNode<UintPtrT>{tmp21});
    ca_.Branch(tmp23, &block24, std::vector<compiler::Node*>{phi_bb22_11, phi_bb22_12, phi_bb22_13, phi_bb22_15, phi_bb22_17, phi_bb22_19, phi_bb22_20}, &block25, std::vector<compiler::Node*>{phi_bb22_11, phi_bb22_12, phi_bb22_13, phi_bb22_15, phi_bb22_17, phi_bb22_19, phi_bb22_20});
  }

  TNode<FixedArray> phi_bb24_11;
  TNode<IntPtrT> phi_bb24_12;
  TNode<IntPtrT> phi_bb24_13;
  TNode<JSTypedArray> phi_bb24_15;
  TNode<UintPtrT> phi_bb24_17;
  TNode<UintPtrT> phi_bb24_19;
  TNode<UintPtrT> phi_bb24_20;
  if (block24.is_used()) {
    ca_.Bind(&block24, &phi_bb24_11, &phi_bb24_12, &phi_bb24_13, &phi_bb24_15, &phi_bb24_17, &phi_bb24_19, &phi_bb24_20);
    ca_.Goto(&block20, phi_bb24_11, phi_bb24_12, phi_bb24_13, phi_bb24_15, phi_bb24_17);
  }

  TNode<FixedArray> phi_bb25_11;
  TNode<IntPtrT> phi_bb25_12;
  TNode<IntPtrT> phi_bb25_13;
  TNode<JSTypedArray> phi_bb25_15;
  TNode<UintPtrT> phi_bb25_17;
  TNode<UintPtrT> phi_bb25_19;
  TNode<UintPtrT> phi_bb25_20;
  TNode<JSTypedArray> tmp24;
  TNode<Numeric> tmp25;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_11, &phi_bb25_12, &phi_bb25_13, &phi_bb25_15, &phi_bb25_17, &phi_bb25_19, &phi_bb25_20);
    tmp24 = (TNode<JSTypedArray>{tmp16});
tmp25 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(1)).descriptor(), tmp18, TNode<Object>(), tmp24, phi_bb25_17));
    ca_.Goto(&block17, phi_bb25_11, phi_bb25_12, phi_bb25_13, tmp24, phi_bb25_17, tmp25);
  }

  TNode<FixedArray> phi_bb20_11;
  TNode<IntPtrT> phi_bb20_12;
  TNode<IntPtrT> phi_bb20_13;
  TNode<JSTypedArray> phi_bb20_15;
  TNode<UintPtrT> phi_bb20_17;
  TNode<Oddball> tmp26;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_11, &phi_bb20_12, &phi_bb20_13, &phi_bb20_15, &phi_bb20_17);
    tmp26 = Undefined_0(state_);
    ca_.Goto(&block17, phi_bb20_11, phi_bb20_12, phi_bb20_13, phi_bb20_15, phi_bb20_17, tmp26);
  }

  TNode<FixedArray> phi_bb17_11;
  TNode<IntPtrT> phi_bb17_12;
  TNode<IntPtrT> phi_bb17_13;
  TNode<JSTypedArray> phi_bb17_15;
  TNode<UintPtrT> phi_bb17_17;
  TNode<Object> phi_bb17_18;
  TNode<Number> tmp27;
  TNode<Object> tmp28;
  TNode<BoolT> tmp29;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_11, &phi_bb17_12, &phi_bb17_13, &phi_bb17_15, &phi_bb17_17, &phi_bb17_18);
    tmp27 = Convert_Number_uintptr_0(state_, TNode<UintPtrT>{phi_bb17_17});
    tmp28 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<Object>{tmp7}, TNode<Object>{tmp12}, TNode<Object>{phi_bb17_18}, TNode<Object>{tmp27}, TNode<Object>{tmp16});
    tmp29 = ToBoolean_0(state_, TNode<Object>{tmp28});
    ca_.Branch(tmp29, &block28, std::vector<compiler::Node*>{phi_bb17_11, phi_bb17_12, phi_bb17_13, phi_bb17_17}, &block29, std::vector<compiler::Node*>{phi_bb17_11, phi_bb17_12, phi_bb17_13, phi_bb17_17});
  }

  TNode<FixedArray> phi_bb28_11;
  TNode<IntPtrT> phi_bb28_12;
  TNode<IntPtrT> phi_bb28_13;
  TNode<UintPtrT> phi_bb28_17;
  TNode<BoolT> tmp30;
  if (block28.is_used()) {
    ca_.Bind(&block28, &phi_bb28_11, &phi_bb28_12, &phi_bb28_13, &phi_bb28_17);
    tmp30 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb28_12}, TNode<IntPtrT>{phi_bb28_13});
    ca_.Branch(tmp30, &block36, std::vector<compiler::Node*>{phi_bb28_11, phi_bb28_12, phi_bb28_13, phi_bb28_17}, &block37, std::vector<compiler::Node*>{phi_bb28_11, phi_bb28_12, phi_bb28_13, phi_bb28_17});
  }

  TNode<FixedArray> phi_bb36_11;
  TNode<IntPtrT> phi_bb36_12;
  TNode<IntPtrT> phi_bb36_13;
  TNode<UintPtrT> phi_bb36_17;
  TNode<IntPtrT> tmp31;
  TNode<IntPtrT> tmp32;
  TNode<IntPtrT> tmp33;
  TNode<IntPtrT> tmp34;
  TNode<IntPtrT> tmp35;
  TNode<IntPtrT> tmp36;
  TNode<FixedArray> tmp37;
  if (block36.is_used()) {
    ca_.Bind(&block36, &phi_bb36_11, &phi_bb36_12, &phi_bb36_13, &phi_bb36_17);
    tmp31 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp32 = CodeStubAssembler(state_).WordSar(TNode<IntPtrT>{phi_bb36_12}, TNode<IntPtrT>{tmp31});
    tmp33 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb36_12}, TNode<IntPtrT>{tmp32});
    tmp34 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x10ull));
    tmp35 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp33}, TNode<IntPtrT>{tmp34});
    tmp36 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp37 = ExtractFixedArray_0(state_, TNode<FixedArray>{phi_bb36_11}, TNode<IntPtrT>{tmp36}, TNode<IntPtrT>{phi_bb36_13}, TNode<IntPtrT>{tmp35});
    ca_.Goto(&block37, tmp37, tmp35, phi_bb36_13, phi_bb36_17);
  }

  TNode<FixedArray> phi_bb37_11;
  TNode<IntPtrT> phi_bb37_12;
  TNode<IntPtrT> phi_bb37_13;
  TNode<UintPtrT> phi_bb37_17;
  TNode<Object> tmp38;
  TNode<IntPtrT> tmp39;
  TNode<IntPtrT> tmp40;
  TNode<IntPtrT> tmp41;
  TNode<IntPtrT> tmp42;
  TNode<UintPtrT> tmp43;
  TNode<UintPtrT> tmp44;
  TNode<BoolT> tmp45;
  if (block37.is_used()) {
    ca_.Bind(&block37, &phi_bb37_11, &phi_bb37_12, &phi_bb37_13, &phi_bb37_17);
    std::tie(tmp38, tmp39, tmp40) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{phi_bb37_11}).Flatten();
    tmp41 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp42 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb37_13}, TNode<IntPtrT>{tmp41});
    tmp43 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb37_13});
    tmp44 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp40});
    tmp45 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp43}, TNode<UintPtrT>{tmp44});
    ca_.Branch(tmp45, &block55, std::vector<compiler::Node*>{phi_bb37_17, phi_bb37_13, phi_bb37_13, phi_bb37_13, phi_bb37_13}, &block56, std::vector<compiler::Node*>{phi_bb37_17, phi_bb37_13, phi_bb37_13, phi_bb37_13, phi_bb37_13});
  }

  TNode<UintPtrT> phi_bb55_17;
  TNode<IntPtrT> phi_bb55_26;
  TNode<IntPtrT> phi_bb55_27;
  TNode<IntPtrT> phi_bb55_31;
  TNode<IntPtrT> phi_bb55_32;
  TNode<IntPtrT> tmp46;
  TNode<IntPtrT> tmp47;
  TNode<Object> tmp48;
  TNode<IntPtrT> tmp49;
  if (block55.is_used()) {
    ca_.Bind(&block55, &phi_bb55_17, &phi_bb55_26, &phi_bb55_27, &phi_bb55_31, &phi_bb55_32);
    tmp46 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb55_32});
    tmp47 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp39}, TNode<IntPtrT>{tmp46});
    std::tie(tmp48, tmp49) = NewReference_Object_0(state_, TNode<Object>{tmp38}, TNode<IntPtrT>{tmp47}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp48, tmp49}, phi_bb17_18);
    ca_.Goto(&block29, phi_bb37_11, phi_bb37_12, tmp42, phi_bb55_17);
  }

  TNode<UintPtrT> phi_bb56_17;
  TNode<IntPtrT> phi_bb56_26;
  TNode<IntPtrT> phi_bb56_27;
  TNode<IntPtrT> phi_bb56_31;
  TNode<IntPtrT> phi_bb56_32;
  if (block56.is_used()) {
    ca_.Bind(&block56, &phi_bb56_17, &phi_bb56_26, &phi_bb56_27, &phi_bb56_31, &phi_bb56_32);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<FixedArray> phi_bb29_11;
  TNode<IntPtrT> phi_bb29_12;
  TNode<IntPtrT> phi_bb29_13;
  TNode<UintPtrT> phi_bb29_17;
  TNode<UintPtrT> tmp50;
  TNode<UintPtrT> tmp51;
  if (block29.is_used()) {
    ca_.Bind(&block29, &phi_bb29_11, &phi_bb29_12, &phi_bb29_13, &phi_bb29_17);
    tmp50 = FromConstexpr_uintptr_constexpr_int31_0(state_, 1);
    tmp51 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{phi_bb29_17}, TNode<UintPtrT>{tmp50});
    ca_.Goto(&block15, phi_bb29_11, phi_bb29_12, phi_bb29_13, phi_bb17_15, tmp51);
  }

  TNode<FixedArray> phi_bb14_11;
  TNode<IntPtrT> phi_bb14_12;
  TNode<IntPtrT> phi_bb14_13;
  TNode<JSTypedArray> phi_bb14_15;
  TNode<UintPtrT> phi_bb14_17;
  TNode<UintPtrT> tmp52;
  TNode<JSTypedArray> tmp53;
  TNode<UintPtrT> tmp54;
  TNode<Number> tmp55;
  TNode<NativeContext> tmp56;
  TNode<Map> tmp57;
  TNode<IntPtrT> tmp58;
  TNode<FixedArray> tmp59;
  TNode<Smi> tmp60;
  TNode<JSArray> tmp61;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_11, &phi_bb14_12, &phi_bb14_13, &phi_bb14_15, &phi_bb14_17);
    tmp52 = CodeStubAssembler(state_).Unsigned(TNode<IntPtrT>{phi_bb14_13});
    tmp53 = TypedArraySpeciesCreateByLength_0(state_, TNode<Context>{parameter0}, kBuiltinNameFilter_0(state_), TNode<JSTypedArray>{tmp0}, TNode<UintPtrT>{tmp52});
    tmp54 = CodeStubAssembler(state_).Unsigned(TNode<IntPtrT>{phi_bb14_13});
    tmp55 = Convert_Number_uintptr_0(state_, TNode<UintPtrT>{tmp54});
    tmp56 = CodeStubAssembler(state_).LoadNativeContext(TNode<Context>{parameter0});
    tmp57 = CodeStubAssembler(state_).LoadJSArrayElementsMap(ElementsKind::PACKED_ELEMENTS, TNode<NativeContext>{tmp56});
    tmp58 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp59 = ExtractFixedArray_0(state_, TNode<FixedArray>{phi_bb14_11}, TNode<IntPtrT>{tmp58}, TNode<IntPtrT>{phi_bb14_13}, TNode<IntPtrT>{phi_bb14_13});
    tmp60 = Convert_Smi_intptr_0(state_, TNode<IntPtrT>{phi_bb14_13});
    tmp61 = CodeStubAssembler(state_).AllocateJSArray(TNode<Map>{tmp57}, TNode<FixedArrayBase>{tmp59}, TNode<Smi>{tmp60});
    CodeStubAssembler(state_).CallRuntime(Runtime::kTypedArrayCopyElements, parameter0, tmp53, tmp61, tmp55);
    arguments.PopAndReturn(tmp53);
  }
}

} // namespace internal
} // namespace v8
