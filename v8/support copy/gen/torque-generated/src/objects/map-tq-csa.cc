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
#include "torque-generated/src/objects/map-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/objects/map-tq-csa.h"
#include "torque-generated/src/objects/prototype-info-tq-csa.h"
#include "torque-generated/src/objects/string-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=37&c=1
TNode<Map> Cast_Map_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Map> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = DownCastForTorqueClass_Map_0(state_, TNode<HeapObject>{p_obj}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(label_CastError);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
  return TNode<Map>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=80&c=1
TNode<PrototypeInfo> LoadMapPrototypeInfo_0(compiler::CodeAssemblerState* state_, TNode<Map> p_m, compiler::CodeAssemblerLabel* label_HasNoPrototypeInfo) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<PrototypeInfo> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Method_Map_PrototypeInfo_0(state_, TNode<Map>{p_m}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(label_HasNoPrototypeInfo);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
  return TNode<PrototypeInfo>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=87&c=1
TNode<BoolT> IsSimpleObjectMap_0(compiler::CodeAssemblerState* state_, TNode<Map> p_map) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Uint16T> tmp1;
  TNode<BoolT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp1 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{p_map, tmp0});
    tmp2 = CodeStubAssembler(state_).IsSpecialReceiverInstanceType(TNode<Uint16T>{tmp1});
    ca_.Branch(tmp2, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp3;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp3 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block1, tmp3);
  }

  TNode<IntPtrT> tmp4;
  TNode<Uint8T> tmp5;
  TNode<BoolT> tmp6;
  TNode<BoolT> tmp7;
  TNode<BoolT> tmp8;
  TNode<BoolT> tmp9;
  TNode<BoolT> tmp10;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, 10);
    tmp5 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{p_map, tmp4});
    tmp6 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 2, 1, uint8_t>>(ca_.UncheckedCast<Word32T>(tmp5)));
    tmp7 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp6});
    tmp8 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 5, 1, uint8_t>>(ca_.UncheckedCast<Word32T>(tmp5)));
    tmp9 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp8});
    tmp10 = CodeStubAssembler(state_).Word32And(TNode<BoolT>{tmp7}, TNode<BoolT>{tmp9});
    ca_.Goto(&block1, tmp10);
  }

  TNode<BoolT> phi_bb1_1;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_1);
    ca_.Goto(&block4);
  }

    ca_.Bind(&block4);
  return TNode<BoolT>{phi_bb1_1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=59&c=3
TNode<Uint8T> LoadMapInstanceSizeInWords_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Uint8T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp1 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint8T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=59&c=3
void StoreMapInstanceSizeInWords_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o, TNode<Uint8T> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    CodeStubAssembler(state_).StoreReference<Uint8T>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=60&c=3
TNode<Uint8T> LoadMapInobjectPropertiesStartOrConstructorFunctionIndex_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Uint8T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 5);
    tmp1 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint8T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=60&c=3
void StoreMapInobjectPropertiesStartOrConstructorFunctionIndex_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o, TNode<Uint8T> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 5);
    CodeStubAssembler(state_).StoreReference<Uint8T>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=61&c=3
TNode<Uint8T> LoadMapUsedOrUnusedInstanceSizeInWords_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Uint8T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 6);
    tmp1 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint8T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=61&c=3
void StoreMapUsedOrUnusedInstanceSizeInWords_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o, TNode<Uint8T> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 6);
    CodeStubAssembler(state_).StoreReference<Uint8T>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=62&c=3
TNode<Uint8T> LoadMapVisitorId_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Uint8T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 7);
    tmp1 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint8T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=62&c=3
void StoreMapVisitorId_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o, TNode<Uint8T> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 7);
    CodeStubAssembler(state_).StoreReference<Uint8T>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=63&c=3
TNode<Uint16T> LoadMapInstanceType_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Uint16T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp1 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint16T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=63&c=3
void StoreMapInstanceType_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o, TNode<Uint16T> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<Uint16T>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=64&c=3
TNode<Uint8T> LoadMapBitField_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Uint8T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 10);
    tmp1 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint8T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=64&c=3
void StoreMapBitField_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o, TNode<Uint8T> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 10);
    CodeStubAssembler(state_).StoreReference<Uint8T>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=65&c=3
TNode<Uint8T> LoadMapBitField2_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Uint8T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 11);
    tmp1 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint8T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=65&c=3
