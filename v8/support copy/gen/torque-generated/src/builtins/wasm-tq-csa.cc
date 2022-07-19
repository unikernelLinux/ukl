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
#include "torque-generated/src/builtins/wasm-tq-csa.h"
#include "torque-generated/src/builtins/array-join-tq-csa.h"
#include "torque-generated/src/builtins/array-reverse-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/ic-tq-csa.h"
#include "torque-generated/src/builtins/promise-abstract-operations-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/objects/fixed-array-tq-csa.h"
#include "torque-generated/src/objects/foreign-tq-csa.h"
#include "torque-generated/src/objects/js-array-tq-csa.h"
#include "torque-generated/src/objects/js-objects-tq-csa.h"
#include "torque-generated/test/torque/test-torque-tq-csa.h"
#include "torque-generated/src/builtins/wasm-tq-csa.h"
#include "torque-generated/src/wasm/wasm-objects-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=69&c=1
TNode<NativeContext> LoadContextFromFrame_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<NativeContext> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    tmp1 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<NativeContext>{tmp1};
}

TF_BUILTIN(WasmInt32ToHeapNumber, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Int32T> parameter0 = UncheckedParameter<Int32T>(Descriptor::kVal);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Float64T> tmp0;
  TNode<HeapNumber> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Convert_float64_int32_0(state_, TNode<Int32T>{parameter0});
    tmp1 = CodeStubAssembler(state_).AllocateHeapNumberWithValue(TNode<Float64T>{tmp0});
    CodeStubAssembler(state_).Return(tmp1);
  }
}

TF_BUILTIN(WasmFuncRefToJS, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<HeapObject> parameter0 = UncheckedParameter<HeapObject>(Descriptor::kVal);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Oddball> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_Null_0(state_, TNode<HeapObject>{parameter0}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  TNode<IntPtrT> tmp2;
  TNode<HeapObject> tmp3;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp3 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{ca_.UncheckedCast<WasmInternalFunction>(parameter0), tmp2});
    CodeStubAssembler(state_).Return(tmp3);
  }

  TNode<Oddball> tmp4;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp4 = Null_0(state_);
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(WasmTaggedNonSmiToInt32, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<HeapObject> parameter1 = UncheckedParameter<HeapObject>(Descriptor::kVal);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Int32T> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).ChangeTaggedNonSmiToInt32(TNode<Context>{parameter0}, TNode<HeapObject>{parameter1});
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(WasmTaggedToFloat64, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kVal);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Float64T> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).ChangeTaggedToFloat64(TNode<Context>{parameter0}, TNode<Object>{parameter1});
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(WasmMemoryGrow, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Int32T> parameter0 = UncheckedParameter<Int32T>(Descriptor::kNumPages);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<BoolT> tmp1;
  TNode<BoolT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).ChangeInt32ToIntPtr(TNode<Int32T>{parameter0});
    tmp1 = CodeStubAssembler(state_).IsValidPositiveSmi(TNode<IntPtrT>{tmp0});
    tmp2 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp1});
    ca_.Branch(tmp2, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<Int32T> tmp3;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp3 = Int32Constant_0(state_, IntegerLiteral(true, 0x1ull));
    CodeStubAssembler(state_).Return(tmp3);
  }

  TNode<WasmInstanceObject> tmp4;
  TNode<NativeContext> tmp5;
  TNode<Smi> tmp6;
  TNode<Smi> tmp7;
  TNode<Int32T> tmp8;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp4 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    tmp5 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp4});
    tmp6 = CodeStubAssembler(state_).SmiFromInt32(TNode<Int32T>{parameter0});
    tmp7 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kWasmMemoryGrow, tmp5, tmp4, tmp6)); 
    tmp8 = CodeStubAssembler(state_).SmiToInt32(TNode<Smi>{tmp7});
    CodeStubAssembler(state_).Return(tmp8);
  }
}

TF_BUILTIN(WasmTableInit, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Uint32T> parameter0 = UncheckedParameter<Uint32T>(Descriptor::kDstRaw);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kSrcRaw);
  USE(parameter1);
  TNode<Uint32T> parameter2 = UncheckedParameter<Uint32T>(Descriptor::kSizeRaw);
  USE(parameter2);
  TNode<Smi> parameter3 = UncheckedParameter<Smi>(Descriptor::kTableIndex);
  USE(parameter3);
  TNode<Smi> parameter4 = UncheckedParameter<Smi>(Descriptor::kSegmentIndex);
  USE(parameter4);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    compiler::CodeAssemblerLabel label2(&ca_);
    tmp1 = Convert_PositiveSmi_uint32_0(state_, TNode<Uint32T>{parameter0}, &label2);
    ca_.Goto(&block3);
    if (label2.is_used()) {
      ca_.Bind(&label2);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block2);
  }

  TNode<Smi> tmp3;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label4(&ca_);
    tmp3 = Convert_PositiveSmi_uint32_0(state_, TNode<Uint32T>{parameter1}, &label4);
    ca_.Goto(&block5);
    if (label4.is_used()) {
      ca_.Bind(&label4);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block2);
  }

  TNode<Smi> tmp5;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    compiler::CodeAssemblerLabel label6(&ca_);
    tmp5 = Convert_PositiveSmi_uint32_0(state_, TNode<Uint32T>{parameter2}, &label6);
    ca_.Goto(&block7);
    if (label6.is_used()) {
      ca_.Bind(&label6);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block2);
  }

  TNode<NativeContext> tmp7;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp7 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp0});
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmTableInit, tmp7, tmp0, parameter3, parameter4, tmp1, tmp3, tmp5);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kThrowWasmTrapTableOutOfBounds, TNode<Object>());
  }
}

TF_BUILTIN(WasmTableCopy, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Uint32T> parameter0 = UncheckedParameter<Uint32T>(Descriptor::kDstRaw);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kSrcRaw);
  USE(parameter1);
  TNode<Uint32T> parameter2 = UncheckedParameter<Uint32T>(Descriptor::kSizeRaw);
  USE(parameter2);
  TNode<Smi> parameter3 = UncheckedParameter<Smi>(Descriptor::kDstTable);
  USE(parameter3);
  TNode<Smi> parameter4 = UncheckedParameter<Smi>(Descriptor::kSrcTable);
  USE(parameter4);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    compiler::CodeAssemblerLabel label2(&ca_);
    tmp1 = Convert_PositiveSmi_uint32_0(state_, TNode<Uint32T>{parameter0}, &label2);
    ca_.Goto(&block3);
    if (label2.is_used()) {
      ca_.Bind(&label2);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block2);
  }

  TNode<Smi> tmp3;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label4(&ca_);
    tmp3 = Convert_PositiveSmi_uint32_0(state_, TNode<Uint32T>{parameter1}, &label4);
    ca_.Goto(&block5);
    if (label4.is_used()) {
      ca_.Bind(&label4);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block2);
  }

  TNode<Smi> tmp5;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    compiler::CodeAssemblerLabel label6(&ca_);
    tmp5 = Convert_PositiveSmi_uint32_0(state_, TNode<Uint32T>{parameter2}, &label6);
    ca_.Goto(&block7);
    if (label6.is_used()) {
      ca_.Bind(&label6);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block2);
  }

  TNode<NativeContext> tmp7;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp7 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp0});
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmTableCopy, tmp7, tmp0, parameter3, parameter4, tmp1, tmp3, tmp5);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kThrowWasmTrapTableOutOfBounds, TNode<Object>());
  }
}

TF_BUILTIN(WasmTableFill, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Smi> parameter0 = UncheckedParameter<Smi>(Descriptor::kTable);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kStartRaw);
  USE(parameter1);
  TNode<Uint32T> parameter2 = UncheckedParameter<Uint32T>(Descriptor::kCountRaw);
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    compiler::CodeAssemblerLabel label2(&ca_);
    tmp1 = Convert_PositiveSmi_uint32_0(state_, TNode<Uint32T>{parameter1}, &label2);
    ca_.Goto(&block3);
    if (label2.is_used()) {
      ca_.Bind(&label2);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block2);
  }

  TNode<Smi> tmp3;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label4(&ca_);
    tmp3 = Convert_PositiveSmi_uint32_0(state_, TNode<Uint32T>{parameter2}, &label4);
    ca_.Goto(&block5);
    if (label4.is_used()) {
      ca_.Bind(&label4);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block2);
  }

  TNode<NativeContext> tmp5;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp5 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp0});
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmTableFill, tmp5, tmp0, parameter0, tmp1, parameter3, tmp3);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kThrowWasmTrapTableOutOfBounds, TNode<Object>());
  }
}

TF_BUILTIN(WasmTableGrow, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Smi> parameter0 = UncheckedParameter<Smi>(Descriptor::kTable);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kDeltaRaw);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kValue);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    compiler::CodeAssemblerLabel label2(&ca_);
    tmp1 = Convert_PositiveSmi_uint32_0(state_, TNode<Uint32T>{parameter1}, &label2);
    ca_.Goto(&block3);
    if (label2.is_used()) {
      ca_.Bind(&label2);
      ca_.Goto(&block4);
    }
  }

  TNode<Smi> tmp3;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp3 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    CodeStubAssembler(state_).Return(tmp3);
  }

  TNode<NativeContext> tmp4;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp4 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp0});
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmTableGrow, tmp4, tmp0, parameter0, parameter2, tmp1);
  }
}

TF_BUILTIN(WasmTableGet, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<IntPtrT> parameter0 = UncheckedParameter<IntPtrT>(Descriptor::kTableIndex);
  USE(parameter0);
  TNode<Int32T> parameter1 = UncheckedParameter<Int32T>(Descriptor::kIndex);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<BoolT> tmp2;
  TNode<BoolT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    tmp1 = CodeStubAssembler(state_).ChangeInt32ToIntPtr(TNode<Int32T>{parameter1});
    tmp2 = CodeStubAssembler(state_).IsValidPositiveSmi(TNode<IntPtrT>{tmp1});
    tmp3 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp2});
    ca_.Branch(tmp3, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    ca_.Goto(&block2);
  }

  TNode<FixedArray> tmp4;
  TNode<Object> tmp5;
  TNode<WasmTableObject> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Smi> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<BoolT> tmp10;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp4 = WasmBuiltinsAssembler(state_).LoadTablesFromInstance(TNode<WasmInstanceObject>{tmp0});
    tmp5 = CodeStubAssembler(state_).LoadFixedArrayElement(TNode<FixedArray>{tmp4}, TNode<IntPtrT>{parameter0});
    tmp6 = TORQUE_CAST(TNode<Object>{tmp5});
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    tmp8 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp6, tmp7});
    tmp9 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp8});
    tmp10 = CodeStubAssembler(state_).IntPtrGreaterThanOrEqual(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp9});
    ca_.Branch(tmp10, &block11, std::vector<compiler::Node*>{}, &block12, std::vector<compiler::Node*>{});
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    ca_.Goto(&block2);
  }

  TNode<IntPtrT> tmp11;
  TNode<FixedArray> tmp12;
  TNode<Object> tmp13;
  TNode<HeapObject> tmp14;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp11 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp12 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{tmp6, tmp11});
    tmp13 = CodeStubAssembler(state_).LoadFixedArrayElement(TNode<FixedArray>{tmp12}, TNode<IntPtrT>{tmp1});
    compiler::CodeAssemblerLabel label15(&ca_);
    tmp14 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{tmp13}, &label15);
    ca_.Goto(&block15);
    if (label15.is_used()) {
      ca_.Bind(&label15);
      ca_.Goto(&block16);
    }
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    ca_.Goto(&block14);
  }

  TNode<IntPtrT> tmp16;
  TNode<Map> tmp17;
  TNode<BoolT> tmp18;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp16 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp17 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp14, tmp16});
    tmp18 = CodeStubAssembler(state_).IsTuple2Map(TNode<Map>{tmp17});
    ca_.Branch(tmp18, &block17, std::vector<compiler::Node*>{}, &block18, std::vector<compiler::Node*>{});
  }

  TNode<NativeContext> tmp19;
  TNode<Smi> tmp20;
  TNode<Smi> tmp21;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    tmp19 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp0});
    tmp20 = CodeStubAssembler(state_).SmiFromIntPtr(TNode<IntPtrT>{parameter0});
    tmp21 = CodeStubAssembler(state_).SmiFromIntPtr(TNode<IntPtrT>{tmp1});
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmFunctionTableGet, tmp19, tmp0, tmp20, tmp21);
  }

  if (block18.is_used()) {
    ca_.Bind(&block18);
    ca_.Goto(&block14);
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    CodeStubAssembler(state_).Return(tmp13);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kThrowWasmTrapTableOutOfBounds, TNode<Object>());
  }
}

