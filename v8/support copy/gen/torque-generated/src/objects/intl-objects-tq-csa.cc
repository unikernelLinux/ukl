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
#include "torque-generated/src/objects/intl-objects-tq-csa.h"
#include "torque-generated/src/builtins/array-join-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/builtins-string-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/objects/string-tq-csa.h"
#include "torque-generated/src/objects/intl-objects-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=13&c=1
TNode<Uint8T> IntlAsciiCollationWeightL1_0(compiler::CodeAssemblerState* state_, TNode<Uint8T> p_c, compiler::CodeAssemblerLabel* label__Bailout) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  TNode<RawPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Uint8T> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_bool_constexpr_bool_0(state_, (CodeStubAssembler(state_).ConstexprInt31Equal(Intl::kAsciiCollationWeightsLength, (FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x100ull))))));
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp0}, "static_assert(kIntlAsciiCollationWeightsLength == 256) at https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=14&c=3");
    tmp1 = CodeStubAssembler(state_).IntlAsciiCollationWeightsL1();
    tmp2 = Convert_intptr_char8_0(state_, TNode<Uint8T>{p_c});
    tmp3 = CodeStubAssembler(state_).LoadUint8Ptr(TNode<RawPtrT>{tmp1}, TNode<IntPtrT>{tmp2});
    ca_.Goto(&block3);
  }

    ca_.Bind(&block3);
  return TNode<Uint8T>{tmp3};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=17&c=1
TNode<Uint8T> IntlAsciiCollationWeightL1_1(compiler::CodeAssemblerState* state_, TNode<Uint16T> p_c, compiler::CodeAssemblerLabel* label_Bailout) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  TNode<BoolT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Convert_uint32_char16_0(state_, TNode<Uint16T>{p_c});
    tmp1 = FromConstexpr_uint32_constexpr_int31_0(state_, Intl::kAsciiCollationWeightsLength);
    tmp2 = CodeStubAssembler(state_).Uint32GreaterThanOrEqual(TNode<Uint32T>{tmp0}, TNode<Uint32T>{tmp1});
    ca_.Branch(tmp2, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(label_Bailout);
  }

  TNode<RawPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Uint8T> tmp5;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp3 = CodeStubAssembler(state_).IntlAsciiCollationWeightsL1();
    tmp4 = Convert_intptr_char16_0(state_, TNode<Uint16T>{p_c});
    tmp5 = CodeStubAssembler(state_).LoadUint8Ptr(TNode<RawPtrT>{tmp3}, TNode<IntPtrT>{tmp4});
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
  return TNode<Uint8T>{tmp5};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=22&c=1
TNode<Uint8T> IntlAsciiCollationWeightL3_0(compiler::CodeAssemblerState* state_, TNode<Uint8T> p_c, compiler::CodeAssemblerLabel* label__Bailout) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  TNode<RawPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Uint8T> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_bool_constexpr_bool_0(state_, (CodeStubAssembler(state_).ConstexprInt31Equal(Intl::kAsciiCollationWeightsLength, (FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x100ull))))));
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp0}, "static_assert(kIntlAsciiCollationWeightsLength == 256) at https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=23&c=3");
    tmp1 = CodeStubAssembler(state_).IntlAsciiCollationWeightsL3();
    tmp2 = Convert_intptr_char8_0(state_, TNode<Uint8T>{p_c});
    tmp3 = CodeStubAssembler(state_).LoadUint8Ptr(TNode<RawPtrT>{tmp1}, TNode<IntPtrT>{tmp2});
    ca_.Goto(&block3);
  }

    ca_.Bind(&block3);
  return TNode<Uint8T>{tmp3};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=26&c=1
TNode<Uint8T> IntlAsciiCollationWeightL3_1(compiler::CodeAssemblerState* state_, TNode<Uint16T> p_c, compiler::CodeAssemblerLabel* label_Bailout) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  TNode<BoolT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Convert_uint32_char16_0(state_, TNode<Uint16T>{p_c});
    tmp1 = FromConstexpr_uint32_constexpr_int31_0(state_, Intl::kAsciiCollationWeightsLength);
    tmp2 = CodeStubAssembler(state_).Uint32GreaterThanOrEqual(TNode<Uint32T>{tmp0}, TNode<Uint32T>{tmp1});
    ca_.Branch(tmp2, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(label_Bailout);
  }

  TNode<RawPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Uint8T> tmp5;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp3 = CodeStubAssembler(state_).IntlAsciiCollationWeightsL3();
    tmp4 = Convert_intptr_char16_0(state_, TNode<Uint16T>{p_c});
    tmp5 = CodeStubAssembler(state_).LoadUint8Ptr(TNode<RawPtrT>{tmp3}, TNode<IntPtrT>{tmp4});
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
  return TNode<Uint8T>{tmp5};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=31&c=1
void CheckEmptyOr1Byte_0(compiler::CodeAssemblerState* state_, TorqueStructSliceIterator_char8_ConstReference_char8_0 p__it, compiler::CodeAssemblerLabel* label__Bailout) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.Goto(&block3);
  }

    ca_.Bind(&block3);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=36&c=1
void CheckEmptyOr1Byte_1(compiler::CodeAssemblerState* state_, TorqueStructSliceIterator_char16_ConstReference_char16_0 p_it, compiler::CodeAssemblerLabel* label_Bailout) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{p_it.start}, TNode<IntPtrT>{p_it.end});
    ca_.Branch(tmp0, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    ca_.Goto(&block2);
  }

  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Uint16T> tmp5;
  TNode<Uint32T> tmp6;
  TNode<BoolT> tmp7;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    std::tie(tmp1, tmp2) = NewReference_char16_0(state_, TNode<Object>{p_it.object}, TNode<IntPtrT>{p_it.start}).Flatten();
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, kUInt16Size);
    tmp4 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_it.start}, TNode<IntPtrT>{tmp3});
    tmp5 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp1, tmp2});
    tmp6 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xffull));
    tmp7 = CodeStubAssembler(state_).Uint32GreaterThan(TNode<Uint32T>{tmp5}, TNode<Uint32T>{tmp6});
    ca_.Branch(tmp7, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(label_Bailout);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block2);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(&block13);
  }

    ca_.Bind(&block13);
}

