#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_COLLATOR_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_COLLATOR_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=7&c=1
TNode<JSCollator> Cast_JSCollator_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=8&c=3
TNode<Foreign> LoadJSCollatorIcuCollator_0(compiler::CodeAssemblerState* state_, TNode<JSCollator> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=8&c=3
void StoreJSCollatorIcuCollator_0(compiler::CodeAssemblerState* state_, TNode<JSCollator> p_o, TNode<Foreign> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=9&c=3
TNode<HeapObject> LoadJSCollatorBoundCompare_0(compiler::CodeAssemblerState* state_, TNode<JSCollator> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=9&c=3
void StoreJSCollatorBoundCompare_0(compiler::CodeAssemblerState* state_, TNode<JSCollator> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=10&c=3
TNode<String> LoadJSCollatorLocale_0(compiler::CodeAssemblerState* state_, TNode<JSCollator> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=10&c=3
void StoreJSCollatorLocale_0(compiler::CodeAssemblerState* state_, TNode<JSCollator> p_o, TNode<String> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=7&c=1
TNode<JSCollator> DownCastForTorqueClass_JSCollator_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_COLLATOR_TQ_CSA_H_