TF_BUILTIN(WasmTableSet, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<IntPtrT> parameter0 = UncheckedParameter<IntPtrT>(Descriptor::kTableIndex);
  USE(parameter0);
  TNode<Int32T> parameter1 = UncheckedParameter<Int32T>(Descriptor::kIndex);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kValue);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<BoolT> tmp2;
  TNode<BoolT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    tmp1 = CodeStubAssembler(state_).ChangeInt32ToIntPtr(TNode<Int32T>{parameter1});
    tmp2 = CodeStubAssembler(state_).IsValidPositiveSmi(TNode<IntPtrT>{tmp1});
    tmp3 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp2});
    ca_.Branch(tmp3, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    ca_.Goto(&block2);
  }

  TNode<FixedArray> tmp4;
  TNode<Object> tmp5;
  TNode<WasmTableObject> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Smi> tmp8;
  TNode<Smi> tmp9;
  TNode<BoolT> tmp10;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp4 = WasmBuiltinsAssembler(state_).LoadTablesFromInstance(TNode<WasmInstanceObject>{tmp0});
    tmp5 = CodeStubAssembler(state_).LoadFixedArrayElement(TNode<FixedArray>{tmp4}, TNode<IntPtrT>{parameter0});
    tmp6 = TORQUE_CAST(TNode<Object>{tmp5});
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 32);
    tmp8 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp6, tmp7});
    tmp9 = CodeStubAssembler(state_).SmiConstant(wasm::kWasmAnyRef.raw_bit_field());
    tmp10 = CodeStubAssembler(state_).SmiNotEqual(TNode<Smi>{tmp8}, TNode<Smi>{tmp9});
    ca_.Branch(tmp10, &block13, std::vector<compiler::Node*>{}, &block14, std::vector<compiler::Node*>{});
  }

  TNode<Smi> tmp11;
  TNode<BoolT> tmp12;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp11 = CodeStubAssembler(state_).SmiConstant(wasm::kWasmAnyNonNullableRef.raw_bit_field());
    tmp12 = CodeStubAssembler(state_).SmiNotEqual(TNode<Smi>{tmp8}, TNode<Smi>{tmp11});
    ca_.Goto(&block15, tmp12);
  }

  TNode<BoolT> tmp13;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp13 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block15, tmp13);
  }

  TNode<BoolT> phi_bb15_9;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_9);
    ca_.Branch(phi_bb15_9, &block11, std::vector<compiler::Node*>{}, &block12, std::vector<compiler::Node*>{});
  }

  TNode<NativeContext> tmp14;
  TNode<Smi> tmp15;
  TNode<Smi> tmp16;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp14 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp0});
    tmp15 = CodeStubAssembler(state_).SmiFromIntPtr(TNode<IntPtrT>{parameter0});
    tmp16 = CodeStubAssembler(state_).SmiFromIntPtr(TNode<IntPtrT>{tmp1});
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmFunctionTableSet, tmp14, tmp0, tmp15, tmp16, parameter2);
  }

  TNode<IntPtrT> tmp17;
  TNode<Smi> tmp18;
  TNode<IntPtrT> tmp19;
  TNode<BoolT> tmp20;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp17 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    tmp18 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp6, tmp17});
    tmp19 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp18});
    tmp20 = CodeStubAssembler(state_).IntPtrGreaterThanOrEqual(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp19});
    ca_.Branch(tmp20, &block16, std::vector<compiler::Node*>{}, &block17, std::vector<compiler::Node*>{});
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    ca_.Goto(&block2);
  }

  TNode<IntPtrT> tmp21;
  TNode<FixedArray> tmp22;
  TNode<Oddball> tmp23;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    tmp21 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp22 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{tmp6, tmp21});
    CodeStubAssembler(state_).StoreFixedArrayElement(TNode<FixedArray>{tmp22}, TNode<IntPtrT>{tmp1}, TNode<Object>{parameter2});
    tmp23 = Undefined_0(state_);
    CodeStubAssembler(state_).Return(tmp23);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kThrowWasmTrapTableOutOfBounds, TNode<Object>());
  }
}

TF_BUILTIN(WasmRefFunc, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Uint32T> parameter0 = UncheckedParameter<Uint32T>(Descriptor::kIndex);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<FixedArray> tmp1;
  TNode<Oddball> tmp2;
  TNode<BoolT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    tmp1 = WasmBuiltinsAssembler(state_).LoadInternalFunctionsFromInstance(TNode<WasmInstanceObject>{tmp0});
    tmp2 = Undefined_0(state_);
    tmp3 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp1}, TNode<HeapObject>{tmp2});
    ca_.Branch(tmp3, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block2);
  }

  TNode<UintPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<Object> tmp6;
  TNode<Oddball> tmp7;
  TNode<BoolT> tmp8;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp4 = CodeStubAssembler(state_).ChangeUint32ToWord(TNode<Uint32T>{parameter0});
    tmp5 = CodeStubAssembler(state_).Signed(TNode<UintPtrT>{tmp4});
    tmp6 = CodeStubAssembler(state_).LoadFixedArrayElement(TNode<FixedArray>{tmp1}, TNode<IntPtrT>{tmp5});
    tmp7 = Undefined_0(state_);
    tmp8 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp6}, TNode<HeapObject>{tmp7});
    ca_.Branch(tmp8, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block2);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    CodeStubAssembler(state_).Return(tmp6);
  }

  TNode<NativeContext> tmp9;
  TNode<Smi> tmp10;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp9 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp0});
    tmp10 = CodeStubAssembler(state_).SmiFromUint32(TNode<Uint32T>{parameter0});
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmRefFunc, tmp9, tmp0, tmp10);
  }
}

TF_BUILTIN(WasmAllocateFixedArray, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<IntPtrT> parameter0 = UncheckedParameter<IntPtrT>(Descriptor::kSize);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{parameter0}, TNode<IntPtrT>{tmp0});
    ca_.Branch(tmp1, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<FixedArray> tmp2;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp2 = kEmptyFixedArray_0(state_);
    CodeStubAssembler(state_).Return(tmp2);
  }

  TNode<FixedArrayBase> tmp3;
  TNode<FixedArray> tmp4;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp3 = CodeStubAssembler(state_).AllocateFixedArray(ElementsKind::PACKED_ELEMENTS, TNode<IntPtrT>{parameter0}, CodeStubAssembler::AllocationFlag::kNone);
    tmp4 = TORQUE_CAST(TNode<Object>{tmp3});
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(WasmThrow, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Object> parameter0 = UncheckedParameter<Object>(Descriptor::kTag);
  USE(parameter0);
  TNode<FixedArray> parameter1 = UncheckedParameter<FixedArray>(Descriptor::kValues);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<NativeContext> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = LoadContextFromFrame_0(state_);
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmThrow, tmp0, parameter0, parameter1);
  }
}

TF_BUILTIN(WasmRethrow, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Object> parameter0 = UncheckedParameter<Object>(Descriptor::kException);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Oddball> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Null_0(state_);
    tmp1 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{parameter0}, TNode<HeapObject>{tmp0});
    ca_.Branch(tmp1, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kThrowWasmTrapRethrowNull, TNode<Object>());
  }

  TNode<NativeContext> tmp2;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp2 = LoadContextFromFrame_0(state_);
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmReThrow, tmp2, parameter0);
  }
}

TF_BUILTIN(WasmRethrowExplicitContext, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Object> parameter0 = UncheckedParameter<Object>(Descriptor::kException);
  USE(parameter0);
  TNode<Context> parameter1 = UncheckedParameter<Context>(Descriptor::kExplicitContext);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Oddball> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Null_0(state_);
    tmp1 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{parameter0}, TNode<HeapObject>{tmp0});
    ca_.Branch(tmp1, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kThrowWasmTrapRethrowNull, TNode<Object>());
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmReThrow, parameter1, parameter0);
  }
}

TF_BUILTIN(WasmTriggerTierUp, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<NativeContext> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    tmp1 = LoadContextFromFrame_0(state_);
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmTriggerTierUp, tmp1, tmp0);
  }
}

TF_BUILTIN(WasmStackGuard, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<NativeContext> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = LoadContextFromFrame_0(state_);
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmStackGuard, tmp0);
  }
}

TF_BUILTIN(WasmStackOverflow, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<NativeContext> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = LoadContextFromFrame_0(state_);
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kThrowWasmStackOverflow, tmp0);
  }
}

TF_BUILTIN(WasmTraceMemory, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Smi> parameter0 = UncheckedParameter<Smi>(Descriptor::kInfo);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<NativeContext> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = LoadContextFromFrame_0(state_);
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmTraceMemory, tmp0, parameter0);
  }
}

TF_BUILTIN(WasmTraceEnter, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<NativeContext> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = LoadContextFromFrame_0(state_);
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmTraceEnter, tmp0);
  }
}

TF_BUILTIN(WasmTraceExit, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Smi> parameter0 = UncheckedParameter<Smi>(Descriptor::kInfo);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<NativeContext> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = LoadContextFromFrame_0(state_);
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmTraceExit, tmp0, parameter0);
  }
}

TF_BUILTIN(WasmAllocateJSArray, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<Smi> parameter1 = UncheckedParameter<Smi>(Descriptor::kSize);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Map> tmp0;
  TNode<JSArray> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = GetFastPackedElementsJSArrayMap_0(state_, TNode<Context>{parameter0});
    tmp1 = CodeStubAssembler(state_).AllocateJSArray(ElementsKind::PACKED_ELEMENTS, TNode<Map>{tmp0}, TNode<Smi>{parameter1}, TNode<Smi>{parameter1});
    CodeStubAssembler(state_).Return(tmp1);
  }
}

TF_BUILTIN(WasmAllocateStructWithRtt, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Map> parameter0 = UncheckedParameter<Map>(Descriptor::kRtt);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<WasmTypeInfo> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<Smi> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<HeapObject> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<WasmStruct> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<FixedArray> tmp12;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    tmp1 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{parameter0, tmp0});
    tmp2 = TORQUE_CAST(TNode<Object>{tmp1});
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    tmp4 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp2, tmp3});
    tmp5 = CodeStubAssembler(state_).SmiUntag(TNode<Smi>{tmp4});
    tmp6 = CodeStubAssembler(state_).Allocate(TNode<IntPtrT>{tmp5}, CodeStubAssembler::AllocationFlag::kAllowLargeObjectAllocation);
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    std::tie(tmp8, tmp9) = UnsafeConstCast_Map_0(state_, TorqueStructReference_Map_0{TNode<Object>{tmp6}, TNode<IntPtrT>{tmp7}, TorqueStructUnsafe_0{}}).Flatten();
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp8, tmp9}, parameter0);
    tmp10 = TORQUE_CAST(TNode<HeapObject>{tmp6});
    tmp11 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp12 = kEmptyFixedArray_0(state_);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp10, tmp11}, tmp12);
    CodeStubAssembler(state_).Return(tmp6);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=316&c=1
