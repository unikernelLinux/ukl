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
#include "torque-generated/src/objects/scope-info-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/builtins-string-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/objects/scope-info-tq-csa.h"
#include "torque-generated/src/objects/string-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=6&c=1
TNode<ScopeInfo> kEmptyScopeInfo_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  TNode<ScopeInfo> tmp0;
    tmp0 = CodeStubAssembler(state_).EmptyScopeInfoConstant();
  return TNode<ScopeInfo>{tmp0};}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=8&c=1
TNode<Uint32T> FromConstexpr_ScopeType_constexpr_CLASS_SCOPE_0(compiler::CodeAssemblerState* state_, ScopeType p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=8&c=1
TNode<Uint32T> FromConstexpr_ScopeType_constexpr_EVAL_SCOPE_0(compiler::CodeAssemblerState* state_, ScopeType p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=8&c=1
TNode<Uint32T> FromConstexpr_ScopeType_constexpr_FUNCTION_SCOPE_0(compiler::CodeAssemblerState* state_, ScopeType p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=8&c=1
TNode<Uint32T> FromConstexpr_ScopeType_constexpr_MODULE_SCOPE_0(compiler::CodeAssemblerState* state_, ScopeType p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=8&c=1
TNode<Uint32T> FromConstexpr_ScopeType_constexpr_SCRIPT_SCOPE_0(compiler::CodeAssemblerState* state_, ScopeType p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=8&c=1
TNode<Uint32T> FromConstexpr_ScopeType_constexpr_CATCH_SCOPE_0(compiler::CodeAssemblerState* state_, ScopeType p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=8&c=1
TNode<Uint32T> FromConstexpr_ScopeType_constexpr_BLOCK_SCOPE_0(compiler::CodeAssemblerState* state_, ScopeType p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=8&c=1
TNode<Uint32T> FromConstexpr_ScopeType_constexpr_WITH_SCOPE_0(compiler::CodeAssemblerState* state_, ScopeType p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=23&c=1
TNode<Uint32T> FromConstexpr_VariableAllocationInfo_constexpr_NONE_0(compiler::CodeAssemblerState* state_, VariableAllocationInfo p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=23&c=1
TNode<Uint32T> FromConstexpr_VariableAllocationInfo_constexpr_STACK_0(compiler::CodeAssemblerState* state_, VariableAllocationInfo p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=23&c=1
TNode<Uint32T> FromConstexpr_VariableAllocationInfo_constexpr_CONTEXT_0(compiler::CodeAssemblerState* state_, VariableAllocationInfo p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=23&c=1
TNode<Uint32T> FromConstexpr_VariableAllocationInfo_constexpr_UNUSED_0(compiler::CodeAssemblerState* state_, VariableAllocationInfo p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=30&c=1
TNode<Uint32T> FromConstexpr_VariableMode_constexpr_kLet_0(compiler::CodeAssemblerState* state_, VariableMode p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=30&c=1
TNode<Uint32T> FromConstexpr_VariableMode_constexpr_kConst_0(compiler::CodeAssemblerState* state_, VariableMode p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=30&c=1
TNode<Uint32T> FromConstexpr_VariableMode_constexpr_kVar_0(compiler::CodeAssemblerState* state_, VariableMode p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=30&c=1
TNode<Uint32T> FromConstexpr_VariableMode_constexpr_kTemporary_0(compiler::CodeAssemblerState* state_, VariableMode p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=30&c=1
TNode<Uint32T> FromConstexpr_VariableMode_constexpr_kDynamic_0(compiler::CodeAssemblerState* state_, VariableMode p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=30&c=1
TNode<Uint32T> FromConstexpr_VariableMode_constexpr_kDynamicGlobal_0(compiler::CodeAssemblerState* state_, VariableMode p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=30&c=1
TNode<Uint32T> FromConstexpr_VariableMode_constexpr_kDynamicLocal_0(compiler::CodeAssemblerState* state_, VariableMode p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=30&c=1
TNode<Uint32T> FromConstexpr_VariableMode_constexpr_kPrivateMethod_0(compiler::CodeAssemblerState* state_, VariableMode p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=30&c=1
TNode<Uint32T> FromConstexpr_VariableMode_constexpr_kPrivateSetterOnly_0(compiler::CodeAssemblerState* state_, VariableMode p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=30&c=1
TNode<Uint32T> FromConstexpr_VariableMode_constexpr_kPrivateGetterOnly_0(compiler::CodeAssemblerState* state_, VariableMode p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=30&c=1
TNode<Uint32T> FromConstexpr_VariableMode_constexpr_kPrivateGetterAndSetter_0(compiler::CodeAssemblerState* state_, VariableMode p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=44&c=1
TNode<Uint32T> FromConstexpr_InitializationFlag_constexpr_kNeedsInitialization_0(compiler::CodeAssemblerState* state_, InitializationFlag p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=44&c=1
TNode<Uint32T> FromConstexpr_InitializationFlag_constexpr_kCreatedInitialized_0(compiler::CodeAssemblerState* state_, InitializationFlag p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=49&c=1
TNode<Uint32T> FromConstexpr_IsStaticFlag_constexpr_kNotStatic_0(compiler::CodeAssemblerState* state_, IsStaticFlag p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=49&c=1
TNode<Uint32T> FromConstexpr_IsStaticFlag_constexpr_kStatic_0(compiler::CodeAssemblerState* state_, IsStaticFlag p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=51&c=1
TNode<Uint32T> FromConstexpr_MaybeAssignedFlag_constexpr_kNotAssigned_0(compiler::CodeAssemblerState* state_, MaybeAssignedFlag p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=51&c=1
TNode<Uint32T> FromConstexpr_MaybeAssignedFlag_constexpr_kMaybeAssigned_0(compiler::CodeAssemblerState* state_, MaybeAssignedFlag p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=110&c=1
TNode<ScopeInfo> Cast_ScopeInfo_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<ScopeInfo> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = DownCastForTorqueClass_ScopeInfo_0(state_, TNode<HeapObject>{p_obj}, &label1);
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
  return TNode<ScopeInfo>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=185&c=1
TNode<IntPtrT> IndexOfInlinedLocalName_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_scopeInfo, TNode<Name> p_name, compiler::CodeAssemblerLabel* label_NotFound) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Smi> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp1 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_scopeInfo, tmp0});
    tmp2 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp1});
    tmp3 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block5, tmp3);
  }

  TNode<IntPtrT> phi_bb5_3;
  TNode<BoolT> tmp4;
  if (block5.is_used()) {
    ca_.Bind(&block5, &phi_bb5_3);
    tmp4 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{phi_bb5_3}, TNode<IntPtrT>{tmp2});
    ca_.Branch(tmp4, &block3, std::vector<compiler::Node*>{phi_bb5_3}, &block4, std::vector<compiler::Node*>{phi_bb5_3});
  }

  TNode<IntPtrT> phi_bb3_3;
  TNode<Object> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<UintPtrT> tmp8;
  TNode<UintPtrT> tmp9;
  TNode<BoolT> tmp10;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_3);
    std::tie(tmp5, tmp6, tmp7) = FieldSliceScopeInfoContextLocalNames_0(state_, TNode<ScopeInfo>{p_scopeInfo}).Flatten();
    tmp8 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb3_3});
    tmp9 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp7});
    tmp10 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp8}, TNode<UintPtrT>{tmp9});
    ca_.Branch(tmp10, &block13, std::vector<compiler::Node*>{phi_bb3_3, phi_bb3_3, phi_bb3_3, phi_bb3_3, phi_bb3_3}, &block14, std::vector<compiler::Node*>{phi_bb3_3, phi_bb3_3, phi_bb3_3, phi_bb3_3, phi_bb3_3});
  }

  TNode<IntPtrT> phi_bb13_3;
  TNode<IntPtrT> phi_bb13_9;
  TNode<IntPtrT> phi_bb13_10;
  TNode<IntPtrT> phi_bb13_14;
  TNode<IntPtrT> phi_bb13_15;
  TNode<IntPtrT> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<Object> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<String> tmp15;
  TNode<BoolT> tmp16;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_3, &phi_bb13_9, &phi_bb13_10, &phi_bb13_14, &phi_bb13_15);
    tmp11 = TimesSizeOf_String_0(state_, TNode<IntPtrT>{phi_bb13_15});
    tmp12 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp6}, TNode<IntPtrT>{tmp11});
    std::tie(tmp13, tmp14) = NewReference_String_0(state_, TNode<Object>{tmp5}, TNode<IntPtrT>{tmp12}).Flatten();
    tmp15 = CodeStubAssembler(state_).LoadReference<String>(CodeStubAssembler::Reference{tmp13, tmp14});
    tmp16 = CodeStubAssembler(state_).TaggedEqual(TNode<MaybeObject>{p_name}, TNode<MaybeObject>{tmp15});
    ca_.Branch(tmp16, &block7, std::vector<compiler::Node*>{phi_bb13_3}, &block8, std::vector<compiler::Node*>{phi_bb13_3});
  }

  TNode<IntPtrT> phi_bb14_3;
  TNode<IntPtrT> phi_bb14_9;
  TNode<IntPtrT> phi_bb14_10;
  TNode<IntPtrT> phi_bb14_14;
  TNode<IntPtrT> phi_bb14_15;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_3, &phi_bb14_9, &phi_bb14_10, &phi_bb14_14, &phi_bb14_15);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb7_3;
  if (block7.is_used()) {
    ca_.Bind(&block7, &phi_bb7_3);
    ca_.Goto(&block17, phi_bb7_3);
  }

  TNode<IntPtrT> phi_bb8_3;
  TNode<IntPtrT> tmp17;
  TNode<IntPtrT> tmp18;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_3);
    tmp17 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp18 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb8_3}, TNode<IntPtrT>{tmp17});
    ca_.Goto(&block5, tmp18);
  }

  TNode<IntPtrT> phi_bb4_3;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_3);
    ca_.Goto(label_NotFound);
  }

  TNode<IntPtrT> phi_bb17_2;
    ca_.Bind(&block17, &phi_bb17_2);
  return TNode<IntPtrT>{phi_bb17_2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=198&c=1
TNode<IntPtrT> IndexOfLocalName_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_scopeInfo, TNode<Name> p_name, compiler::CodeAssemblerLabel* label_NotFound) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Smi> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<BoolT> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp1 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_scopeInfo, tmp0});
    tmp2 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp1});
    tmp3 = FromConstexpr_intptr_constexpr_int32_0(state_, kScopeInfoMaxInlinedLocalNamesSize);
    tmp4 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp3});
    ca_.Branch(tmp4, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp5;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label6(&ca_);
    tmp5 = IndexOfInlinedLocalName_0(state_, TNode<ScopeInfo>{p_scopeInfo}, TNode<Name>{p_name}, &label6);
    ca_.Goto(&block8);
    if (label6.is_used()) {
      ca_.Bind(&label6);
      ca_.Goto(&block9);
    }
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    ca_.Goto(&block1);
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block2, tmp5);
  }

  TNode<Object> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<UintPtrT> tmp11;
  TNode<UintPtrT> tmp12;
  TNode<BoolT> tmp13;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    std::tie(tmp7, tmp8, tmp9) = FieldSliceScopeInfoContextLocalNamesHashtable_0(state_, TNode<ScopeInfo>{p_scopeInfo}).Flatten();
    tmp10 = Convert_intptr_constexpr_int31_0(state_, 0);
    tmp11 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp10});
    tmp12 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp9});
    tmp13 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp11}, TNode<UintPtrT>{tmp12});
    ca_.Branch(tmp13, &block16, std::vector<compiler::Node*>{}, &block17, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<Object> tmp16;
  TNode<IntPtrT> tmp17;
  TNode<NameToIndexHashTable> tmp18;
  TNode<IntPtrT> tmp19;
  if (block16.is_used()) {
    ca_.Bind(&block16);
    tmp14 = TimesSizeOf_NameToIndexHashTable_0(state_, TNode<IntPtrT>{tmp10});
    tmp15 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp8}, TNode<IntPtrT>{tmp14});
    std::tie(tmp16, tmp17) = NewReference_NameToIndexHashTable_0(state_, TNode<Object>{tmp7}, TNode<IntPtrT>{tmp15}).Flatten();
    tmp18 = CodeStubAssembler(state_).LoadReference<NameToIndexHashTable>(CodeStubAssembler::Reference{tmp16, tmp17});
    compiler::CodeAssemblerLabel label20(&ca_);
    tmp19 = CodeStubAssembler(state_).NameToIndexHashTableLookup(TNode<NameToIndexHashTable>{tmp18}, TNode<Name>{p_name}, &label20);
    ca_.Goto(&block20);
    if (label20.is_used()) {
      ca_.Bind(&label20);
      ca_.Goto(&block21);
    }
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block21.is_used()) {
    ca_.Bind(&block21);
    ca_.Goto(&block1);
  }

  if (block20.is_used()) {
    ca_.Bind(&block20);
    ca_.Goto(&block2, tmp19);
  }

  TNode<IntPtrT> phi_bb2_2;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_2);
    ca_.Goto(&block22, phi_bb2_2);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_NotFound);
  }

  TNode<IntPtrT> phi_bb22_2;
    ca_.Bind(&block22, &phi_bb22_2);
  return TNode<IntPtrT>{phi_bb22_2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=112&c=9
TNode<Smi> LoadScopeInfoFlags_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp1 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Smi>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=115&c=3
TNode<Smi> LoadScopeInfoParameterCount_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp1 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Smi>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=115&c=3
void StoreScopeInfoParameterCount_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o, TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0}, p_v);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=119&c=9
TNode<Smi> LoadScopeInfoContextLocalCount_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp1 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Smi>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=124&c=3
TorqueStructSlice_String_MutableReference_String_0 FieldSliceScopeInfoContextLocalNames_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Smi> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<BoolT> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp1 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp0});
    tmp2 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp1});
    tmp3 = FromConstexpr_intptr_constexpr_int32_0(state_, kScopeInfoMaxInlinedLocalNamesSize);
    tmp4 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp3});
    ca_.Branch(tmp4, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp5;
  TNode<Smi> tmp6;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp5 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp6 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp5});
    ca_.Goto(&block4, tmp6);
  }

  TNode<Smi> tmp7;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp7 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block4, tmp7);
  }

  TNode<Smi> phi_bb4_4;
  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Object> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<IntPtrT> tmp12;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_4);
    tmp8 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb4_4});
    tmp9 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x10ull));
    std::tie(tmp10, tmp11, tmp12) = NewMutableSlice_String_0(state_, TNode<Object>{p_o}, TNode<IntPtrT>{tmp9}, TNode<IntPtrT>{tmp8}).Flatten();
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TorqueStructSlice_String_MutableReference_String_0{TNode<Object>{tmp10}, TNode<IntPtrT>{tmp11}, TNode<IntPtrT>{tmp12}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=124&c=3
TNode<String> LoadScopeInfoContextLocalNames_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o, TNode<IntPtrT> p_i) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<UintPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceScopeInfoContextLocalNames_0(state_, TNode<ScopeInfo>{p_o}).Flatten();
    tmp3 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_i});
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<String> tmp10;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp6 = TimesSizeOf_String_0(state_, TNode<IntPtrT>{p_i});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_String_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    tmp10 = CodeStubAssembler(state_).LoadReference<String>(CodeStubAssembler::Reference{tmp8, tmp9});
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
  return TNode<String>{tmp10};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=124&c=3
