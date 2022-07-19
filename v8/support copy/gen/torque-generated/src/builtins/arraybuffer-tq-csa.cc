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
#include "torque-generated/src/builtins/arraybuffer-tq-csa.h"
#include "torque-generated/src/builtins/arraybuffer-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/objects/js-array-buffer-tq-csa.h"

namespace v8 {
namespace internal {

TF_BUILTIN(ArrayBufferPrototypeGetByteLength, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSArrayBuffer> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSArrayBuffer_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  TNode<Object> tmp2;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = FromConstexpr_Object_constexpr_string_0(state_, "get ArrayBuffer.prototype.byteLength");
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kIncompatibleMethodReceiver, TNode<Object>{tmp2}, TNode<Object>{parameter1});
  }

  TNode<BoolT> tmp3;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp3 = IsSharedArrayBuffer_0(state_, TNode<JSArrayBuffer>{tmp0});
    ca_.Branch(tmp3, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  TNode<Object> tmp4;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp4 = FromConstexpr_Object_constexpr_string_0(state_, "get ArrayBuffer.prototype.byteLength");
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kIncompatibleMethodReceiver, TNode<Object>{tmp4}, TNode<Object>{parameter1});
  }

  TNode<IntPtrT> tmp5;
  TNode<UintPtrT> tmp6;
  TNode<Number> tmp7;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp5 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp6 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp0, tmp5});
    tmp7 = Convert_Number_uintptr_0(state_, TNode<UintPtrT>{tmp6});
    CodeStubAssembler(state_).Return(tmp7);
  }
}

TF_BUILTIN(ArrayBufferPrototypeGetMaxByteLength, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSArrayBuffer> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSArrayBuffer_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  TNode<Object> tmp2;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = FromConstexpr_Object_constexpr_string_0(state_, "get ArrayBuffer.prototype.maxByteLength");
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kIncompatibleMethodReceiver, TNode<Object>{tmp2}, TNode<Object>{parameter1});
  }

  TNode<BoolT> tmp3;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp3 = IsSharedArrayBuffer_0(state_, TNode<JSArrayBuffer>{tmp0});
    ca_.Branch(tmp3, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  TNode<Object> tmp4;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp4 = FromConstexpr_Object_constexpr_string_0(state_, "get ArrayBuffer.prototype.maxByteLength");
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kIncompatibleMethodReceiver, TNode<Object>{tmp4}, TNode<Object>{parameter1});
  }

  TNode<BoolT> tmp5;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp5 = IsDetachedBuffer_0(state_, TNode<JSArrayBuffer>{tmp0});
    ca_.Branch(tmp5, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  TNode<Number> tmp6;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp6 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    CodeStubAssembler(state_).Return(tmp6);
  }

  TNode<BoolT> tmp7;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp7 = IsResizableArrayBuffer_0(state_, TNode<JSArrayBuffer>{tmp0});
    ca_.Branch(tmp7, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp8;
  TNode<UintPtrT> tmp9;
  TNode<Number> tmp10;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp8 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    tmp9 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp0, tmp8});
    tmp10 = Convert_Number_uintptr_0(state_, TNode<UintPtrT>{tmp9});
    CodeStubAssembler(state_).Return(tmp10);
  }

  TNode<IntPtrT> tmp11;
  TNode<UintPtrT> tmp12;
  TNode<Number> tmp13;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp11 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp12 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp0, tmp11});
    tmp13 = Convert_Number_uintptr_0(state_, TNode<UintPtrT>{tmp12});
    CodeStubAssembler(state_).Return(tmp13);
  }
}

TF_BUILTIN(ArrayBufferPrototypeGetResizable, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSArrayBuffer> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSArrayBuffer_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  TNode<Object> tmp2;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = FromConstexpr_Object_constexpr_string_0(state_, "get ArrayBuffer.prototype.resizable");
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kIncompatibleMethodReceiver, TNode<Object>{tmp2}, TNode<Object>{parameter1});
  }

  TNode<BoolT> tmp3;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp3 = IsSharedArrayBuffer_0(state_, TNode<JSArrayBuffer>{tmp0});
    ca_.Branch(tmp3, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  TNode<Object> tmp4;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp4 = FromConstexpr_Object_constexpr_string_0(state_, "get ArrayBuffer.prototype.resizable");
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kIncompatibleMethodReceiver, TNode<Object>{tmp4}, TNode<Object>{parameter1});
  }

  TNode<BoolT> tmp5;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp5 = IsResizableArrayBuffer_0(state_, TNode<JSArrayBuffer>{tmp0});
    ca_.Branch(tmp5, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  TNode<Oddball> tmp6;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp6 = True_0(state_);
    CodeStubAssembler(state_).Return(tmp6);
  }

  TNode<Oddball> tmp7;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp7 = False_0(state_);
    CodeStubAssembler(state_).Return(tmp7);
  }
}