TNode<HeapObject> WasmAllocateArray_0(compiler::CodeAssemblerState* state_, TNode<Map> p_rtt, TNode<Uint32T> p_length, TNode<Uint32T> p_elementSize, CodeStubAssembler::InitializationMode p_initializationMode) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<HeapObject> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<WasmArray> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<FixedArray> tmp12;
  TNode<WasmArray> tmp13;
  TNode<IntPtrT> tmp14;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Convert_intptr_uint32_0(state_, TNode<Uint32T>{p_length});
    tmp1 = Convert_intptr_uint32_0(state_, TNode<Uint32T>{p_elementSize});
    tmp2 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp1});
    tmp3 = AlignTagged_0(state_, TNode<IntPtrT>{tmp2});
    tmp4 = Convert_intptr_constexpr_int32_0(state_, WasmArray::kHeaderSize);
    tmp5 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp4});
    tmp6 = CodeStubAssembler(state_).AllocateWasmArray(TNode<IntPtrT>{tmp5}, p_initializationMode);
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    std::tie(tmp8, tmp9) = UnsafeConstCast_Map_0(state_, TorqueStructReference_Map_0{TNode<Object>{tmp6}, TNode<IntPtrT>{tmp7}, TorqueStructUnsafe_0{}}).Flatten();
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp8, tmp9}, p_rtt);
    tmp10 = TORQUE_CAST(TNode<HeapObject>{tmp6});
    tmp11 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp12 = kEmptyFixedArray_0(state_);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp10, tmp11}, tmp12);
    tmp13 = TORQUE_CAST(TNode<HeapObject>{tmp6});
    tmp14 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<Uint32T>(CodeStubAssembler::Reference{tmp13, tmp14}, p_length);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<HeapObject>{tmp6};
}

TF_BUILTIN(WasmAllocateArray_Uninitialized, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Map> parameter0 = UncheckedParameter<Map>(Descriptor::kRtt);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kLength);
  USE(parameter1);
  TNode<Uint32T> parameter2 = UncheckedParameter<Uint32T>(Descriptor::kElementSize);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<HeapObject> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmAllocateArray_0(state_, TNode<Map>{parameter0}, TNode<Uint32T>{parameter1}, TNode<Uint32T>{parameter2}, CodeStubAssembler::InitializationMode::kUninitialized);
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(WasmAllocateArray_InitZero, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Map> parameter0 = UncheckedParameter<Map>(Descriptor::kRtt);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kLength);
  USE(parameter1);
  TNode<Uint32T> parameter2 = UncheckedParameter<Uint32T>(Descriptor::kElementSize);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<HeapObject> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmAllocateArray_0(state_, TNode<Map>{parameter0}, TNode<Uint32T>{parameter1}, TNode<Uint32T>{parameter2}, CodeStubAssembler::InitializationMode::kInitializeToZero);
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(WasmAllocateArray_InitNull, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Map> parameter0 = UncheckedParameter<Map>(Descriptor::kRtt);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kLength);
  USE(parameter1);
  TNode<Uint32T> parameter2 = UncheckedParameter<Uint32T>(Descriptor::kElementSize);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<HeapObject> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmAllocateArray_0(state_, TNode<Map>{parameter0}, TNode<Uint32T>{parameter1}, TNode<Uint32T>{parameter2}, CodeStubAssembler::InitializationMode::kInitializeToNull);
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(WasmArrayInitFromData, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Uint32T> parameter0 = UncheckedParameter<Uint32T>(Descriptor::kDataSegment);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kOffset);
  USE(parameter1);
  TNode<Uint32T> parameter2 = UncheckedParameter<Uint32T>(Descriptor::kLength);
  USE(parameter2);
  TNode<Map> parameter3 = UncheckedParameter<Map>(Descriptor::kRtt);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<NativeContext> tmp1;
  TNode<Smi> tmp2;
  TNode<Smi> tmp3;
  TNode<Smi> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    tmp1 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp0});
    tmp2 = CodeStubAssembler(state_).SmiFromUint32(TNode<Uint32T>{parameter0});
    tmp3 = CodeStubAssembler(state_).SmiFromUint32(TNode<Uint32T>{parameter1});
    tmp4 = CodeStubAssembler(state_).SmiFromUint32(TNode<Uint32T>{parameter2});
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmArrayInitFromData, tmp1, tmp0, tmp2, tmp3, tmp4, parameter3);
  }
}

TF_BUILTIN(WasmArrayCopyWithChecks, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Uint32T> parameter0 = UncheckedParameter<Uint32T>(Descriptor::kDstIndex);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kSrcIndex);
  USE(parameter1);
  TNode<Uint32T> parameter2 = UncheckedParameter<Uint32T>(Descriptor::kLength);
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kDstObject);
  USE(parameter3);
  TNode<Object> parameter4 = UncheckedParameter<Object>(Descriptor::kSrcObject);
  USE(parameter4);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Oddball> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Null_0(state_);
    tmp1 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{parameter3}, TNode<HeapObject>{tmp0});
    ca_.Branch(tmp1, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kThrowWasmTrapNullDereference, TNode<Object>());
  }

  TNode<Oddball> tmp2;
  TNode<BoolT> tmp3;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp2 = Null_0(state_);
    tmp3 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{parameter4}, TNode<HeapObject>{tmp2});
    ca_.Branch(tmp3, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kThrowWasmTrapNullDereference, TNode<Object>());
  }

  TNode<WasmArray> tmp4;
  TNode<WasmArray> tmp5;
  TNode<Uint32T> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Uint32T> tmp8;
  TNode<BoolT> tmp9;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp4 = TORQUE_CAST(TNode<Object>{parameter3});
    tmp5 = TORQUE_CAST(TNode<Object>{parameter4});
    tmp6 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{parameter0}, TNode<Uint32T>{parameter2});
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp8 = CodeStubAssembler(state_).LoadReference<Uint32T>(CodeStubAssembler::Reference{tmp4, tmp7});
    tmp9 = CodeStubAssembler(state_).Uint32GreaterThan(TNode<Uint32T>{tmp6}, TNode<Uint32T>{tmp8});
    ca_.Branch(tmp9, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp10;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp10 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block9, tmp10);
  }

  TNode<Uint32T> tmp11;
  TNode<BoolT> tmp12;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp11 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{parameter0}, TNode<Uint32T>{parameter2});
    tmp12 = CodeStubAssembler(state_).Uint32LessThan(TNode<Uint32T>{tmp11}, TNode<Uint32T>{parameter0});
    ca_.Goto(&block9, tmp12);
  }

  TNode<BoolT> phi_bb9_8;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_8);
    ca_.Branch(phi_bb9_8, &block10, std::vector<compiler::Node*>{}, &block11, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp13;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp13 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block12, tmp13);
  }

  TNode<Uint32T> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<Uint32T> tmp16;
  TNode<BoolT> tmp17;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp14 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{parameter1}, TNode<Uint32T>{parameter2});
    tmp15 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp16 = CodeStubAssembler(state_).LoadReference<Uint32T>(CodeStubAssembler::Reference{tmp5, tmp15});
    tmp17 = CodeStubAssembler(state_).Uint32GreaterThan(TNode<Uint32T>{tmp14}, TNode<Uint32T>{tmp16});
    ca_.Goto(&block12, tmp17);
  }

  TNode<BoolT> phi_bb12_8;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_8);
    ca_.Branch(phi_bb12_8, &block13, std::vector<compiler::Node*>{}, &block14, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp18;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp18 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block15, tmp18);
  }

  TNode<Uint32T> tmp19;
  TNode<BoolT> tmp20;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp19 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{parameter1}, TNode<Uint32T>{parameter2});
    tmp20 = CodeStubAssembler(state_).Uint32LessThan(TNode<Uint32T>{tmp19}, TNode<Uint32T>{parameter1});
    ca_.Goto(&block15, tmp20);
  }

  TNode<BoolT> phi_bb15_8;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_8);
    ca_.Branch(phi_bb15_8, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kThrowWasmTrapArrayOutOfBounds, TNode<Object>());
  }

  TNode<Uint32T> tmp21;
  TNode<BoolT> tmp22;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp21 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp22 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{parameter2}, TNode<Uint32T>{tmp21});
    ca_.Branch(tmp22, &block16, std::vector<compiler::Node*>{}, &block17, std::vector<compiler::Node*>{});
  }

  TNode<Oddball> tmp23;
  if (block16.is_used()) {
    ca_.Bind(&block16);
    tmp23 = Undefined_0(state_);
    CodeStubAssembler(state_).Return(tmp23);
  }

  TNode<NativeContext> tmp24;
  TNode<Smi> tmp25;
  TNode<Smi> tmp26;
  TNode<Smi> tmp27;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    tmp24 = LoadContextFromFrame_0(state_);
    tmp25 = CodeStubAssembler(state_).SmiFromUint32(TNode<Uint32T>{parameter0});
    tmp26 = CodeStubAssembler(state_).SmiFromUint32(TNode<Uint32T>{parameter1});
    tmp27 = CodeStubAssembler(state_).SmiFromUint32(TNode<Uint32T>{parameter2});
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmArrayCopy, tmp24, tmp4, tmp25, tmp5, tmp26, tmp27);
  }
}

TF_BUILTIN(WasmArrayCopy, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Uint32T> parameter0 = UncheckedParameter<Uint32T>(Descriptor::kDstIndex);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kSrcIndex);
  USE(parameter1);
  TNode<Uint32T> parameter2 = UncheckedParameter<Uint32T>(Descriptor::kLength);
  USE(parameter2);
  TNode<WasmArray> parameter3 = UncheckedParameter<WasmArray>(Descriptor::kDstArray);
  USE(parameter3);
  TNode<WasmArray> parameter4 = UncheckedParameter<WasmArray>(Descriptor::kSrcArray);
  USE(parameter4);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{parameter2}, TNode<Uint32T>{tmp0});
    ca_.Branch(tmp1, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<Oddball> tmp2;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp2 = Undefined_0(state_);
    CodeStubAssembler(state_).Return(tmp2);
  }

  TNode<NativeContext> tmp3;
  TNode<Smi> tmp4;
  TNode<Smi> tmp5;
  TNode<Smi> tmp6;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp3 = LoadContextFromFrame_0(state_);
    tmp4 = CodeStubAssembler(state_).SmiFromUint32(TNode<Uint32T>{parameter0});
    tmp5 = CodeStubAssembler(state_).SmiFromUint32(TNode<Uint32T>{parameter1});
    tmp6 = CodeStubAssembler(state_).SmiFromUint32(TNode<Uint32T>{parameter2});
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmArrayCopy, tmp3, parameter3, tmp4, parameter4, tmp5, tmp6);
  }
}