void StoreScopeInfoContextLocalNames_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o, TNode<IntPtrT> p_i, TNode<String> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<UintPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceScopeInfoContextLocalNames_0(state_, TNode<ScopeInfo>{p_o}).Flatten();
    tmp3 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_i});
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp6 = TimesSizeOf_String_0(state_, TNode<IntPtrT>{p_i});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_String_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    CodeStubAssembler(state_).StoreReference<String>(CodeStubAssembler::Reference{tmp8, tmp9}, p_v);
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=129&c=3
TorqueStructSlice_NameToIndexHashTable_MutableReference_NameToIndexHashTable_0 FieldSliceScopeInfoContextLocalNamesHashtable_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<Smi> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<BoolT> tmp10;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceScopeInfoContextLocalNames_0(state_, TNode<ScopeInfo>{p_o}).Flatten();
    tmp3 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x4ull));
    tmp4 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp4});
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp7 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp6});
    tmp8 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp7});
    tmp9 = FromConstexpr_intptr_constexpr_int32_0(state_, kScopeInfoMaxInlinedLocalNamesSize);
    tmp10 = CodeStubAssembler(state_).IntPtrLessThanOrEqual(TNode<IntPtrT>{tmp9}, TNode<IntPtrT>{tmp8});
    ca_.Branch(tmp10, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp11;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp11 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    ca_.Goto(&block4, tmp11);
  }

  TNode<IntPtrT> tmp12;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp12 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block4, tmp12);
  }

  TNode<IntPtrT> phi_bb4_8;
  TNode<IntPtrT> tmp13;
  TNode<Object> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<IntPtrT> tmp16;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_8);
    tmp13 = Convert_intptr_intptr_0(state_, TNode<IntPtrT>{phi_bb4_8});
    std::tie(tmp14, tmp15, tmp16) = NewMutableSlice_NameToIndexHashTable_0(state_, TNode<Object>{p_o}, TNode<IntPtrT>{tmp5}, TNode<IntPtrT>{tmp13}).Flatten();
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TorqueStructSlice_NameToIndexHashTable_MutableReference_NameToIndexHashTable_0{TNode<Object>{tmp14}, TNode<IntPtrT>{tmp15}, TNode<IntPtrT>{tmp16}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=129&c=3
TNode<NameToIndexHashTable> LoadScopeInfoContextLocalNamesHashtable_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<UintPtrT> tmp5;
  TNode<BoolT> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceScopeInfoContextLocalNamesHashtable_0(state_, TNode<ScopeInfo>{p_o}).Flatten();
    tmp3 = Convert_intptr_constexpr_int31_0(state_, 0);
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp3});
    tmp5 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp6 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp4}, TNode<UintPtrT>{tmp5});
    ca_.Branch(tmp6, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<Object> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<NameToIndexHashTable> tmp11;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp7 = TimesSizeOf_NameToIndexHashTable_0(state_, TNode<IntPtrT>{tmp3});
    tmp8 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp7});
    std::tie(tmp9, tmp10) = NewReference_NameToIndexHashTable_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp8}).Flatten();
    tmp11 = CodeStubAssembler(state_).LoadReference<NameToIndexHashTable>(CodeStubAssembler::Reference{tmp9, tmp10});
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
  return TNode<NameToIndexHashTable>{tmp11};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=129&c=3
