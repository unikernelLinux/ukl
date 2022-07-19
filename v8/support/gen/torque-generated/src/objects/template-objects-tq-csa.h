#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_TEMPLATE_OBJECTS_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_TEMPLATE_OBJECTS_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=5&c=1
TNode<CachedTemplateObject> Cast_CachedTemplateObject_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=11&c=1
TNode<TemplateObjectDescription> Cast_TemplateObjectDescription_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=6&c=3
TNode<Smi> LoadCachedTemplateObjectSlotId_0(compiler::CodeAssemblerState* state_, TNode<CachedTemplateObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=6&c=3
void StoreCachedTemplateObjectSlotId_0(compiler::CodeAssemblerState* state_, TNode<CachedTemplateObject> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=7&c=3
TNode<JSArray> LoadCachedTemplateObjectTemplateObject_0(compiler::CodeAssemblerState* state_, TNode<CachedTemplateObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=7&c=3
void StoreCachedTemplateObjectTemplateObject_0(compiler::CodeAssemblerState* state_, TNode<CachedTemplateObject> p_o, TNode<JSArray> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=8&c=3
TNode<HeapObject> LoadCachedTemplateObjectNext_0(compiler::CodeAssemblerState* state_, TNode<CachedTemplateObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=8&c=3
void StoreCachedTemplateObjectNext_0(compiler::CodeAssemblerState* state_, TNode<CachedTemplateObject> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=12&c=3
TNode<FixedArray> LoadTemplateObjectDescriptionRawStrings_0(compiler::CodeAssemblerState* state_, TNode<TemplateObjectDescription> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=12&c=3
void StoreTemplateObjectDescriptionRawStrings_0(compiler::CodeAssemblerState* state_, TNode<TemplateObjectDescription> p_o, TNode<FixedArray> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=13&c=3
TNode<FixedArray> LoadTemplateObjectDescriptionCookedStrings_0(compiler::CodeAssemblerState* state_, TNode<TemplateObjectDescription> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=13&c=3
void StoreTemplateObjectDescriptionCookedStrings_0(compiler::CodeAssemblerState* state_, TNode<TemplateObjectDescription> p_o, TNode<FixedArray> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=5&c=1
TNode<CachedTemplateObject> DownCastForTorqueClass_CachedTemplateObject_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=11&c=1
TNode<TemplateObjectDescription> DownCastForTorqueClass_TemplateObjectDescription_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_TEMPLATE_OBJECTS_TQ_CSA_H_