TF_BUILTIN(StringFastLocaleCompare, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSFunction> parameter1 = UncheckedParameter<JSFunction>(Descriptor::kLocaleCompareFn);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kLeft);
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kRight);
  USE(parameter3);
  TNode<Object> parameter4 = UncheckedParameter<Object>(Descriptor::kLocales);
  USE(parameter4);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String, String> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String, String> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String, IntPtrT> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String, IntPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String, IntPtrT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String, IntPtrT> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String, IntPtrT> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String, IntPtrT> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String, IntPtrT> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String, IntPtrT> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT> block63(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT> block66(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String, String> block70(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String, String> block69(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String, IntPtrT> block74(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String, IntPtrT> block73(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String> block78(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String> block77(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String, IntPtrT> block82(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String, IntPtrT> block81(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String> block86(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String> block85(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String> block90(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String> block89(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String> block94(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String> block93(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String> block98(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String> block97(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String, IntPtrT> block102(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String, IntPtrT> block101(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String> block106(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String> block105(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String, IntPtrT> block110(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String, IntPtrT> block109(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String> block87(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String> block83(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT> block65(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block112(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block111(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block114(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block113(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT> block120(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT> block119(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT> block123(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT> block121(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String, String> block127(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String, String> block126(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String, IntPtrT> block131(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String, IntPtrT> block130(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String> block135(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String> block134(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String, IntPtrT> block139(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String, IntPtrT> block138(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String> block143(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String> block142(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String> block147(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String> block146(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String> block151(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String> block150(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String> block155(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String> block154(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String, IntPtrT> block159(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String, IntPtrT> block158(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String> block163(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String> block162(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String, IntPtrT> block167(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String, IntPtrT> block166(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String> block144(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT, String> block140(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, String, IntPtrT> block122(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block118(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block169(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block168(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block116(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block171(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block170(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<String> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_String_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, &label1);
    ca_.Goto(&block7);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block2);
  }

  TNode<BoolT> tmp2;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp2 = CodeStubAssembler(state_).TaggedEqual(TNode<MaybeObject>{tmp0}, TNode<MaybeObject>{parameter3});
    ca_.Branch(tmp2, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  TNode<Smi> tmp3;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp3 = SmiConstant_0(state_, IntegerLiteral(false, 0x0ull));
    CodeStubAssembler(state_).Return(tmp3);
  }

  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<Int32T> tmp6;
  TNode<IntPtrT> tmp7;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp4 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp5 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp6 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp0, tmp5});
    tmp7 = Convert_intptr_int32_0(state_, TNode<Int32T>{tmp6});
    ca_.Goto(&block13, tmp0, tmp4);
  }

  TNode<String> phi_bb13_8;
  TNode<IntPtrT> phi_bb13_9;
  TNode<BoolT> tmp8;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_8, &phi_bb13_9);
    tmp8 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp8, &block11, std::vector<compiler::Node*>{phi_bb13_8, phi_bb13_9}, &block12, std::vector<compiler::Node*>{phi_bb13_8, phi_bb13_9});
  }

  TNode<String> phi_bb11_8;
  TNode<IntPtrT> phi_bb11_9;
  TNode<SeqOneByteString> tmp9;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_8, &phi_bb11_9);
    compiler::CodeAssemblerLabel label10(&ca_);
    tmp9 = Cast_SeqOneByteString_1(state_, TNode<String>{phi_bb11_8}, &label10);
    ca_.Goto(&block16, phi_bb11_8, phi_bb11_9, phi_bb11_8, phi_bb11_8);
    if (label10.is_used()) {
      ca_.Bind(&label10);
      ca_.Goto(&block17, phi_bb11_8, phi_bb11_9, phi_bb11_8, phi_bb11_8);
    }
  }

  TNode<String> phi_bb17_8;
  TNode<IntPtrT> phi_bb17_9;
  TNode<String> phi_bb17_11;
  TNode<String> phi_bb17_12;
  TNode<SeqTwoByteString> tmp11;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_8, &phi_bb17_9, &phi_bb17_11, &phi_bb17_12);
    compiler::CodeAssemblerLabel label12(&ca_);
    tmp11 = Cast_SeqTwoByteString_1(state_, TNode<String>{ca_.UncheckedCast<String>(phi_bb17_11)}, &label12);
    ca_.Goto(&block24, phi_bb17_8, phi_bb17_9, phi_bb17_11);
    if (label12.is_used()) {
      ca_.Bind(&label12);
      ca_.Goto(&block25, phi_bb17_8, phi_bb17_9, phi_bb17_11);
    }
  }

  TNode<String> phi_bb16_8;
  TNode<IntPtrT> phi_bb16_9;
  TNode<String> phi_bb16_11;
  TNode<String> phi_bb16_12;
  TNode<Object> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<Object> tmp16;
  TNode<IntPtrT> tmp17;
  TNode<IntPtrT> tmp18;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_8, &phi_bb16_9, &phi_bb16_11, &phi_bb16_12);
    std::tie(tmp13, tmp14, tmp15) = FieldSliceSeqOneByteStringChars_0(state_, TNode<SeqOneByteString>{tmp9}).Flatten();
    compiler::CodeAssemblerLabel label19(&ca_);
    std::tie(tmp16, tmp17, tmp18) = Subslice_char8_0(state_, TorqueStructSlice_char8_ConstReference_char8_0{TNode<Object>{tmp13}, TNode<IntPtrT>{tmp14}, TNode<IntPtrT>{tmp15}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{phi_bb16_9}, TNode<IntPtrT>{tmp7}, &label19).Flatten();
    ca_.Goto(&block20, phi_bb16_8, phi_bb16_9, phi_bb16_11, phi_bb16_9);
    if (label19.is_used()) {
      ca_.Bind(&label19);
      ca_.Goto(&block21, phi_bb16_8, phi_bb16_9, phi_bb16_11, phi_bb16_9);
    }
  }

  TNode<String> phi_bb21_8;
  TNode<IntPtrT> phi_bb21_9;
  TNode<String> phi_bb21_11;
  TNode<IntPtrT> phi_bb21_16;
  if (block21.is_used()) {
    ca_.Bind(&block21, &phi_bb21_8, &phi_bb21_9, &phi_bb21_11, &phi_bb21_16);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<String> phi_bb20_8;
  TNode<IntPtrT> phi_bb20_9;
  TNode<String> phi_bb20_11;
  TNode<IntPtrT> phi_bb20_16;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_8, &phi_bb20_9, &phi_bb20_11, &phi_bb20_16);
    ca_.Goto(&block6, tmp16, tmp17, tmp18);
  }

  TNode<String> phi_bb25_8;
  TNode<IntPtrT> phi_bb25_9;
  TNode<String> phi_bb25_11;
  TNode<ThinString> tmp20;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_8, &phi_bb25_9, &phi_bb25_11);
    compiler::CodeAssemblerLabel label21(&ca_);
    tmp20 = Cast_ThinString_1(state_, TNode<String>{ca_.UncheckedCast<String>(phi_bb25_11)}, &label21);
    ca_.Goto(&block32, phi_bb25_8, phi_bb25_9, phi_bb25_11);
    if (label21.is_used()) {
      ca_.Bind(&label21);
      ca_.Goto(&block33, phi_bb25_8, phi_bb25_9, phi_bb25_11);
    }
  }

  TNode<String> phi_bb24_8;
  TNode<IntPtrT> phi_bb24_9;
  TNode<String> phi_bb24_11;
  TNode<Object> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<IntPtrT> tmp24;
  TNode<Object> tmp25;
  TNode<IntPtrT> tmp26;
  TNode<IntPtrT> tmp27;
  if (block24.is_used()) {
    ca_.Bind(&block24, &phi_bb24_8, &phi_bb24_9, &phi_bb24_11);
    std::tie(tmp22, tmp23, tmp24) = FieldSliceSeqTwoByteStringChars_0(state_, TNode<SeqTwoByteString>{tmp11}).Flatten();
    compiler::CodeAssemblerLabel label28(&ca_);
    std::tie(tmp25, tmp26, tmp27) = Subslice_char16_0(state_, TorqueStructSlice_char16_ConstReference_char16_0{TNode<Object>{tmp22}, TNode<IntPtrT>{tmp23}, TNode<IntPtrT>{tmp24}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{phi_bb24_9}, TNode<IntPtrT>{tmp7}, &label28).Flatten();
    ca_.Goto(&block28, phi_bb24_8, phi_bb24_9, phi_bb24_11, phi_bb24_9);
    if (label28.is_used()) {
      ca_.Bind(&label28);
      ca_.Goto(&block29, phi_bb24_8, phi_bb24_9, phi_bb24_11, phi_bb24_9);
    }
  }

  TNode<String> phi_bb29_8;
  TNode<IntPtrT> phi_bb29_9;
  TNode<String> phi_bb29_11;
  TNode<IntPtrT> phi_bb29_16;
  if (block29.is_used()) {
    ca_.Bind(&block29, &phi_bb29_8, &phi_bb29_9, &phi_bb29_11, &phi_bb29_16);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<String> phi_bb28_8;
  TNode<IntPtrT> phi_bb28_9;
  TNode<String> phi_bb28_11;
  TNode<IntPtrT> phi_bb28_16;
  if (block28.is_used()) {
    ca_.Bind(&block28, &phi_bb28_8, &phi_bb28_9, &phi_bb28_11, &phi_bb28_16);
    ca_.Goto(&block4, tmp25, tmp26, tmp27);
  }

  TNode<String> phi_bb33_8;
  TNode<IntPtrT> phi_bb33_9;
  TNode<String> phi_bb33_11;
  TNode<ConsString> tmp29;
  if (block33.is_used()) {
    ca_.Bind(&block33, &phi_bb33_8, &phi_bb33_9, &phi_bb33_11);
    compiler::CodeAssemblerLabel label30(&ca_);
    tmp29 = Cast_ConsString_1(state_, TNode<String>{ca_.UncheckedCast<String>(phi_bb33_11)}, &label30);
    ca_.Goto(&block36, phi_bb33_8, phi_bb33_9, phi_bb33_11);
    if (label30.is_used()) {
      ca_.Bind(&label30);
      ca_.Goto(&block37, phi_bb33_8, phi_bb33_9, phi_bb33_11);
    }
  }

  TNode<String> phi_bb32_8;
  TNode<IntPtrT> phi_bb32_9;
  TNode<String> phi_bb32_11;
  TNode<IntPtrT> tmp31;
  TNode<String> tmp32;
  if (block32.is_used()) {
    ca_.Bind(&block32, &phi_bb32_8, &phi_bb32_9, &phi_bb32_11);
    tmp31 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp32 = CodeStubAssembler(state_).LoadReference<String>(CodeStubAssembler::Reference{tmp20, tmp31});
    ca_.Goto(&block30, tmp32, phi_bb32_9, phi_bb32_11);
  }

  TNode<String> phi_bb37_8;
  TNode<IntPtrT> phi_bb37_9;
  TNode<String> phi_bb37_11;
  TNode<SlicedString> tmp33;
  if (block37.is_used()) {
    ca_.Bind(&block37, &phi_bb37_8, &phi_bb37_9, &phi_bb37_11);
    compiler::CodeAssemblerLabel label34(&ca_);
    tmp33 = Cast_SlicedString_1(state_, TNode<String>{ca_.UncheckedCast<String>(phi_bb37_11)}, &label34);
    ca_.Goto(&block40, phi_bb37_8, phi_bb37_9, phi_bb37_11);
    if (label34.is_used()) {
      ca_.Bind(&label34);
      ca_.Goto(&block41, phi_bb37_8, phi_bb37_9, phi_bb37_11);
    }
  }

  TNode<String> phi_bb36_8;
  TNode<IntPtrT> phi_bb36_9;
  TNode<String> phi_bb36_11;
  TNode<String> tmp35;
  if (block36.is_used()) {
    ca_.Bind(&block36, &phi_bb36_8, &phi_bb36_9, &phi_bb36_11);
    tmp35 = Flatten_1(state_, TNode<ConsString>{tmp29});
    ca_.Goto(&block34, tmp35, phi_bb36_9, phi_bb36_11);
  }

  TNode<String> phi_bb41_8;
  TNode<IntPtrT> phi_bb41_9;
  TNode<String> phi_bb41_11;
  TNode<ExternalOneByteString> tmp36;
  if (block41.is_used()) {
    ca_.Bind(&block41, &phi_bb41_8, &phi_bb41_9, &phi_bb41_11);
    compiler::CodeAssemblerLabel label37(&ca_);
    tmp36 = Cast_ExternalOneByteString_1(state_, TNode<String>{ca_.UncheckedCast<String>(phi_bb41_11)}, &label37);
    ca_.Goto(&block44, phi_bb41_8, phi_bb41_9, phi_bb41_11);
    if (label37.is_used()) {
      ca_.Bind(&label37);
      ca_.Goto(&block45, phi_bb41_8, phi_bb41_9, phi_bb41_11);
    }
  }

  TNode<String> phi_bb40_8;
  TNode<IntPtrT> phi_bb40_9;
  TNode<String> phi_bb40_11;
  TNode<IntPtrT> tmp38;
  TNode<Smi> tmp39;
  TNode<IntPtrT> tmp40;
  TNode<IntPtrT> tmp41;
  TNode<IntPtrT> tmp42;
  TNode<String> tmp43;
  if (block40.is_used()) {
    ca_.Bind(&block40, &phi_bb40_8, &phi_bb40_9, &phi_bb40_11);
    tmp38 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp39 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp33, tmp38});
    tmp40 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp39});
    tmp41 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb40_9}, TNode<IntPtrT>{tmp40});
    tmp42 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp43 = CodeStubAssembler(state_).LoadReference<String>(CodeStubAssembler::Reference{tmp33, tmp42});
    ca_.Goto(&block34, tmp43, tmp41, phi_bb40_11);
  }

  TNode<String> phi_bb45_8;
  TNode<IntPtrT> phi_bb45_9;
  TNode<String> phi_bb45_11;
  TNode<ExternalTwoByteString> tmp44;
  if (block45.is_used()) {
    ca_.Bind(&block45, &phi_bb45_8, &phi_bb45_9, &phi_bb45_11);
    compiler::CodeAssemblerLabel label45(&ca_);
    tmp44 = Cast_ExternalTwoByteString_1(state_, TNode<String>{ca_.UncheckedCast<String>(phi_bb45_11)}, &label45);
    ca_.Goto(&block52, phi_bb45_8, phi_bb45_9, phi_bb45_11);
    if (label45.is_used()) {
      ca_.Bind(&label45);
      ca_.Goto(&block53, phi_bb45_8, phi_bb45_9, phi_bb45_11);
    }
  }

  TNode<String> phi_bb44_8;
  TNode<IntPtrT> phi_bb44_9;
  TNode<String> phi_bb44_11;
  TNode<RawPtrT> tmp46;
  TNode<IntPtrT> tmp47;
  TNode<Int32T> tmp48;
  TNode<IntPtrT> tmp49;
  TNode<Object> tmp50;
  TNode<IntPtrT> tmp51;
  TNode<IntPtrT> tmp52;
  TNode<Object> tmp53;
  TNode<IntPtrT> tmp54;
  TNode<IntPtrT> tmp55;
  if (block44.is_used()) {
    ca_.Bind(&block44, &phi_bb44_8, &phi_bb44_9, &phi_bb44_11);
    tmp46 = Method_ExternalOneByteString_GetChars_0(state_, TNode<ExternalOneByteString>{tmp36});
    tmp47 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp48 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp36, tmp47});
    tmp49 = Convert_intptr_int32_0(state_, TNode<Int32T>{tmp48});
    std::tie(tmp50, tmp51, tmp52) = NewOffHeapConstSlice_char8_0(state_, TNode<RawPtrT>{tmp46}, TNode<IntPtrT>{tmp49}).Flatten();
    compiler::CodeAssemblerLabel label56(&ca_);
    std::tie(tmp53, tmp54, tmp55) = Subslice_char8_0(state_, TorqueStructSlice_char8_ConstReference_char8_0{TNode<Object>{tmp50}, TNode<IntPtrT>{tmp51}, TNode<IntPtrT>{tmp52}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{phi_bb44_9}, TNode<IntPtrT>{tmp7}, &label56).Flatten();
    ca_.Goto(&block48, phi_bb44_8, phi_bb44_9, phi_bb44_11, phi_bb44_9);
    if (label56.is_used()) {
      ca_.Bind(&label56);
      ca_.Goto(&block49, phi_bb44_8, phi_bb44_9, phi_bb44_11, phi_bb44_9);
    }
  }

  TNode<String> phi_bb49_8;
  TNode<IntPtrT> phi_bb49_9;
  TNode<String> phi_bb49_11;
  TNode<IntPtrT> phi_bb49_19;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_8, &phi_bb49_9, &phi_bb49_11, &phi_bb49_19);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<String> phi_bb48_8;
  TNode<IntPtrT> phi_bb48_9;
  TNode<String> phi_bb48_11;
  TNode<IntPtrT> phi_bb48_19;
  if (block48.is_used()) {
    ca_.Bind(&block48, &phi_bb48_8, &phi_bb48_9, &phi_bb48_11, &phi_bb48_19);
    ca_.Goto(&block6, tmp53, tmp54, tmp55);
  }

  TNode<String> phi_bb53_8;
  TNode<IntPtrT> phi_bb53_9;
  TNode<String> phi_bb53_11;
  if (block53.is_used()) {
    ca_.Bind(&block53, &phi_bb53_8, &phi_bb53_9, &phi_bb53_11);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<String> phi_bb52_8;
  TNode<IntPtrT> phi_bb52_9;
  TNode<String> phi_bb52_11;
  TNode<RawPtrT> tmp57;
  TNode<IntPtrT> tmp58;
  TNode<Int32T> tmp59;
  TNode<IntPtrT> tmp60;
  TNode<Object> tmp61;
  TNode<IntPtrT> tmp62;
  TNode<IntPtrT> tmp63;
  TNode<Object> tmp64;
  TNode<IntPtrT> tmp65;
  TNode<IntPtrT> tmp66;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_8, &phi_bb52_9, &phi_bb52_11);
    tmp57 = Method_ExternalTwoByteString_GetChars_0(state_, TNode<ExternalTwoByteString>{tmp44});
    tmp58 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp59 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp44, tmp58});
    tmp60 = Convert_intptr_int32_0(state_, TNode<Int32T>{tmp59});
    std::tie(tmp61, tmp62, tmp63) = NewOffHeapConstSlice_char16_0(state_, TNode<RawPtrT>{tmp57}, TNode<IntPtrT>{tmp60}).Flatten();
    compiler::CodeAssemblerLabel label67(&ca_);
    std::tie(tmp64, tmp65, tmp66) = Subslice_char16_0(state_, TorqueStructSlice_char16_ConstReference_char16_0{TNode<Object>{tmp61}, TNode<IntPtrT>{tmp62}, TNode<IntPtrT>{tmp63}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{phi_bb52_9}, TNode<IntPtrT>{tmp7}, &label67).Flatten();
    ca_.Goto(&block56, phi_bb52_8, phi_bb52_9, phi_bb52_11, phi_bb52_9);
    if (label67.is_used()) {
      ca_.Bind(&label67);
      ca_.Goto(&block57, phi_bb52_8, phi_bb52_9, phi_bb52_11, phi_bb52_9);
    }
  }

  TNode<String> phi_bb57_8;
  TNode<IntPtrT> phi_bb57_9;
  TNode<String> phi_bb57_11;
  TNode<IntPtrT> phi_bb57_19;
  if (block57.is_used()) {
    ca_.Bind(&block57, &phi_bb57_8, &phi_bb57_9, &phi_bb57_11, &phi_bb57_19);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<String> phi_bb56_8;
  TNode<IntPtrT> phi_bb56_9;
  TNode<String> phi_bb56_11;
  TNode<IntPtrT> phi_bb56_19;
  if (block56.is_used()) {
    ca_.Bind(&block56, &phi_bb56_8, &phi_bb56_9, &phi_bb56_11, &phi_bb56_19);
    ca_.Goto(&block4, tmp64, tmp65, tmp66);
  }

  TNode<String> phi_bb34_8;
  TNode<IntPtrT> phi_bb34_9;
  TNode<String> phi_bb34_11;
  if (block34.is_used()) {
    ca_.Bind(&block34, &phi_bb34_8, &phi_bb34_9, &phi_bb34_11);
    ca_.Goto(&block30, phi_bb34_8, phi_bb34_9, phi_bb34_11);
  }

  TNode<String> phi_bb30_8;
  TNode<IntPtrT> phi_bb30_9;
  TNode<String> phi_bb30_11;
  if (block30.is_used()) {
    ca_.Bind(&block30, &phi_bb30_8, &phi_bb30_9, &phi_bb30_11);
    ca_.Goto(&block13, phi_bb30_8, phi_bb30_9);
  }

  TNode<String> phi_bb12_8;
  TNode<IntPtrT> phi_bb12_9;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_8, &phi_bb12_9);
    VerifiedUnreachable_0(state_);
  }

  TNode<Object> phi_bb6_5;
  TNode<IntPtrT> phi_bb6_6;
  TNode<IntPtrT> phi_bb6_7;
  TNode<String> tmp68;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_5, &phi_bb6_6, &phi_bb6_7);
    compiler::CodeAssemblerLabel label69(&ca_);
    tmp68 = Cast_String_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter3}, &label69);
    ca_.Goto(&block62, phi_bb6_5, phi_bb6_6, phi_bb6_7);
    if (label69.is_used()) {
      ca_.Bind(&label69);
      ca_.Goto(&block63, phi_bb6_5, phi_bb6_6, phi_bb6_7);
    }
  }

  TNode<Object> phi_bb63_5;
  TNode<IntPtrT> phi_bb63_6;
  TNode<IntPtrT> phi_bb63_7;
  if (block63.is_used()) {
    ca_.Bind(&block63, &phi_bb63_5, &phi_bb63_6, &phi_bb63_7);
    ca_.Goto(&block2);
  }

  TNode<Object> phi_bb62_5;
  TNode<IntPtrT> phi_bb62_6;
  TNode<IntPtrT> phi_bb62_7;
  TNode<IntPtrT> tmp70;
  TNode<IntPtrT> tmp71;
  TNode<Int32T> tmp72;
  TNode<IntPtrT> tmp73;
  if (block62.is_used()) {
    ca_.Bind(&block62, &phi_bb62_5, &phi_bb62_6, &phi_bb62_7);
    tmp70 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp71 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp72 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp68, tmp71});
    tmp73 = Convert_intptr_int32_0(state_, TNode<Int32T>{tmp72});
    ca_.Goto(&block66, phi_bb62_5, phi_bb62_6, phi_bb62_7, tmp68, tmp70);
  }

  TNode<Object> phi_bb66_5;
  TNode<IntPtrT> phi_bb66_6;
  TNode<IntPtrT> phi_bb66_7;
  TNode<String> phi_bb66_11;
  TNode<IntPtrT> phi_bb66_12;
  TNode<BoolT> tmp74;
  if (block66.is_used()) {
    ca_.Bind(&block66, &phi_bb66_5, &phi_bb66_6, &phi_bb66_7, &phi_bb66_11, &phi_bb66_12);
    tmp74 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp74, &block64, std::vector<compiler::Node*>{phi_bb66_5, phi_bb66_6, phi_bb66_7, phi_bb66_11, phi_bb66_12}, &block65, std::vector<compiler::Node*>{phi_bb66_5, phi_bb66_6, phi_bb66_7, phi_bb66_11, phi_bb66_12});
  }

  TNode<Object> phi_bb64_5;
  TNode<IntPtrT> phi_bb64_6;
  TNode<IntPtrT> phi_bb64_7;
  TNode<String> phi_bb64_11;
  TNode<IntPtrT> phi_bb64_12;
  TNode<SeqOneByteString> tmp75;
  if (block64.is_used()) {
    ca_.Bind(&block64, &phi_bb64_5, &phi_bb64_6, &phi_bb64_7, &phi_bb64_11, &phi_bb64_12);
    compiler::CodeAssemblerLabel label76(&ca_);
    tmp75 = Cast_SeqOneByteString_1(state_, TNode<String>{phi_bb64_11}, &label76);
    ca_.Goto(&block69, phi_bb64_5, phi_bb64_6, phi_bb64_7, phi_bb64_11, phi_bb64_12, phi_bb64_11, phi_bb64_11);
    if (label76.is_used()) {
      ca_.Bind(&label76);
      ca_.Goto(&block70, phi_bb64_5, phi_bb64_6, phi_bb64_7, phi_bb64_11, phi_bb64_12, phi_bb64_11, phi_bb64_11);
    }
  }

  TNode<Object> phi_bb70_5;
  TNode<IntPtrT> phi_bb70_6;
  TNode<IntPtrT> phi_bb70_7;
  TNode<String> phi_bb70_11;
  TNode<IntPtrT> phi_bb70_12;
  TNode<String> phi_bb70_14;
  TNode<String> phi_bb70_15;
  TNode<SeqTwoByteString> tmp77;
  if (block70.is_used()) {
    ca_.Bind(&block70, &phi_bb70_5, &phi_bb70_6, &phi_bb70_7, &phi_bb70_11, &phi_bb70_12, &phi_bb70_14, &phi_bb70_15);
    compiler::CodeAssemblerLabel label78(&ca_);
    tmp77 = Cast_SeqTwoByteString_1(state_, TNode<String>{ca_.UncheckedCast<String>(phi_bb70_14)}, &label78);
    ca_.Goto(&block77, phi_bb70_5, phi_bb70_6, phi_bb70_7, phi_bb70_11, phi_bb70_12, phi_bb70_14);
    if (label78.is_used()) {
      ca_.Bind(&label78);
      ca_.Goto(&block78, phi_bb70_5, phi_bb70_6, phi_bb70_7, phi_bb70_11, phi_bb70_12, phi_bb70_14);
    }
  }

  TNode<Object> phi_bb69_5;
  TNode<IntPtrT> phi_bb69_6;
  TNode<IntPtrT> phi_bb69_7;
  TNode<String> phi_bb69_11;
  TNode<IntPtrT> phi_bb69_12;
  TNode<String> phi_bb69_14;
  TNode<String> phi_bb69_15;
  TNode<Object> tmp79;
  TNode<IntPtrT> tmp80;
  TNode<IntPtrT> tmp81;
  TNode<Object> tmp82;
  TNode<IntPtrT> tmp83;
  TNode<IntPtrT> tmp84;
  if (block69.is_used()) {
    ca_.Bind(&block69, &phi_bb69_5, &phi_bb69_6, &phi_bb69_7, &phi_bb69_11, &phi_bb69_12, &phi_bb69_14, &phi_bb69_15);
    std::tie(tmp79, tmp80, tmp81) = FieldSliceSeqOneByteStringChars_0(state_, TNode<SeqOneByteString>{tmp75}).Flatten();
    compiler::CodeAssemblerLabel label85(&ca_);
    std::tie(tmp82, tmp83, tmp84) = Subslice_char8_0(state_, TorqueStructSlice_char8_ConstReference_char8_0{TNode<Object>{tmp79}, TNode<IntPtrT>{tmp80}, TNode<IntPtrT>{tmp81}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{phi_bb69_12}, TNode<IntPtrT>{tmp73}, &label85).Flatten();
    ca_.Goto(&block73, phi_bb69_5, phi_bb69_6, phi_bb69_7, phi_bb69_11, phi_bb69_12, phi_bb69_14, phi_bb69_12);
    if (label85.is_used()) {
      ca_.Bind(&label85);
      ca_.Goto(&block74, phi_bb69_5, phi_bb69_6, phi_bb69_7, phi_bb69_11, phi_bb69_12, phi_bb69_14, phi_bb69_12);
    }
  }

  TNode<Object> phi_bb74_5;
  TNode<IntPtrT> phi_bb74_6;
  TNode<IntPtrT> phi_bb74_7;
  TNode<String> phi_bb74_11;
  TNode<IntPtrT> phi_bb74_12;
  TNode<String> phi_bb74_14;
  TNode<IntPtrT> phi_bb74_19;
  if (block74.is_used()) {
    ca_.Bind(&block74, &phi_bb74_5, &phi_bb74_6, &phi_bb74_7, &phi_bb74_11, &phi_bb74_12, &phi_bb74_14, &phi_bb74_19);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Object> phi_bb73_5;
  TNode<IntPtrT> phi_bb73_6;
  TNode<IntPtrT> phi_bb73_7;
  TNode<String> phi_bb73_11;
  TNode<IntPtrT> phi_bb73_12;
  TNode<String> phi_bb73_14;
  TNode<IntPtrT> phi_bb73_19;
  if (block73.is_used()) {
    ca_.Bind(&block73, &phi_bb73_5, &phi_bb73_6, &phi_bb73_7, &phi_bb73_11, &phi_bb73_12, &phi_bb73_14, &phi_bb73_19);
    ca_.Goto(&block61, phi_bb73_5, phi_bb73_6, phi_bb73_7, tmp82, tmp83, tmp84);
  }

  TNode<Object> phi_bb78_5;
  TNode<IntPtrT> phi_bb78_6;
  TNode<IntPtrT> phi_bb78_7;
  TNode<String> phi_bb78_11;
  TNode<IntPtrT> phi_bb78_12;
  TNode<String> phi_bb78_14;
  TNode<ThinString> tmp86;
  if (block78.is_used()) {
    ca_.Bind(&block78, &phi_bb78_5, &phi_bb78_6, &phi_bb78_7, &phi_bb78_11, &phi_bb78_12, &phi_bb78_14);
    compiler::CodeAssemblerLabel label87(&ca_);
    tmp86 = Cast_ThinString_1(state_, TNode<String>{ca_.UncheckedCast<String>(phi_bb78_14)}, &label87);
    ca_.Goto(&block85, phi_bb78_5, phi_bb78_6, phi_bb78_7, phi_bb78_11, phi_bb78_12, phi_bb78_14);
    if (label87.is_used()) {
      ca_.Bind(&label87);
      ca_.Goto(&block86, phi_bb78_5, phi_bb78_6, phi_bb78_7, phi_bb78_11, phi_bb78_12, phi_bb78_14);
    }
  }

  TNode<Object> phi_bb77_5;
  TNode<IntPtrT> phi_bb77_6;
  TNode<IntPtrT> phi_bb77_7;
  TNode<String> phi_bb77_11;
  TNode<IntPtrT> phi_bb77_12;
  TNode<String> phi_bb77_14;
  TNode<Object> tmp88;
  TNode<IntPtrT> tmp89;
  TNode<IntPtrT> tmp90;
  TNode<Object> tmp91;
  TNode<IntPtrT> tmp92;
  TNode<IntPtrT> tmp93;
  if (block77.is_used()) {
    ca_.Bind(&block77, &phi_bb77_5, &phi_bb77_6, &phi_bb77_7, &phi_bb77_11, &phi_bb77_12, &phi_bb77_14);
    std::tie(tmp88, tmp89, tmp90) = FieldSliceSeqTwoByteStringChars_0(state_, TNode<SeqTwoByteString>{tmp77}).Flatten();
    compiler::CodeAssemblerLabel label94(&ca_);
    std::tie(tmp91, tmp92, tmp93) = Subslice_char16_0(state_, TorqueStructSlice_char16_ConstReference_char16_0{TNode<Object>{tmp88}, TNode<IntPtrT>{tmp89}, TNode<IntPtrT>{tmp90}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{phi_bb77_12}, TNode<IntPtrT>{tmp73}, &label94).Flatten();
    ca_.Goto(&block81, phi_bb77_5, phi_bb77_6, phi_bb77_7, phi_bb77_11, phi_bb77_12, phi_bb77_14, phi_bb77_12);
    if (label94.is_used()) {
      ca_.Bind(&label94);
      ca_.Goto(&block82, phi_bb77_5, phi_bb77_6, phi_bb77_7, phi_bb77_11, phi_bb77_12, phi_bb77_14, phi_bb77_12);
    }
  }

  TNode<Object> phi_bb82_5;
  TNode<IntPtrT> phi_bb82_6;
  TNode<IntPtrT> phi_bb82_7;
  TNode<String> phi_bb82_11;
  TNode<IntPtrT> phi_bb82_12;
  TNode<String> phi_bb82_14;
  TNode<IntPtrT> phi_bb82_19;
  if (block82.is_used()) {
    ca_.Bind(&block82, &phi_bb82_5, &phi_bb82_6, &phi_bb82_7, &phi_bb82_11, &phi_bb82_12, &phi_bb82_14, &phi_bb82_19);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Object> phi_bb81_5;
  TNode<IntPtrT> phi_bb81_6;
  TNode<IntPtrT> phi_bb81_7;
  TNode<String> phi_bb81_11;
  TNode<IntPtrT> phi_bb81_12;
  TNode<String> phi_bb81_14;
  TNode<IntPtrT> phi_bb81_19;
  if (block81.is_used()) {
    ca_.Bind(&block81, &phi_bb81_5, &phi_bb81_6, &phi_bb81_7, &phi_bb81_11, &phi_bb81_12, &phi_bb81_14, &phi_bb81_19);
    ca_.Goto(&block59, phi_bb81_5, phi_bb81_6, phi_bb81_7, tmp91, tmp92, tmp93);
  }

  TNode<Object> phi_bb86_5;
  TNode<IntPtrT> phi_bb86_6;
  TNode<IntPtrT> phi_bb86_7;
  TNode<String> phi_bb86_11;
  TNode<IntPtrT> phi_bb86_12;
  TNode<String> phi_bb86_14;
  TNode<ConsString> tmp95;
  if (block86.is_used()) {
    ca_.Bind(&block86, &phi_bb86_5, &phi_bb86_6, &phi_bb86_7, &phi_bb86_11, &phi_bb86_12, &phi_bb86_14);
    compiler::CodeAssemblerLabel label96(&ca_);
    tmp95 = Cast_ConsString_1(state_, TNode<String>{ca_.UncheckedCast<String>(phi_bb86_14)}, &label96);
    ca_.Goto(&block89, phi_bb86_5, phi_bb86_6, phi_bb86_7, phi_bb86_11, phi_bb86_12, phi_bb86_14);
    if (label96.is_used()) {
      ca_.Bind(&label96);
      ca_.Goto(&block90, phi_bb86_5, phi_bb86_6, phi_bb86_7, phi_bb86_11, phi_bb86_12, phi_bb86_14);
    }
  }

  TNode<Object> phi_bb85_5;
  TNode<IntPtrT> phi_bb85_6;
  TNode<IntPtrT> phi_bb85_7;
  TNode<String> phi_bb85_11;
  TNode<IntPtrT> phi_bb85_12;
  TNode<String> phi_bb85_14;
  TNode<IntPtrT> tmp97;
  TNode<String> tmp98;
  if (block85.is_used()) {
    ca_.Bind(&block85, &phi_bb85_5, &phi_bb85_6, &phi_bb85_7, &phi_bb85_11, &phi_bb85_12, &phi_bb85_14);
    tmp97 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp98 = CodeStubAssembler(state_).LoadReference<String>(CodeStubAssembler::Reference{tmp86, tmp97});
    ca_.Goto(&block83, phi_bb85_5, phi_bb85_6, phi_bb85_7, tmp98, phi_bb85_12, phi_bb85_14);
  }

  TNode<Object> phi_bb90_5;
  TNode<IntPtrT> phi_bb90_6;
  TNode<IntPtrT> phi_bb90_7;
  TNode<String> phi_bb90_11;
  TNode<IntPtrT> phi_bb90_12;
  TNode<String> phi_bb90_14;
  TNode<SlicedString> tmp99;
  if (block90.is_used()) {
    ca_.Bind(&block90, &phi_bb90_5, &phi_bb90_6, &phi_bb90_7, &phi_bb90_11, &phi_bb90_12, &phi_bb90_14);
    compiler::CodeAssemblerLabel label100(&ca_);
    tmp99 = Cast_SlicedString_1(state_, TNode<String>{ca_.UncheckedCast<String>(phi_bb90_14)}, &label100);
    ca_.Goto(&block93, phi_bb90_5, phi_bb90_6, phi_bb90_7, phi_bb90_11, phi_bb90_12, phi_bb90_14);
    if (label100.is_used()) {
      ca_.Bind(&label100);
      ca_.Goto(&block94, phi_bb90_5, phi_bb90_6, phi_bb90_7, phi_bb90_11, phi_bb90_12, phi_bb90_14);
    }
  }

  TNode<Object> phi_bb89_5;
  TNode<IntPtrT> phi_bb89_6;
  TNode<IntPtrT> phi_bb89_7;
  TNode<String> phi_bb89_11;
  TNode<IntPtrT> phi_bb89_12;
  TNode<String> phi_bb89_14;
  TNode<String> tmp101;
  if (block89.is_used()) {
    ca_.Bind(&block89, &phi_bb89_5, &phi_bb89_6, &phi_bb89_7, &phi_bb89_11, &phi_bb89_12, &phi_bb89_14);
    tmp101 = Flatten_1(state_, TNode<ConsString>{tmp95});
    ca_.Goto(&block87, phi_bb89_5, phi_bb89_6, phi_bb89_7, tmp101, phi_bb89_12, phi_bb89_14);
  }

  TNode<Object> phi_bb94_5;
  TNode<IntPtrT> phi_bb94_6;
  TNode<IntPtrT> phi_bb94_7;
  TNode<String> phi_bb94_11;
  TNode<IntPtrT> phi_bb94_12;
  TNode<String> phi_bb94_14;
  TNode<ExternalOneByteString> tmp102;
  if (block94.is_used()) {
    ca_.Bind(&block94, &phi_bb94_5, &phi_bb94_6, &phi_bb94_7, &phi_bb94_11, &phi_bb94_12, &phi_bb94_14);
    compiler::CodeAssemblerLabel label103(&ca_);
    tmp102 = Cast_ExternalOneByteString_1(state_, TNode<String>{ca_.UncheckedCast<String>(phi_bb94_14)}, &label103);
    ca_.Goto(&block97, phi_bb94_5, phi_bb94_6, phi_bb94_7, phi_bb94_11, phi_bb94_12, phi_bb94_14);
    if (label103.is_used()) {
      ca_.Bind(&label103);
      ca_.Goto(&block98, phi_bb94_5, phi_bb94_6, phi_bb94_7, phi_bb94_11, phi_bb94_12, phi_bb94_14);
    }
  }

  TNode<Object> phi_bb93_5;
  TNode<IntPtrT> phi_bb93_6;
  TNode<IntPtrT> phi_bb93_7;
  TNode<String> phi_bb93_11;
  TNode<IntPtrT> phi_bb93_12;
  TNode<String> phi_bb93_14;
  TNode<IntPtrT> tmp104;
  TNode<Smi> tmp105;
  TNode<IntPtrT> tmp106;
  TNode<IntPtrT> tmp107;
  TNode<IntPtrT> tmp108;
  TNode<String> tmp109;
  if (block93.is_used()) {
    ca_.Bind(&block93, &phi_bb93_5, &phi_bb93_6, &phi_bb93_7, &phi_bb93_11, &phi_bb93_12, &phi_bb93_14);
    tmp104 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp105 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp99, tmp104});
    tmp106 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp105});
    tmp107 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb93_12}, TNode<IntPtrT>{tmp106});
    tmp108 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp109 = CodeStubAssembler(state_).LoadReference<String>(CodeStubAssembler::Reference{tmp99, tmp108});
    ca_.Goto(&block87, phi_bb93_5, phi_bb93_6, phi_bb93_7, tmp109, tmp107, phi_bb93_14);
  }

  TNode<Object> phi_bb98_5;
  TNode<IntPtrT> phi_bb98_6;
  TNode<IntPtrT> phi_bb98_7;
  TNode<String> phi_bb98_11;
  TNode<IntPtrT> phi_bb98_12;
  TNode<String> phi_bb98_14;
  TNode<ExternalTwoByteString> tmp110;
  if (block98.is_used()) {
    ca_.Bind(&block98, &phi_bb98_5, &phi_bb98_6, &phi_bb98_7, &phi_bb98_11, &phi_bb98_12, &phi_bb98_14);
    compiler::CodeAssemblerLabel label111(&ca_);
    tmp110 = Cast_ExternalTwoByteString_1(state_, TNode<String>{ca_.UncheckedCast<String>(phi_bb98_14)}, &label111);
    ca_.Goto(&block105, phi_bb98_5, phi_bb98_6, phi_bb98_7, phi_bb98_11, phi_bb98_12, phi_bb98_14);
    if (label111.is_used()) {
      ca_.Bind(&label111);
      ca_.Goto(&block106, phi_bb98_5, phi_bb98_6, phi_bb98_7, phi_bb98_11, phi_bb98_12, phi_bb98_14);
    }
  }

  TNode<Object> phi_bb97_5;
  TNode<IntPtrT> phi_bb97_6;
  TNode<IntPtrT> phi_bb97_7;
  TNode<String> phi_bb97_11;
  TNode<IntPtrT> phi_bb97_12;
  TNode<String> phi_bb97_14;
  TNode<RawPtrT> tmp112;
  TNode<IntPtrT> tmp113;
  TNode<Int32T> tmp114;
  TNode<IntPtrT> tmp115;
  TNode<Object> tmp116;
  TNode<IntPtrT> tmp117;
  TNode<IntPtrT> tmp118;
  TNode<Object> tmp119;
  TNode<IntPtrT> tmp120;
  TNode<IntPtrT> tmp121;
  if (block97.is_used()) {
    ca_.Bind(&block97, &phi_bb97_5, &phi_bb97_6, &phi_bb97_7, &phi_bb97_11, &phi_bb97_12, &phi_bb97_14);
    tmp112 = Method_ExternalOneByteString_GetChars_0(state_, TNode<ExternalOneByteString>{tmp102});
    tmp113 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp114 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp102, tmp113});
    tmp115 = Convert_intptr_int32_0(state_, TNode<Int32T>{tmp114});
    std::tie(tmp116, tmp117, tmp118) = NewOffHeapConstSlice_char8_0(state_, TNode<RawPtrT>{tmp112}, TNode<IntPtrT>{tmp115}).Flatten();
    compiler::CodeAssemblerLabel label122(&ca_);
    std::tie(tmp119, tmp120, tmp121) = Subslice_char8_0(state_, TorqueStructSlice_char8_ConstReference_char8_0{TNode<Object>{tmp116}, TNode<IntPtrT>{tmp117}, TNode<IntPtrT>{tmp118}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{phi_bb97_12}, TNode<IntPtrT>{tmp73}, &label122).Flatten();
    ca_.Goto(&block101, phi_bb97_5, phi_bb97_6, phi_bb97_7, phi_bb97_11, phi_bb97_12, phi_bb97_14, phi_bb97_12);
    if (label122.is_used()) {
      ca_.Bind(&label122);
      ca_.Goto(&block102, phi_bb97_5, phi_bb97_6, phi_bb97_7, phi_bb97_11, phi_bb97_12, phi_bb97_14, phi_bb97_12);
    }
  }

  TNode<Object> phi_bb102_5;
  TNode<IntPtrT> phi_bb102_6;
  TNode<IntPtrT> phi_bb102_7;
  TNode<String> phi_bb102_11;
  TNode<IntPtrT> phi_bb102_12;
  TNode<String> phi_bb102_14;
  TNode<IntPtrT> phi_bb102_22;
  if (block102.is_used()) {
    ca_.Bind(&block102, &phi_bb102_5, &phi_bb102_6, &phi_bb102_7, &phi_bb102_11, &phi_bb102_12, &phi_bb102_14, &phi_bb102_22);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Object> phi_bb101_5;
  TNode<IntPtrT> phi_bb101_6;
  TNode<IntPtrT> phi_bb101_7;
  TNode<String> phi_bb101_11;
  TNode<IntPtrT> phi_bb101_12;
  TNode<String> phi_bb101_14;
  TNode<IntPtrT> phi_bb101_22;
  if (block101.is_used()) {
    ca_.Bind(&block101, &phi_bb101_5, &phi_bb101_6, &phi_bb101_7, &phi_bb101_11, &phi_bb101_12, &phi_bb101_14, &phi_bb101_22);
    ca_.Goto(&block61, phi_bb101_5, phi_bb101_6, phi_bb101_7, tmp119, tmp120, tmp121);
  }

  TNode<Object> phi_bb106_5;
  TNode<IntPtrT> phi_bb106_6;
  TNode<IntPtrT> phi_bb106_7;
  TNode<String> phi_bb106_11;
  TNode<IntPtrT> phi_bb106_12;
  TNode<String> phi_bb106_14;
  if (block106.is_used()) {
    ca_.Bind(&block106, &phi_bb106_5, &phi_bb106_6, &phi_bb106_7, &phi_bb106_11, &phi_bb106_12, &phi_bb106_14);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Object> phi_bb105_5;
  TNode<IntPtrT> phi_bb105_6;
  TNode<IntPtrT> phi_bb105_7;
  TNode<String> phi_bb105_11;
  TNode<IntPtrT> phi_bb105_12;
  TNode<String> phi_bb105_14;
  TNode<RawPtrT> tmp123;
  TNode<IntPtrT> tmp124;
  TNode<Int32T> tmp125;
  TNode<IntPtrT> tmp126;
  TNode<Object> tmp127;
  TNode<IntPtrT> tmp128;
  TNode<IntPtrT> tmp129;
  TNode<Object> tmp130;
  TNode<IntPtrT> tmp131;
  TNode<IntPtrT> tmp132;
  if (block105.is_used()) {
    ca_.Bind(&block105, &phi_bb105_5, &phi_bb105_6, &phi_bb105_7, &phi_bb105_11, &phi_bb105_12, &phi_bb105_14);
    tmp123 = Method_ExternalTwoByteString_GetChars_0(state_, TNode<ExternalTwoByteString>{tmp110});
    tmp124 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp125 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp110, tmp124});
    tmp126 = Convert_intptr_int32_0(state_, TNode<Int32T>{tmp125});
    std::tie(tmp127, tmp128, tmp129) = NewOffHeapConstSlice_char16_0(state_, TNode<RawPtrT>{tmp123}, TNode<IntPtrT>{tmp126}).Flatten();
    compiler::CodeAssemblerLabel label133(&ca_);
    std::tie(tmp130, tmp131, tmp132) = Subslice_char16_0(state_, TorqueStructSlice_char16_ConstReference_char16_0{TNode<Object>{tmp127}, TNode<IntPtrT>{tmp128}, TNode<IntPtrT>{tmp129}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{phi_bb105_12}, TNode<IntPtrT>{tmp73}, &label133).Flatten();
    ca_.Goto(&block109, phi_bb105_5, phi_bb105_6, phi_bb105_7, phi_bb105_11, phi_bb105_12, phi_bb105_14, phi_bb105_12);
    if (label133.is_used()) {
      ca_.Bind(&label133);
      ca_.Goto(&block110, phi_bb105_5, phi_bb105_6, phi_bb105_7, phi_bb105_11, phi_bb105_12, phi_bb105_14, phi_bb105_12);
    }
  }

  TNode<Object> phi_bb110_5;
  TNode<IntPtrT> phi_bb110_6;
  TNode<IntPtrT> phi_bb110_7;
  TNode<String> phi_bb110_11;
  TNode<IntPtrT> phi_bb110_12;
  TNode<String> phi_bb110_14;
  TNode<IntPtrT> phi_bb110_22;
  if (block110.is_used()) {
    ca_.Bind(&block110, &phi_bb110_5, &phi_bb110_6, &phi_bb110_7, &phi_bb110_11, &phi_bb110_12, &phi_bb110_14, &phi_bb110_22);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Object> phi_bb109_5;
  TNode<IntPtrT> phi_bb109_6;
  TNode<IntPtrT> phi_bb109_7;
  TNode<String> phi_bb109_11;
  TNode<IntPtrT> phi_bb109_12;
  TNode<String> phi_bb109_14;
  TNode<IntPtrT> phi_bb109_22;
  if (block109.is_used()) {
    ca_.Bind(&block109, &phi_bb109_5, &phi_bb109_6, &phi_bb109_7, &phi_bb109_11, &phi_bb109_12, &phi_bb109_14, &phi_bb109_22);
    ca_.Goto(&block59, phi_bb109_5, phi_bb109_6, phi_bb109_7, tmp130, tmp131, tmp132);
  }

  TNode<Object> phi_bb87_5;
  TNode<IntPtrT> phi_bb87_6;
  TNode<IntPtrT> phi_bb87_7;
  TNode<String> phi_bb87_11;
  TNode<IntPtrT> phi_bb87_12;
  TNode<String> phi_bb87_14;
  if (block87.is_used()) {
    ca_.Bind(&block87, &phi_bb87_5, &phi_bb87_6, &phi_bb87_7, &phi_bb87_11, &phi_bb87_12, &phi_bb87_14);
    ca_.Goto(&block83, phi_bb87_5, phi_bb87_6, phi_bb87_7, phi_bb87_11, phi_bb87_12, phi_bb87_14);
  }

  TNode<Object> phi_bb83_5;
  TNode<IntPtrT> phi_bb83_6;
  TNode<IntPtrT> phi_bb83_7;
  TNode<String> phi_bb83_11;
  TNode<IntPtrT> phi_bb83_12;
  TNode<String> phi_bb83_14;
  if (block83.is_used()) {
    ca_.Bind(&block83, &phi_bb83_5, &phi_bb83_6, &phi_bb83_7, &phi_bb83_11, &phi_bb83_12, &phi_bb83_14);
    ca_.Goto(&block66, phi_bb83_5, phi_bb83_6, phi_bb83_7, phi_bb83_11, phi_bb83_12);
  }

  TNode<Object> phi_bb65_5;
  TNode<IntPtrT> phi_bb65_6;
  TNode<IntPtrT> phi_bb65_7;
  TNode<String> phi_bb65_11;
  TNode<IntPtrT> phi_bb65_12;
  if (block65.is_used()) {
    ca_.Bind(&block65, &phi_bb65_5, &phi_bb65_6, &phi_bb65_7, &phi_bb65_11, &phi_bb65_12);
    VerifiedUnreachable_0(state_);
  }

  TNode<Object> phi_bb61_5;
  TNode<IntPtrT> phi_bb61_6;
  TNode<IntPtrT> phi_bb61_7;
  TNode<Object> phi_bb61_8;
  TNode<IntPtrT> phi_bb61_9;
  TNode<IntPtrT> phi_bb61_10;
  TNode<Number> tmp134;
  if (block61.is_used()) {
    ca_.Bind(&block61, &phi_bb61_5, &phi_bb61_6, &phi_bb61_7, &phi_bb61_8, &phi_bb61_9, &phi_bb61_10);
    compiler::CodeAssemblerLabel label135(&ca_);
    tmp134 = LocaleCompareFastPath_char8_char8_0(state_, TorqueStructSlice_char8_ConstReference_char8_0{TNode<Object>{phi_bb61_5}, TNode<IntPtrT>{phi_bb61_6}, TNode<IntPtrT>{phi_bb61_7}, TorqueStructUnsafe_0{}}, TorqueStructSlice_char8_ConstReference_char8_0{TNode<Object>{phi_bb61_8}, TNode<IntPtrT>{phi_bb61_9}, TNode<IntPtrT>{phi_bb61_10}, TorqueStructUnsafe_0{}}, &label135);
    ca_.Goto(&block111, phi_bb61_5, phi_bb61_6, phi_bb61_7, phi_bb61_8, phi_bb61_9, phi_bb61_10, phi_bb61_5, phi_bb61_6, phi_bb61_7, phi_bb61_8, phi_bb61_9, phi_bb61_10);
    if (label135.is_used()) {
      ca_.Bind(&label135);
      ca_.Goto(&block112, phi_bb61_5, phi_bb61_6, phi_bb61_7, phi_bb61_8, phi_bb61_9, phi_bb61_10, phi_bb61_5, phi_bb61_6, phi_bb61_7, phi_bb61_8, phi_bb61_9, phi_bb61_10);
    }
  }

  TNode<Object> phi_bb112_5;
  TNode<IntPtrT> phi_bb112_6;
  TNode<IntPtrT> phi_bb112_7;
  TNode<Object> phi_bb112_8;
  TNode<IntPtrT> phi_bb112_9;
  TNode<IntPtrT> phi_bb112_10;
  TNode<Object> phi_bb112_11;
  TNode<IntPtrT> phi_bb112_12;
  TNode<IntPtrT> phi_bb112_13;
  TNode<Object> phi_bb112_14;
  TNode<IntPtrT> phi_bb112_15;
  TNode<IntPtrT> phi_bb112_16;
  if (block112.is_used()) {
    ca_.Bind(&block112, &phi_bb112_5, &phi_bb112_6, &phi_bb112_7, &phi_bb112_8, &phi_bb112_9, &phi_bb112_10, &phi_bb112_11, &phi_bb112_12, &phi_bb112_13, &phi_bb112_14, &phi_bb112_15, &phi_bb112_16);
    ca_.Goto(&block2);
  }

  TNode<Object> phi_bb111_5;
  TNode<IntPtrT> phi_bb111_6;
  TNode<IntPtrT> phi_bb111_7;
  TNode<Object> phi_bb111_8;
  TNode<IntPtrT> phi_bb111_9;
  TNode<IntPtrT> phi_bb111_10;
  TNode<Object> phi_bb111_11;
  TNode<IntPtrT> phi_bb111_12;
  TNode<IntPtrT> phi_bb111_13;
  TNode<Object> phi_bb111_14;
  TNode<IntPtrT> phi_bb111_15;
  TNode<IntPtrT> phi_bb111_16;
  if (block111.is_used()) {
    ca_.Bind(&block111, &phi_bb111_5, &phi_bb111_6, &phi_bb111_7, &phi_bb111_8, &phi_bb111_9, &phi_bb111_10, &phi_bb111_11, &phi_bb111_12, &phi_bb111_13, &phi_bb111_14, &phi_bb111_15, &phi_bb111_16);
    CodeStubAssembler(state_).Return(tmp134);
  }

  TNode<Object> phi_bb59_5;
  TNode<IntPtrT> phi_bb59_6;
  TNode<IntPtrT> phi_bb59_7;
  TNode<Object> phi_bb59_8;
  TNode<IntPtrT> phi_bb59_9;
  TNode<IntPtrT> phi_bb59_10;
  TNode<Number> tmp136;
  if (block59.is_used()) {
    ca_.Bind(&block59, &phi_bb59_5, &phi_bb59_6, &phi_bb59_7, &phi_bb59_8, &phi_bb59_9, &phi_bb59_10);
    compiler::CodeAssemblerLabel label137(&ca_);
    tmp136 = LocaleCompareFastPath_char8_char16_0(state_, TorqueStructSlice_char8_ConstReference_char8_0{TNode<Object>{phi_bb59_5}, TNode<IntPtrT>{phi_bb59_6}, TNode<IntPtrT>{phi_bb59_7}, TorqueStructUnsafe_0{}}, TorqueStructSlice_char16_ConstReference_char16_0{TNode<Object>{phi_bb59_8}, TNode<IntPtrT>{phi_bb59_9}, TNode<IntPtrT>{phi_bb59_10}, TorqueStructUnsafe_0{}}, &label137);
    ca_.Goto(&block113, phi_bb59_5, phi_bb59_6, phi_bb59_7, phi_bb59_8, phi_bb59_9, phi_bb59_10, phi_bb59_5, phi_bb59_6, phi_bb59_7, phi_bb59_8, phi_bb59_9, phi_bb59_10);
    if (label137.is_used()) {
      ca_.Bind(&label137);
      ca_.Goto(&block114, phi_bb59_5, phi_bb59_6, phi_bb59_7, phi_bb59_8, phi_bb59_9, phi_bb59_10, phi_bb59_5, phi_bb59_6, phi_bb59_7, phi_bb59_8, phi_bb59_9, phi_bb59_10);
    }
  }

  TNode<Object> phi_bb114_5;
  TNode<IntPtrT> phi_bb114_6;
  TNode<IntPtrT> phi_bb114_7;
  TNode<Object> phi_bb114_8;
  TNode<IntPtrT> phi_bb114_9;
  TNode<IntPtrT> phi_bb114_10;
  TNode<Object> phi_bb114_11;
  TNode<IntPtrT> phi_bb114_12;
  TNode<IntPtrT> phi_bb114_13;
  TNode<Object> phi_bb114_14;
  TNode<IntPtrT> phi_bb114_15;
  TNode<IntPtrT> phi_bb114_16;
  if (block114.is_used()) {
    ca_.Bind(&block114, &phi_bb114_5, &phi_bb114_6, &phi_bb114_7, &phi_bb114_8, &phi_bb114_9, &phi_bb114_10, &phi_bb114_11, &phi_bb114_12, &phi_bb114_13, &phi_bb114_14, &phi_bb114_15, &phi_bb114_16);
    ca_.Goto(&block2);
  }

  TNode<Object> phi_bb113_5;
  TNode<IntPtrT> phi_bb113_6;
  TNode<IntPtrT> phi_bb113_7;
  TNode<Object> phi_bb113_8;
  TNode<IntPtrT> phi_bb113_9;
  TNode<IntPtrT> phi_bb113_10;
  TNode<Object> phi_bb113_11;
  TNode<IntPtrT> phi_bb113_12;
  TNode<IntPtrT> phi_bb113_13;
  TNode<Object> phi_bb113_14;
  TNode<IntPtrT> phi_bb113_15;
  TNode<IntPtrT> phi_bb113_16;
  if (block113.is_used()) {
    ca_.Bind(&block113, &phi_bb113_5, &phi_bb113_6, &phi_bb113_7, &phi_bb113_8, &phi_bb113_9, &phi_bb113_10, &phi_bb113_11, &phi_bb113_12, &phi_bb113_13, &phi_bb113_14, &phi_bb113_15, &phi_bb113_16);
    CodeStubAssembler(state_).Return(tmp136);
  }

  TNode<Object> phi_bb4_5;
  TNode<IntPtrT> phi_bb4_6;
  TNode<IntPtrT> phi_bb4_7;
  TNode<String> tmp138;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_5, &phi_bb4_6, &phi_bb4_7);
    compiler::CodeAssemblerLabel label139(&ca_);
    tmp138 = Cast_String_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter3}, &label139);
    ca_.Goto(&block119, phi_bb4_5, phi_bb4_6, phi_bb4_7);
    if (label139.is_used()) {
      ca_.Bind(&label139);
      ca_.Goto(&block120, phi_bb4_5, phi_bb4_6, phi_bb4_7);
    }
  }

  TNode<Object> phi_bb120_5;
  TNode<IntPtrT> phi_bb120_6;
  TNode<IntPtrT> phi_bb120_7;
  if (block120.is_used()) {
    ca_.Bind(&block120, &phi_bb120_5, &phi_bb120_6, &phi_bb120_7);
    ca_.Goto(&block2);
  }

  TNode<Object> phi_bb119_5;
  TNode<IntPtrT> phi_bb119_6;
  TNode<IntPtrT> phi_bb119_7;
  TNode<IntPtrT> tmp140;
  TNode<IntPtrT> tmp141;
  TNode<Int32T> tmp142;
  TNode<IntPtrT> tmp143;
  if (block119.is_used()) {
    ca_.Bind(&block119, &phi_bb119_5, &phi_bb119_6, &phi_bb119_7);
    tmp140 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp141 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp142 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp138, tmp141});
    tmp143 = Convert_intptr_int32_0(state_, TNode<Int32T>{tmp142});
    ca_.Goto(&block123, phi_bb119_5, phi_bb119_6, phi_bb119_7, tmp138, tmp140);
  }

  TNode<Object> phi_bb123_5;
  TNode<IntPtrT> phi_bb123_6;
  TNode<IntPtrT> phi_bb123_7;
  TNode<String> phi_bb123_11;
  TNode<IntPtrT> phi_bb123_12;
  TNode<BoolT> tmp144;
  if (block123.is_used()) {
    ca_.Bind(&block123, &phi_bb123_5, &phi_bb123_6, &phi_bb123_7, &phi_bb123_11, &phi_bb123_12);
    tmp144 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp144, &block121, std::vector<compiler::Node*>{phi_bb123_5, phi_bb123_6, phi_bb123_7, phi_bb123_11, phi_bb123_12}, &block122, std::vector<compiler::Node*>{phi_bb123_5, phi_bb123_6, phi_bb123_7, phi_bb123_11, phi_bb123_12});
  }

  TNode<Object> phi_bb121_5;
  TNode<IntPtrT> phi_bb121_6;
  TNode<IntPtrT> phi_bb121_7;
  TNode<String> phi_bb121_11;
  TNode<IntPtrT> phi_bb121_12;
  TNode<SeqOneByteString> tmp145;
  if (block121.is_used()) {
    ca_.Bind(&block121, &phi_bb121_5, &phi_bb121_6, &phi_bb121_7, &phi_bb121_11, &phi_bb121_12);
    compiler::CodeAssemblerLabel label146(&ca_);
    tmp145 = Cast_SeqOneByteString_1(state_, TNode<String>{phi_bb121_11}, &label146);
    ca_.Goto(&block126, phi_bb121_5, phi_bb121_6, phi_bb121_7, phi_bb121_11, phi_bb121_12, phi_bb121_11, phi_bb121_11);
    if (label146.is_used()) {
      ca_.Bind(&label146);
      ca_.Goto(&block127, phi_bb121_5, phi_bb121_6, phi_bb121_7, phi_bb121_11, phi_bb121_12, phi_bb121_11, phi_bb121_11);
    }
  }

  TNode<Object> phi_bb127_5;
  TNode<IntPtrT> phi_bb127_6;
  TNode<IntPtrT> phi_bb127_7;
  TNode<String> phi_bb127_11;
  TNode<IntPtrT> phi_bb127_12;
  TNode<String> phi_bb127_14;
  TNode<String> phi_bb127_15;
  TNode<SeqTwoByteString> tmp147;
  if (block127.is_used()) {
    ca_.Bind(&block127, &phi_bb127_5, &phi_bb127_6, &phi_bb127_7, &phi_bb127_11, &phi_bb127_12, &phi_bb127_14, &phi_bb127_15);
    compiler::CodeAssemblerLabel label148(&ca_);
    tmp147 = Cast_SeqTwoByteString_1(state_, TNode<String>{ca_.UncheckedCast<String>(phi_bb127_14)}, &label148);
    ca_.Goto(&block134, phi_bb127_5, phi_bb127_6, phi_bb127_7, phi_bb127_11, phi_bb127_12, phi_bb127_14);
    if (label148.is_used()) {
      ca_.Bind(&label148);
      ca_.Goto(&block135, phi_bb127_5, phi_bb127_6, phi_bb127_7, phi_bb127_11, phi_bb127_12, phi_bb127_14);
    }
  }

  TNode<Object> phi_bb126_5;
  TNode<IntPtrT> phi_bb126_6;
  TNode<IntPtrT> phi_bb126_7;
  TNode<String> phi_bb126_11;
  TNode<IntPtrT> phi_bb126_12;
  TNode<String> phi_bb126_14;
  TNode<String> phi_bb126_15;
  TNode<Object> tmp149;
  TNode<IntPtrT> tmp150;
  TNode<IntPtrT> tmp151;
  TNode<Object> tmp152;
  TNode<IntPtrT> tmp153;
  TNode<IntPtrT> tmp154;
  if (block126.is_used()) {
    ca_.Bind(&block126, &phi_bb126_5, &phi_bb126_6, &phi_bb126_7, &phi_bb126_11, &phi_bb126_12, &phi_bb126_14, &phi_bb126_15);
    std::tie(tmp149, tmp150, tmp151) = FieldSliceSeqOneByteStringChars_0(state_, TNode<SeqOneByteString>{tmp145}).Flatten();
    compiler::CodeAssemblerLabel label155(&ca_);
    std::tie(tmp152, tmp153, tmp154) = Subslice_char8_0(state_, TorqueStructSlice_char8_ConstReference_char8_0{TNode<Object>{tmp149}, TNode<IntPtrT>{tmp150}, TNode<IntPtrT>{tmp151}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{phi_bb126_12}, TNode<IntPtrT>{tmp143}, &label155).Flatten();
    ca_.Goto(&block130, phi_bb126_5, phi_bb126_6, phi_bb126_7, phi_bb126_11, phi_bb126_12, phi_bb126_14, phi_bb126_12);
    if (label155.is_used()) {
      ca_.Bind(&label155);
      ca_.Goto(&block131, phi_bb126_5, phi_bb126_6, phi_bb126_7, phi_bb126_11, phi_bb126_12, phi_bb126_14, phi_bb126_12);
    }
  }

  TNode<Object> phi_bb131_5;
  TNode<IntPtrT> phi_bb131_6;
  TNode<IntPtrT> phi_bb131_7;
  TNode<String> phi_bb131_11;
  TNode<IntPtrT> phi_bb131_12;
  TNode<String> phi_bb131_14;
  TNode<IntPtrT> phi_bb131_19;
  if (block131.is_used()) {
    ca_.Bind(&block131, &phi_bb131_5, &phi_bb131_6, &phi_bb131_7, &phi_bb131_11, &phi_bb131_12, &phi_bb131_14, &phi_bb131_19);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Object> phi_bb130_5;
  TNode<IntPtrT> phi_bb130_6;
  TNode<IntPtrT> phi_bb130_7;
  TNode<String> phi_bb130_11;
  TNode<IntPtrT> phi_bb130_12;
  TNode<String> phi_bb130_14;
  TNode<IntPtrT> phi_bb130_19;
  if (block130.is_used()) {
    ca_.Bind(&block130, &phi_bb130_5, &phi_bb130_6, &phi_bb130_7, &phi_bb130_11, &phi_bb130_12, &phi_bb130_14, &phi_bb130_19);
    ca_.Goto(&block118, phi_bb130_5, phi_bb130_6, phi_bb130_7, tmp152, tmp153, tmp154);
  }

  TNode<Object> phi_bb135_5;
  TNode<IntPtrT> phi_bb135_6;
  TNode<IntPtrT> phi_bb135_7;
  TNode<String> phi_bb135_11;
  TNode<IntPtrT> phi_bb135_12;
  TNode<String> phi_bb135_14;
  TNode<ThinString> tmp156;
  if (block135.is_used()) {
    ca_.Bind(&block135, &phi_bb135_5, &phi_bb135_6, &phi_bb135_7, &phi_bb135_11, &phi_bb135_12, &phi_bb135_14);
    compiler::CodeAssemblerLabel label157(&ca_);
    tmp156 = Cast_ThinString_1(state_, TNode<String>{ca_.UncheckedCast<String>(phi_bb135_14)}, &label157);
    ca_.Goto(&block142, phi_bb135_5, phi_bb135_6, phi_bb135_7, phi_bb135_11, phi_bb135_12, phi_bb135_14);
    if (label157.is_used()) {
      ca_.Bind(&label157);
      ca_.Goto(&block143, phi_bb135_5, phi_bb135_6, phi_bb135_7, phi_bb135_11, phi_bb135_12, phi_bb135_14);
    }
  }

  TNode<Object> phi_bb134_5;
  TNode<IntPtrT> phi_bb134_6;
  TNode<IntPtrT> phi_bb134_7;
  TNode<String> phi_bb134_11;
  TNode<IntPtrT> phi_bb134_12;
  TNode<String> phi_bb134_14;
  TNode<Object> tmp158;
  TNode<IntPtrT> tmp159;
  TNode<IntPtrT> tmp160;
  TNode<Object> tmp161;
  TNode<IntPtrT> tmp162;
  TNode<IntPtrT> tmp163;
  if (block134.is_used()) {
    ca_.Bind(&block134, &phi_bb134_5, &phi_bb134_6, &phi_bb134_7, &phi_bb134_11, &phi_bb134_12, &phi_bb134_14);
    std::tie(tmp158, tmp159, tmp160) = FieldSliceSeqTwoByteStringChars_0(state_, TNode<SeqTwoByteString>{tmp147}).Flatten();
    compiler::CodeAssemblerLabel label164(&ca_);
    std::tie(tmp161, tmp162, tmp163) = Subslice_char16_0(state_, TorqueStructSlice_char16_ConstReference_char16_0{TNode<Object>{tmp158}, TNode<IntPtrT>{tmp159}, TNode<IntPtrT>{tmp160}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{phi_bb134_12}, TNode<IntPtrT>{tmp143}, &label164).Flatten();
    ca_.Goto(&block138, phi_bb134_5, phi_bb134_6, phi_bb134_7, phi_bb134_11, phi_bb134_12, phi_bb134_14, phi_bb134_12);
    if (label164.is_used()) {
      ca_.Bind(&label164);
      ca_.Goto(&block139, phi_bb134_5, phi_bb134_6, phi_bb134_7, phi_bb134_11, phi_bb134_12, phi_bb134_14, phi_bb134_12);
    }
  }

  TNode<Object> phi_bb139_5;
  TNode<IntPtrT> phi_bb139_6;
  TNode<IntPtrT> phi_bb139_7;
  TNode<String> phi_bb139_11;
  TNode<IntPtrT> phi_bb139_12;
  TNode<String> phi_bb139_14;
  TNode<IntPtrT> phi_bb139_19;
  if (block139.is_used()) {
    ca_.Bind(&block139, &phi_bb139_5, &phi_bb139_6, &phi_bb139_7, &phi_bb139_11, &phi_bb139_12, &phi_bb139_14, &phi_bb139_19);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Object> phi_bb138_5;
  TNode<IntPtrT> phi_bb138_6;
  TNode<IntPtrT> phi_bb138_7;
  TNode<String> phi_bb138_11;
  TNode<IntPtrT> phi_bb138_12;
  TNode<String> phi_bb138_14;
  TNode<IntPtrT> phi_bb138_19;
  if (block138.is_used()) {
    ca_.Bind(&block138, &phi_bb138_5, &phi_bb138_6, &phi_bb138_7, &phi_bb138_11, &phi_bb138_12, &phi_bb138_14, &phi_bb138_19);
    ca_.Goto(&block116, phi_bb138_5, phi_bb138_6, phi_bb138_7, tmp161, tmp162, tmp163);
  }

  TNode<Object> phi_bb143_5;
  TNode<IntPtrT> phi_bb143_6;
  TNode<IntPtrT> phi_bb143_7;
  TNode<String> phi_bb143_11;
  TNode<IntPtrT> phi_bb143_12;
  TNode<String> phi_bb143_14;
  TNode<ConsString> tmp165;
  if (block143.is_used()) {
    ca_.Bind(&block143, &phi_bb143_5, &phi_bb143_6, &phi_bb143_7, &phi_bb143_11, &phi_bb143_12, &phi_bb143_14);
    compiler::CodeAssemblerLabel label166(&ca_);
    tmp165 = Cast_ConsString_1(state_, TNode<String>{ca_.UncheckedCast<String>(phi_bb143_14)}, &label166);
    ca_.Goto(&block146, phi_bb143_5, phi_bb143_6, phi_bb143_7, phi_bb143_11, phi_bb143_12, phi_bb143_14);
    if (label166.is_used()) {
      ca_.Bind(&label166);
      ca_.Goto(&block147, phi_bb143_5, phi_bb143_6, phi_bb143_7, phi_bb143_11, phi_bb143_12, phi_bb143_14);
    }
  }

  TNode<Object> phi_bb142_5;
  TNode<IntPtrT> phi_bb142_6;
  TNode<IntPtrT> phi_bb142_7;
  TNode<String> phi_bb142_11;
  TNode<IntPtrT> phi_bb142_12;
  TNode<String> phi_bb142_14;
  TNode<IntPtrT> tmp167;
  TNode<String> tmp168;
  if (block142.is_used()) {
    ca_.Bind(&block142, &phi_bb142_5, &phi_bb142_6, &phi_bb142_7, &phi_bb142_11, &phi_bb142_12, &phi_bb142_14);
    tmp167 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp168 = CodeStubAssembler(state_).LoadReference<String>(CodeStubAssembler::Reference{tmp156, tmp167});
    ca_.Goto(&block140, phi_bb142_5, phi_bb142_6, phi_bb142_7, tmp168, phi_bb142_12, phi_bb142_14);
  }

  TNode<Object> phi_bb147_5;
  TNode<IntPtrT> phi_bb147_6;
  TNode<IntPtrT> phi_bb147_7;
  TNode<String> phi_bb147_11;
  TNode<IntPtrT> phi_bb147_12;
  TNode<String> phi_bb147_14;
  TNode<SlicedString> tmp169;
  if (block147.is_used()) {
    ca_.Bind(&block147, &phi_bb147_5, &phi_bb147_6, &phi_bb147_7, &phi_bb147_11, &phi_bb147_12, &phi_bb147_14);
    compiler::CodeAssemblerLabel label170(&ca_);
    tmp169 = Cast_SlicedString_1(state_, TNode<String>{ca_.UncheckedCast<String>(phi_bb147_14)}, &label170);
    ca_.Goto(&block150, phi_bb147_5, phi_bb147_6, phi_bb147_7, phi_bb147_11, phi_bb147_12, phi_bb147_14);
    if (label170.is_used()) {
      ca_.Bind(&label170);
      ca_.Goto(&block151, phi_bb147_5, phi_bb147_6, phi_bb147_7, phi_bb147_11, phi_bb147_12, phi_bb147_14);
    }
  }

  TNode<Object> phi_bb146_5;
  TNode<IntPtrT> phi_bb146_6;
  TNode<IntPtrT> phi_bb146_7;
  TNode<String> phi_bb146_11;
  TNode<IntPtrT> phi_bb146_12;
  TNode<String> phi_bb146_14;
  TNode<String> tmp171;
  if (block146.is_used()) {
    ca_.Bind(&block146, &phi_bb146_5, &phi_bb146_6, &phi_bb146_7, &phi_bb146_11, &phi_bb146_12, &phi_bb146_14);
    tmp171 = Flatten_1(state_, TNode<ConsString>{tmp165});
    ca_.Goto(&block144, phi_bb146_5, phi_bb146_6, phi_bb146_7, tmp171, phi_bb146_12, phi_bb146_14);
  }

  TNode<Object> phi_bb151_5;
  TNode<IntPtrT> phi_bb151_6;
  TNode<IntPtrT> phi_bb151_7;
  TNode<String> phi_bb151_11;
  TNode<IntPtrT> phi_bb151_12;
  TNode<String> phi_bb151_14;
  TNode<ExternalOneByteString> tmp172;
  if (block151.is_used()) {
    ca_.Bind(&block151, &phi_bb151_5, &phi_bb151_6, &phi_bb151_7, &phi_bb151_11, &phi_bb151_12, &phi_bb151_14);
    compiler::CodeAssemblerLabel label173(&ca_);
    tmp172 = Cast_ExternalOneByteString_1(state_, TNode<String>{ca_.UncheckedCast<String>(phi_bb151_14)}, &label173);
    ca_.Goto(&block154, phi_bb151_5, phi_bb151_6, phi_bb151_7, phi_bb151_11, phi_bb151_12, phi_bb151_14);
    if (label173.is_used()) {
      ca_.Bind(&label173);
      ca_.Goto(&block155, phi_bb151_5, phi_bb151_6, phi_bb151_7, phi_bb151_11, phi_bb151_12, phi_bb151_14);
    }
  }

  TNode<Object> phi_bb150_5;
  TNode<IntPtrT> phi_bb150_6;
  TNode<IntPtrT> phi_bb150_7;
  TNode<String> phi_bb150_11;
  TNode<IntPtrT> phi_bb150_12;
  TNode<String> phi_bb150_14;
  TNode<IntPtrT> tmp174;
  TNode<Smi> tmp175;
  TNode<IntPtrT> tmp176;
  TNode<IntPtrT> tmp177;
  TNode<IntPtrT> tmp178;
  TNode<String> tmp179;
  if (block150.is_used()) {
    ca_.Bind(&block150, &phi_bb150_5, &phi_bb150_6, &phi_bb150_7, &phi_bb150_11, &phi_bb150_12, &phi_bb150_14);
    tmp174 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp175 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp169, tmp174});
    tmp176 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp175});
    tmp177 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb150_12}, TNode<IntPtrT>{tmp176});
    tmp178 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp179 = CodeStubAssembler(state_).LoadReference<String>(CodeStubAssembler::Reference{tmp169, tmp178});
    ca_.Goto(&block144, phi_bb150_5, phi_bb150_6, phi_bb150_7, tmp179, tmp177, phi_bb150_14);
  }

  TNode<Object> phi_bb155_5;
  TNode<IntPtrT> phi_bb155_6;
  TNode<IntPtrT> phi_bb155_7;
  TNode<String> phi_bb155_11;
  TNode<IntPtrT> phi_bb155_12;
  TNode<String> phi_bb155_14;
  TNode<ExternalTwoByteString> tmp180;
  if (block155.is_used()) {
    ca_.Bind(&block155, &phi_bb155_5, &phi_bb155_6, &phi_bb155_7, &phi_bb155_11, &phi_bb155_12, &phi_bb155_14);
    compiler::CodeAssemblerLabel label181(&ca_);
    tmp180 = Cast_ExternalTwoByteString_1(state_, TNode<String>{ca_.UncheckedCast<String>(phi_bb155_14)}, &label181);
    ca_.Goto(&block162, phi_bb155_5, phi_bb155_6, phi_bb155_7, phi_bb155_11, phi_bb155_12, phi_bb155_14);
    if (label181.is_used()) {
      ca_.Bind(&label181);
      ca_.Goto(&block163, phi_bb155_5, phi_bb155_6, phi_bb155_7, phi_bb155_11, phi_bb155_12, phi_bb155_14);
    }
  }

  TNode<Object> phi_bb154_5;
  TNode<IntPtrT> phi_bb154_6;
  TNode<IntPtrT> phi_bb154_7;
  TNode<String> phi_bb154_11;
  TNode<IntPtrT> phi_bb154_12;
  TNode<String> phi_bb154_14;
  TNode<RawPtrT> tmp182;
  TNode<IntPtrT> tmp183;
  TNode<Int32T> tmp184;
  TNode<IntPtrT> tmp185;
  TNode<Object> tmp186;
  TNode<IntPtrT> tmp187;
  TNode<IntPtrT> tmp188;
  TNode<Object> tmp189;
  TNode<IntPtrT> tmp190;
  TNode<IntPtrT> tmp191;
  if (block154.is_used()) {
    ca_.Bind(&block154, &phi_bb154_5, &phi_bb154_6, &phi_bb154_7, &phi_bb154_11, &phi_bb154_12, &phi_bb154_14);
    tmp182 = Method_ExternalOneByteString_GetChars_0(state_, TNode<ExternalOneByteString>{tmp172});
    tmp183 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp184 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp172, tmp183});
    tmp185 = Convert_intptr_int32_0(state_, TNode<Int32T>{tmp184});
    std::tie(tmp186, tmp187, tmp188) = NewOffHeapConstSlice_char8_0(state_, TNode<RawPtrT>{tmp182}, TNode<IntPtrT>{tmp185}).Flatten();
    compiler::CodeAssemblerLabel label192(&ca_);
    std::tie(tmp189, tmp190, tmp191) = Subslice_char8_0(state_, TorqueStructSlice_char8_ConstReference_char8_0{TNode<Object>{tmp186}, TNode<IntPtrT>{tmp187}, TNode<IntPtrT>{tmp188}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{phi_bb154_12}, TNode<IntPtrT>{tmp143}, &label192).Flatten();
    ca_.Goto(&block158, phi_bb154_5, phi_bb154_6, phi_bb154_7, phi_bb154_11, phi_bb154_12, phi_bb154_14, phi_bb154_12);
    if (label192.is_used()) {
      ca_.Bind(&label192);
      ca_.Goto(&block159, phi_bb154_5, phi_bb154_6, phi_bb154_7, phi_bb154_11, phi_bb154_12, phi_bb154_14, phi_bb154_12);
    }
  }

  TNode<Object> phi_bb159_5;
  TNode<IntPtrT> phi_bb159_6;
  TNode<IntPtrT> phi_bb159_7;
  TNode<String> phi_bb159_11;
  TNode<IntPtrT> phi_bb159_12;
  TNode<String> phi_bb159_14;
  TNode<IntPtrT> phi_bb159_22;
  if (block159.is_used()) {
    ca_.Bind(&block159, &phi_bb159_5, &phi_bb159_6, &phi_bb159_7, &phi_bb159_11, &phi_bb159_12, &phi_bb159_14, &phi_bb159_22);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Object> phi_bb158_5;
  TNode<IntPtrT> phi_bb158_6;
  TNode<IntPtrT> phi_bb158_7;
  TNode<String> phi_bb158_11;
  TNode<IntPtrT> phi_bb158_12;
  TNode<String> phi_bb158_14;
  TNode<IntPtrT> phi_bb158_22;
  if (block158.is_used()) {
    ca_.Bind(&block158, &phi_bb158_5, &phi_bb158_6, &phi_bb158_7, &phi_bb158_11, &phi_bb158_12, &phi_bb158_14, &phi_bb158_22);
    ca_.Goto(&block118, phi_bb158_5, phi_bb158_6, phi_bb158_7, tmp189, tmp190, tmp191);
  }

  TNode<Object> phi_bb163_5;
  TNode<IntPtrT> phi_bb163_6;
  TNode<IntPtrT> phi_bb163_7;
  TNode<String> phi_bb163_11;
  TNode<IntPtrT> phi_bb163_12;
  TNode<String> phi_bb163_14;
  if (block163.is_used()) {
    ca_.Bind(&block163, &phi_bb163_5, &phi_bb163_6, &phi_bb163_7, &phi_bb163_11, &phi_bb163_12, &phi_bb163_14);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Object> phi_bb162_5;
  TNode<IntPtrT> phi_bb162_6;
  TNode<IntPtrT> phi_bb162_7;
  TNode<String> phi_bb162_11;
  TNode<IntPtrT> phi_bb162_12;
  TNode<String> phi_bb162_14;
  TNode<RawPtrT> tmp193;
  TNode<IntPtrT> tmp194;
  TNode<Int32T> tmp195;
  TNode<IntPtrT> tmp196;
  TNode<Object> tmp197;
  TNode<IntPtrT> tmp198;
  TNode<IntPtrT> tmp199;
  TNode<Object> tmp200;
  TNode<IntPtrT> tmp201;
  TNode<IntPtrT> tmp202;
  if (block162.is_used()) {
    ca_.Bind(&block162, &phi_bb162_5, &phi_bb162_6, &phi_bb162_7, &phi_bb162_11, &phi_bb162_12, &phi_bb162_14);
    tmp193 = Method_ExternalTwoByteString_GetChars_0(state_, TNode<ExternalTwoByteString>{tmp180});
    tmp194 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp195 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp180, tmp194});
    tmp196 = Convert_intptr_int32_0(state_, TNode<Int32T>{tmp195});
    std::tie(tmp197, tmp198, tmp199) = NewOffHeapConstSlice_char16_0(state_, TNode<RawPtrT>{tmp193}, TNode<IntPtrT>{tmp196}).Flatten();
    compiler::CodeAssemblerLabel label203(&ca_);
    std::tie(tmp200, tmp201, tmp202) = Subslice_char16_0(state_, TorqueStructSlice_char16_ConstReference_char16_0{TNode<Object>{tmp197}, TNode<IntPtrT>{tmp198}, TNode<IntPtrT>{tmp199}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{phi_bb162_12}, TNode<IntPtrT>{tmp143}, &label203).Flatten();
    ca_.Goto(&block166, phi_bb162_5, phi_bb162_6, phi_bb162_7, phi_bb162_11, phi_bb162_12, phi_bb162_14, phi_bb162_12);
    if (label203.is_used()) {
      ca_.Bind(&label203);
      ca_.Goto(&block167, phi_bb162_5, phi_bb162_6, phi_bb162_7, phi_bb162_11, phi_bb162_12, phi_bb162_14, phi_bb162_12);
    }
  }

  TNode<Object> phi_bb167_5;
  TNode<IntPtrT> phi_bb167_6;
  TNode<IntPtrT> phi_bb167_7;
  TNode<String> phi_bb167_11;
  TNode<IntPtrT> phi_bb167_12;
  TNode<String> phi_bb167_14;
  TNode<IntPtrT> phi_bb167_22;
  if (block167.is_used()) {
    ca_.Bind(&block167, &phi_bb167_5, &phi_bb167_6, &phi_bb167_7, &phi_bb167_11, &phi_bb167_12, &phi_bb167_14, &phi_bb167_22);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Object> phi_bb166_5;
  TNode<IntPtrT> phi_bb166_6;
  TNode<IntPtrT> phi_bb166_7;
  TNode<String> phi_bb166_11;
  TNode<IntPtrT> phi_bb166_12;
  TNode<String> phi_bb166_14;
  TNode<IntPtrT> phi_bb166_22;
  if (block166.is_used()) {
    ca_.Bind(&block166, &phi_bb166_5, &phi_bb166_6, &phi_bb166_7, &phi_bb166_11, &phi_bb166_12, &phi_bb166_14, &phi_bb166_22);
    ca_.Goto(&block116, phi_bb166_5, phi_bb166_6, phi_bb166_7, tmp200, tmp201, tmp202);
  }

  TNode<Object> phi_bb144_5;
  TNode<IntPtrT> phi_bb144_6;
  TNode<IntPtrT> phi_bb144_7;
  TNode<String> phi_bb144_11;
  TNode<IntPtrT> phi_bb144_12;
  TNode<String> phi_bb144_14;
  if (block144.is_used()) {
    ca_.Bind(&block144, &phi_bb144_5, &phi_bb144_6, &phi_bb144_7, &phi_bb144_11, &phi_bb144_12, &phi_bb144_14);
    ca_.Goto(&block140, phi_bb144_5, phi_bb144_6, phi_bb144_7, phi_bb144_11, phi_bb144_12, phi_bb144_14);
  }

  TNode<Object> phi_bb140_5;
  TNode<IntPtrT> phi_bb140_6;
  TNode<IntPtrT> phi_bb140_7;
  TNode<String> phi_bb140_11;
  TNode<IntPtrT> phi_bb140_12;
  TNode<String> phi_bb140_14;
  if (block140.is_used()) {
    ca_.Bind(&block140, &phi_bb140_5, &phi_bb140_6, &phi_bb140_7, &phi_bb140_11, &phi_bb140_12, &phi_bb140_14);
    ca_.Goto(&block123, phi_bb140_5, phi_bb140_6, phi_bb140_7, phi_bb140_11, phi_bb140_12);
  }

  TNode<Object> phi_bb122_5;
  TNode<IntPtrT> phi_bb122_6;
  TNode<IntPtrT> phi_bb122_7;
  TNode<String> phi_bb122_11;
  TNode<IntPtrT> phi_bb122_12;
  if (block122.is_used()) {
    ca_.Bind(&block122, &phi_bb122_5, &phi_bb122_6, &phi_bb122_7, &phi_bb122_11, &phi_bb122_12);
    VerifiedUnreachable_0(state_);
  }

  TNode<Object> phi_bb118_5;
  TNode<IntPtrT> phi_bb118_6;
  TNode<IntPtrT> phi_bb118_7;
  TNode<Object> phi_bb118_8;
  TNode<IntPtrT> phi_bb118_9;
  TNode<IntPtrT> phi_bb118_10;
  TNode<Number> tmp204;
  if (block118.is_used()) {
    ca_.Bind(&block118, &phi_bb118_5, &phi_bb118_6, &phi_bb118_7, &phi_bb118_8, &phi_bb118_9, &phi_bb118_10);
    compiler::CodeAssemblerLabel label205(&ca_);
    tmp204 = LocaleCompareFastPath_char16_char8_0(state_, TorqueStructSlice_char16_ConstReference_char16_0{TNode<Object>{phi_bb118_5}, TNode<IntPtrT>{phi_bb118_6}, TNode<IntPtrT>{phi_bb118_7}, TorqueStructUnsafe_0{}}, TorqueStructSlice_char8_ConstReference_char8_0{TNode<Object>{phi_bb118_8}, TNode<IntPtrT>{phi_bb118_9}, TNode<IntPtrT>{phi_bb118_10}, TorqueStructUnsafe_0{}}, &label205);
    ca_.Goto(&block168, phi_bb118_5, phi_bb118_6, phi_bb118_7, phi_bb118_8, phi_bb118_9, phi_bb118_10, phi_bb118_5, phi_bb118_6, phi_bb118_7, phi_bb118_8, phi_bb118_9, phi_bb118_10);
    if (label205.is_used()) {
      ca_.Bind(&label205);
      ca_.Goto(&block169, phi_bb118_5, phi_bb118_6, phi_bb118_7, phi_bb118_8, phi_bb118_9, phi_bb118_10, phi_bb118_5, phi_bb118_6, phi_bb118_7, phi_bb118_8, phi_bb118_9, phi_bb118_10);
    }
  }

  TNode<Object> phi_bb169_5;
  TNode<IntPtrT> phi_bb169_6;
  TNode<IntPtrT> phi_bb169_7;
  TNode<Object> phi_bb169_8;
  TNode<IntPtrT> phi_bb169_9;
  TNode<IntPtrT> phi_bb169_10;
  TNode<Object> phi_bb169_11;
  TNode<IntPtrT> phi_bb169_12;
  TNode<IntPtrT> phi_bb169_13;
  TNode<Object> phi_bb169_14;
  TNode<IntPtrT> phi_bb169_15;
  TNode<IntPtrT> phi_bb169_16;
  if (block169.is_used()) {
    ca_.Bind(&block169, &phi_bb169_5, &phi_bb169_6, &phi_bb169_7, &phi_bb169_8, &phi_bb169_9, &phi_bb169_10, &phi_bb169_11, &phi_bb169_12, &phi_bb169_13, &phi_bb169_14, &phi_bb169_15, &phi_bb169_16);
    ca_.Goto(&block2);
  }

  TNode<Object> phi_bb168_5;
  TNode<IntPtrT> phi_bb168_6;
  TNode<IntPtrT> phi_bb168_7;
  TNode<Object> phi_bb168_8;
  TNode<IntPtrT> phi_bb168_9;
  TNode<IntPtrT> phi_bb168_10;
  TNode<Object> phi_bb168_11;
  TNode<IntPtrT> phi_bb168_12;
  TNode<IntPtrT> phi_bb168_13;
  TNode<Object> phi_bb168_14;
  TNode<IntPtrT> phi_bb168_15;
  TNode<IntPtrT> phi_bb168_16;
  if (block168.is_used()) {
    ca_.Bind(&block168, &phi_bb168_5, &phi_bb168_6, &phi_bb168_7, &phi_bb168_8, &phi_bb168_9, &phi_bb168_10, &phi_bb168_11, &phi_bb168_12, &phi_bb168_13, &phi_bb168_14, &phi_bb168_15, &phi_bb168_16);
    CodeStubAssembler(state_).Return(tmp204);
  }

  TNode<Object> phi_bb116_5;
  TNode<IntPtrT> phi_bb116_6;
  TNode<IntPtrT> phi_bb116_7;
  TNode<Object> phi_bb116_8;
  TNode<IntPtrT> phi_bb116_9;
  TNode<IntPtrT> phi_bb116_10;
  TNode<Number> tmp206;
  if (block116.is_used()) {
    ca_.Bind(&block116, &phi_bb116_5, &phi_bb116_6, &phi_bb116_7, &phi_bb116_8, &phi_bb116_9, &phi_bb116_10);
    compiler::CodeAssemblerLabel label207(&ca_);
    tmp206 = LocaleCompareFastPath_char16_char16_0(state_, TorqueStructSlice_char16_ConstReference_char16_0{TNode<Object>{phi_bb116_5}, TNode<IntPtrT>{phi_bb116_6}, TNode<IntPtrT>{phi_bb116_7}, TorqueStructUnsafe_0{}}, TorqueStructSlice_char16_ConstReference_char16_0{TNode<Object>{phi_bb116_8}, TNode<IntPtrT>{phi_bb116_9}, TNode<IntPtrT>{phi_bb116_10}, TorqueStructUnsafe_0{}}, &label207);
    ca_.Goto(&block170, phi_bb116_5, phi_bb116_6, phi_bb116_7, phi_bb116_8, phi_bb116_9, phi_bb116_10, phi_bb116_5, phi_bb116_6, phi_bb116_7, phi_bb116_8, phi_bb116_9, phi_bb116_10);
    if (label207.is_used()) {
      ca_.Bind(&label207);
      ca_.Goto(&block171, phi_bb116_5, phi_bb116_6, phi_bb116_7, phi_bb116_8, phi_bb116_9, phi_bb116_10, phi_bb116_5, phi_bb116_6, phi_bb116_7, phi_bb116_8, phi_bb116_9, phi_bb116_10);
    }
  }

  TNode<Object> phi_bb171_5;
  TNode<IntPtrT> phi_bb171_6;
  TNode<IntPtrT> phi_bb171_7;
  TNode<Object> phi_bb171_8;
  TNode<IntPtrT> phi_bb171_9;
  TNode<IntPtrT> phi_bb171_10;
  TNode<Object> phi_bb171_11;
  TNode<IntPtrT> phi_bb171_12;
  TNode<IntPtrT> phi_bb171_13;
  TNode<Object> phi_bb171_14;
  TNode<IntPtrT> phi_bb171_15;
  TNode<IntPtrT> phi_bb171_16;
  if (block171.is_used()) {
    ca_.Bind(&block171, &phi_bb171_5, &phi_bb171_6, &phi_bb171_7, &phi_bb171_8, &phi_bb171_9, &phi_bb171_10, &phi_bb171_11, &phi_bb171_12, &phi_bb171_13, &phi_bb171_14, &phi_bb171_15, &phi_bb171_16);
    ca_.Goto(&block2);
  }

  TNode<Object> phi_bb170_5;
  TNode<IntPtrT> phi_bb170_6;
  TNode<IntPtrT> phi_bb170_7;
  TNode<Object> phi_bb170_8;
  TNode<IntPtrT> phi_bb170_9;
  TNode<IntPtrT> phi_bb170_10;
  TNode<Object> phi_bb170_11;
  TNode<IntPtrT> phi_bb170_12;
  TNode<IntPtrT> phi_bb170_13;
  TNode<Object> phi_bb170_14;
  TNode<IntPtrT> phi_bb170_15;
  TNode<IntPtrT> phi_bb170_16;
  if (block170.is_used()) {
    ca_.Bind(&block170, &phi_bb170_5, &phi_bb170_6, &phi_bb170_7, &phi_bb170_8, &phi_bb170_9, &phi_bb170_10, &phi_bb170_11, &phi_bb170_12, &phi_bb170_13, &phi_bb170_14, &phi_bb170_15, &phi_bb170_16);
    CodeStubAssembler(state_).Return(tmp206);
  }

  TNode<Object> tmp208;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp208 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{parameter2}, TNode<Object>{parameter3}, TNode<Object>{parameter4});
    CodeStubAssembler(state_).Return(tmp208);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=18&c=7
TNode<Uint32T> Convert_uint32_char16_0(compiler::CodeAssemblerState* state_, TNode<Uint16T> p_i) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{p_i};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=114&c=14
TNode<Number> LocaleCompareFastPath_char8_char8_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_char8_ConstReference_char8_0 p_left, TorqueStructSlice_char8_ConstReference_char8_0 p_right, compiler::CodeAssemblerLabel* label_Bailout) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block65(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block66(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block72(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block71(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block81(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block82(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block88(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block87(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block105(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block106(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block107(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block108(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block109(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = EqualContent_char8_char8_0(state_, TorqueStructSlice_char8_ConstReference_char8_0{TNode<Object>{p_left.object}, TNode<IntPtrT>{p_left.offset}, TNode<IntPtrT>{p_left.length}, TorqueStructUnsafe_0{}}, TorqueStructSlice_char8_ConstReference_char8_0{TNode<Object>{p_right.object}, TNode<IntPtrT>{p_right.offset}, TNode<IntPtrT>{p_right.length}, TorqueStructUnsafe_0{}});
    ca_.Branch(tmp0, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  TNode<Number> tmp1;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp1 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block2, tmp1);
  }

  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = TimesSizeOf_char8_0(state_, TNode<IntPtrT>{p_left.length});
    tmp3 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_left.offset}, TNode<IntPtrT>{tmp2});
    tmp4 = TimesSizeOf_char8_0(state_, TNode<IntPtrT>{p_right.length});
    tmp5 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_right.offset}, TNode<IntPtrT>{tmp4});
    ca_.Goto(&block9, p_left.offset, p_right.offset);
  }

  TNode<IntPtrT> phi_bb9_7;
  TNode<IntPtrT> phi_bb9_10;
  TNode<BoolT> tmp6;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_7, &phi_bb9_10);
    tmp6 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp6, &block7, std::vector<compiler::Node*>{phi_bb9_7, phi_bb9_10}, &block8, std::vector<compiler::Node*>{phi_bb9_7, phi_bb9_10});
  }

  TNode<IntPtrT> phi_bb7_7;
  TNode<IntPtrT> phi_bb7_10;
  TNode<BoolT> tmp7;
  if (block7.is_used()) {
    ca_.Bind(&block7, &phi_bb7_7, &phi_bb7_10);
    tmp7 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb7_7}, TNode<IntPtrT>{tmp3});
    ca_.Branch(tmp7, &block16, std::vector<compiler::Node*>{phi_bb7_7, phi_bb7_10}, &block17, std::vector<compiler::Node*>{phi_bb7_7, phi_bb7_10});
  }

  TNode<IntPtrT> phi_bb16_7;
  TNode<IntPtrT> phi_bb16_10;
  TNode<BoolT> tmp8;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_7, &phi_bb16_10);
    tmp8 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb16_10}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp8, &block48, std::vector<compiler::Node*>{phi_bb16_7, phi_bb16_10}, &block49, std::vector<compiler::Node*>{phi_bb16_7, phi_bb16_10});
  }

  TNode<IntPtrT> phi_bb17_7;
  TNode<IntPtrT> phi_bb17_10;
  TNode<Object> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<Uint8T> tmp13;
  TNode<Uint8T> tmp14;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_7, &phi_bb17_10);
    std::tie(tmp9, tmp10) = NewReference_char8_0(state_, TNode<Object>{p_left.object}, TNode<IntPtrT>{phi_bb17_7}).Flatten();
    tmp11 = FromConstexpr_intptr_constexpr_int31_0(state_, kUInt8Size);
    tmp12 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb17_7}, TNode<IntPtrT>{tmp11});
    tmp13 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{tmp9, tmp10});
    compiler::CodeAssemblerLabel label15(&ca_);
    tmp14 = IntlAsciiCollationWeightL1_0(state_, TNode<Uint8T>{tmp13}, &label15);
    ca_.Goto(&block20, phi_bb17_10);
    if (label15.is_used()) {
      ca_.Bind(&label15);
      ca_.Goto(&block21, phi_bb17_10);
    }
  }

  TNode<IntPtrT> phi_bb21_10;
  if (block21.is_used()) {
    ca_.Bind(&block21, &phi_bb21_10);
    ca_.Goto(&block1);
  }

  TNode<IntPtrT> phi_bb20_10;
  TNode<Uint32T> tmp16;
  TNode<BoolT> tmp17;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_10);
    tmp16 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp17 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp14}, TNode<Uint32T>{tmp16});
    ca_.Branch(tmp17, &block22, std::vector<compiler::Node*>{phi_bb20_10}, &block23, std::vector<compiler::Node*>{phi_bb20_10});
  }

  TNode<IntPtrT> phi_bb22_10;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_10);
    ca_.Goto(&block1);
  }

  TNode<IntPtrT> phi_bb23_10;
  TNode<BoolT> tmp18;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_10);
    tmp18 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb23_10}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp18, &block28, std::vector<compiler::Node*>{phi_bb23_10}, &block29, std::vector<compiler::Node*>{phi_bb23_10});
  }

  TNode<IntPtrT> phi_bb28_10;
  TNode<Number> tmp19;
  if (block28.is_used()) {
    ca_.Bind(&block28, &phi_bb28_10);
    tmp19 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    ca_.Goto(&block2, tmp19);
  }

  TNode<IntPtrT> phi_bb29_10;
  TNode<Object> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<IntPtrT> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<Uint8T> tmp24;
  TNode<Uint8T> tmp25;
  if (block29.is_used()) {
    ca_.Bind(&block29, &phi_bb29_10);
    std::tie(tmp20, tmp21) = NewReference_char8_0(state_, TNode<Object>{p_right.object}, TNode<IntPtrT>{phi_bb29_10}).Flatten();
    tmp22 = FromConstexpr_intptr_constexpr_int31_0(state_, kUInt8Size);
    tmp23 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb29_10}, TNode<IntPtrT>{tmp22});
    tmp24 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{tmp20, tmp21});
    compiler::CodeAssemblerLabel label26(&ca_);
    tmp25 = IntlAsciiCollationWeightL1_0(state_, TNode<Uint8T>{tmp24}, &label26);
    ca_.Goto(&block32);
    if (label26.is_used()) {
      ca_.Bind(&label26);
      ca_.Goto(&block33);
    }
  }

  if (block33.is_used()) {
    ca_.Bind(&block33);
    ca_.Goto(&block1);
  }

  TNode<Uint32T> tmp27;
  TNode<BoolT> tmp28;
  if (block32.is_used()) {
    ca_.Bind(&block32);
    tmp27 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp28 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp25}, TNode<Uint32T>{tmp27});
    ca_.Branch(tmp28, &block34, std::vector<compiler::Node*>{}, &block35, std::vector<compiler::Node*>{});
  }

  if (block34.is_used()) {
    ca_.Bind(&block34);
    ca_.Goto(&block1);
  }

  TNode<BoolT> tmp29;
  if (block35.is_used()) {
    ca_.Bind(&block35);
    tmp29 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp14}, TNode<Uint32T>{tmp25});
    ca_.Branch(tmp29, &block36, std::vector<compiler::Node*>{}, &block37, std::vector<compiler::Node*>{});
  }

  if (block36.is_used()) {
    ca_.Bind(&block36);
    ca_.Goto(&block9, tmp12, tmp23);
  }

  if (block37.is_used()) {
    ca_.Bind(&block37);
    compiler::CodeAssemblerLabel label30(&ca_);
    CheckEmptyOr1Byte_0(state_, TorqueStructSliceIterator_char8_ConstReference_char8_0{TNode<Object>{p_left.object}, TNode<IntPtrT>{tmp12}, TNode<IntPtrT>{tmp3}, TorqueStructUnsafe_0{}}, &label30);
    ca_.Goto(&block38);
    if (label30.is_used()) {
      ca_.Bind(&label30);
      ca_.Goto(&block39);
    }
  }

  if (block39.is_used()) {
    ca_.Bind(&block39);
    ca_.Goto(&block1);
  }

  if (block38.is_used()) {
    ca_.Bind(&block38);
    compiler::CodeAssemblerLabel label31(&ca_);
    CheckEmptyOr1Byte_0(state_, TorqueStructSliceIterator_char8_ConstReference_char8_0{TNode<Object>{p_right.object}, TNode<IntPtrT>{tmp23}, TNode<IntPtrT>{tmp5}, TorqueStructUnsafe_0{}}, &label31);
    ca_.Goto(&block40);
    if (label31.is_used()) {
      ca_.Bind(&label31);
      ca_.Goto(&block41);
    }
  }

  if (block41.is_used()) {
    ca_.Bind(&block41);
    ca_.Goto(&block1);
  }

  TNode<BoolT> tmp32;
  if (block40.is_used()) {
    ca_.Bind(&block40);
    tmp32 = CodeStubAssembler(state_).Uint32LessThan(TNode<Uint32T>{tmp14}, TNode<Uint32T>{tmp25});
    ca_.Branch(tmp32, &block42, std::vector<compiler::Node*>{}, &block43, std::vector<compiler::Node*>{});
  }

  TNode<Number> tmp33;
  if (block42.is_used()) {
    ca_.Bind(&block42);
    tmp33 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    ca_.Goto(&block2, tmp33);
  }

  TNode<Number> tmp34;
  if (block43.is_used()) {
    ca_.Bind(&block43);
    tmp34 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    ca_.Goto(&block2, tmp34);
  }

  TNode<IntPtrT> phi_bb48_7;
  TNode<IntPtrT> phi_bb48_10;
  if (block48.is_used()) {
    ca_.Bind(&block48, &phi_bb48_7, &phi_bb48_10);
    ca_.Goto(&block8, phi_bb48_7, phi_bb48_10);
  }

  TNode<IntPtrT> phi_bb49_7;
  TNode<IntPtrT> phi_bb49_10;
  TNode<Object> tmp35;
  TNode<IntPtrT> tmp36;
  TNode<IntPtrT> tmp37;
  TNode<IntPtrT> tmp38;
  TNode<Uint8T> tmp39;
  TNode<Uint8T> tmp40;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_7, &phi_bb49_10);
    std::tie(tmp35, tmp36) = NewReference_char8_0(state_, TNode<Object>{p_right.object}, TNode<IntPtrT>{phi_bb49_10}).Flatten();
    tmp37 = FromConstexpr_intptr_constexpr_int31_0(state_, kUInt8Size);
    tmp38 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb49_10}, TNode<IntPtrT>{tmp37});
    tmp39 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{tmp35, tmp36});
    compiler::CodeAssemblerLabel label41(&ca_);
    tmp40 = IntlAsciiCollationWeightL1_0(state_, TNode<Uint8T>{tmp39}, &label41);
    ca_.Goto(&block52, phi_bb49_7);
    if (label41.is_used()) {
      ca_.Bind(&label41);
      ca_.Goto(&block53, phi_bb49_7);
    }
  }

  TNode<IntPtrT> phi_bb53_7;
  if (block53.is_used()) {
    ca_.Bind(&block53, &phi_bb53_7);
    ca_.Goto(&block1);
  }

  TNode<IntPtrT> phi_bb52_7;
  TNode<Uint32T> tmp42;
  TNode<BoolT> tmp43;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_7);
    tmp42 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp43 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp40}, TNode<Uint32T>{tmp42});
    ca_.Branch(tmp43, &block54, std::vector<compiler::Node*>{phi_bb52_7}, &block55, std::vector<compiler::Node*>{phi_bb52_7});
  }

  TNode<IntPtrT> phi_bb54_7;
  if (block54.is_used()) {
    ca_.Bind(&block54, &phi_bb54_7);
    ca_.Goto(&block1);
  }

  TNode<IntPtrT> phi_bb55_7;
  TNode<Number> tmp44;
  if (block55.is_used()) {
    ca_.Bind(&block55, &phi_bb55_7);
    tmp44 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    ca_.Goto(&block2, tmp44);
  }

  TNode<IntPtrT> phi_bb8_7;
  TNode<IntPtrT> phi_bb8_10;
  TNode<IntPtrT> tmp45;
  TNode<IntPtrT> tmp46;
  TNode<IntPtrT> tmp47;
  TNode<IntPtrT> tmp48;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_7, &phi_bb8_10);
    tmp45 = TimesSizeOf_char8_0(state_, TNode<IntPtrT>{p_left.length});
    tmp46 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_left.offset}, TNode<IntPtrT>{tmp45});
    tmp47 = TimesSizeOf_char8_0(state_, TNode<IntPtrT>{p_right.length});
    tmp48 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_right.offset}, TNode<IntPtrT>{tmp47});
    ca_.Goto(&block60, p_left.offset, p_right.offset);
  }

  TNode<IntPtrT> phi_bb60_7;
  TNode<IntPtrT> phi_bb60_10;
  TNode<BoolT> tmp49;
  if (block60.is_used()) {
    ca_.Bind(&block60, &phi_bb60_7, &phi_bb60_10);
    tmp49 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp49, &block58, std::vector<compiler::Node*>{phi_bb60_7, phi_bb60_10}, &block59, std::vector<compiler::Node*>{phi_bb60_7, phi_bb60_10});
  }

  TNode<IntPtrT> phi_bb58_7;
  TNode<IntPtrT> phi_bb58_10;
  TNode<BoolT> tmp50;
  if (block58.is_used()) {
    ca_.Bind(&block58, &phi_bb58_7, &phi_bb58_10);
    tmp50 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb58_7}, TNode<IntPtrT>{tmp46});
    ca_.Branch(tmp50, &block65, std::vector<compiler::Node*>{phi_bb58_7, phi_bb58_10}, &block66, std::vector<compiler::Node*>{phi_bb58_7, phi_bb58_10});
  }

  TNode<IntPtrT> phi_bb65_7;
  TNode<IntPtrT> phi_bb65_10;
  if (block65.is_used()) {
    ca_.Bind(&block65, &phi_bb65_7, &phi_bb65_10);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb66_7;
  TNode<IntPtrT> phi_bb66_10;
  TNode<Object> tmp51;
  TNode<IntPtrT> tmp52;
  TNode<IntPtrT> tmp53;
  TNode<IntPtrT> tmp54;
  TNode<Uint8T> tmp55;
  TNode<Uint8T> tmp56;
  if (block66.is_used()) {
    ca_.Bind(&block66, &phi_bb66_7, &phi_bb66_10);
    std::tie(tmp51, tmp52) = NewReference_char8_0(state_, TNode<Object>{p_left.object}, TNode<IntPtrT>{phi_bb66_7}).Flatten();
    tmp53 = FromConstexpr_intptr_constexpr_int31_0(state_, kUInt8Size);
    tmp54 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb66_7}, TNode<IntPtrT>{tmp53});
    tmp55 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{tmp51, tmp52});
    compiler::CodeAssemblerLabel label57(&ca_);
    tmp56 = IntlAsciiCollationWeightL3_0(state_, TNode<Uint8T>{tmp55}, &label57);
    ca_.Goto(&block71, phi_bb66_10);
    if (label57.is_used()) {
      ca_.Bind(&label57);
      ca_.Goto(&block72, phi_bb66_10);
    }
  }

  TNode<IntPtrT> phi_bb72_10;
  if (block72.is_used()) {
    ca_.Bind(&block72, &phi_bb72_10);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb71_10;
  TNode<BoolT> tmp58;
  if (block71.is_used()) {
    ca_.Bind(&block71, &phi_bb71_10);
    tmp58 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb71_10}, TNode<IntPtrT>{tmp48});
    ca_.Branch(tmp58, &block81, std::vector<compiler::Node*>{phi_bb71_10}, &block82, std::vector<compiler::Node*>{phi_bb71_10});
  }

  TNode<IntPtrT> phi_bb81_10;
  if (block81.is_used()) {
    ca_.Bind(&block81, &phi_bb81_10);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb82_10;
  TNode<Object> tmp59;
  TNode<IntPtrT> tmp60;
  TNode<IntPtrT> tmp61;
  TNode<IntPtrT> tmp62;
  TNode<Uint8T> tmp63;
  TNode<Uint8T> tmp64;
  if (block82.is_used()) {
    ca_.Bind(&block82, &phi_bb82_10);
    std::tie(tmp59, tmp60) = NewReference_char8_0(state_, TNode<Object>{p_right.object}, TNode<IntPtrT>{phi_bb82_10}).Flatten();
    tmp61 = FromConstexpr_intptr_constexpr_int31_0(state_, kUInt8Size);
    tmp62 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb82_10}, TNode<IntPtrT>{tmp61});
    tmp63 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{tmp59, tmp60});
    compiler::CodeAssemblerLabel label65(&ca_);
    tmp64 = IntlAsciiCollationWeightL3_0(state_, TNode<Uint8T>{tmp63}, &label65);
    ca_.Goto(&block87);
    if (label65.is_used()) {
      ca_.Bind(&label65);
      ca_.Goto(&block88);
    }
  }

  if (block88.is_used()) {
    ca_.Bind(&block88);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<BoolT> tmp66;
  if (block87.is_used()) {
    ca_.Bind(&block87);
    tmp66 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp56}, TNode<Uint32T>{tmp64});
    ca_.Branch(tmp66, &block105, std::vector<compiler::Node*>{}, &block106, std::vector<compiler::Node*>{});
  }

  if (block105.is_used()) {
    ca_.Bind(&block105);
    ca_.Goto(&block60, tmp54, tmp62);
  }

  TNode<BoolT> tmp67;
  if (block106.is_used()) {
    ca_.Bind(&block106);
    tmp67 = CodeStubAssembler(state_).Uint32LessThan(TNode<Uint32T>{tmp56}, TNode<Uint32T>{tmp64});
    ca_.Branch(tmp67, &block107, std::vector<compiler::Node*>{}, &block108, std::vector<compiler::Node*>{});
  }

  TNode<Number> tmp68;
  if (block107.is_used()) {
    ca_.Bind(&block107);
    tmp68 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    ca_.Goto(&block2, tmp68);
  }

  TNode<Number> tmp69;
  if (block108.is_used()) {
    ca_.Bind(&block108);
    tmp69 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    ca_.Goto(&block2, tmp69);
  }

  TNode<IntPtrT> phi_bb59_7;
  TNode<IntPtrT> phi_bb59_10;
  if (block59.is_used()) {
    ca_.Bind(&block59, &phi_bb59_7, &phi_bb59_10);
    VerifiedUnreachable_0(state_);
  }

  TNode<Number> phi_bb2_6;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_6);
    ca_.Goto(&block109, phi_bb2_6);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Bailout);
  }

  TNode<Number> phi_bb109_6;
    ca_.Bind(&block109, &phi_bb109_6);
  return TNode<Number>{phi_bb109_6};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=116&c=14