void StoreScopeInfoContextLocalNamesHashtable_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o, TNode<NameToIndexHashTable> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<UintPtrT> tmp5;
  TNode<BoolT> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceScopeInfoContextLocalNamesHashtable_0(state_, TNode<ScopeInfo>{p_o}).Flatten();
    tmp3 = Convert_intptr_constexpr_int31_0(state_, 0);
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp3});
    tmp5 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp6 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp4}, TNode<UintPtrT>{tmp5});
    ca_.Branch(tmp6, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<Object> tmp9;
  TNode<IntPtrT> tmp10;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp7 = TimesSizeOf_NameToIndexHashTable_0(state_, TNode<IntPtrT>{tmp3});
    tmp8 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp7});
    std::tie(tmp9, tmp10) = NewReference_NameToIndexHashTable_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp8}).Flatten();
    CodeStubAssembler(state_).StoreReference<NameToIndexHashTable>(CodeStubAssembler::Reference{tmp9, tmp10}, p_v);
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=135&c=3
TorqueStructSlice_SmiTagged_VariableProperties_MutableReference_SmiTagged_VariableProperties_0 FieldSliceScopeInfoContextLocalInfos_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<Smi> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<Object> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<IntPtrT> tmp11;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceScopeInfoContextLocalNamesHashtable_0(state_, TNode<ScopeInfo>{p_o}).Flatten();
    tmp3 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x4ull));
    tmp4 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp4});
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp7 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp6});
    tmp8 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp7});
    std::tie(tmp9, tmp10, tmp11) = NewMutableSlice_SmiTagged_VariableProperties_0(state_, TNode<Object>{p_o}, TNode<IntPtrT>{tmp5}, TNode<IntPtrT>{tmp8}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructSlice_SmiTagged_VariableProperties_MutableReference_SmiTagged_VariableProperties_0{TNode<Object>{tmp9}, TNode<IntPtrT>{tmp10}, TNode<IntPtrT>{tmp11}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=135&c=3
TNode<Smi> LoadScopeInfoContextLocalInfos_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o, TNode<IntPtrT> p_i) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<UintPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceScopeInfoContextLocalInfos_0(state_, TNode<ScopeInfo>{p_o}).Flatten();
    tmp3 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_i});
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Smi> tmp10;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp6 = TimesSizeOf_SmiTagged_VariableProperties_0(state_, TNode<IntPtrT>{p_i});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_SmiTagged_VariableProperties_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    tmp10 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp8, tmp9});
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
  return TNode<Smi>{tmp10};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=135&c=3
void StoreScopeInfoContextLocalInfos_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o, TNode<IntPtrT> p_i, TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<UintPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceScopeInfoContextLocalInfos_0(state_, TNode<ScopeInfo>{p_o}).Flatten();
    tmp3 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_i});
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp6 = TimesSizeOf_SmiTagged_VariableProperties_0(state_, TNode<IntPtrT>{p_i});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_SmiTagged_VariableProperties_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp8, tmp9}, p_v);
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=141&c=3
TorqueStructSlice_Smi_MutableReference_Smi_0 FieldSliceScopeInfoSavedClassVariableInfo_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<Smi> tmp7;
  TNode<BoolT> tmp8;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceScopeInfoContextLocalInfos_0(state_, TNode<ScopeInfo>{p_o}).Flatten();
    tmp3 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x4ull));
    tmp4 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp4});
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp7 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp6});
    tmp8 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32FromWord<base::BitField<bool, 11, 1, uintptr_t>>(ca_.UncheckedCast<WordT>(ca_.BitcastTaggedToWordForTagAndSmiBits(tmp7))));
    ca_.Branch(tmp8, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp9;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp9 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    ca_.Goto(&block4, tmp9);
  }

  TNode<IntPtrT> tmp10;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp10 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block4, tmp10);
  }

  TNode<IntPtrT> phi_bb4_8;
  TNode<IntPtrT> tmp11;
  TNode<Object> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_8);
    tmp11 = Convert_intptr_intptr_0(state_, TNode<IntPtrT>{phi_bb4_8});
    std::tie(tmp12, tmp13, tmp14) = NewMutableSlice_Smi_0(state_, TNode<Object>{p_o}, TNode<IntPtrT>{tmp5}, TNode<IntPtrT>{tmp11}).Flatten();
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TorqueStructSlice_Smi_MutableReference_Smi_0{TNode<Object>{tmp12}, TNode<IntPtrT>{tmp13}, TNode<IntPtrT>{tmp14}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=141&c=3
TNode<Smi> LoadScopeInfoSavedClassVariableInfo_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<UintPtrT> tmp5;
  TNode<BoolT> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceScopeInfoSavedClassVariableInfo_0(state_, TNode<ScopeInfo>{p_o}).Flatten();
    tmp3 = Convert_intptr_constexpr_int31_0(state_, 0);
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp3});
    tmp5 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp6 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp4}, TNode<UintPtrT>{tmp5});
    ca_.Branch(tmp6, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<Object> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<Smi> tmp11;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp7 = TimesSizeOf_Smi_0(state_, TNode<IntPtrT>{tmp3});
    tmp8 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp7});
    std::tie(tmp9, tmp10) = NewReference_Smi_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp8}).Flatten();
    tmp11 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp9, tmp10});
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
  return TNode<Smi>{tmp11};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=141&c=3
