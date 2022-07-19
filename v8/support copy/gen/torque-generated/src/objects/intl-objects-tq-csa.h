#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_INTL_OBJECTS_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_INTL_OBJECTS_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=13&c=1
TNode<Uint8T> IntlAsciiCollationWeightL1_0(compiler::CodeAssemblerState* state_, TNode<Uint8T> p_c, compiler::CodeAssemblerLabel* label__Bailout);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=17&c=1
TNode<Uint8T> IntlAsciiCollationWeightL1_1(compiler::CodeAssemblerState* state_, TNode<Uint16T> p_c, compiler::CodeAssemblerLabel* label_Bailout);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=22&c=1
TNode<Uint8T> IntlAsciiCollationWeightL3_0(compiler::CodeAssemblerState* state_, TNode<Uint8T> p_c, compiler::CodeAssemblerLabel* label__Bailout);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=26&c=1
TNode<Uint8T> IntlAsciiCollationWeightL3_1(compiler::CodeAssemblerState* state_, TNode<Uint16T> p_c, compiler::CodeAssemblerLabel* label_Bailout);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=31&c=1
void CheckEmptyOr1Byte_0(compiler::CodeAssemblerState* state_, TorqueStructSliceIterator_char8_ConstReference_char8_0 p__it, compiler::CodeAssemblerLabel* label__Bailout);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=36&c=1
void CheckEmptyOr1Byte_1(compiler::CodeAssemblerState* state_, TorqueStructSliceIterator_char16_ConstReference_char16_0 p_it, compiler::CodeAssemblerLabel* label_Bailout);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=18&c=7
TNode<Uint32T> Convert_uint32_char16_0(compiler::CodeAssemblerState* state_, TNode<Uint16T> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=114&c=14
TNode<Number> LocaleCompareFastPath_char8_char8_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_char8_ConstReference_char8_0 p_left, TorqueStructSlice_char8_ConstReference_char8_0 p_right, compiler::CodeAssemblerLabel* label_Bailout);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=116&c=14
TNode<Number> LocaleCompareFastPath_char8_char16_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_char8_ConstReference_char8_0 p_left, TorqueStructSlice_char16_ConstReference_char16_0 p_right, compiler::CodeAssemblerLabel* label_Bailout);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=123&c=14
TNode<Number> LocaleCompareFastPath_char16_char8_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_char16_ConstReference_char16_0 p_left, TorqueStructSlice_char8_ConstReference_char8_0 p_right, compiler::CodeAssemblerLabel* label_Bailout);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=125&c=14
TNode<Number> LocaleCompareFastPath_char16_char16_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_char16_ConstReference_char16_0 p_left, TorqueStructSlice_char16_ConstReference_char16_0 p_right, compiler::CodeAssemblerLabel* label_Bailout);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=50&c=7
TNode<BoolT> EqualContent_char8_char8_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_char8_ConstReference_char8_0 p_a, TorqueStructSlice_char8_ConstReference_char8_0 p_b);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=50&c=7
TNode<BoolT> EqualContent_char8_char16_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_char8_ConstReference_char8_0 p_a, TorqueStructSlice_char16_ConstReference_char16_0 p_b);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=50&c=7
TNode<BoolT> EqualContent_char16_char8_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_char16_ConstReference_char16_0 p_a, TorqueStructSlice_char8_ConstReference_char8_0 p_b);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/intl-objects.tq?l=50&c=7
TNode<BoolT> EqualContent_char16_char16_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_char16_ConstReference_char16_0 p_a, TorqueStructSlice_char16_ConstReference_char16_0 p_b);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_INTL_OBJECTS_TQ_CSA_H_
