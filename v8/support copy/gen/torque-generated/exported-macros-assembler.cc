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
#include "torque-generated/exported-macros-assembler.h"
#include "torque-generated/src/builtins/aggregate-error-tq-csa.h"
#include "torque-generated/src/builtins/array-at-tq-csa.h"
#include "torque-generated/src/builtins/array-concat-tq-csa.h"
#include "torque-generated/src/builtins/array-copywithin-tq-csa.h"
#include "torque-generated/src/builtins/array-every-tq-csa.h"
#include "torque-generated/src/builtins/array-filter-tq-csa.h"
#include "torque-generated/src/builtins/array-find-tq-csa.h"
#include "torque-generated/src/builtins/array-findindex-tq-csa.h"
#include "torque-generated/src/builtins/array-findlast-tq-csa.h"
#include "torque-generated/src/builtins/array-findlastindex-tq-csa.h"
#include "torque-generated/src/builtins/array-foreach-tq-csa.h"
#include "torque-generated/src/builtins/array-from-tq-csa.h"
#include "torque-generated/src/builtins/array-isarray-tq-csa.h"
#include "torque-generated/src/builtins/array-join-tq-csa.h"
#include "torque-generated/src/builtins/array-lastindexof-tq-csa.h"
#include "torque-generated/src/builtins/array-map-tq-csa.h"
#include "torque-generated/src/builtins/array-of-tq-csa.h"
#include "torque-generated/src/builtins/array-reduce-right-tq-csa.h"
#include "torque-generated/src/builtins/array-reduce-tq-csa.h"
#include "torque-generated/src/builtins/array-reverse-tq-csa.h"
#include "torque-generated/src/builtins/array-shift-tq-csa.h"
#include "torque-generated/src/builtins/array-slice-tq-csa.h"
#include "torque-generated/src/builtins/array-some-tq-csa.h"
#include "torque-generated/src/builtins/array-splice-tq-csa.h"
#include "torque-generated/src/builtins/array-unshift-tq-csa.h"
#include "torque-generated/src/builtins/array-tq-csa.h"
#include "torque-generated/src/builtins/arraybuffer-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/boolean-tq-csa.h"
#include "torque-generated/src/builtins/builtins-bigint-tq-csa.h"
#include "torque-generated/src/builtins/builtins-string-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/collections-tq-csa.h"
#include "torque-generated/src/builtins/constructor-tq-csa.h"
#include "torque-generated/src/builtins/conversion-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/console-tq-csa.h"
#include "torque-generated/src/builtins/data-view-tq-csa.h"
#include "torque-generated/src/builtins/finalization-registry-tq-csa.h"
#include "torque-generated/src/builtins/frames-tq-csa.h"
#include "torque-generated/src/builtins/frame-arguments-tq-csa.h"
#include "torque-generated/src/builtins/function-tq-csa.h"
#include "torque-generated/src/builtins/growable-fixed-array-tq-csa.h"
#include "torque-generated/src/builtins/ic-callable-tq-csa.h"
#include "torque-generated/src/builtins/ic-tq-csa.h"
#include "torque-generated/src/builtins/internal-coverage-tq-csa.h"
#include "torque-generated/src/builtins/internal-tq-csa.h"
#include "torque-generated/src/builtins/iterator-tq-csa.h"
#include "torque-generated/src/builtins/math-tq-csa.h"
#include "torque-generated/src/builtins/number-tq-csa.h"
#include "torque-generated/src/builtins/object-fromentries-tq-csa.h"
#include "torque-generated/src/builtins/object-tq-csa.h"
#include "torque-generated/src/builtins/promise-abstract-operations-tq-csa.h"
#include "torque-generated/src/builtins/promise-all-tq-csa.h"
#include "torque-generated/src/builtins/promise-all-element-closure-tq-csa.h"
#include "torque-generated/src/builtins/promise-any-tq-csa.h"
#include "torque-generated/src/builtins/promise-constructor-tq-csa.h"
#include "torque-generated/src/builtins/promise-finally-tq-csa.h"
#include "torque-generated/src/builtins/promise-misc-tq-csa.h"
#include "torque-generated/src/builtins/promise-race-tq-csa.h"
#include "torque-generated/src/builtins/promise-reaction-job-tq-csa.h"
#include "torque-generated/src/builtins/promise-resolve-tq-csa.h"
#include "torque-generated/src/builtins/promise-then-tq-csa.h"
#include "torque-generated/src/builtins/promise-jobs-tq-csa.h"
#include "torque-generated/src/builtins/proxy-constructor-tq-csa.h"
#include "torque-generated/src/builtins/proxy-delete-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-get-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-get-prototype-of-tq-csa.h"
#include "torque-generated/src/builtins/proxy-has-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-is-extensible-tq-csa.h"
#include "torque-generated/src/builtins/proxy-prevent-extensions-tq-csa.h"
#include "torque-generated/src/builtins/proxy-revocable-tq-csa.h"
#include "torque-generated/src/builtins/proxy-revoke-tq-csa.h"
#include "torque-generated/src/builtins/proxy-set-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-set-prototype-of-tq-csa.h"
#include "torque-generated/src/builtins/proxy-tq-csa.h"
#include "torque-generated/src/builtins/reflect-tq-csa.h"
#include "torque-generated/src/builtins/regexp-exec-tq-csa.h"
#include "torque-generated/src/builtins/regexp-match-all-tq-csa.h"
#include "torque-generated/src/builtins/regexp-match-tq-csa.h"
#include "torque-generated/src/builtins/regexp-replace-tq-csa.h"
#include "torque-generated/src/builtins/regexp-search-tq-csa.h"
#include "torque-generated/src/builtins/regexp-source-tq-csa.h"
#include "torque-generated/src/builtins/regexp-split-tq-csa.h"
#include "torque-generated/src/builtins/regexp-test-tq-csa.h"
#include "torque-generated/src/builtins/regexp-tq-csa.h"
#include "torque-generated/src/builtins/string-at-tq-csa.h"
#include "torque-generated/src/builtins/string-endswith-tq-csa.h"
#include "torque-generated/src/builtins/string-html-tq-csa.h"
#include "torque-generated/src/builtins/string-includes-tq-csa.h"
#include "torque-generated/src/builtins/string-indexof-tq-csa.h"
#include "torque-generated/src/builtins/string-iterator-tq-csa.h"
#include "torque-generated/src/builtins/string-match-search-tq-csa.h"
#include "torque-generated/src/builtins/string-pad-tq-csa.h"
#include "torque-generated/src/builtins/string-repeat-tq-csa.h"
#include "torque-generated/src/builtins/string-replaceall-tq-csa.h"
#include "torque-generated/src/builtins/string-slice-tq-csa.h"
#include "torque-generated/src/builtins/string-startswith-tq-csa.h"
#include "torque-generated/src/builtins/string-substr-tq-csa.h"
#include "torque-generated/src/builtins/string-substring-tq-csa.h"
#include "torque-generated/src/builtins/string-trim-tq-csa.h"
#include "torque-generated/src/builtins/symbol-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-at-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-createtypedarray-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-every-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-entries-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-filter-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-find-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-findindex-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-findlast-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-findlastindex-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-foreach-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-from-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-keys-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-of-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-reduce-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-reduceright-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-set-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-slice-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-some-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-sort-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-subarray-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-values-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-tq-csa.h"
#include "torque-generated/src/builtins/weak-ref-tq-csa.h"
#include "torque-generated/src/ic/handler-configuration-tq-csa.h"
#include "torque-generated/src/objects/allocation-site-tq-csa.h"
#include "torque-generated/src/objects/api-callbacks-tq-csa.h"
#include "torque-generated/src/objects/arguments-tq-csa.h"
#include "torque-generated/src/objects/bigint-tq-csa.h"
#include "torque-generated/src/objects/call-site-info-tq-csa.h"
#include "torque-generated/src/objects/cell-tq-csa.h"
#include "torque-generated/src/objects/code-tq-csa.h"
#include "torque-generated/src/objects/contexts-tq-csa.h"
#include "torque-generated/src/objects/data-handler-tq-csa.h"
#include "torque-generated/src/objects/debug-objects-tq-csa.h"
#include "torque-generated/src/objects/descriptor-array-tq-csa.h"
#include "torque-generated/src/objects/embedder-data-array-tq-csa.h"
#include "torque-generated/src/objects/feedback-cell-tq-csa.h"
#include "torque-generated/src/objects/feedback-vector-tq-csa.h"
#include "torque-generated/src/objects/fixed-array-tq-csa.h"
#include "torque-generated/src/objects/foreign-tq-csa.h"
#include "torque-generated/src/objects/free-space-tq-csa.h"
#include "torque-generated/src/objects/heap-number-tq-csa.h"
#include "torque-generated/src/objects/heap-object-tq-csa.h"
#include "torque-generated/src/objects/js-array-buffer-tq-csa.h"
#include "torque-generated/src/objects/js-array-tq-csa.h"
#include "torque-generated/src/objects/js-collection-iterator-tq-csa.h"
#include "torque-generated/src/objects/js-collection-tq-csa.h"
#include "torque-generated/src/objects/js-function-tq-csa.h"
#include "torque-generated/src/objects/js-generator-tq-csa.h"
#include "torque-generated/src/objects/js-objects-tq-csa.h"
#include "torque-generated/src/objects/js-promise-tq-csa.h"
#include "torque-generated/src/objects/js-proxy-tq-csa.h"
#include "torque-generated/src/objects/js-regexp-string-iterator-tq-csa.h"
#include "torque-generated/src/objects/js-regexp-tq-csa.h"
#include "torque-generated/src/objects/js-shadow-realms-tq-csa.h"
#include "torque-generated/src/objects/js-struct-tq-csa.h"
#include "torque-generated/src/objects/js-temporal-objects-tq-csa.h"
#include "torque-generated/src/objects/js-weak-refs-tq-csa.h"
#include "torque-generated/src/objects/literal-objects-tq-csa.h"
#include "torque-generated/src/objects/map-tq-csa.h"
#include "torque-generated/src/objects/megadom-handler-tq-csa.h"
#include "torque-generated/src/objects/microtask-tq-csa.h"
#include "torque-generated/src/objects/module-tq-csa.h"
#include "torque-generated/src/objects/name-tq-csa.h"
#include "torque-generated/src/objects/oddball-tq-csa.h"
#include "torque-generated/src/objects/ordered-hash-table-tq-csa.h"
#include "torque-generated/src/objects/primitive-heap-object-tq-csa.h"
#include "torque-generated/src/objects/promise-tq-csa.h"
#include "torque-generated/src/objects/property-array-tq-csa.h"
#include "torque-generated/src/objects/property-cell-tq-csa.h"
#include "torque-generated/src/objects/property-descriptor-object-tq-csa.h"
#include "torque-generated/src/objects/prototype-info-tq-csa.h"
#include "torque-generated/src/objects/regexp-match-info-tq-csa.h"
#include "torque-generated/src/objects/scope-info-tq-csa.h"
#include "torque-generated/src/objects/script-tq-csa.h"
#include "torque-generated/src/objects/shared-function-info-tq-csa.h"
#include "torque-generated/src/objects/source-text-module-tq-csa.h"
#include "torque-generated/src/objects/string-tq-csa.h"
#include "torque-generated/src/objects/struct-tq-csa.h"
#include "torque-generated/src/objects/swiss-hash-table-helpers-tq-csa.h"
#include "torque-generated/src/objects/swiss-name-dictionary-tq-csa.h"
#include "torque-generated/src/objects/synthetic-module-tq-csa.h"
#include "torque-generated/src/objects/template-objects-tq-csa.h"
#include "torque-generated/src/objects/templates-tq-csa.h"
#include "torque-generated/src/objects/torque-defined-classes-tq-csa.h"
#include "torque-generated/src/objects/turbofan-types-tq-csa.h"
#include "torque-generated/test/torque/test-torque-tq-csa.h"
#include "torque-generated/third_party/v8/builtins/array-sort-tq-csa.h"
#include "torque-generated/src/objects/intl-objects-tq-csa.h"
#include "torque-generated/src/objects/js-break-iterator-tq-csa.h"
#include "torque-generated/src/objects/js-collator-tq-csa.h"
#include "torque-generated/src/objects/js-date-time-format-tq-csa.h"
#include "torque-generated/src/objects/js-display-names-tq-csa.h"
#include "torque-generated/src/objects/js-list-format-tq-csa.h"
#include "torque-generated/src/objects/js-locale-tq-csa.h"
#include "torque-generated/src/objects/js-number-format-tq-csa.h"
#include "torque-generated/src/objects/js-plural-rules-tq-csa.h"
#include "torque-generated/src/objects/js-relative-time-format-tq-csa.h"
#include "torque-generated/src/objects/js-segment-iterator-tq-csa.h"
#include "torque-generated/src/objects/js-segmenter-tq-csa.h"
#include "torque-generated/src/objects/js-segments-tq-csa.h"
#include "torque-generated/src/builtins/wasm-tq-csa.h"
#include "torque-generated/src/debug/debug-wasm-objects-tq-csa.h"
#include "torque-generated/src/wasm/wasm-objects-tq-csa.h"
namespace v8 {
namespace internal {
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array.tq?l=62&c=1
void TorqueGeneratedExportedMacrosAssembler::EnsureArrayLengthWritable(TNode<Context> p_context, TNode<Map> p_map, compiler::CodeAssemblerLabel* label_Bailout) {
return EnsureArrayLengthWritable_0(state_, p_context, p_map, label_Bailout);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=640&c=1
TNode<Number> TorqueGeneratedExportedMacrosAssembler::ToInteger_Inline(TNode<Context> p_context, TNode<Object> p_input) {
return ToInteger_Inline_0(state_, p_context, p_input);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1449&c=1
TNode<Object> TorqueGeneratedExportedMacrosAssembler::RequireObjectCoercible(TNode<Context> p_context, TNode<Object> p_value, const char* p_name) {
return RequireObjectCoercible_0(state_, p_context, p_value, p_name);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1544&c=1
TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::ChangeUintPtrNumberToUintPtr(TNode<Number> p_value) {
return ChangeUintPtrNumberToUintPtr_0(state_, p_value);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1554&c=1
TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::ChangeSafeIntegerNumberToUintPtr(TNode<Number> p_value, compiler::CodeAssemblerLabel* label_IfUIntPtrOverflow) {
return ChangeSafeIntegerNumberToUintPtr_0(state_, p_value, label_IfUIntPtrOverflow);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1578&c=1
TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::ToIndex(TNode<Context> p_context, TNode<Object> p_value, compiler::CodeAssemblerLabel* label_IfRangeError) {
return ToIndex_0(state_, p_context, p_value, label_IfRangeError);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1649&c=1
TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::ConvertToRelativeIndex(TNode<Context> p_context, TNode<Object> p_index, TNode<UintPtrT> p_length) {
return ConvertToRelativeIndex_1(state_, p_context, p_index, p_length);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1658&c=1
TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::ConvertToRelativeIndex(TNode<Number> p_indexNumber, TNode<UintPtrT> p_length) {
return ConvertToRelativeIndex_2(state_, p_indexNumber, p_length);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1696&c=1
TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::ClampToIndexRange(TNode<Context> p_context, TNode<Object> p_index, TNode<UintPtrT> p_limit) {
return ClampToIndexRange_0(state_, p_context, p_index, p_limit);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1705&c=1
TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::ClampToIndexRange(TNode<Number> p_indexNumber, TNode<UintPtrT> p_limit) {
return ClampToIndexRange_1(state_, p_indexNumber, p_limit);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1742&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsFastJSArray(TNode<Object> p_o, TNode<Context> p_context) {
return IsFastJSArray_0(state_, p_o, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1750&c=1
void TorqueGeneratedExportedMacrosAssembler::BranchIfFastJSArray(TNode<Object> p_o, TNode<Context> p_context, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
return BranchIfFastJSArray_0(state_, p_o, p_context, label_True, label_False);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1760&c=1
void TorqueGeneratedExportedMacrosAssembler::BranchIfFastJSArrayForRead(TNode<Object> p_o, TNode<Context> p_context, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
return BranchIfFastJSArrayForRead_0(state_, p_o, p_context, label_True, label_False);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1773&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsFastJSArrayWithNoCustomIteration(TNode<Context> p_context, TNode<Object> p_o) {
return IsFastJSArrayWithNoCustomIteration_0(state_, p_context, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1778&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsFastJSArrayForReadWithNoCustomIteration(TNode<Context> p_context, TNode<Object> p_o) {
return IsFastJSArrayForReadWithNoCustomIteration_0(state_, p_context, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-string.tq?l=13&c=1
TNode<String> TorqueGeneratedExportedMacrosAssembler::ToStringImpl(TNode<Context> p_context, TNode<Object> p_o) {
return ToStringImpl_0(state_, p_context, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=12&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsAccessorInfo(TNode<HeapObject> p_o) {
return IsAccessorInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=17&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsAccessorPair(TNode<HeapObject> p_o) {
return IsAccessorPair_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=22&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsAllocationSite(TNode<HeapObject> p_o) {
return IsAllocationSite_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=27&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsCell(TNode<HeapObject> p_o) {
return IsCell_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=32&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsCode(TNode<HeapObject> p_o) {
return IsCode_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=37&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsCodeDataContainer(TNode<HeapObject> p_o) {
return IsCodeDataContainer_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=42&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsContext(TNode<HeapObject> p_o) {
return IsContext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=47&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsCoverageInfo(TNode<HeapObject> p_o) {
return IsCoverageInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=52&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsDebugInfo(TNode<HeapObject> p_o) {
return IsDebugInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=57&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsFixedDoubleArray(TNode<HeapObject> p_o) {
return IsFixedDoubleArray_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=62&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsFeedbackCell(TNode<HeapObject> p_o) {
return IsFeedbackCell_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=67&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsFeedbackVector(TNode<HeapObject> p_o) {
return IsFeedbackVector_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=72&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsHeapNumber(TNode<HeapObject> p_o) {
return IsHeapNumber_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=77&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsNativeContext(TNode<HeapObject> p_o) {
return IsNativeContext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=82&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsNumber(TNode<Object> p_o) {
return IsNumber_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=87&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsPrivateSymbol(TNode<HeapObject> p_o) {
return IsPrivateSymbol_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=92&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsPromiseCapability(TNode<HeapObject> p_o) {
return IsPromiseCapability_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=97&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsPromiseFulfillReactionJobTask(TNode<HeapObject> p_o) {
return IsPromiseFulfillReactionJobTask_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=102&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsPromiseReaction(TNode<HeapObject> p_o) {
return IsPromiseReaction_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=107&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsPromiseRejectReactionJobTask(TNode<HeapObject> p_o) {
return IsPromiseRejectReactionJobTask_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=112&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsSharedFunctionInfo(TNode<HeapObject> p_o) {
return IsSharedFunctionInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=117&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsSymbol(TNode<HeapObject> p_o) {
return IsSymbol_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/collections.tq?l=8&c=1
TorqueStructKeyValuePair TorqueGeneratedExportedMacrosAssembler::LoadKeyValuePairNoSideEffects(TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_MayHaveSideEffects) {
return LoadKeyValuePairNoSideEffects_0(state_, p_context, p_o, label_MayHaveSideEffects);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/collections.tq?l=42&c=1
TorqueStructKeyValuePair TorqueGeneratedExportedMacrosAssembler::LoadKeyValuePair(TNode<Context> p_context, TNode<Object> p_o) {
return LoadKeyValuePair_0(state_, p_context, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/frames.tq?l=134&c=1
TNode<JSFunction> TorqueGeneratedExportedMacrosAssembler::LoadTargetFromFrame() {
return LoadTargetFromFrame_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic.tq?l=9&c=1
void TorqueGeneratedExportedMacrosAssembler::CollectCallFeedback(TNode<Object> p_maybeTarget, std::function<TNode<Object>()> p_maybeReceiver, TNode<Context> p_context, TNode<HeapObject> p_maybeFeedbackVector, TNode<UintPtrT> p_slotId) {
return CollectCallFeedback_1(state_, p_maybeTarget, p_maybeReceiver, p_context, p_maybeFeedbackVector, p_slotId);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic.tq?l=17&c=1
void TorqueGeneratedExportedMacrosAssembler::CollectInstanceOfFeedback(TNode<Object> p_maybeTarget, TNode<Context> p_context, TNode<HeapObject> p_maybeFeedbackVector, TNode<UintPtrT> p_slotId) {
return CollectInstanceOfFeedback_1(state_, p_maybeTarget, p_context, p_maybeFeedbackVector, p_slotId);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic.tq?l=25&c=1
void TorqueGeneratedExportedMacrosAssembler::CollectConstructFeedback(TNode<Context> p_context, TNode<Object> p_target, TNode<Object> p_newTarget, TNode<HeapObject> p_maybeFeedbackVector, TNode<UintPtrT> p_slotId, UpdateFeedbackMode p_updateFeedbackMode, compiler::CodeAssemblerLabel* label_ConstructGeneric, compiler::CodeAssemblerLabel* label_ConstructArray, compiler::TypedCodeAssemblerVariable<AllocationSite>* label_ConstructArray_parameter_0) {
return CollectConstructFeedback_1(state_, p_context, p_target, p_newTarget, p_maybeFeedbackVector, p_slotId, p_updateFeedbackMode, label_ConstructGeneric, label_ConstructArray, label_ConstructArray_parameter_0);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/internal.tq?l=48&c=1
TNode<Object> TorqueGeneratedExportedMacrosAssembler::ForInNextSlow(TNode<Context> p_context, TNode<UintPtrT> p_slot, TNode<HeapObject> p_receiver, TNode<Object> p_key, TNode<Object> p_cacheType, TNode<HeapObject> p_maybeFeedbackVector, UpdateFeedbackMode p_guaranteedFeedback) {
return ForInNextSlow_0(state_, p_context, p_slot, p_receiver, p_key, p_cacheType, p_maybeFeedbackVector, p_guaranteedFeedback);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator.tq?l=118&c=1
void TorqueGeneratedExportedMacrosAssembler::IteratorCloseOnException(TNode<Context> p_context, TorqueStructIteratorRecord p_iterator) {
return IteratorCloseOnException_0(state_, p_context, p_iterator);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/math.tq?l=118&c=1
TNode<Number> TorqueGeneratedExportedMacrosAssembler::MathPowImpl(TNode<Context> p_context, TNode<Object> p_base, TNode<Object> p_exponent) {
return MathPowImpl_0(state_, p_context, p_base, p_exponent);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/number.tq?l=71&c=1
TNode<String> TorqueGeneratedExportedMacrosAssembler::NumberToStringSmi(TNode<Int32T> p_x, TNode<Int32T> p_radix, compiler::CodeAssemblerLabel* label_Slow) {
return NumberToStringSmi_0(state_, p_x, p_radix, label_Slow);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=283&c=1
TNode<Context> TorqueGeneratedExportedMacrosAssembler::CreatePromiseCapabilitiesExecutorContext(TNode<NativeContext> p_nativeContext, TNode<PromiseCapability> p_capability) {
return CreatePromiseCapabilitiesExecutorContext_0(state_, p_nativeContext, p_capability);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=296&c=1
TNode<PromiseCapability> TorqueGeneratedExportedMacrosAssembler::CreatePromiseCapability(TNode<HeapObject> p_promise, TNode<HeapObject> p_resolve, TNode<HeapObject> p_reject) {
return CreatePromiseCapability_0(state_, p_promise, p_resolve, p_reject);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=314&c=1
TorqueStructPromiseResolvingFunctions TorqueGeneratedExportedMacrosAssembler::CreatePromiseResolvingFunctions(TNode<Context> p_context, TNode<JSPromise> p_promise, TNode<Oddball> p_debugEvent, TNode<NativeContext> p_nativeContext) {
return CreatePromiseResolvingFunctions_0(state_, p_context, p_promise, p_debugEvent, p_nativeContext);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=444&c=1
void TorqueGeneratedExportedMacrosAssembler::PerformPromiseThenImpl(TNode<Context> p_context, TNode<JSPromise> p_promise, TNode<HeapObject> p_onFulfilled, TNode<HeapObject> p_onRejected, TNode<HeapObject> p_resultPromiseOrCapability) {
return PerformPromiseThenImpl_0(state_, p_context, p_promise, p_onFulfilled, p_onRejected, p_resultPromiseOrCapability);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=60&c=1
TNode<Context> TorqueGeneratedExportedMacrosAssembler::CreatePromiseResolvingFunctionsContext(TNode<Context> p_context, TNode<JSPromise> p_promise, TNode<Oddball> p_debugEvent, TNode<NativeContext> p_nativeContext) {
return CreatePromiseResolvingFunctionsContext_0(state_, p_context, p_promise, p_debugEvent, p_nativeContext);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=37&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::PromiseHasHandler(TNode<JSPromise> p_promise) {
return PromiseHasHandler_0(state_, p_promise);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=42&c=1
void TorqueGeneratedExportedMacrosAssembler::PromiseInit(TNode<JSPromise> p_promise) {
return PromiseInit_0(state_, p_promise);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=109&c=1
void TorqueGeneratedExportedMacrosAssembler::RunContextPromiseHookInit(TNode<Context> p_context, TNode<JSPromise> p_promise, TNode<Object> p_parent) {
return RunContextPromiseHookInit_0(state_, p_context, p_promise, p_parent);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=125&c=1
void TorqueGeneratedExportedMacrosAssembler::RunContextPromiseHookResolve(TNode<Context> p_context, TNode<JSPromise> p_promise) {
return RunContextPromiseHookResolve_0(state_, p_context, p_promise);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=137&c=1
void TorqueGeneratedExportedMacrosAssembler::RunContextPromiseHookResolve(TNode<Context> p_context, TNode<JSPromise> p_promise, TNode<Uint32T> p_flags) {
return RunContextPromiseHookResolve_1(state_, p_context, p_promise, p_flags);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=144&c=1
void TorqueGeneratedExportedMacrosAssembler::RunContextPromiseHookBefore(TNode<Context> p_context, TNode<HeapObject> p_promiseOrCapability) {
return RunContextPromiseHookBefore_0(state_, p_context, p_promiseOrCapability);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=156&c=1
void TorqueGeneratedExportedMacrosAssembler::RunContextPromiseHookBefore(TNode<Context> p_context, TNode<HeapObject> p_promiseOrCapability, TNode<Uint32T> p_flags) {
return RunContextPromiseHookBefore_1(state_, p_context, p_promiseOrCapability, p_flags);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=165&c=1
void TorqueGeneratedExportedMacrosAssembler::RunContextPromiseHookAfter(TNode<Context> p_context, TNode<HeapObject> p_promiseOrCapability) {
return RunContextPromiseHookAfter_0(state_, p_context, p_promiseOrCapability);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=177&c=1
void TorqueGeneratedExportedMacrosAssembler::RunContextPromiseHookAfter(TNode<Context> p_context, TNode<HeapObject> p_promiseOrCapability, TNode<Uint32T> p_flags) {
return RunContextPromiseHookAfter_1(state_, p_context, p_promiseOrCapability, p_flags);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=240&c=1
TNode<JSPromise> TorqueGeneratedExportedMacrosAssembler::NewJSPromise(TNode<Context> p_context, TNode<Object> p_parent) {
return NewJSPromise_0(state_, p_context, p_parent);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=251&c=1
TNode<JSPromise> TorqueGeneratedExportedMacrosAssembler::NewJSPromise(TNode<Context> p_context) {
return NewJSPromise_1(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=258&c=1
TNode<JSPromise> TorqueGeneratedExportedMacrosAssembler::NewJSPromise(TNode<Context> p_context, Promise::PromiseState p_status, TNode<Object> p_result) {
return NewJSPromise_2(state_, p_context, p_status, p_result);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-exec.tq?l=9&c=1
TNode<Object> TorqueGeneratedExportedMacrosAssembler::RegExpPrototypeExecBodyFast(TNode<Context> p_context, TNode<JSReceiver> p_receiver, TNode<String> p_string) {
return RegExpPrototypeExecBodyFast_0(state_, p_context, p_receiver, p_string);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match-all.tq?l=13&c=1
TNode<Object> TorqueGeneratedExportedMacrosAssembler::RegExpPrototypeMatchAllImpl(TNode<Context> p_context, TNode<NativeContext> p_nativeContext, TNode<Object> p_receiver, TNode<Object> p_string) {
return RegExpPrototypeMatchAllImpl_0(state_, p_context, p_nativeContext, p_receiver, p_string);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=34&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsFastRegExpPermissive(TNode<Context> p_context, TNode<HeapObject> p_o) {
return IsFastRegExpPermissive_0(state_, p_context, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=40&c=1
TNode<Object> TorqueGeneratedExportedMacrosAssembler::RegExpExec(TNode<Context> p_context, TNode<JSReceiver> p_receiver, TNode<String> p_string) {
return RegExpExec_0(state_, p_context, p_receiver, p_string);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=136&c=1
TNode<RegExpMatchInfo> TorqueGeneratedExportedMacrosAssembler::RegExpPrototypeExecBodyWithoutResultFast(TNode<Context> p_context, TNode<JSRegExp> p_regexp, TNode<String> p_string, compiler::CodeAssemblerLabel* label_IfDidNotMatch) {
return RegExpPrototypeExecBodyWithoutResultFast_0(state_, p_context, p_regexp, p_string, label_IfDidNotMatch);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=336&c=1
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadLastIndex(TNode<Context> p_context, TNode<Object> p_regexp, bool p_isFastPath) {
return LoadLastIndex_0(state_, p_context, p_regexp, p_isFastPath);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=343&c=1
TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadLastIndexAsLength(TNode<Context> p_context, TNode<JSRegExp> p_regexp, bool p_isFastPath) {
return LoadLastIndexAsLength_0(state_, p_context, p_regexp, p_isFastPath);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=363&c=1
void TorqueGeneratedExportedMacrosAssembler::StoreLastIndex(TNode<Context> p_context, TNode<Object> p_regexp, TNode<Number> p_value, bool p_isFastPath) {
return StoreLastIndex_0(state_, p_context, p_regexp, p_value, p_isFastPath);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=390&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsRegExp(TNode<Context> p_context, TNode<Object> p_obj) {
return IsRegExp_0(state_, p_context, p_obj);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=421&c=1
TNode<Object> TorqueGeneratedExportedMacrosAssembler::RegExpCreate(TNode<Context> p_context, TNode<NativeContext> p_nativeContext, TNode<Object> p_maybeString, TNode<String> p_flags) {
return RegExpCreate_0(state_, p_context, p_nativeContext, p_maybeString, p_flags);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=429&c=1
TNode<Object> TorqueGeneratedExportedMacrosAssembler::RegExpCreate(TNode<Context> p_context, TNode<Map> p_initialMap, TNode<Object> p_maybeString, TNode<String> p_flags) {
return RegExpCreate_1(state_, p_context, p_initialMap, p_maybeString, p_flags);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/string-trim.tq?l=15&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsWhiteSpaceOrLineTerminator(TNode<Uint16T> p_charCode) {
return IsWhiteSpaceOrLineTerminator_0(state_, p_charCode);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array-createtypedarray.tq?l=314&c=1
TNode<JSTypedArray> TorqueGeneratedExportedMacrosAssembler::TypedArrayCreateByLength(TNode<Context> p_context, TNode<JSReceiver> p_constructor, TNode<Number> p_length, const char* p_methodName) {
return TypedArrayCreateByLength_0(state_, p_context, p_constructor, p_length, p_methodName);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array-createtypedarray.tq?l=453&c=1
TNode<JSTypedArray> TorqueGeneratedExportedMacrosAssembler::TypedArraySpeciesCreateByLength(TNode<Context> p_context, const char* p_methodName, TNode<JSTypedArray> p_exemplar, TNode<UintPtrT> p_length) {
return TypedArraySpeciesCreateByLength_0(state_, p_context, p_methodName, p_exemplar, p_length);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=10&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsJSArgumentsObjectWithLength(TNode<Context> p_context, TNode<Object> p_o) {
return IsJSArgumentsObjectWithLength_0(state_, p_context, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=270&c=1
TNode<JSArray> TorqueGeneratedExportedMacrosAssembler::EmitFastNewAllArguments(TNode<Context> p_context, TNode<RawPtrT> p_frame, TNode<IntPtrT> p_argc) {
return EmitFastNewAllArguments_0(state_, p_context, p_frame, p_argc);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=276&c=1
TNode<JSArray> TorqueGeneratedExportedMacrosAssembler::EmitFastNewRestArguments(TNode<Context> p_context, TNode<JSFunction> p__f) {
return EmitFastNewRestArguments_0(state_, p_context, p__f);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=283&c=1
TNode<JSArgumentsObject> TorqueGeneratedExportedMacrosAssembler::EmitFastNewStrictArguments(TNode<Context> p_context, TNode<JSFunction> p__f) {
return EmitFastNewStrictArguments_0(state_, p_context, p__f);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=290&c=1
TNode<JSArgumentsObject> TorqueGeneratedExportedMacrosAssembler::EmitFastNewSloppyArguments(TNode<Context> p_context, TNode<JSFunction> p_f) {
return EmitFastNewSloppyArguments_0(state_, p_context, p_f);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=365&c=1
TNode<Object> TorqueGeneratedExportedMacrosAssembler::SloppyArgumentsLoad(TNode<JSObject> p_receiver, TNode<Object> p_keyObject, compiler::CodeAssemblerLabel* label_Bailout) {
return SloppyArgumentsLoad_0(state_, p_receiver, p_keyObject, label_Bailout);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=372&c=1
TNode<Object> TorqueGeneratedExportedMacrosAssembler::SloppyArgumentsHas(TNode<JSObject> p_receiver, TNode<Object> p_keyObject, compiler::CodeAssemblerLabel* label_Bailout) {
return SloppyArgumentsHas_0(state_, p_receiver, p_keyObject, label_Bailout);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=379&c=1
TNode<Object> TorqueGeneratedExportedMacrosAssembler::SloppyArgumentsStore(TNode<JSObject> p_receiver, TNode<Object> p_keyObject, TNode<Object> p_value, compiler::CodeAssemblerLabel* label_Bailout) {
return SloppyArgumentsStore_0(state_, p_receiver, p_keyObject, p_value, label_Bailout);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=31&c=1
TNode<Context> TorqueGeneratedExportedMacrosAssembler::AllocateSyntheticFunctionContext(TNode<NativeContext> p_nativeContext, int31_t p_slots) {
return AllocateSyntheticFunctionContext_0(state_, p_nativeContext, p_slots);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=167&c=1
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadContextElement(TNode<Context> p_c, TNode<IntPtrT> p_i) {
return LoadContextElement_0(state_, p_c, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=172&c=1
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadContextElement(TNode<Context> p_c, TNode<Smi> p_i) {
return LoadContextElement_1(state_, p_c, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=177&c=1
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadContextElement(TNode<Context> p_c, int32_t p_i) {
return LoadContextElement_2(state_, p_c, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=182&c=1
void TorqueGeneratedExportedMacrosAssembler::StoreContextElement(TNode<Context> p_c, TNode<IntPtrT> p_i, TNode<Object> p_o) {
return StoreContextElement_0(state_, p_c, p_i, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=187&c=1
void TorqueGeneratedExportedMacrosAssembler::StoreContextElement(TNode<Context> p_c, TNode<Smi> p_i, TNode<Object> p_o) {
return StoreContextElement_1(state_, p_c, p_i, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=192&c=1
void TorqueGeneratedExportedMacrosAssembler::StoreContextElement(TNode<Context> p_c, int32_t p_i, TNode<Object> p_o) {
return StoreContextElement_2(state_, p_c, p_i, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=29&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsDetachedBuffer(TNode<JSArrayBuffer> p_buffer) {
return IsDetachedBuffer_0(state_, p_buffer);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=34&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsSharedArrayBuffer(TNode<JSArrayBuffer> p_buffer) {
return IsSharedArrayBuffer_0(state_, p_buffer);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=39&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsResizableArrayBuffer(TNode<JSArrayBuffer> p_buffer) {
return IsResizableArrayBuffer_0(state_, p_buffer);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=66&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsVariableLengthJSArrayBufferView(TNode<JSArrayBufferView> p_array) {
return IsVariableLengthJSArrayBufferView_0(state_, p_array);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=71&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsLengthTrackingJSArrayBufferView(TNode<JSArrayBufferView> p_array) {
return IsLengthTrackingJSArrayBufferView_0(state_, p_array);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=97&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsOnHeapTypedArray(TNode<JSTypedArray> p_array) {
return IsOnHeapTypedArray_0(state_, p_array);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=39&c=1
TNode<JSArrayIterator> TorqueGeneratedExportedMacrosAssembler::CreateArrayIterator(TNode<NativeContext> p_context, TNode<JSReceiver> p_array, IterationKind p_kind) {
return CreateArrayIterator_0(state_, p_context, p_array, p_kind);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=80&c=1
TNode<PrototypeInfo> TorqueGeneratedExportedMacrosAssembler::LoadMapPrototypeInfo(TNode<Map> p_m, compiler::CodeAssemblerLabel* label_HasNoPrototypeInfo) {
return LoadMapPrototypeInfo_0(state_, p_m, label_HasNoPrototypeInfo);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=87&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsSimpleObjectMap(TNode<Map> p_map) {
return IsSimpleObjectMap_0(state_, p_map);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=40&c=1
TNode<SmallOrderedHashSet> TorqueGeneratedExportedMacrosAssembler::AllocateSmallOrderedHashSet(TNode<IntPtrT> p_capacity) {
return AllocateSmallOrderedHashSet_0(state_, p_capacity);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=79&c=1
TNode<SmallOrderedHashMap> TorqueGeneratedExportedMacrosAssembler::AllocateSmallOrderedHashMap(TNode<IntPtrT> p_capacity) {
return AllocateSmallOrderedHashMap_0(state_, p_capacity);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=198&c=1
TNode<IntPtrT> TorqueGeneratedExportedMacrosAssembler::IndexOfLocalName(TNode<ScopeInfo> p_scopeInfo, TNode<Name> p_name, compiler::CodeAssemblerLabel* label_NotFound) {
return IndexOfLocalName_0(state_, p_scopeInfo, p_name, label_NotFound);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=89&c=1
TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoFormalParameterCountWithoutReceiver(TNode<SharedFunctionInfo> p_sfi) {
return LoadSharedFunctionInfoFormalParameterCountWithoutReceiver_0(state_, p_sfi);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=100&c=1
TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoFormalParameterCountWithReceiver(TNode<SharedFunctionInfo> p_sfi) {
return LoadSharedFunctionInfoFormalParameterCountWithReceiver_0(state_, p_sfi);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=106&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsSharedFunctionInfoDontAdaptArguments(TNode<SharedFunctionInfo> p_sfi) {
return IsSharedFunctionInfoDontAdaptArguments_0(state_, p_sfi);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=175&c=1
TNode<String> TorqueGeneratedExportedMacrosAssembler::AllocateSeqOneByteString(TNode<Uint32T> p_length) {
return AllocateSeqOneByteString_0(state_, p_length);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=180&c=1
TNode<String> TorqueGeneratedExportedMacrosAssembler::AllocateSeqTwoByteString(TNode<Uint32T> p_length) {
return AllocateSeqTwoByteString_0(state_, p_length);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=64&c=1
TNode<IntPtrT> TorqueGeneratedExportedMacrosAssembler::SwissNameDictionaryCapacityFor(TNode<IntPtrT> p_atLeastSpaceFor) {
return SwissNameDictionaryCapacityFor_0(state_, p_atLeastSpaceFor);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=85&c=1
TNode<IntPtrT> TorqueGeneratedExportedMacrosAssembler::SwissNameDictionaryMaxUsableCapacity(TNode<IntPtrT> p_capacity) {
return SwissNameDictionaryMaxUsableCapacity_0(state_, p_capacity);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=97&c=1
TNode<IntPtrT> TorqueGeneratedExportedMacrosAssembler::SwissNameDictionarySizeFor(TNode<IntPtrT> p_capacity) {
return SwissNameDictionarySizeFor_0(state_, p_capacity);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=107&c=1
TNode<IntPtrT> TorqueGeneratedExportedMacrosAssembler::SwissNameDictionaryMetaTableSizePerEntryFor(TNode<IntPtrT> p_capacity) {
return SwissNameDictionaryMetaTableSizePerEntryFor_0(state_, p_capacity);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=119&c=1
TNode<IntPtrT> TorqueGeneratedExportedMacrosAssembler::SwissNameDictionaryMetaTableSizeFor(TNode<IntPtrT> p_capacity) {
return SwissNameDictionaryMetaTableSizeFor_0(state_, p_capacity);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=136&c=1
TNode<IntPtrT> TorqueGeneratedExportedMacrosAssembler::SwissNameDictionaryDataTableStartOffsetMT() {
return SwissNameDictionaryDataTableStartOffsetMT_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=141&c=1
TNode<IntPtrT> TorqueGeneratedExportedMacrosAssembler::SwissNameDictionaryCtrlTableStartOffsetMT(TNode<IntPtrT> p_capacity) {
return SwissNameDictionaryCtrlTableStartOffsetMT_0(state_, p_capacity);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=250&c=1
void TorqueGeneratedExportedMacrosAssembler::SwissNameDictionaryDelete(TNode<SwissNameDictionary> p_table, TNode<IntPtrT> p_entry, compiler::CodeAssemblerLabel* label_Shrunk, compiler::TypedCodeAssemblerVariable<SwissNameDictionary>* label_Shrunk_parameter_0) {
return SwissNameDictionaryDelete_0(state_, p_table, p_entry, label_Shrunk, label_Shrunk_parameter_0);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=279&c=1
void TorqueGeneratedExportedMacrosAssembler::SwissNameDictionaryFindEntrySIMD(TNode<SwissNameDictionary> p_table, TNode<Name> p_key, compiler::CodeAssemblerLabel* label_Found, compiler::TypedCodeAssemblerVariable<IntPtrT>* label_Found_parameter_0, compiler::CodeAssemblerLabel* label_NotFound) {
return SwissNameDictionaryFindEntrySIMD_0(state_, p_table, p_key, label_Found, label_Found_parameter_0, label_NotFound);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=286&c=1
void TorqueGeneratedExportedMacrosAssembler::SwissNameDictionaryFindEntryPortable(TNode<SwissNameDictionary> p_table, TNode<Name> p_key, compiler::CodeAssemblerLabel* label_Found, compiler::TypedCodeAssemblerVariable<IntPtrT>* label_Found_parameter_0, compiler::CodeAssemblerLabel* label_NotFound) {
return SwissNameDictionaryFindEntryPortable_0(state_, p_table, p_key, label_Found, label_Found_parameter_0, label_NotFound);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=302&c=1
void TorqueGeneratedExportedMacrosAssembler::SwissNameDictionaryAddSIMD(TNode<SwissNameDictionary> p_table, TNode<Name> p_key, TNode<Object> p_value, TNode<Uint8T> p_propertyDetails, compiler::CodeAssemblerLabel* label_Bailout) {
return SwissNameDictionaryAddSIMD_0(state_, p_table, p_key, p_value, p_propertyDetails, label_Bailout);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=310&c=1
void TorqueGeneratedExportedMacrosAssembler::SwissNameDictionaryAddPortable(TNode<SwissNameDictionary> p_table, TNode<Name> p_key, TNode<Object> p_value, TNode<Uint8T> p_propertyDetails, compiler::CodeAssemblerLabel* label_Bailout) {
return SwissNameDictionaryAddPortable_0(state_, p_table, p_key, p_value, p_propertyDetails, label_Bailout);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=42&c=1
void TorqueGeneratedExportedMacrosAssembler::TestConstexpr1() {
return TestConstexpr1_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=48&c=1
void TorqueGeneratedExportedMacrosAssembler::TestConstexprIf() {
return TestConstexprIf_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=55&c=1
void TorqueGeneratedExportedMacrosAssembler::TestConstexprReturn() {
return TestConstexprReturn_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=67&c=1
TNode<Oddball> TorqueGeneratedExportedMacrosAssembler::TestGotoLabel() {
return TestGotoLabel_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=76&c=1
TNode<Oddball> TorqueGeneratedExportedMacrosAssembler::TestGotoLabelWithOneParameter() {
return TestGotoLabelWithOneParameter_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=86&c=1
TNode<Oddball> TorqueGeneratedExportedMacrosAssembler::TestGotoLabelWithTwoParameters() {
return TestGotoLabelWithTwoParameters_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=105&c=1
void TorqueGeneratedExportedMacrosAssembler::TestBuiltinSpecialization() {
return TestBuiltinSpecialization_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=132&c=1
TNode<Oddball> TorqueGeneratedExportedMacrosAssembler::TestPartiallyUnusedLabel() {
return TestPartiallyUnusedLabel_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=162&c=1
void TorqueGeneratedExportedMacrosAssembler::TestMacroSpecialization() {
return TestMacroSpecialization_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=188&c=1
TNode<Oddball> TorqueGeneratedExportedMacrosAssembler::TestFunctionPointers(TNode<Context> p_context) {
return TestFunctionPointers_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=197&c=1
TNode<Oddball> TorqueGeneratedExportedMacrosAssembler::TestVariableRedeclaration(TNode<Context> p_context) {
return TestVariableRedeclaration_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=204&c=1
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestTernaryOperator(TNode<Smi> p_x) {
return TestTernaryOperator_0(state_, p_x);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=210&c=1
void TorqueGeneratedExportedMacrosAssembler::TestFunctionPointerToGeneric() {
return TestFunctionPointerToGeneric_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=222&c=1
TNode<BuiltinPtr> TorqueGeneratedExportedMacrosAssembler::TestTypeAlias(TNode<BuiltinPtr> p_x) {
return TestTypeAlias_0(state_, p_x);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=227&c=1
TNode<Oddball> TorqueGeneratedExportedMacrosAssembler::TestUnsafeCast(TNode<Context> p_context, TNode<Number> p_n) {
return TestUnsafeCast_0(state_, p_context, p_n);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=238&c=1
void TorqueGeneratedExportedMacrosAssembler::TestHexLiteral() {
return TestHexLiteral_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=244&c=1
void TorqueGeneratedExportedMacrosAssembler::TestLargeIntegerLiterals(TNode<Context> p_c) {
return TestLargeIntegerLiterals_0(state_, p_c);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=250&c=1
void TorqueGeneratedExportedMacrosAssembler::TestMultilineAssert() {
return TestMultilineAssert_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=258&c=1
void TorqueGeneratedExportedMacrosAssembler::TestNewlineInString() {
return TestNewlineInString_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=267&c=1
void TorqueGeneratedExportedMacrosAssembler::TestModuleConstBindings() {
return TestModuleConstBindings_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=274&c=1
void TorqueGeneratedExportedMacrosAssembler::TestLocalConstBindings() {
return TestLocalConstBindings_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=300&c=1
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestStruct1(TorqueStructTestStructA_0 p_i) {
return TestStruct1_0(state_, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=305&c=1
TorqueStructTestStructA_0 TorqueGeneratedExportedMacrosAssembler::TestStruct2(TNode<Context> p_context) {
return TestStruct2_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=314&c=1
TorqueStructTestStructA_0 TorqueGeneratedExportedMacrosAssembler::TestStruct3(TNode<Context> p_context) {
return TestStruct3_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=340&c=1
TorqueStructTestStructC_0 TorqueGeneratedExportedMacrosAssembler::TestStruct4(TNode<Context> p_context) {
return TestStruct4_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=349&c=1
void TorqueGeneratedExportedMacrosAssembler::CallTestStructInLabel(TNode<Context> p_context) {
return CallTestStructInLabel_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=358&c=1
void TorqueGeneratedExportedMacrosAssembler::TestForLoop() {
return TestForLoop_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=457&c=1
void TorqueGeneratedExportedMacrosAssembler::TestSubtyping(TNode<Smi> p_x) {
return TestSubtyping_0(state_, p_x);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=503&c=1
void TorqueGeneratedExportedMacrosAssembler::TestTypeswitch(TNode<Context> p_context) {
return TestTypeswitch_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=511&c=1
void TorqueGeneratedExportedMacrosAssembler::TestTypeswitchAsanLsanFailure(TNode<Context> p_context, TNode<Object> p_obj) {
return TestTypeswitchAsanLsanFailure_0(state_, p_context, p_obj);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=533&c=1
void TorqueGeneratedExportedMacrosAssembler::TestGenericOverload(TNode<Context> p_context) {
return TestGenericOverload_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=541&c=1
void TorqueGeneratedExportedMacrosAssembler::TestEquality(TNode<Context> p_context) {
return TestEquality_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=551&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::TestOrAnd(TNode<BoolT> p_x, TNode<BoolT> p_y, TNode<BoolT> p_z) {
return TestOrAnd_0(state_, p_x, p_y, p_z);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=556&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::TestAndOr(TNode<BoolT> p_x, TNode<BoolT> p_y, TNode<BoolT> p_z) {
return TestAndOr_0(state_, p_x, p_y, p_z);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=561&c=1
void TorqueGeneratedExportedMacrosAssembler::TestLogicalOperators() {
return TestLogicalOperators_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=581&c=1
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestCall(TNode<Smi> p_i, compiler::CodeAssemblerLabel* label_A) {
return TestCall_0(state_, p_i, label_A);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=587&c=1
void TorqueGeneratedExportedMacrosAssembler::TestOtherwiseWithCode1() {
return TestOtherwiseWithCode1_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=599&c=1
void TorqueGeneratedExportedMacrosAssembler::TestOtherwiseWithCode2() {
return TestOtherwiseWithCode2_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=609&c=1
void TorqueGeneratedExportedMacrosAssembler::TestOtherwiseWithCode3() {
return TestOtherwiseWithCode3_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=618&c=1
void TorqueGeneratedExportedMacrosAssembler::TestForwardLabel() {
return TestForwardLabel_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=629&c=1
void TorqueGeneratedExportedMacrosAssembler::TestQualifiedAccess(TNode<Context> p_context) {
return TestQualifiedAccess_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=635&c=1
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestCatch1(TNode<Context> p_context) {
return TestCatch1_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=646&c=1
void TorqueGeneratedExportedMacrosAssembler::TestCatch2Wrapper(TNode<Context> p_context) {
return TestCatch2Wrapper_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=651&c=1
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestCatch2(TNode<Context> p_context) {
return TestCatch2_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=662&c=1
void TorqueGeneratedExportedMacrosAssembler::TestCatch3WrapperWithLabel(TNode<Context> p_context, compiler::CodeAssemblerLabel* label__Abort) {
return TestCatch3WrapperWithLabel_0(state_, p_context, label__Abort);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=668&c=1
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestCatch3(TNode<Context> p_context) {
return TestCatch3_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=685&c=1
void TorqueGeneratedExportedMacrosAssembler::TestIterator(TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Map> p_map) {
return TestIterator_0(state_, p_context, p_o, p_map);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=704&c=1
void TorqueGeneratedExportedMacrosAssembler::TestFrame1(TNode<Context> p_context) {
return TestFrame1_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=720&c=1
void TorqueGeneratedExportedMacrosAssembler::TestNew(TNode<Context> p_context) {
return TestNew_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=744&c=1
void TorqueGeneratedExportedMacrosAssembler::TestStructConstructor(TNode<Context> p_context) {
return TestStructConstructor_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=773&c=1
void TorqueGeneratedExportedMacrosAssembler::TestInternalClass(TNode<Context> p_context) {
return TestInternalClass_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=792&c=1
void TorqueGeneratedExportedMacrosAssembler::TestConstInStructs() {
return TestConstInStructs_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=803&c=1
void TorqueGeneratedExportedMacrosAssembler::TestParentFrameArguments(TNode<Context> p_context) {
return TestParentFrameArguments_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=819&c=1
TNode<Object> TorqueGeneratedExportedMacrosAssembler::TestNewFixedArrayFromSpread(TNode<Context> p_context) {
return TestNewFixedArrayFromSpread_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=839&c=1
void TorqueGeneratedExportedMacrosAssembler::TestReferences() {
return TestReferences_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=850&c=1
void TorqueGeneratedExportedMacrosAssembler::TestSlices() {
return TestSlices_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=878&c=1
TNode<Oddball> TorqueGeneratedExportedMacrosAssembler::TestSliceEnumeration(TNode<Context> p_context) {
return TestSliceEnumeration_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=907&c=1
void TorqueGeneratedExportedMacrosAssembler::TestStaticAssert() {
return TestStaticAssert_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=935&c=1
void TorqueGeneratedExportedMacrosAssembler::TestLoadEliminationFixed(TNode<Context> p_context) {
return TestLoadEliminationFixed_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=949&c=1
void TorqueGeneratedExportedMacrosAssembler::TestLoadEliminationVariable(TNode<Context> p_context) {
return TestLoadEliminationVariable_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=961&c=1
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestRedundantArrayElementCheck(TNode<Context> p_context) {
return TestRedundantArrayElementCheck_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=976&c=1
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestRedundantSmiCheck(TNode<Context> p_context) {
return TestRedundantSmiCheck_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=995&c=1
TNode<IntPtrT> TorqueGeneratedExportedMacrosAssembler::TestGenericStruct1() {
return TestGenericStruct1_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1016&c=1
TorqueStructTestTuple_TestTuple_intptr_Smi_TestTuple_Smi_intptr_0 TorqueGeneratedExportedMacrosAssembler::TestGenericStruct2() {
return TestGenericStruct2_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1038&c=1
void TorqueGeneratedExportedMacrosAssembler::TestBranchOnBoolOptimization(TNode<Context> p_context, TNode<Smi> p_input) {
return TestBranchOnBoolOptimization_0(state_, p_context, p_input);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1058&c=1
void TorqueGeneratedExportedMacrosAssembler::TestBitFieldLoad(TNode<Uint8T> p_val, TNode<BoolT> p_expectedA, TNode<Uint16T> p_expectedB, TNode<Uint32T> p_expectedC, TNode<BoolT> p_expectedD) {
return TestBitFieldLoad_0(state_, p_val, p_expectedA, p_expectedB, p_expectedC, p_expectedD);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1068&c=1
void TorqueGeneratedExportedMacrosAssembler::TestBitFieldStore(TNode<Uint8T> p_val) {
return TestBitFieldStore_0(state_, p_val);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1087&c=1
void TorqueGeneratedExportedMacrosAssembler::TestBitFieldInit(TNode<BoolT> p_a, TNode<Uint16T> p_b, TNode<Uint32T> p_c, TNode<BoolT> p_d) {
return TestBitFieldInit_0(state_, p_a, p_b, p_c, p_d);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1105&c=1
void TorqueGeneratedExportedMacrosAssembler::TestBitFieldUintptrOps(TNode<Uint32T> p_val2, TNode<UintPtrT> p_val3) {
return TestBitFieldUintptrOps_0(state_, p_val2, p_val3);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1146&c=1
void TorqueGeneratedExportedMacrosAssembler::TestBitFieldMultipleFlags(TNode<BoolT> p_a, TNode<Int32T> p_b, TNode<BoolT> p_c) {
return TestBitFieldMultipleFlags_0(state_, p_a, p_b, p_c);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1226&c=1
void TorqueGeneratedExportedMacrosAssembler::TestFullyGeneratedClassWithElements() {
return TestFullyGeneratedClassWithElements_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1276&c=1
TNode<ExportedSubClass> TorqueGeneratedExportedMacrosAssembler::TestFullyGeneratedClassFromCpp() {
return TestFullyGeneratedClassFromCpp_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1289&c=1
void TorqueGeneratedExportedMacrosAssembler::TestGeneratedCastOperators(TNode<Context> p_context) {
return TestGeneratedCastOperators_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1323&c=1
void TorqueGeneratedExportedMacrosAssembler::TestNewPretenured(TNode<Context> p_context) {
return TestNewPretenured_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1330&c=1
void TorqueGeneratedExportedMacrosAssembler::TestWord8Phi() {
return TestWord8Phi_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1343&c=1
void TorqueGeneratedExportedMacrosAssembler::TestOffHeapSlice(TNode<RawPtrT> p_ptr, TNode<IntPtrT> p_length) {
return TestOffHeapSlice_0(state_, p_ptr, p_length);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1366&c=1
void TorqueGeneratedExportedMacrosAssembler::TestCallMultiReturnBuiltin(TNode<Context> p_context) {
return TestCallMultiReturnBuiltin_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1373&c=1
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestRunLazyTwice(std::function<TNode<Smi>()> p_lazySmi) {
return TestRunLazyTwice_0(state_, p_lazySmi);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1392&c=1
void TorqueGeneratedExportedMacrosAssembler::TestCreateLazyNodeFromTorque() {
return TestCreateLazyNodeFromTorque_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/heap-object.tq?l=9&c=9
TNode<Map> TorqueGeneratedExportedMacrosAssembler::LoadHeapObjectMap(TNode<HeapObject> p_o) {
return LoadHeapObjectMap_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=13&c=9
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadContextLength(TNode<Context> p_o) {
return LoadContextLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=14&c=3
TorqueStructSlice_Object_MutableReference_Object_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceContextElements(TNode<Context> p_o) {
return FieldSliceContextElements_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=14&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadContextElements(TNode<Context> p_o, TNode<IntPtrT> p_i) {
return LoadContextElements_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreContextElements(TNode<Context> p_o, TNode<IntPtrT> p_i, TNode<Object> p_v) {
return StoreContextElements_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=9&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSReceiverPropertiesOrHash(TNode<JSReceiver> p_o) {
return LoadJSReceiverPropertiesOrHash_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=9&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSReceiverPropertiesOrHash(TNode<JSReceiver> p_o, TNode<Object> p_v) {
return StoreJSReceiverPropertiesOrHash_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=9&c=3
TNode<Float64T> TorqueGeneratedExportedMacrosAssembler::LoadOddballToNumberRaw(TNode<Oddball> p_o) {
return LoadOddballToNumberRaw_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=9&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreOddballToNumberRaw(TNode<Oddball> p_o, TNode<Float64T> p_v) {
return StoreOddballToNumberRaw_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=10&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadOddballToString(TNode<Oddball> p_o) {
return LoadOddballToString_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=10&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreOddballToString(TNode<Oddball> p_o, TNode<String> p_v) {
return StoreOddballToString_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=11&c=3
TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadOddballToNumber(TNode<Oddball> p_o) {
return LoadOddballToNumber_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=11&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreOddballToNumber(TNode<Oddball> p_o, TNode<Number> p_v) {
return StoreOddballToNumber_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=12&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadOddballTypeOf(TNode<Oddball> p_o) {
return LoadOddballTypeOf_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=12&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreOddballTypeOf(TNode<Oddball> p_o, TNode<String> p_v) {
return StoreOddballTypeOf_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=13&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadOddballKind(TNode<Oddball> p_o) {
return LoadOddballKind_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=13&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreOddballKind(TNode<Oddball> p_o, TNode<Smi> p_v) {
return StoreOddballKind_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=7&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadNameRawHashField(TNode<Name> p_o) {
return LoadNameRawHashField_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=7&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreNameRawHashField(TNode<Name> p_o, TNode<Uint32T> p_v) {
return StoreNameRawHashField_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=30&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadSymbolFlags(TNode<Symbol> p_o) {
return LoadSymbolFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=30&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSymbolFlags(TNode<Symbol> p_o, TNode<Uint32T> p_v) {
return StoreSymbolFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=31&c=3
TNode<PrimitiveHeapObject> TorqueGeneratedExportedMacrosAssembler::LoadSymbolDescription(TNode<Symbol> p_o) {
return LoadSymbolDescription_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=31&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSymbolDescription(TNode<Symbol> p_o, TNode<PrimitiveHeapObject> p_v) {
return StoreSymbolDescription_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=19&c=9
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadStringLength(TNode<String> p_o) {
return LoadStringLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/heap-number.tq?l=8&c=20
TNode<Float64T> TorqueGeneratedExportedMacrosAssembler::LoadHeapNumberValue(TNode<HeapNumber> p_o) {
return LoadHeapNumberValue_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/heap-number.tq?l=8&c=20
void TorqueGeneratedExportedMacrosAssembler::StoreHeapNumberValue(TNode<HeapNumber> p_o, TNode<Float64T> p_v) {
return StoreHeapNumberValue_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=8&c=9
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadFixedArrayBaseLength(TNode<FixedArrayBase> p_o) {
return LoadFixedArrayBaseLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=13&c=3
TorqueStructSlice_Object_MutableReference_Object_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceFixedArrayObjects(TNode<FixedArray> p_o) {
return FieldSliceFixedArrayObjects_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=13&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFixedArrayObjects(TNode<FixedArray> p_o, TNode<IntPtrT> p_i) {
return LoadFixedArrayObjects_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=13&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFixedArrayObjects(TNode<FixedArray> p_o, TNode<IntPtrT> p_i, TNode<Object> p_v) {
return StoreFixedArrayObjects_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=33&c=3
TNode<FixedArrayBase> TorqueGeneratedExportedMacrosAssembler::LoadJSObjectElements(TNode<JSObject> p_o) {
return LoadJSObjectElements_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=33&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSObjectElements(TNode<JSObject> p_o, TNode<FixedArrayBase> p_v) {
return StoreJSObjectElements_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=24&c=9
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWeakFixedArrayLength(TNode<WeakFixedArray> p_o) {
return LoadWeakFixedArrayLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=25&c=19
TorqueStructSlice_MaybeObject_MutableReference_MaybeObject_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceWeakFixedArrayObjects(TNode<WeakFixedArray> p_o) {
return FieldSliceWeakFixedArrayObjects_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=25&c=19
TNode<MaybeObject> TorqueGeneratedExportedMacrosAssembler::LoadWeakFixedArrayObjects(TNode<WeakFixedArray> p_o, TNode<IntPtrT> p_i) {
return LoadWeakFixedArrayObjects_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=25&c=19
void TorqueGeneratedExportedMacrosAssembler::StoreWeakFixedArrayObjects(TNode<WeakFixedArray> p_o, TNode<IntPtrT> p_i, TNode<MaybeObject> p_v) {
return StoreWeakFixedArrayObjects_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/foreign.tq?l=7&c=3
TNode<ExternalPointerT> TorqueGeneratedExportedMacrosAssembler::LoadForeignForeignAddress(TNode<Foreign> p_o) {
return LoadForeignForeignAddress_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/foreign.tq?l=7&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreForeignForeignAddress(TNode<Foreign> p_o, TNode<ExternalPointerT> p_v) {
return StoreForeignForeignAddress_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=6&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSProxyTarget(TNode<JSProxy> p_o) {
return LoadJSProxyTarget_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=6&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSProxyTarget(TNode<JSProxy> p_o, TNode<HeapObject> p_v) {
return StoreJSProxyTarget_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=7&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSProxyHandler(TNode<JSProxy> p_o) {
return LoadJSProxyHandler_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=7&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSProxyHandler(TNode<JSProxy> p_o, TNode<HeapObject> p_v) {
return StoreJSProxyHandler_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=24&c=3
TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadJSWrappedFunctionWrappedTargetFunction(TNode<JSWrappedFunction> p_o) {
return LoadJSWrappedFunctionWrappedTargetFunction_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=24&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSWrappedFunctionWrappedTargetFunction(TNode<JSWrappedFunction> p_o, TNode<JSReceiver> p_v) {
return StoreJSWrappedFunctionWrappedTargetFunction_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=26&c=3
TNode<NativeContext> TorqueGeneratedExportedMacrosAssembler::LoadJSWrappedFunctionContext(TNode<JSWrappedFunction> p_o) {
return LoadJSWrappedFunctionContext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=26&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSWrappedFunctionContext(TNode<JSWrappedFunction> p_o, TNode<NativeContext> p_v) {
return StoreJSWrappedFunctionContext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=12&c=3
TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadJSBoundFunctionBoundTargetFunction(TNode<JSBoundFunction> p_o) {
return LoadJSBoundFunctionBoundTargetFunction_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=12&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSBoundFunctionBoundTargetFunction(TNode<JSBoundFunction> p_o, TNode<JSReceiver> p_v) {
return StoreJSBoundFunctionBoundTargetFunction_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=15&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSBoundFunctionBoundThis(TNode<JSBoundFunction> p_o) {
return LoadJSBoundFunctionBoundThis_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=15&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSBoundFunctionBoundThis(TNode<JSBoundFunction> p_o, TNode<Object> p_v) {
return StoreJSBoundFunctionBoundThis_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=18&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadJSBoundFunctionBoundArguments(TNode<JSBoundFunction> p_o) {
return LoadJSBoundFunctionBoundArguments_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=18&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSBoundFunctionBoundArguments(TNode<JSBoundFunction> p_o, TNode<FixedArray> p_v) {
return StoreJSBoundFunctionBoundArguments_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=33&c=3
TNode<SharedFunctionInfo> TorqueGeneratedExportedMacrosAssembler::LoadJSFunctionSharedFunctionInfo(TNode<JSFunction> p_o) {
return LoadJSFunctionSharedFunctionInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=33&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSFunctionSharedFunctionInfo(TNode<JSFunction> p_o, TNode<SharedFunctionInfo> p_v) {
return StoreJSFunctionSharedFunctionInfo_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=34&c=3
TNode<Context> TorqueGeneratedExportedMacrosAssembler::LoadJSFunctionContext(TNode<JSFunction> p_o) {
return LoadJSFunctionContext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=34&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSFunctionContext(TNode<JSFunction> p_o, TNode<Context> p_v) {
return StoreJSFunctionContext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=35&c=3
TNode<FeedbackCell> TorqueGeneratedExportedMacrosAssembler::LoadJSFunctionFeedbackCell(TNode<JSFunction> p_o) {
return LoadJSFunctionFeedbackCell_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=35&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSFunctionFeedbackCell(TNode<JSFunction> p_o, TNode<FeedbackCell> p_v) {
return StoreJSFunctionFeedbackCell_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=36&c=31
TNode<CodeDataContainer> TorqueGeneratedExportedMacrosAssembler::LoadJSFunctionCode(TNode<JSFunction> p_o) {
return LoadJSFunctionCode_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=36&c=31
void TorqueGeneratedExportedMacrosAssembler::StoreJSFunctionCode(TNode<JSFunction> p_o, TNode<CodeDataContainer> p_v) {
return StoreJSFunctionCode_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=39&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSFunctionPrototypeOrInitialMap(TNode<JSFunction> p_o) {
return LoadJSFunctionPrototypeOrInitialMap_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=39&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSFunctionPrototypeOrInitialMap(TNode<JSFunction> p_o, TNode<HeapObject> p_v) {
return StoreJSFunctionPrototypeOrInitialMap_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=38&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmInternalFunctionRef(TNode<WasmInternalFunction> p_o) {
return LoadWasmInternalFunctionRef_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=38&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmInternalFunctionRef(TNode<WasmInternalFunction> p_o, TNode<HeapObject> p_v) {
return StoreWasmInternalFunctionRef_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=40&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmInternalFunctionExternal(TNode<WasmInternalFunction> p_o) {
return LoadWasmInternalFunctionExternal_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=40&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmInternalFunctionExternal(TNode<WasmInternalFunction> p_o, TNode<HeapObject> p_v) {
return StoreWasmInternalFunctionExternal_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=42&c=31
TNode<CodeDataContainer> TorqueGeneratedExportedMacrosAssembler::LoadWasmInternalFunctionCode(TNode<WasmInternalFunction> p_o) {
return LoadWasmInternalFunctionCode_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=42&c=31
void TorqueGeneratedExportedMacrosAssembler::StoreWasmInternalFunctionCode(TNode<WasmInternalFunction> p_o, TNode<CodeDataContainer> p_v) {
return StoreWasmInternalFunctionCode_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=22&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWeakCellFinalizationRegistry(TNode<WeakCell> p_o) {
return LoadWeakCellFinalizationRegistry_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=22&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWeakCellFinalizationRegistry(TNode<WeakCell> p_o, TNode<HeapObject> p_v) {
return StoreWeakCellFinalizationRegistry_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=23&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWeakCellTarget(TNode<WeakCell> p_o) {
return LoadWeakCellTarget_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=23&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWeakCellTarget(TNode<WeakCell> p_o, TNode<HeapObject> p_v) {
return StoreWeakCellTarget_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=24&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWeakCellUnregisterToken(TNode<WeakCell> p_o) {
return LoadWeakCellUnregisterToken_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=24&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWeakCellUnregisterToken(TNode<WeakCell> p_o, TNode<HeapObject> p_v) {
return StoreWeakCellUnregisterToken_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=25&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadWeakCellHoldings(TNode<WeakCell> p_o) {
return LoadWeakCellHoldings_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=25&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWeakCellHoldings(TNode<WeakCell> p_o, TNode<Object> p_v) {
return StoreWeakCellHoldings_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=29&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWeakCellPrev(TNode<WeakCell> p_o) {
return LoadWeakCellPrev_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=29&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWeakCellPrev(TNode<WeakCell> p_o, TNode<HeapObject> p_v) {
return StoreWeakCellPrev_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=30&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWeakCellNext(TNode<WeakCell> p_o) {
return LoadWeakCellNext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=30&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWeakCellNext(TNode<WeakCell> p_o, TNode<HeapObject> p_v) {
return StoreWeakCellNext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=38&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWeakCellKeyListPrev(TNode<WeakCell> p_o) {
return LoadWeakCellKeyListPrev_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=38&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWeakCellKeyListPrev(TNode<WeakCell> p_o, TNode<HeapObject> p_v) {
return StoreWeakCellKeyListPrev_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=39&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWeakCellKeyListNext(TNode<WeakCell> p_o) {
return LoadWeakCellKeyListNext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=39&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWeakCellKeyListNext(TNode<WeakCell> p_o, TNode<HeapObject> p_v) {
return StoreWeakCellKeyListNext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=59&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadMapInstanceSizeInWords(TNode<Map> p_o) {
return LoadMapInstanceSizeInWords_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=59&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMapInstanceSizeInWords(TNode<Map> p_o, TNode<Uint8T> p_v) {
return StoreMapInstanceSizeInWords_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=60&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadMapInobjectPropertiesStartOrConstructorFunctionIndex(TNode<Map> p_o) {
return LoadMapInobjectPropertiesStartOrConstructorFunctionIndex_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=60&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMapInobjectPropertiesStartOrConstructorFunctionIndex(TNode<Map> p_o, TNode<Uint8T> p_v) {
return StoreMapInobjectPropertiesStartOrConstructorFunctionIndex_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=61&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadMapUsedOrUnusedInstanceSizeInWords(TNode<Map> p_o) {
return LoadMapUsedOrUnusedInstanceSizeInWords_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=61&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMapUsedOrUnusedInstanceSizeInWords(TNode<Map> p_o, TNode<Uint8T> p_v) {
return StoreMapUsedOrUnusedInstanceSizeInWords_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=62&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadMapVisitorId(TNode<Map> p_o) {
return LoadMapVisitorId_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=62&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMapVisitorId(TNode<Map> p_o, TNode<Uint8T> p_v) {
return StoreMapVisitorId_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=63&c=3
TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadMapInstanceType(TNode<Map> p_o) {
return LoadMapInstanceType_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=63&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMapInstanceType(TNode<Map> p_o, TNode<Uint16T> p_v) {
return StoreMapInstanceType_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=64&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadMapBitField(TNode<Map> p_o) {
return LoadMapBitField_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=64&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMapBitField(TNode<Map> p_o, TNode<Uint8T> p_v) {
return StoreMapBitField_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=65&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadMapBitField2(TNode<Map> p_o) {
return LoadMapBitField2_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=65&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMapBitField2(TNode<Map> p_o, TNode<Uint8T> p_v) {
return StoreMapBitField2_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=66&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadMapBitField3(TNode<Map> p_o) {
return LoadMapBitField3_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=66&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMapBitField3(TNode<Map> p_o, TNode<Uint32T> p_v) {
return StoreMapBitField3_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=71&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadMapPrototype(TNode<Map> p_o) {
return LoadMapPrototype_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=71&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMapPrototype(TNode<Map> p_o, TNode<HeapObject> p_v) {
return StoreMapPrototype_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=72&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadMapConstructorOrBackPointerOrNativeContext(TNode<Map> p_o) {
return LoadMapConstructorOrBackPointerOrNativeContext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=72&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMapConstructorOrBackPointerOrNativeContext(TNode<Map> p_o, TNode<Object> p_v) {
return StoreMapConstructorOrBackPointerOrNativeContext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=73&c=3
TNode<DescriptorArray> TorqueGeneratedExportedMacrosAssembler::LoadMapInstanceDescriptors(TNode<Map> p_o) {
return LoadMapInstanceDescriptors_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=73&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMapInstanceDescriptors(TNode<Map> p_o, TNode<DescriptorArray> p_v) {
return StoreMapInstanceDescriptors_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=74&c=3
TNode<WeakFixedArray> TorqueGeneratedExportedMacrosAssembler::LoadMapDependentCode(TNode<Map> p_o) {
return LoadMapDependentCode_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=74&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMapDependentCode(TNode<Map> p_o, TNode<WeakFixedArray> p_v) {
return StoreMapDependentCode_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=75&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadMapPrototypeValidityCell(TNode<Map> p_o) {
return LoadMapPrototypeValidityCell_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=75&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMapPrototypeValidityCell(TNode<Map> p_o, TNode<Object> p_v) {
return StoreMapPrototypeValidityCell_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=76&c=3
TNode<MaybeObject> TorqueGeneratedExportedMacrosAssembler::LoadMapTransitionsOrPrototypeInfo(TNode<Map> p_o) {
return LoadMapTransitionsOrPrototypeInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=76&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMapTransitionsOrPrototypeInfo(TNode<Map> p_o, TNode<MaybeObject> p_v) {
return StoreMapTransitionsOrPrototypeInfo_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=35&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSPromiseReactionsOrResult(TNode<JSPromise> p_o) {
return LoadJSPromiseReactionsOrResult_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=35&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSPromiseReactionsOrResult(TNode<JSPromise> p_o, TNode<Object> p_v) {
return StoreJSPromiseReactionsOrResult_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=36&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSPromiseFlags(TNode<JSPromise> p_o) {
return LoadJSPromiseFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=36&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSPromiseFlags(TNode<JSPromise> p_o, TNode<Smi> p_v) {
return StoreJSPromiseFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=6&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadPromiseCapabilityPromise(TNode<PromiseCapability> p_o) {
return LoadPromiseCapabilityPromise_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=6&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseCapabilityPromise(TNode<PromiseCapability> p_o, TNode<HeapObject> p_v) {
return StorePromiseCapabilityPromise_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=8&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadPromiseCapabilityResolve(TNode<PromiseCapability> p_o) {
return LoadPromiseCapabilityResolve_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseCapabilityResolve(TNode<PromiseCapability> p_o, TNode<Object> p_v) {
return StorePromiseCapabilityResolve_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=9&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadPromiseCapabilityReject(TNode<PromiseCapability> p_o) {
return LoadPromiseCapabilityReject_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=9&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseCapabilityReject(TNode<PromiseCapability> p_o, TNode<Object> p_v) {
return StorePromiseCapabilityReject_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=57&c=3
TNode<JSArrayBuffer> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayBufferViewBuffer(TNode<JSArrayBufferView> p_o) {
return LoadJSArrayBufferViewBuffer_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=57&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayBufferViewBuffer(TNode<JSArrayBufferView> p_o, TNode<JSArrayBuffer> p_v) {
return StoreJSArrayBufferViewBuffer_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=58&c=3
TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayBufferViewByteOffset(TNode<JSArrayBufferView> p_o) {
return LoadJSArrayBufferViewByteOffset_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=58&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayBufferViewByteOffset(TNode<JSArrayBufferView> p_o, TNode<UintPtrT> p_v) {
return StoreJSArrayBufferViewByteOffset_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=59&c=3
TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayBufferViewByteLength(TNode<JSArrayBufferView> p_o) {
return LoadJSArrayBufferViewByteLength_1(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=59&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayBufferViewByteLength(TNode<JSArrayBufferView> p_o, TNode<UintPtrT> p_v) {
return StoreJSArrayBufferViewByteLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=60&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayBufferViewBitField(TNode<JSArrayBufferView> p_o) {
return LoadJSArrayBufferViewBitField_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=60&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayBufferViewBitField(TNode<JSArrayBufferView> p_o, TNode<Uint32T> p_v) {
return StoreJSArrayBufferViewBitField_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=91&c=3
TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::LoadJSTypedArrayLength(TNode<JSTypedArray> p_o) {
return LoadJSTypedArrayLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=91&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTypedArrayLength(TNode<JSTypedArray> p_o, TNode<UintPtrT> p_v) {
return StoreJSTypedArrayLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=93&c=3
TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadJSTypedArrayExternalPointer(TNode<JSTypedArray> p_o) {
return LoadJSTypedArrayExternalPointer_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=93&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTypedArrayExternalPointer(TNode<JSTypedArray> p_o, TNode<RawPtrT> p_v) {
return StoreJSTypedArrayExternalPointer_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=94&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSTypedArrayBasePointer(TNode<JSTypedArray> p_o) {
return LoadJSTypedArrayBasePointer_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=94&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTypedArrayBasePointer(TNode<JSTypedArray> p_o, TNode<Object> p_v) {
return StoreJSTypedArrayBasePointer_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=13&c=31
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadDataHandlerSmiHandler(TNode<DataHandler> p_o) {
return LoadDataHandlerSmiHandler_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=13&c=31
void TorqueGeneratedExportedMacrosAssembler::StoreDataHandlerSmiHandler(TNode<DataHandler> p_o, TNode<Object> p_v) {
return StoreDataHandlerSmiHandler_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=17&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadDataHandlerValidityCell(TNode<DataHandler> p_o) {
return LoadDataHandlerValidityCell_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=17&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreDataHandlerValidityCell(TNode<DataHandler> p_o, TNode<Object> p_v) {
return StoreDataHandlerValidityCell_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=20&c=3
TNode<MaybeObject> TorqueGeneratedExportedMacrosAssembler::LoadDataHandlerData1(TNode<DataHandler> p_o) {
return LoadDataHandlerData1_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=20&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreDataHandlerData1(TNode<DataHandler> p_o, TNode<MaybeObject> p_v) {
return StoreDataHandlerData1_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=21&c=3
TNode<MaybeObject> TorqueGeneratedExportedMacrosAssembler::LoadDataHandlerData2(TNode<DataHandler> p_o) {
return LoadDataHandlerData2_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=21&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreDataHandlerData2(TNode<DataHandler> p_o, TNode<MaybeObject> p_v) {
return StoreDataHandlerData2_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=22&c=3
TNode<MaybeObject> TorqueGeneratedExportedMacrosAssembler::LoadDataHandlerData3(TNode<DataHandler> p_o) {
return LoadDataHandlerData3_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=22&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreDataHandlerData3(TNode<DataHandler> p_o, TNode<MaybeObject> p_v) {
return StoreDataHandlerData3_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/allocation-site.tq?l=8&c=3
TNode<AllocationSite> TorqueGeneratedExportedMacrosAssembler::LoadAllocationMementoAllocationSite(TNode<AllocationMemento> p_o) {
return LoadAllocationMementoAllocationSite_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/allocation-site.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAllocationMementoAllocationSite(TNode<AllocationMemento> p_o, TNode<AllocationSite> p_v) {
return StoreAllocationMementoAllocationSite_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=6&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadCallHandlerInfoCallback(TNode<CallHandlerInfo> p_o) {
return LoadCallHandlerInfoCallback_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=6&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreCallHandlerInfoCallback(TNode<CallHandlerInfo> p_o, TNode<Object> p_v) {
return StoreCallHandlerInfoCallback_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=7&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadCallHandlerInfoJsCallback(TNode<CallHandlerInfo> p_o) {
return LoadCallHandlerInfoJsCallback_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=7&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreCallHandlerInfoJsCallback(TNode<CallHandlerInfo> p_o, TNode<Object> p_v) {
return StoreCallHandlerInfoJsCallback_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=8&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadCallHandlerInfoData(TNode<CallHandlerInfo> p_o) {
return LoadCallHandlerInfoData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreCallHandlerInfoData(TNode<CallHandlerInfo> p_o, TNode<Object> p_v) {
return StoreCallHandlerInfoData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=20&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoGetter(TNode<InterceptorInfo> p_o) {
return LoadInterceptorInfoGetter_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=20&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoGetter(TNode<InterceptorInfo> p_o, TNode<Object> p_v) {
return StoreInterceptorInfoGetter_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=21&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoSetter(TNode<InterceptorInfo> p_o) {
return LoadInterceptorInfoSetter_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=21&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoSetter(TNode<InterceptorInfo> p_o, TNode<Object> p_v) {
return StoreInterceptorInfoSetter_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=22&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoQuery(TNode<InterceptorInfo> p_o) {
return LoadInterceptorInfoQuery_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=22&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoQuery(TNode<InterceptorInfo> p_o, TNode<Object> p_v) {
return StoreInterceptorInfoQuery_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=23&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoDescriptor(TNode<InterceptorInfo> p_o) {
return LoadInterceptorInfoDescriptor_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=23&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoDescriptor(TNode<InterceptorInfo> p_o, TNode<Object> p_v) {
return StoreInterceptorInfoDescriptor_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=24&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoDeleter(TNode<InterceptorInfo> p_o) {
return LoadInterceptorInfoDeleter_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=24&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoDeleter(TNode<InterceptorInfo> p_o, TNode<Object> p_v) {
return StoreInterceptorInfoDeleter_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=25&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoEnumerator(TNode<InterceptorInfo> p_o) {
return LoadInterceptorInfoEnumerator_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=25&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoEnumerator(TNode<InterceptorInfo> p_o, TNode<Object> p_v) {
return StoreInterceptorInfoEnumerator_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=26&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoDefiner(TNode<InterceptorInfo> p_o) {
return LoadInterceptorInfoDefiner_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=26&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoDefiner(TNode<InterceptorInfo> p_o, TNode<Object> p_v) {
return StoreInterceptorInfoDefiner_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=27&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoData(TNode<InterceptorInfo> p_o) {
return LoadInterceptorInfoData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=27&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoData(TNode<InterceptorInfo> p_o, TNode<Object> p_v) {
return StoreInterceptorInfoData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=28&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoFlags(TNode<InterceptorInfo> p_o) {
return LoadInterceptorInfoFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=28&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoFlags(TNode<InterceptorInfo> p_o, TNode<Smi> p_v) {
return StoreInterceptorInfoFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=32&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessCheckInfoCallback(TNode<AccessCheckInfo> p_o) {
return LoadAccessCheckInfoCallback_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=32&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAccessCheckInfoCallback(TNode<AccessCheckInfo> p_o, TNode<Object> p_v) {
return StoreAccessCheckInfoCallback_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=33&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessCheckInfoNamedInterceptor(TNode<AccessCheckInfo> p_o) {
return LoadAccessCheckInfoNamedInterceptor_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=33&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAccessCheckInfoNamedInterceptor(TNode<AccessCheckInfo> p_o, TNode<Object> p_v) {
return StoreAccessCheckInfoNamedInterceptor_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=34&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessCheckInfoIndexedInterceptor(TNode<AccessCheckInfo> p_o) {
return LoadAccessCheckInfoIndexedInterceptor_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=34&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAccessCheckInfoIndexedInterceptor(TNode<AccessCheckInfo> p_o, TNode<Object> p_v) {
return StoreAccessCheckInfoIndexedInterceptor_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=35&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessCheckInfoData(TNode<AccessCheckInfo> p_o) {
return LoadAccessCheckInfoData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=35&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAccessCheckInfoData(TNode<AccessCheckInfo> p_o, TNode<Object> p_v) {
return StoreAccessCheckInfoData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=52&c=3
TNode<Name> TorqueGeneratedExportedMacrosAssembler::LoadAccessorInfoName(TNode<AccessorInfo> p_o) {
return LoadAccessorInfoName_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=52&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorInfoName(TNode<AccessorInfo> p_o, TNode<Name> p_v) {
return StoreAccessorInfoName_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=53&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadAccessorInfoFlags(TNode<AccessorInfo> p_o) {
return LoadAccessorInfoFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=53&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorInfoFlags(TNode<AccessorInfo> p_o, TNode<Smi> p_v) {
return StoreAccessorInfoFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=54&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessorInfoExpectedReceiverType(TNode<AccessorInfo> p_o) {
return LoadAccessorInfoExpectedReceiverType_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=54&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorInfoExpectedReceiverType(TNode<AccessorInfo> p_o, TNode<Object> p_v) {
return StoreAccessorInfoExpectedReceiverType_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=55&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessorInfoSetter(TNode<AccessorInfo> p_o) {
return LoadAccessorInfoSetter_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=55&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorInfoSetter(TNode<AccessorInfo> p_o, TNode<Object> p_v) {
return StoreAccessorInfoSetter_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=56&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessorInfoGetter(TNode<AccessorInfo> p_o) {
return LoadAccessorInfoGetter_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=56&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorInfoGetter(TNode<AccessorInfo> p_o, TNode<Object> p_v) {
return StoreAccessorInfoGetter_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=59&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessorInfoJsGetter(TNode<AccessorInfo> p_o) {
return LoadAccessorInfoJsGetter_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=59&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorInfoJsGetter(TNode<AccessorInfo> p_o, TNode<Object> p_v) {
return StoreAccessorInfoJsGetter_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=60&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessorInfoData(TNode<AccessorInfo> p_o) {
return LoadAccessorInfoData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=60&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorInfoData(TNode<AccessorInfo> p_o, TNode<Object> p_v) {
return StoreAccessorInfoData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=24&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSStrictArgumentsObjectLength(TNode<JSArgumentsObject> p_o) {
return LoadJSStrictArgumentsObjectLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=24&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSStrictArgumentsObjectLength(TNode<JSArgumentsObject> p_o, TNode<Object> p_v) {
return StoreJSStrictArgumentsObjectLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=18&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSSloppyArgumentsObjectLength(TNode<JSArgumentsObject> p_o) {
return LoadJSSloppyArgumentsObjectLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=18&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSSloppyArgumentsObjectLength(TNode<JSArgumentsObject> p_o, TNode<Object> p_v) {
return StoreJSSloppyArgumentsObjectLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=19&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSSloppyArgumentsObjectCallee(TNode<JSArgumentsObject> p_o) {
return LoadJSSloppyArgumentsObjectCallee_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=19&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSSloppyArgumentsObjectCallee(TNode<JSArgumentsObject> p_o, TNode<Object> p_v) {
return StoreJSSloppyArgumentsObjectCallee_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=79&c=3
TNode<Context> TorqueGeneratedExportedMacrosAssembler::LoadSloppyArgumentsElementsContext(TNode<SloppyArgumentsElements> p_o) {
return LoadSloppyArgumentsElementsContext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=79&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSloppyArgumentsElementsContext(TNode<SloppyArgumentsElements> p_o, TNode<Context> p_v) {
return StoreSloppyArgumentsElementsContext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=80&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadSloppyArgumentsElementsArguments(TNode<SloppyArgumentsElements> p_o) {
return LoadSloppyArgumentsElementsArguments_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=80&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSloppyArgumentsElementsArguments(TNode<SloppyArgumentsElements> p_o, TNode<FixedArray> p_v) {
return StoreSloppyArgumentsElementsArguments_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=81&c=19
TorqueStructSlice_Smi_OR_TheHole_MutableReference_Smi_OR_TheHole_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSloppyArgumentsElementsMappedEntries(TNode<SloppyArgumentsElements> p_o) {
return FieldSliceSloppyArgumentsElementsMappedEntries_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=81&c=19
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadSloppyArgumentsElementsMappedEntries(TNode<SloppyArgumentsElements> p_o, TNode<IntPtrT> p_i) {
return LoadSloppyArgumentsElementsMappedEntries_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=81&c=19
void TorqueGeneratedExportedMacrosAssembler::StoreSloppyArgumentsElementsMappedEntries(TNode<SloppyArgumentsElements> p_o, TNode<IntPtrT> p_i, TNode<Object> p_v) {
return StoreSloppyArgumentsElementsMappedEntries_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=91&c=53
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadAliasedArgumentsEntryAliasedContextSlot(TNode<AliasedArgumentsEntry> p_o) {
return LoadAliasedArgumentsEntryAliasedContextSlot_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=91&c=53
void TorqueGeneratedExportedMacrosAssembler::StoreAliasedArgumentsEntryAliasedContextSlot(TNode<AliasedArgumentsEntry> p_o, TNode<Smi> p_v) {
return StoreAliasedArgumentsEntryAliasedContextSlot_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=18&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadCallSiteInfoReceiverOrInstance(TNode<CallSiteInfo> p_o) {
return LoadCallSiteInfoReceiverOrInstance_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=18&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreCallSiteInfoReceiverOrInstance(TNode<CallSiteInfo> p_o, TNode<Object> p_v) {
return StoreCallSiteInfoReceiverOrInstance_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=19&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadCallSiteInfoFunction(TNode<CallSiteInfo> p_o) {
return LoadCallSiteInfoFunction_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=19&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreCallSiteInfoFunction(TNode<CallSiteInfo> p_o, TNode<Object> p_v) {
return StoreCallSiteInfoFunction_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=20&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadCallSiteInfoCodeObject(TNode<CallSiteInfo> p_o) {
return LoadCallSiteInfoCodeObject_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=20&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreCallSiteInfoCodeObject(TNode<CallSiteInfo> p_o, TNode<HeapObject> p_v) {
return StoreCallSiteInfoCodeObject_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=21&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadCallSiteInfoCodeOffsetOrSourcePosition(TNode<CallSiteInfo> p_o) {
return LoadCallSiteInfoCodeOffsetOrSourcePosition_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=21&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreCallSiteInfoCodeOffsetOrSourcePosition(TNode<CallSiteInfo> p_o, TNode<Smi> p_v) {
return StoreCallSiteInfoCodeOffsetOrSourcePosition_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=22&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadCallSiteInfoFlags(TNode<CallSiteInfo> p_o) {
return LoadCallSiteInfoFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=22&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreCallSiteInfoFlags(TNode<CallSiteInfo> p_o, TNode<Smi> p_v) {
return StoreCallSiteInfoFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=23&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadCallSiteInfoParameters(TNode<CallSiteInfo> p_o) {
return LoadCallSiteInfoParameters_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=23&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreCallSiteInfoParameters(TNode<CallSiteInfo> p_o, TNode<FixedArray> p_v) {
return StoreCallSiteInfoParameters_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=5&c=40
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadCellValue(TNode<Cell> p_o) {
return LoadCellValue_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=5&c=40
void TorqueGeneratedExportedMacrosAssembler::StoreCellValue(TNode<Cell> p_o, TNode<Object> p_v) {
return StoreCellValue_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=17&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadBytecodeArrayConstantPool(TNode<BytecodeArray> p_o) {
return LoadBytecodeArrayConstantPool_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=17&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreBytecodeArrayConstantPool(TNode<BytecodeArray> p_o, TNode<FixedArray> p_v) {
return StoreBytecodeArrayConstantPool_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=19&c=3
TNode<ByteArray> TorqueGeneratedExportedMacrosAssembler::LoadBytecodeArrayHandlerTable(TNode<BytecodeArray> p_o) {
return LoadBytecodeArrayHandlerTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=19&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreBytecodeArrayHandlerTable(TNode<BytecodeArray> p_o, TNode<ByteArray> p_v) {
return StoreBytecodeArrayHandlerTable_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=29&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadBytecodeArraySourcePositionTable(TNode<BytecodeArray> p_o) {
return LoadBytecodeArraySourcePositionTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=29&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreBytecodeArraySourcePositionTable(TNode<BytecodeArray> p_o, TNode<HeapObject> p_v) {
return StoreBytecodeArraySourcePositionTable_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=30&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadBytecodeArrayFrameSize(TNode<BytecodeArray> p_o) {
return LoadBytecodeArrayFrameSize_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=30&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreBytecodeArrayFrameSize(TNode<BytecodeArray> p_o, TNode<Int32T> p_v) {
return StoreBytecodeArrayFrameSize_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=31&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadBytecodeArrayParameterSize(TNode<BytecodeArray> p_o) {
return LoadBytecodeArrayParameterSize_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=31&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreBytecodeArrayParameterSize(TNode<BytecodeArray> p_o, TNode<Int32T> p_v) {
return StoreBytecodeArrayParameterSize_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=32&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadBytecodeArrayIncomingNewTargetOrGeneratorRegister(TNode<BytecodeArray> p_o) {
return LoadBytecodeArrayIncomingNewTargetOrGeneratorRegister_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=32&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreBytecodeArrayIncomingNewTargetOrGeneratorRegister(TNode<BytecodeArray> p_o, TNode<Int32T> p_v) {
return StoreBytecodeArrayIncomingNewTargetOrGeneratorRegister_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=33&c=3
TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadBytecodeArrayOsrUrgencyAndInstallTarget(TNode<BytecodeArray> p_o) {
return LoadBytecodeArrayOsrUrgencyAndInstallTarget_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=33&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreBytecodeArrayOsrUrgencyAndInstallTarget(TNode<BytecodeArray> p_o, TNode<Uint16T> p_v) {
return StoreBytecodeArrayOsrUrgencyAndInstallTarget_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=34&c=3
TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadBytecodeArrayBytecodeAge(TNode<BytecodeArray> p_o) {
return LoadBytecodeArrayBytecodeAge_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=34&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreBytecodeArrayBytecodeAge(TNode<BytecodeArray> p_o, TNode<Uint16T> p_v) {
return StoreBytecodeArrayBytecodeAge_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=112&c=9
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScopeInfoFlags(TNode<ScopeInfo> p_o) {
return LoadScopeInfoFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=115&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScopeInfoParameterCount(TNode<ScopeInfo> p_o) {
return LoadScopeInfoParameterCount_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=115&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScopeInfoParameterCount(TNode<ScopeInfo> p_o, TNode<Smi> p_v) {
return StoreScopeInfoParameterCount_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=119&c=9
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScopeInfoContextLocalCount(TNode<ScopeInfo> p_o) {
return LoadScopeInfoContextLocalCount_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=124&c=3
TorqueStructSlice_String_MutableReference_String_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceScopeInfoContextLocalNames(TNode<ScopeInfo> p_o) {
return FieldSliceScopeInfoContextLocalNames_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=124&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadScopeInfoContextLocalNames(TNode<ScopeInfo> p_o, TNode<IntPtrT> p_i) {
return LoadScopeInfoContextLocalNames_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=124&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScopeInfoContextLocalNames(TNode<ScopeInfo> p_o, TNode<IntPtrT> p_i, TNode<String> p_v) {
return StoreScopeInfoContextLocalNames_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=129&c=3
TorqueStructSlice_NameToIndexHashTable_MutableReference_NameToIndexHashTable_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceScopeInfoContextLocalNamesHashtable(TNode<ScopeInfo> p_o) {
return FieldSliceScopeInfoContextLocalNamesHashtable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=129&c=3
TNode<NameToIndexHashTable> TorqueGeneratedExportedMacrosAssembler::LoadScopeInfoContextLocalNamesHashtable(TNode<ScopeInfo> p_o) {
return LoadScopeInfoContextLocalNamesHashtable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=129&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScopeInfoContextLocalNamesHashtable(TNode<ScopeInfo> p_o, TNode<NameToIndexHashTable> p_v) {
return StoreScopeInfoContextLocalNamesHashtable_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=135&c=3
TorqueStructSlice_SmiTagged_VariableProperties_MutableReference_SmiTagged_VariableProperties_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceScopeInfoContextLocalInfos(TNode<ScopeInfo> p_o) {
return FieldSliceScopeInfoContextLocalInfos_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=135&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScopeInfoContextLocalInfos(TNode<ScopeInfo> p_o, TNode<IntPtrT> p_i) {
return LoadScopeInfoContextLocalInfos_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=135&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScopeInfoContextLocalInfos(TNode<ScopeInfo> p_o, TNode<IntPtrT> p_i, TNode<Smi> p_v) {
return StoreScopeInfoContextLocalInfos_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=141&c=3
TorqueStructSlice_Smi_MutableReference_Smi_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceScopeInfoSavedClassVariableInfo(TNode<ScopeInfo> p_o) {
return FieldSliceScopeInfoSavedClassVariableInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=141&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScopeInfoSavedClassVariableInfo(TNode<ScopeInfo> p_o) {
return LoadScopeInfoSavedClassVariableInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=141&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScopeInfoSavedClassVariableInfo(TNode<ScopeInfo> p_o, TNode<Smi> p_v) {
return StoreScopeInfoSavedClassVariableInfo_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=147&c=3
TorqueStructSlice_FunctionVariableInfo_MutableReference_FunctionVariableInfo_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceScopeInfoFunctionVariableInfo(TNode<ScopeInfo> p_o) {
return FieldSliceScopeInfoFunctionVariableInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=152&c=3
TorqueStructSlice_Undefined_OR_String_MutableReference_Undefined_OR_String_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceScopeInfoInferredFunctionName(TNode<ScopeInfo> p_o) {
return FieldSliceScopeInfoInferredFunctionName_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=152&c=3
TNode<PrimitiveHeapObject> TorqueGeneratedExportedMacrosAssembler::LoadScopeInfoInferredFunctionName(TNode<ScopeInfo> p_o) {
return LoadScopeInfoInferredFunctionName_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=152&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScopeInfoInferredFunctionName(TNode<ScopeInfo> p_o, TNode<PrimitiveHeapObject> p_v) {
return StoreScopeInfoInferredFunctionName_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=156&c=3
TorqueStructSlice_PositionInfo_MutableReference_PositionInfo_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceScopeInfoPositionInfo(TNode<ScopeInfo> p_o) {
return FieldSliceScopeInfoPositionInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=164&c=3
TorqueStructSlice_TheHole_OR_ScopeInfo_MutableReference_TheHole_OR_ScopeInfo_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceScopeInfoOuterScopeInfo(TNode<ScopeInfo> p_o) {
return FieldSliceScopeInfoOuterScopeInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=164&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadScopeInfoOuterScopeInfo(TNode<ScopeInfo> p_o) {
return LoadScopeInfoOuterScopeInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=164&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScopeInfoOuterScopeInfo(TNode<ScopeInfo> p_o, TNode<HeapObject> p_v) {
return StoreScopeInfoOuterScopeInfo_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=169&c=3
TorqueStructSlice_HashTable_MutableReference_HashTable_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceScopeInfoLocalsBlockList(TNode<ScopeInfo> p_o) {
return FieldSliceScopeInfoLocalsBlockList_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=169&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadScopeInfoLocalsBlockList(TNode<ScopeInfo> p_o) {
return LoadScopeInfoLocalsBlockList_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=169&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScopeInfoLocalsBlockList(TNode<ScopeInfo> p_o, TNode<FixedArray> p_v) {
return StoreScopeInfoLocalsBlockList_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=174&c=3
TorqueStructSlice_SourceTextModuleInfo_MutableReference_SourceTextModuleInfo_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceScopeInfoModuleInfo(TNode<ScopeInfo> p_o) {
return FieldSliceScopeInfoModuleInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=174&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadScopeInfoModuleInfo(TNode<ScopeInfo> p_o) {
return LoadScopeInfoModuleInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=174&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScopeInfoModuleInfo(TNode<ScopeInfo> p_o, TNode<FixedArray> p_v) {
return StoreScopeInfoModuleInfo_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=176&c=9
TorqueStructSlice_Smi_ConstReference_Smi_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceScopeInfoModuleVariableCount(TNode<ScopeInfo> p_o) {
return FieldSliceScopeInfoModuleVariableCount_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=176&c=9
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScopeInfoModuleVariableCount(TNode<ScopeInfo> p_o) {
return LoadScopeInfoModuleVariableCount_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=178&c=3
TorqueStructSlice_ModuleVariable_MutableReference_ModuleVariable_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceScopeInfoModuleVariables(TNode<ScopeInfo> p_o) {
return FieldSliceScopeInfoModuleVariables_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=19&c=3
TorqueStructSlice_float64_or_hole_MutableReference_float64_or_hole_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceFixedDoubleArrayFloats(TNode<FixedDoubleArray> p_o) {
return FieldSliceFixedDoubleArrayFloats_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=6&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadBreakPointId(TNode<BreakPoint> p_o) {
return LoadBreakPointId_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=6&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreBreakPointId(TNode<BreakPoint> p_o, TNode<Smi> p_v) {
return StoreBreakPointId_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=7&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadBreakPointCondition(TNode<BreakPoint> p_o) {
return LoadBreakPointCondition_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=7&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreBreakPointCondition(TNode<BreakPoint> p_o, TNode<String> p_v) {
return StoreBreakPointCondition_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=12&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadBreakPointInfoSourcePosition(TNode<BreakPointInfo> p_o) {
return LoadBreakPointInfoSourcePosition_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=12&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreBreakPointInfoSourcePosition(TNode<BreakPointInfo> p_o, TNode<Smi> p_v) {
return StoreBreakPointInfoSourcePosition_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=14&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadBreakPointInfoBreakPoints(TNode<BreakPointInfo> p_o) {
return LoadBreakPointInfoBreakPoints_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreBreakPointInfoBreakPoints(TNode<BreakPointInfo> p_o, TNode<HeapObject> p_v) {
return StoreBreakPointInfoBreakPoints_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=34&c=3
TNode<SharedFunctionInfo> TorqueGeneratedExportedMacrosAssembler::LoadDebugInfoShared(TNode<DebugInfo> p_o) {
return LoadDebugInfoShared_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=34&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreDebugInfoShared(TNode<DebugInfo> p_o, TNode<SharedFunctionInfo> p_v) {
return StoreDebugInfoShared_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=36&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadDebugInfoDebuggerHints(TNode<DebugInfo> p_o) {
return LoadDebugInfoDebuggerHints_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=36&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreDebugInfoDebuggerHints(TNode<DebugInfo> p_o, TNode<Smi> p_v) {
return StoreDebugInfoDebuggerHints_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=38&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadDebugInfoScript(TNode<DebugInfo> p_o) {
return LoadDebugInfoScript_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=38&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreDebugInfoScript(TNode<DebugInfo> p_o, TNode<HeapObject> p_v) {
return StoreDebugInfoScript_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=43&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadDebugInfoOriginalBytecodeArray(TNode<DebugInfo> p_o) {
return LoadDebugInfoOriginalBytecodeArray_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=43&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreDebugInfoOriginalBytecodeArray(TNode<DebugInfo> p_o, TNode<HeapObject> p_v) {
return StoreDebugInfoOriginalBytecodeArray_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=48&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadDebugInfoDebugBytecodeArray(TNode<DebugInfo> p_o) {
return LoadDebugInfoDebugBytecodeArray_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=48&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreDebugInfoDebugBytecodeArray(TNode<DebugInfo> p_o, TNode<HeapObject> p_v) {
return StoreDebugInfoDebugBytecodeArray_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=50&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadDebugInfoBreakPoints(TNode<DebugInfo> p_o) {
return LoadDebugInfoBreakPoints_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=50&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreDebugInfoBreakPoints(TNode<DebugInfo> p_o, TNode<FixedArray> p_v) {
return StoreDebugInfoBreakPoints_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=52&c=36
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadDebugInfoFlags(TNode<DebugInfo> p_o) {
return LoadDebugInfoFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=52&c=36
void TorqueGeneratedExportedMacrosAssembler::StoreDebugInfoFlags(TNode<DebugInfo> p_o, TNode<Smi> p_v) {
return StoreDebugInfoFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=53&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadDebugInfoCoverageInfo(TNode<DebugInfo> p_o) {
return LoadDebugInfoCoverageInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=53&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreDebugInfoCoverageInfo(TNode<DebugInfo> p_o, TNode<HeapObject> p_v) {
return StoreDebugInfoCoverageInfo_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=67&c=9
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadCoverageInfoSlotCount(TNode<CoverageInfo> p_o) {
return LoadCoverageInfoSlotCount_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=68&c=3
TorqueStructSlice_CoverageInfoSlot_MutableReference_CoverageInfoSlot_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceCoverageInfoSlots(TNode<CoverageInfo> p_o) {
return FieldSliceCoverageInfoSlots_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=83&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadStackFrameInfoSharedOrScript(TNode<StackFrameInfo> p_o) {
return LoadStackFrameInfoSharedOrScript_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=83&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreStackFrameInfoSharedOrScript(TNode<StackFrameInfo> p_o, TNode<HeapObject> p_v) {
return StoreStackFrameInfoSharedOrScript_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=84&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadStackFrameInfoFunctionName(TNode<StackFrameInfo> p_o) {
return LoadStackFrameInfoFunctionName_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=84&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreStackFrameInfoFunctionName(TNode<StackFrameInfo> p_o, TNode<String> p_v) {
return StoreStackFrameInfoFunctionName_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=85&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadStackFrameInfoFlags(TNode<StackFrameInfo> p_o) {
return LoadStackFrameInfoFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=85&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreStackFrameInfoFlags(TNode<StackFrameInfo> p_o, TNode<Smi> p_v) {
return StoreStackFrameInfoFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=121&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadErrorStackDataCallSiteInfosOrFormattedStack(TNode<ErrorStackData> p_o) {
return LoadErrorStackDataCallSiteInfosOrFormattedStack_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=121&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreErrorStackDataCallSiteInfosOrFormattedStack(TNode<ErrorStackData> p_o, TNode<Object> p_v) {
return StoreErrorStackDataCallSiteInfosOrFormattedStack_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=128&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadErrorStackDataLimitOrStackFrameInfos(TNode<ErrorStackData> p_o) {
return LoadErrorStackDataLimitOrStackFrameInfos_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=128&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreErrorStackDataLimitOrStackFrameInfos(TNode<ErrorStackData> p_o, TNode<Object> p_v) {
return StoreErrorStackDataLimitOrStackFrameInfos_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=132&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadPromiseOnStackPrev(TNode<PromiseOnStack> p_o) {
return LoadPromiseOnStackPrev_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=132&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseOnStackPrev(TNode<PromiseOnStack> p_o, TNode<Object> p_v) {
return StorePromiseOnStackPrev_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=133&c=3
TNode<MaybeObject> TorqueGeneratedExportedMacrosAssembler::LoadPromiseOnStackPromise(TNode<PromiseOnStack> p_o) {
return LoadPromiseOnStackPromise_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=133&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseOnStackPromise(TNode<PromiseOnStack> p_o, TNode<MaybeObject> p_v) {
return StorePromiseOnStackPromise_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=6&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadEnumCacheKeys(TNode<EnumCache> p_o) {
return LoadEnumCacheKeys_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=6&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreEnumCacheKeys(TNode<EnumCache> p_o, TNode<FixedArray> p_v) {
return StoreEnumCacheKeys_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=7&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadEnumCacheIndices(TNode<EnumCache> p_o) {
return LoadEnumCacheIndices_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=7&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreEnumCacheIndices(TNode<EnumCache> p_o, TNode<FixedArray> p_v) {
return StoreEnumCacheIndices_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=15&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadClassPositionsStart(TNode<ClassPositions> p_o) {
return LoadClassPositionsStart_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=15&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreClassPositionsStart(TNode<ClassPositions> p_o, TNode<Smi> p_v) {
return StoreClassPositionsStart_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=16&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadClassPositionsEnd(TNode<ClassPositions> p_o) {
return LoadClassPositionsEnd_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=16&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreClassPositionsEnd(TNode<ClassPositions> p_o, TNode<Smi> p_v) {
return StoreClassPositionsEnd_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=20&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessorPairGetter(TNode<AccessorPair> p_o) {
return LoadAccessorPairGetter_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=20&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorPairGetter(TNode<AccessorPair> p_o, TNode<Object> p_v) {
return StoreAccessorPairGetter_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=21&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessorPairSetter(TNode<AccessorPair> p_o) {
return LoadAccessorPairSetter_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=21&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorPairSetter(TNode<AccessorPair> p_o, TNode<Object> p_v) {
return StoreAccessorPairSetter_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=20&c=9
TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadDescriptorArrayNumberOfAllDescriptors(TNode<DescriptorArray> p_o) {
return LoadDescriptorArrayNumberOfAllDescriptors_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=21&c=3
TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadDescriptorArrayNumberOfDescriptors(TNode<DescriptorArray> p_o) {
return LoadDescriptorArrayNumberOfDescriptors_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=21&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreDescriptorArrayNumberOfDescriptors(TNode<DescriptorArray> p_o, TNode<Uint16T> p_v) {
return StoreDescriptorArrayNumberOfDescriptors_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=22&c=3
TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadDescriptorArrayRawNumberOfMarkedDescriptors(TNode<DescriptorArray> p_o) {
return LoadDescriptorArrayRawNumberOfMarkedDescriptors_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=22&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreDescriptorArrayRawNumberOfMarkedDescriptors(TNode<DescriptorArray> p_o, TNode<Uint16T> p_v) {
return StoreDescriptorArrayRawNumberOfMarkedDescriptors_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=23&c=3
TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadDescriptorArrayFiller16Bits(TNode<DescriptorArray> p_o) {
return LoadDescriptorArrayFiller16Bits_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=23&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreDescriptorArrayFiller16Bits(TNode<DescriptorArray> p_o, TNode<Uint16T> p_v) {
return StoreDescriptorArrayFiller16Bits_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=24&c=3
TNode<EnumCache> TorqueGeneratedExportedMacrosAssembler::LoadDescriptorArrayEnumCache(TNode<DescriptorArray> p_o) {
return LoadDescriptorArrayEnumCache_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=24&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreDescriptorArrayEnumCache(TNode<DescriptorArray> p_o, TNode<EnumCache> p_v) {
return StoreDescriptorArrayEnumCache_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=25&c=3
TorqueStructSlice_DescriptorEntry_MutableReference_DescriptorEntry_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceDescriptorArrayDescriptors(TNode<DescriptorArray> p_o) {
return FieldSliceDescriptorArrayDescriptors_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/embedder-data-array.tq?l=7&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadEmbedderDataArrayLength(TNode<EmbedderDataArray> p_o) {
return LoadEmbedderDataArrayLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/embedder-data-array.tq?l=7&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreEmbedderDataArrayLength(TNode<EmbedderDataArray> p_o, TNode<Smi> p_v) {
return StoreEmbedderDataArrayLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-cell.tq?l=6&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackCellValue(TNode<FeedbackCell> p_o) {
return LoadFeedbackCellValue_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-cell.tq?l=6&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackCellValue(TNode<FeedbackCell> p_o, TNode<HeapObject> p_v) {
return StoreFeedbackCellValue_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-cell.tq?l=7&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackCellInterruptBudget(TNode<FeedbackCell> p_o) {
return LoadFeedbackCellInterruptBudget_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-cell.tq?l=7&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackCellInterruptBudget(TNode<FeedbackCell> p_o, TNode<Int32T> p_v) {
return StoreFeedbackCellInterruptBudget_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=20&c=9
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorLength(TNode<FeedbackVector> p_o) {
return LoadFeedbackVectorLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=21&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorInvocationCount(TNode<FeedbackVector> p_o) {
return LoadFeedbackVectorInvocationCount_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=21&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackVectorInvocationCount(TNode<FeedbackVector> p_o, TNode<Int32T> p_v) {
return StoreFeedbackVectorInvocationCount_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=22&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorProfilerTicks(TNode<FeedbackVector> p_o) {
return LoadFeedbackVectorProfilerTicks_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=22&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackVectorProfilerTicks(TNode<FeedbackVector> p_o, TNode<Int32T> p_v) {
return StoreFeedbackVectorProfilerTicks_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=26&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorFlags(TNode<FeedbackVector> p_o) {
return LoadFeedbackVectorFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=26&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackVectorFlags(TNode<FeedbackVector> p_o, TNode<Uint32T> p_v) {
return StoreFeedbackVectorFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=27&c=3
TNode<SharedFunctionInfo> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorSharedFunctionInfo(TNode<FeedbackVector> p_o) {
return LoadFeedbackVectorSharedFunctionInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=27&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackVectorSharedFunctionInfo(TNode<FeedbackVector> p_o, TNode<SharedFunctionInfo> p_v) {
return StoreFeedbackVectorSharedFunctionInfo_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=28&c=3
TNode<ClosureFeedbackCellArray> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorClosureFeedbackCellArray(TNode<FeedbackVector> p_o) {
return LoadFeedbackVectorClosureFeedbackCellArray_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=28&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackVectorClosureFeedbackCellArray(TNode<FeedbackVector> p_o, TNode<ClosureFeedbackCellArray> p_v) {
return StoreFeedbackVectorClosureFeedbackCellArray_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=29&c=31
TNode<MaybeObject> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorMaybeOptimizedCode(TNode<FeedbackVector> p_o) {
return LoadFeedbackVectorMaybeOptimizedCode_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=29&c=31
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackVectorMaybeOptimizedCode(TNode<FeedbackVector> p_o, TNode<MaybeObject> p_v) {
return StoreFeedbackVectorMaybeOptimizedCode_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=31&c=19
TorqueStructSlice_MaybeObject_MutableReference_MaybeObject_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceFeedbackVectorRawFeedbackSlots(TNode<FeedbackVector> p_o) {
return FieldSliceFeedbackVectorRawFeedbackSlots_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=31&c=19
TNode<MaybeObject> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorRawFeedbackSlots(TNode<FeedbackVector> p_o, TNode<IntPtrT> p_i) {
return LoadFeedbackVectorRawFeedbackSlots_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=31&c=19
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackVectorRawFeedbackSlots(TNode<FeedbackVector> p_o, TNode<IntPtrT> p_i, TNode<MaybeObject> p_v) {
return StoreFeedbackVectorRawFeedbackSlots_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=49
TorqueStructSlice_uint8_MutableReference_uint8_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceByteArrayBytes(TNode<ByteArray> p_o) {
return FieldSliceByteArrayBytes_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=49
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadByteArrayBytes(TNode<ByteArray> p_o, TNode<IntPtrT> p_i) {
return LoadByteArrayBytes_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=49
void TorqueGeneratedExportedMacrosAssembler::StoreByteArrayBytes(TNode<ByteArray> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v) {
return StoreByteArrayBytes_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=42&c=9
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWeakArrayListCapacity(TNode<WeakArrayList> p_o) {
return LoadWeakArrayListCapacity_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=43&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWeakArrayListLength(TNode<WeakArrayList> p_o) {
return LoadWeakArrayListLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=43&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWeakArrayListLength(TNode<WeakArrayList> p_o, TNode<Smi> p_v) {
return StoreWeakArrayListLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=44&c=19
TorqueStructSlice_MaybeObject_MutableReference_MaybeObject_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceWeakArrayListObjects(TNode<WeakArrayList> p_o) {
return FieldSliceWeakArrayListObjects_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=44&c=19
TNode<MaybeObject> TorqueGeneratedExportedMacrosAssembler::LoadWeakArrayListObjects(TNode<WeakArrayList> p_o, TNode<IntPtrT> p_i) {
return LoadWeakArrayListObjects_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=44&c=19
void TorqueGeneratedExportedMacrosAssembler::StoreWeakArrayListObjects(TNode<WeakArrayList> p_o, TNode<IntPtrT> p_i, TNode<MaybeObject> p_v) {
return StoreWeakArrayListObjects_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/free-space.tq?l=6&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadFreeSpaceSize(TNode<FreeSpace> p_o) {
return LoadFreeSpaceSize_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/free-space.tq?l=6&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFreeSpaceSize(TNode<FreeSpace> p_o, TNode<Smi> p_v) {
return StoreFreeSpaceSize_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/free-space.tq?l=7&c=3
TNode<MaybeObject> TorqueGeneratedExportedMacrosAssembler::LoadFreeSpaceNext(TNode<FreeSpace> p_o) {
return LoadFreeSpaceNext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/free-space.tq?l=7&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFreeSpaceNext(TNode<FreeSpace> p_o, TNode<MaybeObject> p_v) {
return StoreFreeSpaceNext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=15&c=3
TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayBufferByteLength(TNode<JSArrayBuffer> p_o) {
return LoadJSArrayBufferByteLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=15&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayBufferByteLength(TNode<JSArrayBuffer> p_o, TNode<UintPtrT> p_v) {
return StoreJSArrayBufferByteLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=16&c=3
TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayBufferMaxByteLength(TNode<JSArrayBuffer> p_o) {
return LoadJSArrayBufferMaxByteLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=16&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayBufferMaxByteLength(TNode<JSArrayBuffer> p_o, TNode<UintPtrT> p_v) {
return StoreJSArrayBufferMaxByteLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=18&c=3
TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayBufferBackingStore(TNode<JSArrayBuffer> p_o) {
return LoadJSArrayBufferBackingStore_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=18&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayBufferBackingStore(TNode<JSArrayBuffer> p_o, TNode<RawPtrT> p_v) {
return StoreJSArrayBufferBackingStore_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=19&c=3
TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayBufferExtension(TNode<JSArrayBuffer> p_o) {
return LoadJSArrayBufferExtension_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=19&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayBufferExtension(TNode<JSArrayBuffer> p_o, TNode<RawPtrT> p_v) {
return StoreJSArrayBufferExtension_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=20&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayBufferBitField(TNode<JSArrayBuffer> p_o) {
return LoadJSArrayBufferBitField_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=20&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayBufferBitField(TNode<JSArrayBuffer> p_o, TNode<Uint32T> p_v) {
return StoreJSArrayBufferBitField_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=105&c=3
TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadJSDataViewDataPointer(TNode<JSDataView> p_o) {
return LoadJSDataViewDataPointer_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=105&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDataViewDataPointer(TNode<JSDataView> p_o, TNode<RawPtrT> p_v) {
return StoreJSDataViewDataPointer_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=8&c=3
TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayIteratorIteratedObject(TNode<JSArrayIterator> p_o) {
return LoadJSArrayIteratorIteratedObject_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayIteratorIteratedObject(TNode<JSArrayIterator> p_o, TNode<JSReceiver> p_v) {
return StoreJSArrayIteratorIteratedObject_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=33&c=3
TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayIteratorNextIndex(TNode<JSArrayIterator> p_o) {
return LoadJSArrayIteratorNextIndex_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=33&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayIteratorNextIndex(TNode<JSArrayIterator> p_o, TNode<Number> p_v) {
return StoreJSArrayIteratorNextIndex_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=35&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayIteratorKind(TNode<JSArrayIterator> p_o) {
return LoadJSArrayIteratorKind_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=35&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayIteratorKind(TNode<JSArrayIterator> p_o, TNode<Smi> p_v) {
return StoreJSArrayIteratorKind_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=56&c=3
TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayLength(TNode<JSArray> p_o) {
return LoadJSArrayLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=56&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayLength(TNode<JSArray> p_o, TNode<Number> p_v) {
return StoreJSArrayLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection-iterator.tq?l=8&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSCollectionIteratorTable(TNode<JSCollectionIterator> p_o) {
return LoadJSCollectionIteratorTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection-iterator.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSCollectionIteratorTable(TNode<JSCollectionIterator> p_o, TNode<Object> p_v) {
return StoreJSCollectionIteratorTable_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection-iterator.tq?l=10&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSCollectionIteratorIndex(TNode<JSCollectionIterator> p_o) {
return LoadJSCollectionIteratorIndex_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection-iterator.tq?l=10&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSCollectionIteratorIndex(TNode<JSCollectionIterator> p_o, TNode<Object> p_v) {
return StoreJSCollectionIteratorIndex_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=8&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSCollectionTable(TNode<JSCollection> p_o) {
return LoadJSCollectionTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSCollectionTable(TNode<JSCollection> p_o, TNode<Object> p_v) {
return StoreJSCollectionTable_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=16&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSWeakCollectionTable(TNode<JSWeakCollection> p_o) {
return LoadJSWeakCollectionTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=16&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSWeakCollectionTable(TNode<JSWeakCollection> p_o, TNode<Object> p_v) {
return StoreJSWeakCollectionTable_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=6&c=3
TNode<JSFunction> TorqueGeneratedExportedMacrosAssembler::LoadJSGeneratorObjectFunction(TNode<JSGeneratorObject> p_o) {
return LoadJSGeneratorObjectFunction_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=6&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSGeneratorObjectFunction(TNode<JSGeneratorObject> p_o, TNode<JSFunction> p_v) {
return StoreJSGeneratorObjectFunction_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=7&c=3
TNode<Context> TorqueGeneratedExportedMacrosAssembler::LoadJSGeneratorObjectContext(TNode<JSGeneratorObject> p_o) {
return LoadJSGeneratorObjectContext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=7&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSGeneratorObjectContext(TNode<JSGeneratorObject> p_o, TNode<Context> p_v) {
return StoreJSGeneratorObjectContext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=8&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSGeneratorObjectReceiver(TNode<JSGeneratorObject> p_o) {
return LoadJSGeneratorObjectReceiver_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSGeneratorObjectReceiver(TNode<JSGeneratorObject> p_o, TNode<Object> p_v) {
return StoreJSGeneratorObjectReceiver_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=14&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSGeneratorObjectInputOrDebugPos(TNode<JSGeneratorObject> p_o) {
return LoadJSGeneratorObjectInputOrDebugPos_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSGeneratorObjectInputOrDebugPos(TNode<JSGeneratorObject> p_o, TNode<Object> p_v) {
return StoreJSGeneratorObjectInputOrDebugPos_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=17&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSGeneratorObjectResumeMode(TNode<JSGeneratorObject> p_o) {
return LoadJSGeneratorObjectResumeMode_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=17&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSGeneratorObjectResumeMode(TNode<JSGeneratorObject> p_o, TNode<Smi> p_v) {
return StoreJSGeneratorObjectResumeMode_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=22&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSGeneratorObjectContinuation(TNode<JSGeneratorObject> p_o) {
return LoadJSGeneratorObjectContinuation_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=22&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSGeneratorObjectContinuation(TNode<JSGeneratorObject> p_o, TNode<Smi> p_v) {
return StoreJSGeneratorObjectContinuation_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=25&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadJSGeneratorObjectParametersAndRegisters(TNode<JSGeneratorObject> p_o) {
return LoadJSGeneratorObjectParametersAndRegisters_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=25&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSGeneratorObjectParametersAndRegisters(TNode<JSGeneratorObject> p_o, TNode<FixedArray> p_v) {
return StoreJSGeneratorObjectParametersAndRegisters_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=29&c=3
TNode<JSPromise> TorqueGeneratedExportedMacrosAssembler::LoadJSAsyncFunctionObjectPromise(TNode<JSAsyncFunctionObject> p_o) {
return LoadJSAsyncFunctionObjectPromise_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=29&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSAsyncFunctionObjectPromise(TNode<JSAsyncFunctionObject> p_o, TNode<JSPromise> p_v) {
return StoreJSAsyncFunctionObjectPromise_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=35&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSAsyncGeneratorObjectQueue(TNode<JSAsyncGeneratorObject> p_o) {
return LoadJSAsyncGeneratorObjectQueue_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=35&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSAsyncGeneratorObjectQueue(TNode<JSAsyncGeneratorObject> p_o, TNode<HeapObject> p_v) {
return StoreJSAsyncGeneratorObjectQueue_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=37&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSAsyncGeneratorObjectIsAwaiting(TNode<JSAsyncGeneratorObject> p_o) {
return LoadJSAsyncGeneratorObjectIsAwaiting_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=37&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSAsyncGeneratorObjectIsAwaiting(TNode<JSAsyncGeneratorObject> p_o, TNode<Smi> p_v) {
return StoreJSAsyncGeneratorObjectIsAwaiting_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=41&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadAsyncGeneratorRequestNext(TNode<AsyncGeneratorRequest> p_o) {
return LoadAsyncGeneratorRequestNext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=41&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAsyncGeneratorRequestNext(TNode<AsyncGeneratorRequest> p_o, TNode<HeapObject> p_v) {
return StoreAsyncGeneratorRequestNext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=42&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadAsyncGeneratorRequestResumeMode(TNode<AsyncGeneratorRequest> p_o) {
return LoadAsyncGeneratorRequestResumeMode_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=42&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAsyncGeneratorRequestResumeMode(TNode<AsyncGeneratorRequest> p_o, TNode<Smi> p_v) {
return StoreAsyncGeneratorRequestResumeMode_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=43&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAsyncGeneratorRequestValue(TNode<AsyncGeneratorRequest> p_o) {
return LoadAsyncGeneratorRequestValue_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=43&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAsyncGeneratorRequestValue(TNode<AsyncGeneratorRequest> p_o, TNode<Object> p_v) {
return StoreAsyncGeneratorRequestValue_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=44&c=3
TNode<JSPromise> TorqueGeneratedExportedMacrosAssembler::LoadAsyncGeneratorRequestPromise(TNode<AsyncGeneratorRequest> p_o) {
return LoadAsyncGeneratorRequestPromise_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=44&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAsyncGeneratorRequestPromise(TNode<AsyncGeneratorRequest> p_o, TNode<JSPromise> p_v) {
return StoreAsyncGeneratorRequestPromise_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=43&c=50
TNode<ExternalPointerT> TorqueGeneratedExportedMacrosAssembler::LoadJSExternalObjectValue(TNode<JSExternalObject> p_o) {
return LoadJSExternalObjectValue_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=43&c=50
void TorqueGeneratedExportedMacrosAssembler::StoreJSExternalObjectValue(TNode<JSExternalObject> p_o, TNode<ExternalPointerT> p_v) {
return StoreJSExternalObjectValue_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=106&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSGlobalProxyNativeContext(TNode<JSGlobalProxy> p_o) {
return LoadJSGlobalProxyNativeContext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=106&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSGlobalProxyNativeContext(TNode<JSGlobalProxy> p_o, TNode<Object> p_v) {
return StoreJSGlobalProxyNativeContext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=111&c=3
TNode<NativeContext> TorqueGeneratedExportedMacrosAssembler::LoadJSGlobalObjectNativeContext(TNode<JSGlobalObject> p_o) {
return LoadJSGlobalObjectNativeContext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=111&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSGlobalObjectNativeContext(TNode<JSGlobalObject> p_o, TNode<NativeContext> p_v) {
return StoreJSGlobalObjectNativeContext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=114&c=3
TNode<JSGlobalProxy> TorqueGeneratedExportedMacrosAssembler::LoadJSGlobalObjectGlobalProxy(TNode<JSGlobalObject> p_o) {
return LoadJSGlobalObjectGlobalProxy_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=114&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSGlobalObjectGlobalProxy(TNode<JSGlobalObject> p_o, TNode<JSGlobalProxy> p_v) {
return StoreJSGlobalObjectGlobalProxy_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=117&c=66
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSPrimitiveWrapperValue(TNode<JSPrimitiveWrapper> p_o) {
return LoadJSPrimitiveWrapperValue_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=117&c=66
void TorqueGeneratedExportedMacrosAssembler::StoreJSPrimitiveWrapperValue(TNode<JSPrimitiveWrapper> p_o, TNode<Object> p_v) {
return StoreJSPrimitiveWrapperValue_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=121&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectMessageType(TNode<JSMessageObject> p_o) {
return LoadJSMessageObjectMessageType_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=121&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectMessageType(TNode<JSMessageObject> p_o, TNode<Smi> p_v) {
return StoreJSMessageObjectMessageType_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=123&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectArgument(TNode<JSMessageObject> p_o) {
return LoadJSMessageObjectArgument_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=123&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectArgument(TNode<JSMessageObject> p_o, TNode<Object> p_v) {
return StoreJSMessageObjectArgument_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=125&c=3
TNode<Script> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectScript(TNode<JSMessageObject> p_o) {
return LoadJSMessageObjectScript_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=125&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectScript(TNode<JSMessageObject> p_o, TNode<Script> p_v) {
return StoreJSMessageObjectScript_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=127&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectStackFrames(TNode<JSMessageObject> p_o) {
return LoadJSMessageObjectStackFrames_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=127&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectStackFrames(TNode<JSMessageObject> p_o, TNode<Object> p_v) {
return StoreJSMessageObjectStackFrames_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=128&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectSharedInfo(TNode<JSMessageObject> p_o) {
return LoadJSMessageObjectSharedInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=128&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectSharedInfo(TNode<JSMessageObject> p_o, TNode<HeapObject> p_v) {
return StoreJSMessageObjectSharedInfo_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=132&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectBytecodeOffset(TNode<JSMessageObject> p_o) {
return LoadJSMessageObjectBytecodeOffset_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=132&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectBytecodeOffset(TNode<JSMessageObject> p_o, TNode<Smi> p_v) {
return StoreJSMessageObjectBytecodeOffset_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=133&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectStartPosition(TNode<JSMessageObject> p_o) {
return LoadJSMessageObjectStartPosition_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=133&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectStartPosition(TNode<JSMessageObject> p_o, TNode<Smi> p_v) {
return StoreJSMessageObjectStartPosition_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=134&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectEndPosition(TNode<JSMessageObject> p_o) {
return LoadJSMessageObjectEndPosition_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=134&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectEndPosition(TNode<JSMessageObject> p_o, TNode<Smi> p_v) {
return StoreJSMessageObjectEndPosition_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=135&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectErrorLevel(TNode<JSMessageObject> p_o) {
return LoadJSMessageObjectErrorLevel_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=135&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectErrorLevel(TNode<JSMessageObject> p_o, TNode<Smi> p_v) {
return StoreJSMessageObjectErrorLevel_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=142&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDateValue(TNode<JSDate> p_o) {
return LoadJSDateValue_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=142&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateValue(TNode<JSDate> p_o, TNode<Object> p_v) {
return StoreJSDateValue_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=145&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDateYear(TNode<JSDate> p_o) {
return LoadJSDateYear_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=145&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateYear(TNode<JSDate> p_o, TNode<Object> p_v) {
return StoreJSDateYear_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=146&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDateMonth(TNode<JSDate> p_o) {
return LoadJSDateMonth_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=146&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateMonth(TNode<JSDate> p_o, TNode<Object> p_v) {
return StoreJSDateMonth_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=147&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDateDay(TNode<JSDate> p_o) {
return LoadJSDateDay_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=147&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateDay(TNode<JSDate> p_o, TNode<Object> p_v) {
return StoreJSDateDay_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=148&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDateWeekday(TNode<JSDate> p_o) {
return LoadJSDateWeekday_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=148&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateWeekday(TNode<JSDate> p_o, TNode<Object> p_v) {
return StoreJSDateWeekday_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=149&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDateHour(TNode<JSDate> p_o) {
return LoadJSDateHour_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=149&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateHour(TNode<JSDate> p_o, TNode<Object> p_v) {
return StoreJSDateHour_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=150&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDateMin(TNode<JSDate> p_o) {
return LoadJSDateMin_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=150&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateMin(TNode<JSDate> p_o, TNode<Object> p_v) {
return StoreJSDateMin_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=151&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDateSec(TNode<JSDate> p_o) {
return LoadJSDateSec_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=151&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateSec(TNode<JSDate> p_o, TNode<Object> p_v) {
return StoreJSDateSec_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=155&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDateCacheStamp(TNode<JSDate> p_o) {
return LoadJSDateCacheStamp_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=155&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateCacheStamp(TNode<JSDate> p_o, TNode<Object> p_v) {
return StoreJSDateCacheStamp_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=159&c=3
TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadJSAsyncFromSyncIteratorSyncIterator(TNode<JSAsyncFromSyncIterator> p_o) {
return LoadJSAsyncFromSyncIteratorSyncIterator_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=159&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSAsyncFromSyncIteratorSyncIterator(TNode<JSAsyncFromSyncIterator> p_o, TNode<JSReceiver> p_v) {
return StoreJSAsyncFromSyncIteratorSyncIterator_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=162&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSAsyncFromSyncIteratorNext(TNode<JSAsyncFromSyncIterator> p_o) {
return LoadJSAsyncFromSyncIteratorNext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=162&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSAsyncFromSyncIteratorNext(TNode<JSAsyncFromSyncIterator> p_o, TNode<Object> p_v) {
return StoreJSAsyncFromSyncIteratorNext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=167&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSStringIteratorString(TNode<JSStringIterator> p_o) {
return LoadJSStringIteratorString_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=167&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSStringIteratorString(TNode<JSStringIterator> p_o, TNode<String> p_v) {
return StoreJSStringIteratorString_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=169&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSStringIteratorIndex(TNode<JSStringIterator> p_o) {
return LoadJSStringIteratorIndex_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=169&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSStringIteratorIndex(TNode<JSStringIterator> p_o, TNode<Smi> p_v) {
return StoreJSStringIteratorIndex_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=11&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSProxyRevocableResultProxy(TNode<JSObject> p_o) {
return LoadJSProxyRevocableResultProxy_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=11&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSProxyRevocableResultProxy(TNode<JSObject> p_o, TNode<Object> p_v) {
return StoreJSProxyRevocableResultProxy_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=12&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSProxyRevocableResultRevoke(TNode<JSObject> p_o) {
return LoadJSProxyRevocableResultRevoke_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=12&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSProxyRevocableResultRevoke(TNode<JSObject> p_o, TNode<Object> p_v) {
return StoreJSProxyRevocableResultRevoke_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp-string-iterator.tq?l=13&c=3
TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpStringIteratorIteratingRegExp(TNode<JSRegExpStringIterator> p_o) {
return LoadJSRegExpStringIteratorIteratingRegExp_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp-string-iterator.tq?l=13&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpStringIteratorIteratingRegExp(TNode<JSRegExpStringIterator> p_o, TNode<JSReceiver> p_v) {
return StoreJSRegExpStringIteratorIteratingRegExp_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp-string-iterator.tq?l=15&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpStringIteratorIteratedString(TNode<JSRegExpStringIterator> p_o) {
return LoadJSRegExpStringIteratorIteratedString_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp-string-iterator.tq?l=15&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpStringIteratorIteratedString(TNode<JSRegExpStringIterator> p_o, TNode<String> p_v) {
return StoreJSRegExpStringIteratorIteratedString_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp-string-iterator.tq?l=16&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpStringIteratorFlags(TNode<JSRegExpStringIterator> p_o) {
return LoadJSRegExpStringIteratorFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp-string-iterator.tq?l=16&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpStringIteratorFlags(TNode<JSRegExpStringIterator> p_o, TNode<Smi> p_v) {
return StoreJSRegExpStringIteratorFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=17&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpData(TNode<JSRegExp> p_o) {
return LoadJSRegExpData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=17&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpData(TNode<JSRegExp> p_o, TNode<HeapObject> p_v) {
return StoreJSRegExpData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=18&c=3
TNode<PrimitiveHeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpSource(TNode<JSRegExp> p_o) {
return LoadJSRegExpSource_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=18&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpSource(TNode<JSRegExp> p_o, TNode<PrimitiveHeapObject> p_v) {
return StoreJSRegExpSource_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=19&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpFlags(TNode<JSRegExp> p_o) {
return LoadJSRegExpFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=19&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpFlags(TNode<JSRegExp> p_o, TNode<Object> p_v) {
return StoreJSRegExpFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=44&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpResultIndex(TNode<JSArray> p_o) {
return LoadJSRegExpResultIndex_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=44&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpResultIndex(TNode<JSArray> p_o, TNode<Object> p_v) {
return StoreJSRegExpResultIndex_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=45&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpResultInput(TNode<JSArray> p_o) {
return LoadJSRegExpResultInput_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=45&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpResultInput(TNode<JSArray> p_o, TNode<Object> p_v) {
return StoreJSRegExpResultInput_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=46&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpResultGroups(TNode<JSArray> p_o) {
return LoadJSRegExpResultGroups_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=46&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpResultGroups(TNode<JSArray> p_o, TNode<Object> p_v) {
return StoreJSRegExpResultGroups_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=49&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpResultNames(TNode<JSArray> p_o) {
return LoadJSRegExpResultNames_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=49&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpResultNames(TNode<JSArray> p_o, TNode<HeapObject> p_v) {
return StoreJSRegExpResultNames_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=50&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpResultRegexpInput(TNode<JSArray> p_o) {
return LoadJSRegExpResultRegexpInput_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=50&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpResultRegexpInput(TNode<JSArray> p_o, TNode<String> p_v) {
return StoreJSRegExpResultRegexpInput_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=51&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpResultRegexpLastIndex(TNode<JSArray> p_o) {
return LoadJSRegExpResultRegexpLastIndex_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=51&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpResultRegexpLastIndex(TNode<JSArray> p_o, TNode<Smi> p_v) {
return StoreJSRegExpResultRegexpLastIndex_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=55&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpResultWithIndicesIndices(TNode<JSRegExpResult> p_o) {
return LoadJSRegExpResultWithIndicesIndices_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=55&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpResultWithIndicesIndices(TNode<JSRegExpResult> p_o, TNode<Object> p_v) {
return StoreJSRegExpResultWithIndicesIndices_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=61&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpResultIndicesGroups(TNode<JSArray> p_o) {
return LoadJSRegExpResultIndicesGroups_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=61&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpResultIndicesGroups(TNode<JSArray> p_o, TNode<Object> p_v) {
return StoreJSRegExpResultIndicesGroups_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shadow-realms.tq?l=5&c=47
TNode<NativeContext> TorqueGeneratedExportedMacrosAssembler::LoadJSShadowRealmNativeContext(TNode<JSShadowRealm> p_o) {
return LoadJSShadowRealmNativeContext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shadow-realms.tq?l=5&c=47
void TorqueGeneratedExportedMacrosAssembler::StoreJSShadowRealmNativeContext(TNode<JSShadowRealm> p_o, TNode<NativeContext> p_v) {
return StoreJSShadowRealmNativeContext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=38&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSTemporalCalendarFlags(TNode<JSTemporalCalendar> p_o) {
return LoadJSTemporalCalendarFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=38&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTemporalCalendarFlags(TNode<JSTemporalCalendar> p_o, TNode<Smi> p_v) {
return StoreJSTemporalCalendarFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=42&c=3
TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadJSTemporalDurationYears(TNode<JSTemporalDuration> p_o) {
return LoadJSTemporalDurationYears_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=42&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTemporalDurationYears(TNode<JSTemporalDuration> p_o, TNode<Number> p_v) {
return StoreJSTemporalDurationYears_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=43&c=3
TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadJSTemporalDurationMonths(TNode<JSTemporalDuration> p_o) {
return LoadJSTemporalDurationMonths_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=43&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTemporalDurationMonths(TNode<JSTemporalDuration> p_o, TNode<Number> p_v) {
return StoreJSTemporalDurationMonths_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=44&c=3
TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadJSTemporalDurationWeeks(TNode<JSTemporalDuration> p_o) {
return LoadJSTemporalDurationWeeks_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=44&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTemporalDurationWeeks(TNode<JSTemporalDuration> p_o, TNode<Number> p_v) {
return StoreJSTemporalDurationWeeks_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=45&c=3
TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadJSTemporalDurationDays(TNode<JSTemporalDuration> p_o) {
return LoadJSTemporalDurationDays_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=45&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTemporalDurationDays(TNode<JSTemporalDuration> p_o, TNode<Number> p_v) {
return StoreJSTemporalDurationDays_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=46&c=3
TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadJSTemporalDurationHours(TNode<JSTemporalDuration> p_o) {
return LoadJSTemporalDurationHours_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=46&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTemporalDurationHours(TNode<JSTemporalDuration> p_o, TNode<Number> p_v) {
return StoreJSTemporalDurationHours_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=47&c=3
TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadJSTemporalDurationMinutes(TNode<JSTemporalDuration> p_o) {
return LoadJSTemporalDurationMinutes_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=47&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTemporalDurationMinutes(TNode<JSTemporalDuration> p_o, TNode<Number> p_v) {
return StoreJSTemporalDurationMinutes_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=48&c=3
TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadJSTemporalDurationSeconds(TNode<JSTemporalDuration> p_o) {
return LoadJSTemporalDurationSeconds_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=48&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTemporalDurationSeconds(TNode<JSTemporalDuration> p_o, TNode<Number> p_v) {
return StoreJSTemporalDurationSeconds_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=49&c=3
TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadJSTemporalDurationMilliseconds(TNode<JSTemporalDuration> p_o) {
return LoadJSTemporalDurationMilliseconds_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=49&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTemporalDurationMilliseconds(TNode<JSTemporalDuration> p_o, TNode<Number> p_v) {
return StoreJSTemporalDurationMilliseconds_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=50&c=3
TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadJSTemporalDurationMicroseconds(TNode<JSTemporalDuration> p_o) {
return LoadJSTemporalDurationMicroseconds_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=50&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTemporalDurationMicroseconds(TNode<JSTemporalDuration> p_o, TNode<Number> p_v) {
return StoreJSTemporalDurationMicroseconds_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=51&c=3
TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadJSTemporalDurationNanoseconds(TNode<JSTemporalDuration> p_o) {
return LoadJSTemporalDurationNanoseconds_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=51&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTemporalDurationNanoseconds(TNode<JSTemporalDuration> p_o, TNode<Number> p_v) {
return StoreJSTemporalDurationNanoseconds_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=54&c=51
TNode<BigInt> TorqueGeneratedExportedMacrosAssembler::LoadJSTemporalInstantNanoseconds(TNode<JSTemporalInstant> p_o) {
return LoadJSTemporalInstantNanoseconds_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=54&c=51
void TorqueGeneratedExportedMacrosAssembler::StoreJSTemporalInstantNanoseconds(TNode<JSTemporalInstant> p_o, TNode<BigInt> p_v) {
return StoreJSTemporalInstantNanoseconds_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=57&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSTemporalPlainDateTimeYearMonthDay(TNode<JSTemporalPlainDateTime> p_o) {
return LoadJSTemporalPlainDateTimeYearMonthDay_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=57&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTemporalPlainDateTimeYearMonthDay(TNode<JSTemporalPlainDateTime> p_o, TNode<Smi> p_v) {
return StoreJSTemporalPlainDateTimeYearMonthDay_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=58&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSTemporalPlainDateTimeHourMinuteSecond(TNode<JSTemporalPlainDateTime> p_o) {
return LoadJSTemporalPlainDateTimeHourMinuteSecond_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=58&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTemporalPlainDateTimeHourMinuteSecond(TNode<JSTemporalPlainDateTime> p_o, TNode<Smi> p_v) {
return StoreJSTemporalPlainDateTimeHourMinuteSecond_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=59&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSTemporalPlainDateTimeSecondParts(TNode<JSTemporalPlainDateTime> p_o) {
return LoadJSTemporalPlainDateTimeSecondParts_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=59&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTemporalPlainDateTimeSecondParts(TNode<JSTemporalPlainDateTime> p_o, TNode<Smi> p_v) {
return StoreJSTemporalPlainDateTimeSecondParts_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=60&c=3
TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadJSTemporalPlainDateTimeCalendar(TNode<JSTemporalPlainDateTime> p_o) {
return LoadJSTemporalPlainDateTimeCalendar_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=60&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTemporalPlainDateTimeCalendar(TNode<JSTemporalPlainDateTime> p_o, TNode<JSReceiver> p_v) {
return StoreJSTemporalPlainDateTimeCalendar_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=64&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSTemporalPlainDateYearMonthDay(TNode<JSTemporalPlainDate> p_o) {
return LoadJSTemporalPlainDateYearMonthDay_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=64&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTemporalPlainDateYearMonthDay(TNode<JSTemporalPlainDate> p_o, TNode<Smi> p_v) {
return StoreJSTemporalPlainDateYearMonthDay_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=65&c=3
TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadJSTemporalPlainDateCalendar(TNode<JSTemporalPlainDate> p_o) {
return LoadJSTemporalPlainDateCalendar_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=65&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTemporalPlainDateCalendar(TNode<JSTemporalPlainDate> p_o, TNode<JSReceiver> p_v) {
return StoreJSTemporalPlainDateCalendar_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=69&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSTemporalPlainMonthDayYearMonthDay(TNode<JSTemporalPlainMonthDay> p_o) {
return LoadJSTemporalPlainMonthDayYearMonthDay_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=69&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTemporalPlainMonthDayYearMonthDay(TNode<JSTemporalPlainMonthDay> p_o, TNode<Smi> p_v) {
return StoreJSTemporalPlainMonthDayYearMonthDay_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=70&c=3
TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadJSTemporalPlainMonthDayCalendar(TNode<JSTemporalPlainMonthDay> p_o) {
return LoadJSTemporalPlainMonthDayCalendar_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=70&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTemporalPlainMonthDayCalendar(TNode<JSTemporalPlainMonthDay> p_o, TNode<JSReceiver> p_v) {
return StoreJSTemporalPlainMonthDayCalendar_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=74&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSTemporalPlainTimeHourMinuteSecond(TNode<JSTemporalPlainTime> p_o) {
return LoadJSTemporalPlainTimeHourMinuteSecond_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=74&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTemporalPlainTimeHourMinuteSecond(TNode<JSTemporalPlainTime> p_o, TNode<Smi> p_v) {
return StoreJSTemporalPlainTimeHourMinuteSecond_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=75&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSTemporalPlainTimeSecondParts(TNode<JSTemporalPlainTime> p_o) {
return LoadJSTemporalPlainTimeSecondParts_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=75&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTemporalPlainTimeSecondParts(TNode<JSTemporalPlainTime> p_o, TNode<Smi> p_v) {
return StoreJSTemporalPlainTimeSecondParts_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=76&c=3
TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadJSTemporalPlainTimeCalendar(TNode<JSTemporalPlainTime> p_o) {
return LoadJSTemporalPlainTimeCalendar_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=76&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTemporalPlainTimeCalendar(TNode<JSTemporalPlainTime> p_o, TNode<JSReceiver> p_v) {
return StoreJSTemporalPlainTimeCalendar_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=80&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSTemporalPlainYearMonthYearMonthDay(TNode<JSTemporalPlainYearMonth> p_o) {
return LoadJSTemporalPlainYearMonthYearMonthDay_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=80&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTemporalPlainYearMonthYearMonthDay(TNode<JSTemporalPlainYearMonth> p_o, TNode<Smi> p_v) {
return StoreJSTemporalPlainYearMonthYearMonthDay_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=81&c=3
TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadJSTemporalPlainYearMonthCalendar(TNode<JSTemporalPlainYearMonth> p_o) {
return LoadJSTemporalPlainYearMonthCalendar_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=81&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTemporalPlainYearMonthCalendar(TNode<JSTemporalPlainYearMonth> p_o, TNode<JSReceiver> p_v) {
return StoreJSTemporalPlainYearMonthCalendar_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=85&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSTemporalTimeZoneFlags(TNode<JSTemporalTimeZone> p_o) {
return LoadJSTemporalTimeZoneFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=85&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTemporalTimeZoneFlags(TNode<JSTemporalTimeZone> p_o, TNode<Smi> p_v) {
return StoreJSTemporalTimeZoneFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=86&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSTemporalTimeZoneDetails(TNode<JSTemporalTimeZone> p_o) {
return LoadJSTemporalTimeZoneDetails_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=86&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTemporalTimeZoneDetails(TNode<JSTemporalTimeZone> p_o, TNode<Smi> p_v) {
return StoreJSTemporalTimeZoneDetails_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=90&c=3
TNode<BigInt> TorqueGeneratedExportedMacrosAssembler::LoadJSTemporalZonedDateTimeNanoseconds(TNode<JSTemporalZonedDateTime> p_o) {
return LoadJSTemporalZonedDateTimeNanoseconds_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=90&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTemporalZonedDateTimeNanoseconds(TNode<JSTemporalZonedDateTime> p_o, TNode<BigInt> p_v) {
return StoreJSTemporalZonedDateTimeNanoseconds_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=91&c=3
TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadJSTemporalZonedDateTimeTimeZone(TNode<JSTemporalZonedDateTime> p_o) {
return LoadJSTemporalZonedDateTimeTimeZone_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=91&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTemporalZonedDateTimeTimeZone(TNode<JSTemporalZonedDateTime> p_o, TNode<JSReceiver> p_v) {
return StoreJSTemporalZonedDateTimeTimeZone_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=92&c=3
TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadJSTemporalZonedDateTimeCalendar(TNode<JSTemporalZonedDateTime> p_o) {
return LoadJSTemporalZonedDateTimeCalendar_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=92&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTemporalZonedDateTimeCalendar(TNode<JSTemporalZonedDateTime> p_o, TNode<JSReceiver> p_v) {
return StoreJSTemporalZonedDateTimeCalendar_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=10&c=3
TNode<NativeContext> TorqueGeneratedExportedMacrosAssembler::LoadJSFinalizationRegistryNativeContext(TNode<JSFinalizationRegistry> p_o) {
return LoadJSFinalizationRegistryNativeContext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=10&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSFinalizationRegistryNativeContext(TNode<JSFinalizationRegistry> p_o, TNode<NativeContext> p_v) {
return StoreJSFinalizationRegistryNativeContext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=11&c=3
TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadJSFinalizationRegistryCleanup(TNode<JSFinalizationRegistry> p_o) {
return LoadJSFinalizationRegistryCleanup_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=11&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSFinalizationRegistryCleanup(TNode<JSFinalizationRegistry> p_o, TNode<JSReceiver> p_v) {
return StoreJSFinalizationRegistryCleanup_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=12&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSFinalizationRegistryActiveCells(TNode<JSFinalizationRegistry> p_o) {
return LoadJSFinalizationRegistryActiveCells_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=12&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSFinalizationRegistryActiveCells(TNode<JSFinalizationRegistry> p_o, TNode<HeapObject> p_v) {
return StoreJSFinalizationRegistryActiveCells_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=13&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSFinalizationRegistryClearedCells(TNode<JSFinalizationRegistry> p_o) {
return LoadJSFinalizationRegistryClearedCells_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=13&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSFinalizationRegistryClearedCells(TNode<JSFinalizationRegistry> p_o, TNode<HeapObject> p_v) {
return StoreJSFinalizationRegistryClearedCells_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=14&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSFinalizationRegistryKeyMap(TNode<JSFinalizationRegistry> p_o) {
return LoadJSFinalizationRegistryKeyMap_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSFinalizationRegistryKeyMap(TNode<JSFinalizationRegistry> p_o, TNode<Object> p_v) {
return StoreJSFinalizationRegistryKeyMap_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=17&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSFinalizationRegistryNextDirty(TNode<JSFinalizationRegistry> p_o) {
return LoadJSFinalizationRegistryNextDirty_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=17&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSFinalizationRegistryNextDirty(TNode<JSFinalizationRegistry> p_o, TNode<HeapObject> p_v) {
return StoreJSFinalizationRegistryNextDirty_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=18&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSFinalizationRegistryFlags(TNode<JSFinalizationRegistry> p_o) {
return LoadJSFinalizationRegistryFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=18&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSFinalizationRegistryFlags(TNode<JSFinalizationRegistry> p_o, TNode<Smi> p_v) {
return StoreJSFinalizationRegistryFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=42&c=43
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSWeakRefTarget(TNode<JSWeakRef> p_o) {
return LoadJSWeakRefTarget_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=42&c=43
void TorqueGeneratedExportedMacrosAssembler::StoreJSWeakRefTarget(TNode<JSWeakRef> p_o, TNode<HeapObject> p_v) {
return StoreJSWeakRefTarget_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=6&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadArrayBoilerplateDescriptionFlags(TNode<ArrayBoilerplateDescription> p_o) {
return LoadArrayBoilerplateDescriptionFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=6&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreArrayBoilerplateDescriptionFlags(TNode<ArrayBoilerplateDescription> p_o, TNode<Smi> p_v) {
return StoreArrayBoilerplateDescriptionFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=7&c=3
TNode<FixedArrayBase> TorqueGeneratedExportedMacrosAssembler::LoadArrayBoilerplateDescriptionConstantElements(TNode<ArrayBoilerplateDescription> p_o) {
return LoadArrayBoilerplateDescriptionConstantElements_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=7&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreArrayBoilerplateDescriptionConstantElements(TNode<ArrayBoilerplateDescription> p_o, TNode<FixedArrayBase> p_v) {
return StoreArrayBoilerplateDescriptionConstantElements_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=11&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadRegExpBoilerplateDescriptionData(TNode<RegExpBoilerplateDescription> p_o) {
return LoadRegExpBoilerplateDescriptionData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=11&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreRegExpBoilerplateDescriptionData(TNode<RegExpBoilerplateDescription> p_o, TNode<FixedArray> p_v) {
return StoreRegExpBoilerplateDescriptionData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=12&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadRegExpBoilerplateDescriptionSource(TNode<RegExpBoilerplateDescription> p_o) {
return LoadRegExpBoilerplateDescriptionSource_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=12&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreRegExpBoilerplateDescriptionSource(TNode<RegExpBoilerplateDescription> p_o, TNode<String> p_v) {
return StoreRegExpBoilerplateDescriptionSource_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=13&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadRegExpBoilerplateDescriptionFlags(TNode<RegExpBoilerplateDescription> p_o) {
return LoadRegExpBoilerplateDescriptionFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=13&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreRegExpBoilerplateDescriptionFlags(TNode<RegExpBoilerplateDescription> p_o, TNode<Smi> p_v) {
return StoreRegExpBoilerplateDescriptionFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=7&c=3
TNode<MaybeObject> TorqueGeneratedExportedMacrosAssembler::LoadMegaDomHandlerAccessor(TNode<MegaDomHandler> p_o) {
return LoadMegaDomHandlerAccessor_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=7&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMegaDomHandlerAccessor(TNode<MegaDomHandler> p_o, TNode<MaybeObject> p_v) {
return StoreMegaDomHandlerAccessor_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=8&c=3
TNode<MaybeObject> TorqueGeneratedExportedMacrosAssembler::LoadMegaDomHandlerContext(TNode<MegaDomHandler> p_o) {
return LoadMegaDomHandlerContext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMegaDomHandlerContext(TNode<MegaDomHandler> p_o, TNode<MaybeObject> p_v) {
return StoreMegaDomHandlerContext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=10&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadCallbackTaskCallback(TNode<CallbackTask> p_o) {
return LoadCallbackTaskCallback_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=10&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreCallbackTaskCallback(TNode<CallbackTask> p_o, TNode<Foreign> p_v) {
return StoreCallbackTaskCallback_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=11&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadCallbackTaskData(TNode<CallbackTask> p_o) {
return LoadCallbackTaskData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=11&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreCallbackTaskData(TNode<CallbackTask> p_o, TNode<Foreign> p_v) {
return StoreCallbackTaskData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=15&c=3
TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadCallableTaskCallable(TNode<CallableTask> p_o) {
return LoadCallableTaskCallable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=15&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreCallableTaskCallable(TNode<CallableTask> p_o, TNode<JSReceiver> p_v) {
return StoreCallableTaskCallable_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=16&c=3
TNode<Context> TorqueGeneratedExportedMacrosAssembler::LoadCallableTaskContext(TNode<CallableTask> p_o) {
return LoadCallableTaskContext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=16&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreCallableTaskContext(TNode<CallableTask> p_o, TNode<Context> p_v) {
return StoreCallableTaskContext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=8&c=3
TNode<ObjectHashTable> TorqueGeneratedExportedMacrosAssembler::LoadModuleExports(TNode<Module> p_o) {
return LoadModuleExports_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreModuleExports(TNode<Module> p_o, TNode<ObjectHashTable> p_v) {
return StoreModuleExports_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=10&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadModuleHash(TNode<Module> p_o) {
return LoadModuleHash_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=10&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreModuleHash(TNode<Module> p_o, TNode<Smi> p_v) {
return StoreModuleHash_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=11&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadModuleStatus(TNode<Module> p_o) {
return LoadModuleStatus_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=11&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreModuleStatus(TNode<Module> p_o, TNode<Smi> p_v) {
return StoreModuleStatus_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=12&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadModuleModuleNamespace(TNode<Module> p_o) {
return LoadModuleModuleNamespace_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=12&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreModuleModuleNamespace(TNode<Module> p_o, TNode<HeapObject> p_v) {
return StoreModuleModuleNamespace_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=14&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadModuleException(TNode<Module> p_o) {
return LoadModuleException_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreModuleException(TNode<Module> p_o, TNode<Object> p_v) {
return StoreModuleException_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=17&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadModuleTopLevelCapability(TNode<Module> p_o) {
return LoadModuleTopLevelCapability_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=17&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreModuleTopLevelCapability(TNode<Module> p_o, TNode<HeapObject> p_v) {
return StoreModuleTopLevelCapability_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=20&c=58
TNode<Module> TorqueGeneratedExportedMacrosAssembler::LoadJSModuleNamespaceModule(TNode<JSModuleNamespace> p_o) {
return LoadJSModuleNamespaceModule_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=20&c=58
void TorqueGeneratedExportedMacrosAssembler::StoreJSModuleNamespaceModule(TNode<JSModuleNamespace> p_o, TNode<Module> p_v) {
return StoreJSModuleNamespaceModule_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=23&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadScriptOrModuleResourceName(TNode<ScriptOrModule> p_o) {
return LoadScriptOrModuleResourceName_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=23&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptOrModuleResourceName(TNode<ScriptOrModule> p_o, TNode<Object> p_v) {
return StoreScriptOrModuleResourceName_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=24&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadScriptOrModuleHostDefinedOptions(TNode<ScriptOrModule> p_o) {
return LoadScriptOrModuleHostDefinedOptions_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=24&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptOrModuleHostDefinedOptions(TNode<ScriptOrModule> p_o, TNode<FixedArray> p_v) {
return StoreScriptOrModuleHostDefinedOptions_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=28&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedHashSetNumberOfElements(TNode<SmallOrderedHashSet> p_o) {
return LoadSmallOrderedHashSetNumberOfElements_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=28&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedHashSetNumberOfElements(TNode<SmallOrderedHashSet> p_o, TNode<Uint8T> p_v) {
return StoreSmallOrderedHashSetNumberOfElements_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=29&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedHashSetNumberOfDeletedElements(TNode<SmallOrderedHashSet> p_o) {
return LoadSmallOrderedHashSetNumberOfDeletedElements_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=29&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedHashSetNumberOfDeletedElements(TNode<SmallOrderedHashSet> p_o, TNode<Uint8T> p_v) {
return StoreSmallOrderedHashSetNumberOfDeletedElements_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=30&c=9
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedHashSetNumberOfBuckets(TNode<SmallOrderedHashSet> p_o) {
return LoadSmallOrderedHashSetNumberOfBuckets_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=32&c=31
TorqueStructSlice_uint8_MutableReference_uint8_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSmallOrderedHashSetPadding(TNode<SmallOrderedHashSet> p_o) {
return FieldSliceSmallOrderedHashSetPadding_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=32&c=31
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedHashSetPadding(TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i) {
return LoadSmallOrderedHashSetPadding_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=32&c=31
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedHashSetPadding(TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v) {
return StoreSmallOrderedHashSetPadding_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=33&c=3
TorqueStructSlice_JSReceiver_OR_Undefined_OR_Null_OR_False_OR_True_OR_Symbol_OR_String_OR_BigInt_OR_HeapNumber_OR_Smi_OR_TheHole_MutableReference_JSReceiver_OR_Undefined_OR_Null_OR_False_OR_True_OR_Symbol_OR_String_OR_BigInt_OR_HeapNumber_OR_Smi_OR_TheHole_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSmallOrderedHashSetDataTable(TNode<SmallOrderedHashSet> p_o) {
return FieldSliceSmallOrderedHashSetDataTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=33&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedHashSetDataTable(TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i) {
return LoadSmallOrderedHashSetDataTable_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=33&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedHashSetDataTable(TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i, TNode<Object> p_v) {
return StoreSmallOrderedHashSetDataTable_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=35&c=3
TorqueStructSlice_uint8_MutableReference_uint8_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSmallOrderedHashSetHashTable(TNode<SmallOrderedHashSet> p_o) {
return FieldSliceSmallOrderedHashSetHashTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=35&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedHashSetHashTable(TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i) {
return LoadSmallOrderedHashSetHashTable_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=35&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedHashSetHashTable(TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v) {
return StoreSmallOrderedHashSetHashTable_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=36&c=3
TorqueStructSlice_uint8_MutableReference_uint8_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSmallOrderedHashSetChainTable(TNode<SmallOrderedHashSet> p_o) {
return FieldSliceSmallOrderedHashSetChainTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=36&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedHashSetChainTable(TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i) {
return LoadSmallOrderedHashSetChainTable_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=36&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedHashSetChainTable(TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v) {
return StoreSmallOrderedHashSetChainTable_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=67&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedHashMapNumberOfElements(TNode<SmallOrderedHashMap> p_o) {
return LoadSmallOrderedHashMapNumberOfElements_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=67&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedHashMapNumberOfElements(TNode<SmallOrderedHashMap> p_o, TNode<Uint8T> p_v) {
return StoreSmallOrderedHashMapNumberOfElements_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=68&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedHashMapNumberOfDeletedElements(TNode<SmallOrderedHashMap> p_o) {
return LoadSmallOrderedHashMapNumberOfDeletedElements_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=68&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedHashMapNumberOfDeletedElements(TNode<SmallOrderedHashMap> p_o, TNode<Uint8T> p_v) {
return StoreSmallOrderedHashMapNumberOfDeletedElements_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=69&c=9
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedHashMapNumberOfBuckets(TNode<SmallOrderedHashMap> p_o) {
return LoadSmallOrderedHashMapNumberOfBuckets_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=71&c=31
TorqueStructSlice_uint8_MutableReference_uint8_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSmallOrderedHashMapPadding(TNode<SmallOrderedHashMap> p_o) {
return FieldSliceSmallOrderedHashMapPadding_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=71&c=31
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedHashMapPadding(TNode<SmallOrderedHashMap> p_o, TNode<IntPtrT> p_i) {
return LoadSmallOrderedHashMapPadding_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=71&c=31
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedHashMapPadding(TNode<SmallOrderedHashMap> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v) {
return StoreSmallOrderedHashMapPadding_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=72&c=3
TorqueStructSlice_HashMapEntry_MutableReference_HashMapEntry_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSmallOrderedHashMapDataTable(TNode<SmallOrderedHashMap> p_o) {
return FieldSliceSmallOrderedHashMapDataTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=74&c=3
TorqueStructSlice_uint8_MutableReference_uint8_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSmallOrderedHashMapHashTable(TNode<SmallOrderedHashMap> p_o) {
return FieldSliceSmallOrderedHashMapHashTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=74&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedHashMapHashTable(TNode<SmallOrderedHashMap> p_o, TNode<IntPtrT> p_i) {
return LoadSmallOrderedHashMapHashTable_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=74&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedHashMapHashTable(TNode<SmallOrderedHashMap> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v) {
return StoreSmallOrderedHashMapHashTable_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=75&c=3
TorqueStructSlice_uint8_MutableReference_uint8_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSmallOrderedHashMapChainTable(TNode<SmallOrderedHashMap> p_o) {
return FieldSliceSmallOrderedHashMapChainTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=75&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedHashMapChainTable(TNode<SmallOrderedHashMap> p_o, TNode<IntPtrT> p_i) {
return LoadSmallOrderedHashMapChainTable_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=75&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedHashMapChainTable(TNode<SmallOrderedHashMap> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v) {
return StoreSmallOrderedHashMapChainTable_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=104&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedNameDictionaryHash(TNode<SmallOrderedNameDictionary> p_o) {
return LoadSmallOrderedNameDictionaryHash_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=104&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedNameDictionaryHash(TNode<SmallOrderedNameDictionary> p_o, TNode<Int32T> p_v) {
return StoreSmallOrderedNameDictionaryHash_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=107&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedNameDictionaryNumberOfElements(TNode<SmallOrderedNameDictionary> p_o) {
return LoadSmallOrderedNameDictionaryNumberOfElements_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=107&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedNameDictionaryNumberOfElements(TNode<SmallOrderedNameDictionary> p_o, TNode<Uint8T> p_v) {
return StoreSmallOrderedNameDictionaryNumberOfElements_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=108&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedNameDictionaryNumberOfDeletedElements(TNode<SmallOrderedNameDictionary> p_o) {
return LoadSmallOrderedNameDictionaryNumberOfDeletedElements_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=108&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedNameDictionaryNumberOfDeletedElements(TNode<SmallOrderedNameDictionary> p_o, TNode<Uint8T> p_v) {
return StoreSmallOrderedNameDictionaryNumberOfDeletedElements_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=109&c=9
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedNameDictionaryNumberOfBuckets(TNode<SmallOrderedNameDictionary> p_o) {
return LoadSmallOrderedNameDictionaryNumberOfBuckets_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=111&c=31
TorqueStructSlice_uint8_MutableReference_uint8_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSmallOrderedNameDictionaryPadding1(TNode<SmallOrderedNameDictionary> p_o) {
return FieldSliceSmallOrderedNameDictionaryPadding1_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=111&c=31
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedNameDictionaryPadding1(TNode<SmallOrderedNameDictionary> p_o, TNode<IntPtrT> p_i) {
return LoadSmallOrderedNameDictionaryPadding1_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=111&c=31
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedNameDictionaryPadding1(TNode<SmallOrderedNameDictionary> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v) {
return StoreSmallOrderedNameDictionaryPadding1_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=112&c=3
TorqueStructSlice_NameDictionaryEntry_MutableReference_NameDictionaryEntry_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSmallOrderedNameDictionaryDataTable(TNode<SmallOrderedNameDictionary> p_o) {
return FieldSliceSmallOrderedNameDictionaryDataTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=114&c=3
TorqueStructSlice_uint8_MutableReference_uint8_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSmallOrderedNameDictionaryHashTable(TNode<SmallOrderedNameDictionary> p_o) {
return FieldSliceSmallOrderedNameDictionaryHashTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=114&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedNameDictionaryHashTable(TNode<SmallOrderedNameDictionary> p_o, TNode<IntPtrT> p_i) {
return LoadSmallOrderedNameDictionaryHashTable_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=114&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedNameDictionaryHashTable(TNode<SmallOrderedNameDictionary> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v) {
return StoreSmallOrderedNameDictionaryHashTable_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=115&c=3
TorqueStructSlice_uint8_MutableReference_uint8_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSmallOrderedNameDictionaryChainTable(TNode<SmallOrderedNameDictionary> p_o) {
return FieldSliceSmallOrderedNameDictionaryChainTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=115&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedNameDictionaryChainTable(TNode<SmallOrderedNameDictionary> p_o, TNode<IntPtrT> p_i) {
return LoadSmallOrderedNameDictionaryChainTable_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=115&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedNameDictionaryChainTable(TNode<SmallOrderedNameDictionary> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v) {
return StoreSmallOrderedNameDictionaryChainTable_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=28&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionNext(TNode<PromiseReaction> p_o) {
return LoadPromiseReactionNext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=28&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionNext(TNode<PromiseReaction> p_o, TNode<Object> p_v) {
return StorePromiseReactionNext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=29&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionRejectHandler(TNode<PromiseReaction> p_o) {
return LoadPromiseReactionRejectHandler_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=29&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionRejectHandler(TNode<PromiseReaction> p_o, TNode<HeapObject> p_v) {
return StorePromiseReactionRejectHandler_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=30&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionFulfillHandler(TNode<PromiseReaction> p_o) {
return LoadPromiseReactionFulfillHandler_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=30&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionFulfillHandler(TNode<PromiseReaction> p_o, TNode<HeapObject> p_v) {
return StorePromiseReactionFulfillHandler_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=33&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionPromiseOrCapability(TNode<PromiseReaction> p_o) {
return LoadPromiseReactionPromiseOrCapability_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=33&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionPromiseOrCapability(TNode<PromiseReaction> p_o, TNode<HeapObject> p_v) {
return StorePromiseReactionPromiseOrCapability_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=34&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionContinuationPreservedEmbedderData(TNode<PromiseReaction> p_o) {
return LoadPromiseReactionContinuationPreservedEmbedderData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=34&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionContinuationPreservedEmbedderData(TNode<PromiseReaction> p_o, TNode<Object> p_v) {
return StorePromiseReactionContinuationPreservedEmbedderData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=51&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionJobTaskArgument(TNode<PromiseReactionJobTask> p_o) {
return LoadPromiseReactionJobTaskArgument_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=51&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionJobTaskArgument(TNode<PromiseReactionJobTask> p_o, TNode<Object> p_v) {
return StorePromiseReactionJobTaskArgument_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=52&c=3
TNode<Context> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionJobTaskContext(TNode<PromiseReactionJobTask> p_o) {
return LoadPromiseReactionJobTaskContext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=52&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionJobTaskContext(TNode<PromiseReactionJobTask> p_o, TNode<Context> p_v) {
return StorePromiseReactionJobTaskContext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=53&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionJobTaskHandler(TNode<PromiseReactionJobTask> p_o) {
return LoadPromiseReactionJobTaskHandler_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=53&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionJobTaskHandler(TNode<PromiseReactionJobTask> p_o, TNode<HeapObject> p_v) {
return StorePromiseReactionJobTaskHandler_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=56&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionJobTaskPromiseOrCapability(TNode<PromiseReactionJobTask> p_o) {
return LoadPromiseReactionJobTaskPromiseOrCapability_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=56&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionJobTaskPromiseOrCapability(TNode<PromiseReactionJobTask> p_o, TNode<HeapObject> p_v) {
return StorePromiseReactionJobTaskPromiseOrCapability_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=57&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionJobTaskContinuationPreservedEmbedderData(TNode<PromiseReactionJobTask> p_o) {
return LoadPromiseReactionJobTaskContinuationPreservedEmbedderData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=57&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionJobTaskContinuationPreservedEmbedderData(TNode<PromiseReactionJobTask> p_o, TNode<Object> p_v) {
return StorePromiseReactionJobTaskContinuationPreservedEmbedderData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=65&c=3
TNode<Context> TorqueGeneratedExportedMacrosAssembler::LoadPromiseResolveThenableJobTaskContext(TNode<PromiseResolveThenableJobTask> p_o) {
return LoadPromiseResolveThenableJobTaskContext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=65&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseResolveThenableJobTaskContext(TNode<PromiseResolveThenableJobTask> p_o, TNode<Context> p_v) {
return StorePromiseResolveThenableJobTaskContext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=66&c=3
TNode<JSPromise> TorqueGeneratedExportedMacrosAssembler::LoadPromiseResolveThenableJobTaskPromiseToResolve(TNode<PromiseResolveThenableJobTask> p_o) {
return LoadPromiseResolveThenableJobTaskPromiseToResolve_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=66&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseResolveThenableJobTaskPromiseToResolve(TNode<PromiseResolveThenableJobTask> p_o, TNode<JSPromise> p_v) {
return StorePromiseResolveThenableJobTaskPromiseToResolve_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=67&c=3
TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadPromiseResolveThenableJobTaskThenable(TNode<PromiseResolveThenableJobTask> p_o) {
return LoadPromiseResolveThenableJobTaskThenable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=67&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseResolveThenableJobTaskThenable(TNode<PromiseResolveThenableJobTask> p_o, TNode<JSReceiver> p_v) {
return StorePromiseResolveThenableJobTaskThenable_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=68&c=3
TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadPromiseResolveThenableJobTaskThen(TNode<PromiseResolveThenableJobTask> p_o) {
return LoadPromiseResolveThenableJobTaskThen_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=68&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseResolveThenableJobTaskThen(TNode<PromiseResolveThenableJobTask> p_o, TNode<JSReceiver> p_v) {
return StorePromiseResolveThenableJobTaskThen_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-array.tq?l=5&c=49
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadPropertyArrayLengthAndHash(TNode<PropertyArray> p_o) {
return LoadPropertyArrayLengthAndHash_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-array.tq?l=5&c=49
void TorqueGeneratedExportedMacrosAssembler::StorePropertyArrayLengthAndHash(TNode<PropertyArray> p_o, TNode<Smi> p_v) {
return StorePropertyArrayLengthAndHash_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=6&c=3
TNode<Name> TorqueGeneratedExportedMacrosAssembler::LoadPropertyCellName(TNode<PropertyCell> p_o) {
return LoadPropertyCellName_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=6&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePropertyCellName(TNode<PropertyCell> p_o, TNode<Name> p_v) {
return StorePropertyCellName_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=7&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadPropertyCellPropertyDetailsRaw(TNode<PropertyCell> p_o) {
return LoadPropertyCellPropertyDetailsRaw_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=7&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePropertyCellPropertyDetailsRaw(TNode<PropertyCell> p_o, TNode<Smi> p_v) {
return StorePropertyCellPropertyDetailsRaw_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=8&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadPropertyCellValue(TNode<PropertyCell> p_o) {
return LoadPropertyCellValue_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePropertyCellValue(TNode<PropertyCell> p_o, TNode<Object> p_v) {
return StorePropertyCellValue_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=9&c=3
TNode<WeakFixedArray> TorqueGeneratedExportedMacrosAssembler::LoadPropertyCellDependentCode(TNode<PropertyCell> p_o) {
return LoadPropertyCellDependentCode_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=9&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePropertyCellDependentCode(TNode<PropertyCell> p_o, TNode<WeakFixedArray> p_v) {
return StorePropertyCellDependentCode_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=20&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadPropertyDescriptorObjectFlags(TNode<PropertyDescriptorObject> p_o) {
return LoadPropertyDescriptorObjectFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=20&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePropertyDescriptorObjectFlags(TNode<PropertyDescriptorObject> p_o, TNode<Smi> p_v) {
return StorePropertyDescriptorObjectFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=21&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadPropertyDescriptorObjectValue(TNode<PropertyDescriptorObject> p_o) {
return LoadPropertyDescriptorObjectValue_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=21&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePropertyDescriptorObjectValue(TNode<PropertyDescriptorObject> p_o, TNode<Object> p_v) {
return StorePropertyDescriptorObjectValue_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=22&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadPropertyDescriptorObjectGet(TNode<PropertyDescriptorObject> p_o) {
return LoadPropertyDescriptorObjectGet_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=22&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePropertyDescriptorObjectGet(TNode<PropertyDescriptorObject> p_o, TNode<Object> p_v) {
return StorePropertyDescriptorObjectGet_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=23&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadPropertyDescriptorObjectSet(TNode<PropertyDescriptorObject> p_o) {
return LoadPropertyDescriptorObjectSet_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=23&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePropertyDescriptorObjectSet(TNode<PropertyDescriptorObject> p_o, TNode<Object> p_v) {
return StorePropertyDescriptorObjectSet_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=14&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadPrototypeInfoModuleNamespace(TNode<PrototypeInfo> p_o) {
return LoadPrototypeInfoModuleNamespace_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePrototypeInfoModuleNamespace(TNode<PrototypeInfo> p_o, TNode<HeapObject> p_v) {
return StorePrototypeInfoModuleNamespace_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=18&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadPrototypeInfoPrototypeUsers(TNode<PrototypeInfo> p_o) {
return LoadPrototypeInfoPrototypeUsers_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=18&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePrototypeInfoPrototypeUsers(TNode<PrototypeInfo> p_o, TNode<Object> p_v) {
return StorePrototypeInfoPrototypeUsers_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=20&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadPrototypeInfoPrototypeChainEnumCache(TNode<PrototypeInfo> p_o) {
return LoadPrototypeInfoPrototypeChainEnumCache_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=20&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePrototypeInfoPrototypeChainEnumCache(TNode<PrototypeInfo> p_o, TNode<Object> p_v) {
return StorePrototypeInfoPrototypeChainEnumCache_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=24&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadPrototypeInfoRegistrySlot(TNode<PrototypeInfo> p_o) {
return LoadPrototypeInfoRegistrySlot_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=24&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePrototypeInfoRegistrySlot(TNode<PrototypeInfo> p_o, TNode<Smi> p_v) {
return StorePrototypeInfoRegistrySlot_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=26&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadPrototypeInfoBitField(TNode<PrototypeInfo> p_o) {
return LoadPrototypeInfoBitField_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=26&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePrototypeInfoBitField(TNode<PrototypeInfo> p_o, TNode<Smi> p_v) {
return StorePrototypeInfoBitField_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=29&c=3
TNode<MaybeObject> TorqueGeneratedExportedMacrosAssembler::LoadPrototypeInfoObjectCreateMap(TNode<PrototypeInfo> p_o) {
return LoadPrototypeInfoObjectCreateMap_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=29&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePrototypeInfoObjectCreateMap(TNode<PrototypeInfo> p_o, TNode<MaybeObject> p_v) {
return StorePrototypeInfoObjectCreateMap_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=19&c=3
TNode<PrimitiveHeapObject> TorqueGeneratedExportedMacrosAssembler::LoadScriptSource(TNode<Script> p_o) {
return LoadScriptSource_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=19&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptSource(TNode<Script> p_o, TNode<PrimitiveHeapObject> p_v) {
return StoreScriptSource_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=22&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadScriptName(TNode<Script> p_o) {
return LoadScriptName_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=22&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptName(TNode<Script> p_o, TNode<Object> p_v) {
return StoreScriptName_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=25&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScriptLineOffset(TNode<Script> p_o) {
return LoadScriptLineOffset_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=25&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptLineOffset(TNode<Script> p_o, TNode<Smi> p_v) {
return StoreScriptLineOffset_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=29&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScriptColumnOffset(TNode<Script> p_o) {
return LoadScriptColumnOffset_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=29&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptColumnOffset(TNode<Script> p_o, TNode<Smi> p_v) {
return StoreScriptColumnOffset_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=32&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadScriptContextData(TNode<Script> p_o) {
return LoadScriptContextData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=32&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptContextData(TNode<Script> p_o, TNode<Object> p_v) {
return StoreScriptContextData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=34&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScriptScriptType(TNode<Script> p_o) {
return LoadScriptScriptType_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=34&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptScriptType(TNode<Script> p_o, TNode<Smi> p_v) {
return StoreScriptScriptType_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=37&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadScriptLineEnds(TNode<Script> p_o) {
return LoadScriptLineEnds_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=37&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptLineEnds(TNode<Script> p_o, TNode<HeapObject> p_v) {
return StoreScriptLineEnds_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=40&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScriptId(TNode<Script> p_o) {
return LoadScriptId_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=40&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptId(TNode<Script> p_o, TNode<Smi> p_v) {
return StoreScriptId_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=46&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadScriptEvalFromSharedOrWrappedArgumentsOrSfiTable(TNode<Script> p_o) {
return LoadScriptEvalFromSharedOrWrappedArgumentsOrSfiTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=46&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptEvalFromSharedOrWrappedArgumentsOrSfiTable(TNode<Script> p_o, TNode<HeapObject> p_v) {
return StoreScriptEvalFromSharedOrWrappedArgumentsOrSfiTable_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=48&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadScriptEvalFromPosition(TNode<Script> p_o) {
return LoadScriptEvalFromPosition_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=48&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptEvalFromPosition(TNode<Script> p_o, TNode<Object> p_v) {
return StoreScriptEvalFromPosition_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=49&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadScriptSharedFunctionInfos(TNode<Script> p_o) {
return LoadScriptSharedFunctionInfos_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=49&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptSharedFunctionInfos(TNode<Script> p_o, TNode<HeapObject> p_v) {
return StoreScriptSharedFunctionInfos_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=52&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScriptFlags(TNode<Script> p_o) {
return LoadScriptFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=52&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptFlags(TNode<Script> p_o, TNode<Smi> p_v) {
return StoreScriptFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=55&c=3
TNode<PrimitiveHeapObject> TorqueGeneratedExportedMacrosAssembler::LoadScriptSourceUrl(TNode<Script> p_o) {
return LoadScriptSourceUrl_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=55&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptSourceUrl(TNode<Script> p_o, TNode<PrimitiveHeapObject> p_v) {
return StoreScriptSourceUrl_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=58&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadScriptSourceMappingUrl(TNode<Script> p_o) {
return LoadScriptSourceMappingUrl_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=58&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptSourceMappingUrl(TNode<Script> p_o, TNode<Object> p_v) {
return StoreScriptSourceMappingUrl_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=61&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadScriptHostDefinedOptions(TNode<Script> p_o) {
return LoadScriptHostDefinedOptions_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=61&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptHostDefinedOptions(TNode<Script> p_o, TNode<FixedArray> p_v) {
return StoreScriptHostDefinedOptions_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=7&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadPreparseDataDataLength(TNode<PreparseData> p_o) {
return LoadPreparseDataDataLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=7&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePreparseDataDataLength(TNode<PreparseData> p_o, TNode<Int32T> p_v) {
return StorePreparseDataDataLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=8&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadPreparseDataChildrenLength(TNode<PreparseData> p_o) {
return LoadPreparseDataChildrenLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePreparseDataChildrenLength(TNode<PreparseData> p_o, TNode<Int32T> p_v) {
return StorePreparseDataChildrenLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=12&c=3
TNode<BytecodeArray> TorqueGeneratedExportedMacrosAssembler::LoadInterpreterDataBytecodeArray(TNode<InterpreterData> p_o) {
return LoadInterpreterDataBytecodeArray_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=12&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInterpreterDataBytecodeArray(TNode<InterpreterData> p_o, TNode<BytecodeArray> p_v) {
return StoreInterpreterDataBytecodeArray_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=13&c=31
TNode<CodeDataContainer> TorqueGeneratedExportedMacrosAssembler::LoadInterpreterDataInterpreterTrampoline(TNode<InterpreterData> p_o) {
return LoadInterpreterDataInterpreterTrampoline_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=13&c=31
void TorqueGeneratedExportedMacrosAssembler::StoreInterpreterDataInterpreterTrampoline(TNode<InterpreterData> p_o, TNode<CodeDataContainer> p_v) {
return StoreInterpreterDataInterpreterTrampoline_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=56&c=22
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoFunctionData(TNode<SharedFunctionInfo> p_o) {
return LoadSharedFunctionInfoFunctionData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=56&c=22
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoFunctionData(TNode<SharedFunctionInfo> p_o, TNode<Object> p_v) {
return StoreSharedFunctionInfoFunctionData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=57&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoNameOrScopeInfo(TNode<SharedFunctionInfo> p_o) {
return LoadSharedFunctionInfoNameOrScopeInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=57&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoNameOrScopeInfo(TNode<SharedFunctionInfo> p_o, TNode<Object> p_v) {
return StoreSharedFunctionInfoNameOrScopeInfo_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=58&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoOuterScopeInfoOrFeedbackMetadata(TNode<SharedFunctionInfo> p_o) {
return LoadSharedFunctionInfoOuterScopeInfoOrFeedbackMetadata_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=58&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoOuterScopeInfoOrFeedbackMetadata(TNode<SharedFunctionInfo> p_o, TNode<HeapObject> p_v) {
return StoreSharedFunctionInfoOuterScopeInfoOrFeedbackMetadata_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=59&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoScriptOrDebugInfo(TNode<SharedFunctionInfo> p_o) {
return LoadSharedFunctionInfoScriptOrDebugInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=59&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoScriptOrDebugInfo(TNode<SharedFunctionInfo> p_o, TNode<HeapObject> p_v) {
return StoreSharedFunctionInfoScriptOrDebugInfo_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=65&c=3
TNode<Int16T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoLength(TNode<SharedFunctionInfo> p_o) {
return LoadSharedFunctionInfoLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=65&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoLength(TNode<SharedFunctionInfo> p_o, TNode<Int16T> p_v) {
return StoreSharedFunctionInfoLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=70&c=3
TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoFormalParameterCount(TNode<SharedFunctionInfo> p_o) {
return LoadSharedFunctionInfoFormalParameterCount_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=70&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoFormalParameterCount(TNode<SharedFunctionInfo> p_o, TNode<Uint16T> p_v) {
return StoreSharedFunctionInfoFormalParameterCount_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=71&c=3
TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoFunctionTokenOffset(TNode<SharedFunctionInfo> p_o) {
return LoadSharedFunctionInfoFunctionTokenOffset_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=71&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoFunctionTokenOffset(TNode<SharedFunctionInfo> p_o, TNode<Uint16T> p_v) {
return StoreSharedFunctionInfoFunctionTokenOffset_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=74&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoExpectedNofProperties(TNode<SharedFunctionInfo> p_o) {
return LoadSharedFunctionInfoExpectedNofProperties_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=74&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoExpectedNofProperties(TNode<SharedFunctionInfo> p_o, TNode<Uint8T> p_v) {
return StoreSharedFunctionInfoExpectedNofProperties_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=75&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoFlags2(TNode<SharedFunctionInfo> p_o) {
return LoadSharedFunctionInfoFlags2_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=75&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoFlags2(TNode<SharedFunctionInfo> p_o, TNode<Uint8T> p_v) {
return StoreSharedFunctionInfoFlags2_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=76&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoFlags(TNode<SharedFunctionInfo> p_o) {
return LoadSharedFunctionInfoFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=76&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoFlags(TNode<SharedFunctionInfo> p_o, TNode<Uint32T> p_v) {
return StoreSharedFunctionInfoFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=80&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoFunctionLiteralId(TNode<SharedFunctionInfo> p_o) {
return LoadSharedFunctionInfoFunctionLiteralId_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=80&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoFunctionLiteralId(TNode<SharedFunctionInfo> p_o, TNode<Int32T> p_v) {
return StoreSharedFunctionInfoFunctionLiteralId_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=114&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadUncompiledDataInferredName(TNode<UncompiledData> p_o) {
return LoadUncompiledDataInferredName_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=114&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreUncompiledDataInferredName(TNode<UncompiledData> p_o, TNode<String> p_v) {
return StoreUncompiledDataInferredName_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=115&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadUncompiledDataStartPosition(TNode<UncompiledData> p_o) {
return LoadUncompiledDataStartPosition_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=115&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreUncompiledDataStartPosition(TNode<UncompiledData> p_o, TNode<Int32T> p_v) {
return StoreUncompiledDataStartPosition_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=116&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadUncompiledDataEndPosition(TNode<UncompiledData> p_o) {
return LoadUncompiledDataEndPosition_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=116&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreUncompiledDataEndPosition(TNode<UncompiledData> p_o, TNode<Int32T> p_v) {
return StoreUncompiledDataEndPosition_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=129&c=3
TNode<PreparseData> TorqueGeneratedExportedMacrosAssembler::LoadUncompiledDataWithPreparseDataPreparseData(TNode<UncompiledDataWithPreparseData> p_o) {
return LoadUncompiledDataWithPreparseDataPreparseData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=129&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreUncompiledDataWithPreparseDataPreparseData(TNode<UncompiledDataWithPreparseData> p_o, TNode<PreparseData> p_v) {
return StoreUncompiledDataWithPreparseDataPreparseData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=138&c=3
TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadUncompiledDataWithoutPreparseDataWithJobJob(TNode<UncompiledDataWithoutPreparseDataWithJob> p_o) {
return LoadUncompiledDataWithoutPreparseDataWithJobJob_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=138&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreUncompiledDataWithoutPreparseDataWithJobJob(TNode<UncompiledDataWithoutPreparseDataWithJob> p_o, TNode<RawPtrT> p_v) {
return StoreUncompiledDataWithoutPreparseDataWithJobJob_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=147&c=3
TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadUncompiledDataWithPreparseDataAndJobJob(TNode<UncompiledDataWithPreparseDataAndJob> p_o) {
return LoadUncompiledDataWithPreparseDataAndJobJob_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=147&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreUncompiledDataWithPreparseDataAndJobJob(TNode<UncompiledDataWithPreparseDataAndJob> p_o, TNode<RawPtrT> p_v) {
return StoreUncompiledDataWithPreparseDataAndJobJob_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=152&c=3
TNode<ByteArray> TorqueGeneratedExportedMacrosAssembler::LoadOnHeapBasicBlockProfilerDataBlockIds(TNode<OnHeapBasicBlockProfilerData> p_o) {
return LoadOnHeapBasicBlockProfilerDataBlockIds_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=152&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreOnHeapBasicBlockProfilerDataBlockIds(TNode<OnHeapBasicBlockProfilerData> p_o, TNode<ByteArray> p_v) {
return StoreOnHeapBasicBlockProfilerDataBlockIds_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=153&c=3
TNode<ByteArray> TorqueGeneratedExportedMacrosAssembler::LoadOnHeapBasicBlockProfilerDataCounts(TNode<OnHeapBasicBlockProfilerData> p_o) {
return LoadOnHeapBasicBlockProfilerDataCounts_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=153&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreOnHeapBasicBlockProfilerDataCounts(TNode<OnHeapBasicBlockProfilerData> p_o, TNode<ByteArray> p_v) {
return StoreOnHeapBasicBlockProfilerDataCounts_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=154&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadOnHeapBasicBlockProfilerDataName(TNode<OnHeapBasicBlockProfilerData> p_o) {
return LoadOnHeapBasicBlockProfilerDataName_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=154&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreOnHeapBasicBlockProfilerDataName(TNode<OnHeapBasicBlockProfilerData> p_o, TNode<String> p_v) {
return StoreOnHeapBasicBlockProfilerDataName_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=155&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadOnHeapBasicBlockProfilerDataSchedule(TNode<OnHeapBasicBlockProfilerData> p_o) {
return LoadOnHeapBasicBlockProfilerDataSchedule_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=155&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreOnHeapBasicBlockProfilerDataSchedule(TNode<OnHeapBasicBlockProfilerData> p_o, TNode<String> p_v) {
return StoreOnHeapBasicBlockProfilerDataSchedule_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=156&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadOnHeapBasicBlockProfilerDataCode(TNode<OnHeapBasicBlockProfilerData> p_o) {
return LoadOnHeapBasicBlockProfilerDataCode_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=156&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreOnHeapBasicBlockProfilerDataCode(TNode<OnHeapBasicBlockProfilerData> p_o, TNode<String> p_v) {
return StoreOnHeapBasicBlockProfilerDataCode_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=157&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadOnHeapBasicBlockProfilerDataHash(TNode<OnHeapBasicBlockProfilerData> p_o) {
return LoadOnHeapBasicBlockProfilerDataHash_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=157&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreOnHeapBasicBlockProfilerDataHash(TNode<OnHeapBasicBlockProfilerData> p_o, TNode<Smi> p_v) {
return StoreOnHeapBasicBlockProfilerDataHash_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=14&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleCode(TNode<SourceTextModule> p_o) {
return LoadSourceTextModuleCode_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleCode(TNode<SourceTextModule> p_o, TNode<HeapObject> p_v) {
return StoreSourceTextModuleCode_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=20&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleRegularExports(TNode<SourceTextModule> p_o) {
return LoadSourceTextModuleRegularExports_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=20&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleRegularExports(TNode<SourceTextModule> p_o, TNode<FixedArray> p_v) {
return StoreSourceTextModuleRegularExports_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=21&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleRegularImports(TNode<SourceTextModule> p_o) {
return LoadSourceTextModuleRegularImports_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=21&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleRegularImports(TNode<SourceTextModule> p_o, TNode<FixedArray> p_v) {
return StoreSourceTextModuleRegularImports_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=26&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleRequestedModules(TNode<SourceTextModule> p_o) {
return LoadSourceTextModuleRequestedModules_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=26&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleRequestedModules(TNode<SourceTextModule> p_o, TNode<FixedArray> p_v) {
return StoreSourceTextModuleRequestedModules_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=31&c=36
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleImportMeta(TNode<SourceTextModule> p_o) {
return LoadSourceTextModuleImportMeta_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=31&c=36
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleImportMeta(TNode<SourceTextModule> p_o, TNode<HeapObject> p_v) {
return StoreSourceTextModuleImportMeta_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=36&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleCycleRoot(TNode<SourceTextModule> p_o) {
return LoadSourceTextModuleCycleRoot_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=36&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleCycleRoot(TNode<SourceTextModule> p_o, TNode<HeapObject> p_v) {
return StoreSourceTextModuleCycleRoot_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=38&c=3
TNode<ArrayList> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleAsyncParentModules(TNode<SourceTextModule> p_o) {
return LoadSourceTextModuleAsyncParentModules_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=38&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleAsyncParentModules(TNode<SourceTextModule> p_o, TNode<ArrayList> p_v) {
return StoreSourceTextModuleAsyncParentModules_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=41&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleDfsIndex(TNode<SourceTextModule> p_o) {
return LoadSourceTextModuleDfsIndex_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=41&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleDfsIndex(TNode<SourceTextModule> p_o, TNode<Smi> p_v) {
return StoreSourceTextModuleDfsIndex_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=42&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleDfsAncestorIndex(TNode<SourceTextModule> p_o) {
return LoadSourceTextModuleDfsAncestorIndex_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=42&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleDfsAncestorIndex(TNode<SourceTextModule> p_o, TNode<Smi> p_v) {
return StoreSourceTextModuleDfsAncestorIndex_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=45&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModulePendingAsyncDependencies(TNode<SourceTextModule> p_o) {
return LoadSourceTextModulePendingAsyncDependencies_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=45&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModulePendingAsyncDependencies(TNode<SourceTextModule> p_o, TNode<Smi> p_v) {
return StoreSourceTextModulePendingAsyncDependencies_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=47&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleFlags(TNode<SourceTextModule> p_o) {
return LoadSourceTextModuleFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=47&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleFlags(TNode<SourceTextModule> p_o, TNode<Smi> p_v) {
return StoreSourceTextModuleFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=51&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadModuleRequestSpecifier(TNode<ModuleRequest> p_o) {
return LoadModuleRequestSpecifier_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=51&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreModuleRequestSpecifier(TNode<ModuleRequest> p_o, TNode<String> p_v) {
return StoreModuleRequestSpecifier_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=55&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadModuleRequestImportAssertions(TNode<ModuleRequest> p_o) {
return LoadModuleRequestImportAssertions_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=55&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreModuleRequestImportAssertions(TNode<ModuleRequest> p_o, TNode<FixedArray> p_v) {
return StoreModuleRequestImportAssertions_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=58&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadModuleRequestPosition(TNode<ModuleRequest> p_o) {
return LoadModuleRequestPosition_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=58&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreModuleRequestPosition(TNode<ModuleRequest> p_o, TNode<Smi> p_v) {
return StoreModuleRequestPosition_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=62&c=3
TNode<PrimitiveHeapObject> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleInfoEntryExportName(TNode<SourceTextModuleInfoEntry> p_o) {
return LoadSourceTextModuleInfoEntryExportName_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=62&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleInfoEntryExportName(TNode<SourceTextModuleInfoEntry> p_o, TNode<PrimitiveHeapObject> p_v) {
return StoreSourceTextModuleInfoEntryExportName_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=63&c=3
TNode<PrimitiveHeapObject> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleInfoEntryLocalName(TNode<SourceTextModuleInfoEntry> p_o) {
return LoadSourceTextModuleInfoEntryLocalName_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=63&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleInfoEntryLocalName(TNode<SourceTextModuleInfoEntry> p_o, TNode<PrimitiveHeapObject> p_v) {
return StoreSourceTextModuleInfoEntryLocalName_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=64&c=3
TNode<PrimitiveHeapObject> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleInfoEntryImportName(TNode<SourceTextModuleInfoEntry> p_o) {
return LoadSourceTextModuleInfoEntryImportName_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=64&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleInfoEntryImportName(TNode<SourceTextModuleInfoEntry> p_o, TNode<PrimitiveHeapObject> p_v) {
return StoreSourceTextModuleInfoEntryImportName_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=65&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleInfoEntryModuleRequest(TNode<SourceTextModuleInfoEntry> p_o) {
return LoadSourceTextModuleInfoEntryModuleRequest_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=65&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleInfoEntryModuleRequest(TNode<SourceTextModuleInfoEntry> p_o, TNode<Smi> p_v) {
return StoreSourceTextModuleInfoEntryModuleRequest_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=66&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleInfoEntryCellIndex(TNode<SourceTextModuleInfoEntry> p_o) {
return LoadSourceTextModuleInfoEntryCellIndex_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=66&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleInfoEntryCellIndex(TNode<SourceTextModuleInfoEntry> p_o, TNode<Smi> p_v) {
return StoreSourceTextModuleInfoEntryCellIndex_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=67&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleInfoEntryBegPos(TNode<SourceTextModuleInfoEntry> p_o) {
return LoadSourceTextModuleInfoEntryBegPos_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=67&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleInfoEntryBegPos(TNode<SourceTextModuleInfoEntry> p_o, TNode<Smi> p_v) {
return StoreSourceTextModuleInfoEntryBegPos_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=68&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleInfoEntryEndPos(TNode<SourceTextModuleInfoEntry> p_o) {
return LoadSourceTextModuleInfoEntryEndPos_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=68&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleInfoEntryEndPos(TNode<SourceTextModuleInfoEntry> p_o, TNode<Smi> p_v) {
return StoreSourceTextModuleInfoEntryEndPos_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=50&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadConsStringFirst(TNode<ConsString> p_o) {
return LoadConsStringFirst_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=50&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreConsStringFirst(TNode<ConsString> p_o, TNode<String> p_v) {
return StoreConsStringFirst_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=51&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadConsStringSecond(TNode<ConsString> p_o) {
return LoadConsStringSecond_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=51&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreConsStringSecond(TNode<ConsString> p_o, TNode<String> p_v) {
return StoreConsStringSecond_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=57&c=3
TNode<ExternalPointerT> TorqueGeneratedExportedMacrosAssembler::LoadExternalStringResource(TNode<ExternalString> p_o) {
return LoadExternalStringResource_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=57&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreExternalStringResource(TNode<ExternalString> p_o, TNode<ExternalPointerT> p_v) {
return StoreExternalStringResource_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=59&c=3
TNode<ExternalPointerT> TorqueGeneratedExportedMacrosAssembler::LoadExternalStringResourceData(TNode<ExternalString> p_o) {
return LoadExternalStringResourceData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=59&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreExternalStringResourceData(TNode<ExternalString> p_o, TNode<ExternalPointerT> p_v) {
return StoreExternalStringResourceData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=109&c=9
TorqueStructSlice_char8_ConstReference_char8_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSeqOneByteStringChars(TNode<SeqOneByteString> p_o) {
return FieldSliceSeqOneByteStringChars_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=109&c=9
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSeqOneByteStringChars(TNode<SeqOneByteString> p_o, TNode<IntPtrT> p_i) {
return LoadSeqOneByteStringChars_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=114&c=9
TorqueStructSlice_char16_ConstReference_char16_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSeqTwoByteStringChars(TNode<SeqTwoByteString> p_o) {
return FieldSliceSeqTwoByteStringChars_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=114&c=9
TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadSeqTwoByteStringChars(TNode<SeqTwoByteString> p_o, TNode<IntPtrT> p_i) {
return LoadSeqTwoByteStringChars_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=120&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadSlicedStringParent(TNode<SlicedString> p_o) {
return LoadSlicedStringParent_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=120&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSlicedStringParent(TNode<SlicedString> p_o, TNode<String> p_v) {
return StoreSlicedStringParent_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=121&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSlicedStringOffset(TNode<SlicedString> p_o) {
return LoadSlicedStringOffset_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=121&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSlicedStringOffset(TNode<SlicedString> p_o, TNode<Smi> p_v) {
return StoreSlicedStringOffset_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=127&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadThinStringActual(TNode<ThinString> p_o) {
return LoadThinStringActual_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=127&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreThinStringActual(TNode<ThinString> p_o, TNode<String> p_v) {
return StoreThinStringActual_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=10&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadTuple2Value1(TNode<Tuple2> p_o) {
return LoadTuple2Value1_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=10&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTuple2Value1(TNode<Tuple2> p_o, TNode<Object> p_v) {
return StoreTuple2Value1_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=11&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadTuple2Value2(TNode<Tuple2> p_o) {
return LoadTuple2Value2_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=11&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTuple2Value2(TNode<Tuple2> p_o, TNode<Object> p_v) {
return StoreTuple2Value2_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=9&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadSwissNameDictionaryHash(TNode<SwissNameDictionary> p_o) {
return LoadSwissNameDictionaryHash_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=9&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSwissNameDictionaryHash(TNode<SwissNameDictionary> p_o, TNode<Uint32T> p_v) {
return StoreSwissNameDictionaryHash_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=10&c=9
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadSwissNameDictionaryCapacity(TNode<SwissNameDictionary> p_o) {
return LoadSwissNameDictionaryCapacity_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=11&c=3
TNode<ByteArray> TorqueGeneratedExportedMacrosAssembler::LoadSwissNameDictionaryMetaTable(TNode<SwissNameDictionary> p_o) {
return LoadSwissNameDictionaryMetaTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=11&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSwissNameDictionaryMetaTable(TNode<SwissNameDictionary> p_o, TNode<ByteArray> p_v) {
return StoreSwissNameDictionaryMetaTable_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=12&c=3
TorqueStructSlice_JSReceiver_OR_Undefined_OR_Null_OR_False_OR_True_OR_Symbol_OR_String_OR_BigInt_OR_HeapNumber_OR_Smi_OR_TheHole_MutableReference_JSReceiver_OR_Undefined_OR_Null_OR_False_OR_True_OR_Symbol_OR_String_OR_BigInt_OR_HeapNumber_OR_Smi_OR_TheHole_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSwissNameDictionaryDataTable(TNode<SwissNameDictionary> p_o) {
return FieldSliceSwissNameDictionaryDataTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=12&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadSwissNameDictionaryDataTable(TNode<SwissNameDictionary> p_o, TNode<IntPtrT> p_i) {
return LoadSwissNameDictionaryDataTable_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=12&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSwissNameDictionaryDataTable(TNode<SwissNameDictionary> p_o, TNode<IntPtrT> p_i, TNode<Object> p_v) {
return StoreSwissNameDictionaryDataTable_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=13&c=3
TorqueStructSlice_uint8_MutableReference_uint8_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSwissNameDictionaryCtrlTable(TNode<SwissNameDictionary> p_o) {
return FieldSliceSwissNameDictionaryCtrlTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=13&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSwissNameDictionaryCtrlTable(TNode<SwissNameDictionary> p_o, TNode<IntPtrT> p_i) {
return LoadSwissNameDictionaryCtrlTable_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=13&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSwissNameDictionaryCtrlTable(TNode<SwissNameDictionary> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v) {
return StoreSwissNameDictionaryCtrlTable_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=14&c=3
TorqueStructSlice_uint8_MutableReference_uint8_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSwissNameDictionaryPropertyDetailsTable(TNode<SwissNameDictionary> p_o) {
return FieldSliceSwissNameDictionaryPropertyDetailsTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=14&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSwissNameDictionaryPropertyDetailsTable(TNode<SwissNameDictionary> p_o, TNode<IntPtrT> p_i) {
return LoadSwissNameDictionaryPropertyDetailsTable_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSwissNameDictionaryPropertyDetailsTable(TNode<SwissNameDictionary> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v) {
return StoreSwissNameDictionaryPropertyDetailsTable_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/synthetic-module.tq?l=6&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadSyntheticModuleName(TNode<SyntheticModule> p_o) {
return LoadSyntheticModuleName_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/synthetic-module.tq?l=6&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSyntheticModuleName(TNode<SyntheticModule> p_o, TNode<String> p_v) {
return StoreSyntheticModuleName_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/synthetic-module.tq?l=7&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadSyntheticModuleExportNames(TNode<SyntheticModule> p_o) {
return LoadSyntheticModuleExportNames_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/synthetic-module.tq?l=7&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSyntheticModuleExportNames(TNode<SyntheticModule> p_o, TNode<FixedArray> p_v) {
return StoreSyntheticModuleExportNames_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/synthetic-module.tq?l=8&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadSyntheticModuleEvaluationSteps(TNode<SyntheticModule> p_o) {
return LoadSyntheticModuleEvaluationSteps_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/synthetic-module.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSyntheticModuleEvaluationSteps(TNode<SyntheticModule> p_o, TNode<Foreign> p_v) {
return StoreSyntheticModuleEvaluationSteps_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=6&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadCachedTemplateObjectSlotId(TNode<CachedTemplateObject> p_o) {
return LoadCachedTemplateObjectSlotId_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=6&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreCachedTemplateObjectSlotId(TNode<CachedTemplateObject> p_o, TNode<Smi> p_v) {
return StoreCachedTemplateObjectSlotId_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=7&c=3
TNode<JSArray> TorqueGeneratedExportedMacrosAssembler::LoadCachedTemplateObjectTemplateObject(TNode<CachedTemplateObject> p_o) {
return LoadCachedTemplateObjectTemplateObject_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=7&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreCachedTemplateObjectTemplateObject(TNode<CachedTemplateObject> p_o, TNode<JSArray> p_v) {
return StoreCachedTemplateObjectTemplateObject_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=8&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadCachedTemplateObjectNext(TNode<CachedTemplateObject> p_o) {
return LoadCachedTemplateObjectNext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreCachedTemplateObjectNext(TNode<CachedTemplateObject> p_o, TNode<HeapObject> p_v) {
return StoreCachedTemplateObjectNext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=12&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadTemplateObjectDescriptionRawStrings(TNode<TemplateObjectDescription> p_o) {
return LoadTemplateObjectDescriptionRawStrings_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=12&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTemplateObjectDescriptionRawStrings(TNode<TemplateObjectDescription> p_o, TNode<FixedArray> p_v) {
return StoreTemplateObjectDescriptionRawStrings_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=13&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadTemplateObjectDescriptionCookedStrings(TNode<TemplateObjectDescription> p_o) {
return LoadTemplateObjectDescriptionCookedStrings_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=13&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTemplateObjectDescriptionCookedStrings(TNode<TemplateObjectDescription> p_o, TNode<FixedArray> p_v) {
return StoreTemplateObjectDescriptionCookedStrings_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=7&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadTemplateInfoTag(TNode<TemplateInfo> p_o) {
return LoadTemplateInfoTag_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=7&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTemplateInfoTag(TNode<TemplateInfo> p_o, TNode<Smi> p_v) {
return StoreTemplateInfoTag_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=8&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadTemplateInfoSerialNumber(TNode<TemplateInfo> p_o) {
return LoadTemplateInfoSerialNumber_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTemplateInfoSerialNumber(TNode<TemplateInfo> p_o, TNode<Smi> p_v) {
return StoreTemplateInfoSerialNumber_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=9&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadTemplateInfoNumberOfProperties(TNode<TemplateInfo> p_o) {
return LoadTemplateInfoNumberOfProperties_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=9&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTemplateInfoNumberOfProperties(TNode<TemplateInfo> p_o, TNode<Smi> p_v) {
return StoreTemplateInfoNumberOfProperties_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=10&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadTemplateInfoPropertyList(TNode<TemplateInfo> p_o) {
return LoadTemplateInfoPropertyList_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=10&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTemplateInfoPropertyList(TNode<TemplateInfo> p_o, TNode<HeapObject> p_v) {
return StoreTemplateInfoPropertyList_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=11&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadTemplateInfoPropertyAccessors(TNode<TemplateInfo> p_o) {
return LoadTemplateInfoPropertyAccessors_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=11&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTemplateInfoPropertyAccessors(TNode<TemplateInfo> p_o, TNode<HeapObject> p_v) {
return StoreTemplateInfoPropertyAccessors_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=16&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataPrototypeTemplate(TNode<FunctionTemplateRareData> p_o) {
return LoadFunctionTemplateRareDataPrototypeTemplate_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=16&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataPrototypeTemplate(TNode<FunctionTemplateRareData> p_o, TNode<HeapObject> p_v) {
return StoreFunctionTemplateRareDataPrototypeTemplate_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=17&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataPrototypeProviderTemplate(TNode<FunctionTemplateRareData> p_o) {
return LoadFunctionTemplateRareDataPrototypeProviderTemplate_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=17&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataPrototypeProviderTemplate(TNode<FunctionTemplateRareData> p_o, TNode<HeapObject> p_v) {
return StoreFunctionTemplateRareDataPrototypeProviderTemplate_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=18&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataParentTemplate(TNode<FunctionTemplateRareData> p_o) {
return LoadFunctionTemplateRareDataParentTemplate_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=18&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataParentTemplate(TNode<FunctionTemplateRareData> p_o, TNode<HeapObject> p_v) {
return StoreFunctionTemplateRareDataParentTemplate_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=19&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataNamedPropertyHandler(TNode<FunctionTemplateRareData> p_o) {
return LoadFunctionTemplateRareDataNamedPropertyHandler_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=19&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataNamedPropertyHandler(TNode<FunctionTemplateRareData> p_o, TNode<HeapObject> p_v) {
return StoreFunctionTemplateRareDataNamedPropertyHandler_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=20&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataIndexedPropertyHandler(TNode<FunctionTemplateRareData> p_o) {
return LoadFunctionTemplateRareDataIndexedPropertyHandler_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=20&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataIndexedPropertyHandler(TNode<FunctionTemplateRareData> p_o, TNode<HeapObject> p_v) {
return StoreFunctionTemplateRareDataIndexedPropertyHandler_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=21&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataInstanceTemplate(TNode<FunctionTemplateRareData> p_o) {
return LoadFunctionTemplateRareDataInstanceTemplate_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=21&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataInstanceTemplate(TNode<FunctionTemplateRareData> p_o, TNode<HeapObject> p_v) {
return StoreFunctionTemplateRareDataInstanceTemplate_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=22&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataInstanceCallHandler(TNode<FunctionTemplateRareData> p_o) {
return LoadFunctionTemplateRareDataInstanceCallHandler_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=22&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataInstanceCallHandler(TNode<FunctionTemplateRareData> p_o, TNode<HeapObject> p_v) {
return StoreFunctionTemplateRareDataInstanceCallHandler_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=23&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataAccessCheckInfo(TNode<FunctionTemplateRareData> p_o) {
return LoadFunctionTemplateRareDataAccessCheckInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=23&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataAccessCheckInfo(TNode<FunctionTemplateRareData> p_o, TNode<HeapObject> p_v) {
return StoreFunctionTemplateRareDataAccessCheckInfo_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=24&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataCFunctionOverloads(TNode<FunctionTemplateRareData> p_o) {
return LoadFunctionTemplateRareDataCFunctionOverloads_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=24&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataCFunctionOverloads(TNode<FunctionTemplateRareData> p_o, TNode<FixedArray> p_v) {
return StoreFunctionTemplateRareDataCFunctionOverloads_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=44&c=36
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoCallCode(TNode<FunctionTemplateInfo> p_o) {
return LoadFunctionTemplateInfoCallCode_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=44&c=36
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoCallCode(TNode<FunctionTemplateInfo> p_o, TNode<HeapObject> p_v) {
return StoreFunctionTemplateInfoCallCode_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=45&c=3
TNode<PrimitiveHeapObject> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoClassName(TNode<FunctionTemplateInfo> p_o) {
return LoadFunctionTemplateInfoClassName_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=45&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoClassName(TNode<FunctionTemplateInfo> p_o, TNode<PrimitiveHeapObject> p_v) {
return StoreFunctionTemplateInfoClassName_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=50&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoSignature(TNode<FunctionTemplateInfo> p_o) {
return LoadFunctionTemplateInfoSignature_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=50&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoSignature(TNode<FunctionTemplateInfo> p_o, TNode<HeapObject> p_v) {
return StoreFunctionTemplateInfoSignature_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=56&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoRareData(TNode<FunctionTemplateInfo> p_o) {
return LoadFunctionTemplateInfoRareData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=56&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoRareData(TNode<FunctionTemplateInfo> p_o, TNode<HeapObject> p_v) {
return StoreFunctionTemplateInfoRareData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=57&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoSharedFunctionInfo(TNode<FunctionTemplateInfo> p_o) {
return LoadFunctionTemplateInfoSharedFunctionInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=57&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoSharedFunctionInfo(TNode<FunctionTemplateInfo> p_o, TNode<HeapObject> p_v) {
return StoreFunctionTemplateInfoSharedFunctionInfo_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=59&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoFlag(TNode<FunctionTemplateInfo> p_o) {
return LoadFunctionTemplateInfoFlag_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=59&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoFlag(TNode<FunctionTemplateInfo> p_o, TNode<Smi> p_v) {
return StoreFunctionTemplateInfoFlag_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=61&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoLength(TNode<FunctionTemplateInfo> p_o) {
return LoadFunctionTemplateInfoLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=61&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoLength(TNode<FunctionTemplateInfo> p_o, TNode<Smi> p_v) {
return StoreFunctionTemplateInfoLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=65&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoCachedPropertyName(TNode<FunctionTemplateInfo> p_o) {
return LoadFunctionTemplateInfoCachedPropertyName_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=65&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoCachedPropertyName(TNode<FunctionTemplateInfo> p_o, TNode<Object> p_v) {
return StoreFunctionTemplateInfoCachedPropertyName_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=68&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoInstanceType(TNode<FunctionTemplateInfo> p_o) {
return LoadFunctionTemplateInfoInstanceType_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=68&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoInstanceType(TNode<FunctionTemplateInfo> p_o, TNode<Smi> p_v) {
return StoreFunctionTemplateInfoInstanceType_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=78&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadObjectTemplateInfoConstructor(TNode<ObjectTemplateInfo> p_o) {
return LoadObjectTemplateInfoConstructor_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=78&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreObjectTemplateInfoConstructor(TNode<ObjectTemplateInfo> p_o, TNode<HeapObject> p_v) {
return StoreObjectTemplateInfoConstructor_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=79&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadObjectTemplateInfoData(TNode<ObjectTemplateInfo> p_o) {
return LoadObjectTemplateInfoData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=79&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreObjectTemplateInfoData(TNode<ObjectTemplateInfo> p_o, TNode<Smi> p_v) {
return StoreObjectTemplateInfoData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=61&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadTurbofanBitsetTypeBitsetLow(TNode<TurbofanBitsetType> p_o) {
return LoadTurbofanBitsetTypeBitsetLow_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=61&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTurbofanBitsetTypeBitsetLow(TNode<TurbofanBitsetType> p_o, TNode<Uint32T> p_v) {
return StoreTurbofanBitsetTypeBitsetLow_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=62&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadTurbofanBitsetTypeBitsetHigh(TNode<TurbofanBitsetType> p_o) {
return LoadTurbofanBitsetTypeBitsetHigh_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=62&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTurbofanBitsetTypeBitsetHigh(TNode<TurbofanBitsetType> p_o, TNode<Uint32T> p_v) {
return StoreTurbofanBitsetTypeBitsetHigh_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=67&c=3
TNode<TurbofanType> TorqueGeneratedExportedMacrosAssembler::LoadTurbofanUnionTypeType1(TNode<TurbofanUnionType> p_o) {
return LoadTurbofanUnionTypeType1_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=67&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTurbofanUnionTypeType1(TNode<TurbofanUnionType> p_o, TNode<TurbofanType> p_v) {
return StoreTurbofanUnionTypeType1_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=68&c=3
TNode<TurbofanType> TorqueGeneratedExportedMacrosAssembler::LoadTurbofanUnionTypeType2(TNode<TurbofanUnionType> p_o) {
return LoadTurbofanUnionTypeType2_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=68&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTurbofanUnionTypeType2(TNode<TurbofanUnionType> p_o, TNode<TurbofanType> p_v) {
return StoreTurbofanUnionTypeType2_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=73&c=3
TNode<Float64T> TorqueGeneratedExportedMacrosAssembler::LoadTurbofanRangeTypeMin(TNode<TurbofanRangeType> p_o) {
return LoadTurbofanRangeTypeMin_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=73&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTurbofanRangeTypeMin(TNode<TurbofanRangeType> p_o, TNode<Float64T> p_v) {
return StoreTurbofanRangeTypeMin_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=74&c=3
TNode<Float64T> TorqueGeneratedExportedMacrosAssembler::LoadTurbofanRangeTypeMax(TNode<TurbofanRangeType> p_o) {
return LoadTurbofanRangeTypeMax_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=74&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTurbofanRangeTypeMax(TNode<TurbofanRangeType> p_o, TNode<Float64T> p_v) {
return StoreTurbofanRangeTypeMax_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=79&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadTurbofanHeapConstantTypeConstant(TNode<TurbofanHeapConstantType> p_o) {
return LoadTurbofanHeapConstantTypeConstant_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=79&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTurbofanHeapConstantTypeConstant(TNode<TurbofanHeapConstantType> p_o, TNode<HeapObject> p_v) {
return StoreTurbofanHeapConstantTypeConstant_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=84&c=3
TNode<Float64T> TorqueGeneratedExportedMacrosAssembler::LoadTurbofanOtherNumberConstantTypeConstant(TNode<TurbofanOtherNumberConstantType> p_o) {
return LoadTurbofanOtherNumberConstantTypeConstant_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=84&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTurbofanOtherNumberConstantTypeConstant(TNode<TurbofanOtherNumberConstantType> p_o, TNode<Float64T> p_v) {
return StoreTurbofanOtherNumberConstantTypeConstant_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=765&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadInternalClassA(TNode<InternalClass> p_o) {
return LoadInternalClassA_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=765&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInternalClassA(TNode<InternalClass> p_o, TNode<Smi> p_v) {
return StoreInternalClassA_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=766&c=3
TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadInternalClassB(TNode<InternalClass> p_o) {
return LoadInternalClassB_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=766&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInternalClassB(TNode<InternalClass> p_o, TNode<Number> p_v) {
return StoreInternalClassB_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=829&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSmiPairA(TNode<SmiPair> p_o) {
return LoadSmiPairA_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=829&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmiPairA(TNode<SmiPair> p_o, TNode<Smi> p_v) {
return StoreSmiPairA_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=830&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSmiPairB(TNode<SmiPair> p_o) {
return LoadSmiPairB_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=830&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmiPairB(TNode<SmiPair> p_o, TNode<Smi> p_v) {
return StoreSmiPairB_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=927&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSmiBoxValue(TNode<SmiBox> p_o) {
return LoadSmiBoxValue_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=927&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmiBoxValue(TNode<SmiBox> p_o, TNode<Smi> p_v) {
return StoreSmiBoxValue_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=928&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSmiBoxUnrelated(TNode<SmiBox> p_o) {
return LoadSmiBoxUnrelated_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=928&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmiBoxUnrelated(TNode<SmiBox> p_o, TNode<Smi> p_v) {
return StoreSmiBoxUnrelated_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1179&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadExportedSubClassBaseA(TNode<ExportedSubClassBase> p_o) {
return LoadExportedSubClassBaseA_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1179&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreExportedSubClassBaseA(TNode<ExportedSubClassBase> p_o, TNode<HeapObject> p_v) {
return StoreExportedSubClassBaseA_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1180&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadExportedSubClassBaseB(TNode<ExportedSubClassBase> p_o) {
return LoadExportedSubClassBaseB_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1180&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreExportedSubClassBaseB(TNode<ExportedSubClassBase> p_o, TNode<HeapObject> p_v) {
return StoreExportedSubClassBaseB_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1172&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadExportedSubClassCField(TNode<ExportedSubClass> p_o) {
return LoadExportedSubClassCField_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1172&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreExportedSubClassCField(TNode<ExportedSubClass> p_o, TNode<Int32T> p_v) {
return StoreExportedSubClassCField_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1173&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadExportedSubClassDField(TNode<ExportedSubClass> p_o) {
return LoadExportedSubClassDField_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1173&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreExportedSubClassDField(TNode<ExportedSubClass> p_o, TNode<Int32T> p_v) {
return StoreExportedSubClassDField_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1174&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadExportedSubClassEField(TNode<ExportedSubClass> p_o) {
return LoadExportedSubClassEField_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1174&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreExportedSubClassEField(TNode<ExportedSubClass> p_o, TNode<Smi> p_v) {
return StoreExportedSubClassEField_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1192&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadInternalClassWithSmiElementsData(TNode<InternalClassWithSmiElements> p_o) {
return LoadInternalClassWithSmiElementsData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1192&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInternalClassWithSmiElementsData(TNode<InternalClassWithSmiElements> p_o, TNode<Smi> p_v) {
return StoreInternalClassWithSmiElementsData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1193&c=3
TNode<Oddball> TorqueGeneratedExportedMacrosAssembler::LoadInternalClassWithSmiElementsObject(TNode<InternalClassWithSmiElements> p_o) {
return LoadInternalClassWithSmiElementsObject_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1193&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInternalClassWithSmiElementsObject(TNode<InternalClassWithSmiElements> p_o, TNode<Oddball> p_v) {
return StoreInternalClassWithSmiElementsObject_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1194&c=3
TorqueStructSlice_Smi_MutableReference_Smi_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceInternalClassWithSmiElementsEntries(TNode<InternalClassWithSmiElements> p_o) {
return FieldSliceInternalClassWithSmiElementsEntries_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1194&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadInternalClassWithSmiElementsEntries(TNode<InternalClassWithSmiElements> p_o, TNode<IntPtrT> p_i) {
return LoadInternalClassWithSmiElementsEntries_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1194&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInternalClassWithSmiElementsEntries(TNode<InternalClassWithSmiElements> p_o, TNode<IntPtrT> p_i, TNode<Smi> p_v) {
return StoreInternalClassWithSmiElementsEntries_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1203&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadInternalClassWithStructElementsDummy1(TNode<InternalClassWithStructElements> p_o) {
return LoadInternalClassWithStructElementsDummy1_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1203&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInternalClassWithStructElementsDummy1(TNode<InternalClassWithStructElements> p_o, TNode<Int32T> p_v) {
return StoreInternalClassWithStructElementsDummy1_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1204&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadInternalClassWithStructElementsDummy2(TNode<InternalClassWithStructElements> p_o) {
return LoadInternalClassWithStructElementsDummy2_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1204&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInternalClassWithStructElementsDummy2(TNode<InternalClassWithStructElements> p_o, TNode<Int32T> p_v) {
return StoreInternalClassWithStructElementsDummy2_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1205&c=9
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadInternalClassWithStructElementsCount(TNode<InternalClassWithStructElements> p_o) {
return LoadInternalClassWithStructElementsCount_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1206&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadInternalClassWithStructElementsData(TNode<InternalClassWithStructElements> p_o) {
return LoadInternalClassWithStructElementsData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1206&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInternalClassWithStructElementsData(TNode<InternalClassWithStructElements> p_o, TNode<Smi> p_v) {
return StoreInternalClassWithStructElementsData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1207&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadInternalClassWithStructElementsObject(TNode<InternalClassWithStructElements> p_o) {
return LoadInternalClassWithStructElementsObject_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1207&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInternalClassWithStructElementsObject(TNode<InternalClassWithStructElements> p_o, TNode<Object> p_v) {
return StoreInternalClassWithStructElementsObject_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1208&c=3
TorqueStructSlice_Smi_MutableReference_Smi_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceInternalClassWithStructElementsEntries(TNode<InternalClassWithStructElements> p_o) {
return FieldSliceInternalClassWithStructElementsEntries_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1208&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadInternalClassWithStructElementsEntries(TNode<InternalClassWithStructElements> p_o, TNode<IntPtrT> p_i) {
return LoadInternalClassWithStructElementsEntries_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1208&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInternalClassWithStructElementsEntries(TNode<InternalClassWithStructElements> p_o, TNode<IntPtrT> p_i, TNode<Smi> p_v) {
return StoreInternalClassWithStructElementsEntries_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1209&c=3
TorqueStructSlice_InternalClassStructElement_MutableReference_InternalClassStructElement_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceInternalClassWithStructElementsMoreEntries(TNode<InternalClassWithStructElements> p_o) {
return FieldSliceInternalClassWithStructElementsMoreEntries_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1284&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadExportedSubClass2XField(TNode<ExportedSubClass2> p_o) {
return LoadExportedSubClass2XField_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1284&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreExportedSubClass2XField(TNode<ExportedSubClass2> p_o, TNode<Int32T> p_v) {
return StoreExportedSubClass2XField_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1285&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadExportedSubClass2YField(TNode<ExportedSubClass2> p_o) {
return LoadExportedSubClass2YField_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1285&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreExportedSubClass2YField(TNode<ExportedSubClass2> p_o, TNode<Int32T> p_v) {
return StoreExportedSubClass2YField_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1286&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadExportedSubClass2ZField(TNode<ExportedSubClass2> p_o) {
return LoadExportedSubClass2ZField_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1286&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreExportedSubClass2ZField(TNode<ExportedSubClass2> p_o, TNode<Smi> p_v) {
return StoreExportedSubClass2ZField_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=43&c=3
TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadSortStateReceiver(TNode<SortState> p_o) {
return LoadSortStateReceiver_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=43&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateReceiver(TNode<SortState> p_o, TNode<JSReceiver> p_v) {
return StoreSortStateReceiver_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=48&c=3
TNode<Map> TorqueGeneratedExportedMacrosAssembler::LoadSortStateInitialReceiverMap(TNode<SortState> p_o) {
return LoadSortStateInitialReceiverMap_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=48&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateInitialReceiverMap(TNode<SortState> p_o, TNode<Map> p_v) {
return StoreSortStateInitialReceiverMap_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=49&c=3
TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadSortStateInitialReceiverLength(TNode<SortState> p_o) {
return LoadSortStateInitialReceiverLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=49&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateInitialReceiverLength(TNode<SortState> p_o, TNode<Number> p_v) {
return StoreSortStateInitialReceiverLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=52&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadSortStateUserCmpFn(TNode<SortState> p_o) {
return LoadSortStateUserCmpFn_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=52&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateUserCmpFn(TNode<SortState> p_o, TNode<HeapObject> p_v) {
return StoreSortStateUserCmpFn_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=57&c=3
TNode<BuiltinPtr> TorqueGeneratedExportedMacrosAssembler::LoadSortStateSortComparePtr(TNode<SortState> p_o) {
return LoadSortStateSortComparePtr_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=57&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateSortComparePtr(TNode<SortState> p_o, TNode<BuiltinPtr> p_v) {
return StoreSortStateSortComparePtr_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=62&c=3
TNode<BuiltinPtr> TorqueGeneratedExportedMacrosAssembler::LoadSortStateLoadFn(TNode<SortState> p_o) {
return LoadSortStateLoadFn_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=62&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateLoadFn(TNode<SortState> p_o, TNode<BuiltinPtr> p_v) {
return StoreSortStateLoadFn_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=63&c=3
TNode<BuiltinPtr> TorqueGeneratedExportedMacrosAssembler::LoadSortStateStoreFn(TNode<SortState> p_o) {
return LoadSortStateStoreFn_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=63&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateStoreFn(TNode<SortState> p_o, TNode<BuiltinPtr> p_v) {
return StoreSortStateStoreFn_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=64&c=3
TNode<BuiltinPtr> TorqueGeneratedExportedMacrosAssembler::LoadSortStateDeleteFn(TNode<SortState> p_o) {
return LoadSortStateDeleteFn_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=64&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateDeleteFn(TNode<SortState> p_o, TNode<BuiltinPtr> p_v) {
return StoreSortStateDeleteFn_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=65&c=3
TNode<BuiltinPtr> TorqueGeneratedExportedMacrosAssembler::LoadSortStateCanUseSameAccessorFn(TNode<SortState> p_o) {
return LoadSortStateCanUseSameAccessorFn_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=65&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateCanUseSameAccessorFn(TNode<SortState> p_o, TNode<BuiltinPtr> p_v) {
return StoreSortStateCanUseSameAccessorFn_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=70&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSortStateMinGallop(TNode<SortState> p_o) {
return LoadSortStateMinGallop_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=70&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateMinGallop(TNode<SortState> p_o, TNode<Smi> p_v) {
return StoreSortStateMinGallop_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=82&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSortStatePendingRunsSize(TNode<SortState> p_o) {
return LoadSortStatePendingRunsSize_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=82&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSortStatePendingRunsSize(TNode<SortState> p_o, TNode<Smi> p_v) {
return StoreSortStatePendingRunsSize_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=83&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadSortStatePendingRuns(TNode<SortState> p_o) {
return LoadSortStatePendingRuns_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=83&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSortStatePendingRuns(TNode<SortState> p_o, TNode<FixedArray> p_v) {
return StoreSortStatePendingRuns_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=88&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadSortStateWorkArray(TNode<SortState> p_o) {
return LoadSortStateWorkArray_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=88&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateWorkArray(TNode<SortState> p_o, TNode<FixedArray> p_v) {
return StoreSortStateWorkArray_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=91&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadSortStateTempArray(TNode<SortState> p_o) {
return LoadSortStateTempArray_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=91&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateTempArray(TNode<SortState> p_o, TNode<FixedArray> p_v) {
return StoreSortStateTempArray_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=94&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSortStateSortLength(TNode<SortState> p_o) {
return LoadSortStateSortLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=94&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateSortLength(TNode<SortState> p_o, TNode<Smi> p_v) {
return StoreSortStateSortLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=98&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSortStateNumberOfUndefined(TNode<SortState> p_o) {
return LoadSortStateNumberOfUndefined_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=98&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateNumberOfUndefined(TNode<SortState> p_o, TNode<Smi> p_v) {
return StoreSortStateNumberOfUndefined_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=8&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSV8BreakIteratorLocale(TNode<JSV8BreakIterator> p_o) {
return LoadJSV8BreakIteratorLocale_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSV8BreakIteratorLocale(TNode<JSV8BreakIterator> p_o, TNode<String> p_v) {
return StoreJSV8BreakIteratorLocale_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=9&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSV8BreakIteratorBreakIterator(TNode<JSV8BreakIterator> p_o) {
return LoadJSV8BreakIteratorBreakIterator_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=9&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSV8BreakIteratorBreakIterator(TNode<JSV8BreakIterator> p_o, TNode<Foreign> p_v) {
return StoreJSV8BreakIteratorBreakIterator_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=10&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSV8BreakIteratorUnicodeString(TNode<JSV8BreakIterator> p_o) {
return LoadJSV8BreakIteratorUnicodeString_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=10&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSV8BreakIteratorUnicodeString(TNode<JSV8BreakIterator> p_o, TNode<Foreign> p_v) {
return StoreJSV8BreakIteratorUnicodeString_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=11&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSV8BreakIteratorBoundAdoptText(TNode<JSV8BreakIterator> p_o) {
return LoadJSV8BreakIteratorBoundAdoptText_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=11&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSV8BreakIteratorBoundAdoptText(TNode<JSV8BreakIterator> p_o, TNode<HeapObject> p_v) {
return StoreJSV8BreakIteratorBoundAdoptText_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=12&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSV8BreakIteratorBoundFirst(TNode<JSV8BreakIterator> p_o) {
return LoadJSV8BreakIteratorBoundFirst_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=12&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSV8BreakIteratorBoundFirst(TNode<JSV8BreakIterator> p_o, TNode<HeapObject> p_v) {
return StoreJSV8BreakIteratorBoundFirst_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=13&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSV8BreakIteratorBoundNext(TNode<JSV8BreakIterator> p_o) {
return LoadJSV8BreakIteratorBoundNext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=13&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSV8BreakIteratorBoundNext(TNode<JSV8BreakIterator> p_o, TNode<HeapObject> p_v) {
return StoreJSV8BreakIteratorBoundNext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=14&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSV8BreakIteratorBoundCurrent(TNode<JSV8BreakIterator> p_o) {
return LoadJSV8BreakIteratorBoundCurrent_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSV8BreakIteratorBoundCurrent(TNode<JSV8BreakIterator> p_o, TNode<HeapObject> p_v) {
return StoreJSV8BreakIteratorBoundCurrent_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=15&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSV8BreakIteratorBoundBreakType(TNode<JSV8BreakIterator> p_o) {
return LoadJSV8BreakIteratorBoundBreakType_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=15&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSV8BreakIteratorBoundBreakType(TNode<JSV8BreakIterator> p_o, TNode<HeapObject> p_v) {
return StoreJSV8BreakIteratorBoundBreakType_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=8&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSCollatorIcuCollator(TNode<JSCollator> p_o) {
return LoadJSCollatorIcuCollator_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSCollatorIcuCollator(TNode<JSCollator> p_o, TNode<Foreign> p_v) {
return StoreJSCollatorIcuCollator_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=9&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSCollatorBoundCompare(TNode<JSCollator> p_o) {
return LoadJSCollatorBoundCompare_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=9&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSCollatorBoundCompare(TNode<JSCollator> p_o, TNode<HeapObject> p_v) {
return StoreJSCollatorBoundCompare_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=10&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSCollatorLocale(TNode<JSCollator> p_o) {
return LoadJSCollatorLocale_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=10&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSCollatorLocale(TNode<JSCollator> p_o, TNode<String> p_v) {
return StoreJSCollatorLocale_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=24&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSDateTimeFormatLocale(TNode<JSDateTimeFormat> p_o) {
return LoadJSDateTimeFormatLocale_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=24&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateTimeFormatLocale(TNode<JSDateTimeFormat> p_o, TNode<String> p_v) {
return StoreJSDateTimeFormatLocale_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=25&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSDateTimeFormatIcuLocale(TNode<JSDateTimeFormat> p_o) {
return LoadJSDateTimeFormatIcuLocale_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=25&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateTimeFormatIcuLocale(TNode<JSDateTimeFormat> p_o, TNode<Foreign> p_v) {
return StoreJSDateTimeFormatIcuLocale_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=26&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSDateTimeFormatIcuSimpleDateFormat(TNode<JSDateTimeFormat> p_o) {
return LoadJSDateTimeFormatIcuSimpleDateFormat_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=26&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateTimeFormatIcuSimpleDateFormat(TNode<JSDateTimeFormat> p_o, TNode<Foreign> p_v) {
return StoreJSDateTimeFormatIcuSimpleDateFormat_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=27&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSDateTimeFormatIcuDateIntervalFormat(TNode<JSDateTimeFormat> p_o) {
return LoadJSDateTimeFormatIcuDateIntervalFormat_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=27&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateTimeFormatIcuDateIntervalFormat(TNode<JSDateTimeFormat> p_o, TNode<Foreign> p_v) {
return StoreJSDateTimeFormatIcuDateIntervalFormat_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=28&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSDateTimeFormatBoundFormat(TNode<JSDateTimeFormat> p_o) {
return LoadJSDateTimeFormatBoundFormat_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=28&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateTimeFormatBoundFormat(TNode<JSDateTimeFormat> p_o, TNode<HeapObject> p_v) {
return StoreJSDateTimeFormatBoundFormat_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=29&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSDateTimeFormatFlags(TNode<JSDateTimeFormat> p_o) {
return LoadJSDateTimeFormatFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=29&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateTimeFormatFlags(TNode<JSDateTimeFormat> p_o, TNode<Smi> p_v) {
return StoreJSDateTimeFormatFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=19&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSDisplayNamesInternal(TNode<JSDisplayNames> p_o) {
return LoadJSDisplayNamesInternal_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=19&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDisplayNamesInternal(TNode<JSDisplayNames> p_o, TNode<Foreign> p_v) {
return StoreJSDisplayNamesInternal_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=20&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSDisplayNamesFlags(TNode<JSDisplayNames> p_o) {
return LoadJSDisplayNamesFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=20&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDisplayNamesFlags(TNode<JSDisplayNames> p_o, TNode<Smi> p_v) {
return StoreJSDisplayNamesFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=15&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSListFormatLocale(TNode<JSListFormat> p_o) {
return LoadJSListFormatLocale_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=15&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSListFormatLocale(TNode<JSListFormat> p_o, TNode<String> p_v) {
return StoreJSListFormatLocale_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=16&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSListFormatIcuFormatter(TNode<JSListFormat> p_o) {
return LoadJSListFormatIcuFormatter_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=16&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSListFormatIcuFormatter(TNode<JSListFormat> p_o, TNode<Foreign> p_v) {
return StoreJSListFormatIcuFormatter_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=17&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSListFormatFlags(TNode<JSListFormat> p_o) {
return LoadJSListFormatFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=17&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSListFormatFlags(TNode<JSListFormat> p_o, TNode<Smi> p_v) {
return StoreJSListFormatFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-locale.tq?l=8&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSLocaleIcuLocale(TNode<JSLocale> p_o) {
return LoadJSLocaleIcuLocale_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-locale.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSLocaleIcuLocale(TNode<JSLocale> p_o, TNode<Foreign> p_v) {
return StoreJSLocaleIcuLocale_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=8&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSNumberFormatLocale(TNode<JSNumberFormat> p_o) {
return LoadJSNumberFormatLocale_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSNumberFormatLocale(TNode<JSNumberFormat> p_o, TNode<String> p_v) {
return StoreJSNumberFormatLocale_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=9&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSNumberFormatIcuNumberFormatter(TNode<JSNumberFormat> p_o) {
return LoadJSNumberFormatIcuNumberFormatter_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=9&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSNumberFormatIcuNumberFormatter(TNode<JSNumberFormat> p_o, TNode<Foreign> p_v) {
return StoreJSNumberFormatIcuNumberFormatter_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=11&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSNumberFormatIcuNumberRangeFormatter(TNode<JSNumberFormat> p_o) {
return LoadJSNumberFormatIcuNumberRangeFormatter_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=11&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSNumberFormatIcuNumberRangeFormatter(TNode<JSNumberFormat> p_o, TNode<Foreign> p_v) {
return StoreJSNumberFormatIcuNumberRangeFormatter_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=13&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSNumberFormatBoundFormat(TNode<JSNumberFormat> p_o) {
return LoadJSNumberFormatBoundFormat_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=13&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSNumberFormatBoundFormat(TNode<JSNumberFormat> p_o, TNode<HeapObject> p_v) {
return StoreJSNumberFormatBoundFormat_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=13&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSPluralRulesLocale(TNode<JSPluralRules> p_o) {
return LoadJSPluralRulesLocale_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=13&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSPluralRulesLocale(TNode<JSPluralRules> p_o, TNode<String> p_v) {
return StoreJSPluralRulesLocale_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=14&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSPluralRulesFlags(TNode<JSPluralRules> p_o) {
return LoadJSPluralRulesFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSPluralRulesFlags(TNode<JSPluralRules> p_o, TNode<Smi> p_v) {
return StoreJSPluralRulesFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=15&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSPluralRulesIcuPluralRules(TNode<JSPluralRules> p_o) {
return LoadJSPluralRulesIcuPluralRules_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=15&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSPluralRulesIcuPluralRules(TNode<JSPluralRules> p_o, TNode<Foreign> p_v) {
return StoreJSPluralRulesIcuPluralRules_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=16&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSPluralRulesIcuNumberFormatter(TNode<JSPluralRules> p_o) {
return LoadJSPluralRulesIcuNumberFormatter_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=16&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSPluralRulesIcuNumberFormatter(TNode<JSPluralRules> p_o, TNode<Foreign> p_v) {
return StoreJSPluralRulesIcuNumberFormatter_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=18&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSPluralRulesIcuNumberRangeFormatter(TNode<JSPluralRules> p_o) {
return LoadJSPluralRulesIcuNumberRangeFormatter_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=18&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSPluralRulesIcuNumberRangeFormatter(TNode<JSPluralRules> p_o, TNode<Foreign> p_v) {
return StoreJSPluralRulesIcuNumberRangeFormatter_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=14&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSRelativeTimeFormatLocale(TNode<JSRelativeTimeFormat> p_o) {
return LoadJSRelativeTimeFormatLocale_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRelativeTimeFormatLocale(TNode<JSRelativeTimeFormat> p_o, TNode<String> p_v) {
return StoreJSRelativeTimeFormatLocale_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=15&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSRelativeTimeFormatNumberingSystem(TNode<JSRelativeTimeFormat> p_o) {
return LoadJSRelativeTimeFormatNumberingSystem_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=15&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRelativeTimeFormatNumberingSystem(TNode<JSRelativeTimeFormat> p_o, TNode<String> p_v) {
return StoreJSRelativeTimeFormatNumberingSystem_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=16&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSRelativeTimeFormatIcuFormatter(TNode<JSRelativeTimeFormat> p_o) {
return LoadJSRelativeTimeFormatIcuFormatter_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=16&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRelativeTimeFormatIcuFormatter(TNode<JSRelativeTimeFormat> p_o, TNode<Foreign> p_v) {
return StoreJSRelativeTimeFormatIcuFormatter_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=17&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSRelativeTimeFormatFlags(TNode<JSRelativeTimeFormat> p_o) {
return LoadJSRelativeTimeFormatFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=17&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRelativeTimeFormatFlags(TNode<JSRelativeTimeFormat> p_o, TNode<Smi> p_v) {
return StoreJSRelativeTimeFormatFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=12&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSSegmentIteratorIcuBreakIterator(TNode<JSSegmentIterator> p_o) {
return LoadJSSegmentIteratorIcuBreakIterator_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=12&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSSegmentIteratorIcuBreakIterator(TNode<JSSegmentIterator> p_o, TNode<Foreign> p_v) {
return StoreJSSegmentIteratorIcuBreakIterator_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=13&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSSegmentIteratorUnicodeString(TNode<JSSegmentIterator> p_o) {
return LoadJSSegmentIteratorUnicodeString_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=13&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSSegmentIteratorUnicodeString(TNode<JSSegmentIterator> p_o, TNode<Foreign> p_v) {
return StoreJSSegmentIteratorUnicodeString_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=14&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSSegmentIteratorFlags(TNode<JSSegmentIterator> p_o) {
return LoadJSSegmentIteratorFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSSegmentIteratorFlags(TNode<JSSegmentIterator> p_o, TNode<Smi> p_v) {
return StoreJSSegmentIteratorFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=14&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSSegmenterLocale(TNode<JSSegmenter> p_o) {
return LoadJSSegmenterLocale_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSSegmenterLocale(TNode<JSSegmenter> p_o, TNode<String> p_v) {
return StoreJSSegmenterLocale_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=15&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSSegmenterIcuBreakIterator(TNode<JSSegmenter> p_o) {
return LoadJSSegmenterIcuBreakIterator_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=15&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSSegmenterIcuBreakIterator(TNode<JSSegmenter> p_o, TNode<Foreign> p_v) {
return StoreJSSegmenterIcuBreakIterator_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=16&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSSegmenterFlags(TNode<JSSegmenter> p_o) {
return LoadJSSegmenterFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=16&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSSegmenterFlags(TNode<JSSegmenter> p_o, TNode<Smi> p_v) {
return StoreJSSegmenterFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=12&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSSegmentsIcuBreakIterator(TNode<JSSegments> p_o) {
return LoadJSSegmentsIcuBreakIterator_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=12&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSSegmentsIcuBreakIterator(TNode<JSSegments> p_o, TNode<Foreign> p_v) {
return StoreJSSegmentsIcuBreakIterator_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=13&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSSegmentsUnicodeString(TNode<JSSegments> p_o) {
return LoadJSSegmentsUnicodeString_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=13&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSSegmentsUnicodeString(TNode<JSSegments> p_o, TNode<Foreign> p_v) {
return StoreJSSegmentsUnicodeString_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=14&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSSegmentsFlags(TNode<JSSegments> p_o) {
return LoadJSSegmentsFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSSegmentsFlags(TNode<JSSegments> p_o, TNode<Smi> p_v) {
return StoreJSSegmentsFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=21&c=3
TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadWasmApiFunctionRefIsolateRoot(TNode<WasmApiFunctionRef> p_o) {
return LoadWasmApiFunctionRefIsolateRoot_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=21&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmApiFunctionRefIsolateRoot(TNode<WasmApiFunctionRef> p_o, TNode<RawPtrT> p_v) {
return StoreWasmApiFunctionRefIsolateRoot_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=22&c=3
TNode<NativeContext> TorqueGeneratedExportedMacrosAssembler::LoadWasmApiFunctionRefNativeContext(TNode<WasmApiFunctionRef> p_o) {
return LoadWasmApiFunctionRefNativeContext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=22&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmApiFunctionRefNativeContext(TNode<WasmApiFunctionRef> p_o, TNode<NativeContext> p_v) {
return StoreWasmApiFunctionRefNativeContext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=23&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmApiFunctionRefCallable(TNode<WasmApiFunctionRef> p_o) {
return LoadWasmApiFunctionRefCallable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=23&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmApiFunctionRefCallable(TNode<WasmApiFunctionRef> p_o, TNode<HeapObject> p_v) {
return StoreWasmApiFunctionRefCallable_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=24&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmApiFunctionRefSuspender(TNode<WasmApiFunctionRef> p_o) {
return LoadWasmApiFunctionRefSuspender_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=24&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmApiFunctionRefSuspender(TNode<WasmApiFunctionRef> p_o, TNode<HeapObject> p_v) {
return StoreWasmApiFunctionRefSuspender_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=48&c=3
TNode<WasmInternalFunction> TorqueGeneratedExportedMacrosAssembler::LoadWasmFunctionDataInternal(TNode<WasmFunctionData> p_o) {
return LoadWasmFunctionDataInternal_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=48&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmFunctionDataInternal(TNode<WasmFunctionData> p_o, TNode<WasmInternalFunction> p_v) {
return StoreWasmFunctionDataInternal_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=50&c=31
TNode<CodeDataContainer> TorqueGeneratedExportedMacrosAssembler::LoadWasmFunctionDataWrapperCode(TNode<WasmFunctionData> p_o) {
return LoadWasmFunctionDataWrapperCode_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=50&c=31
void TorqueGeneratedExportedMacrosAssembler::StoreWasmFunctionDataWrapperCode(TNode<WasmFunctionData> p_o, TNode<CodeDataContainer> p_v) {
return StoreWasmFunctionDataWrapperCode_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=58&c=3
TNode<WasmInstanceObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmExportedFunctionDataInstance(TNode<WasmExportedFunctionData> p_o) {
return LoadWasmExportedFunctionDataInstance_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=58&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExportedFunctionDataInstance(TNode<WasmExportedFunctionData> p_o, TNode<WasmInstanceObject> p_v) {
return StoreWasmExportedFunctionDataInstance_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=59&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmExportedFunctionDataFunctionIndex(TNode<WasmExportedFunctionData> p_o) {
return LoadWasmExportedFunctionDataFunctionIndex_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=59&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExportedFunctionDataFunctionIndex(TNode<WasmExportedFunctionData> p_o, TNode<Smi> p_v) {
return StoreWasmExportedFunctionDataFunctionIndex_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=60&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadWasmExportedFunctionDataSignature(TNode<WasmExportedFunctionData> p_o) {
return LoadWasmExportedFunctionDataSignature_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=60&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExportedFunctionDataSignature(TNode<WasmExportedFunctionData> p_o, TNode<Foreign> p_v) {
return StoreWasmExportedFunctionDataSignature_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=61&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmExportedFunctionDataWrapperBudget(TNode<WasmExportedFunctionData> p_o) {
return LoadWasmExportedFunctionDataWrapperBudget_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=61&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExportedFunctionDataWrapperBudget(TNode<WasmExportedFunctionData> p_o, TNode<Smi> p_v) {
return StoreWasmExportedFunctionDataWrapperBudget_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=64&c=31
TNode<CodeDataContainer> TorqueGeneratedExportedMacrosAssembler::LoadWasmExportedFunctionDataCWrapperCode(TNode<WasmExportedFunctionData> p_o) {
return LoadWasmExportedFunctionDataCWrapperCode_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=64&c=31
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExportedFunctionDataCWrapperCode(TNode<WasmExportedFunctionData> p_o, TNode<CodeDataContainer> p_v) {
return StoreWasmExportedFunctionDataCWrapperCode_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=66&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmExportedFunctionDataPackedArgsSize(TNode<WasmExportedFunctionData> p_o) {
return LoadWasmExportedFunctionDataPackedArgsSize_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=66&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExportedFunctionDataPackedArgsSize(TNode<WasmExportedFunctionData> p_o, TNode<Smi> p_v) {
return StoreWasmExportedFunctionDataPackedArgsSize_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=69&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmExportedFunctionDataSuspender(TNode<WasmExportedFunctionData> p_o) {
return LoadWasmExportedFunctionDataSuspender_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=69&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExportedFunctionDataSuspender(TNode<WasmExportedFunctionData> p_o, TNode<HeapObject> p_v) {
return StoreWasmExportedFunctionDataSuspender_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=73&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmJSFunctionDataSerializedReturnCount(TNode<WasmJSFunctionData> p_o) {
return LoadWasmJSFunctionDataSerializedReturnCount_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=73&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmJSFunctionDataSerializedReturnCount(TNode<WasmJSFunctionData> p_o, TNode<Smi> p_v) {
return StoreWasmJSFunctionDataSerializedReturnCount_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=74&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmJSFunctionDataSerializedParameterCount(TNode<WasmJSFunctionData> p_o) {
return LoadWasmJSFunctionDataSerializedParameterCount_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=74&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmJSFunctionDataSerializedParameterCount(TNode<WasmJSFunctionData> p_o, TNode<Smi> p_v) {
return StoreWasmJSFunctionDataSerializedParameterCount_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=75&c=3
TNode<ByteArray> TorqueGeneratedExportedMacrosAssembler::LoadWasmJSFunctionDataSerializedSignature(TNode<WasmJSFunctionData> p_o) {
return LoadWasmJSFunctionDataSerializedSignature_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=75&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmJSFunctionDataSerializedSignature(TNode<WasmJSFunctionData> p_o, TNode<ByteArray> p_v) {
return StoreWasmJSFunctionDataSerializedSignature_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=79&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadWasmCapiFunctionDataEmbedderData(TNode<WasmCapiFunctionData> p_o) {
return LoadWasmCapiFunctionDataEmbedderData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=79&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmCapiFunctionDataEmbedderData(TNode<WasmCapiFunctionData> p_o, TNode<Foreign> p_v) {
return StoreWasmCapiFunctionDataEmbedderData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=80&c=3
TNode<ByteArray> TorqueGeneratedExportedMacrosAssembler::LoadWasmCapiFunctionDataSerializedSignature(TNode<WasmCapiFunctionData> p_o) {
return LoadWasmCapiFunctionDataSerializedSignature_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=80&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmCapiFunctionDataSerializedSignature(TNode<WasmCapiFunctionData> p_o, TNode<ByteArray> p_v) {
return StoreWasmCapiFunctionDataSerializedSignature_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=84&c=3
TNode<WasmSuspenderObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmOnFulfilledDataSuspender(TNode<WasmOnFulfilledData> p_o) {
return LoadWasmOnFulfilledDataSuspender_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=84&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmOnFulfilledDataSuspender(TNode<WasmOnFulfilledData> p_o, TNode<WasmSuspenderObject> p_v) {
return StoreWasmOnFulfilledDataSuspender_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=88&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadWasmIndirectFunctionTableSize(TNode<WasmIndirectFunctionTable> p_o) {
return LoadWasmIndirectFunctionTableSize_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=88&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmIndirectFunctionTableSize(TNode<WasmIndirectFunctionTable> p_o, TNode<Uint32T> p_v) {
return StoreWasmIndirectFunctionTableSize_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=91&c=3
TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadWasmIndirectFunctionTableSigIds(TNode<WasmIndirectFunctionTable> p_o) {
return LoadWasmIndirectFunctionTableSigIds_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=91&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmIndirectFunctionTableSigIds(TNode<WasmIndirectFunctionTable> p_o, TNode<RawPtrT> p_v) {
return StoreWasmIndirectFunctionTableSigIds_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=92&c=3
TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadWasmIndirectFunctionTableTargets(TNode<WasmIndirectFunctionTable> p_o) {
return LoadWasmIndirectFunctionTableTargets_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=92&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmIndirectFunctionTableTargets(TNode<WasmIndirectFunctionTable> p_o, TNode<RawPtrT> p_v) {
return StoreWasmIndirectFunctionTableTargets_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=93&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmIndirectFunctionTableManagedNativeAllocations(TNode<WasmIndirectFunctionTable> p_o) {
return LoadWasmIndirectFunctionTableManagedNativeAllocations_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=93&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmIndirectFunctionTableManagedNativeAllocations(TNode<WasmIndirectFunctionTable> p_o, TNode<HeapObject> p_v) {
return StoreWasmIndirectFunctionTableManagedNativeAllocations_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=94&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadWasmIndirectFunctionTableRefs(TNode<WasmIndirectFunctionTable> p_o) {
return LoadWasmIndirectFunctionTableRefs_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=94&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmIndirectFunctionTableRefs(TNode<WasmIndirectFunctionTable> p_o, TNode<FixedArray> p_v) {
return StoreWasmIndirectFunctionTableRefs_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=98&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadWasmContinuationObjectStack(TNode<WasmContinuationObject> p_o) {
return LoadWasmContinuationObjectStack_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=98&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmContinuationObjectStack(TNode<WasmContinuationObject> p_o, TNode<Foreign> p_v) {
return StoreWasmContinuationObjectStack_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=99&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadWasmContinuationObjectJmpbuf(TNode<WasmContinuationObject> p_o) {
return LoadWasmContinuationObjectJmpbuf_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=99&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmContinuationObjectJmpbuf(TNode<WasmContinuationObject> p_o, TNode<Foreign> p_v) {
return StoreWasmContinuationObjectJmpbuf_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=100&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmContinuationObjectParent(TNode<WasmContinuationObject> p_o) {
return LoadWasmContinuationObjectParent_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=100&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmContinuationObjectParent(TNode<WasmContinuationObject> p_o, TNode<HeapObject> p_v) {
return StoreWasmContinuationObjectParent_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=104&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmSuspenderObjectContinuation(TNode<WasmSuspenderObject> p_o) {
return LoadWasmSuspenderObjectContinuation_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=104&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmSuspenderObjectContinuation(TNode<WasmSuspenderObject> p_o, TNode<HeapObject> p_v) {
return StoreWasmSuspenderObjectContinuation_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=105&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmSuspenderObjectParent(TNode<WasmSuspenderObject> p_o) {
return LoadWasmSuspenderObjectParent_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=105&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmSuspenderObjectParent(TNode<WasmSuspenderObject> p_o, TNode<HeapObject> p_v) {
return StoreWasmSuspenderObjectParent_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=106&c=3
TNode<JSObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmSuspenderObjectResume(TNode<WasmSuspenderObject> p_o) {
return LoadWasmSuspenderObjectResume_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=106&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmSuspenderObjectResume(TNode<WasmSuspenderObject> p_o, TNode<JSObject> p_v) {
return StoreWasmSuspenderObjectResume_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=107&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmSuspenderObjectState(TNode<WasmSuspenderObject> p_o) {
return LoadWasmSuspenderObjectState_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=107&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmSuspenderObjectState(TNode<WasmSuspenderObject> p_o, TNode<Smi> p_v) {
return StoreWasmSuspenderObjectState_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=114&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmExceptionTagIndex(TNode<WasmExceptionTag> p_o) {
return LoadWasmExceptionTagIndex_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=114&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExceptionTagIndex(TNode<WasmExceptionTag> p_o, TNode<Smi> p_v) {
return StoreWasmExceptionTagIndex_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=118&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadWasmModuleObjectManagedNativeModule(TNode<WasmModuleObject> p_o) {
return LoadWasmModuleObjectManagedNativeModule_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=118&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmModuleObjectManagedNativeModule(TNode<WasmModuleObject> p_o, TNode<Foreign> p_v) {
return StoreWasmModuleObjectManagedNativeModule_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=119&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadWasmModuleObjectExportWrappers(TNode<WasmModuleObject> p_o) {
return LoadWasmModuleObjectExportWrappers_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=119&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmModuleObjectExportWrappers(TNode<WasmModuleObject> p_o, TNode<FixedArray> p_v) {
return StoreWasmModuleObjectExportWrappers_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=120&c=3
TNode<Script> TorqueGeneratedExportedMacrosAssembler::LoadWasmModuleObjectScript(TNode<WasmModuleObject> p_o) {
return LoadWasmModuleObjectScript_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=120&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmModuleObjectScript(TNode<WasmModuleObject> p_o, TNode<Script> p_v) {
return StoreWasmModuleObjectScript_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=128&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmTableObjectInstance(TNode<WasmTableObject> p_o) {
return LoadWasmTableObjectInstance_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=128&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTableObjectInstance(TNode<WasmTableObject> p_o, TNode<HeapObject> p_v) {
return StoreWasmTableObjectInstance_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=131&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadWasmTableObjectEntries(TNode<WasmTableObject> p_o) {
return LoadWasmTableObjectEntries_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=131&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTableObjectEntries(TNode<WasmTableObject> p_o, TNode<FixedArray> p_v) {
return StoreWasmTableObjectEntries_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=132&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmTableObjectCurrentLength(TNode<WasmTableObject> p_o) {
return LoadWasmTableObjectCurrentLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=132&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTableObjectCurrentLength(TNode<WasmTableObject> p_o, TNode<Smi> p_v) {
return StoreWasmTableObjectCurrentLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=133&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadWasmTableObjectMaximumLength(TNode<WasmTableObject> p_o) {
return LoadWasmTableObjectMaximumLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=133&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTableObjectMaximumLength(TNode<WasmTableObject> p_o, TNode<Object> p_v) {
return StoreWasmTableObjectMaximumLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=134&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadWasmTableObjectDispatchTables(TNode<WasmTableObject> p_o) {
return LoadWasmTableObjectDispatchTables_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=134&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTableObjectDispatchTables(TNode<WasmTableObject> p_o, TNode<FixedArray> p_v) {
return StoreWasmTableObjectDispatchTables_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=135&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmTableObjectRawType(TNode<WasmTableObject> p_o) {
return LoadWasmTableObjectRawType_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=135&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTableObjectRawType(TNode<WasmTableObject> p_o, TNode<Smi> p_v) {
return StoreWasmTableObjectRawType_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=139&c=3
TNode<JSArrayBuffer> TorqueGeneratedExportedMacrosAssembler::LoadWasmMemoryObjectArrayBuffer(TNode<WasmMemoryObject> p_o) {
return LoadWasmMemoryObjectArrayBuffer_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=139&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmMemoryObjectArrayBuffer(TNode<WasmMemoryObject> p_o, TNode<JSArrayBuffer> p_v) {
return StoreWasmMemoryObjectArrayBuffer_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=140&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmMemoryObjectMaximumPages(TNode<WasmMemoryObject> p_o) {
return LoadWasmMemoryObjectMaximumPages_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=140&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmMemoryObjectMaximumPages(TNode<WasmMemoryObject> p_o, TNode<Smi> p_v) {
return StoreWasmMemoryObjectMaximumPages_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=141&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmMemoryObjectInstances(TNode<WasmMemoryObject> p_o) {
return LoadWasmMemoryObjectInstances_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=141&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmMemoryObjectInstances(TNode<WasmMemoryObject> p_o, TNode<HeapObject> p_v) {
return StoreWasmMemoryObjectInstances_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=149&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmGlobalObjectInstance(TNode<WasmGlobalObject> p_o) {
return LoadWasmGlobalObjectInstance_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=149&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmGlobalObjectInstance(TNode<WasmGlobalObject> p_o, TNode<HeapObject> p_v) {
return StoreWasmGlobalObjectInstance_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=150&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmGlobalObjectUntaggedBuffer(TNode<WasmGlobalObject> p_o) {
return LoadWasmGlobalObjectUntaggedBuffer_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=150&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmGlobalObjectUntaggedBuffer(TNode<WasmGlobalObject> p_o, TNode<HeapObject> p_v) {
return StoreWasmGlobalObjectUntaggedBuffer_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=151&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmGlobalObjectTaggedBuffer(TNode<WasmGlobalObject> p_o) {
return LoadWasmGlobalObjectTaggedBuffer_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=151&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmGlobalObjectTaggedBuffer(TNode<WasmGlobalObject> p_o, TNode<HeapObject> p_v) {
return StoreWasmGlobalObjectTaggedBuffer_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=152&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmGlobalObjectOffset(TNode<WasmGlobalObject> p_o) {
return LoadWasmGlobalObjectOffset_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=152&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmGlobalObjectOffset(TNode<WasmGlobalObject> p_o, TNode<Smi> p_v) {
return StoreWasmGlobalObjectOffset_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=153&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmGlobalObjectRawType(TNode<WasmGlobalObject> p_o) {
return LoadWasmGlobalObjectRawType_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=153&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmGlobalObjectRawType(TNode<WasmGlobalObject> p_o, TNode<Smi> p_v) {
return StoreWasmGlobalObjectRawType_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=156&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmGlobalObjectIsMutable(TNode<WasmGlobalObject> p_o) {
return LoadWasmGlobalObjectIsMutable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=156&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmGlobalObjectIsMutable(TNode<WasmGlobalObject> p_o, TNode<Smi> p_v) {
return StoreWasmGlobalObjectIsMutable_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=160&c=3
TNode<ByteArray> TorqueGeneratedExportedMacrosAssembler::LoadWasmTagObjectSerializedSignature(TNode<WasmTagObject> p_o) {
return LoadWasmTagObjectSerializedSignature_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=160&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTagObjectSerializedSignature(TNode<WasmTagObject> p_o, TNode<ByteArray> p_v) {
return StoreWasmTagObjectSerializedSignature_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=161&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmTagObjectTag(TNode<WasmTagObject> p_o) {
return LoadWasmTagObjectTag_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=161&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTagObjectTag(TNode<WasmTagObject> p_o, TNode<HeapObject> p_v) {
return StoreWasmTagObjectTag_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=167&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadAsmWasmDataManagedNativeModule(TNode<AsmWasmData> p_o) {
return LoadAsmWasmDataManagedNativeModule_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=167&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAsmWasmDataManagedNativeModule(TNode<AsmWasmData> p_o, TNode<Foreign> p_v) {
return StoreAsmWasmDataManagedNativeModule_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=168&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadAsmWasmDataExportWrappers(TNode<AsmWasmData> p_o) {
return LoadAsmWasmDataExportWrappers_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=168&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAsmWasmDataExportWrappers(TNode<AsmWasmData> p_o, TNode<FixedArray> p_v) {
return StoreAsmWasmDataExportWrappers_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=169&c=3
TNode<HeapNumber> TorqueGeneratedExportedMacrosAssembler::LoadAsmWasmDataUsesBitset(TNode<AsmWasmData> p_o) {
return LoadAsmWasmDataUsesBitset_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=169&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAsmWasmDataUsesBitset(TNode<AsmWasmData> p_o, TNode<HeapNumber> p_v) {
return StoreAsmWasmDataUsesBitset_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=173&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadWasmTypeInfoSupertypes(TNode<WasmTypeInfo> p_o) {
return LoadWasmTypeInfoSupertypes_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=173&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTypeInfoSupertypes(TNode<WasmTypeInfo> p_o, TNode<FixedArray> p_v) {
return StoreWasmTypeInfoSupertypes_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=174&c=3
TNode<ArrayList> TorqueGeneratedExportedMacrosAssembler::LoadWasmTypeInfoSubtypes(TNode<WasmTypeInfo> p_o) {
return LoadWasmTypeInfoSubtypes_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=174&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTypeInfoSubtypes(TNode<WasmTypeInfo> p_o, TNode<ArrayList> p_v) {
return StoreWasmTypeInfoSubtypes_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=176&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmTypeInfoInstanceSize(TNode<WasmTypeInfo> p_o) {
return LoadWasmTypeInfoInstanceSize_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=176&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTypeInfoInstanceSize(TNode<WasmTypeInfo> p_o, TNode<Smi> p_v) {
return StoreWasmTypeInfoInstanceSize_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=185&c=3
TNode<WasmInstanceObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmTypeInfoInstance(TNode<WasmTypeInfo> p_o) {
return LoadWasmTypeInfoInstance_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=185&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTypeInfoInstance(TNode<WasmTypeInfo> p_o, TNode<WasmInstanceObject> p_v) {
return StoreWasmTypeInfoInstance_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=199&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadWasmArrayLength(TNode<WasmArray> p_o) {
return LoadWasmArrayLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=199&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmArrayLength(TNode<WasmArray> p_o, TNode<Uint32T> p_v) {
return StoreWasmArrayLength_0(state_, p_o, p_v);}

}  // namespace internal
}  // namespace v8