void StoreScopeInfoSavedClassVariableInfo_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o, TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<UintPtrT> tmp5;
  TNode<BoolT> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceScopeInfoSavedClassVariableInfo_0(state_, TNode<ScopeInfo>{p_o}).Flatten();
    tmp3 = Convert_intptr_constexpr_int31_0(state_, 0);
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp3});
    tmp5 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp6 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp4}, TNode<UintPtrT>{tmp5});
    ca_.Branch(tmp6, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<Object> tmp9;
  TNode<IntPtrT> tmp10;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp7 = TimesSizeOf_Smi_0(state_, TNode<IntPtrT>{tmp3});
    tmp8 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp7});
    std::tie(tmp9, tmp10) = NewReference_Smi_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp8}).Flatten();
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp9, tmp10}, p_v);
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=147&c=3
TorqueStructSlice_FunctionVariableInfo_MutableReference_FunctionVariableInfo_0 FieldSliceScopeInfoFunctionVariableInfo_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<Smi> tmp7;
  TNode<Uint32T> tmp8;
  TNode<Uint32T> tmp9;
  TNode<BoolT> tmp10;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceScopeInfoSavedClassVariableInfo_0(state_, TNode<ScopeInfo>{p_o}).Flatten();
    tmp3 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x4ull));
    tmp4 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp4});
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp7 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp6});
    tmp8 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).DecodeWord32FromWord<base::BitField<VariableAllocationInfo, 13, 2, uintptr_t>>(ca_.UncheckedCast<WordT>(ca_.BitcastTaggedToWordForTagAndSmiBits(tmp7))));
    tmp9 = FromConstexpr_VariableAllocationInfo_constexpr_NONE_0(state_, VariableAllocationInfo::NONE);
    tmp10 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{tmp8}, TNode<Uint32T>{tmp9});
    ca_.Branch(tmp10, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp11;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp11 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    ca_.Goto(&block4, tmp11);
  }

  TNode<IntPtrT> tmp12;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp12 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block4, tmp12);
  }

  TNode<IntPtrT> phi_bb4_8;
  TNode<IntPtrT> tmp13;
  TNode<Object> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<IntPtrT> tmp16;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_8);
    tmp13 = Convert_intptr_intptr_0(state_, TNode<IntPtrT>{phi_bb4_8});
    std::tie(tmp14, tmp15, tmp16) = NewMutableSlice_FunctionVariableInfo_0(state_, TNode<Object>{p_o}, TNode<IntPtrT>{tmp5}, TNode<IntPtrT>{tmp13}).Flatten();
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TorqueStructSlice_FunctionVariableInfo_MutableReference_FunctionVariableInfo_0{TNode<Object>{tmp14}, TNode<IntPtrT>{tmp15}, TNode<IntPtrT>{tmp16}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=152&c=3
TorqueStructSlice_Undefined_OR_String_MutableReference_Undefined_OR_String_0 FieldSliceScopeInfoInferredFunctionName_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<Smi> tmp7;
  TNode<BoolT> tmp8;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceScopeInfoFunctionVariableInfo_0(state_, TNode<ScopeInfo>{p_o}).Flatten();
    tmp3 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x8ull));
    tmp4 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp4});
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp7 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp6});
    tmp8 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32FromWord<base::BitField<bool, 15, 1, uintptr_t>>(ca_.UncheckedCast<WordT>(ca_.BitcastTaggedToWordForTagAndSmiBits(tmp7))));
    ca_.Branch(tmp8, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp9;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp9 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    ca_.Goto(&block4, tmp9);
  }

  TNode<IntPtrT> tmp10;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp10 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block4, tmp10);
  }

  TNode<IntPtrT> phi_bb4_8;
  TNode<IntPtrT> tmp11;
  TNode<Object> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_8);
    tmp11 = Convert_intptr_intptr_0(state_, TNode<IntPtrT>{phi_bb4_8});
    std::tie(tmp12, tmp13, tmp14) = NewMutableSlice_Undefined_OR_String_0(state_, TNode<Object>{p_o}, TNode<IntPtrT>{tmp5}, TNode<IntPtrT>{tmp11}).Flatten();
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TorqueStructSlice_Undefined_OR_String_MutableReference_Undefined_OR_String_0{TNode<Object>{tmp12}, TNode<IntPtrT>{tmp13}, TNode<IntPtrT>{tmp14}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=152&c=3
TNode<PrimitiveHeapObject> LoadScopeInfoInferredFunctionName_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<UintPtrT> tmp5;
  TNode<BoolT> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceScopeInfoInferredFunctionName_0(state_, TNode<ScopeInfo>{p_o}).Flatten();
    tmp3 = Convert_intptr_constexpr_int31_0(state_, 0);
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp3});
    tmp5 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp6 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp4}, TNode<UintPtrT>{tmp5});
    ca_.Branch(tmp6, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<Object> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<PrimitiveHeapObject> tmp11;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp7 = TimesSizeOf_Undefined_OR_String_0(state_, TNode<IntPtrT>{tmp3});
    tmp8 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp7});
    std::tie(tmp9, tmp10) = NewReference_Undefined_OR_String_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp8}).Flatten();
    tmp11 = CodeStubAssembler(state_).LoadReference<PrimitiveHeapObject>(CodeStubAssembler::Reference{tmp9, tmp10});
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
  return TNode<PrimitiveHeapObject>{tmp11};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=152&c=3