TNode<Number> LocaleCompareFastPath_char8_char16_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_char8_ConstReference_char8_0 p_left, TorqueStructSlice_char16_ConstReference_char16_0 p_right, compiler::CodeAssemblerLabel* label_Bailout) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block65(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block66(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block72(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block71(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block81(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block82(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block88(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block87(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block105(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block106(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block107(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block108(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block109(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = EqualContent_char8_char16_0(state_, TorqueStructSlice_char8_ConstReference_char8_0{TNode<Object>{p_left.object}, TNode<IntPtrT>{p_left.offset}, TNode<IntPtrT>{p_left.length}, TorqueStructUnsafe_0{}}, TorqueStructSlice_char16_ConstReference_char16_0{TNode<Object>{p_right.object}, TNode<IntPtrT>{p_right.offset}, TNode<IntPtrT>{p_right.length}, TorqueStructUnsafe_0{}});
    ca_.Branch(tmp0, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  TNode<Number> tmp1;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp1 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block2, tmp1);
  }

  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = TimesSizeOf_char8_0(state_, TNode<IntPtrT>{p_left.length});
    tmp3 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_left.offset}, TNode<IntPtrT>{tmp2});
    tmp4 = TimesSizeOf_char16_0(state_, TNode<IntPtrT>{p_right.length});
    tmp5 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_right.offset}, TNode<IntPtrT>{tmp4});
    ca_.Goto(&block9, p_left.offset, p_right.offset);
  }

  TNode<IntPtrT> phi_bb9_7;
  TNode<IntPtrT> phi_bb9_10;
  TNode<BoolT> tmp6;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_7, &phi_bb9_10);
    tmp6 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp6, &block7, std::vector<compiler::Node*>{phi_bb9_7, phi_bb9_10}, &block8, std::vector<compiler::Node*>{phi_bb9_7, phi_bb9_10});
  }

  TNode<IntPtrT> phi_bb7_7;
  TNode<IntPtrT> phi_bb7_10;
  TNode<BoolT> tmp7;
  if (block7.is_used()) {
    ca_.Bind(&block7, &phi_bb7_7, &phi_bb7_10);
    tmp7 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb7_7}, TNode<IntPtrT>{tmp3});
    ca_.Branch(tmp7, &block16, std::vector<compiler::Node*>{phi_bb7_7, phi_bb7_10}, &block17, std::vector<compiler::Node*>{phi_bb7_7, phi_bb7_10});
  }

  TNode<IntPtrT> phi_bb16_7;
  TNode<IntPtrT> phi_bb16_10;
  TNode<BoolT> tmp8;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_7, &phi_bb16_10);
    tmp8 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb16_10}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp8, &block48, std::vector<compiler::Node*>{phi_bb16_7, phi_bb16_10}, &block49, std::vector<compiler::Node*>{phi_bb16_7, phi_bb16_10});
  }

  TNode<IntPtrT> phi_bb17_7;
  TNode<IntPtrT> phi_bb17_10;
  TNode<Object> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<Uint8T> tmp13;
  TNode<Uint8T> tmp14;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_7, &phi_bb17_10);
    std::tie(tmp9, tmp10) = NewReference_char8_0(state_, TNode<Object>{p_left.object}, TNode<IntPtrT>{phi_bb17_7}).Flatten();
    tmp11 = FromConstexpr_intptr_constexpr_int31_0(state_, kUInt8Size);
    tmp12 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb17_7}, TNode<IntPtrT>{tmp11});
    tmp13 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{tmp9, tmp10});
    compiler::CodeAssemblerLabel label15(&ca_);
    tmp14 = IntlAsciiCollationWeightL1_0(state_, TNode<Uint8T>{tmp13}, &label15);
    ca_.Goto(&block20, phi_bb17_10);
    if (label15.is_used()) {
      ca_.Bind(&label15);
      ca_.Goto(&block21, phi_bb17_10);
    }
  }

  TNode<IntPtrT> phi_bb21_10;
  if (block21.is_used()) {
    ca_.Bind(&block21, &phi_bb21_10);
    ca_.Goto(&block1);
  }

  TNode<IntPtrT> phi_bb20_10;
  TNode<Uint32T> tmp16;
  TNode<BoolT> tmp17;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_10);
    tmp16 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp17 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp14}, TNode<Uint32T>{tmp16});
    ca_.Branch(tmp17, &block22, std::vector<compiler::Node*>{phi_bb20_10}, &block23, std::vector<compiler::Node*>{phi_bb20_10});
  }

  TNode<IntPtrT> phi_bb22_10;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_10);
    ca_.Goto(&block1);
  }

  TNode<IntPtrT> phi_bb23_10;
  TNode<BoolT> tmp18;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_10);
    tmp18 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb23_10}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp18, &block28, std::vector<compiler::Node*>{phi_bb23_10}, &block29, std::vector<compiler::Node*>{phi_bb23_10});
  }

  TNode<IntPtrT> phi_bb28_10;
  TNode<Number> tmp19;
  if (block28.is_used()) {
    ca_.Bind(&block28, &phi_bb28_10);
    tmp19 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    ca_.Goto(&block2, tmp19);
  }

  TNode<IntPtrT> phi_bb29_10;
  TNode<Object> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<IntPtrT> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<Uint16T> tmp24;
  TNode<Uint8T> tmp25;
  if (block29.is_used()) {
    ca_.Bind(&block29, &phi_bb29_10);
    std::tie(tmp20, tmp21) = NewReference_char16_0(state_, TNode<Object>{p_right.object}, TNode<IntPtrT>{phi_bb29_10}).Flatten();
    tmp22 = FromConstexpr_intptr_constexpr_int31_0(state_, kUInt16Size);
    tmp23 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb29_10}, TNode<IntPtrT>{tmp22});
    tmp24 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp20, tmp21});
    compiler::CodeAssemblerLabel label26(&ca_);
    tmp25 = IntlAsciiCollationWeightL1_1(state_, TNode<Uint16T>{tmp24}, &label26);
    ca_.Goto(&block32);
    if (label26.is_used()) {
      ca_.Bind(&label26);
      ca_.Goto(&block33);
    }
  }

  if (block33.is_used()) {
    ca_.Bind(&block33);
    ca_.Goto(&block1);
  }

  TNode<Uint32T> tmp27;
  TNode<BoolT> tmp28;
  if (block32.is_used()) {
    ca_.Bind(&block32);
    tmp27 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp28 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp25}, TNode<Uint32T>{tmp27});
    ca_.Branch(tmp28, &block34, std::vector<compiler::Node*>{}, &block35, std::vector<compiler::Node*>{});
  }

  if (block34.is_used()) {
    ca_.Bind(&block34);
    ca_.Goto(&block1);
  }

  TNode<BoolT> tmp29;
  if (block35.is_used()) {
    ca_.Bind(&block35);
    tmp29 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp14}, TNode<Uint32T>{tmp25});
    ca_.Branch(tmp29, &block36, std::vector<compiler::Node*>{}, &block37, std::vector<compiler::Node*>{});
  }

  if (block36.is_used()) {
    ca_.Bind(&block36);
    ca_.Goto(&block9, tmp12, tmp23);
  }

  if (block37.is_used()) {
    ca_.Bind(&block37);
    compiler::CodeAssemblerLabel label30(&ca_);
    CheckEmptyOr1Byte_0(state_, TorqueStructSliceIterator_char8_ConstReference_char8_0{TNode<Object>{p_left.object}, TNode<IntPtrT>{tmp12}, TNode<IntPtrT>{tmp3}, TorqueStructUnsafe_0{}}, &label30);
    ca_.Goto(&block38);
    if (label30.is_used()) {
      ca_.Bind(&label30);
      ca_.Goto(&block39);
    }
  }

  if (block39.is_used()) {
    ca_.Bind(&block39);
    ca_.Goto(&block1);
  }

  if (block38.is_used()) {
    ca_.Bind(&block38);
    compiler::CodeAssemblerLabel label31(&ca_);
    CheckEmptyOr1Byte_1(state_, TorqueStructSliceIterator_char16_ConstReference_char16_0{TNode<Object>{p_right.object}, TNode<IntPtrT>{tmp23}, TNode<IntPtrT>{tmp5}, TorqueStructUnsafe_0{}}, &label31);
    ca_.Goto(&block40);
    if (label31.is_used()) {
      ca_.Bind(&label31);
      ca_.Goto(&block41);
    }
  }

  if (block41.is_used()) {
    ca_.Bind(&block41);
    ca_.Goto(&block1);
  }

  TNode<BoolT> tmp32;
  if (block40.is_used()) {
    ca_.Bind(&block40);
    tmp32 = CodeStubAssembler(state_).Uint32LessThan(TNode<Uint32T>{tmp14}, TNode<Uint32T>{tmp25});
    ca_.Branch(tmp32, &block42, std::vector<compiler::Node*>{}, &block43, std::vector<compiler::Node*>{});
  }

  TNode<Number> tmp33;
  if (block42.is_used()) {
    ca_.Bind(&block42);
    tmp33 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    ca_.Goto(&block2, tmp33);
  }

  TNode<Number> tmp34;
  if (block43.is_used()) {
    ca_.Bind(&block43);
    tmp34 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    ca_.Goto(&block2, tmp34);
  }

  TNode<IntPtrT> phi_bb48_7;
  TNode<IntPtrT> phi_bb48_10;
  if (block48.is_used()) {
    ca_.Bind(&block48, &phi_bb48_7, &phi_bb48_10);
    ca_.Goto(&block8, phi_bb48_7, phi_bb48_10);
  }

  TNode<IntPtrT> phi_bb49_7;
  TNode<IntPtrT> phi_bb49_10;
  TNode<Object> tmp35;
  TNode<IntPtrT> tmp36;
  TNode<IntPtrT> tmp37;
  TNode<IntPtrT> tmp38;
  TNode<Uint16T> tmp39;
  TNode<Uint8T> tmp40;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_7, &phi_bb49_10);
    std::tie(tmp35, tmp36) = NewReference_char16_0(state_, TNode<Object>{p_right.object}, TNode<IntPtrT>{phi_bb49_10}).Flatten();
    tmp37 = FromConstexpr_intptr_constexpr_int31_0(state_, kUInt16Size);
    tmp38 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb49_10}, TNode<IntPtrT>{tmp37});
    tmp39 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp35, tmp36});
    compiler::CodeAssemblerLabel label41(&ca_);
    tmp40 = IntlAsciiCollationWeightL1_1(state_, TNode<Uint16T>{tmp39}, &label41);
    ca_.Goto(&block52, phi_bb49_7);
    if (label41.is_used()) {
      ca_.Bind(&label41);
      ca_.Goto(&block53, phi_bb49_7);
    }
  }

  TNode<IntPtrT> phi_bb53_7;
  if (block53.is_used()) {
    ca_.Bind(&block53, &phi_bb53_7);
    ca_.Goto(&block1);
  }

  TNode<IntPtrT> phi_bb52_7;
  TNode<Uint32T> tmp42;
  TNode<BoolT> tmp43;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_7);
    tmp42 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp43 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp40}, TNode<Uint32T>{tmp42});
    ca_.Branch(tmp43, &block54, std::vector<compiler::Node*>{phi_bb52_7}, &block55, std::vector<compiler::Node*>{phi_bb52_7});
  }

  TNode<IntPtrT> phi_bb54_7;
  if (block54.is_used()) {
    ca_.Bind(&block54, &phi_bb54_7);
    ca_.Goto(&block1);
  }

  TNode<IntPtrT> phi_bb55_7;
  TNode<Number> tmp44;
  if (block55.is_used()) {
    ca_.Bind(&block55, &phi_bb55_7);
    tmp44 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    ca_.Goto(&block2, tmp44);
  }

  TNode<IntPtrT> phi_bb8_7;
  TNode<IntPtrT> phi_bb8_10;
  TNode<IntPtrT> tmp45;
  TNode<IntPtrT> tmp46;
  TNode<IntPtrT> tmp47;
  TNode<IntPtrT> tmp48;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_7, &phi_bb8_10);
    tmp45 = TimesSizeOf_char8_0(state_, TNode<IntPtrT>{p_left.length});
    tmp46 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_left.offset}, TNode<IntPtrT>{tmp45});
    tmp47 = TimesSizeOf_char16_0(state_, TNode<IntPtrT>{p_right.length});
    tmp48 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_right.offset}, TNode<IntPtrT>{tmp47});
    ca_.Goto(&block60, p_left.offset, p_right.offset);
  }

  TNode<IntPtrT> phi_bb60_7;
  TNode<IntPtrT> phi_bb60_10;
  TNode<BoolT> tmp49;
  if (block60.is_used()) {
    ca_.Bind(&block60, &phi_bb60_7, &phi_bb60_10);
    tmp49 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp49, &block58, std::vector<compiler::Node*>{phi_bb60_7, phi_bb60_10}, &block59, std::vector<compiler::Node*>{phi_bb60_7, phi_bb60_10});
  }

  TNode<IntPtrT> phi_bb58_7;
  TNode<IntPtrT> phi_bb58_10;
  TNode<BoolT> tmp50;
  if (block58.is_used()) {
    ca_.Bind(&block58, &phi_bb58_7, &phi_bb58_10);
    tmp50 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb58_7}, TNode<IntPtrT>{tmp46});
    ca_.Branch(tmp50, &block65, std::vector<compiler::Node*>{phi_bb58_7, phi_bb58_10}, &block66, std::vector<compiler::Node*>{phi_bb58_7, phi_bb58_10});
  }

  TNode<IntPtrT> phi_bb65_7;
  TNode<IntPtrT> phi_bb65_10;
  if (block65.is_used()) {
    ca_.Bind(&block65, &phi_bb65_7, &phi_bb65_10);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb66_7;
  TNode<IntPtrT> phi_bb66_10;
  TNode<Object> tmp51;
  TNode<IntPtrT> tmp52;
  TNode<IntPtrT> tmp53;
  TNode<IntPtrT> tmp54;
  TNode<Uint8T> tmp55;
  TNode<Uint8T> tmp56;
  if (block66.is_used()) {
    ca_.Bind(&block66, &phi_bb66_7, &phi_bb66_10);
    std::tie(tmp51, tmp52) = NewReference_char8_0(state_, TNode<Object>{p_left.object}, TNode<IntPtrT>{phi_bb66_7}).Flatten();
    tmp53 = FromConstexpr_intptr_constexpr_int31_0(state_, kUInt8Size);
    tmp54 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb66_7}, TNode<IntPtrT>{tmp53});
    tmp55 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{tmp51, tmp52});
    compiler::CodeAssemblerLabel label57(&ca_);
    tmp56 = IntlAsciiCollationWeightL3_0(state_, TNode<Uint8T>{tmp55}, &label57);
    ca_.Goto(&block71, phi_bb66_10);
    if (label57.is_used()) {
      ca_.Bind(&label57);
      ca_.Goto(&block72, phi_bb66_10);
    }
  }

  TNode<IntPtrT> phi_bb72_10;
  if (block72.is_used()) {
    ca_.Bind(&block72, &phi_bb72_10);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb71_10;
  TNode<BoolT> tmp58;
  if (block71.is_used()) {
    ca_.Bind(&block71, &phi_bb71_10);
    tmp58 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb71_10}, TNode<IntPtrT>{tmp48});
    ca_.Branch(tmp58, &block81, std::vector<compiler::Node*>{phi_bb71_10}, &block82, std::vector<compiler::Node*>{phi_bb71_10});
  }

  TNode<IntPtrT> phi_bb81_10;
  if (block81.is_used()) {
    ca_.Bind(&block81, &phi_bb81_10);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb82_10;
  TNode<Object> tmp59;
  TNode<IntPtrT> tmp60;
  TNode<IntPtrT> tmp61;
  TNode<IntPtrT> tmp62;
  TNode<Uint16T> tmp63;
  TNode<Uint8T> tmp64;
  if (block82.is_used()) {
    ca_.Bind(&block82, &phi_bb82_10);
    std::tie(tmp59, tmp60) = NewReference_char16_0(state_, TNode<Object>{p_right.object}, TNode<IntPtrT>{phi_bb82_10}).Flatten();
    tmp61 = FromConstexpr_intptr_constexpr_int31_0(state_, kUInt16Size);
    tmp62 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb82_10}, TNode<IntPtrT>{tmp61});
    tmp63 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp59, tmp60});
    compiler::CodeAssemblerLabel label65(&ca_);
    tmp64 = IntlAsciiCollationWeightL3_1(state_, TNode<Uint16T>{tmp63}, &label65);
    ca_.Goto(&block87);
    if (label65.is_used()) {
      ca_.Bind(&label65);
      ca_.Goto(&block88);
    }
  }

  if (block88.is_used()) {
    ca_.Bind(&block88);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<BoolT> tmp66;
  if (block87.is_used()) {
    ca_.Bind(&block87);
    tmp66 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp56}, TNode<Uint32T>{tmp64});
    ca_.Branch(tmp66, &block105, std::vector<compiler::Node*>{}, &block106, std::vector<compiler::Node*>{});
  }

  if (block105.is_used()) {
    ca_.Bind(&block105);
    ca_.Goto(&block60, tmp54, tmp62);
  }

  TNode<BoolT> tmp67;
  if (block106.is_used()) {
    ca_.Bind(&block106);
    tmp67 = CodeStubAssembler(state_).Uint32LessThan(TNode<Uint32T>{tmp56}, TNode<Uint32T>{tmp64});
    ca_.Branch(tmp67, &block107, std::vector<compiler::Node*>{}, &block108, std::vector<compiler::Node*>{});
  }

  TNode<Number> tmp68;
  if (block107.is_used()) {
    ca_.Bind(&block107);
    tmp68 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    ca_.Goto(&block2, tmp68);
  }

  TNode<Number> tmp69;
  if (block108.is_used()) {
    ca_.Bind(&block108);
    tmp69 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    ca_.Goto(&block2, tmp69);
  }

  TNode<IntPtrT> phi_bb59_7;
  TNode<IntPtrT> phi_bb59_10;
  if (block59.is_used()) {
    ca_.Bind(&block59, &phi_bb59_7, &phi_bb59_10);
    VerifiedUnreachable_0(state_);
  }

  TNode<Number> phi_bb2_6;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_6);
    ca_.Goto(&block109, phi_bb2_6);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Bailout);
  }

  TNode<Number> phi_bb109_6;
    ca_.Bind(&block109, &phi_bb109_6);
  return TNode<Number>{phi_bb109_6};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=123&c=14
