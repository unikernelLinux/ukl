#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_REGEXP_REPLACE_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_REGEXP_REPLACE_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-replace.tq?l=22&c=1
void RegExpReplaceCallableNoExplicitCaptures_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArray> p_matchesElements, TNode<IntPtrT> p_matchesLength, TNode<String> p_string, TNode<JSReceiver> p_replaceFn);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-replace.tq?l=64&c=1
void RegExpReplaceCallableWithExplicitCaptures_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArray> p_matchesElements, TNode<IntPtrT> p_matchesLength, TNode<JSReceiver> p_replaceFn);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-replace.tq?l=83&c=1
TNode<String> RegExpReplaceFastGlobalCallable_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSRegExp> p_regexp, TNode<String> p_string, TNode<JSReceiver> p_replaceFn);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-replace.tq?l=122&c=1
TNode<String> RegExpReplaceFastString_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSRegExp> p_regexp, TNode<String> p_string, TNode<String> p_replaceString);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-replace.tq?l=181&c=10
TNode<BoolT> Is_FastJSRegExp_FastJSRegExp_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSRegExp> p_o);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_REGEXP_REPLACE_TQ_CSA_H_