void StoreMapBitField2_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o, TNode<Uint8T> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 11);
    CodeStubAssembler(state_).StoreReference<Uint8T>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=66&c=3
TNode<Uint32T> LoadMapBitField3_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp1 = CodeStubAssembler(state_).LoadReference<Uint32T>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=66&c=3
void StoreMapBitField3_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o, TNode<Uint32T> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    CodeStubAssembler(state_).StoreReference<Uint32T>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=71&c=3
TNode<HeapObject> LoadMapPrototype_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<HeapObject> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp1 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<HeapObject>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=71&c=3
void StoreMapPrototype_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o, TNode<HeapObject> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    CodeStubAssembler(state_).StoreReference<HeapObject>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=72&c=3
TNode<Object> LoadMapConstructorOrBackPointerOrNativeContext_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    tmp1 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Object>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=72&c=3
void StoreMapConstructorOrBackPointerOrNativeContext_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o, TNode<Object> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=73&c=3
TNode<DescriptorArray> LoadMapInstanceDescriptors_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<DescriptorArray> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp1 = CodeStubAssembler(state_).LoadReference<DescriptorArray>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<DescriptorArray>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=73&c=3
void StoreMapInstanceDescriptors_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o, TNode<DescriptorArray> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    CodeStubAssembler(state_).StoreReference<DescriptorArray>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=74&c=3
TNode<WeakFixedArray> LoadMapDependentCode_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<WeakFixedArray> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 28);
    tmp1 = CodeStubAssembler(state_).LoadReference<WeakFixedArray>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<WeakFixedArray>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=74&c=3
void StoreMapDependentCode_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o, TNode<WeakFixedArray> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 28);
    CodeStubAssembler(state_).StoreReference<WeakFixedArray>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=75&c=3
TNode<Object> LoadMapPrototypeValidityCell_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 32);
    tmp1 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Object>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=75&c=3
void StoreMapPrototypeValidityCell_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o, TNode<Object> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 32);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=76&c=3
TNode<MaybeObject> LoadMapTransitionsOrPrototypeInfo_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<MaybeObject> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 36);
    tmp1 = CodeStubAssembler(state_).LoadReference<MaybeObject>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<MaybeObject>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=76&c=3
void StoreMapTransitionsOrPrototypeInfo_0(compiler::CodeAssemblerState* state_, TNode<Map> p_o, TNode<MaybeObject> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 36);
    CodeStubAssembler(state_).StoreReference<MaybeObject>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=38&c=3
TNode<PrototypeInfo> Method_Map_PrototypeInfo_0(compiler::CodeAssemblerState* state_, TNode<Map> p_this, compiler::CodeAssemblerLabel* label_HasNoPrototypeInfo) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<MaybeObject> tmp1;
  TNode<MaybeObject> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 36);
    tmp1 = CodeStubAssembler(state_).LoadReference<MaybeObject>(CodeStubAssembler::Reference{p_this, tmp0});
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_Weak_Map_0(state_, TNode<MaybeObject>{tmp1}, &label3);
    ca_.Goto(&block5);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block6);
    }
  }

  TNode<Smi> tmp4;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    compiler::CodeAssemblerLabel label5(&ca_);
    tmp4 = Cast_Smi_0(state_, TNode<Object>{ca_.UncheckedCast<Object>(tmp1)}, &label5);
    ca_.Goto(&block9);
    if (label5.is_used()) {
      ca_.Bind(&label5);
      ca_.Goto(&block10);
    }
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block1);
  }

  TNode<PrototypeInfo> tmp6;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    compiler::CodeAssemblerLabel label7(&ca_);
    tmp6 = Cast_PrototypeInfo_0(state_, TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(tmp1)}, &label7);
    ca_.Goto(&block13);
    if (label7.is_used()) {
      ca_.Bind(&label7);
      ca_.Goto(&block14);
    }
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    ca_.Goto(&block1);
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    ca_.Goto(&block1);
  }

  if (block13.is_used()) {
    ca_.Bind(&block13);
    ca_.Goto(&block15);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_HasNoPrototypeInfo);
  }

    ca_.Bind(&block15);
  return TNode<PrototypeInfo>{tmp6};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=55&c=3