TF_BUILTIN(WasmAllocateObjectWrapper, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kObj);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSObject> tmp0;
  TNode<Symbol> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = NewJSObject_0(state_, TNode<Context>{parameter0});
    tmp1 = CodeStubAssembler(state_).WasmWrappedObjectSymbolConstant();
    CodeStubAssembler(state_).CallRuntime(Runtime::kCreateDataProperty, parameter0, tmp0, tmp1, parameter1);
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(WasmSubtypeCheck, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<FixedArray> parameter0 = UncheckedParameter<FixedArray>(Descriptor::kObjectSupertypes);
  USE(parameter0);
  TNode<Map> parameter1 = UncheckedParameter<Map>(Descriptor::kRtt);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<WasmTypeInfo> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<FixedArray> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<Smi> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Smi> tmp8;
  TNode<BoolT> tmp9;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    tmp1 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{parameter1, tmp0});
    tmp2 = TORQUE_CAST(TNode<Object>{tmp1});
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp4 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{tmp2, tmp3});
    tmp5 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp6 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp4, tmp5});
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp8 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{parameter0, tmp7});
    tmp9 = CodeStubAssembler(state_).SmiLessThanOrEqual(TNode<Smi>{tmp8}, TNode<Smi>{tmp6});
    ca_.Branch(tmp9, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<Int32T> tmp10;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp10 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    CodeStubAssembler(state_).Return(tmp10);
  }

  TNode<Object> tmp11;
  TNode<Map> tmp12;
  TNode<BoolT> tmp13;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp11 = CodeStubAssembler(state_).LoadFixedArrayElement(TNode<FixedArray>{parameter0}, TNode<Smi>{tmp6});
    tmp12 = TORQUE_CAST(TNode<Object>{tmp11});
    tmp13 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp12}, TNode<HeapObject>{parameter1});
    ca_.Branch(tmp13, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  TNode<Int32T> tmp14;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp14 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    CodeStubAssembler(state_).Return(tmp14);
  }

  TNode<Int32T> tmp15;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp15 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    CodeStubAssembler(state_).Return(tmp15);
  }
}

TF_BUILTIN(WasmInt32ToNumber, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Int32T> parameter0 = UncheckedParameter<Int32T>(Descriptor::kValue);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Number> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).ChangeInt32ToTagged(TNode<Int32T>{parameter0});
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(WasmUint32ToNumber, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Uint32T> parameter0 = UncheckedParameter<Uint32T>(Descriptor::kValue);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Number> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).ChangeUint32ToTagged(TNode<Uint32T>{parameter0});
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(UintPtr53ToNumber, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<UintPtrT> parameter0 = UncheckedParameter<UintPtrT>(Descriptor::kValue);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<UintPtrT> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_uintptr_constexpr_uintptr_0(state_, kSmiMaxValue);
    tmp1 = CodeStubAssembler(state_).UintPtrLessThanOrEqual(TNode<UintPtrT>{parameter0}, TNode<UintPtrT>{tmp0});
    ca_.Branch(tmp1, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp2;
  TNode<Smi> tmp3;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp2 = Convert_intptr_uintptr_0(state_, TNode<UintPtrT>{parameter0});
    tmp3 = Convert_Smi_intptr_0(state_, TNode<IntPtrT>{tmp2});
    CodeStubAssembler(state_).Return(tmp3);
  }

  TNode<Float64T> tmp4;
  TNode<HeapNumber> tmp5;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp4 = CodeStubAssembler(state_).ChangeUintPtrToFloat64(TNode<UintPtrT>{parameter0});
    tmp5 = CodeStubAssembler(state_).AllocateHeapNumberWithValue(TNode<Float64T>{tmp4});
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TF_BUILTIN(WasmAtomicNotify, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<UintPtrT> parameter0 = UncheckedParameter<UintPtrT>(Descriptor::kOffset);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kCount);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<NativeContext> tmp1;
  TNode<Number> tmp2;
  TNode<Number> tmp3;
  TNode<Smi> tmp4;
  TNode<Int32T> tmp5;
  TNode<Uint32T> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    tmp1 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp0});
    tmp2 = ca_.CallStub<Number>(Builtins::CallableFor(ca_.isolate(), Builtin::kUintPtr53ToNumber), TNode<Object>(), parameter0);
    tmp3 = ca_.CallStub<Number>(Builtins::CallableFor(ca_.isolate(), Builtin::kWasmUint32ToNumber), TNode<Object>(), parameter1);
    tmp4 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kWasmAtomicNotify, tmp1, tmp0, tmp2, tmp3)); 
    tmp5 = CodeStubAssembler(state_).SmiToInt32(TNode<Smi>{tmp4});
    tmp6 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp5});
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(WasmI32AtomicWait64, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<UintPtrT> parameter0 = UncheckedParameter<UintPtrT>(Descriptor::kOffset);
  USE(parameter0);
  TNode<Int32T> parameter1 = UncheckedParameter<Int32T>(Descriptor::kExpectedValue);
  USE(parameter1);
  TNode<IntPtrT> parameter2 = UncheckedParameter<IntPtrT>(Descriptor::kTimeout);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block1);
    } else {
      ca_.Goto(&block2);
    }
  }

  TNode<WasmInstanceObject> tmp0;
  TNode<NativeContext> tmp1;
  TNode<Number> tmp2;
  TNode<Number> tmp3;
  TNode<BigInt> tmp4;
  TNode<Smi> tmp5;
  TNode<Int32T> tmp6;
  TNode<Uint32T> tmp7;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    tmp1 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp0});
    tmp2 = ca_.CallStub<Number>(Builtins::CallableFor(ca_.isolate(), Builtin::kUintPtr53ToNumber), TNode<Object>(), parameter0);
    tmp3 = ca_.CallStub<Number>(Builtins::CallableFor(ca_.isolate(), Builtin::kWasmInt32ToNumber), TNode<Object>(), parameter1);
    tmp4 = ca_.CallStub<BigInt>(Builtins::CallableFor(ca_.isolate(), Builtin::kI64ToBigInt), TNode<Object>(), parameter2);
    tmp5 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kWasmI32AtomicWait, tmp1, tmp0, tmp2, tmp3, tmp4)); 
    tmp6 = CodeStubAssembler(state_).SmiToInt32(TNode<Smi>{tmp5});
    tmp7 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp6});
    CodeStubAssembler(state_).Return(tmp7);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    CodeStubAssembler(state_).Unreachable();
  }
}

TF_BUILTIN(WasmI64AtomicWait64, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<UintPtrT> parameter0 = UncheckedParameter<UintPtrT>(Descriptor::kOffset);
  USE(parameter0);
  TNode<IntPtrT> parameter1 = UncheckedParameter<IntPtrT>(Descriptor::kExpectedValue);
  USE(parameter1);
  TNode<IntPtrT> parameter2 = UncheckedParameter<IntPtrT>(Descriptor::kTimeout);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block1);
    } else {
      ca_.Goto(&block2);
    }
  }

  TNode<WasmInstanceObject> tmp0;
  TNode<NativeContext> tmp1;
  TNode<Number> tmp2;
  TNode<BigInt> tmp3;
  TNode<BigInt> tmp4;
  TNode<Smi> tmp5;
  TNode<Int32T> tmp6;
  TNode<Uint32T> tmp7;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    tmp1 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp0});
    tmp2 = ca_.CallStub<Number>(Builtins::CallableFor(ca_.isolate(), Builtin::kUintPtr53ToNumber), TNode<Object>(), parameter0);
    tmp3 = ca_.CallStub<BigInt>(Builtins::CallableFor(ca_.isolate(), Builtin::kI64ToBigInt), TNode<Object>(), parameter1);
    tmp4 = ca_.CallStub<BigInt>(Builtins::CallableFor(ca_.isolate(), Builtin::kI64ToBigInt), TNode<Object>(), parameter2);
    tmp5 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kWasmI64AtomicWait, tmp1, tmp0, tmp2, tmp3, tmp4)); 
    tmp6 = CodeStubAssembler(state_).SmiToInt32(TNode<Smi>{tmp5});
    tmp7 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp6});
    CodeStubAssembler(state_).Return(tmp7);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    CodeStubAssembler(state_).Unreachable();
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=483&c=1
TorqueStructTargetAndInstance_0 GetTargetAndInstance_0(compiler::CodeAssemblerState* state_, TNode<WasmInternalFunction> p_funcref) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<HeapObject> tmp1;
  TNode<RawPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp1 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{p_funcref, tmp0});
    tmp2 = CodeStubAssembler(state_).LoadForeignForeignAddressPtr(TNode<Foreign>{p_funcref});
    tmp3 = CodeStubAssembler(state_).Signed(TNode<RawPtrT>{tmp2});
    tmp4 = IntPtrConstant_0(state_, IntegerLiteral(false, 0x0ull));
    tmp5 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp4});
    ca_.Branch(tmp5, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{tmp2});
  }

  TNode<IntPtrT> tmp6;
  TNode<CodeDataContainer> tmp7;
  TNode<RawPtrT> tmp8;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    tmp7 = CodeStubAssembler(state_).LoadReference<CodeDataContainer>(CodeStubAssembler::Reference{p_funcref, tmp6});
    tmp8 = CodeStubAssembler(state_).GetCodeEntry(TNode<CodeDataContainer>{tmp7});
    ca_.Goto(&block3, tmp8);
  }

  TNode<RawPtrT> phi_bb3_2;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_2);
    ca_.Goto(&block4);
  }

    ca_.Bind(&block4);
  return TorqueStructTargetAndInstance_0{TNode<RawPtrT>{phi_bb3_2}, TNode<HeapObject>{tmp1}};
}

