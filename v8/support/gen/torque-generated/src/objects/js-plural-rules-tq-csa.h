#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_PLURAL_RULES_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_PLURAL_RULES_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=12&c=1
TNode<JSPluralRules> Cast_JSPluralRules_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=13&c=3
TNode<String> LoadJSPluralRulesLocale_0(compiler::CodeAssemblerState* state_, TNode<JSPluralRules> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=13&c=3
void StoreJSPluralRulesLocale_0(compiler::CodeAssemblerState* state_, TNode<JSPluralRules> p_o, TNode<String> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=14&c=3
TNode<Smi> LoadJSPluralRulesFlags_0(compiler::CodeAssemblerState* state_, TNode<JSPluralRules> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=14&c=3
void StoreJSPluralRulesFlags_0(compiler::CodeAssemblerState* state_, TNode<JSPluralRules> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=15&c=3
TNode<Foreign> LoadJSPluralRulesIcuPluralRules_0(compiler::CodeAssemblerState* state_, TNode<JSPluralRules> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=15&c=3
void StoreJSPluralRulesIcuPluralRules_0(compiler::CodeAssemblerState* state_, TNode<JSPluralRules> p_o, TNode<Foreign> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=16&c=3
TNode<Foreign> LoadJSPluralRulesIcuNumberFormatter_0(compiler::CodeAssemblerState* state_, TNode<JSPluralRules> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=16&c=3
void StoreJSPluralRulesIcuNumberFormatter_0(compiler::CodeAssemblerState* state_, TNode<JSPluralRules> p_o, TNode<Foreign> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=18&c=3
TNode<Foreign> LoadJSPluralRulesIcuNumberRangeFormatter_0(compiler::CodeAssemblerState* state_, TNode<JSPluralRules> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=18&c=3
void StoreJSPluralRulesIcuNumberRangeFormatter_0(compiler::CodeAssemblerState* state_, TNode<JSPluralRules> p_o, TNode<Foreign> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=12&c=1
TNode<JSPluralRules> DownCastForTorqueClass_JSPluralRules_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_PLURAL_RULES_TQ_CSA_H_