void StoreScopeInfoInferredFunctionName_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o, TNode<PrimitiveHeapObject> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<UintPtrT> tmp5;
  TNode<BoolT> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceScopeInfoInferredFunctionName_0(state_, TNode<ScopeInfo>{p_o}).Flatten();
    tmp3 = Convert_intptr_constexpr_int31_0(state_, 0);
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp3});
    tmp5 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp6 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp4}, TNode<UintPtrT>{tmp5});
    ca_.Branch(tmp6, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<Object> tmp9;
  TNode<IntPtrT> tmp10;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp7 = TimesSizeOf_Undefined_OR_String_0(state_, TNode<IntPtrT>{tmp3});
    tmp8 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp7});
    std::tie(tmp9, tmp10) = NewReference_Undefined_OR_String_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp8}).Flatten();
    CodeStubAssembler(state_).StoreReference<PrimitiveHeapObject>(CodeStubAssembler::Reference{tmp9, tmp10}, p_v);
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=156&c=3
TorqueStructSlice_PositionInfo_MutableReference_PositionInfo_0 FieldSliceScopeInfoPositionInfo_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<Smi> tmp7;
  TNode<Uint32T> tmp8;
  TNode<Uint32T> tmp9;
  TNode<BoolT> tmp10;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceScopeInfoInferredFunctionName_0(state_, TNode<ScopeInfo>{p_o}).Flatten();
    tmp3 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x4ull));
    tmp4 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp4});
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp7 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp6});
    tmp8 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).DecodeWord32FromWord<base::BitField<ScopeType, 1, 4, uintptr_t>>(ca_.UncheckedCast<WordT>(ca_.BitcastTaggedToWordForTagAndSmiBits(tmp7))));
    tmp9 = FromConstexpr_uint32_constexpr_uint32_0(state_, ScopeType::FUNCTION_SCOPE);
    tmp10 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp8}, TNode<Uint32T>{tmp9});
    ca_.Branch(tmp10, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp11;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp11 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block8, tmp11);
  }

  TNode<IntPtrT> tmp12;
  TNode<Smi> tmp13;
  TNode<Uint32T> tmp14;
  TNode<Uint32T> tmp15;
  TNode<BoolT> tmp16;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp12 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp13 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp12});
    tmp14 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).DecodeWord32FromWord<base::BitField<ScopeType, 1, 4, uintptr_t>>(ca_.UncheckedCast<WordT>(ca_.BitcastTaggedToWordForTagAndSmiBits(tmp13))));
    tmp15 = FromConstexpr_uint32_constexpr_uint32_0(state_, ScopeType::SCRIPT_SCOPE);
    tmp16 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp14}, TNode<Uint32T>{tmp15});
    ca_.Goto(&block8, tmp16);
  }

  TNode<BoolT> phi_bb8_9;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_9);
    ca_.Branch(phi_bb8_9, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp17;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp17 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block11, tmp17);
  }

  TNode<IntPtrT> tmp18;
  TNode<Smi> tmp19;
  TNode<Uint32T> tmp20;
  TNode<Uint32T> tmp21;
  TNode<BoolT> tmp22;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp18 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp19 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp18});
    tmp20 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).DecodeWord32FromWord<base::BitField<ScopeType, 1, 4, uintptr_t>>(ca_.UncheckedCast<WordT>(ca_.BitcastTaggedToWordForTagAndSmiBits(tmp19))));
    tmp21 = FromConstexpr_uint32_constexpr_uint32_0(state_, ScopeType::EVAL_SCOPE);
    tmp22 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp20}, TNode<Uint32T>{tmp21});
    ca_.Goto(&block11, tmp22);
  }

  TNode<BoolT> phi_bb11_9;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_9);
    ca_.Branch(phi_bb11_9, &block12, std::vector<compiler::Node*>{}, &block13, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp23;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp23 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block14, tmp23);
  }

  TNode<IntPtrT> tmp24;
  TNode<Smi> tmp25;
  TNode<Uint32T> tmp26;
  TNode<Uint32T> tmp27;
  TNode<BoolT> tmp28;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp24 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp25 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp24});
    tmp26 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).DecodeWord32FromWord<base::BitField<ScopeType, 1, 4, uintptr_t>>(ca_.UncheckedCast<WordT>(ca_.BitcastTaggedToWordForTagAndSmiBits(tmp25))));
    tmp27 = FromConstexpr_uint32_constexpr_uint32_0(state_, ScopeType::MODULE_SCOPE);
    tmp28 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp26}, TNode<Uint32T>{tmp27});
    ca_.Goto(&block14, tmp28);
  }

  TNode<BoolT> phi_bb14_9;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_9);
    ca_.Branch(phi_bb14_9, &block15, std::vector<compiler::Node*>{}, &block16, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp29;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp29 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block17, tmp29);
  }

  TNode<IntPtrT> tmp30;
  TNode<Smi> tmp31;
  TNode<BoolT> tmp32;
  if (block16.is_used()) {
    ca_.Bind(&block16);
    tmp30 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp31 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp30});
    tmp32 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32FromWord<base::BitField<bool, 30, 1, uintptr_t>>(ca_.UncheckedCast<WordT>(ca_.BitcastTaggedToWordForTagAndSmiBits(tmp31))));
    ca_.Branch(tmp32, &block18, std::vector<compiler::Node*>{}, &block19, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp33;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp33 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block20, tmp33);
  }

  TNode<IntPtrT> tmp34;
  TNode<Smi> tmp35;
  TNode<Uint32T> tmp36;
  TNode<Uint32T> tmp37;
  TNode<BoolT> tmp38;
  if (block19.is_used()) {
    ca_.Bind(&block19);
    tmp34 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp35 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp34});
    tmp36 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).DecodeWord32FromWord<base::BitField<ScopeType, 1, 4, uintptr_t>>(ca_.UncheckedCast<WordT>(ca_.BitcastTaggedToWordForTagAndSmiBits(tmp35))));
    tmp37 = FromConstexpr_uint32_constexpr_uint32_0(state_, ScopeType::CLASS_SCOPE);
    tmp38 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp36}, TNode<Uint32T>{tmp37});
    ca_.Goto(&block20, tmp38);
  }

  TNode<BoolT> phi_bb20_9;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_9);
    ca_.Goto(&block17, phi_bb20_9);
  }

  TNode<BoolT> phi_bb17_9;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_9);
    ca_.Branch(phi_bb17_9, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp39;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp39 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    ca_.Goto(&block4, tmp39);
  }

  TNode<IntPtrT> tmp40;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp40 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block4, tmp40);
  }

  TNode<IntPtrT> phi_bb4_8;
  TNode<IntPtrT> tmp41;
  TNode<Object> tmp42;
  TNode<IntPtrT> tmp43;
  TNode<IntPtrT> tmp44;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_8);
    tmp41 = Convert_intptr_intptr_0(state_, TNode<IntPtrT>{phi_bb4_8});
    std::tie(tmp42, tmp43, tmp44) = NewMutableSlice_PositionInfo_0(state_, TNode<Object>{p_o}, TNode<IntPtrT>{tmp5}, TNode<IntPtrT>{tmp41}).Flatten();
    ca_.Goto(&block22);
  }

    ca_.Bind(&block22);
  return TorqueStructSlice_PositionInfo_MutableReference_PositionInfo_0{TNode<Object>{tmp42}, TNode<IntPtrT>{tmp43}, TNode<IntPtrT>{tmp44}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=164&c=3
TorqueStructSlice_TheHole_OR_ScopeInfo_MutableReference_TheHole_OR_ScopeInfo_0 FieldSliceScopeInfoOuterScopeInfo_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<Smi> tmp7;
  TNode<BoolT> tmp8;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceScopeInfoPositionInfo_0(state_, TNode<ScopeInfo>{p_o}).Flatten();
    tmp3 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x8ull));
    tmp4 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp4});
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp7 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp6});
    tmp8 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32FromWord<base::BitField<bool, 23, 1, uintptr_t>>(ca_.UncheckedCast<WordT>(ca_.BitcastTaggedToWordForTagAndSmiBits(tmp7))));
    ca_.Branch(tmp8, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp9;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp9 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    ca_.Goto(&block4, tmp9);
  }

  TNode<IntPtrT> tmp10;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp10 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block4, tmp10);
  }

  TNode<IntPtrT> phi_bb4_8;
  TNode<IntPtrT> tmp11;
  TNode<Object> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_8);
    tmp11 = Convert_intptr_intptr_0(state_, TNode<IntPtrT>{phi_bb4_8});
    std::tie(tmp12, tmp13, tmp14) = NewMutableSlice_TheHole_OR_ScopeInfo_0(state_, TNode<Object>{p_o}, TNode<IntPtrT>{tmp5}, TNode<IntPtrT>{tmp11}).Flatten();
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TorqueStructSlice_TheHole_OR_ScopeInfo_MutableReference_TheHole_OR_ScopeInfo_0{TNode<Object>{tmp12}, TNode<IntPtrT>{tmp13}, TNode<IntPtrT>{tmp14}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=164&c=3
TNode<HeapObject> LoadScopeInfoOuterScopeInfo_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<UintPtrT> tmp5;
  TNode<BoolT> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceScopeInfoOuterScopeInfo_0(state_, TNode<ScopeInfo>{p_o}).Flatten();
    tmp3 = Convert_intptr_constexpr_int31_0(state_, 0);
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp3});
    tmp5 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp6 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp4}, TNode<UintPtrT>{tmp5});
    ca_.Branch(tmp6, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<Object> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<HeapObject> tmp11;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp7 = TimesSizeOf_TheHole_OR_ScopeInfo_0(state_, TNode<IntPtrT>{tmp3});
    tmp8 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp7});
    std::tie(tmp9, tmp10) = NewReference_TheHole_OR_ScopeInfo_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp8}).Flatten();
    tmp11 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp9, tmp10});
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
  return TNode<HeapObject>{tmp11};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=164&c=3