TNode<Number> LocaleCompareFastPath_char16_char8_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_char16_ConstReference_char16_0 p_left, TorqueStructSlice_char8_ConstReference_char8_0 p_right, compiler::CodeAssemblerLabel* label_Bailout) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block65(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block66(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block72(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block71(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block81(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block82(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block88(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block87(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block105(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block106(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block107(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block108(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block109(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = EqualContent_char16_char8_0(state_, TorqueStructSlice_char16_ConstReference_char16_0{TNode<Object>{p_left.object}, TNode<IntPtrT>{p_left.offset}, TNode<IntPtrT>{p_left.length}, TorqueStructUnsafe_0{}}, TorqueStructSlice_char8_ConstReference_char8_0{TNode<Object>{p_right.object}, TNode<IntPtrT>{p_right.offset}, TNode<IntPtrT>{p_right.length}, TorqueStructUnsafe_0{}});
    ca_.Branch(tmp0, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  TNode<Number> tmp1;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp1 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block2, tmp1);
  }

  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = TimesSizeOf_char16_0(state_, TNode<IntPtrT>{p_left.length});
    tmp3 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_left.offset}, TNode<IntPtrT>{tmp2});
    tmp4 = TimesSizeOf_char8_0(state_, TNode<IntPtrT>{p_right.length});
    tmp5 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_right.offset}, TNode<IntPtrT>{tmp4});
    ca_.Goto(&block9, p_left.offset, p_right.offset);
  }

  TNode<IntPtrT> phi_bb9_7;
  TNode<IntPtrT> phi_bb9_10;
  TNode<BoolT> tmp6;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_7, &phi_bb9_10);
    tmp6 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp6, &block7, std::vector<compiler::Node*>{phi_bb9_7, phi_bb9_10}, &block8, std::vector<compiler::Node*>{phi_bb9_7, phi_bb9_10});
  }

  TNode<IntPtrT> phi_bb7_7;
  TNode<IntPtrT> phi_bb7_10;
  TNode<BoolT> tmp7;
  if (block7.is_used()) {
    ca_.Bind(&block7, &phi_bb7_7, &phi_bb7_10);
    tmp7 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb7_7}, TNode<IntPtrT>{tmp3});
    ca_.Branch(tmp7, &block16, std::vector<compiler::Node*>{phi_bb7_7, phi_bb7_10}, &block17, std::vector<compiler::Node*>{phi_bb7_7, phi_bb7_10});
  }

  TNode<IntPtrT> phi_bb16_7;
  TNode<IntPtrT> phi_bb16_10;
  TNode<BoolT> tmp8;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_7, &phi_bb16_10);
    tmp8 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb16_10}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp8, &block48, std::vector<compiler::Node*>{phi_bb16_7, phi_bb16_10}, &block49, std::vector<compiler::Node*>{phi_bb16_7, phi_bb16_10});
  }

  TNode<IntPtrT> phi_bb17_7;
  TNode<IntPtrT> phi_bb17_10;
  TNode<Object> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<Uint16T> tmp13;
  TNode<Uint8T> tmp14;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_7, &phi_bb17_10);
    std::tie(tmp9, tmp10) = NewReference_char16_0(state_, TNode<Object>{p_left.object}, TNode<IntPtrT>{phi_bb17_7}).Flatten();
    tmp11 = FromConstexpr_intptr_constexpr_int31_0(state_, kUInt16Size);
    tmp12 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb17_7}, TNode<IntPtrT>{tmp11});
    tmp13 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp9, tmp10});
    compiler::CodeAssemblerLabel label15(&ca_);
    tmp14 = IntlAsciiCollationWeightL1_1(state_, TNode<Uint16T>{tmp13}, &label15);
    ca_.Goto(&block20, phi_bb17_10);
    if (label15.is_used()) {
      ca_.Bind(&label15);
      ca_.Goto(&block21, phi_bb17_10);
    }
  }

  TNode<IntPtrT> phi_bb21_10;
  if (block21.is_used()) {
    ca_.Bind(&block21, &phi_bb21_10);
    ca_.Goto(&block1);
  }

  TNode<IntPtrT> phi_bb20_10;
  TNode<Uint32T> tmp16;
  TNode<BoolT> tmp17;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_10);
    tmp16 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp17 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp14}, TNode<Uint32T>{tmp16});
    ca_.Branch(tmp17, &block22, std::vector<compiler::Node*>{phi_bb20_10}, &block23, std::vector<compiler::Node*>{phi_bb20_10});
  }

  TNode<IntPtrT> phi_bb22_10;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_10);
    ca_.Goto(&block1);
  }

  TNode<IntPtrT> phi_bb23_10;
  TNode<BoolT> tmp18;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_10);
    tmp18 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb23_10}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp18, &block28, std::vector<compiler::Node*>{phi_bb23_10}, &block29, std::vector<compiler::Node*>{phi_bb23_10});
  }

  TNode<IntPtrT> phi_bb28_10;
  TNode<Number> tmp19;
  if (block28.is_used()) {
    ca_.Bind(&block28, &phi_bb28_10);
    tmp19 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    ca_.Goto(&block2, tmp19);
  }

  TNode<IntPtrT> phi_bb29_10;
  TNode<Object> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<IntPtrT> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<Uint8T> tmp24;
  TNode<Uint8T> tmp25;
  if (block29.is_used()) {
    ca_.Bind(&block29, &phi_bb29_10);
    std::tie(tmp20, tmp21) = NewReference_char8_0(state_, TNode<Object>{p_right.object}, TNode<IntPtrT>{phi_bb29_10}).Flatten();
    tmp22 = FromConstexpr_intptr_constexpr_int31_0(state_, kUInt8Size);
    tmp23 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb29_10}, TNode<IntPtrT>{tmp22});
    tmp24 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{tmp20, tmp21});
    compiler::CodeAssemblerLabel label26(&ca_);
    tmp25 = IntlAsciiCollationWeightL1_0(state_, TNode<Uint8T>{tmp24}, &label26);
    ca_.Goto(&block32);
    if (label26.is_used()) {
      ca_.Bind(&label26);
      ca_.Goto(&block33);
    }
  }

  if (block33.is_used()) {
    ca_.Bind(&block33);
    ca_.Goto(&block1);
  }

  TNode<Uint32T> tmp27;
  TNode<BoolT> tmp28;
  if (block32.is_used()) {
    ca_.Bind(&block32);
    tmp27 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp28 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp25}, TNode<Uint32T>{tmp27});
    ca_.Branch(tmp28, &block34, std::vector<compiler::Node*>{}, &block35, std::vector<compiler::Node*>{});
  }

  if (block34.is_used()) {
    ca_.Bind(&block34);
    ca_.Goto(&block1);
  }

  TNode<BoolT> tmp29;
  if (block35.is_used()) {
    ca_.Bind(&block35);
    tmp29 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp14}, TNode<Uint32T>{tmp25});
    ca_.Branch(tmp29, &block36, std::vector<compiler::Node*>{}, &block37, std::vector<compiler::Node*>{});
  }

  if (block36.is_used()) {
    ca_.Bind(&block36);
    ca_.Goto(&block9, tmp12, tmp23);
  }

  if (block37.is_used()) {
    ca_.Bind(&block37);
    compiler::CodeAssemblerLabel label30(&ca_);
    CheckEmptyOr1Byte_1(state_, TorqueStructSliceIterator_char16_ConstReference_char16_0{TNode<Object>{p_left.object}, TNode<IntPtrT>{tmp12}, TNode<IntPtrT>{tmp3}, TorqueStructUnsafe_0{}}, &label30);
    ca_.Goto(&block38);
    if (label30.is_used()) {
      ca_.Bind(&label30);
      ca_.Goto(&block39);
    }
  }

  if (block39.is_used()) {
    ca_.Bind(&block39);
    ca_.Goto(&block1);
  }

  if (block38.is_used()) {
    ca_.Bind(&block38);
    compiler::CodeAssemblerLabel label31(&ca_);
    CheckEmptyOr1Byte_0(state_, TorqueStructSliceIterator_char8_ConstReference_char8_0{TNode<Object>{p_right.object}, TNode<IntPtrT>{tmp23}, TNode<IntPtrT>{tmp5}, TorqueStructUnsafe_0{}}, &label31);
    ca_.Goto(&block40);
    if (label31.is_used()) {
      ca_.Bind(&label31);
      ca_.Goto(&block41);
    }
  }

  if (block41.is_used()) {
    ca_.Bind(&block41);
    ca_.Goto(&block1);
  }

  TNode<BoolT> tmp32;
  if (block40.is_used()) {
    ca_.Bind(&block40);
    tmp32 = CodeStubAssembler(state_).Uint32LessThan(TNode<Uint32T>{tmp14}, TNode<Uint32T>{tmp25});
    ca_.Branch(tmp32, &block42, std::vector<compiler::Node*>{}, &block43, std::vector<compiler::Node*>{});
  }

  TNode<Number> tmp33;
  if (block42.is_used()) {
    ca_.Bind(&block42);
    tmp33 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    ca_.Goto(&block2, tmp33);
  }

  TNode<Number> tmp34;
  if (block43.is_used()) {
    ca_.Bind(&block43);
    tmp34 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    ca_.Goto(&block2, tmp34);
  }

  TNode<IntPtrT> phi_bb48_7;
  TNode<IntPtrT> phi_bb48_10;
  if (block48.is_used()) {
    ca_.Bind(&block48, &phi_bb48_7, &phi_bb48_10);
    ca_.Goto(&block8, phi_bb48_7, phi_bb48_10);
  }

  TNode<IntPtrT> phi_bb49_7;
  TNode<IntPtrT> phi_bb49_10;
  TNode<Object> tmp35;
  TNode<IntPtrT> tmp36;
  TNode<IntPtrT> tmp37;
  TNode<IntPtrT> tmp38;
  TNode<Uint8T> tmp39;
  TNode<Uint8T> tmp40;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_7, &phi_bb49_10);
    std::tie(tmp35, tmp36) = NewReference_char8_0(state_, TNode<Object>{p_right.object}, TNode<IntPtrT>{phi_bb49_10}).Flatten();
    tmp37 = FromConstexpr_intptr_constexpr_int31_0(state_, kUInt8Size);
    tmp38 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb49_10}, TNode<IntPtrT>{tmp37});
    tmp39 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{tmp35, tmp36});
    compiler::CodeAssemblerLabel label41(&ca_);
    tmp40 = IntlAsciiCollationWeightL1_0(state_, TNode<Uint8T>{tmp39}, &label41);
    ca_.Goto(&block52, phi_bb49_7);
    if (label41.is_used()) {
      ca_.Bind(&label41);
      ca_.Goto(&block53, phi_bb49_7);
    }
  }

  TNode<IntPtrT> phi_bb53_7;
  if (block53.is_used()) {
    ca_.Bind(&block53, &phi_bb53_7);
    ca_.Goto(&block1);
  }

  TNode<IntPtrT> phi_bb52_7;
  TNode<Uint32T> tmp42;
  TNode<BoolT> tmp43;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_7);
    tmp42 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp43 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp40}, TNode<Uint32T>{tmp42});
    ca_.Branch(tmp43, &block54, std::vector<compiler::Node*>{phi_bb52_7}, &block55, std::vector<compiler::Node*>{phi_bb52_7});
  }

  TNode<IntPtrT> phi_bb54_7;
  if (block54.is_used()) {
    ca_.Bind(&block54, &phi_bb54_7);
    ca_.Goto(&block1);
  }

  TNode<IntPtrT> phi_bb55_7;
  TNode<Number> tmp44;
  if (block55.is_used()) {
    ca_.Bind(&block55, &phi_bb55_7);
    tmp44 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    ca_.Goto(&block2, tmp44);
  }

  TNode<IntPtrT> phi_bb8_7;
  TNode<IntPtrT> phi_bb8_10;
  TNode<IntPtrT> tmp45;
  TNode<IntPtrT> tmp46;
  TNode<IntPtrT> tmp47;
  TNode<IntPtrT> tmp48;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_7, &phi_bb8_10);
    tmp45 = TimesSizeOf_char16_0(state_, TNode<IntPtrT>{p_left.length});
    tmp46 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_left.offset}, TNode<IntPtrT>{tmp45});
    tmp47 = TimesSizeOf_char8_0(state_, TNode<IntPtrT>{p_right.length});
    tmp48 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_right.offset}, TNode<IntPtrT>{tmp47});
    ca_.Goto(&block60, p_left.offset, p_right.offset);
  }

  TNode<IntPtrT> phi_bb60_7;
  TNode<IntPtrT> phi_bb60_10;
  TNode<BoolT> tmp49;
  if (block60.is_used()) {
    ca_.Bind(&block60, &phi_bb60_7, &phi_bb60_10);
    tmp49 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp49, &block58, std::vector<compiler::Node*>{phi_bb60_7, phi_bb60_10}, &block59, std::vector<compiler::Node*>{phi_bb60_7, phi_bb60_10});
  }

  TNode<IntPtrT> phi_bb58_7;
  TNode<IntPtrT> phi_bb58_10;
  TNode<BoolT> tmp50;
  if (block58.is_used()) {
    ca_.Bind(&block58, &phi_bb58_7, &phi_bb58_10);
    tmp50 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb58_7}, TNode<IntPtrT>{tmp46});
    ca_.Branch(tmp50, &block65, std::vector<compiler::Node*>{phi_bb58_7, phi_bb58_10}, &block66, std::vector<compiler::Node*>{phi_bb58_7, phi_bb58_10});
  }

  TNode<IntPtrT> phi_bb65_7;
  TNode<IntPtrT> phi_bb65_10;
  if (block65.is_used()) {
    ca_.Bind(&block65, &phi_bb65_7, &phi_bb65_10);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb66_7;
  TNode<IntPtrT> phi_bb66_10;
  TNode<Object> tmp51;
  TNode<IntPtrT> tmp52;
  TNode<IntPtrT> tmp53;
  TNode<IntPtrT> tmp54;
  TNode<Uint16T> tmp55;
  TNode<Uint8T> tmp56;
  if (block66.is_used()) {
    ca_.Bind(&block66, &phi_bb66_7, &phi_bb66_10);
    std::tie(tmp51, tmp52) = NewReference_char16_0(state_, TNode<Object>{p_left.object}, TNode<IntPtrT>{phi_bb66_7}).Flatten();
    tmp53 = FromConstexpr_intptr_constexpr_int31_0(state_, kUInt16Size);
    tmp54 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb66_7}, TNode<IntPtrT>{tmp53});
    tmp55 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp51, tmp52});
    compiler::CodeAssemblerLabel label57(&ca_);
    tmp56 = IntlAsciiCollationWeightL3_1(state_, TNode<Uint16T>{tmp55}, &label57);
    ca_.Goto(&block71, phi_bb66_10);
    if (label57.is_used()) {
      ca_.Bind(&label57);
      ca_.Goto(&block72, phi_bb66_10);
    }
  }

  TNode<IntPtrT> phi_bb72_10;
  if (block72.is_used()) {
    ca_.Bind(&block72, &phi_bb72_10);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb71_10;
  TNode<BoolT> tmp58;
  if (block71.is_used()) {
    ca_.Bind(&block71, &phi_bb71_10);
    tmp58 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb71_10}, TNode<IntPtrT>{tmp48});
    ca_.Branch(tmp58, &block81, std::vector<compiler::Node*>{phi_bb71_10}, &block82, std::vector<compiler::Node*>{phi_bb71_10});
  }

  TNode<IntPtrT> phi_bb81_10;
  if (block81.is_used()) {
    ca_.Bind(&block81, &phi_bb81_10);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb82_10;
  TNode<Object> tmp59;
  TNode<IntPtrT> tmp60;
  TNode<IntPtrT> tmp61;
  TNode<IntPtrT> tmp62;
  TNode<Uint8T> tmp63;
  TNode<Uint8T> tmp64;
  if (block82.is_used()) {
    ca_.Bind(&block82, &phi_bb82_10);
    std::tie(tmp59, tmp60) = NewReference_char8_0(state_, TNode<Object>{p_right.object}, TNode<IntPtrT>{phi_bb82_10}).Flatten();
    tmp61 = FromConstexpr_intptr_constexpr_int31_0(state_, kUInt8Size);
    tmp62 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb82_10}, TNode<IntPtrT>{tmp61});
    tmp63 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{tmp59, tmp60});
    compiler::CodeAssemblerLabel label65(&ca_);
    tmp64 = IntlAsciiCollationWeightL3_0(state_, TNode<Uint8T>{tmp63}, &label65);
    ca_.Goto(&block87);
    if (label65.is_used()) {
      ca_.Bind(&label65);
      ca_.Goto(&block88);
    }
  }

  if (block88.is_used()) {
    ca_.Bind(&block88);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<BoolT> tmp66;
  if (block87.is_used()) {
    ca_.Bind(&block87);
    tmp66 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp56}, TNode<Uint32T>{tmp64});
    ca_.Branch(tmp66, &block105, std::vector<compiler::Node*>{}, &block106, std::vector<compiler::Node*>{});
  }

  if (block105.is_used()) {
    ca_.Bind(&block105);
    ca_.Goto(&block60, tmp54, tmp62);
  }

  TNode<BoolT> tmp67;
  if (block106.is_used()) {
    ca_.Bind(&block106);
    tmp67 = CodeStubAssembler(state_).Uint32LessThan(TNode<Uint32T>{tmp56}, TNode<Uint32T>{tmp64});
    ca_.Branch(tmp67, &block107, std::vector<compiler::Node*>{}, &block108, std::vector<compiler::Node*>{});
  }

  TNode<Number> tmp68;
  if (block107.is_used()) {
    ca_.Bind(&block107);
    tmp68 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    ca_.Goto(&block2, tmp68);
  }

  TNode<Number> tmp69;
  if (block108.is_used()) {
    ca_.Bind(&block108);
    tmp69 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    ca_.Goto(&block2, tmp69);
  }

  TNode<IntPtrT> phi_bb59_7;
  TNode<IntPtrT> phi_bb59_10;
  if (block59.is_used()) {
    ca_.Bind(&block59, &phi_bb59_7, &phi_bb59_10);
    VerifiedUnreachable_0(state_);
  }

  TNode<Number> phi_bb2_6;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_6);
    ca_.Goto(&block109, phi_bb2_6);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Bailout);
  }

  TNode<Number> phi_bb109_6;
    ca_.Bind(&block109, &phi_bb109_6);
  return TNode<Number>{phi_bb109_6};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=125&c=14