TF_BUILTIN(CallRefIC, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<FixedArray> parameter0 = UncheckedParameter<FixedArray>(Descriptor::kVector);
  USE(parameter0);
  TNode<IntPtrT> parameter1 = UncheckedParameter<IntPtrT>(Descriptor::kIndex);
  USE(parameter1);
  TNode<WasmInternalFunction> parameter2 = UncheckedParameter<WasmInternalFunction>(Descriptor::kFuncref);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block70(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block71(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block78(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block79(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block96(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block97(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block65(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block100(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block107(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block108(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block115(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block116(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block101(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block126(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block125(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block128(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block127(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block123(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block121(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block119(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block143(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block150(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block151(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block158(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block159(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block144(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block177(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block175(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block183(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block184(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block191(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block192(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block176(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block199(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block200(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block207(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block208(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block215(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block216(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block145(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block120(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block226(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block225(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block228(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block227(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block223(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block221(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block219(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block247(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block248(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block256(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block257(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block264(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block265(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block273(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block274(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block282(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block283(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block290(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block291(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block298(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block299(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block220(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block129(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block102(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<UintPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter0}).Flatten();
    tmp3 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{parameter1});
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Object> tmp10;
  TNode<BoolT> tmp11;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp6 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{parameter1});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_Object_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    tmp10 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp8, tmp9});
    tmp11 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp10}, TNode<HeapObject>{parameter2});
    ca_.Branch(tmp11, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Object> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<IntPtrT> tmp16;
  TNode<UintPtrT> tmp17;
  TNode<UintPtrT> tmp18;
  TNode<BoolT> tmp19;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    std::tie(tmp12, tmp13, tmp14) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter0}).Flatten();
    tmp15 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp16 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{parameter1}, TNode<IntPtrT>{tmp15});
    tmp17 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp16});
    tmp18 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp14});
    tmp19 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp17}, TNode<UintPtrT>{tmp18});
    ca_.Branch(tmp19, &block15, std::vector<compiler::Node*>{}, &block16, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<Object> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<Object> tmp24;
  TNode<Smi> tmp25;
  TNode<Smi> tmp26;
  TNode<Smi> tmp27;
  TNode<Object> tmp28;
  TNode<IntPtrT> tmp29;
  TNode<IntPtrT> tmp30;
  TNode<IntPtrT> tmp31;
  TNode<IntPtrT> tmp32;
  TNode<UintPtrT> tmp33;
  TNode<UintPtrT> tmp34;
  TNode<BoolT> tmp35;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp20 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp16});
    tmp21 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp13}, TNode<IntPtrT>{tmp20});
    std::tie(tmp22, tmp23) = NewReference_Object_0(state_, TNode<Object>{tmp12}, TNode<IntPtrT>{tmp21}).Flatten();
    tmp24 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp22, tmp23});
    tmp25 = TORQUE_CAST(TNode<Object>{tmp24});
    tmp26 = SmiConstant_0(state_, IntegerLiteral(false, 0x1ull));
    tmp27 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp25}, TNode<Smi>{tmp26});
    std::tie(tmp28, tmp29, tmp30) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter0}).Flatten();
    tmp31 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp32 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{parameter1}, TNode<IntPtrT>{tmp31});
    tmp33 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp32});
    tmp34 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp30});
    tmp35 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp33}, TNode<UintPtrT>{tmp34});
    ca_.Branch(tmp35, &block33, std::vector<compiler::Node*>{}, &block34, std::vector<compiler::Node*>{});
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp36;
  TNode<IntPtrT> tmp37;
  TNode<Object> tmp38;
  TNode<IntPtrT> tmp39;
  TNode<RawPtrT> tmp40;
  TNode<HeapObject> tmp41;
  if (block33.is_used()) {
    ca_.Bind(&block33);
    tmp36 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp32});
    tmp37 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp29}, TNode<IntPtrT>{tmp36});
    std::tie(tmp38, tmp39) = NewReference_Object_0(state_, TNode<Object>{tmp28}, TNode<IntPtrT>{tmp37}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp38, tmp39}, tmp27);
    std::tie(tmp40, tmp41) = GetTargetAndInstance_0(state_, TNode<WasmInternalFunction>{parameter2}).Flatten();
    CodeStubAssembler(state_).Return(tmp40, tmp41);
  }

  if (block34.is_used()) {
    ca_.Bind(&block34);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<HeapObject> tmp42;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    compiler::CodeAssemblerLabel label43(&ca_);
    tmp42 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{tmp10}, &label43);
    ca_.Goto(&block43);
    if (label43.is_used()) {
      ca_.Bind(&label43);
      ca_.Goto(&block44);
    }
  }

  if (block44.is_used()) {
    ca_.Bind(&block44);
    ca_.Goto(&block41);
  }

  TNode<FixedArray> tmp44;
  if (block43.is_used()) {
    ca_.Bind(&block43);
    compiler::CodeAssemblerLabel label45(&ca_);
    tmp44 = Cast_FixedArray_0(state_, TNode<HeapObject>{tmp42}, &label45);
    ca_.Goto(&block45);
    if (label45.is_used()) {
      ca_.Bind(&label45);
      ca_.Goto(&block46);
    }
  }

  if (block46.is_used()) {
    ca_.Bind(&block46);
    ca_.Goto(&block41);
  }

  TNode<BoolT> tmp46;
  if (block45.is_used()) {
    ca_.Bind(&block45);
    tmp46 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block39, tmp46);
  }

  TNode<BoolT> tmp47;
  if (block41.is_used()) {
    ca_.Bind(&block41);
    tmp47 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block39, tmp47);
  }

  TNode<BoolT> phi_bb39_6;
  if (block39.is_used()) {
    ca_.Bind(&block39, &phi_bb39_6);
    ca_.Branch(phi_bb39_6, &block37, std::vector<compiler::Node*>{}, &block38, std::vector<compiler::Node*>{});
  }

  TNode<FixedArray> tmp48;
  TNode<IntPtrT> tmp49;
  if (block37.is_used()) {
    ca_.Bind(&block37);
    tmp48 = TORQUE_CAST(TNode<Object>{tmp10});
    tmp49 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block62, tmp49);
  }

  TNode<IntPtrT> phi_bb62_5;
  TNode<IntPtrT> tmp50;
  TNode<BoolT> tmp51;
  if (block62.is_used()) {
    ca_.Bind(&block62, &phi_bb62_5);
    tmp50 = CodeStubAssembler(state_).LoadAndUntagFixedArrayBaseLength(TNode<FixedArrayBase>{tmp48});
    tmp51 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{phi_bb62_5}, TNode<IntPtrT>{tmp50});
    ca_.Branch(tmp51, &block60, std::vector<compiler::Node*>{phi_bb62_5}, &block61, std::vector<compiler::Node*>{phi_bb62_5});
  }

  TNode<IntPtrT> phi_bb60_5;
  TNode<Object> tmp52;
  TNode<IntPtrT> tmp53;
  TNode<IntPtrT> tmp54;
  TNode<UintPtrT> tmp55;
  TNode<UintPtrT> tmp56;
  TNode<BoolT> tmp57;
  if (block60.is_used()) {
    ca_.Bind(&block60, &phi_bb60_5);
    std::tie(tmp52, tmp53, tmp54) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp48}).Flatten();
    tmp55 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb60_5});
    tmp56 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp54});
    tmp57 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp55}, TNode<UintPtrT>{tmp56});
    ca_.Branch(tmp57, &block70, std::vector<compiler::Node*>{phi_bb60_5, phi_bb60_5, phi_bb60_5, phi_bb60_5, phi_bb60_5}, &block71, std::vector<compiler::Node*>{phi_bb60_5, phi_bb60_5, phi_bb60_5, phi_bb60_5, phi_bb60_5});
  }

  TNode<IntPtrT> phi_bb70_5;
  TNode<IntPtrT> phi_bb70_10;
  TNode<IntPtrT> phi_bb70_11;
  TNode<IntPtrT> phi_bb70_15;
  TNode<IntPtrT> phi_bb70_16;
  TNode<IntPtrT> tmp58;
  TNode<IntPtrT> tmp59;
  TNode<Object> tmp60;
  TNode<IntPtrT> tmp61;
  TNode<Object> tmp62;
  TNode<BoolT> tmp63;
  if (block70.is_used()) {
    ca_.Bind(&block70, &phi_bb70_5, &phi_bb70_10, &phi_bb70_11, &phi_bb70_15, &phi_bb70_16);
    tmp58 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb70_16});
    tmp59 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp53}, TNode<IntPtrT>{tmp58});
    std::tie(tmp60, tmp61) = NewReference_Object_0(state_, TNode<Object>{tmp52}, TNode<IntPtrT>{tmp59}).Flatten();
    tmp62 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp60, tmp61});
    tmp63 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp62}, TNode<HeapObject>{parameter2});
    ca_.Branch(tmp63, &block64, std::vector<compiler::Node*>{phi_bb70_5}, &block65, std::vector<compiler::Node*>{phi_bb70_5});
  }

  TNode<IntPtrT> phi_bb71_5;
  TNode<IntPtrT> phi_bb71_10;
  TNode<IntPtrT> phi_bb71_11;
  TNode<IntPtrT> phi_bb71_15;
  TNode<IntPtrT> phi_bb71_16;
  if (block71.is_used()) {
    ca_.Bind(&block71, &phi_bb71_5, &phi_bb71_10, &phi_bb71_11, &phi_bb71_15, &phi_bb71_16);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb64_5;
  TNode<Object> tmp64;
  TNode<IntPtrT> tmp65;
  TNode<IntPtrT> tmp66;
  TNode<IntPtrT> tmp67;
  TNode<IntPtrT> tmp68;
  TNode<UintPtrT> tmp69;
  TNode<UintPtrT> tmp70;
  TNode<BoolT> tmp71;
  if (block64.is_used()) {
    ca_.Bind(&block64, &phi_bb64_5);
    std::tie(tmp64, tmp65, tmp66) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp48}).Flatten();
    tmp67 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp68 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb64_5}, TNode<IntPtrT>{tmp67});
    tmp69 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp68});
    tmp70 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp66});
    tmp71 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp69}, TNode<UintPtrT>{tmp70});
    ca_.Branch(tmp71, &block78, std::vector<compiler::Node*>{phi_bb64_5}, &block79, std::vector<compiler::Node*>{phi_bb64_5});
  }

  TNode<IntPtrT> phi_bb78_5;
  TNode<IntPtrT> tmp72;
  TNode<IntPtrT> tmp73;
  TNode<Object> tmp74;
  TNode<IntPtrT> tmp75;
  TNode<Object> tmp76;
  TNode<Smi> tmp77;
  TNode<Smi> tmp78;
  TNode<Smi> tmp79;
  TNode<Object> tmp80;
  TNode<IntPtrT> tmp81;
  TNode<IntPtrT> tmp82;
  TNode<IntPtrT> tmp83;
  TNode<IntPtrT> tmp84;
  TNode<UintPtrT> tmp85;
  TNode<UintPtrT> tmp86;
  TNode<BoolT> tmp87;
  if (block78.is_used()) {
    ca_.Bind(&block78, &phi_bb78_5);
    tmp72 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp68});
    tmp73 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp65}, TNode<IntPtrT>{tmp72});
    std::tie(tmp74, tmp75) = NewReference_Object_0(state_, TNode<Object>{tmp64}, TNode<IntPtrT>{tmp73}).Flatten();
    tmp76 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp74, tmp75});
    tmp77 = TORQUE_CAST(TNode<Object>{tmp76});
    tmp78 = SmiConstant_0(state_, IntegerLiteral(false, 0x1ull));
    tmp79 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp77}, TNode<Smi>{tmp78});
    std::tie(tmp80, tmp81, tmp82) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp48}).Flatten();
    tmp83 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp84 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb78_5}, TNode<IntPtrT>{tmp83});
    tmp85 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp84});
    tmp86 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp82});
    tmp87 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp85}, TNode<UintPtrT>{tmp86});
    ca_.Branch(tmp87, &block96, std::vector<compiler::Node*>{phi_bb78_5}, &block97, std::vector<compiler::Node*>{phi_bb78_5});
  }

  TNode<IntPtrT> phi_bb79_5;
  if (block79.is_used()) {
    ca_.Bind(&block79, &phi_bb79_5);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb96_5;
  TNode<IntPtrT> tmp88;
  TNode<IntPtrT> tmp89;
  TNode<Object> tmp90;
  TNode<IntPtrT> tmp91;
  TNode<RawPtrT> tmp92;
  TNode<HeapObject> tmp93;
  if (block96.is_used()) {
    ca_.Bind(&block96, &phi_bb96_5);
    tmp88 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp84});
    tmp89 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp81}, TNode<IntPtrT>{tmp88});
    std::tie(tmp90, tmp91) = NewReference_Object_0(state_, TNode<Object>{tmp80}, TNode<IntPtrT>{tmp89}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp90, tmp91}, tmp79);
    std::tie(tmp92, tmp93) = GetTargetAndInstance_0(state_, TNode<WasmInternalFunction>{parameter2}).Flatten();
    CodeStubAssembler(state_).Return(tmp92, tmp93);
  }

  TNode<IntPtrT> phi_bb97_5;
  if (block97.is_used()) {
    ca_.Bind(&block97, &phi_bb97_5);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb65_5;
  TNode<IntPtrT> tmp94;
  TNode<IntPtrT> tmp95;
  if (block65.is_used()) {
    ca_.Bind(&block65, &phi_bb65_5);
    tmp94 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp95 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb65_5}, TNode<IntPtrT>{tmp94});
    ca_.Goto(&block62, tmp95);
  }

  TNode<IntPtrT> phi_bb61_5;
  if (block61.is_used()) {
    ca_.Bind(&block61, &phi_bb61_5);
    ca_.Goto(&block38);
  }

  TNode<RawPtrT> tmp96;
  TNode<HeapObject> tmp97;
  TNode<Smi> tmp98;
  TNode<BoolT> tmp99;
  if (block38.is_used()) {
    ca_.Bind(&block38);
    std::tie(tmp96, tmp97) = GetTargetAndInstance_0(state_, TNode<WasmInternalFunction>{parameter2}).Flatten();
    tmp98 = SmiConstant_0(state_, IntegerLiteral(false, 0x0ull));
    tmp99 = CodeStubAssembler(state_).TaggedEqual(TNode<MaybeObject>{tmp10}, TNode<MaybeObject>{tmp98});
    ca_.Branch(tmp99, &block100, std::vector<compiler::Node*>{}, &block101, std::vector<compiler::Node*>{});
  }

  TNode<Object> tmp100;
  TNode<IntPtrT> tmp101;
  TNode<IntPtrT> tmp102;
  TNode<UintPtrT> tmp103;
  TNode<UintPtrT> tmp104;
  TNode<BoolT> tmp105;
  if (block100.is_used()) {
    ca_.Bind(&block100);
    std::tie(tmp100, tmp101, tmp102) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter0}).Flatten();
    tmp103 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{parameter1});
    tmp104 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp102});
    tmp105 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp103}, TNode<UintPtrT>{tmp104});
    ca_.Branch(tmp105, &block107, std::vector<compiler::Node*>{}, &block108, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp106;
  TNode<IntPtrT> tmp107;
  TNode<Object> tmp108;
  TNode<IntPtrT> tmp109;
  TNode<Object> tmp110;
  TNode<IntPtrT> tmp111;
  TNode<IntPtrT> tmp112;
  TNode<IntPtrT> tmp113;
  TNode<IntPtrT> tmp114;
  TNode<UintPtrT> tmp115;
  TNode<UintPtrT> tmp116;
  TNode<BoolT> tmp117;
  if (block107.is_used()) {
    ca_.Bind(&block107);
    tmp106 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{parameter1});
    tmp107 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp101}, TNode<IntPtrT>{tmp106});
    std::tie(tmp108, tmp109) = NewReference_Object_0(state_, TNode<Object>{tmp100}, TNode<IntPtrT>{tmp107}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp108, tmp109}, parameter2);
    std::tie(tmp110, tmp111, tmp112) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter0}).Flatten();
    tmp113 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp114 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{parameter1}, TNode<IntPtrT>{tmp113});
    tmp115 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp114});
    tmp116 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp112});
    tmp117 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp115}, TNode<UintPtrT>{tmp116});
    ca_.Branch(tmp117, &block115, std::vector<compiler::Node*>{}, &block116, std::vector<compiler::Node*>{});
  }

  if (block108.is_used()) {
    ca_.Bind(&block108);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp118;
  TNode<IntPtrT> tmp119;
  TNode<Object> tmp120;
  TNode<IntPtrT> tmp121;
  TNode<Smi> tmp122;
  if (block115.is_used()) {
    ca_.Bind(&block115);
    tmp118 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp114});
    tmp119 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp111}, TNode<IntPtrT>{tmp118});
    std::tie(tmp120, tmp121) = NewReference_Object_0(state_, TNode<Object>{tmp110}, TNode<IntPtrT>{tmp119}).Flatten();
    tmp122 = SmiConstant_0(state_, IntegerLiteral(false, 0x1ull));
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp120, tmp121}, tmp122);
    ca_.Goto(&block102);
  }

  if (block116.is_used()) {
    ca_.Bind(&block116);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<HeapObject> tmp123;
  if (block101.is_used()) {
    ca_.Bind(&block101);
    compiler::CodeAssemblerLabel label124(&ca_);
    tmp123 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{tmp10}, &label124);
    ca_.Goto(&block125);
    if (label124.is_used()) {
      ca_.Bind(&label124);
      ca_.Goto(&block126);
    }
  }

  if (block126.is_used()) {
    ca_.Bind(&block126);
    ca_.Goto(&block123);
  }

  TNode<FixedArray> tmp125;
  if (block125.is_used()) {
    ca_.Bind(&block125);
    compiler::CodeAssemblerLabel label126(&ca_);
    tmp125 = Cast_FixedArray_0(state_, TNode<HeapObject>{tmp123}, &label126);
    ca_.Goto(&block127);
    if (label126.is_used()) {
      ca_.Bind(&label126);
      ca_.Goto(&block128);
    }
  }

  if (block128.is_used()) {
    ca_.Bind(&block128);
    ca_.Goto(&block123);
  }

  TNode<BoolT> tmp127;
  if (block127.is_used()) {
    ca_.Bind(&block127);
    tmp127 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block121, tmp127);
  }

  TNode<BoolT> tmp128;
  if (block123.is_used()) {
    ca_.Bind(&block123);
    tmp128 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block121, tmp128);
  }

  TNode<BoolT> phi_bb121_8;
  if (block121.is_used()) {
    ca_.Bind(&block121, &phi_bb121_8);
    ca_.Branch(phi_bb121_8, &block119, std::vector<compiler::Node*>{}, &block120, std::vector<compiler::Node*>{});
  }

  TNode<FixedArray> tmp129;
  TNode<IntPtrT> tmp130;
  TNode<Smi> tmp131;
  TNode<Smi> tmp132;
  TNode<BoolT> tmp133;
  if (block119.is_used()) {
    ca_.Bind(&block119);
    tmp129 = TORQUE_CAST(TNode<Object>{tmp10});
    tmp130 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp131 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp129, tmp130});
    tmp132 = SmiConstant_0(state_, IntegerLiteral(false, 0x8ull));
    tmp133 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp131}, TNode<Smi>{tmp132});
    ca_.Branch(tmp133, &block143, std::vector<compiler::Node*>{}, &block144, std::vector<compiler::Node*>{});
  }

  TNode<Object> tmp134;
  TNode<IntPtrT> tmp135;
  TNode<IntPtrT> tmp136;
  TNode<UintPtrT> tmp137;
  TNode<UintPtrT> tmp138;
  TNode<BoolT> tmp139;
  if (block143.is_used()) {
    ca_.Bind(&block143);
    std::tie(tmp134, tmp135, tmp136) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter0}).Flatten();
    tmp137 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{parameter1});
    tmp138 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp136});
    tmp139 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp137}, TNode<UintPtrT>{tmp138});
    ca_.Branch(tmp139, &block150, std::vector<compiler::Node*>{}, &block151, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp140;
  TNode<IntPtrT> tmp141;
  TNode<Object> tmp142;
  TNode<IntPtrT> tmp143;
  TNode<Symbol> tmp144;
  TNode<Object> tmp145;
  TNode<IntPtrT> tmp146;
  TNode<IntPtrT> tmp147;
  TNode<IntPtrT> tmp148;
  TNode<IntPtrT> tmp149;
  TNode<UintPtrT> tmp150;
  TNode<UintPtrT> tmp151;
  TNode<BoolT> tmp152;
  if (block150.is_used()) {
    ca_.Bind(&block150);
    tmp140 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{parameter1});
    tmp141 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp135}, TNode<IntPtrT>{tmp140});
    std::tie(tmp142, tmp143) = NewReference_Object_0(state_, TNode<Object>{tmp134}, TNode<IntPtrT>{tmp141}).Flatten();
    tmp144 = kMegamorphicSymbol_0(state_);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp142, tmp143}, tmp144);
    std::tie(tmp145, tmp146, tmp147) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter0}).Flatten();
    tmp148 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp149 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{parameter1}, TNode<IntPtrT>{tmp148});
    tmp150 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp149});
    tmp151 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp147});
    tmp152 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp150}, TNode<UintPtrT>{tmp151});
    ca_.Branch(tmp152, &block158, std::vector<compiler::Node*>{}, &block159, std::vector<compiler::Node*>{});
  }

  if (block151.is_used()) {
    ca_.Bind(&block151);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp153;
  TNode<IntPtrT> tmp154;
  TNode<Object> tmp155;
  TNode<IntPtrT> tmp156;
  TNode<Symbol> tmp157;
  if (block158.is_used()) {
    ca_.Bind(&block158);
    tmp153 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp149});
    tmp154 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp146}, TNode<IntPtrT>{tmp153});
    std::tie(tmp155, tmp156) = NewReference_Object_0(state_, TNode<Object>{tmp145}, TNode<IntPtrT>{tmp154}).Flatten();
    tmp157 = kMegamorphicSymbol_0(state_);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp155, tmp156}, tmp157);
    ca_.Goto(&block145);
  }

  if (block159.is_used()) {
    ca_.Bind(&block159);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp158;
  TNode<IntPtrT> tmp159;
  TNode<IntPtrT> tmp160;
  TNode<FixedArrayBase> tmp161;
  TNode<FixedArray> tmp162;
  TNode<IntPtrT> tmp163;
  if (block144.is_used()) {
    ca_.Bind(&block144);
    tmp158 = CodeStubAssembler(state_).LoadAndUntagFixedArrayBaseLength(TNode<FixedArrayBase>{tmp129});
    tmp159 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp160 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp158}, TNode<IntPtrT>{tmp159});
    tmp161 = CodeStubAssembler(state_).AllocateFixedArray(ElementsKind::PACKED_ELEMENTS, TNode<IntPtrT>{tmp160}, CodeStubAssembler::AllocationFlag::kNone);
    tmp162 = TORQUE_CAST(TNode<Object>{tmp161});
    tmp163 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block177, tmp163);
  }

  TNode<IntPtrT> phi_bb177_8;
  TNode<IntPtrT> tmp164;
  TNode<BoolT> tmp165;
  if (block177.is_used()) {
    ca_.Bind(&block177, &phi_bb177_8);
    tmp164 = CodeStubAssembler(state_).LoadAndUntagFixedArrayBaseLength(TNode<FixedArrayBase>{tmp129});
    tmp165 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{phi_bb177_8}, TNode<IntPtrT>{tmp164});
    ca_.Branch(tmp165, &block175, std::vector<compiler::Node*>{phi_bb177_8}, &block176, std::vector<compiler::Node*>{phi_bb177_8});
  }

  TNode<IntPtrT> phi_bb175_8;
  TNode<Object> tmp166;
  TNode<IntPtrT> tmp167;
  TNode<IntPtrT> tmp168;
  TNode<UintPtrT> tmp169;
  TNode<UintPtrT> tmp170;
  TNode<BoolT> tmp171;
  if (block175.is_used()) {
    ca_.Bind(&block175, &phi_bb175_8);
    std::tie(tmp166, tmp167, tmp168) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp162}).Flatten();
    tmp169 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb175_8});
    tmp170 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp168});
    tmp171 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp169}, TNode<UintPtrT>{tmp170});
    ca_.Branch(tmp171, &block183, std::vector<compiler::Node*>{phi_bb175_8, phi_bb175_8, phi_bb175_8, phi_bb175_8, phi_bb175_8}, &block184, std::vector<compiler::Node*>{phi_bb175_8, phi_bb175_8, phi_bb175_8, phi_bb175_8, phi_bb175_8});
  }

  TNode<IntPtrT> phi_bb183_8;
  TNode<IntPtrT> phi_bb183_13;
  TNode<IntPtrT> phi_bb183_14;
  TNode<IntPtrT> phi_bb183_18;
  TNode<IntPtrT> phi_bb183_19;
  TNode<IntPtrT> tmp172;
  TNode<IntPtrT> tmp173;
  TNode<Object> tmp174;
  TNode<IntPtrT> tmp175;
  TNode<Object> tmp176;
  TNode<IntPtrT> tmp177;
  TNode<IntPtrT> tmp178;
  TNode<UintPtrT> tmp179;
  TNode<UintPtrT> tmp180;
  TNode<BoolT> tmp181;
  if (block183.is_used()) {
    ca_.Bind(&block183, &phi_bb183_8, &phi_bb183_13, &phi_bb183_14, &phi_bb183_18, &phi_bb183_19);
    tmp172 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb183_19});
    tmp173 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp167}, TNode<IntPtrT>{tmp172});
    std::tie(tmp174, tmp175) = NewReference_Object_0(state_, TNode<Object>{tmp166}, TNode<IntPtrT>{tmp173}).Flatten();
    std::tie(tmp176, tmp177, tmp178) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp129}).Flatten();
    tmp179 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb183_8});
    tmp180 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp178});
    tmp181 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp179}, TNode<UintPtrT>{tmp180});
    ca_.Branch(tmp181, &block191, std::vector<compiler::Node*>{phi_bb183_8, phi_bb183_13, phi_bb183_14, phi_bb183_8, phi_bb183_8, phi_bb183_8, phi_bb183_8}, &block192, std::vector<compiler::Node*>{phi_bb183_8, phi_bb183_13, phi_bb183_14, phi_bb183_8, phi_bb183_8, phi_bb183_8, phi_bb183_8});
  }

  TNode<IntPtrT> phi_bb184_8;
  TNode<IntPtrT> phi_bb184_13;
  TNode<IntPtrT> phi_bb184_14;
  TNode<IntPtrT> phi_bb184_18;
  TNode<IntPtrT> phi_bb184_19;
  if (block184.is_used()) {
    ca_.Bind(&block184, &phi_bb184_8, &phi_bb184_13, &phi_bb184_14, &phi_bb184_18, &phi_bb184_19);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb191_8;
  TNode<IntPtrT> phi_bb191_13;
  TNode<IntPtrT> phi_bb191_14;
  TNode<IntPtrT> phi_bb191_21;
  TNode<IntPtrT> phi_bb191_22;
  TNode<IntPtrT> phi_bb191_26;
  TNode<IntPtrT> phi_bb191_27;
  TNode<IntPtrT> tmp182;
  TNode<IntPtrT> tmp183;
  TNode<Object> tmp184;
  TNode<IntPtrT> tmp185;
  TNode<Object> tmp186;
  TNode<IntPtrT> tmp187;
  TNode<IntPtrT> tmp188;
  if (block191.is_used()) {
    ca_.Bind(&block191, &phi_bb191_8, &phi_bb191_13, &phi_bb191_14, &phi_bb191_21, &phi_bb191_22, &phi_bb191_26, &phi_bb191_27);
    tmp182 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb191_27});
    tmp183 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp177}, TNode<IntPtrT>{tmp182});
    std::tie(tmp184, tmp185) = NewReference_Object_0(state_, TNode<Object>{tmp176}, TNode<IntPtrT>{tmp183}).Flatten();
    tmp186 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp184, tmp185});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp174, tmp175}, tmp186);
    tmp187 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp188 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb191_8}, TNode<IntPtrT>{tmp187});
    ca_.Goto(&block177, tmp188);
  }

  TNode<IntPtrT> phi_bb192_8;
  TNode<IntPtrT> phi_bb192_13;
  TNode<IntPtrT> phi_bb192_14;
  TNode<IntPtrT> phi_bb192_21;
  TNode<IntPtrT> phi_bb192_22;
  TNode<IntPtrT> phi_bb192_26;
  TNode<IntPtrT> phi_bb192_27;
  if (block192.is_used()) {
    ca_.Bind(&block192, &phi_bb192_8, &phi_bb192_13, &phi_bb192_14, &phi_bb192_21, &phi_bb192_22, &phi_bb192_26, &phi_bb192_27);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb176_8;
  TNode<IntPtrT> tmp189;
  TNode<Object> tmp190;
  TNode<IntPtrT> tmp191;
  TNode<IntPtrT> tmp192;
  TNode<UintPtrT> tmp193;
  TNode<UintPtrT> tmp194;
  TNode<BoolT> tmp195;
  if (block176.is_used()) {
    ca_.Bind(&block176, &phi_bb176_8);
    tmp189 = CodeStubAssembler(state_).LoadAndUntagFixedArrayBaseLength(TNode<FixedArrayBase>{tmp129});
    std::tie(tmp190, tmp191, tmp192) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp162}).Flatten();
    tmp193 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp189});
    tmp194 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp192});
    tmp195 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp193}, TNode<UintPtrT>{tmp194});
    ca_.Branch(tmp195, &block199, std::vector<compiler::Node*>{}, &block200, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp196;
  TNode<IntPtrT> tmp197;
  TNode<Object> tmp198;
  TNode<IntPtrT> tmp199;
  TNode<Object> tmp200;
  TNode<IntPtrT> tmp201;
  TNode<IntPtrT> tmp202;
  TNode<IntPtrT> tmp203;
  TNode<IntPtrT> tmp204;
  TNode<UintPtrT> tmp205;
  TNode<UintPtrT> tmp206;
  TNode<BoolT> tmp207;
  if (block199.is_used()) {
    ca_.Bind(&block199);
    tmp196 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp189});
    tmp197 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp191}, TNode<IntPtrT>{tmp196});
    std::tie(tmp198, tmp199) = NewReference_Object_0(state_, TNode<Object>{tmp190}, TNode<IntPtrT>{tmp197}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp198, tmp199}, parameter2);
    std::tie(tmp200, tmp201, tmp202) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp162}).Flatten();
    tmp203 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp204 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp189}, TNode<IntPtrT>{tmp203});
    tmp205 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp204});
    tmp206 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp202});
    tmp207 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp205}, TNode<UintPtrT>{tmp206});
    ca_.Branch(tmp207, &block207, std::vector<compiler::Node*>{}, &block208, std::vector<compiler::Node*>{});
  }

  if (block200.is_used()) {
    ca_.Bind(&block200);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp208;
  TNode<IntPtrT> tmp209;
  TNode<Object> tmp210;
  TNode<IntPtrT> tmp211;
  TNode<Smi> tmp212;
  TNode<Object> tmp213;
  TNode<IntPtrT> tmp214;
  TNode<IntPtrT> tmp215;
  TNode<UintPtrT> tmp216;
  TNode<UintPtrT> tmp217;
  TNode<BoolT> tmp218;
  if (block207.is_used()) {
    ca_.Bind(&block207);
    tmp208 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp204});
    tmp209 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp201}, TNode<IntPtrT>{tmp208});
    std::tie(tmp210, tmp211) = NewReference_Object_0(state_, TNode<Object>{tmp200}, TNode<IntPtrT>{tmp209}).Flatten();
    tmp212 = SmiConstant_0(state_, IntegerLiteral(false, 0x1ull));
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp210, tmp211}, tmp212);
    std::tie(tmp213, tmp214, tmp215) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter0}).Flatten();
    tmp216 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{parameter1});
    tmp217 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp215});
    tmp218 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp216}, TNode<UintPtrT>{tmp217});
    ca_.Branch(tmp218, &block215, std::vector<compiler::Node*>{}, &block216, std::vector<compiler::Node*>{});
  }

  if (block208.is_used()) {
    ca_.Bind(&block208);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp219;
  TNode<IntPtrT> tmp220;
  TNode<Object> tmp221;
  TNode<IntPtrT> tmp222;
  if (block215.is_used()) {
    ca_.Bind(&block215);
    tmp219 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{parameter1});
    tmp220 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp214}, TNode<IntPtrT>{tmp219});
    std::tie(tmp221, tmp222) = NewReference_Object_0(state_, TNode<Object>{tmp213}, TNode<IntPtrT>{tmp220}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp221, tmp222}, tmp162);
    ca_.Goto(&block145);
  }

  if (block216.is_used()) {
    ca_.Bind(&block216);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block145.is_used()) {
    ca_.Bind(&block145);
    ca_.Goto(&block129);
  }

  TNode<HeapObject> tmp223;
  if (block120.is_used()) {
    ca_.Bind(&block120);
    compiler::CodeAssemblerLabel label224(&ca_);
    tmp223 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{tmp10}, &label224);
    ca_.Goto(&block225);
    if (label224.is_used()) {
      ca_.Bind(&label224);
      ca_.Goto(&block226);
    }
  }

  if (block226.is_used()) {
    ca_.Bind(&block226);
    ca_.Goto(&block223);
  }

  TNode<WasmInternalFunction> tmp225;
  if (block225.is_used()) {
    ca_.Bind(&block225);
    compiler::CodeAssemblerLabel label226(&ca_);
    tmp225 = Cast_WasmInternalFunction_0(state_, TNode<HeapObject>{tmp223}, &label226);
    ca_.Goto(&block227);
    if (label226.is_used()) {
      ca_.Bind(&label226);
      ca_.Goto(&block228);
    }
  }

  if (block228.is_used()) {
    ca_.Bind(&block228);
    ca_.Goto(&block223);
  }

  TNode<BoolT> tmp227;
  if (block227.is_used()) {
    ca_.Bind(&block227);
    tmp227 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block221, tmp227);
  }

  TNode<BoolT> tmp228;
  if (block223.is_used()) {
    ca_.Bind(&block223);
    tmp228 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block221, tmp228);
  }

  TNode<BoolT> phi_bb221_8;
  if (block221.is_used()) {
    ca_.Bind(&block221, &phi_bb221_8);
    ca_.Branch(phi_bb221_8, &block219, std::vector<compiler::Node*>{}, &block220, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp229;
  TNode<FixedArrayBase> tmp230;
  TNode<FixedArray> tmp231;
  TNode<Object> tmp232;
  TNode<IntPtrT> tmp233;
  TNode<IntPtrT> tmp234;
  TNode<UintPtrT> tmp235;
  TNode<IntPtrT> tmp236;
  TNode<UintPtrT> tmp237;
  TNode<UintPtrT> tmp238;
  TNode<BoolT> tmp239;
  if (block219.is_used()) {
    ca_.Bind(&block219);
    tmp229 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x4ull));
    tmp230 = CodeStubAssembler(state_).AllocateFixedArray(ElementsKind::PACKED_ELEMENTS, TNode<IntPtrT>{tmp229}, CodeStubAssembler::AllocationFlag::kNone);
    tmp231 = TORQUE_CAST(TNode<Object>{tmp230});
    std::tie(tmp232, tmp233, tmp234) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp231}).Flatten();
    tmp235 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp236 = Convert_intptr_uintptr_0(state_, TNode<UintPtrT>{tmp235});
    tmp237 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp236});
    tmp238 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp234});
    tmp239 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp237}, TNode<UintPtrT>{tmp238});
    ca_.Branch(tmp239, &block247, std::vector<compiler::Node*>{}, &block248, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp240;
  TNode<IntPtrT> tmp241;
  TNode<Object> tmp242;
  TNode<IntPtrT> tmp243;
  TNode<Object> tmp244;
  TNode<IntPtrT> tmp245;
  TNode<IntPtrT> tmp246;
  TNode<UintPtrT> tmp247;
  TNode<IntPtrT> tmp248;
  TNode<UintPtrT> tmp249;
  TNode<UintPtrT> tmp250;
  TNode<BoolT> tmp251;
  if (block247.is_used()) {
    ca_.Bind(&block247);
    tmp240 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp236});
    tmp241 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp233}, TNode<IntPtrT>{tmp240});
    std::tie(tmp242, tmp243) = NewReference_Object_0(state_, TNode<Object>{tmp232}, TNode<IntPtrT>{tmp241}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp242, tmp243}, tmp10);
    std::tie(tmp244, tmp245, tmp246) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp231}).Flatten();
    tmp247 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp248 = Convert_intptr_uintptr_0(state_, TNode<UintPtrT>{tmp247});
    tmp249 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp248});
    tmp250 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp246});
    tmp251 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp249}, TNode<UintPtrT>{tmp250});
    ca_.Branch(tmp251, &block256, std::vector<compiler::Node*>{}, &block257, std::vector<compiler::Node*>{});
  }

  if (block248.is_used()) {
    ca_.Bind(&block248);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp252;
  TNode<IntPtrT> tmp253;
  TNode<Object> tmp254;
  TNode<IntPtrT> tmp255;
  TNode<Object> tmp256;
  TNode<IntPtrT> tmp257;
  TNode<IntPtrT> tmp258;
  TNode<IntPtrT> tmp259;
  TNode<IntPtrT> tmp260;
  TNode<UintPtrT> tmp261;
  TNode<UintPtrT> tmp262;
  TNode<BoolT> tmp263;
  if (block256.is_used()) {
    ca_.Bind(&block256);
    tmp252 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp248});
    tmp253 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp245}, TNode<IntPtrT>{tmp252});
    std::tie(tmp254, tmp255) = NewReference_Object_0(state_, TNode<Object>{tmp244}, TNode<IntPtrT>{tmp253}).Flatten();
    std::tie(tmp256, tmp257, tmp258) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter0}).Flatten();
    tmp259 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp260 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{parameter1}, TNode<IntPtrT>{tmp259});
    tmp261 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp260});
    tmp262 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp258});
    tmp263 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp261}, TNode<UintPtrT>{tmp262});
    ca_.Branch(tmp263, &block264, std::vector<compiler::Node*>{}, &block265, std::vector<compiler::Node*>{});
  }

  if (block257.is_used()) {
    ca_.Bind(&block257);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp264;
  TNode<IntPtrT> tmp265;
  TNode<Object> tmp266;
  TNode<IntPtrT> tmp267;
  TNode<Object> tmp268;
  TNode<Object> tmp269;
  TNode<IntPtrT> tmp270;
  TNode<IntPtrT> tmp271;
  TNode<UintPtrT> tmp272;
  TNode<IntPtrT> tmp273;
  TNode<UintPtrT> tmp274;
  TNode<UintPtrT> tmp275;
  TNode<BoolT> tmp276;
  if (block264.is_used()) {
    ca_.Bind(&block264);
    tmp264 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp260});
    tmp265 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp257}, TNode<IntPtrT>{tmp264});
    std::tie(tmp266, tmp267) = NewReference_Object_0(state_, TNode<Object>{tmp256}, TNode<IntPtrT>{tmp265}).Flatten();
    tmp268 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp266, tmp267});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp254, tmp255}, tmp268);
    std::tie(tmp269, tmp270, tmp271) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp231}).Flatten();
    tmp272 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp273 = Convert_intptr_uintptr_0(state_, TNode<UintPtrT>{tmp272});
    tmp274 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp273});
    tmp275 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp271});
    tmp276 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp274}, TNode<UintPtrT>{tmp275});
    ca_.Branch(tmp276, &block273, std::vector<compiler::Node*>{}, &block274, std::vector<compiler::Node*>{});
  }

  if (block265.is_used()) {
    ca_.Bind(&block265);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp277;
  TNode<IntPtrT> tmp278;
  TNode<Object> tmp279;
  TNode<IntPtrT> tmp280;
  TNode<Object> tmp281;
  TNode<IntPtrT> tmp282;
  TNode<IntPtrT> tmp283;
  TNode<UintPtrT> tmp284;
  TNode<IntPtrT> tmp285;
  TNode<UintPtrT> tmp286;
  TNode<UintPtrT> tmp287;
  TNode<BoolT> tmp288;
  if (block273.is_used()) {
    ca_.Bind(&block273);
    tmp277 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp273});
    tmp278 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp270}, TNode<IntPtrT>{tmp277});
    std::tie(tmp279, tmp280) = NewReference_Object_0(state_, TNode<Object>{tmp269}, TNode<IntPtrT>{tmp278}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp279, tmp280}, parameter2);
    std::tie(tmp281, tmp282, tmp283) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp231}).Flatten();
    tmp284 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp285 = Convert_intptr_uintptr_0(state_, TNode<UintPtrT>{tmp284});
    tmp286 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp285});
    tmp287 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp283});
    tmp288 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp286}, TNode<UintPtrT>{tmp287});
    ca_.Branch(tmp288, &block282, std::vector<compiler::Node*>{}, &block283, std::vector<compiler::Node*>{});
  }

  if (block274.is_used()) {
    ca_.Bind(&block274);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp289;
  TNode<IntPtrT> tmp290;
  TNode<Object> tmp291;
  TNode<IntPtrT> tmp292;
  TNode<Smi> tmp293;
  TNode<Object> tmp294;
  TNode<IntPtrT> tmp295;
  TNode<IntPtrT> tmp296;
  TNode<UintPtrT> tmp297;
  TNode<UintPtrT> tmp298;
  TNode<BoolT> tmp299;
  if (block282.is_used()) {
    ca_.Bind(&block282);
    tmp289 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp285});
    tmp290 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp282}, TNode<IntPtrT>{tmp289});
    std::tie(tmp291, tmp292) = NewReference_Object_0(state_, TNode<Object>{tmp281}, TNode<IntPtrT>{tmp290}).Flatten();
    tmp293 = SmiConstant_0(state_, IntegerLiteral(false, 0x1ull));
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp291, tmp292}, tmp293);
    std::tie(tmp294, tmp295, tmp296) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter0}).Flatten();
    tmp297 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{parameter1});
    tmp298 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp296});
    tmp299 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp297}, TNode<UintPtrT>{tmp298});
    ca_.Branch(tmp299, &block290, std::vector<compiler::Node*>{}, &block291, std::vector<compiler::Node*>{});
  }

  if (block283.is_used()) {
    ca_.Bind(&block283);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp300;
  TNode<IntPtrT> tmp301;
  TNode<Object> tmp302;
  TNode<IntPtrT> tmp303;
  TNode<Object> tmp304;
  TNode<IntPtrT> tmp305;
  TNode<IntPtrT> tmp306;
  TNode<IntPtrT> tmp307;
  TNode<IntPtrT> tmp308;
  TNode<UintPtrT> tmp309;
  TNode<UintPtrT> tmp310;
  TNode<BoolT> tmp311;
  if (block290.is_used()) {
    ca_.Bind(&block290);
    tmp300 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{parameter1});
    tmp301 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp295}, TNode<IntPtrT>{tmp300});
    std::tie(tmp302, tmp303) = NewReference_Object_0(state_, TNode<Object>{tmp294}, TNode<IntPtrT>{tmp301}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp302, tmp303}, tmp231);
    std::tie(tmp304, tmp305, tmp306) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter0}).Flatten();
    tmp307 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp308 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{parameter1}, TNode<IntPtrT>{tmp307});
    tmp309 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp308});
    tmp310 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp306});
    tmp311 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp309}, TNode<UintPtrT>{tmp310});
    ca_.Branch(tmp311, &block298, std::vector<compiler::Node*>{}, &block299, std::vector<compiler::Node*>{});
  }

  if (block291.is_used()) {
    ca_.Bind(&block291);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp312;
  TNode<IntPtrT> tmp313;
  TNode<Object> tmp314;
  TNode<IntPtrT> tmp315;
  TNode<Oddball> tmp316;
  if (block298.is_used()) {
    ca_.Bind(&block298);
    tmp312 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp308});
    tmp313 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp305}, TNode<IntPtrT>{tmp312});
    std::tie(tmp314, tmp315) = NewReference_Object_0(state_, TNode<Object>{tmp304}, TNode<IntPtrT>{tmp313}).Flatten();
    tmp316 = Undefined_0(state_);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp314, tmp315}, tmp316);
    ca_.Goto(&block220);
  }

  if (block299.is_used()) {
    ca_.Bind(&block299);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block220.is_used()) {
    ca_.Bind(&block220);
    ca_.Goto(&block129);
  }

  if (block129.is_used()) {
    ca_.Bind(&block129);
    ca_.Goto(&block102);
  }

  if (block102.is_used()) {
    ca_.Bind(&block102);
    CodeStubAssembler(state_).Return(tmp96, tmp97);
  }
}