void StoreScopeInfoOuterScopeInfo_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o, TNode<HeapObject> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<UintPtrT> tmp5;
  TNode<BoolT> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceScopeInfoOuterScopeInfo_0(state_, TNode<ScopeInfo>{p_o}).Flatten();
    tmp3 = Convert_intptr_constexpr_int31_0(state_, 0);
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp3});
    tmp5 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp6 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp4}, TNode<UintPtrT>{tmp5});
    ca_.Branch(tmp6, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<Object> tmp9;
  TNode<IntPtrT> tmp10;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp7 = TimesSizeOf_TheHole_OR_ScopeInfo_0(state_, TNode<IntPtrT>{tmp3});
    tmp8 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp7});
    std::tie(tmp9, tmp10) = NewReference_TheHole_OR_ScopeInfo_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp8}).Flatten();
    CodeStubAssembler(state_).StoreReference<HeapObject>(CodeStubAssembler::Reference{tmp9, tmp10}, p_v);
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=169&c=3
TorqueStructSlice_HashTable_MutableReference_HashTable_0 FieldSliceScopeInfoLocalsBlockList_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<Smi> tmp7;
  TNode<BoolT> tmp8;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceScopeInfoOuterScopeInfo_0(state_, TNode<ScopeInfo>{p_o}).Flatten();
    tmp3 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x4ull));
    tmp4 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp4});
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp7 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp6});
    tmp8 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32FromWord<base::BitField<bool, 29, 1, uintptr_t>>(ca_.UncheckedCast<WordT>(ca_.BitcastTaggedToWordForTagAndSmiBits(tmp7))));
    ca_.Branch(tmp8, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp9;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp9 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    ca_.Goto(&block4, tmp9);
  }

  TNode<IntPtrT> tmp10;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp10 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block4, tmp10);
  }

  TNode<IntPtrT> phi_bb4_8;
  TNode<IntPtrT> tmp11;
  TNode<Object> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_8);
    tmp11 = Convert_intptr_intptr_0(state_, TNode<IntPtrT>{phi_bb4_8});
    std::tie(tmp12, tmp13, tmp14) = NewMutableSlice_HashTable_0(state_, TNode<Object>{p_o}, TNode<IntPtrT>{tmp5}, TNode<IntPtrT>{tmp11}).Flatten();
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TorqueStructSlice_HashTable_MutableReference_HashTable_0{TNode<Object>{tmp12}, TNode<IntPtrT>{tmp13}, TNode<IntPtrT>{tmp14}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=169&c=3
TNode<FixedArray> LoadScopeInfoLocalsBlockList_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<UintPtrT> tmp5;
  TNode<BoolT> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceScopeInfoLocalsBlockList_0(state_, TNode<ScopeInfo>{p_o}).Flatten();
    tmp3 = Convert_intptr_constexpr_int31_0(state_, 0);
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp3});
    tmp5 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp6 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp4}, TNode<UintPtrT>{tmp5});
    ca_.Branch(tmp6, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<Object> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<FixedArray> tmp11;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp7 = TimesSizeOf_HashTable_0(state_, TNode<IntPtrT>{tmp3});
    tmp8 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp7});
    std::tie(tmp9, tmp10) = NewReference_HashTable_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp8}).Flatten();
    tmp11 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{tmp9, tmp10});
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
  return TNode<FixedArray>{tmp11};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=169&c=3
void StoreScopeInfoLocalsBlockList_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o, TNode<FixedArray> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<UintPtrT> tmp5;
  TNode<BoolT> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceScopeInfoLocalsBlockList_0(state_, TNode<ScopeInfo>{p_o}).Flatten();
    tmp3 = Convert_intptr_constexpr_int31_0(state_, 0);
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp3});
    tmp5 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp6 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp4}, TNode<UintPtrT>{tmp5});
    ca_.Branch(tmp6, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<Object> tmp9;
  TNode<IntPtrT> tmp10;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp7 = TimesSizeOf_HashTable_0(state_, TNode<IntPtrT>{tmp3});
    tmp8 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp7});
    std::tie(tmp9, tmp10) = NewReference_HashTable_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp8}).Flatten();
    CodeStubAssembler(state_).StoreReference<FixedArray>(CodeStubAssembler::Reference{tmp9, tmp10}, p_v);
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=174&c=3
TorqueStructSlice_SourceTextModuleInfo_MutableReference_SourceTextModuleInfo_0 FieldSliceScopeInfoModuleInfo_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<Smi> tmp7;
  TNode<Uint32T> tmp8;
  TNode<Uint32T> tmp9;
  TNode<BoolT> tmp10;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceScopeInfoLocalsBlockList_0(state_, TNode<ScopeInfo>{p_o}).Flatten();
    tmp3 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x4ull));
    tmp4 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp4});
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp7 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp6});
    tmp8 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).DecodeWord32FromWord<base::BitField<ScopeType, 1, 4, uintptr_t>>(ca_.UncheckedCast<WordT>(ca_.BitcastTaggedToWordForTagAndSmiBits(tmp7))));
    tmp9 = FromConstexpr_uint32_constexpr_uint32_0(state_, ScopeType::MODULE_SCOPE);
    tmp10 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp8}, TNode<Uint32T>{tmp9});
    ca_.Branch(tmp10, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp11;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp11 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    ca_.Goto(&block4, tmp11);
  }

  TNode<IntPtrT> tmp12;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp12 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block4, tmp12);
  }

  TNode<IntPtrT> phi_bb4_8;
  TNode<IntPtrT> tmp13;
  TNode<Object> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<IntPtrT> tmp16;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_8);
    tmp13 = Convert_intptr_intptr_0(state_, TNode<IntPtrT>{phi_bb4_8});
    std::tie(tmp14, tmp15, tmp16) = NewMutableSlice_SourceTextModuleInfo_0(state_, TNode<Object>{p_o}, TNode<IntPtrT>{tmp5}, TNode<IntPtrT>{tmp13}).Flatten();
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TorqueStructSlice_SourceTextModuleInfo_MutableReference_SourceTextModuleInfo_0{TNode<Object>{tmp14}, TNode<IntPtrT>{tmp15}, TNode<IntPtrT>{tmp16}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=174&c=3
TNode<FixedArray> LoadScopeInfoModuleInfo_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<UintPtrT> tmp5;
  TNode<BoolT> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceScopeInfoModuleInfo_0(state_, TNode<ScopeInfo>{p_o}).Flatten();
    tmp3 = Convert_intptr_constexpr_int31_0(state_, 0);
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp3});
    tmp5 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp6 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp4}, TNode<UintPtrT>{tmp5});
    ca_.Branch(tmp6, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<Object> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<FixedArray> tmp11;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp7 = TimesSizeOf_SourceTextModuleInfo_0(state_, TNode<IntPtrT>{tmp3});
    tmp8 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp7});
    std::tie(tmp9, tmp10) = NewReference_SourceTextModuleInfo_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp8}).Flatten();
    tmp11 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{tmp9, tmp10});
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
  return TNode<FixedArray>{tmp11};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=174&c=3