TNode<BoolT> Method_Map_IsUndetectable_0(compiler::CodeAssemblerState* state_, TNode<Map> p_this) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Uint8T> tmp1;
  TNode<BoolT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 10);
    tmp1 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{p_this, tmp0});
    tmp2 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 4, 1, uint8_t>>(ca_.UncheckedCast<Word32T>(tmp1)));
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<BoolT>{tmp2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=37&c=1
TNode<Map> DownCastForTorqueClass_Map_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Map> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp1 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{p_o, tmp0});
    if (((CodeStubAssembler(state_).ConstexprInt31Equal(static_cast<InstanceType>(250), static_cast<InstanceType>(250))))) {
      ca_.Goto(&block3);
    } else {
      ca_.Goto(&block4);
    }
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    if ((CodeStubAssembler(state_).ClassHasMapConstant<Map>())) {
      ca_.Goto(&block6);
    } else {
      ca_.Goto(&block7);
    }
  }

  TNode<Map> tmp2;
  TNode<BoolT> tmp3;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp2 = CodeStubAssembler(state_).GetClassMapConstant<Map>();
    tmp3 = CodeStubAssembler(state_).TaggedNotEqual(TNode<HeapObject>{tmp1}, TNode<HeapObject>{tmp2});
    ca_.Branch(tmp3, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    ca_.Goto(&block1);
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    ca_.Goto(&block8);
  }

  TNode<IntPtrT> tmp4;
  TNode<Uint16T> tmp5;
  TNode<Uint32T> tmp6;
  TNode<BoolT> tmp7;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp5 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp1, tmp4});
    tmp6 = FromConstexpr_uint32_constexpr_uint32_0(state_, static_cast<InstanceType>(250));
    tmp7 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{tmp5}, TNode<Uint32T>{tmp6});
    ca_.Branch(tmp7, &block11, std::vector<compiler::Node*>{}, &block12, std::vector<compiler::Node*>{});
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    ca_.Goto(&block1);
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    ca_.Goto(&block8);
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block5);
  }

  TNode<Int32T> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Uint16T> tmp10;
  TNode<Uint16T> tmp11;
  TNode<Int32T> tmp12;
  TNode<Uint16T> tmp13;
  TNode<Uint16T> tmp14;
  TNode<Int32T> tmp15;
  TNode<Int32T> tmp16;
  TNode<Uint32T> tmp17;
  TNode<Uint32T> tmp18;
  TNode<BoolT> tmp19;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp8 = FromConstexpr_int32_constexpr_int32_0(state_, (CodeStubAssembler(state_).ConstexprUint32Sub(static_cast<InstanceType>(250), static_cast<InstanceType>(250))));
    tmp9 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp10 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp1, tmp9});
    tmp11 = Convert_uint16_InstanceType_0(state_, TNode<Uint16T>{tmp10});
    tmp12 = Convert_int32_uint16_0(state_, TNode<Uint16T>{tmp11});
    tmp13 = FromConstexpr_InstanceType_constexpr_InstanceType_0(state_, static_cast<InstanceType>(250));
    tmp14 = Convert_uint16_InstanceType_0(state_, TNode<Uint16T>{tmp13});
    tmp15 = Convert_int32_uint16_0(state_, TNode<Uint16T>{tmp14});
    tmp16 = CodeStubAssembler(state_).Int32Sub(TNode<Int32T>{tmp12}, TNode<Int32T>{tmp15});
    tmp17 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp16});
    tmp18 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp8});
    tmp19 = CodeStubAssembler(state_).Uint32GreaterThan(TNode<Uint32T>{tmp17}, TNode<Uint32T>{tmp18});
    ca_.Branch(tmp19, &block13, std::vector<compiler::Node*>{}, &block14, std::vector<compiler::Node*>{});
  }

  if (block13.is_used()) {
    ca_.Bind(&block13);
    ca_.Goto(&block1);
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    ca_.Goto(&block5);
  }

  TNode<Map> tmp20;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp20 = TORQUE_CAST(TNode<HeapObject>{p_o});
    ca_.Goto(&block15);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    ca_.Bind(&block15);
  return TNode<Map>{tmp20};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=40&c=7
TNode<MaybeObject> Cast_Weak_Map_0(compiler::CodeAssemblerState* state_, TNode<MaybeObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).IsWeakOrCleared(TNode<MaybeObject>{p_o});
    tmp1 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp0});
    ca_.Branch(tmp1, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(label_CastError);
  }

  TNode<MaybeObject> tmp2;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = (TNode<MaybeObject>{p_o});
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
  return TNode<MaybeObject>{tmp2};
}

} // namespace internal
} // namespace v8