TF_BUILTIN(WasmGetOwnProperty, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kObject);
  USE(parameter1);
  TNode<Name> parameter2 = UncheckedParameter<Name>(Descriptor::kUniqueName);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<HeapObject> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block2);
  }

  TNode<JSReceiver> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_JSReceiver_0(state_, TNode<HeapObject>{tmp0}, &label3);
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

  TNode<IntPtrT> tmp4;
  TNode<Map> tmp5;
  TNode<Uint16T> tmp6;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp5 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp2, tmp4});
    tmp6 = CodeStubAssembler(state_).LoadInstanceType(TNode<HeapObject>{tmp2});
    compiler::CodeAssemblerLabel label7(&ca_);
    compiler::CodeAssemblerLabel label8(&ca_);
    compiler::CodeAssemblerLabel label9(&ca_);
    CodeStubAssembler(state_).TryHasOwnProperty(TNode<HeapObject>{tmp2}, TNode<Map>{tmp5}, TNode<Uint16T>{tmp6}, TNode<Name>{parameter2}, &label7, &label8, &label9);
    if (label7.is_used()) {
      ca_.Bind(&label7);
      ca_.Goto(&block9);
    }
    if (label8.is_used()) {
      ca_.Bind(&label8);
      ca_.Goto(&block10);
    }
    if (label9.is_used()) {
      ca_.Bind(&label9);
      ca_.Goto(&block11);
    }
  }

  TNode<Smi> tmp10;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp10 = CodeStubAssembler(state_).SmiConstant(OnNonExistent::kReturnUndefined);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kGetPropertyWithReceiver, parameter0, tmp2, parameter2, tmp2, tmp10);
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    ca_.Goto(&block2);
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    ca_.Goto(&block2);
  }

  TNode<Oddball> tmp11;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp11 = Undefined_0(state_);
    CodeStubAssembler(state_).Return(tmp11);
  }
}