TNode<Number> LocaleCompareFastPath_char16_char16_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_char16_ConstReference_char16_0 p_left, TorqueStructSlice_char16_ConstReference_char16_0 p_right, compiler::CodeAssemblerLabel* label_Bailout) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block65(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block66(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block72(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block71(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block81(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block82(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block88(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block87(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block105(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block106(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block107(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block108(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block109(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = EqualContent_char16_char16_0(state_, TorqueStructSlice_char16_ConstReference_char16_0{TNode<Object>{p_left.object}, TNode<IntPtrT>{p_left.offset}, TNode<IntPtrT>{p_left.length}, TorqueStructUnsafe_0{}}, TorqueStructSlice_char16_ConstReference_char16_0{TNode<Object>{p_right.object}, TNode<IntPtrT>{p_right.offset}, TNode<IntPtrT>{p_right.length}, TorqueStructUnsafe_0{}});
    ca_.Branch(tmp0, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  TNode<Number> tmp1;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp1 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block2, tmp1);
  }

  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = TimesSizeOf_char16_0(state_, TNode<IntPtrT>{p_left.length});
    tmp3 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_left.offset}, TNode<IntPtrT>{tmp2});
    tmp4 = TimesSizeOf_char16_0(state_, TNode<IntPtrT>{p_right.length});
    tmp5 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_right.offset}, TNode<IntPtrT>{tmp4});
    ca_.Goto(&block9, p_left.offset, p_right.offset);
  }

  TNode<IntPtrT> phi_bb9_7;
  TNode<IntPtrT> phi_bb9_10;
  TNode<BoolT> tmp6;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_7, &phi_bb9_10);
    tmp6 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp6, &block7, std::vector<compiler::Node*>{phi_bb9_7, phi_bb9_10}, &block8, std::vector<compiler::Node*>{phi_bb9_7, phi_bb9_10});
  }

  TNode<IntPtrT> phi_bb7_7;
  TNode<IntPtrT> phi_bb7_10;
  TNode<BoolT> tmp7;
  if (block7.is_used()) {
    ca_.Bind(&block7, &phi_bb7_7, &phi_bb7_10);
    tmp7 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb7_7}, TNode<IntPtrT>{tmp3});
    ca_.Branch(tmp7, &block16, std::vector<compiler::Node*>{phi_bb7_7, phi_bb7_10}, &block17, std::vector<compiler::Node*>{phi_bb7_7, phi_bb7_10});
  }

  TNode<IntPtrT> phi_bb16_7;
  TNode<IntPtrT> phi_bb16_10;
  TNode<BoolT> tmp8;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_7, &phi_bb16_10);
    tmp8 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb16_10}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp8, &block48, std::vector<compiler::Node*>{phi_bb16_7, phi_bb16_10}, &block49, std::vector<compiler::Node*>{phi_bb16_7, phi_bb16_10});
  }

  TNode<IntPtrT> phi_bb17_7;
  TNode<IntPtrT> phi_bb17_10;
  TNode<Object> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<Uint16T> tmp13;
  TNode<Uint8T> tmp14;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_7, &phi_bb17_10);
    std::tie(tmp9, tmp10) = NewReference_char16_0(state_, TNode<Object>{p_left.object}, TNode<IntPtrT>{phi_bb17_7}).Flatten();
    tmp11 = FromConstexpr_intptr_constexpr_int31_0(state_, kUInt16Size);
    tmp12 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb17_7}, TNode<IntPtrT>{tmp11});
    tmp13 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp9, tmp10});
    compiler::CodeAssemblerLabel label15(&ca_);
    tmp14 = IntlAsciiCollationWeightL1_1(state_, TNode<Uint16T>{tmp13}, &label15);
    ca_.Goto(&block20, phi_bb17_10);
    if (label15.is_used()) {
      ca_.Bind(&label15);
      ca_.Goto(&block21, phi_bb17_10);
    }
  }

  TNode<IntPtrT> phi_bb21_10;
  if (block21.is_used()) {
    ca_.Bind(&block21, &phi_bb21_10);
    ca_.Goto(&block1);
  }

  TNode<IntPtrT> phi_bb20_10;
  TNode<Uint32T> tmp16;
  TNode<BoolT> tmp17;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_10);
    tmp16 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp17 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp14}, TNode<Uint32T>{tmp16});
    ca_.Branch(tmp17, &block22, std::vector<compiler::Node*>{phi_bb20_10}, &block23, std::vector<compiler::Node*>{phi_bb20_10});
  }

  TNode<IntPtrT> phi_bb22_10;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_10);
    ca_.Goto(&block1);
  }

  TNode<IntPtrT> phi_bb23_10;
  TNode<BoolT> tmp18;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_10);
    tmp18 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb23_10}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp18, &block28, std::vector<compiler::Node*>{phi_bb23_10}, &block29, std::vector<compiler::Node*>{phi_bb23_10});
  }

  TNode<IntPtrT> phi_bb28_10;
  TNode<Number> tmp19;
  if (block28.is_used()) {
    ca_.Bind(&block28, &phi_bb28_10);
    tmp19 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    ca_.Goto(&block2, tmp19);
  }

  TNode<IntPtrT> phi_bb29_10;
  TNode<Object> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<IntPtrT> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<Uint16T> tmp24;
  TNode<Uint8T> tmp25;
  if (block29.is_used()) {
    ca_.Bind(&block29, &phi_bb29_10);
    std::tie(tmp20, tmp21) = NewReference_char16_0(state_, TNode<Object>{p_right.object}, TNode<IntPtrT>{phi_bb29_10}).Flatten();
    tmp22 = FromConstexpr_intptr_constexpr_int31_0(state_, kUInt16Size);
    tmp23 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb29_10}, TNode<IntPtrT>{tmp22});
    tmp24 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp20, tmp21});
    compiler::CodeAssemblerLabel label26(&ca_);
    tmp25 = IntlAsciiCollationWeightL1_1(state_, TNode<Uint16T>{tmp24}, &label26);
    ca_.Goto(&block32);
    if (label26.is_used()) {
      ca_.Bind(&label26);
      ca_.Goto(&block33);
    }
  }

  if (block33.is_used()) {
    ca_.Bind(&block33);
    ca_.Goto(&block1);
  }

  TNode<Uint32T> tmp27;
  TNode<BoolT> tmp28;
  if (block32.is_used()) {
    ca_.Bind(&block32);
    tmp27 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp28 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp25}, TNode<Uint32T>{tmp27});
    ca_.Branch(tmp28, &block34, std::vector<compiler::Node*>{}, &block35, std::vector<compiler::Node*>{});
  }

  if (block34.is_used()) {
    ca_.Bind(&block34);
    ca_.Goto(&block1);
  }

  TNode<BoolT> tmp29;
  if (block35.is_used()) {
    ca_.Bind(&block35);
    tmp29 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp14}, TNode<Uint32T>{tmp25});
    ca_.Branch(tmp29, &block36, std::vector<compiler::Node*>{}, &block37, std::vector<compiler::Node*>{});
  }

  if (block36.is_used()) {
    ca_.Bind(&block36);
    ca_.Goto(&block9, tmp12, tmp23);
  }

  if (block37.is_used()) {
    ca_.Bind(&block37);
    compiler::CodeAssemblerLabel label30(&ca_);
    CheckEmptyOr1Byte_1(state_, TorqueStructSliceIterator_char16_ConstReference_char16_0{TNode<Object>{p_left.object}, TNode<IntPtrT>{tmp12}, TNode<IntPtrT>{tmp3}, TorqueStructUnsafe_0{}}, &label30);
    ca_.Goto(&block38);
    if (label30.is_used()) {
      ca_.Bind(&label30);
      ca_.Goto(&block39);
    }
  }

  if (block39.is_used()) {
    ca_.Bind(&block39);
    ca_.Goto(&block1);
  }

  if (block38.is_used()) {
    ca_.Bind(&block38);
    compiler::CodeAssemblerLabel label31(&ca_);
    CheckEmptyOr1Byte_1(state_, TorqueStructSliceIterator_char16_ConstReference_char16_0{TNode<Object>{p_right.object}, TNode<IntPtrT>{tmp23}, TNode<IntPtrT>{tmp5}, TorqueStructUnsafe_0{}}, &label31);
    ca_.Goto(&block40);
    if (label31.is_used()) {
      ca_.Bind(&label31);
      ca_.Goto(&block41);
    }
  }

  if (block41.is_used()) {
    ca_.Bind(&block41);
    ca_.Goto(&block1);
  }

  TNode<BoolT> tmp32;
  if (block40.is_used()) {
    ca_.Bind(&block40);
    tmp32 = CodeStubAssembler(state_).Uint32LessThan(TNode<Uint32T>{tmp14}, TNode<Uint32T>{tmp25});
    ca_.Branch(tmp32, &block42, std::vector<compiler::Node*>{}, &block43, std::vector<compiler::Node*>{});
  }

  TNode<Number> tmp33;
  if (block42.is_used()) {
    ca_.Bind(&block42);
    tmp33 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    ca_.Goto(&block2, tmp33);
  }

  TNode<Number> tmp34;
  if (block43.is_used()) {
    ca_.Bind(&block43);
    tmp34 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    ca_.Goto(&block2, tmp34);
  }

  TNode<IntPtrT> phi_bb48_7;
  TNode<IntPtrT> phi_bb48_10;
  if (block48.is_used()) {
    ca_.Bind(&block48, &phi_bb48_7, &phi_bb48_10);
    ca_.Goto(&block8, phi_bb48_7, phi_bb48_10);
  }

  TNode<IntPtrT> phi_bb49_7;
  TNode<IntPtrT> phi_bb49_10;
  TNode<Object> tmp35;
  TNode<IntPtrT> tmp36;
  TNode<IntPtrT> tmp37;
  TNode<IntPtrT> tmp38;
  TNode<Uint16T> tmp39;
  TNode<Uint8T> tmp40;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_7, &phi_bb49_10);
    std::tie(tmp35, tmp36) = NewReference_char16_0(state_, TNode<Object>{p_right.object}, TNode<IntPtrT>{phi_bb49_10}).Flatten();
    tmp37 = FromConstexpr_intptr_constexpr_int31_0(state_, kUInt16Size);
    tmp38 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb49_10}, TNode<IntPtrT>{tmp37});
    tmp39 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp35, tmp36});
    compiler::CodeAssemblerLabel label41(&ca_);
    tmp40 = IntlAsciiCollationWeightL1_1(state_, TNode<Uint16T>{tmp39}, &label41);
    ca_.Goto(&block52, phi_bb49_7);
    if (label41.is_used()) {
      ca_.Bind(&label41);
      ca_.Goto(&block53, phi_bb49_7);
    }
  }

  TNode<IntPtrT> phi_bb53_7;
  if (block53.is_used()) {
    ca_.Bind(&block53, &phi_bb53_7);
    ca_.Goto(&block1);
  }

  TNode<IntPtrT> phi_bb52_7;
  TNode<Uint32T> tmp42;
  TNode<BoolT> tmp43;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_7);
    tmp42 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp43 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp40}, TNode<Uint32T>{tmp42});
    ca_.Branch(tmp43, &block54, std::vector<compiler::Node*>{phi_bb52_7}, &block55, std::vector<compiler::Node*>{phi_bb52_7});
  }

  TNode<IntPtrT> phi_bb54_7;
  if (block54.is_used()) {
    ca_.Bind(&block54, &phi_bb54_7);
    ca_.Goto(&block1);
  }

  TNode<IntPtrT> phi_bb55_7;
  TNode<Number> tmp44;
  if (block55.is_used()) {
    ca_.Bind(&block55, &phi_bb55_7);
    tmp44 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    ca_.Goto(&block2, tmp44);
  }

  TNode<IntPtrT> phi_bb8_7;
  TNode<IntPtrT> phi_bb8_10;
  TNode<IntPtrT> tmp45;
  TNode<IntPtrT> tmp46;
  TNode<IntPtrT> tmp47;
  TNode<IntPtrT> tmp48;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_7, &phi_bb8_10);
    tmp45 = TimesSizeOf_char16_0(state_, TNode<IntPtrT>{p_left.length});
    tmp46 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_left.offset}, TNode<IntPtrT>{tmp45});
    tmp47 = TimesSizeOf_char16_0(state_, TNode<IntPtrT>{p_right.length});
    tmp48 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_right.offset}, TNode<IntPtrT>{tmp47});
    ca_.Goto(&block60, p_left.offset, p_right.offset);
  }

  TNode<IntPtrT> phi_bb60_7;
  TNode<IntPtrT> phi_bb60_10;
  TNode<BoolT> tmp49;
  if (block60.is_used()) {
    ca_.Bind(&block60, &phi_bb60_7, &phi_bb60_10);
    tmp49 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp49, &block58, std::vector<compiler::Node*>{phi_bb60_7, phi_bb60_10}, &block59, std::vector<compiler::Node*>{phi_bb60_7, phi_bb60_10});
  }

  TNode<IntPtrT> phi_bb58_7;
  TNode<IntPtrT> phi_bb58_10;
  TNode<BoolT> tmp50;
  if (block58.is_used()) {
    ca_.Bind(&block58, &phi_bb58_7, &phi_bb58_10);
    tmp50 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb58_7}, TNode<IntPtrT>{tmp46});
    ca_.Branch(tmp50, &block65, std::vector<compiler::Node*>{phi_bb58_7, phi_bb58_10}, &block66, std::vector<compiler::Node*>{phi_bb58_7, phi_bb58_10});
  }

  TNode<IntPtrT> phi_bb65_7;
  TNode<IntPtrT> phi_bb65_10;
  if (block65.is_used()) {
    ca_.Bind(&block65, &phi_bb65_7, &phi_bb65_10);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb66_7;
  TNode<IntPtrT> phi_bb66_10;
  TNode<Object> tmp51;
  TNode<IntPtrT> tmp52;
  TNode<IntPtrT> tmp53;
  TNode<IntPtrT> tmp54;
  TNode<Uint16T> tmp55;
  TNode<Uint8T> tmp56;
  if (block66.is_used()) {
    ca_.Bind(&block66, &phi_bb66_7, &phi_bb66_10);
    std::tie(tmp51, tmp52) = NewReference_char16_0(state_, TNode<Object>{p_left.object}, TNode<IntPtrT>{phi_bb66_7}).Flatten();
    tmp53 = FromConstexpr_intptr_constexpr_int31_0(state_, kUInt16Size);
    tmp54 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb66_7}, TNode<IntPtrT>{tmp53});
    tmp55 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp51, tmp52});
    compiler::CodeAssemblerLabel label57(&ca_);
    tmp56 = IntlAsciiCollationWeightL3_1(state_, TNode<Uint16T>{tmp55}, &label57);
    ca_.Goto(&block71, phi_bb66_10);
    if (label57.is_used()) {
      ca_.Bind(&label57);
      ca_.Goto(&block72, phi_bb66_10);
    }
  }

  TNode<IntPtrT> phi_bb72_10;
  if (block72.is_used()) {
    ca_.Bind(&block72, &phi_bb72_10);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb71_10;
  TNode<BoolT> tmp58;
  if (block71.is_used()) {
    ca_.Bind(&block71, &phi_bb71_10);
    tmp58 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb71_10}, TNode<IntPtrT>{tmp48});
    ca_.Branch(tmp58, &block81, std::vector<compiler::Node*>{phi_bb71_10}, &block82, std::vector<compiler::Node*>{phi_bb71_10});
  }

  TNode<IntPtrT> phi_bb81_10;
  if (block81.is_used()) {
    ca_.Bind(&block81, &phi_bb81_10);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb82_10;
  TNode<Object> tmp59;
  TNode<IntPtrT> tmp60;
  TNode<IntPtrT> tmp61;
  TNode<IntPtrT> tmp62;
  TNode<Uint16T> tmp63;
  TNode<Uint8T> tmp64;
  if (block82.is_used()) {
    ca_.Bind(&block82, &phi_bb82_10);
    std::tie(tmp59, tmp60) = NewReference_char16_0(state_, TNode<Object>{p_right.object}, TNode<IntPtrT>{phi_bb82_10}).Flatten();
    tmp61 = FromConstexpr_intptr_constexpr_int31_0(state_, kUInt16Size);
    tmp62 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb82_10}, TNode<IntPtrT>{tmp61});
    tmp63 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp59, tmp60});
    compiler::CodeAssemblerLabel label65(&ca_);
    tmp64 = IntlAsciiCollationWeightL3_1(state_, TNode<Uint16T>{tmp63}, &label65);
    ca_.Goto(&block87);
    if (label65.is_used()) {
      ca_.Bind(&label65);
      ca_.Goto(&block88);
    }
  }

  if (block88.is_used()) {
    ca_.Bind(&block88);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<BoolT> tmp66;
  if (block87.is_used()) {
    ca_.Bind(&block87);
    tmp66 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp56}, TNode<Uint32T>{tmp64});
    ca_.Branch(tmp66, &block105, std::vector<compiler::Node*>{}, &block106, std::vector<compiler::Node*>{});
  }

  if (block105.is_used()) {
    ca_.Bind(&block105);
    ca_.Goto(&block60, tmp54, tmp62);
  }

  TNode<BoolT> tmp67;
  if (block106.is_used()) {
    ca_.Bind(&block106);
    tmp67 = CodeStubAssembler(state_).Uint32LessThan(TNode<Uint32T>{tmp56}, TNode<Uint32T>{tmp64});
    ca_.Branch(tmp67, &block107, std::vector<compiler::Node*>{}, &block108, std::vector<compiler::Node*>{});
  }

  TNode<Number> tmp68;
  if (block107.is_used()) {
    ca_.Bind(&block107);
    tmp68 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    ca_.Goto(&block2, tmp68);
  }

  TNode<Number> tmp69;
  if (block108.is_used()) {
    ca_.Bind(&block108);
    tmp69 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    ca_.Goto(&block2, tmp69);
  }

  TNode<IntPtrT> phi_bb59_7;
  TNode<IntPtrT> phi_bb59_10;
  if (block59.is_used()) {
    ca_.Bind(&block59, &phi_bb59_7, &phi_bb59_10);
    VerifiedUnreachable_0(state_);
  }

  TNode<Number> phi_bb2_6;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_6);
    ca_.Goto(&block109, phi_bb2_6);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Bailout);
  }

  TNode<Number> phi_bb109_6;
    ca_.Bind(&block109, &phi_bb109_6);
  return TNode<Number>{phi_bb109_6};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=50&c=7
