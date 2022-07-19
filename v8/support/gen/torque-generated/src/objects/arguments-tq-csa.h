#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_ARGUMENTS_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_ARGUMENTS_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=5&c=1
TNode<JSArgumentsObject> Cast_JSArgumentsObject_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=10&c=1
TNode<BoolT> IsJSArgumentsObjectWithLength_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=77&c=1
TNode<SloppyArgumentsElements> Cast_SloppyArgumentsElements_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=91&c=1
TNode<AliasedArgumentsEntry> Cast_AliasedArgumentsEntry_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=96&c=1
TNode<JSArgumentsObject> NewJSStrictArgumentsObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArray> p_elements);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=107&c=1
TNode<JSArgumentsObject> NewJSSloppyArgumentsObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArrayBase> p_elements, TNode<JSFunction> p_callee);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=119&c=1
TNode<JSArgumentsObject> NewJSFastAliasedArgumentsObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArrayBase> p_elements, TNode<Smi> p_length, TNode<JSFunction> p_callee);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=143&c=1
TorqueStructParameterMapIterator_0 NewParameterMapIterator_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_formalParameterCount, TNode<IntPtrT> p_mappedCount);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=183&c=1
TorqueStructParameterValueIterator_0 NewParameterValueIterator_0(compiler::CodeAssemblerState* state_, TNode<IntPtrT> p_mappedCount, TorqueStructArguments p_arguments);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=192&c=1
TNode<JSArray> NewAllArguments_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<RawPtrT> p_frame, TNode<IntPtrT> p_argumentCount);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=201&c=1
TNode<FixedArray> NewRestArgumentsElements_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_frame, TNode<IntPtrT> p_formalParameterCount, TNode<IntPtrT> p_argumentCount);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=212&c=1
TNode<JSArray> NewRestArguments_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructFrameWithArgumentsInfo_0 p_info);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=222&c=1
TNode<FixedArray> NewStrictArgumentsElements_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_frame, TNode<IntPtrT> p_argumentCount);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=229&c=1
TNode<JSArgumentsObject> NewStrictArguments_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructFrameWithArgumentsInfo_0 p_info);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=236&c=1
TNode<FixedArray> NewSloppyArgumentsElements_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_frame, TNode<IntPtrT> p_formalParameterCount, TNode<IntPtrT> p_argumentCount);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=249&c=1
TNode<JSArgumentsObject> NewSloppyArguments_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructFrameWithArgumentsInfo_0 p_info, TNode<JSFunction> p_callee);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=270&c=1
TNode<JSArray> EmitFastNewAllArguments_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<RawPtrT> p_frame, TNode<IntPtrT> p_argc);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=276&c=1
TNode<JSArray> EmitFastNewRestArguments_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSFunction> p__f);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=283&c=1
TNode<JSArgumentsObject> EmitFastNewStrictArguments_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSFunction> p__f);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=290&c=1
TNode<JSArgumentsObject> EmitFastNewSloppyArguments_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSFunction> p_f);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=333&c=1
TorqueStructReference_Object_0 AccessSloppyArgumentsCommon_0(compiler::CodeAssemblerState* state_, TNode<JSObject> p_receiver, TNode<Object> p_keyObject, compiler::CodeAssemblerLabel* label_Bailout);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=365&c=1
TNode<Object> SloppyArgumentsLoad_0(compiler::CodeAssemblerState* state_, TNode<JSObject> p_receiver, TNode<Object> p_keyObject, compiler::CodeAssemblerLabel* label_Bailout);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=372&c=1
TNode<Object> SloppyArgumentsHas_0(compiler::CodeAssemblerState* state_, TNode<JSObject> p_receiver, TNode<Object> p_keyObject, compiler::CodeAssemblerLabel* label_Bailout);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=379&c=1
TNode<Object> SloppyArgumentsStore_0(compiler::CodeAssemblerState* state_, TNode<JSObject> p_receiver, TNode<Object> p_keyObject, TNode<Object> p_value, compiler::CodeAssemblerLabel* label_Bailout);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=24&c=3
TNode<Object> LoadJSStrictArgumentsObjectLength_0(compiler::CodeAssemblerState* state_, TNode<JSArgumentsObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=24&c=3
void StoreJSStrictArgumentsObjectLength_0(compiler::CodeAssemblerState* state_, TNode<JSArgumentsObject> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=18&c=3
TNode<Object> LoadJSSloppyArgumentsObjectLength_0(compiler::CodeAssemblerState* state_, TNode<JSArgumentsObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=18&c=3
void StoreJSSloppyArgumentsObjectLength_0(compiler::CodeAssemblerState* state_, TNode<JSArgumentsObject> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=19&c=3
TNode<Object> LoadJSSloppyArgumentsObjectCallee_0(compiler::CodeAssemblerState* state_, TNode<JSArgumentsObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=19&c=3
void StoreJSSloppyArgumentsObjectCallee_0(compiler::CodeAssemblerState* state_, TNode<JSArgumentsObject> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=79&c=3
TNode<Context> LoadSloppyArgumentsElementsContext_0(compiler::CodeAssemblerState* state_, TNode<SloppyArgumentsElements> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=79&c=3
void StoreSloppyArgumentsElementsContext_0(compiler::CodeAssemblerState* state_, TNode<SloppyArgumentsElements> p_o, TNode<Context> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=80&c=3
TNode<FixedArray> LoadSloppyArgumentsElementsArguments_0(compiler::CodeAssemblerState* state_, TNode<SloppyArgumentsElements> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=80&c=3
void StoreSloppyArgumentsElementsArguments_0(compiler::CodeAssemblerState* state_, TNode<SloppyArgumentsElements> p_o, TNode<FixedArray> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=81&c=19
TorqueStructSlice_Smi_OR_TheHole_MutableReference_Smi_OR_TheHole_0 FieldSliceSloppyArgumentsElementsMappedEntries_0(compiler::CodeAssemblerState* state_, TNode<SloppyArgumentsElements> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=81&c=19
TNode<Object> LoadSloppyArgumentsElementsMappedEntries_0(compiler::CodeAssemblerState* state_, TNode<SloppyArgumentsElements> p_o, TNode<IntPtrT> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=81&c=19
void StoreSloppyArgumentsElementsMappedEntries_0(compiler::CodeAssemblerState* state_, TNode<SloppyArgumentsElements> p_o, TNode<IntPtrT> p_i, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=91&c=53
TNode<Smi> LoadAliasedArgumentsEntryAliasedContextSlot_0(compiler::CodeAssemblerState* state_, TNode<AliasedArgumentsEntry> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=91&c=53
void StoreAliasedArgumentsEntryAliasedContextSlot_0(compiler::CodeAssemblerState* state_, TNode<AliasedArgumentsEntry> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=5&c=1
TNode<JSArgumentsObject> DownCastForTorqueClass_JSArgumentsObject_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=13&c=10
TNode<BoolT> Is_JSArgumentsObjectWithLength_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=77&c=1
TNode<SloppyArgumentsElements> DownCastForTorqueClass_SloppyArgumentsElements_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=91&c=1
TNode<AliasedArgumentsEntry> DownCastForTorqueClass_AliasedArgumentsEntry_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=246&c=10
TNode<FixedArray> NewFixedArray_ParameterValueIterator_0(compiler::CodeAssemblerState* state_, TNode<IntPtrT> p_length, TorqueStructParameterValueIterator_0 p_it);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=262&c=20
TNode<SloppyArgumentsElements> NewSloppyArgumentsElements_ParameterMapIterator_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_length, TNode<Context> p_context, TNode<FixedArray> p_arguments, TorqueStructParameterMapIterator_0 p_it);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=341&c=9
TNode<BoolT> OutOfBounds_Smi_Smi_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_index, TNode<Smi> p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=81&c=19
TorqueStructSlice_Smi_OR_TheHole_MutableReference_Smi_OR_TheHole_0 NewMutableSlice_Smi_OR_TheHole_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset, TNode<IntPtrT> p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=87&c=10
void InitializeFieldsFromIterator_Smi_OR_TheHole_ParameterMapIterator_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_Smi_OR_TheHole_MutableReference_Smi_OR_TheHole_0 p_target, TorqueStructParameterMapIterator_0 p_originIterator);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=87&c=10
void InitializeFieldsFromIterator_Smi_OR_TheHole_ConstantIterator_TheHole_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_Smi_OR_TheHole_MutableReference_Smi_OR_TheHole_0 p_target, TorqueStructConstantIterator_TheHole_0 p_originIterator);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_ARGUMENTS_TQ_CSA_H_