void StoreScopeInfoModuleInfo_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o, TNode<FixedArray> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<UintPtrT> tmp5;
  TNode<BoolT> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceScopeInfoModuleInfo_0(state_, TNode<ScopeInfo>{p_o}).Flatten();
    tmp3 = Convert_intptr_constexpr_int31_0(state_, 0);
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp3});
    tmp5 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp6 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp4}, TNode<UintPtrT>{tmp5});
    ca_.Branch(tmp6, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<Object> tmp9;
  TNode<IntPtrT> tmp10;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp7 = TimesSizeOf_SourceTextModuleInfo_0(state_, TNode<IntPtrT>{tmp3});
    tmp8 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp7});
    std::tie(tmp9, tmp10) = NewReference_SourceTextModuleInfo_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp8}).Flatten();
    CodeStubAssembler(state_).StoreReference<FixedArray>(CodeStubAssembler::Reference{tmp9, tmp10}, p_v);
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=176&c=9
TorqueStructSlice_Smi_ConstReference_Smi_0 FieldSliceScopeInfoModuleVariableCount_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<Smi> tmp7;
  TNode<Uint32T> tmp8;
  TNode<Uint32T> tmp9;
  TNode<BoolT> tmp10;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceScopeInfoModuleInfo_0(state_, TNode<ScopeInfo>{p_o}).Flatten();
    tmp3 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x4ull));
    tmp4 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp4});
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp7 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp6});
    tmp8 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).DecodeWord32FromWord<base::BitField<ScopeType, 1, 4, uintptr_t>>(ca_.UncheckedCast<WordT>(ca_.BitcastTaggedToWordForTagAndSmiBits(tmp7))));
    tmp9 = FromConstexpr_uint32_constexpr_uint32_0(state_, ScopeType::MODULE_SCOPE);
    tmp10 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp8}, TNode<Uint32T>{tmp9});
    ca_.Branch(tmp10, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp11;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp11 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    ca_.Goto(&block4, tmp11);
  }

  TNode<IntPtrT> tmp12;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp12 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block4, tmp12);
  }

  TNode<IntPtrT> phi_bb4_8;
  TNode<IntPtrT> tmp13;
  TNode<Object> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<IntPtrT> tmp16;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_8);
    tmp13 = Convert_intptr_intptr_0(state_, TNode<IntPtrT>{phi_bb4_8});
    std::tie(tmp14, tmp15, tmp16) = NewConstSlice_Smi_0(state_, TNode<Object>{p_o}, TNode<IntPtrT>{tmp5}, TNode<IntPtrT>{tmp13}).Flatten();
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TorqueStructSlice_Smi_ConstReference_Smi_0{TNode<Object>{tmp14}, TNode<IntPtrT>{tmp15}, TNode<IntPtrT>{tmp16}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=176&c=9
TNode<Smi> LoadScopeInfoModuleVariableCount_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<UintPtrT> tmp5;
  TNode<BoolT> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceScopeInfoModuleVariableCount_0(state_, TNode<ScopeInfo>{p_o}).Flatten();
    tmp3 = Convert_intptr_constexpr_int31_0(state_, 0);
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp3});
    tmp5 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp6 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp4}, TNode<UintPtrT>{tmp5});
    ca_.Branch(tmp6, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<Object> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<Smi> tmp11;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp7 = TimesSizeOf_Smi_0(state_, TNode<IntPtrT>{tmp3});
    tmp8 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp7});
    std::tie(tmp9, tmp10) = NewReference_Smi_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp8}).Flatten();
    tmp11 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp9, tmp10});
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
  return TNode<Smi>{tmp11};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=178&c=3
TorqueStructSlice_ModuleVariable_MutableReference_ModuleVariable_0 FieldSliceScopeInfoModuleVariables_0(compiler::CodeAssemblerState* state_, TNode<ScopeInfo> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<Smi> tmp7;
  TNode<Uint32T> tmp8;
  TNode<Uint32T> tmp9;
  TNode<BoolT> tmp10;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceScopeInfoModuleVariableCount_0(state_, TNode<ScopeInfo>{p_o}).Flatten();
    tmp3 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x4ull));
    tmp4 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp4});
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp7 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_o, tmp6});
    tmp8 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).DecodeWord32FromWord<base::BitField<ScopeType, 1, 4, uintptr_t>>(ca_.UncheckedCast<WordT>(ca_.BitcastTaggedToWordForTagAndSmiBits(tmp7))));
    tmp9 = FromConstexpr_uint32_constexpr_uint32_0(state_, ScopeType::MODULE_SCOPE);
    tmp10 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp8}, TNode<Uint32T>{tmp9});
    ca_.Branch(tmp10, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<Object> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<UintPtrT> tmp15;
  TNode<UintPtrT> tmp16;
  TNode<BoolT> tmp17;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    std::tie(tmp11, tmp12, tmp13) = FieldSliceScopeInfoModuleVariableCount_0(state_, TNode<ScopeInfo>{p_o}).Flatten();
    tmp14 = Convert_intptr_constexpr_int31_0(state_, 0);
    tmp15 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp14});
    tmp16 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp13});
    tmp17 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp15}, TNode<UintPtrT>{tmp16});
    ca_.Branch(tmp17, &block10, std::vector<compiler::Node*>{}, &block11, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp18;
  TNode<IntPtrT> tmp19;
  TNode<Object> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<Smi> tmp22;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp18 = TimesSizeOf_Smi_0(state_, TNode<IntPtrT>{tmp14});
    tmp19 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp12}, TNode<IntPtrT>{tmp18});
    std::tie(tmp20, tmp21) = NewReference_Smi_0(state_, TNode<Object>{tmp11}, TNode<IntPtrT>{tmp19}).Flatten();
    tmp22 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp20, tmp21});
    ca_.Goto(&block4, tmp22);
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> tmp23;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp23 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block4, tmp23);
  }

  TNode<Smi> phi_bb4_8;
  TNode<IntPtrT> tmp24;
  TNode<Object> tmp25;
  TNode<IntPtrT> tmp26;
  TNode<IntPtrT> tmp27;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_8);
    tmp24 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb4_8});
    std::tie(tmp25, tmp26, tmp27) = NewMutableSlice_ModuleVariable_0(state_, TNode<Object>{p_o}, TNode<IntPtrT>{tmp5}, TNode<IntPtrT>{tmp24}).Flatten();
    ca_.Goto(&block14);
  }

    ca_.Bind(&block14);
  return TorqueStructSlice_ModuleVariable_MutableReference_ModuleVariable_0{TNode<Object>{tmp25}, TNode<IntPtrT>{tmp26}, TNode<IntPtrT>{tmp27}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=110&c=1
TNode<ScopeInfo> DownCastForTorqueClass_ScopeInfo_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
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
    if (((CodeStubAssembler(state_).ConstexprInt31Equal(static_cast<InstanceType>(256), static_cast<InstanceType>(256))))) {
      ca_.Goto(&block3);
    } else {
      ca_.Goto(&block4);
    }
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    if ((CodeStubAssembler(state_).ClassHasMapConstant<ScopeInfo>())) {
      ca_.Goto(&block6);
    } else {
      ca_.Goto(&block7);
    }
  }

  TNode<Map> tmp2;
  TNode<BoolT> tmp3;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp2 = CodeStubAssembler(state_).GetClassMapConstant<ScopeInfo>();
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
    tmp6 = FromConstexpr_uint32_constexpr_uint32_0(state_, static_cast<InstanceType>(256));
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
    tmp8 = FromConstexpr_int32_constexpr_int32_0(state_, (CodeStubAssembler(state_).ConstexprUint32Sub(static_cast<InstanceType>(256), static_cast<InstanceType>(256))));
    tmp9 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp10 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp1, tmp9});
    tmp11 = Convert_uint16_InstanceType_0(state_, TNode<Uint16T>{tmp10});
    tmp12 = Convert_int32_uint16_0(state_, TNode<Uint16T>{tmp11});
    tmp13 = FromConstexpr_InstanceType_constexpr_InstanceType_0(state_, static_cast<InstanceType>(256));
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

  TNode<ScopeInfo> tmp20;
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
  return TNode<ScopeInfo>{tmp20};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=124&c=3