TNode<BoolT> EqualContent_char8_char8_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_char8_ConstReference_char8_0 p_a, TorqueStructSlice_char8_ConstReference_char8_0 p_b) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, BoolT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{p_a.length}, TNode<IntPtrT>{p_b.length});
    ca_.Branch(tmp0, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp1;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp1 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block1, tmp1);
  }

  TNode<RawPtrT> tmp2;
  TNode<RawPtrT> tmp3;
  TNode<RawPtrT> tmp4;
  TNode<RawPtrT> tmp5;
  TNode<BoolT> tmp6;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp2 = CodeStubAssembler(state_).GCUnsafeReferenceToRawPtr(TNode<Object>{p_a.object}, TNode<IntPtrT>{p_a.offset});
    tmp3 = (TNode<RawPtrT>{tmp2});
    tmp4 = CodeStubAssembler(state_).GCUnsafeReferenceToRawPtr(TNode<Object>{p_b.object}, TNode<IntPtrT>{p_b.offset});
    tmp5 = (TNode<RawPtrT>{tmp4});
    tmp6 = CodeStubAssembler(state_).WordEqual(TNode<RawPtrT>{tmp3}, TNode<RawPtrT>{tmp5});
    ca_.Branch(tmp6, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp7;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp7 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block1, tmp7);
  }

  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<Object> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<Object> tmp16;
  TNode<IntPtrT> tmp17;
  TNode<IntPtrT> tmp18;
  TNode<IntPtrT> tmp19;
  TNode<IntPtrT> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<Object> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<IntPtrT> tmp24;
  TNode<IntPtrT> tmp25;
  TNode<IntPtrT> tmp26;
  TNode<IntPtrT> tmp27;
  TNode<Object> tmp28;
  TNode<IntPtrT> tmp29;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp8 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp9 = TimesSizeOf_char8_0(state_, TNode<IntPtrT>{tmp8});
    tmp10 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_a.offset}, TNode<IntPtrT>{tmp9});
    std::tie(tmp11, tmp12) = NewReference_char8_0(state_, TNode<Object>{p_a.object}, TNode<IntPtrT>{tmp10}).Flatten();
    tmp13 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp14 = TimesSizeOf_char8_0(state_, TNode<IntPtrT>{tmp13});
    tmp15 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_b.offset}, TNode<IntPtrT>{tmp14});
    std::tie(tmp16, tmp17) = NewReference_char8_0(state_, TNode<Object>{p_b.object}, TNode<IntPtrT>{tmp15}).Flatten();
    tmp18 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp19 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{p_a.length}, TNode<IntPtrT>{tmp18});
    tmp20 = TimesSizeOf_char8_0(state_, TNode<IntPtrT>{tmp19});
    tmp21 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_a.offset}, TNode<IntPtrT>{tmp20});
    std::tie(tmp22, tmp23) = NewReference_char8_0(state_, TNode<Object>{p_a.object}, TNode<IntPtrT>{tmp21}).Flatten();
    tmp24 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp25 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{p_a.length}, TNode<IntPtrT>{tmp24});
    tmp26 = TimesSizeOf_char8_0(state_, TNode<IntPtrT>{tmp25});
    tmp27 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_b.offset}, TNode<IntPtrT>{tmp26});
    std::tie(tmp28, tmp29) = NewReference_char8_0(state_, TNode<Object>{p_b.object}, TNode<IntPtrT>{tmp27}).Flatten();
    ca_.Goto(&block14, tmp11, tmp12, tmp16, tmp17, tmp22, tmp23, tmp28, tmp29);
  }

  TNode<Object> phi_bb14_7;
  TNode<IntPtrT> phi_bb14_8;
  TNode<Object> phi_bb14_9;
  TNode<IntPtrT> phi_bb14_10;
  TNode<Object> phi_bb14_11;
  TNode<IntPtrT> phi_bb14_12;
  TNode<Object> phi_bb14_13;
  TNode<IntPtrT> phi_bb14_14;
  TNode<BoolT> tmp30;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_7, &phi_bb14_8, &phi_bb14_9, &phi_bb14_10, &phi_bb14_11, &phi_bb14_12, &phi_bb14_13, &phi_bb14_14);
    tmp30 = CodeStubAssembler(state_).IntPtrLessThanOrEqual(TNode<IntPtrT>{phi_bb14_8}, TNode<IntPtrT>{phi_bb14_12});
    ca_.Branch(tmp30, &block12, std::vector<compiler::Node*>{phi_bb14_7, phi_bb14_8, phi_bb14_9, phi_bb14_10, phi_bb14_11, phi_bb14_12, phi_bb14_13, phi_bb14_14}, &block13, std::vector<compiler::Node*>{phi_bb14_7, phi_bb14_8, phi_bb14_9, phi_bb14_10, phi_bb14_11, phi_bb14_12, phi_bb14_13, phi_bb14_14});
  }

  TNode<Object> phi_bb12_7;
  TNode<IntPtrT> phi_bb12_8;
  TNode<Object> phi_bb12_9;
  TNode<IntPtrT> phi_bb12_10;
  TNode<Object> phi_bb12_11;
  TNode<IntPtrT> phi_bb12_12;
  TNode<Object> phi_bb12_13;
  TNode<IntPtrT> phi_bb12_14;
  TNode<Uint8T> tmp31;
  TNode<Uint8T> tmp32;
  TNode<BoolT> tmp33;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_7, &phi_bb12_8, &phi_bb12_9, &phi_bb12_10, &phi_bb12_11, &phi_bb12_12, &phi_bb12_13, &phi_bb12_14);
    tmp31 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{phi_bb12_7, phi_bb12_8});
    tmp32 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{phi_bb12_9, phi_bb12_10});
    tmp33 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{tmp31}, TNode<Uint32T>{tmp32});
    ca_.Branch(tmp33, &block17, std::vector<compiler::Node*>{phi_bb12_7, phi_bb12_8, phi_bb12_9, phi_bb12_10, phi_bb12_11, phi_bb12_12, phi_bb12_13, phi_bb12_14}, &block18, std::vector<compiler::Node*>{phi_bb12_7, phi_bb12_8, phi_bb12_9, phi_bb12_10, phi_bb12_11, phi_bb12_12, phi_bb12_13, phi_bb12_14});
  }

  TNode<Object> phi_bb17_7;
  TNode<IntPtrT> phi_bb17_8;
  TNode<Object> phi_bb17_9;
  TNode<IntPtrT> phi_bb17_10;
  TNode<Object> phi_bb17_11;
  TNode<IntPtrT> phi_bb17_12;
  TNode<Object> phi_bb17_13;
  TNode<IntPtrT> phi_bb17_14;
  TNode<BoolT> tmp34;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_7, &phi_bb17_8, &phi_bb17_9, &phi_bb17_10, &phi_bb17_11, &phi_bb17_12, &phi_bb17_13, &phi_bb17_14);
    tmp34 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block19, phi_bb17_7, phi_bb17_8, phi_bb17_9, phi_bb17_10, phi_bb17_11, phi_bb17_12, phi_bb17_13, phi_bb17_14, tmp34);
  }

  TNode<Object> phi_bb18_7;
  TNode<IntPtrT> phi_bb18_8;
  TNode<Object> phi_bb18_9;
  TNode<IntPtrT> phi_bb18_10;
  TNode<Object> phi_bb18_11;
  TNode<IntPtrT> phi_bb18_12;
  TNode<Object> phi_bb18_13;
  TNode<IntPtrT> phi_bb18_14;
  TNode<Uint8T> tmp35;
  TNode<Uint8T> tmp36;
  TNode<BoolT> tmp37;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_7, &phi_bb18_8, &phi_bb18_9, &phi_bb18_10, &phi_bb18_11, &phi_bb18_12, &phi_bb18_13, &phi_bb18_14);
    tmp35 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{phi_bb18_11, phi_bb18_12});
    tmp36 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{phi_bb18_13, phi_bb18_14});
    tmp37 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{tmp35}, TNode<Uint32T>{tmp36});
    ca_.Goto(&block19, phi_bb18_7, phi_bb18_8, phi_bb18_9, phi_bb18_10, phi_bb18_11, phi_bb18_12, phi_bb18_13, phi_bb18_14, tmp37);
  }

  TNode<Object> phi_bb19_7;
  TNode<IntPtrT> phi_bb19_8;
  TNode<Object> phi_bb19_9;
  TNode<IntPtrT> phi_bb19_10;
  TNode<Object> phi_bb19_11;
  TNode<IntPtrT> phi_bb19_12;
  TNode<Object> phi_bb19_13;
  TNode<IntPtrT> phi_bb19_14;
  TNode<BoolT> phi_bb19_16;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_7, &phi_bb19_8, &phi_bb19_9, &phi_bb19_10, &phi_bb19_11, &phi_bb19_12, &phi_bb19_13, &phi_bb19_14, &phi_bb19_16);
    ca_.Branch(phi_bb19_16, &block15, std::vector<compiler::Node*>{phi_bb19_7, phi_bb19_8, phi_bb19_9, phi_bb19_10, phi_bb19_11, phi_bb19_12, phi_bb19_13, phi_bb19_14}, &block16, std::vector<compiler::Node*>{phi_bb19_7, phi_bb19_8, phi_bb19_9, phi_bb19_10, phi_bb19_11, phi_bb19_12, phi_bb19_13, phi_bb19_14});
  }

  TNode<Object> phi_bb15_7;
  TNode<IntPtrT> phi_bb15_8;
  TNode<Object> phi_bb15_9;
  TNode<IntPtrT> phi_bb15_10;
  TNode<Object> phi_bb15_11;
  TNode<IntPtrT> phi_bb15_12;
  TNode<Object> phi_bb15_13;
  TNode<IntPtrT> phi_bb15_14;
  TNode<BoolT> tmp38;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_7, &phi_bb15_8, &phi_bb15_9, &phi_bb15_10, &phi_bb15_11, &phi_bb15_12, &phi_bb15_13, &phi_bb15_14);
    tmp38 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block1, tmp38);
  }

  TNode<Object> phi_bb16_7;
  TNode<IntPtrT> phi_bb16_8;
  TNode<Object> phi_bb16_9;
  TNode<IntPtrT> phi_bb16_10;
  TNode<Object> phi_bb16_11;
  TNode<IntPtrT> phi_bb16_12;
  TNode<Object> phi_bb16_13;
  TNode<IntPtrT> phi_bb16_14;
  TNode<IntPtrT> tmp39;
  TNode<Object> tmp40;
  TNode<IntPtrT> tmp41;
  TNode<IntPtrT> tmp42;
  TNode<Object> tmp43;
  TNode<IntPtrT> tmp44;
  TNode<IntPtrT> tmp45;
  TNode<Object> tmp46;
  TNode<IntPtrT> tmp47;
  TNode<IntPtrT> tmp48;
  TNode<Object> tmp49;
  TNode<IntPtrT> tmp50;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_7, &phi_bb16_8, &phi_bb16_9, &phi_bb16_10, &phi_bb16_11, &phi_bb16_12, &phi_bb16_13, &phi_bb16_14);
    tmp39 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    std::tie(tmp40, tmp41) = AddOffset_char8_0(state_, TorqueStructReference_char8_0{TNode<Object>{phi_bb16_7}, TNode<IntPtrT>{phi_bb16_8}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{tmp39}).Flatten();
    tmp42 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    std::tie(tmp43, tmp44) = AddOffset_char8_0(state_, TorqueStructReference_char8_0{TNode<Object>{phi_bb16_11}, TNode<IntPtrT>{phi_bb16_12}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{tmp42}).Flatten();
    tmp45 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    std::tie(tmp46, tmp47) = AddOffset_char8_0(state_, TorqueStructReference_char8_0{TNode<Object>{phi_bb16_9}, TNode<IntPtrT>{phi_bb16_10}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{tmp45}).Flatten();
    tmp48 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    std::tie(tmp49, tmp50) = AddOffset_char8_0(state_, TorqueStructReference_char8_0{TNode<Object>{phi_bb16_13}, TNode<IntPtrT>{phi_bb16_14}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{tmp48}).Flatten();
    ca_.Goto(&block14, tmp40, tmp41, tmp46, tmp47, tmp43, tmp44, tmp49, tmp50);
  }

  TNode<Object> phi_bb13_7;
  TNode<IntPtrT> phi_bb13_8;
  TNode<Object> phi_bb13_9;
  TNode<IntPtrT> phi_bb13_10;
  TNode<Object> phi_bb13_11;
  TNode<IntPtrT> phi_bb13_12;
  TNode<Object> phi_bb13_13;
  TNode<IntPtrT> phi_bb13_14;
  TNode<BoolT> tmp51;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_7, &phi_bb13_8, &phi_bb13_9, &phi_bb13_10, &phi_bb13_11, &phi_bb13_12, &phi_bb13_13, &phi_bb13_14);
    tmp51 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block1, tmp51);
  }

  TNode<BoolT> phi_bb1_6;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_6);
    ca_.Goto(&block20, phi_bb1_6);
  }

  TNode<BoolT> phi_bb20_6;
    ca_.Bind(&block20, &phi_bb20_6);
  return TNode<BoolT>{phi_bb20_6};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=50&c=7