TF_BUILTIN(WasmTrap, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Smi> parameter0 = UncheckedParameter<Smi>(Descriptor::kError);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<NativeContext> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = LoadContextFromFrame_0(state_);
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kThrowWasmError, tmp0, parameter0);
  }
}

TF_BUILTIN(ThrowWasmTrapUnreachable, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapUnreachable);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

TF_BUILTIN(ThrowWasmTrapMemOutOfBounds, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapMemOutOfBounds);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

TF_BUILTIN(ThrowWasmTrapUnalignedAccess, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapUnalignedAccess);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

TF_BUILTIN(ThrowWasmTrapDivByZero, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapDivByZero);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

TF_BUILTIN(ThrowWasmTrapDivUnrepresentable, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapDivUnrepresentable);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

TF_BUILTIN(ThrowWasmTrapRemByZero, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapRemByZero);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

TF_BUILTIN(ThrowWasmTrapFloatUnrepresentable, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapFloatUnrepresentable);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

TF_BUILTIN(ThrowWasmTrapFuncSigMismatch, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapFuncSigMismatch);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

TF_BUILTIN(ThrowWasmTrapDataSegmentOutOfBounds, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapDataSegmentOutOfBounds);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

TF_BUILTIN(ThrowWasmTrapElemSegmentDropped, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapElemSegmentDropped);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

TF_BUILTIN(ThrowWasmTrapTableOutOfBounds, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapTableOutOfBounds);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

TF_BUILTIN(ThrowWasmTrapRethrowNull, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapRethrowNull);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

TF_BUILTIN(ThrowWasmTrapNullDereference, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapNullDereference);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

TF_BUILTIN(ThrowWasmTrapIllegalCast, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapIllegalCast);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

TF_BUILTIN(ThrowWasmTrapArrayOutOfBounds, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapArrayOutOfBounds);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

TF_BUILTIN(ThrowWasmTrapArrayTooLarge, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapArrayTooLarge);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=324&c=7
TNode<IntPtrT> Convert_intptr_constexpr_int32_0(compiler::CodeAssemblerState* state_, int32_t p_i) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int32_0(state_, p_i);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<IntPtrT>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=551&c=14
TNode<BoolT> Is_WasmInternalFunction_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<WasmInternalFunction> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_WasmInternalFunction_1(state_, TNode<Context>{p_context}, TNode<Object>{p_o}, &label1);
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