TF_BUILTIN(SharedArrayBufferPrototypeGetMaxByteLength, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSArrayBuffer> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSArrayBuffer_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  TNode<Object> tmp2;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = FromConstexpr_Object_constexpr_string_0(state_, "get SharedArrayBuffer.prototype.maxByteLength");
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kIncompatibleMethodReceiver, TNode<Object>{tmp2}, TNode<Object>{parameter1});
  }

  TNode<BoolT> tmp3;
  TNode<BoolT> tmp4;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp3 = IsSharedArrayBuffer_0(state_, TNode<JSArrayBuffer>{tmp0});
    tmp4 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp3});
    ca_.Branch(tmp4, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  TNode<Object> tmp5;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp5 = FromConstexpr_Object_constexpr_string_0(state_, "get SharedArrayBuffer.prototype.maxByteLength");
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kIncompatibleMethodReceiver, TNode<Object>{tmp5}, TNode<Object>{parameter1});
  }

  TNode<IntPtrT> tmp6;
  TNode<UintPtrT> tmp7;
  TNode<Number> tmp8;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    tmp7 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp0, tmp6});
    tmp8 = Convert_Number_uintptr_0(state_, TNode<UintPtrT>{tmp7});
    CodeStubAssembler(state_).Return(tmp8);
  }
}

TF_BUILTIN(SharedArrayBufferPrototypeGetGrowable, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSArrayBuffer> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSArrayBuffer_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  TNode<Object> tmp2;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = FromConstexpr_Object_constexpr_string_0(state_, "get SharedArrayBuffer.prototype.growable");
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kIncompatibleMethodReceiver, TNode<Object>{tmp2}, TNode<Object>{parameter1});
  }

  TNode<BoolT> tmp3;
  TNode<BoolT> tmp4;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp3 = IsSharedArrayBuffer_0(state_, TNode<JSArrayBuffer>{tmp0});
    tmp4 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp3});
    ca_.Branch(tmp4, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  TNode<Object> tmp5;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp5 = FromConstexpr_Object_constexpr_string_0(state_, "get SharedArrayBuffer.prototype.growable");
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kIncompatibleMethodReceiver, TNode<Object>{tmp5}, TNode<Object>{parameter1});
  }

  TNode<BoolT> tmp6;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp6 = IsResizableArrayBuffer_0(state_, TNode<JSArrayBuffer>{tmp0});
    ca_.Branch(tmp6, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  TNode<Oddball> tmp7;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp7 = True_0(state_);
    CodeStubAssembler(state_).Return(tmp7);
  }

  TNode<Oddball> tmp8;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp8 = False_0(state_);
    CodeStubAssembler(state_).Return(tmp8);
  }
}

TF_BUILTIN(ArrayBufferIsView, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Object> parameter0 = UncheckedParameter<Object>(Descriptor::kArg);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<HeapObject> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{parameter0}, &label1);
    ca_.Goto(&block4);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block5);
    }
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block2);
  }

  TNode<JSArrayBufferView> tmp2;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_JSArrayBufferView_0(state_, TNode<HeapObject>{tmp0}, &label3);
    ca_.Goto(&block6);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block7);
    }
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    ca_.Goto(&block2);
  }

  TNode<Oddball> tmp4;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp4 = True_0(state_);
    CodeStubAssembler(state_).Return(tmp4);
  }

  TNode<Oddball> tmp5;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp5 = False_0(state_);
    CodeStubAssembler(state_).Return(tmp5);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/arraybuffer.tq?l=13&c=13
TNode<JSArrayBuffer> Cast_JSArrayBuffer_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
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

  TNode<JSArrayBuffer> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_JSArrayBuffer_0(state_, TNode<HeapObject>{tmp0}, &label3);
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
  return TNode<JSArrayBuffer>{tmp2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/arraybuffer.tq?l=129&c=5
TNode<JSArrayBufferView> Cast_JSArrayBufferView_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
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

  TNode<JSArrayBufferView> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_JSArrayBufferView_0(state_, TNode<HeapObject>{tmp0}, &label3);
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
  return TNode<JSArrayBufferView>{tmp2};
}

} // namespace internal
} // namespace v8
