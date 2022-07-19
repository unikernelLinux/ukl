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
#include "torque-generated/src/builtins/array-concat-tq-csa.h"
#include "torque-generated/src/builtins/array-concat-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/frames-tq-csa.h"
#include "torque-generated/src/builtins/frame-arguments-tq-csa.h"
#include "torque-generated/src/objects/js-array-tq-csa.h"

namespace v8 {
namespace internal {

TF_BUILTIN(ArrayPrototypeConcat, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{tmp0});
    ca_.Branch(tmp1, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<JSArray> tmp2;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_FastJSArrayForConcat_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label3);
    ca_.Goto(&block5);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block2);
  }

  TNode<JSArray> tmp4;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp4 = ca_.CallStub<JSArray>(Builtins::CallableFor(ca_.isolate(), Builtin::kCloneFastJSArray), parameter0, tmp2);
    arguments.PopAndReturn(tmp4);
  }

  TNode<JSArray> tmp5;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    compiler::CodeAssemblerLabel label6(&ca_);
    tmp5 = Cast_FastJSArrayForConcat_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label6);
    ca_.Goto(&block9);
    if (label6.is_used()) {
      ca_.Bind(&label6);
      ca_.Goto(&block10);
    }
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    ca_.Goto(&block7);
  }

  TNode<BoolT> tmp7;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp7 = Method_JSArray_IsEmpty_0(state_, TNode<JSArray>{tmp5});
    ca_.Branch(tmp7, &block13, std::vector<compiler::Node*>{}, &block14, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp8;
  TNode<BoolT> tmp9;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp8 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp9 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{tmp8});
    ca_.Goto(&block15, tmp9);
  }

  TNode<BoolT> tmp10;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp10 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block15, tmp10);
  }

  TNode<BoolT> phi_bb15_8;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_8);
    ca_.Branch(phi_bb15_8, &block11, std::vector<compiler::Node*>{}, &block12, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp11;
  TNode<Object> tmp12;
  TNode<JSArray> tmp13;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp11 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp12 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp11});
    compiler::CodeAssemblerLabel label14(&ca_);
    tmp13 = Cast_FastJSArrayForCopy_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp12}, &label14);
    ca_.Goto(&block18);
    if (label14.is_used()) {
      ca_.Bind(&label14);
      ca_.Goto(&block19);
    }
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    ca_.Goto(&block12);
  }

  TNode<JSArray> tmp15;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp15 = ca_.CallStub<JSArray>(Builtins::CallableFor(ca_.isolate(), Builtin::kCloneFastJSArray), parameter0, tmp13);
    arguments.PopAndReturn(tmp15);
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    ca_.Goto(&block7);
  }

  TNode<JSFunction> tmp16;
  TNode<Oddball> tmp17;
  TNode<Int32T> tmp18;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp16 = LoadTargetFromFrame_0(state_);
    tmp17 = Undefined_0(state_);
    tmp18 = Convert_int32_intptr_0(state_, TNode<IntPtrT>{torque_arguments.actual_count});
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kArrayConcat, parameter0, tmp16, tmp17, tmp18);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-concat.tq?l=15&c=7
TNode<JSArray> Cast_FastJSArrayForConcat_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
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
    tmp2 = Cast_FastJSArrayForConcat_0(state_, TNode<Context>{p_context}, TNode<HeapObject>{tmp0}, &label3);
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

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-concat.tq?l=31&c=9
TNode<JSArray> Cast_FastJSArrayForCopy_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
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
    tmp2 = Cast_FastJSArrayForCopy_0(state_, TNode<Context>{p_context}, TNode<HeapObject>{tmp0}, &label3);
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