TNode<BoolT> EqualContent_char8_char16_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_char8_ConstReference_char8_0 p_a, TorqueStructSlice_char16_ConstReference_char16_0 p_b) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, BoolT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{p_a.length}, TNode<IntPtrT>{p_b.length});
    ca_.Branch(tmp0, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp1;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp1 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block1, tmp1);
  }

  TNode<RawPtrT> tmp2;
  TNode<RawPtrT> tmp3;
  TNode<RawPtrT> tmp4;
  TNode<RawPtrT> tmp5;
  TNode<BoolT> tmp6;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp2 = CodeStubAssembler(state_).GCUnsafeReferenceToRawPtr(TNode<Object>{p_a.object}, TNode<IntPtrT>{p_a.offset});
    tmp3 = (TNode<RawPtrT>{tmp2});
    tmp4 = CodeStubAssembler(state_).GCUnsafeReferenceToRawPtr(TNode<Object>{p_b.object}, TNode<IntPtrT>{p_b.offset});
    tmp5 = (TNode<RawPtrT>{tmp4});
    tmp6 = CodeStubAssembler(state_).WordEqual(TNode<RawPtrT>{tmp3}, TNode<RawPtrT>{tmp5});
    ca_.Branch(tmp6, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp7;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp7 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block1, tmp7);
  }

  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<Object> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<Object> tmp16;
  TNode<IntPtrT> tmp17;
  TNode<IntPtrT> tmp18;
  TNode<IntPtrT> tmp19;
  TNode<IntPtrT> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<Object> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<IntPtrT> tmp24;
  TNode<IntPtrT> tmp25;
  TNode<IntPtrT> tmp26;
  TNode<IntPtrT> tmp27;
  TNode<Object> tmp28;
  TNode<IntPtrT> tmp29;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp8 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp9 = TimesSizeOf_char8_0(state_, TNode<IntPtrT>{tmp8});
    tmp10 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_a.offset}, TNode<IntPtrT>{tmp9});
    std::tie(tmp11, tmp12) = NewReference_char8_0(state_, TNode<Object>{p_a.object}, TNode<IntPtrT>{tmp10}).Flatten();
    tmp13 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp14 = TimesSizeOf_char16_0(state_, TNode<IntPtrT>{tmp13});
    tmp15 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_b.offset}, TNode<IntPtrT>{tmp14});
    std::tie(tmp16, tmp17) = NewReference_char16_0(state_, TNode<Object>{p_b.object}, TNode<IntPtrT>{tmp15}).Flatten();
    tmp18 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp19 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{p_a.length}, TNode<IntPtrT>{tmp18});
    tmp20 = TimesSizeOf_char8_0(state_, TNode<IntPtrT>{tmp19});
    tmp21 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_a.offset}, TNode<IntPtrT>{tmp20});
    std::tie(tmp22, tmp23) = NewReference_char8_0(state_, TNode<Object>{p_a.object}, TNode<IntPtrT>{tmp21}).Flatten();
    tmp24 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp25 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{p_a.length}, TNode<IntPtrT>{tmp24});
    tmp26 = TimesSizeOf_char16_0(state_, TNode<IntPtrT>{tmp25});
    tmp27 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_b.offset}, TNode<IntPtrT>{tmp26});
    std::tie(tmp28, tmp29) = NewReference_char16_0(state_, TNode<Object>{p_b.object}, TNode<IntPtrT>{tmp27}).Flatten();
    ca_.Goto(&block14, tmp11, tmp12, tmp16, tmp17, tmp22, tmp23, tmp28, tmp29);
  }

  TNode<Object> phi_bb14_7;
  TNode<IntPtrT> phi_bb14_8;
  TNode<Object> phi_bb14_9;
  TNode<IntPtrT> phi_bb14_10;
  TNode<Object> phi_bb14_11;
  TNode<IntPtrT> phi_bb14_12;
  TNode<Object> phi_bb14_13;
  TNode<IntPtrT> phi_bb14_14;
  TNode<BoolT> tmp30;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_7, &phi_bb14_8, &phi_bb14_9, &phi_bb14_10, &phi_bb14_11, &phi_bb14_12, &phi_bb14_13, &phi_bb14_14);
    tmp30 = CodeStubAssembler(state_).IntPtrLessThanOrEqual(TNode<IntPtrT>{phi_bb14_8}, TNode<IntPtrT>{phi_bb14_12});
    ca_.Branch(tmp30, &block12, std::vector<compiler::Node*>{phi_bb14_7, phi_bb14_8, phi_bb14_9, phi_bb14_10, phi_bb14_11, phi_bb14_12, phi_bb14_13, phi_bb14_14}, &block13, std::vector<compiler::Node*>{phi_bb14_7, phi_bb14_8, phi_bb14_9, phi_bb14_10, phi_bb14_11, phi_bb14_12, phi_bb14_13, phi_bb14_14});
  }

  TNode<Object> phi_bb12_7;
  TNode<IntPtrT> phi_bb12_8;
  TNode<Object> phi_bb12_9;
  TNode<IntPtrT> phi_bb12_10;
  TNode<Object> phi_bb12_11;
  TNode<IntPtrT> phi_bb12_12;
  TNode<Object> phi_bb12_13;
  TNode<IntPtrT> phi_bb12_14;
  TNode<Uint8T> tmp31;
  TNode<Uint16T> tmp32;
  TNode<BoolT> tmp33;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_7, &phi_bb12_8, &phi_bb12_9, &phi_bb12_10, &phi_bb12_11, &phi_bb12_12, &phi_bb12_13, &phi_bb12_14);
    tmp31 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{phi_bb12_7, phi_bb12_8});
    tmp32 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{phi_bb12_9, phi_bb12_10});
    tmp33 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{tmp31}, TNode<Uint32T>{tmp32});
    ca_.Branch(tmp33, &block17, std::vector<compiler::Node*>{phi_bb12_7, phi_bb12_8, phi_bb12_9, phi_bb12_10, phi_bb12_11, phi_bb12_12, phi_bb12_13, phi_bb12_14}, &block18, std::vector<compiler::Node*>{phi_bb12_7, phi_bb12_8, phi_bb12_9, phi_bb12_10, phi_bb12_11, phi_bb12_12, phi_bb12_13, phi_bb12_14});
  }

  TNode<Object> phi_bb17_7;
  TNode<IntPtrT> phi_bb17_8;
  TNode<Object> phi_bb17_9;
  TNode<IntPtrT> phi_bb17_10;
  TNode<Object> phi_bb17_11;
  TNode<IntPtrT> phi_bb17_12;
  TNode<Object> phi_bb17_13;
  TNode<IntPtrT> phi_bb17_14;
  TNode<BoolT> tmp34;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_7, &phi_bb17_8, &phi_bb17_9, &phi_bb17_10, &phi_bb17_11, &phi_bb17_12, &phi_bb17_13, &phi_bb17_14);
    tmp34 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block19, phi_bb17_7, phi_bb17_8, phi_bb17_9, phi_bb17_10, phi_bb17_11, phi_bb17_12, phi_bb17_13, phi_bb17_14, tmp34);
  }

  TNode<Object> phi_bb18_7;
  TNode<IntPtrT> phi_bb18_8;
  TNode<Object> phi_bb18_9;
  TNode<IntPtrT> phi_bb18_10;
  TNode<Object> phi_bb18_11;
  TNode<IntPtrT> phi_bb18_12;
  TNode<Object> phi_bb18_13;
  TNode<IntPtrT> phi_bb18_14;
  TNode<Uint8T> tmp35;
  TNode<Uint16T> tmp36;
  TNode<BoolT> tmp37;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_7, &phi_bb18_8, &phi_bb18_9, &phi_bb18_10, &phi_bb18_11, &phi_bb18_12, &phi_bb18_13, &phi_bb18_14);
    tmp35 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{phi_bb18_11, phi_bb18_12});
    tmp36 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{phi_bb18_13, phi_bb18_14});
    tmp37 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{tmp35}, TNode<Uint32T>{tmp36});
    ca_.Goto(&block19, phi_bb18_7, phi_bb18_8, phi_bb18_9, phi_bb18_10, phi_bb18_11, phi_bb18_12, phi_bb18_13, phi_bb18_14, tmp37);
  }

  TNode<Object> phi_bb19_7;
  TNode<IntPtrT> phi_bb19_8;
  TNode<Object> phi_bb19_9;
  TNode<IntPtrT> phi_bb19_10;
  TNode<Object> phi_bb19_11;
  TNode<IntPtrT> phi_bb19_12;
  TNode<Object> phi_bb19_13;
  TNode<IntPtrT> phi_bb19_14;
  TNode<BoolT> phi_bb19_16;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_7, &phi_bb19_8, &phi_bb19_9, &phi_bb19_10, &phi_bb19_11, &phi_bb19_12, &phi_bb19_13, &phi_bb19_14, &phi_bb19_16);
    ca_.Branch(phi_bb19_16, &block15, std::vector<compiler::Node*>{phi_bb19_7, phi_bb19_8, phi_bb19_9, phi_bb19_10, phi_bb19_11, phi_bb19_12, phi_bb19_13, phi_bb19_14}, &block16, std::vector<compiler::Node*>{phi_bb19_7, phi_bb19_8, phi_bb19_9, phi_bb19_10, phi_bb19_11, phi_bb19_12, phi_bb19_13, phi_bb19_14});
  }

  TNode<Object> phi_bb15_7;
  TNode<IntPtrT> phi_bb15_8;
  TNode<Object> phi_bb15_9;
  TNode<IntPtrT> phi_bb15_10;
  TNode<Object> phi_bb15_11;
  TNode<IntPtrT> phi_bb15_12;
  TNode<Object> phi_bb15_13;
  TNode<IntPtrT> phi_bb15_14;
  TNode<BoolT> tmp38;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_7, &phi_bb15_8, &phi_bb15_9, &phi_bb15_10, &phi_bb15_11, &phi_bb15_12, &phi_bb15_13, &phi_bb15_14);
    tmp38 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block1, tmp38);
  }

  TNode<Object> phi_bb16_7;
  TNode<IntPtrT> phi_bb16_8;
  TNode<Object> phi_bb16_9;
  TNode<IntPtrT> phi_bb16_10;
  TNode<Object> phi_bb16_11;
  TNode<IntPtrT> phi_bb16_12;
  TNode<Object> phi_bb16_13;
  TNode<IntPtrT> phi_bb16_14;
  TNode<IntPtrT> tmp39;
  TNode<Object> tmp40;
  TNode<IntPtrT> tmp41;
  TNode<IntPtrT> tmp42;
  TNode<Object> tmp43;
  TNode<IntPtrT> tmp44;
  TNode<IntPtrT> tmp45;
  TNode<Object> tmp46;
  TNode<IntPtrT> tmp47;
  TNode<IntPtrT> tmp48;
  TNode<Object> tmp49;
  TNode<IntPtrT> tmp50;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_7, &phi_bb16_8, &phi_bb16_9, &phi_bb16_10, &phi_bb16_11, &phi_bb16_12, &phi_bb16_13, &phi_bb16_14);
    tmp39 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    std::tie(tmp40, tmp41) = AddOffset_char8_0(state_, TorqueStructReference_char8_0{TNode<Object>{phi_bb16_7}, TNode<IntPtrT>{phi_bb16_8}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{tmp39}).Flatten();
    tmp42 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    std::tie(tmp43, tmp44) = AddOffset_char8_0(state_, TorqueStructReference_char8_0{TNode<Object>{phi_bb16_11}, TNode<IntPtrT>{phi_bb16_12}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{tmp42}).Flatten();
    tmp45 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    std::tie(tmp46, tmp47) = AddOffset_char16_0(state_, TorqueStructReference_char16_0{TNode<Object>{phi_bb16_9}, TNode<IntPtrT>{phi_bb16_10}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{tmp45}).Flatten();
    tmp48 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    std::tie(tmp49, tmp50) = AddOffset_char16_0(state_, TorqueStructReference_char16_0{TNode<Object>{phi_bb16_13}, TNode<IntPtrT>{phi_bb16_14}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{tmp48}).Flatten();
    ca_.Goto(&block14, tmp40, tmp41, tmp46, tmp47, tmp43, tmp44, tmp49, tmp50);
  }

  TNode<Object> phi_bb13_7;
  TNode<IntPtrT> phi_bb13_8;
  TNode<Object> phi_bb13_9;
  TNode<IntPtrT> phi_bb13_10;
  TNode<Object> phi_bb13_11;
  TNode<IntPtrT> phi_bb13_12;
  TNode<Object> phi_bb13_13;
  TNode<IntPtrT> phi_bb13_14;
  TNode<BoolT> tmp51;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_7, &phi_bb13_8, &phi_bb13_9, &phi_bb13_10, &phi_bb13_11, &phi_bb13_12, &phi_bb13_13, &phi_bb13_14);
    tmp51 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block1, tmp51);
  }

  TNode<BoolT> phi_bb1_6;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_6);
    ca_.Goto(&block20, phi_bb1_6);
  }

  TNode<BoolT> phi_bb20_6;
    ca_.Bind(&block20, &phi_bb20_6);
  return TNode<BoolT>{phi_bb20_6};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=50&c=7