TorqueStructSlice_String_MutableReference_String_0 NewMutableSlice_String_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset, TNode<IntPtrT> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = (TorqueStructSlice_String_MutableReference_String_0{TNode<Object>{p_object}, TNode<IntPtrT>{p_offset}, TNode<IntPtrT>{p_length}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructSlice_String_MutableReference_String_0{TNode<Object>{tmp0}, TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp2}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=129&c=3
TorqueStructSlice_NameToIndexHashTable_MutableReference_NameToIndexHashTable_0 NewMutableSlice_NameToIndexHashTable_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset, TNode<IntPtrT> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = (TorqueStructSlice_NameToIndexHashTable_MutableReference_NameToIndexHashTable_0{TNode<Object>{p_object}, TNode<IntPtrT>{p_offset}, TNode<IntPtrT>{p_length}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructSlice_NameToIndexHashTable_MutableReference_NameToIndexHashTable_0{TNode<Object>{tmp0}, TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp2}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=135&c=3
TorqueStructSlice_SmiTagged_VariableProperties_MutableReference_SmiTagged_VariableProperties_0 NewMutableSlice_SmiTagged_VariableProperties_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset, TNode<IntPtrT> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = (TorqueStructSlice_SmiTagged_VariableProperties_MutableReference_SmiTagged_VariableProperties_0{TNode<Object>{p_object}, TNode<IntPtrT>{p_offset}, TNode<IntPtrT>{p_length}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructSlice_SmiTagged_VariableProperties_MutableReference_SmiTagged_VariableProperties_0{TNode<Object>{tmp0}, TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp2}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=141&c=3
TorqueStructSlice_Smi_MutableReference_Smi_0 NewMutableSlice_Smi_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset, TNode<IntPtrT> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = (TorqueStructSlice_Smi_MutableReference_Smi_0{TNode<Object>{p_object}, TNode<IntPtrT>{p_offset}, TNode<IntPtrT>{p_length}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructSlice_Smi_MutableReference_Smi_0{TNode<Object>{tmp0}, TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp2}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=147&c=3
TorqueStructSlice_FunctionVariableInfo_MutableReference_FunctionVariableInfo_0 NewMutableSlice_FunctionVariableInfo_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset, TNode<IntPtrT> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = (TorqueStructSlice_FunctionVariableInfo_MutableReference_FunctionVariableInfo_0{TNode<Object>{p_object}, TNode<IntPtrT>{p_offset}, TNode<IntPtrT>{p_length}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructSlice_FunctionVariableInfo_MutableReference_FunctionVariableInfo_0{TNode<Object>{tmp0}, TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp2}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=152&c=3
TorqueStructSlice_Undefined_OR_String_MutableReference_Undefined_OR_String_0 NewMutableSlice_Undefined_OR_String_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset, TNode<IntPtrT> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = (TorqueStructSlice_Undefined_OR_String_MutableReference_Undefined_OR_String_0{TNode<Object>{p_object}, TNode<IntPtrT>{p_offset}, TNode<IntPtrT>{p_length}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructSlice_Undefined_OR_String_MutableReference_Undefined_OR_String_0{TNode<Object>{tmp0}, TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp2}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=156&c=3
TorqueStructSlice_PositionInfo_MutableReference_PositionInfo_0 NewMutableSlice_PositionInfo_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset, TNode<IntPtrT> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = (TorqueStructSlice_PositionInfo_MutableReference_PositionInfo_0{TNode<Object>{p_object}, TNode<IntPtrT>{p_offset}, TNode<IntPtrT>{p_length}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructSlice_PositionInfo_MutableReference_PositionInfo_0{TNode<Object>{tmp0}, TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp2}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=164&c=3
TorqueStructSlice_TheHole_OR_ScopeInfo_MutableReference_TheHole_OR_ScopeInfo_0 NewMutableSlice_TheHole_OR_ScopeInfo_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset, TNode<IntPtrT> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = (TorqueStructSlice_TheHole_OR_ScopeInfo_MutableReference_TheHole_OR_ScopeInfo_0{TNode<Object>{p_object}, TNode<IntPtrT>{p_offset}, TNode<IntPtrT>{p_length}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructSlice_TheHole_OR_ScopeInfo_MutableReference_TheHole_OR_ScopeInfo_0{TNode<Object>{tmp0}, TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp2}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=169&c=3
TorqueStructSlice_HashTable_MutableReference_HashTable_0 NewMutableSlice_HashTable_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset, TNode<IntPtrT> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = (TorqueStructSlice_HashTable_MutableReference_HashTable_0{TNode<Object>{p_object}, TNode<IntPtrT>{p_offset}, TNode<IntPtrT>{p_length}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructSlice_HashTable_MutableReference_HashTable_0{TNode<Object>{tmp0}, TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp2}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=174&c=3
TorqueStructSlice_SourceTextModuleInfo_MutableReference_SourceTextModuleInfo_0 NewMutableSlice_SourceTextModuleInfo_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset, TNode<IntPtrT> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = (TorqueStructSlice_SourceTextModuleInfo_MutableReference_SourceTextModuleInfo_0{TNode<Object>{p_object}, TNode<IntPtrT>{p_offset}, TNode<IntPtrT>{p_length}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructSlice_SourceTextModuleInfo_MutableReference_SourceTextModuleInfo_0{TNode<Object>{tmp0}, TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp2}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=176&c=9
TorqueStructSlice_Smi_ConstReference_Smi_0 NewConstSlice_Smi_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset, TNode<IntPtrT> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = (TorqueStructSlice_Smi_ConstReference_Smi_0{TNode<Object>{p_object}, TNode<IntPtrT>{p_offset}, TNode<IntPtrT>{p_length}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructSlice_Smi_ConstReference_Smi_0{TNode<Object>{tmp0}, TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp2}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=178&c=3
TorqueStructSlice_ModuleVariable_MutableReference_ModuleVariable_0 NewMutableSlice_ModuleVariable_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset, TNode<IntPtrT> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = (TorqueStructSlice_ModuleVariable_MutableReference_ModuleVariable_0{TNode<Object>{p_object}, TNode<IntPtrT>{p_offset}, TNode<IntPtrT>{p_length}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructSlice_ModuleVariable_MutableReference_ModuleVariable_0{TNode<Object>{tmp0}, TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp2}, TorqueStructUnsafe_0{}};
}

} // namespace internal
} // namespace v8
