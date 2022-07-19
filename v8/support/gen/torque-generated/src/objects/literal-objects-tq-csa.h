#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_LITERAL_OBJECTS_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_LITERAL_OBJECTS_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=5&c=1
TNode<ArrayBoilerplateDescription> Cast_ArrayBoilerplateDescription_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=10&c=1
TNode<RegExpBoilerplateDescription> Cast_RegExpBoilerplateDescription_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=6&c=3
TNode<Smi> LoadArrayBoilerplateDescriptionFlags_0(compiler::CodeAssemblerState* state_, TNode<ArrayBoilerplateDescription> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=6&c=3
void StoreArrayBoilerplateDescriptionFlags_0(compiler::CodeAssemblerState* state_, TNode<ArrayBoilerplateDescription> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=7&c=3
TNode<FixedArrayBase> LoadArrayBoilerplateDescriptionConstantElements_0(compiler::CodeAssemblerState* state_, TNode<ArrayBoilerplateDescription> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=7&c=3
void StoreArrayBoilerplateDescriptionConstantElements_0(compiler::CodeAssemblerState* state_, TNode<ArrayBoilerplateDescription> p_o, TNode<FixedArrayBase> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=11&c=3
TNode<FixedArray> LoadRegExpBoilerplateDescriptionData_0(compiler::CodeAssemblerState* state_, TNode<RegExpBoilerplateDescription> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=11&c=3
void StoreRegExpBoilerplateDescriptionData_0(compiler::CodeAssemblerState* state_, TNode<RegExpBoilerplateDescription> p_o, TNode<FixedArray> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=12&c=3
TNode<String> LoadRegExpBoilerplateDescriptionSource_0(compiler::CodeAssemblerState* state_, TNode<RegExpBoilerplateDescription> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=12&c=3
void StoreRegExpBoilerplateDescriptionSource_0(compiler::CodeAssemblerState* state_, TNode<RegExpBoilerplateDescription> p_o, TNode<String> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=13&c=3
TNode<Smi> LoadRegExpBoilerplateDescriptionFlags_0(compiler::CodeAssemblerState* state_, TNode<RegExpBoilerplateDescription> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=13&c=3
void StoreRegExpBoilerplateDescriptionFlags_0(compiler::CodeAssemblerState* state_, TNode<RegExpBoilerplateDescription> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=5&c=1
TNode<ArrayBoilerplateDescription> DownCastForTorqueClass_ArrayBoilerplateDescription_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=10&c=1
TNode<RegExpBoilerplateDescription> DownCastForTorqueClass_RegExpBoilerplateDescription_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_LITERAL_OBJECTS_TQ_CSA_H_