TNode<BoolT> EqualContent_char16_char8_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_char16_ConstReference_char16_0 p_a, TorqueStructSlice_char8_ConstReference_char8_0 p_b) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, BoolT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{p_a.length}, TNode<IntPtrT>{p_b.length});
    ca_.Branch(tmp0, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp1;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp1 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block1, tmp1);
  }

  TNode<RawPtrT> tmp2;
  TNode<RawPtrT> tmp3;
  TNode<RawPtrT> tmp4;
  TNode<RawPtrT> tmp5;
  TNode<BoolT> tmp6;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp2 = CodeStubAssembler(state_).GCUnsafeReferenceToRawPtr(TNode<Object>{p_a.object}, TNode<IntPtrT>{p_a.offset});
    tmp3 = (TNode<RawPtrT>{tmp2});
    tmp4 = CodeStubAssembler(state_).GCUnsafeReferenceToRawPtr(TNode<Object>{p_b.object}, TNode<IntPtrT>{p_b.offset});
    tmp5 = (TNode<RawPtrT>{tmp4});
    tmp6 = CodeStubAssembler(state_).WordEqual(TNode<RawPtrT>{tmp3}, TNode<RawPtrT>{tmp5});
    ca_.Branch(tmp6, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp7;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp7 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block1, tmp7);
  }

  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<Object> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<Object> tmp16;
  TNode<IntPtrT> tmp17;
  TNode<IntPtrT> tmp18;
  TNode<IntPtrT> tmp19;
  TNode<IntPtrT> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<Object> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<IntPtrT> tmp24;
  TNode<IntPtrT> tmp25;
  TNode<IntPtrT> tmp26;
  TNode<IntPtrT> tmp27;
  TNode<Object> tmp28;
  TNode<IntPtrT> tmp29;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp8 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp9 = TimesSizeOf_char16_0(state_, TNode<IntPtrT>{tmp8});
    tmp10 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_a.offset}, TNode<IntPtrT>{tmp9});
    std::tie(tmp11, tmp12) = NewReference_char16_0(state_, TNode<Object>{p_a.object}, TNode<IntPtrT>{tmp10}).Flatten();
    tmp13 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp14 = TimesSizeOf_char8_0(state_, TNode<IntPtrT>{tmp13});
    tmp15 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_b.offset}, TNode<IntPtrT>{tmp14});
    std::tie(tmp16, tmp17) = NewReference_char8_0(state_, TNode<Object>{p_b.object}, TNode<IntPtrT>{tmp15}).Flatten();
    tmp18 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp19 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{p_a.length}, TNode<IntPtrT>{tmp18});
    tmp20 = TimesSizeOf_char16_0(state_, TNode<IntPtrT>{tmp19});
    tmp21 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_a.offset}, TNode<IntPtrT>{tmp20});
    std::tie(tmp22, tmp23) = NewReference_char16_0(state_, TNode<Object>{p_a.object}, TNode<IntPtrT>{tmp21}).Flatten();
    tmp24 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp25 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{p_a.length}, TNode<IntPtrT>{tmp24});
    tmp26 = TimesSizeOf_char8_0(state_, TNode<IntPtrT>{tmp25});
    tmp27 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_b.offset}, TNode<IntPtrT>{tmp26});
    std::tie(tmp28, tmp29) = NewReference_char8_0(state_, TNode<Object>{p_b.object}, TNode<IntPtrT>{tmp27}).Flatten();
    ca_.Goto(&block14, tmp11, tmp12, tmp16, tmp17, tmp22, tmp23, tmp28, tmp29);
  }

  TNode<Object> phi_bb14_7;
  TNode<IntPtrT> phi_bb14_8;
  TNode<Object> phi_bb14_9;
  TNode<IntPtrT> phi_bb14_10;
  TNode<Object> phi_bb14_11;
  TNode<IntPtrT> phi_bb14_12;
  TNode<Object> phi_bb14_13;
  TNode<IntPtrT> phi_bb14_14;
  TNode<BoolT> tmp30;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_7, &phi_bb14_8, &phi_bb14_9, &phi_bb14_10, &phi_bb14_11, &phi_bb14_12, &phi_bb14_13, &phi_bb14_14);
    tmp30 = CodeStubAssembler(state_).IntPtrLessThanOrEqual(TNode<IntPtrT>{phi_bb14_8}, TNode<IntPtrT>{phi_bb14_12});
    ca_.Branch(tmp30, &block12, std::vector<compiler::Node*>{phi_bb14_7, phi_bb14_8, phi_bb14_9, phi_bb14_10, phi_bb14_11, phi_bb14_12, phi_bb14_13, phi_bb14_14}, &block13, std::vector<compiler::Node*>{phi_bb14_7, phi_bb14_8, phi_bb14_9, phi_bb14_10, phi_bb14_11, phi_bb14_12, phi_bb14_13, phi_bb14_14});
  }

  TNode<Object> phi_bb12_7;
  TNode<IntPtrT> phi_bb12_8;
  TNode<Object> phi_bb12_9;
  TNode<IntPtrT> phi_bb12_10;
  TNode<Object> phi_bb12_11;
  TNode<IntPtrT> phi_bb12_12;
  TNode<Object> phi_bb12_13;
  TNode<IntPtrT> phi_bb12_14;
  TNode<Uint16T> tmp31;
  TNode<Uint8T> tmp32;
  TNode<BoolT> tmp33;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_7, &phi_bb12_8, &phi_bb12_9, &phi_bb12_10, &phi_bb12_11, &phi_bb12_12, &phi_bb12_13, &phi_bb12_14);
    tmp31 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{phi_bb12_7, phi_bb12_8});
    tmp32 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{phi_bb12_9, phi_bb12_10});
    tmp33 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{tmp31}, TNode<Uint32T>{tmp32});
    ca_.Branch(tmp33, &block17, std::vector<compiler::Node*>{phi_bb12_7, phi_bb12_8, phi_bb12_9, phi_bb12_10, phi_bb12_11, phi_bb12_12, phi_bb12_13, phi_bb12_14}, &block18, std::vector<compiler::Node*>{phi_bb12_7, phi_bb12_8, phi_bb12_9, phi_bb12_10, phi_bb12_11, phi_bb12_12, phi_bb12_13, phi_bb12_14});
  }

  TNode<Object> phi_bb17_7;
  TNode<IntPtrT> phi_bb17_8;
  TNode<Object> phi_bb17_9;
  TNode<IntPtrT> phi_bb17_10;
  TNode<Object> phi_bb17_11;
  TNode<IntPtrT> phi_bb17_12;
  TNode<Object> phi_bb17_13;
  TNode<IntPtrT> phi_bb17_14;
  TNode<BoolT> tmp34;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_7, &phi_bb17_8, &phi_bb17_9, &phi_bb17_10, &phi_bb17_11, &phi_bb17_12, &phi_bb17_13, &phi_bb17_14);
    tmp34 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block19, phi_bb17_7, phi_bb17_8, phi_bb17_9, phi_bb17_10, phi_bb17_11, phi_bb17_12, phi_bb17_13, phi_bb17_14, tmp34);
  }

  TNode<Object> phi_bb18_7;
  TNode<IntPtrT> phi_bb18_8;
  TNode<Object> phi_bb18_9;
  TNode<IntPtrT> phi_bb18_10;
  TNode<Object> phi_bb18_11;
  TNode<IntPtrT> phi_bb18_12;
  TNode<Object> phi_bb18_13;
  TNode<IntPtrT> phi_bb18_14;
  TNode<Uint16T> tmp35;
  TNode<Uint8T> tmp36;
  TNode<BoolT> tmp37;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_7, &phi_bb18_8, &phi_bb18_9, &phi_bb18_10, &phi_bb18_11, &phi_bb18_12, &phi_bb18_13, &phi_bb18_14);
    tmp35 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{phi_bb18_11, phi_bb18_12});
    tmp36 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{phi_bb18_13, phi_bb18_14});
    tmp37 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{tmp35}, TNode<Uint32T>{tmp36});
    ca_.Goto(&block19, phi_bb18_7, phi_bb18_8, phi_bb18_9, phi_bb18_10, phi_bb18_11, phi_bb18_12, phi_bb18_13, phi_bb18_14, tmp37);
  }

  TNode<Object> phi_bb19_7;
  TNode<IntPtrT> phi_bb19_8;
  TNode<Object> phi_bb19_9;
  TNode<IntPtrT> phi_bb19_10;
  TNode<Object> phi_bb19_11;
  TNode<IntPtrT> phi_bb19_12;
  TNode<Object> phi_bb19_13;
  TNode<IntPtrT> phi_bb19_14;
  TNode<BoolT> phi_bb19_16;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_7, &phi_bb19_8, &phi_bb19_9, &phi_bb19_10, &phi_bb19_11, &phi_bb19_12, &phi_bb19_13, &phi_bb19_14, &phi_bb19_16);
    ca_.Branch(phi_bb19_16, &block15, std::vector<compiler::Node*>{phi_bb19_7, phi_bb19_8, phi_bb19_9, phi_bb19_10, phi_bb19_11, phi_bb19_12, phi_bb19_13, phi_bb19_14}, &block16, std::vector<compiler::Node*>{phi_bb19_7, phi_bb19_8, phi_bb19_9, phi_bb19_10, phi_bb19_11, phi_bb19_12, phi_bb19_13, phi_bb19_14});
  }

  TNode<Object> phi_bb15_7;
  TNode<IntPtrT> phi_bb15_8;
  TNode<Object> phi_bb15_9;
  TNode<IntPtrT> phi_bb15_10;
  TNode<Object> phi_bb15_11;
  TNode<IntPtrT> phi_bb15_12;
  TNode<Object> phi_bb15_13;
  TNode<IntPtrT> phi_bb15_14;
  TNode<BoolT> tmp38;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_7, &phi_bb15_8, &phi_bb15_9, &phi_bb15_10, &phi_bb15_11, &phi_bb15_12, &phi_bb15_13, &phi_bb15_14);
    tmp38 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block1, tmp38);
  }

  TNode<Object> phi_bb16_7;
  TNode<IntPtrT> phi_bb16_8;
  TNode<Object> phi_bb16_9;
  TNode<IntPtrT> phi_bb16_10;
  TNode<Object> phi_bb16_11;
  TNode<IntPtrT> phi_bb16_12;
  TNode<Object> phi_bb16_13;
  TNode<IntPtrT> phi_bb16_14;
  TNode<IntPtrT> tmp39;
  TNode<Object> tmp40;
  TNode<IntPtrT> tmp41;
  TNode<IntPtrT> tmp42;
  TNode<Object> tmp43;
  TNode<IntPtrT> tmp44;
  TNode<IntPtrT> tmp45;
  TNode<Object> tmp46;
  TNode<IntPtrT> tmp47;
  TNode<IntPtrT> tmp48;
  TNode<Object> tmp49;
  TNode<IntPtrT> tmp50;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_7, &phi_bb16_8, &phi_bb16_9, &phi_bb16_10, &phi_bb16_11, &phi_bb16_12, &phi_bb16_13, &phi_bb16_14);
    tmp39 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    std::tie(tmp40, tmp41) = AddOffset_char16_0(state_, TorqueStructReference_char16_0{TNode<Object>{phi_bb16_7}, TNode<IntPtrT>{phi_bb16_8}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{tmp39}).Flatten();
    tmp42 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    std::tie(tmp43, tmp44) = AddOffset_char16_0(state_, TorqueStructReference_char16_0{TNode<Object>{phi_bb16_11}, TNode<IntPtrT>{phi_bb16_12}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{tmp42}).Flatten();
    tmp45 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    std::tie(tmp46, tmp47) = AddOffset_char8_0(state_, TorqueStructReference_char8_0{TNode<Object>{phi_bb16_9}, TNode<IntPtrT>{phi_bb16_10}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{tmp45}).Flatten();
    tmp48 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    std::tie(tmp49, tmp50) = AddOffset_char8_0(state_, TorqueStructReference_char8_0{TNode<Object>{phi_bb16_13}, TNode<IntPtrT>{phi_bb16_14}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{tmp48}).Flatten();
    ca_.Goto(&block14, tmp40, tmp41, tmp46, tmp47, tmp43, tmp44, tmp49, tmp50);
  }

  TNode<Object> phi_bb13_7;
  TNode<IntPtrT> phi_bb13_8;
  TNode<Object> phi_bb13_9;
  TNode<IntPtrT> phi_bb13_10;
  TNode<Object> phi_bb13_11;
  TNode<IntPtrT> phi_bb13_12;
  TNode<Object> phi_bb13_13;
  TNode<IntPtrT> phi_bb13_14;
  TNode<BoolT> tmp51;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_7, &phi_bb13_8, &phi_bb13_9, &phi_bb13_10, &phi_bb13_11, &phi_bb13_12, &phi_bb13_13, &phi_bb13_14);
    tmp51 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block1, tmp51);
  }

  TNode<BoolT> phi_bb1_6;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_6);
    ca_.Goto(&block20, phi_bb1_6);
  }

  TNode<BoolT> phi_bb20_6;
    ca_.Bind(&block20, &phi_bb20_6);
  return TNode<BoolT>{phi_bb20_6};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=50&c=7
TNode<BoolT> EqualContent_char16_char16_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_char16_ConstReference_char16_0 p_a, TorqueStructSlice_char16_ConstReference_char16_0 p_b) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, BoolT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Object, IntPtrT, Object, IntPtrT, Object, IntPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{p_a.length}, TNode<IntPtrT>{p_b.length});
    ca_.Branch(tmp0, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp1;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp1 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block1, tmp1);
  }

  TNode<RawPtrT> tmp2;
  TNode<RawPtrT> tmp3;
  TNode<RawPtrT> tmp4;
  TNode<RawPtrT> tmp5;
  TNode<BoolT> tmp6;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp2 = CodeStubAssembler(state_).GCUnsafeReferenceToRawPtr(TNode<Object>{p_a.object}, TNode<IntPtrT>{p_a.offset});
    tmp3 = (TNode<RawPtrT>{tmp2});
    tmp4 = CodeStubAssembler(state_).GCUnsafeReferenceToRawPtr(TNode<Object>{p_b.object}, TNode<IntPtrT>{p_b.offset});
    tmp5 = (TNode<RawPtrT>{tmp4});
    tmp6 = CodeStubAssembler(state_).WordEqual(TNode<RawPtrT>{tmp3}, TNode<RawPtrT>{tmp5});
    ca_.Branch(tmp6, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp7;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp7 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block1, tmp7);
  }

  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<Object> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<Object> tmp16;
  TNode<IntPtrT> tmp17;
  TNode<IntPtrT> tmp18;
  TNode<IntPtrT> tmp19;
  TNode<IntPtrT> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<Object> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<IntPtrT> tmp24;
  TNode<IntPtrT> tmp25;
  TNode<IntPtrT> tmp26;
  TNode<IntPtrT> tmp27;
  TNode<Object> tmp28;
  TNode<IntPtrT> tmp29;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp8 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp9 = TimesSizeOf_char16_0(state_, TNode<IntPtrT>{tmp8});
    tmp10 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_a.offset}, TNode<IntPtrT>{tmp9});
    std::tie(tmp11, tmp12) = NewReference_char16_0(state_, TNode<Object>{p_a.object}, TNode<IntPtrT>{tmp10}).Flatten();
    tmp13 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp14 = TimesSizeOf_char16_0(state_, TNode<IntPtrT>{tmp13});
    tmp15 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_b.offset}, TNode<IntPtrT>{tmp14});
    std::tie(tmp16, tmp17) = NewReference_char16_0(state_, TNode<Object>{p_b.object}, TNode<IntPtrT>{tmp15}).Flatten();
    tmp18 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp19 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{p_a.length}, TNode<IntPtrT>{tmp18});
    tmp20 = TimesSizeOf_char16_0(state_, TNode<IntPtrT>{tmp19});
    tmp21 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_a.offset}, TNode<IntPtrT>{tmp20});
    std::tie(tmp22, tmp23) = NewReference_char16_0(state_, TNode<Object>{p_a.object}, TNode<IntPtrT>{tmp21}).Flatten();
    tmp24 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp25 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{p_a.length}, TNode<IntPtrT>{tmp24});
    tmp26 = TimesSizeOf_char16_0(state_, TNode<IntPtrT>{tmp25});
    tmp27 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_b.offset}, TNode<IntPtrT>{tmp26});
    std::tie(tmp28, tmp29) = NewReference_char16_0(state_, TNode<Object>{p_b.object}, TNode<IntPtrT>{tmp27}).Flatten();
    ca_.Goto(&block14, tmp11, tmp12, tmp16, tmp17, tmp22, tmp23, tmp28, tmp29);
  }

  TNode<Object> phi_bb14_7;
  TNode<IntPtrT> phi_bb14_8;
  TNode<Object> phi_bb14_9;
  TNode<IntPtrT> phi_bb14_10;
  TNode<Object> phi_bb14_11;
  TNode<IntPtrT> phi_bb14_12;
  TNode<Object> phi_bb14_13;
  TNode<IntPtrT> phi_bb14_14;
  TNode<BoolT> tmp30;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_7, &phi_bb14_8, &phi_bb14_9, &phi_bb14_10, &phi_bb14_11, &phi_bb14_12, &phi_bb14_13, &phi_bb14_14);
    tmp30 = CodeStubAssembler(state_).IntPtrLessThanOrEqual(TNode<IntPtrT>{phi_bb14_8}, TNode<IntPtrT>{phi_bb14_12});
    ca_.Branch(tmp30, &block12, std::vector<compiler::Node*>{phi_bb14_7, phi_bb14_8, phi_bb14_9, phi_bb14_10, phi_bb14_11, phi_bb14_12, phi_bb14_13, phi_bb14_14}, &block13, std::vector<compiler::Node*>{phi_bb14_7, phi_bb14_8, phi_bb14_9, phi_bb14_10, phi_bb14_11, phi_bb14_12, phi_bb14_13, phi_bb14_14});
  }

  TNode<Object> phi_bb12_7;
  TNode<IntPtrT> phi_bb12_8;
  TNode<Object> phi_bb12_9;
  TNode<IntPtrT> phi_bb12_10;
  TNode<Object> phi_bb12_11;
  TNode<IntPtrT> phi_bb12_12;
  TNode<Object> phi_bb12_13;
  TNode<IntPtrT> phi_bb12_14;
  TNode<Uint16T> tmp31;
  TNode<Uint16T> tmp32;
  TNode<BoolT> tmp33;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_7, &phi_bb12_8, &phi_bb12_9, &phi_bb12_10, &phi_bb12_11, &phi_bb12_12, &phi_bb12_13, &phi_bb12_14);
    tmp31 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{phi_bb12_7, phi_bb12_8});
    tmp32 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{phi_bb12_9, phi_bb12_10});
    tmp33 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{tmp31}, TNode<Uint32T>{tmp32});
    ca_.Branch(tmp33, &block17, std::vector<compiler::Node*>{phi_bb12_7, phi_bb12_8, phi_bb12_9, phi_bb12_10, phi_bb12_11, phi_bb12_12, phi_bb12_13, phi_bb12_14}, &block18, std::vector<compiler::Node*>{phi_bb12_7, phi_bb12_8, phi_bb12_9, phi_bb12_10, phi_bb12_11, phi_bb12_12, phi_bb12_13, phi_bb12_14});
  }

  TNode<Object> phi_bb17_7;
  TNode<IntPtrT> phi_bb17_8;
  TNode<Object> phi_bb17_9;
  TNode<IntPtrT> phi_bb17_10;
  TNode<Object> phi_bb17_11;
  TNode<IntPtrT> phi_bb17_12;
  TNode<Object> phi_bb17_13;
  TNode<IntPtrT> phi_bb17_14;
  TNode<BoolT> tmp34;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_7, &phi_bb17_8, &phi_bb17_9, &phi_bb17_10, &phi_bb17_11, &phi_bb17_12, &phi_bb17_13, &phi_bb17_14);
    tmp34 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block19, phi_bb17_7, phi_bb17_8, phi_bb17_9, phi_bb17_10, phi_bb17_11, phi_bb17_12, phi_bb17_13, phi_bb17_14, tmp34);
  }

  TNode<Object> phi_bb18_7;
  TNode<IntPtrT> phi_bb18_8;
  TNode<Object> phi_bb18_9;
  TNode<IntPtrT> phi_bb18_10;
  TNode<Object> phi_bb18_11;
  TNode<IntPtrT> phi_bb18_12;
  TNode<Object> phi_bb18_13;
  TNode<IntPtrT> phi_bb18_14;
  TNode<Uint16T> tmp35;
  TNode<Uint16T> tmp36;
  TNode<BoolT> tmp37;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_7, &phi_bb18_8, &phi_bb18_9, &phi_bb18_10, &phi_bb18_11, &phi_bb18_12, &phi_bb18_13, &phi_bb18_14);
    tmp35 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{phi_bb18_11, phi_bb18_12});
    tmp36 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{phi_bb18_13, phi_bb18_14});
    tmp37 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{tmp35}, TNode<Uint32T>{tmp36});
    ca_.Goto(&block19, phi_bb18_7, phi_bb18_8, phi_bb18_9, phi_bb18_10, phi_bb18_11, phi_bb18_12, phi_bb18_13, phi_bb18_14, tmp37);
  }

  TNode<Object> phi_bb19_7;
  TNode<IntPtrT> phi_bb19_8;
  TNode<Object> phi_bb19_9;
  TNode<IntPtrT> phi_bb19_10;
  TNode<Object> phi_bb19_11;
  TNode<IntPtrT> phi_bb19_12;
  TNode<Object> phi_bb19_13;
  TNode<IntPtrT> phi_bb19_14;
  TNode<BoolT> phi_bb19_16;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_7, &phi_bb19_8, &phi_bb19_9, &phi_bb19_10, &phi_bb19_11, &phi_bb19_12, &phi_bb19_13, &phi_bb19_14, &phi_bb19_16);
    ca_.Branch(phi_bb19_16, &block15, std::vector<compiler::Node*>{phi_bb19_7, phi_bb19_8, phi_bb19_9, phi_bb19_10, phi_bb19_11, phi_bb19_12, phi_bb19_13, phi_bb19_14}, &block16, std::vector<compiler::Node*>{phi_bb19_7, phi_bb19_8, phi_bb19_9, phi_bb19_10, phi_bb19_11, phi_bb19_12, phi_bb19_13, phi_bb19_14});
  }

  TNode<Object> phi_bb15_7;
  TNode<IntPtrT> phi_bb15_8;
  TNode<Object> phi_bb15_9;
  TNode<IntPtrT> phi_bb15_10;
  TNode<Object> phi_bb15_11;
  TNode<IntPtrT> phi_bb15_12;
  TNode<Object> phi_bb15_13;
  TNode<IntPtrT> phi_bb15_14;
  TNode<BoolT> tmp38;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_7, &phi_bb15_8, &phi_bb15_9, &phi_bb15_10, &phi_bb15_11, &phi_bb15_12, &phi_bb15_13, &phi_bb15_14);
    tmp38 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block1, tmp38);
  }

  TNode<Object> phi_bb16_7;
  TNode<IntPtrT> phi_bb16_8;
  TNode<Object> phi_bb16_9;
  TNode<IntPtrT> phi_bb16_10;
  TNode<Object> phi_bb16_11;
  TNode<IntPtrT> phi_bb16_12;
  TNode<Object> phi_bb16_13;
  TNode<IntPtrT> phi_bb16_14;
  TNode<IntPtrT> tmp39;
  TNode<Object> tmp40;
  TNode<IntPtrT> tmp41;
  TNode<IntPtrT> tmp42;
  TNode<Object> tmp43;
  TNode<IntPtrT> tmp44;
  TNode<IntPtrT> tmp45;
  TNode<Object> tmp46;
  TNode<IntPtrT> tmp47;
  TNode<IntPtrT> tmp48;
  TNode<Object> tmp49;
  TNode<IntPtrT> tmp50;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_7, &phi_bb16_8, &phi_bb16_9, &phi_bb16_10, &phi_bb16_11, &phi_bb16_12, &phi_bb16_13, &phi_bb16_14);
    tmp39 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    std::tie(tmp40, tmp41) = AddOffset_char16_0(state_, TorqueStructReference_char16_0{TNode<Object>{phi_bb16_7}, TNode<IntPtrT>{phi_bb16_8}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{tmp39}).Flatten();
    tmp42 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    std::tie(tmp43, tmp44) = AddOffset_char16_0(state_, TorqueStructReference_char16_0{TNode<Object>{phi_bb16_11}, TNode<IntPtrT>{phi_bb16_12}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{tmp42}).Flatten();
    tmp45 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    std::tie(tmp46, tmp47) = AddOffset_char16_0(state_, TorqueStructReference_char16_0{TNode<Object>{phi_bb16_9}, TNode<IntPtrT>{phi_bb16_10}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{tmp45}).Flatten();
    tmp48 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    std::tie(tmp49, tmp50) = AddOffset_char16_0(state_, TorqueStructReference_char16_0{TNode<Object>{phi_bb16_13}, TNode<IntPtrT>{phi_bb16_14}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{tmp48}).Flatten();
    ca_.Goto(&block14, tmp40, tmp41, tmp46, tmp47, tmp43, tmp44, tmp49, tmp50);
  }

  TNode<Object> phi_bb13_7;
  TNode<IntPtrT> phi_bb13_8;
  TNode<Object> phi_bb13_9;
  TNode<IntPtrT> phi_bb13_10;
  TNode<Object> phi_bb13_11;
  TNode<IntPtrT> phi_bb13_12;
  TNode<Object> phi_bb13_13;
  TNode<IntPtrT> phi_bb13_14;
  TNode<BoolT> tmp51;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_7, &phi_bb13_8, &phi_bb13_9, &phi_bb13_10, &phi_bb13_11, &phi_bb13_12, &phi_bb13_13, &phi_bb13_14);
    tmp51 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block1, tmp51);
  }

  TNode<BoolT> phi_bb1_6;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_6);
    ca_.Goto(&block20, phi_bb1_6);
  }

  TNode<BoolT> phi_bb20_6;
    ca_.Bind(&block20, &phi_bb20_6);
  return TNode<BoolT>{phi_bb20_6};
}

} // namespace internal
} // namespace v8
