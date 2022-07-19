#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_CAST_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_CAST_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=12&c=1
TNode<BoolT> IsAccessorInfo_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=17&c=1
TNode<BoolT> IsAccessorPair_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=22&c=1
TNode<BoolT> IsAllocationSite_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=27&c=1
TNode<BoolT> IsCell_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=32&c=1
TNode<BoolT> IsCode_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=37&c=1
TNode<BoolT> IsCodeDataContainer_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=42&c=1
TNode<BoolT> IsContext_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=47&c=1
TNode<BoolT> IsCoverageInfo_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=52&c=1
TNode<BoolT> IsDebugInfo_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=57&c=1
TNode<BoolT> IsFixedDoubleArray_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=62&c=1
TNode<BoolT> IsFeedbackCell_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=67&c=1
TNode<BoolT> IsFeedbackVector_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=72&c=1
TNode<BoolT> IsHeapNumber_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=77&c=1
TNode<BoolT> IsNativeContext_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=82&c=1
TNode<BoolT> IsNumber_0(compiler::CodeAssemblerState* state_, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=87&c=1
TNode<BoolT> IsPrivateSymbol_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=92&c=1
TNode<BoolT> IsPromiseCapability_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=97&c=1
TNode<BoolT> IsPromiseFulfillReactionJobTask_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=102&c=1
TNode<BoolT> IsPromiseReaction_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=107&c=1
TNode<BoolT> IsPromiseRejectReactionJobTask_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=112&c=1
TNode<BoolT> IsSharedFunctionInfo_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=117&c=1
TNode<BoolT> IsSymbol_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=155&c=1
TNode<Oddball> Cast_Undefined_0(compiler::CodeAssemblerState* state_, TNode<MaybeObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=167&c=1
TNode<Smi> Cast_Smi_0(compiler::CodeAssemblerState* state_, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=172&c=1
TNode<Smi> Cast_PositiveSmi_0(compiler::CodeAssemblerState* state_, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=177&c=1
TNode<Smi> Cast_Zero_0(compiler::CodeAssemblerState* state_, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=182&c=1
TNode<Number> Cast_Number_0(compiler::CodeAssemblerState* state_, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=197&c=1
TNode<Oddball> Cast_Undefined_1(compiler::CodeAssemblerState* state_, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=203&c=1
TNode<Numeric> Cast_Numeric_0(compiler::CodeAssemblerState* state_, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=217&c=1
TNode<Oddball> Cast_TheHole_0(compiler::CodeAssemblerState* state_, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=222&c=1
TNode<Oddball> Cast_TheHole_1(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=227&c=1
TNode<Oddball> Cast_True_0(compiler::CodeAssemblerState* state_, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=232&c=1
TNode<Oddball> Cast_True_1(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=237&c=1
TNode<Oddball> Cast_False_0(compiler::CodeAssemblerState* state_, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=242&c=1
TNode<Oddball> Cast_False_1(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=247&c=1
TNode<Oddball> Cast_Boolean_0(compiler::CodeAssemblerState* state_, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=261&c=1
TNode<Oddball> Cast_Boolean_1(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=269&c=1
TNode<Object> Cast_JSPrimitive_0(compiler::CodeAssemblerState* state_, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=295&c=1
TNode<Object> Cast_JSAny_0(compiler::CodeAssemblerState* state_, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=309&c=1
TNode<Object> Cast_JSReceiver_OR_Undefined_OR_Null_OR_False_OR_True_OR_Symbol_OR_String_OR_BigInt_OR_HeapNumber_OR_Smi_OR_TheHole_0(compiler::CodeAssemblerState* state_, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=323&c=1
TNode<Object> Cast_HeapNumber_OR_Smi_OR_TheHole_0(compiler::CodeAssemblerState* state_, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=337&c=1
TNode<Object> Cast_Context_OR_Undefined_OR_Zero_0(compiler::CodeAssemblerState* state_, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=358&c=1
TNode<HeapObject> Cast_HeapObject_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label__CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=363&c=1
TNode<Oddball> Cast_Null_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=369&c=1
TNode<Oddball> Cast_Undefined_2(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=375&c=1
TNode<FixedArray> Cast_EmptyFixedArray_0(compiler::CodeAssemblerState* state_, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=380&c=1
TNode<FixedArray> Cast_EmptyFixedArray_1(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=386&c=1
TNode<FixedArrayBase> Cast_FixedDoubleArray_OR_EmptyFixedArray_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=401&c=1
TNode<JSReceiver> Cast_Callable_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=406&c=1
TNode<HeapObject> Cast_Undefined_OR_CallableApiObject_OR_CallableJSProxy_OR_JSWrappedFunction_OR_JSBoundFunction_OR_JSFunction_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=412&c=1
TNode<HeapObject> Cast_Undefined_OR_JSFunction_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=419&c=1
TNode<Symbol> Cast_PublicSymbol_0(compiler::CodeAssemblerState* state_, TNode<Symbol> p_s, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=423&c=1
TNode<Symbol> Cast_PrivateSymbol_0(compiler::CodeAssemblerState* state_, TNode<Symbol> p_s, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=427&c=1
TNode<Symbol> Cast_PublicSymbol_1(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=431&c=1
TNode<Symbol> Cast_PrivateSymbol_1(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=436&c=1
TNode<String> Cast_DirectString_0(compiler::CodeAssemblerState* state_, TNode<String> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=441&c=1
TNode<JSReceiver> Cast_Constructor_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=446&c=1
TNode<JSFunction> Cast_JSFunctionWithPrototypeSlot_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=451&c=1
TNode<BigInt> Cast_BigInt_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=456&c=1
TNode<JSArray> Cast_JSRegExpResult_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=462&c=1
TNode<JSArgumentsObject> Cast_JSSloppyArgumentsObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=473&c=1
TNode<JSArgumentsObject> Cast_JSStrictArgumentsObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=481&c=1
TNode<JSArgumentsObject> Cast_JSArgumentsObjectWithLength_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=497&c=1
TNode<JSRegExp> Cast_FastJSRegExp_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=509&c=1
TNode<JSArray> Cast_FastJSArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=527&c=1
TNode<JSArray> Cast_FastJSArrayForRead_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=546&c=1
TNode<JSArray> Cast_FastJSArrayForCopy_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=555&c=1
TNode<JSArray> Cast_FastJSArrayForConcat_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=563&c=1
TNode<JSArray> Cast_FastJSArrayWithNoCustomIteration_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=571&c=1
TNode<JSArray> Cast_FastJSArrayForReadWithNoCustomIteration_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=581&c=1
TNode<SeqOneByteString> Cast_SeqOneByteString_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=586&c=1
TNode<SeqOneByteString> Cast_SeqOneByteString_1(compiler::CodeAssemblerState* state_, TNode<String> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=596&c=1
TNode<SeqTwoByteString> Cast_SeqTwoByteString_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=601&c=1
TNode<SeqTwoByteString> Cast_SeqTwoByteString_1(compiler::CodeAssemblerState* state_, TNode<String> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=611&c=1
TNode<ThinString> Cast_ThinString_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=616&c=1
TNode<ThinString> Cast_ThinString_1(compiler::CodeAssemblerState* state_, TNode<String> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=624&c=1
TNode<ConsString> Cast_ConsString_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=629&c=1
TNode<ConsString> Cast_ConsString_1(compiler::CodeAssemblerState* state_, TNode<String> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=637&c=1
TNode<SlicedString> Cast_SlicedString_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=642&c=1
TNode<SlicedString> Cast_SlicedString_1(compiler::CodeAssemblerState* state_, TNode<String> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=651&c=1
TNode<ExternalOneByteString> Cast_ExternalOneByteString_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=657&c=1
TNode<ExternalOneByteString> Cast_ExternalOneByteString_1(compiler::CodeAssemblerState* state_, TNode<String> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=668&c=1
TNode<ExternalTwoByteString> Cast_ExternalTwoByteString_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=674&c=1
TNode<ExternalTwoByteString> Cast_ExternalTwoByteString_1(compiler::CodeAssemblerState* state_, TNode<String> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=685&c=1
TNode<HeapObject> Cast_JSReceiver_OR_Null_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=700&c=1
TNode<Object> Cast_Smi_OR_PromiseReaction_0(compiler::CodeAssemblerState* state_, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=714&c=1
TNode<HeapObject> Cast_String_OR_CallableApiObject_OR_CallableJSProxy_OR_JSWrappedFunction_OR_JSBoundFunction_OR_JSFunction_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=729&c=1
TNode<Object> Cast_Zero_OR_PromiseReaction_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=744&c=1
TNode<JSFunctionOrBoundFunctionOrWrappedFunction> Cast_JSWrappedFunction_OR_JSBoundFunction_OR_JSFunction_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=762&c=1
TNode<HeapObject> Cast_Undefined_OR_FixedArray_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=777&c=1
TNode<HeapObject> Cast_Null_OR_JSProxy_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=807&c=1
TNode<RegExpMatchInfo> UnsafeCast_RegExpMatchInfo_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=825&c=1
TNode<Object> Cast_Object_0(compiler::CodeAssemblerState* state_, TNode<Object> p_o, compiler::CodeAssemblerLabel* label__CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=14&c=10
TNode<BoolT> Is_AccessorInfo_HeapObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=19&c=10
TNode<BoolT> Is_AccessorPair_HeapObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=24&c=10
TNode<BoolT> Is_AllocationSite_HeapObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=29&c=10
TNode<BoolT> Is_Cell_HeapObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=34&c=10
TNode<BoolT> Is_Code_HeapObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=39&c=10
TNode<BoolT> Is_CodeDataContainer_HeapObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=44&c=10
TNode<BoolT> Is_Context_HeapObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=49&c=10
TNode<BoolT> Is_CoverageInfo_HeapObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=54&c=10
TNode<BoolT> Is_DebugInfo_HeapObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=59&c=10
TNode<BoolT> Is_FixedDoubleArray_HeapObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=64&c=10
TNode<BoolT> Is_FeedbackCell_HeapObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=69&c=10
TNode<BoolT> Is_FeedbackVector_HeapObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=74&c=10
TNode<BoolT> Is_HeapNumber_HeapObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=79&c=10
TNode<BoolT> Is_NativeContext_HeapObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=84&c=10
TNode<BoolT> Is_Number_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=89&c=10
TNode<BoolT> Is_PrivateSymbol_HeapObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=94&c=10
TNode<BoolT> Is_PromiseCapability_HeapObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=99&c=10
TNode<BoolT> Is_PromiseFulfillReactionJobTask_HeapObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=104&c=10
TNode<BoolT> Is_PromiseReaction_HeapObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=109&c=10
TNode<BoolT> Is_PromiseRejectReactionJobTask_HeapObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=114&c=10
TNode<BoolT> Is_SharedFunctionInfo_HeapObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=119&c=10
TNode<BoolT> Is_Symbol_HeapObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=340&c=5
TNode<Context> Cast_Context_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=513&c=8
TNode<BoolT> Is_JSArray_HeapObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=735&c=5
TNode<PromiseReaction> Cast_PromiseReaction_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=747&c=5
TNode<JSFunction> Cast_JSFunction_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=750&c=5
TNode<JSBoundFunction> Cast_JSBoundFunction_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=753&c=5
TNode<JSWrappedFunction> Cast_JSWrappedFunction_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=809&c=10
TNode<BoolT> Is_FixedArray_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_FeedbackVector_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=793&c=3
TNode<FeedbackVector> Cast_FeedbackVector_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_JSAny_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_SeqTwoByteString_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=793&c=3
TNode<SeqTwoByteString> Cast_SeqTwoByteString_2(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_SeqOneByteString_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=793&c=3
TNode<SeqOneByteString> Cast_SeqOneByteString_2(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_Smi_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=793&c=3
TNode<WasmInternalFunction> Cast_WasmInternalFunction_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_JSArray_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_NumberDictionary_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_FixedDoubleArray_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_JSTypedArray_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_HeapNumber_OR_Smi_OR_TheHole_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_JSReceiver_OR_Undefined_OR_Null_OR_False_OR_True_OR_Symbol_OR_String_OR_BigInt_OR_HeapNumber_OR_Smi_OR_TheHole_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_HeapObject_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=793&c=3
TNode<JSArray> Cast_FastJSArrayForReadWithNoCustomIteration_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_Boolean_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_JSReceiver_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_JSPrimitiveWrapper_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_Map_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_JSFinalizationRegistry_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_ContextOrFrameType_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=146&c=5
TNode<MaybeObject> Cast_WeakHeapObject_0(compiler::CodeAssemblerState* state_, TNode<MaybeObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=150&c=14
TNode<AccessorInfo> Cast_AccessorInfo_2(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_JSBoundFunction_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=793&c=3
TNode<AllocationSite> Cast_AllocationSite_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_CoverageInfo_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_PromiseFulfillReactionJobTask_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_PromiseRejectReactionJobTask_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_Zero_OR_PromiseReaction_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_Constructor_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_NativeContext_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_JSRegExp_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_FastJSRegExp_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_JSRegExpResult_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_String_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_PositiveSmi_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_Symbol_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_Numeric_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_JSWeakRef_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=793&c=3
TNode<JSArgumentsObject> Cast_JSArgumentsObjectWithLength_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=793&c=3
TNode<ExportedSubClassBase> Cast_ExportedSubClassBase_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=793&c=3
TNode<ExportedSubClass> Cast_ExportedSubClass_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=793&c=3
TNode<ExportedSubClass2> Cast_ExportedSubClass2_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_JSObject_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_HeapNumber_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=793&c=3
TNode<NumberDictionary> Cast_NumberDictionary_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=793&c=3
TNode<FixedDoubleArray> Cast_FixedDoubleArray_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_FixedDoubleArray_OR_EmptyFixedArray_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=793&c=3
TNode<JSPrimitiveWrapper> Cast_JSPrimitiveWrapper_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=793&c=3
TNode<Map> Cast_Map_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=793&c=3
TNode<CoverageInfo> Cast_CoverageInfo_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=793&c=3
TNode<PromiseFulfillReactionJobTask> Cast_PromiseFulfillReactionJobTask_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=793&c=3
TNode<PromiseRejectReactionJobTask> Cast_PromiseRejectReactionJobTask_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_PromiseCapability_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=793&c=3
TNode<PromiseCapability> Cast_PromiseCapability_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=793&c=3
TNode<NativeContext> Cast_NativeContext_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_Null_OR_JSProxy_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=793&c=3
TNode<HeapObject> Cast_Null_OR_JSProxy_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=793&c=3
TNode<JSObject> Cast_JSObject_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=793&c=3
TNode<HeapNumber> Cast_HeapNumber_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_ScopeInfo_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=793&c=3
TNode<ScopeInfo> Cast_ScopeInfo_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=793&c=3
TNode<FixedArrayBase> Cast_FixedDoubleArray_OR_EmptyFixedArray_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_JSFunction_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_Undefined_OR_FixedArray_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=793&c=3
TNode<HeapObject> Cast_Undefined_OR_FixedArray_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=799&c=10
TNode<BoolT> Is_Undefined_OR_CallableApiObject_OR_CallableJSProxy_OR_JSWrappedFunction_OR_JSBoundFunction_OR_JSFunction_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_CAST_TQ_CSA_H_
