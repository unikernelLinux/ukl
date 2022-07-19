#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_REGEXP_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_REGEXP_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=12&c=1
TNode<BoolT> IsFastRegExpForMatch_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=19&c=1
TNode<BoolT> IsFastRegExpForSearch_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=26&c=1
TNode<BoolT> IsFastRegExpStrict_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=34&c=1
TNode<BoolT> IsFastRegExpPermissive_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=40&c=1
TNode<Object> RegExpExec_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_receiver, TNode<String> p_string);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=84&c=1
TNode<RegExpMatchInfo> RegExpPrototypeExecBodyWithoutResult_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSRegExp> p_regexp, TNode<String> p_string, TNode<Number> p_regexpLastIndex, bool p_isFastPath, compiler::CodeAssemblerLabel* label_IfDidNotMatch);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=136&c=1
TNode<RegExpMatchInfo> RegExpPrototypeExecBodyWithoutResultFast_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSRegExp> p_regexp, TNode<String> p_string, compiler::CodeAssemblerLabel* label_IfDidNotMatch);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=145&c=1
TNode<RegExpMatchInfo> RegExpPrototypeExecBodyWithoutResultFast_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSRegExp> p_regexp, TNode<String> p_string, TNode<Number> p_lastIndex, compiler::CodeAssemblerLabel* label_IfDidNotMatch);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=155&c=1
TNode<Object> RegExpPrototypeExecBody_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_receiver, TNode<String> p_string, bool p_isFastPath);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=172&c=1
TNode<JSFunction> LoadRegExpFunction_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_nativeContext);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=178&c=1
TNode<BoolT> HasInitialRegExpMap_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=185&c=1
TNode<BoolT> IsReceiverInitialRegExpPrototype_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=206&c=1
int31_t kNoCounterFlagGetter_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=216&c=1
TNode<Object> FlagGetter_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, JSRegExp::Flag p_flag, int31_t p_counter, const char* p_methodName);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=303&c=1
TNode<String> FastFlagsGetter_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSRegExp> p_receiver);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=308&c=1
TNode<String> SlowFlagsGetter_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=336&c=1
TNode<Object> LoadLastIndex_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_regexp, bool p_isFastPath);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=343&c=1
TNode<Number> LoadLastIndexAsLength_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSRegExp> p_regexp, bool p_isFastPath);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=363&c=1
void StoreLastIndex_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_regexp, TNode<Number> p_value, bool p_isFastPath);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=390&c=1
TNode<BoolT> IsRegExp_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_obj);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=421&c=1
TNode<Object> RegExpCreate_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<NativeContext> p_nativeContext, TNode<Object> p_maybeString, TNode<String> p_flags);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=429&c=1
TNode<Object> RegExpCreate_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Map> p_initialMap, TNode<Object> p_maybeString, TNode<String> p_flags);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=323&c=22
TNode<JSRegExp> Cast_FastJSRegExp_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=349&c=12
TNode<Smi> UnsafeCast_PositiveSmi_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=397&c=12
TNode<BoolT> Is_JSRegExp_JSReceiver_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_o);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_REGEXP_TQ_CSA_H_
