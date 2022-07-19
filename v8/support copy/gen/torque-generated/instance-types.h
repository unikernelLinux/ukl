#ifndef V8_GEN_TORQUE_GENERATED_INSTANCE_TYPES_H_
#define V8_GEN_TORQUE_GENERATED_INSTANCE_TYPES_H_

// Instance types for all classes except for those that use InstanceType as flags.
#define TORQUE_ASSIGNED_INSTANCE_TYPES(V) \
  V(FIRST_HEAP_OBJECT_TYPE, 0) \
    V(FIRST_PRIMITIVE_HEAP_OBJECT_TYPE, 0) \
      V(FIRST_NAME_TYPE, 0) \
        V(FIRST_STRING_TYPE, 0) \
        V(SYMBOL_TYPE, 128) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=29&c=1 */\
      V(LAST_NAME_TYPE, 128) \
      V(BIG_INT_BASE_TYPE, 129) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bigint.tq?l=7&c=1 */\
      V(HEAP_NUMBER_TYPE, 130) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/heap-number.tq?l=5&c=1 */\
      V(ODDBALL_TYPE, 131) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=5&c=1 */\
    V(LAST_PRIMITIVE_HEAP_OBJECT_TYPE, 131) \
    V(FIRST_STRUCT_TYPE, 132) \
      V(FIRST_MICROTASK_TYPE, 132) \
        V(FIRST_PROMISE_REACTION_JOB_TASK_TYPE, 132) \
          V(PROMISE_FULFILL_REACTION_JOB_TASK_TYPE, 132) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=60&c=1 */\
          V(PROMISE_REJECT_REACTION_JOB_TASK_TYPE, 133) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=62&c=1 */\
        V(LAST_PROMISE_REACTION_JOB_TASK_TYPE, 133) \
        V(CALLABLE_TASK_TYPE, 134) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=14&c=1 */\
        V(CALLBACK_TASK_TYPE, 135) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=9&c=1 */\
        V(PROMISE_RESOLVE_THENABLE_JOB_TASK_TYPE, 136) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=64&c=1 */\
      V(LAST_MICROTASK_TYPE, 136) \
      V(FIRST_DATA_HANDLER_TYPE, 137) \
        V(LOAD_HANDLER_TYPE, 137) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/ic/handler-configuration.tq?l=7&c=1 */\
        V(STORE_HANDLER_TYPE, 138) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/ic/handler-configuration.tq?l=8&c=1 */\
      V(LAST_DATA_HANDLER_TYPE, 138) \
      V(FIRST_TEMPLATE_INFO_TYPE, 139) \
        V(FUNCTION_TEMPLATE_INFO_TYPE, 139) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=41&c=1 */\
        V(OBJECT_TEMPLATE_INFO_TYPE, 140) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=77&c=1 */\
      V(LAST_TEMPLATE_INFO_TYPE, 140) \
      V(ACCESS_CHECK_INFO_TYPE, 141) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=31&c=1 */\
      V(ACCESSOR_INFO_TYPE, 142) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=51&c=1 */\
      V(ACCESSOR_PAIR_TYPE, 143) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=19&c=1 */\
      V(ALIASED_ARGUMENTS_ENTRY_TYPE, 144) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=91&c=1 */\
      V(ALLOCATION_MEMENTO_TYPE, 145) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/allocation-site.tq?l=7&c=1 */\
      V(ALLOCATION_SITE_TYPE, 146) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/allocation-site.tq?l=5&c=1 */\
      V(ARRAY_BOILERPLATE_DESCRIPTION_TYPE, 147) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=5&c=1 */\
      V(ASM_WASM_DATA_TYPE, 148) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=166&c=1 */\
      V(ASYNC_GENERATOR_REQUEST_TYPE, 149) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=40&c=1 */\
      V(BREAK_POINT_TYPE, 150) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=5&c=1 */\
      V(BREAK_POINT_INFO_TYPE, 151) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=10&c=1 */\
      V(CACHED_TEMPLATE_OBJECT_TYPE, 152) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=5&c=1 */\
      V(CALL_HANDLER_INFO_TYPE, 153) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=5&c=1 */\
      V(CALL_SITE_INFO_TYPE, 154) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=17&c=1 */\
      V(CLASS_POSITIONS_TYPE, 155) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=14&c=1 */\
      V(DEBUG_INFO_TYPE, 156) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=33&c=1 */\
      V(ENUM_CACHE_TYPE, 157) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=5&c=1 */\
      V(ERROR_STACK_DATA_TYPE, 158) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=117&c=1 */\
      V(FEEDBACK_CELL_TYPE, 159) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-cell.tq?l=5&c=1 */\
      V(FUNCTION_TEMPLATE_RARE_DATA_TYPE, 160) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=14&c=1 */\
      V(INTERCEPTOR_INFO_TYPE, 161) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=19&c=1 */\
      V(INTERPRETER_DATA_TYPE, 162) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=11&c=1 */\
      V(MODULE_REQUEST_TYPE, 163) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=50&c=1 */\
      V(PROMISE_CAPABILITY_TYPE, 164) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=5&c=1 */\
      V(PROMISE_ON_STACK_TYPE, 165) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=131&c=1 */\
      V(PROMISE_REACTION_TYPE, 166) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=27&c=1 */\
      V(PROPERTY_DESCRIPTOR_OBJECT_TYPE, 167) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=19&c=1 */\
      V(PROTOTYPE_INFO_TYPE, 168) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=9&c=1 */\
      V(REG_EXP_BOILERPLATE_DESCRIPTION_TYPE, 169) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=10&c=1 */\
      V(SCRIPT_TYPE, 170) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=17&c=1 */\
      V(SCRIPT_OR_MODULE_TYPE, 171) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=22&c=1 */\
      V(SOURCE_TEXT_MODULE_INFO_ENTRY_TYPE, 172) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=61&c=1 */\
      V(STACK_FRAME_INFO_TYPE, 173) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=76&c=1 */\
      V(TEMPLATE_OBJECT_DESCRIPTION_TYPE, 174) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=11&c=1 */\
      V(TUPLE2_TYPE, 175) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=9&c=1 */\
      V(WASM_CONTINUATION_OBJECT_TYPE, 176) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=97&c=1 */\
      V(WASM_EXCEPTION_TAG_TYPE, 177) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=110&c=1 */\
      V(WASM_INDIRECT_FUNCTION_TABLE_TYPE, 178) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=87&c=1 */\
    V(LAST_STRUCT_TYPE, 178) \
    V(FIRST_FIXED_ARRAY_BASE_TYPE, 179) \
      V(FIRST_FIXED_ARRAY_TYPE, 179) \
        V(FIXED_ARRAY_TYPE, 179) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=11&c=1 */\
        V(FIRST_HASH_TABLE_TYPE, 180) \
          V(HASH_TABLE_TYPE, 180) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=211&c=1 */\
          V(EPHEMERON_HASH_TABLE_TYPE, 181) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=221&c=1 */\
          V(GLOBAL_DICTIONARY_TYPE, 182) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=219&c=1 */\
          V(NAME_DICTIONARY_TYPE, 183) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=218&c=1 */\
          V(NAME_TO_INDEX_HASH_TABLE_TYPE, 184) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=216&c=1 */\
          V(NUMBER_DICTIONARY_TYPE, 185) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=224&c=1 */\
          V(ORDERED_HASH_MAP_TYPE, 186) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=213&c=1 */\
          V(ORDERED_HASH_SET_TYPE, 187) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=214&c=1 */\
          V(ORDERED_NAME_DICTIONARY_TYPE, 188) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=215&c=1 */\
          V(REGISTERED_SYMBOL_TABLE_TYPE, 189) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=217&c=1 */\
          V(SIMPLE_NUMBER_DICTIONARY_TYPE, 190) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=220&c=1 */\
        V(LAST_HASH_TABLE_TYPE, 190) \
        V(CLOSURE_FEEDBACK_CELL_ARRAY_TYPE, 191) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=237&c=1 */\
        V(OBJECT_BOILERPLATE_DESCRIPTION_TYPE, 192) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=236&c=1 */\
        V(SCRIPT_CONTEXT_TABLE_TYPE, 193) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=238&c=1 */\
      V(LAST_FIXED_ARRAY_TYPE, 193) \
      V(BYTE_ARRAY_TYPE, 194) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=1 */\
      V(BYTECODE_ARRAY_TYPE, 195) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=15&c=1 */\
      V(FIXED_DOUBLE_ARRAY_TYPE, 196) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=18&c=1 */\
      V(INTERNAL_CLASS_WITH_SMI_ELEMENTS_TYPE, 197) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1191&c=1 */\
      V(SLOPPY_ARGUMENTS_ELEMENTS_TYPE, 198) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=77&c=1 */\
    V(LAST_FIXED_ARRAY_BASE_TYPE, 198) \
    V(FIRST_TURBOFAN_TYPE_TYPE, 199) \
      V(TURBOFAN_BITSET_TYPE_TYPE, 199) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=59&c=1 */\
      V(TURBOFAN_HEAP_CONSTANT_TYPE_TYPE, 200) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=77&c=1 */\
      V(TURBOFAN_OTHER_NUMBER_CONSTANT_TYPE_TYPE, 201) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=82&c=1 */\
      V(TURBOFAN_RANGE_TYPE_TYPE, 202) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=71&c=1 */\
      V(TURBOFAN_UNION_TYPE_TYPE, 203) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=65&c=1 */\
    V(LAST_TURBOFAN_TYPE_TYPE, 203) \
    V(FIRST_FOREIGN_TYPE, 204) \
      V(FOREIGN_TYPE, 204) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/foreign.tq?l=5&c=1 */\
      V(WASM_INTERNAL_FUNCTION_TYPE, 205) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=31&c=1 */\
      V(WASM_TYPE_INFO_TYPE, 206) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=172&c=1 */\
    V(LAST_FOREIGN_TYPE, 206) \
    V(FIRST_CONTEXT_TYPE, 207) \
      V(AWAIT_CONTEXT_TYPE, 207) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=17&c=1 */\
      V(BLOCK_CONTEXT_TYPE, 208) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=18&c=1 */\
      V(CATCH_CONTEXT_TYPE, 209) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=19&c=1 */\
      V(DEBUG_EVALUATE_CONTEXT_TYPE, 210) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=20&c=1 */\
      V(EVAL_CONTEXT_TYPE, 211) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=22&c=1 */\
      V(FUNCTION_CONTEXT_TYPE, 212) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=27&c=1 */\
      V(MODULE_CONTEXT_TYPE, 213) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=23&c=1 */\
      V(NATIVE_CONTEXT_TYPE, 214) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=53&c=1 */\
      V(SCRIPT_CONTEXT_TYPE, 215) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=24&c=1 */\
      V(WITH_CONTEXT_TYPE, 216) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=25&c=1 */\
    V(LAST_CONTEXT_TYPE, 216) \
    V(FIRST_UNCOMPILED_DATA_TYPE, 217) \
      V(FIRST_UNCOMPILED_DATA_WITH_PREPARSE_DATA_TYPE, 217) \
        V(UNCOMPILED_DATA_WITH_PREPARSE_DATA_TYPE, 217) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=125&c=1 */\
        V(UNCOMPILED_DATA_WITH_PREPARSE_DATA_AND_JOB_TYPE, 218) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=141&c=1 */\
      V(LAST_UNCOMPILED_DATA_WITH_PREPARSE_DATA_TYPE, 218) \
      V(FIRST_UNCOMPILED_DATA_WITHOUT_PREPARSE_DATA_TYPE, 219) \
        V(UNCOMPILED_DATA_WITHOUT_PREPARSE_DATA_TYPE, 219) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=119&c=1 */\
        V(UNCOMPILED_DATA_WITHOUT_PREPARSE_DATA_WITH_JOB_TYPE, 220) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=132&c=1 */\
      V(LAST_UNCOMPILED_DATA_WITHOUT_PREPARSE_DATA_TYPE, 220) \
    V(LAST_UNCOMPILED_DATA_TYPE, 220) \
    V(FIRST_WASM_FUNCTION_DATA_TYPE, 221) \
      V(WASM_FUNCTION_DATA_TYPE, 221) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=46&c=1 */\
      V(WASM_CAPI_FUNCTION_DATA_TYPE, 222) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=78&c=1 */\
      V(WASM_EXPORTED_FUNCTION_DATA_TYPE, 223) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=54&c=1 */\
      V(WASM_JS_FUNCTION_DATA_TYPE, 224) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=72&c=1 */\
    V(LAST_WASM_FUNCTION_DATA_TYPE, 224) \
    V(FIRST_EXPORTED_SUB_CLASS_BASE_TYPE, 225) \
      V(EXPORTED_SUB_CLASS_BASE_TYPE, 225) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1177&c=1 */\
      V(EXPORTED_SUB_CLASS_TYPE, 226) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1170&c=1 */\
      V(EXPORTED_SUB_CLASS2_TYPE, 227) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1282&c=1 */\
    V(LAST_EXPORTED_SUB_CLASS_BASE_TYPE, 227) \
    V(FIRST_SMALL_ORDERED_HASH_TABLE_TYPE, 228) \
      V(SMALL_ORDERED_HASH_MAP_TYPE, 228) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=65&c=1 */\
      V(SMALL_ORDERED_HASH_SET_TYPE, 229) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=26&c=1 */\
      V(SMALL_ORDERED_NAME_DICTIONARY_TYPE, 230) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=102&c=1 */\
    V(LAST_SMALL_ORDERED_HASH_TABLE_TYPE, 230) \
    V(FIRST_ABSTRACT_INTERNAL_CLASS_TYPE, 231) \
      V(ABSTRACT_INTERNAL_CLASS_SUBCLASS1_TYPE, 231) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1187&c=1 */\
      V(ABSTRACT_INTERNAL_CLASS_SUBCLASS2_TYPE, 232) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1189&c=1 */\
    V(LAST_ABSTRACT_INTERNAL_CLASS_TYPE, 232) \
    V(FIRST_DESCRIPTOR_ARRAY_TYPE, 233) \
      V(DESCRIPTOR_ARRAY_TYPE, 233) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=17&c=1 */\
      V(STRONG_DESCRIPTOR_ARRAY_TYPE, 234) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=29&c=1 */\
    V(LAST_DESCRIPTOR_ARRAY_TYPE, 234) \
    V(FIRST_MODULE_TYPE, 235) \
      V(SOURCE_TEXT_MODULE_TYPE, 235) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=12&c=1 */\
      V(SYNTHETIC_MODULE_TYPE, 236) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/synthetic-module.tq?l=5&c=1 */\
    V(LAST_MODULE_TYPE, 236) \
    V(FIRST_WEAK_FIXED_ARRAY_TYPE, 237) \
      V(WEAK_FIXED_ARRAY_TYPE, 237) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=22&c=1 */\
      V(TRANSITION_ARRAY_TYPE, 238) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=240&c=1 */\
    V(LAST_WEAK_FIXED_ARRAY_TYPE, 238) \
    V(CELL_TYPE, 239) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=5&c=1 */\
    V(CODE_TYPE, 240) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=230&c=1 */\
    V(CODE_DATA_CONTAINER_TYPE, 241) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=37&c=1 */\
    V(COVERAGE_INFO_TYPE, 242) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=66&c=1 */\
    V(EMBEDDER_DATA_ARRAY_TYPE, 243) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/embedder-data-array.tq?l=5&c=1 */\
    V(FEEDBACK_METADATA_TYPE, 244) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=34&c=1 */\
    V(FEEDBACK_VECTOR_TYPE, 245) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=18&c=1 */\
    V(FILLER_TYPE, 246) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=570&c=1 */\
    V(FREE_SPACE_TYPE, 247) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/free-space.tq?l=5&c=1 */\
    V(INTERNAL_CLASS_TYPE, 248) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=759&c=1 */\
    V(INTERNAL_CLASS_WITH_STRUCT_ELEMENTS_TYPE, 249) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1202&c=1 */\
    V(MAP_TYPE, 250) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=37&c=1 */\
    V(MEGA_DOM_HANDLER_TYPE, 251) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=5&c=1 */\
    V(ON_HEAP_BASIC_BLOCK_PROFILER_DATA_TYPE, 252) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=150&c=1 */\
    V(PREPARSE_DATA_TYPE, 253) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=5&c=1 */\
    V(PROPERTY_ARRAY_TYPE, 254) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-array.tq?l=5&c=1 */\
    V(PROPERTY_CELL_TYPE, 255) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=5&c=1 */\
    V(SCOPE_INFO_TYPE, 256) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=110&c=1 */\
    V(SHARED_FUNCTION_INFO_TYPE, 257) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=50&c=1 */\
    V(SMI_BOX_TYPE, 258) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=926&c=1 */\
    V(SMI_PAIR_TYPE, 259) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=825&c=1 */\
    V(SORT_STATE_TYPE, 260) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=17&c=1 */\
    V(SWISS_NAME_DICTIONARY_TYPE, 261) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=7&c=1 */\
    V(WASM_API_FUNCTION_REF_TYPE, 262) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=20&c=1 */\
    V(WASM_ON_FULFILLED_DATA_TYPE, 263) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=83&c=1 */\
    V(WEAK_ARRAY_LIST_TYPE, 264) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=40&c=1 */\
    V(WEAK_CELL_TYPE, 265) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=21&c=1 */\
    V(FIRST_JS_RECEIVER_TYPE, 266) \
      V(FIRST_WASM_OBJECT_TYPE, 266) \
        V(WASM_ARRAY_TYPE, 266) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=197&c=1 */\
        V(WASM_STRUCT_TYPE, 267) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=193&c=1 */\
      V(LAST_WASM_OBJECT_TYPE, 267) \
      V(JS_PROXY_TYPE, 268) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=5&c=1 */\
      V(FIRST_JS_OBJECT_TYPE, 269) \
        V(JS_OBJECT_TYPE, 1057) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=14&c=1 */\
        V(FIRST_JS_CUSTOM_ELEMENTS_OBJECT_TYPE, 269) \
          V(FIRST_JS_SPECIAL_OBJECT_TYPE, 269) \
            V(JS_GLOBAL_OBJECT_TYPE, 269) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=109&c=1 */\
            V(JS_GLOBAL_PROXY_TYPE, 270) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=103&c=1 */\
            V(JS_MODULE_NAMESPACE_TYPE, 271) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=20&c=1 */\
            V(JS_SPECIAL_API_OBJECT_TYPE, 1040) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=590&c=1 */\
          V(LAST_JS_SPECIAL_OBJECT_TYPE, 1040) \
          V(JS_PRIMITIVE_WRAPPER_TYPE, 1041) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=117&c=1 */\
        V(LAST_JS_CUSTOM_ELEMENTS_OBJECT_TYPE, 1041) \
        V(FIRST_JS_OBJECT_WITH_EMBEDDER_SLOTS_TYPE, 1058) \
          V(FIRST_JS_API_OBJECT_TYPE, 1058) \
            V(JS_API_OBJECT_TYPE, 1058) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=576&c=1 */\
            V(JS_LAST_DUMMY_API_OBJECT_TYPE, 2058) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=583&c=1 */\
          V(LAST_JS_API_OBJECT_TYPE, 2058) \
          V(FIRST_JS_ARRAY_BUFFER_VIEW_TYPE, 2059) \
            V(JS_DATA_VIEW_TYPE, 2059) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=103&c=1 */\
            V(JS_TYPED_ARRAY_TYPE, 2060) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=90&c=1 */\
          V(LAST_JS_ARRAY_BUFFER_VIEW_TYPE, 2060) \
          V(JS_ARRAY_BUFFER_TYPE, 2061) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=14&c=1 */\
          V(JS_PROMISE_TYPE, 2062) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=13&c=1 */\
        V(LAST_JS_OBJECT_WITH_EMBEDDER_SLOTS_TYPE, 2062) \
        V(FIRST_JS_FUNCTION_OR_BOUND_FUNCTION_OR_WRAPPED_FUNCTION_TYPE, 2063) \
          V(JS_BOUND_FUNCTION_TYPE, 2063) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=9&c=1 */\
          V(JS_WRAPPED_FUNCTION_TYPE, 2064) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=21&c=1 */\
          V(FIRST_JS_FUNCTION_TYPE, 2065) \
            V(JS_FUNCTION_TYPE, 2065) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=31&c=1 */\
            V(FIRST_TYPED_ARRAY_CONSTRUCTOR_TYPE, 2066) \
              V(BIGINT64_TYPED_ARRAY_CONSTRUCTOR_TYPE, 2066) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=141&c=1 */\
              V(BIGUINT64_TYPED_ARRAY_CONSTRUCTOR_TYPE, 2067) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=138&c=1 */\
              V(FLOAT32_TYPED_ARRAY_CONSTRUCTOR_TYPE, 2068) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=129&c=1 */\
              V(FLOAT64_TYPED_ARRAY_CONSTRUCTOR_TYPE, 2069) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=132&c=1 */\
              V(INT16_TYPED_ARRAY_CONSTRUCTOR_TYPE, 2070) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=120&c=1 */\
              V(INT32_TYPED_ARRAY_CONSTRUCTOR_TYPE, 2071) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=126&c=1 */\
              V(INT8_TYPED_ARRAY_CONSTRUCTOR_TYPE, 2072) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=114&c=1 */\
              V(UINT16_TYPED_ARRAY_CONSTRUCTOR_TYPE, 2073) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=117&c=1 */\
              V(UINT32_TYPED_ARRAY_CONSTRUCTOR_TYPE, 2074) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=123&c=1 */\
              V(UINT8_CLAMPED_TYPED_ARRAY_CONSTRUCTOR_TYPE, 2075) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=135&c=1 */\
              V(UINT8_TYPED_ARRAY_CONSTRUCTOR_TYPE, 2076) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=111&c=1 */\
            V(LAST_TYPED_ARRAY_CONSTRUCTOR_TYPE, 2076) \
            V(JS_ARRAY_CONSTRUCTOR_TYPE, 2077) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=59&c=1 */\
            V(JS_PROMISE_CONSTRUCTOR_TYPE, 2078) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=39&c=1 */\
            V(JS_REG_EXP_CONSTRUCTOR_TYPE, 2079) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=37&c=1 */\
            V(JS_CLASS_CONSTRUCTOR_TYPE, 2080) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=45&c=1 */\
          V(LAST_JS_FUNCTION_TYPE, 2080) \
        V(LAST_JS_FUNCTION_OR_BOUND_FUNCTION_OR_WRAPPED_FUNCTION_TYPE, 2080) \
        V(FIRST_JS_PROTOTYPE_TYPE, 2081) \
          V(JS_ARRAY_ITERATOR_PROTOTYPE_TYPE, 2081) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=195&c=1 */\
          V(JS_ITERATOR_PROTOTYPE_TYPE, 2082) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=192&c=1 */\
          V(JS_MAP_ITERATOR_PROTOTYPE_TYPE, 2083) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=198&c=1 */\
          V(JS_OBJECT_PROTOTYPE_TYPE, 2084) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=177&c=1 */\
          V(JS_PROMISE_PROTOTYPE_TYPE, 2085) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=183&c=1 */\
          V(JS_REG_EXP_PROTOTYPE_TYPE, 2086) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=180&c=1 */\
          V(JS_SET_ITERATOR_PROTOTYPE_TYPE, 2087) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=201&c=1 */\
          V(JS_SET_PROTOTYPE_TYPE, 2088) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=189&c=1 */\
          V(JS_STRING_ITERATOR_PROTOTYPE_TYPE, 2089) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=204&c=1 */\
          V(JS_TYPED_ARRAY_PROTOTYPE_TYPE, 2090) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=186&c=1 */\
        V(LAST_JS_PROTOTYPE_TYPE, 2090) \
        V(FIRST_JS_COLLECTION_ITERATOR_TYPE, 2091) \
          V(FIRST_JS_MAP_ITERATOR_TYPE, 2091) \
            V(JS_MAP_KEY_ITERATOR_TYPE, 2091) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=22&c=1 */\
            V(JS_MAP_KEY_VALUE_ITERATOR_TYPE, 2092) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=24&c=1 */\
            V(JS_MAP_VALUE_ITERATOR_TYPE, 2093) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=26&c=1 */\
          V(LAST_JS_MAP_ITERATOR_TYPE, 2093) \
          V(FIRST_JS_SET_ITERATOR_TYPE, 2094) \
            V(JS_SET_KEY_VALUE_ITERATOR_TYPE, 2094) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=30&c=1 */\
            V(JS_SET_VALUE_ITERATOR_TYPE, 2095) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=32&c=1 */\
          V(LAST_JS_SET_ITERATOR_TYPE, 2095) \
        V(LAST_JS_COLLECTION_ITERATOR_TYPE, 2095) \
        V(FIRST_JS_GENERATOR_OBJECT_TYPE, 2096) \
          V(JS_GENERATOR_OBJECT_TYPE, 2096) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=5&c=1 */\
          V(JS_ASYNC_FUNCTION_OBJECT_TYPE, 2097) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=28&c=1 */\
          V(JS_ASYNC_GENERATOR_OBJECT_TYPE, 2098) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=32&c=1 */\
        V(LAST_JS_GENERATOR_OBJECT_TYPE, 2098) \
        V(FIRST_JS_COLLECTION_TYPE, 2099) \
          V(JS_MAP_TYPE, 2099) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=11&c=1 */\
          V(JS_SET_TYPE, 2100) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=10&c=1 */\
        V(LAST_JS_COLLECTION_TYPE, 2100) \
        V(FIRST_JS_WEAK_COLLECTION_TYPE, 2101) \
          V(JS_WEAK_MAP_TYPE, 2101) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=19&c=1 */\
          V(JS_WEAK_SET_TYPE, 2102) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=18&c=1 */\
        V(LAST_JS_WEAK_COLLECTION_TYPE, 2102) \
        V(JS_ARGUMENTS_OBJECT_TYPE, 2103) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=5&c=1 */\
        V(JS_ARRAY_TYPE, 2104) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=52&c=1 */\
        V(JS_ARRAY_ITERATOR_TYPE, 2105) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=7&c=1 */\
        V(JS_ASYNC_FROM_SYNC_ITERATOR_TYPE, 2106) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=158&c=1 */\
        V(JS_COLLATOR_TYPE, 2107) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=7&c=1 */\
        V(JS_CONTEXT_EXTENSION_OBJECT_TYPE, 2108) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=593&c=1 */\
        V(JS_DATE_TYPE, 2109) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=138&c=1 */\
        V(JS_DATE_TIME_FORMAT_TYPE, 2110) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=23&c=1 */\
        V(JS_DISPLAY_NAMES_TYPE, 2111) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=18&c=1 */\
        V(JS_ERROR_TYPE, 2112) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=595&c=1 */\
        V(JS_EXTERNAL_OBJECT_TYPE, 2113) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=43&c=1 */\
        V(JS_FINALIZATION_REGISTRY_TYPE, 2114) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=9&c=1 */\
        V(JS_LIST_FORMAT_TYPE, 2115) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=14&c=1 */\
        V(JS_LOCALE_TYPE, 2116) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-locale.tq?l=7&c=1 */\
        V(JS_MESSAGE_OBJECT_TYPE, 2117) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=119&c=1 */\
        V(JS_NUMBER_FORMAT_TYPE, 2118) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=7&c=1 */\
        V(JS_PLURAL_RULES_TYPE, 2119) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=12&c=1 */\
        V(JS_REG_EXP_TYPE, 2120) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=16&c=1 */\
        V(JS_REG_EXP_STRING_ITERATOR_TYPE, 2121) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp-string-iterator.tq?l=11&c=1 */\
        V(JS_RELATIVE_TIME_FORMAT_TYPE, 2122) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=13&c=1 */\
        V(JS_SEGMENT_ITERATOR_TYPE, 2123) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=11&c=1 */\
        V(JS_SEGMENTER_TYPE, 2124) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=13&c=1 */\
        V(JS_SEGMENTS_TYPE, 2125) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=11&c=1 */\
        V(JS_SHADOW_REALM_TYPE, 2126) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shadow-realms.tq?l=5&c=1 */\
        V(JS_SHARED_STRUCT_TYPE, 2127) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-struct.tq?l=5&c=1 */\
        V(JS_STRING_ITERATOR_TYPE, 2128) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=165&c=1 */\
        V(JS_TEMPORAL_CALENDAR_TYPE, 2129) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=37&c=1 */\
        V(JS_TEMPORAL_DURATION_TYPE, 2130) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=41&c=1 */\
        V(JS_TEMPORAL_INSTANT_TYPE, 2131) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=54&c=1 */\
        V(JS_TEMPORAL_PLAIN_DATE_TYPE, 2132) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=63&c=1 */\
        V(JS_TEMPORAL_PLAIN_DATE_TIME_TYPE, 2133) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=56&c=1 */\
        V(JS_TEMPORAL_PLAIN_MONTH_DAY_TYPE, 2134) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=68&c=1 */\
        V(JS_TEMPORAL_PLAIN_TIME_TYPE, 2135) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=73&c=1 */\
        V(JS_TEMPORAL_PLAIN_YEAR_MONTH_TYPE, 2136) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=79&c=1 */\
        V(JS_TEMPORAL_TIME_ZONE_TYPE, 2137) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=84&c=1 */\
        V(JS_TEMPORAL_ZONED_DATE_TIME_TYPE, 2138) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=89&c=1 */\
        V(JS_V8_BREAK_ITERATOR_TYPE, 2139) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=7&c=1 */\
        V(JS_WEAK_REF_TYPE, 2140) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=42&c=1 */\
        V(WASM_GLOBAL_OBJECT_TYPE, 2141) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=144&c=1 */\
        V(WASM_INSTANCE_OBJECT_TYPE, 2142) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=12&c=1 */\
        V(WASM_MEMORY_OBJECT_TYPE, 2143) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=138&c=1 */\
        V(WASM_MODULE_OBJECT_TYPE, 2144) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=117&c=1 */\
        V(WASM_SUSPENDER_OBJECT_TYPE, 2145) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=103&c=1 */\
        V(WASM_TABLE_OBJECT_TYPE, 2146) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=123&c=1 */\
        V(WASM_TAG_OBJECT_TYPE, 2147) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=159&c=1 */\
        V(WASM_VALUE_OBJECT_TYPE, 2148) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/debug/debug-wasm-objects.tq?l=7&c=1 */\
      V(LAST_JS_OBJECT_TYPE, 2148) \
    V(LAST_JS_RECEIVER_TYPE, 2148) \
  V(LAST_HEAP_OBJECT_TYPE, 2148) \

// Instance types for all classes except for those that use
// InstanceType as flags.
#define TORQUE_ASSIGNED_INSTANCE_TYPE_LIST(V) \
  V(SYMBOL_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=29&c=1 */\
  V(BIG_INT_BASE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bigint.tq?l=7&c=1 */\
  V(HEAP_NUMBER_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/heap-number.tq?l=5&c=1 */\
  V(ODDBALL_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=5&c=1 */\
  V(PROMISE_FULFILL_REACTION_JOB_TASK_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=60&c=1 */\
  V(PROMISE_REJECT_REACTION_JOB_TASK_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=62&c=1 */\
  V(CALLABLE_TASK_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=14&c=1 */\
  V(CALLBACK_TASK_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=9&c=1 */\
  V(PROMISE_RESOLVE_THENABLE_JOB_TASK_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=64&c=1 */\
  V(LOAD_HANDLER_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/ic/handler-configuration.tq?l=7&c=1 */\
  V(STORE_HANDLER_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/ic/handler-configuration.tq?l=8&c=1 */\
  V(FUNCTION_TEMPLATE_INFO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=41&c=1 */\
  V(OBJECT_TEMPLATE_INFO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=77&c=1 */\
  V(ACCESS_CHECK_INFO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=31&c=1 */\
  V(ACCESSOR_INFO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=51&c=1 */\
  V(ACCESSOR_PAIR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=19&c=1 */\
  V(ALIASED_ARGUMENTS_ENTRY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=91&c=1 */\
  V(ALLOCATION_MEMENTO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/allocation-site.tq?l=7&c=1 */\
  V(ALLOCATION_SITE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/allocation-site.tq?l=5&c=1 */\
  V(ARRAY_BOILERPLATE_DESCRIPTION_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=5&c=1 */\
  V(ASM_WASM_DATA_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=166&c=1 */\
  V(ASYNC_GENERATOR_REQUEST_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=40&c=1 */\
  V(BREAK_POINT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=5&c=1 */\
  V(BREAK_POINT_INFO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=10&c=1 */\
  V(CACHED_TEMPLATE_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=5&c=1 */\
  V(CALL_HANDLER_INFO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=5&c=1 */\
  V(CALL_SITE_INFO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=17&c=1 */\
  V(CLASS_POSITIONS_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=14&c=1 */\
  V(DEBUG_INFO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=33&c=1 */\
  V(ENUM_CACHE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=5&c=1 */\
  V(ERROR_STACK_DATA_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=117&c=1 */\
  V(FEEDBACK_CELL_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-cell.tq?l=5&c=1 */\
  V(FUNCTION_TEMPLATE_RARE_DATA_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=14&c=1 */\
  V(INTERCEPTOR_INFO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=19&c=1 */\
  V(INTERPRETER_DATA_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=11&c=1 */\
  V(MODULE_REQUEST_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=50&c=1 */\
  V(PROMISE_CAPABILITY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=5&c=1 */\
  V(PROMISE_ON_STACK_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=131&c=1 */\
  V(PROMISE_REACTION_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=27&c=1 */\
  V(PROPERTY_DESCRIPTOR_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=19&c=1 */\
  V(PROTOTYPE_INFO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=9&c=1 */\
  V(REG_EXP_BOILERPLATE_DESCRIPTION_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=10&c=1 */\
  V(SCRIPT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=17&c=1 */\
  V(SCRIPT_OR_MODULE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=22&c=1 */\
  V(SOURCE_TEXT_MODULE_INFO_ENTRY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=61&c=1 */\
  V(STACK_FRAME_INFO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=76&c=1 */\
  V(TEMPLATE_OBJECT_DESCRIPTION_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=11&c=1 */\
  V(TUPLE2_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=9&c=1 */\
  V(WASM_CONTINUATION_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=97&c=1 */\
  V(WASM_EXCEPTION_TAG_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=110&c=1 */\
  V(WASM_INDIRECT_FUNCTION_TABLE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=87&c=1 */\
  V(FIXED_ARRAY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=11&c=1 */\
  V(HASH_TABLE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=211&c=1 */\
  V(EPHEMERON_HASH_TABLE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=221&c=1 */\
  V(GLOBAL_DICTIONARY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=219&c=1 */\
  V(NAME_DICTIONARY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=218&c=1 */\
  V(NAME_TO_INDEX_HASH_TABLE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=216&c=1 */\
  V(NUMBER_DICTIONARY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=224&c=1 */\
  V(ORDERED_HASH_MAP_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=213&c=1 */\
  V(ORDERED_HASH_SET_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=214&c=1 */\
  V(ORDERED_NAME_DICTIONARY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=215&c=1 */\
  V(REGISTERED_SYMBOL_TABLE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=217&c=1 */\
  V(SIMPLE_NUMBER_DICTIONARY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=220&c=1 */\
  V(CLOSURE_FEEDBACK_CELL_ARRAY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=237&c=1 */\
  V(OBJECT_BOILERPLATE_DESCRIPTION_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=236&c=1 */\
  V(SCRIPT_CONTEXT_TABLE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=238&c=1 */\
  V(BYTE_ARRAY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=1 */\
  V(BYTECODE_ARRAY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=15&c=1 */\
  V(FIXED_DOUBLE_ARRAY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=18&c=1 */\
  V(INTERNAL_CLASS_WITH_SMI_ELEMENTS_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1191&c=1 */\
  V(SLOPPY_ARGUMENTS_ELEMENTS_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=77&c=1 */\
  V(TURBOFAN_BITSET_TYPE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=59&c=1 */\
  V(TURBOFAN_HEAP_CONSTANT_TYPE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=77&c=1 */\
  V(TURBOFAN_OTHER_NUMBER_CONSTANT_TYPE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=82&c=1 */\
  V(TURBOFAN_RANGE_TYPE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=71&c=1 */\
  V(TURBOFAN_UNION_TYPE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=65&c=1 */\
  V(FOREIGN_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/foreign.tq?l=5&c=1 */\
  V(WASM_INTERNAL_FUNCTION_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=31&c=1 */\
  V(WASM_TYPE_INFO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=172&c=1 */\
  V(AWAIT_CONTEXT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=17&c=1 */\
  V(BLOCK_CONTEXT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=18&c=1 */\
  V(CATCH_CONTEXT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=19&c=1 */\
  V(DEBUG_EVALUATE_CONTEXT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=20&c=1 */\
  V(EVAL_CONTEXT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=22&c=1 */\
  V(FUNCTION_CONTEXT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=27&c=1 */\
  V(MODULE_CONTEXT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=23&c=1 */\
  V(NATIVE_CONTEXT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=53&c=1 */\
  V(SCRIPT_CONTEXT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=24&c=1 */\
  V(WITH_CONTEXT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=25&c=1 */\
  V(UNCOMPILED_DATA_WITH_PREPARSE_DATA_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=125&c=1 */\
  V(UNCOMPILED_DATA_WITH_PREPARSE_DATA_AND_JOB_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=141&c=1 */\
  V(UNCOMPILED_DATA_WITHOUT_PREPARSE_DATA_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=119&c=1 */\
  V(UNCOMPILED_DATA_WITHOUT_PREPARSE_DATA_WITH_JOB_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=132&c=1 */\
  V(WASM_FUNCTION_DATA_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=46&c=1 */\
  V(WASM_CAPI_FUNCTION_DATA_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=78&c=1 */\
  V(WASM_EXPORTED_FUNCTION_DATA_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=54&c=1 */\
  V(WASM_JS_FUNCTION_DATA_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=72&c=1 */\
  V(EXPORTED_SUB_CLASS_BASE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1177&c=1 */\
  V(EXPORTED_SUB_CLASS_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1170&c=1 */\
  V(EXPORTED_SUB_CLASS2_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1282&c=1 */\
  V(SMALL_ORDERED_HASH_MAP_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=65&c=1 */\
  V(SMALL_ORDERED_HASH_SET_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=26&c=1 */\
  V(SMALL_ORDERED_NAME_DICTIONARY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=102&c=1 */\
  V(ABSTRACT_INTERNAL_CLASS_SUBCLASS1_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1187&c=1 */\
  V(ABSTRACT_INTERNAL_CLASS_SUBCLASS2_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1189&c=1 */\
  V(DESCRIPTOR_ARRAY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=17&c=1 */\
  V(STRONG_DESCRIPTOR_ARRAY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=29&c=1 */\
  V(SOURCE_TEXT_MODULE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=12&c=1 */\
  V(SYNTHETIC_MODULE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/synthetic-module.tq?l=5&c=1 */\
  V(WEAK_FIXED_ARRAY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=22&c=1 */\
  V(TRANSITION_ARRAY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=240&c=1 */\
  V(CELL_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=5&c=1 */\
  V(CODE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=230&c=1 */\
  V(CODE_DATA_CONTAINER_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=37&c=1 */\
  V(COVERAGE_INFO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=66&c=1 */\
  V(EMBEDDER_DATA_ARRAY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/embedder-data-array.tq?l=5&c=1 */\
  V(FEEDBACK_METADATA_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=34&c=1 */\
  V(FEEDBACK_VECTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=18&c=1 */\
  V(FILLER_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=570&c=1 */\
  V(FREE_SPACE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/free-space.tq?l=5&c=1 */\
  V(INTERNAL_CLASS_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=759&c=1 */\
  V(INTERNAL_CLASS_WITH_STRUCT_ELEMENTS_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1202&c=1 */\
  V(MAP_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=37&c=1 */\
  V(MEGA_DOM_HANDLER_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=5&c=1 */\
  V(ON_HEAP_BASIC_BLOCK_PROFILER_DATA_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=150&c=1 */\
  V(PREPARSE_DATA_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=5&c=1 */\
  V(PROPERTY_ARRAY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-array.tq?l=5&c=1 */\
  V(PROPERTY_CELL_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=5&c=1 */\
  V(SCOPE_INFO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=110&c=1 */\
  V(SHARED_FUNCTION_INFO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=50&c=1 */\
  V(SMI_BOX_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=926&c=1 */\
  V(SMI_PAIR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=825&c=1 */\
  V(SORT_STATE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=17&c=1 */\
  V(SWISS_NAME_DICTIONARY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=7&c=1 */\
  V(WASM_API_FUNCTION_REF_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=20&c=1 */\
  V(WASM_ON_FULFILLED_DATA_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=83&c=1 */\
  V(WEAK_ARRAY_LIST_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=40&c=1 */\
  V(WEAK_CELL_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=21&c=1 */\
  V(WASM_ARRAY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=197&c=1 */\
  V(WASM_STRUCT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=193&c=1 */\
  V(JS_PROXY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=5&c=1 */\
  V(JS_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=14&c=1 */\
  V(JS_GLOBAL_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=109&c=1 */\
  V(JS_GLOBAL_PROXY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=103&c=1 */\
  V(JS_MODULE_NAMESPACE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=20&c=1 */\
  V(JS_SPECIAL_API_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=590&c=1 */\
  V(JS_PRIMITIVE_WRAPPER_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=117&c=1 */\
  V(JS_API_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=576&c=1 */\
  V(JS_LAST_DUMMY_API_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=583&c=1 */\
  V(JS_DATA_VIEW_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=103&c=1 */\
  V(JS_TYPED_ARRAY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=90&c=1 */\
  V(JS_ARRAY_BUFFER_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=14&c=1 */\
  V(JS_PROMISE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=13&c=1 */\
  V(JS_BOUND_FUNCTION_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=9&c=1 */\
  V(JS_WRAPPED_FUNCTION_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=21&c=1 */\
  V(JS_FUNCTION_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=31&c=1 */\
  V(BIGINT64_TYPED_ARRAY_CONSTRUCTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=141&c=1 */\
  V(BIGUINT64_TYPED_ARRAY_CONSTRUCTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=138&c=1 */\
  V(FLOAT32_TYPED_ARRAY_CONSTRUCTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=129&c=1 */\
  V(FLOAT64_TYPED_ARRAY_CONSTRUCTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=132&c=1 */\
  V(INT16_TYPED_ARRAY_CONSTRUCTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=120&c=1 */\
  V(INT32_TYPED_ARRAY_CONSTRUCTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=126&c=1 */\
  V(INT8_TYPED_ARRAY_CONSTRUCTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=114&c=1 */\
  V(UINT16_TYPED_ARRAY_CONSTRUCTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=117&c=1 */\
  V(UINT32_TYPED_ARRAY_CONSTRUCTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=123&c=1 */\
  V(UINT8_CLAMPED_TYPED_ARRAY_CONSTRUCTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=135&c=1 */\
  V(UINT8_TYPED_ARRAY_CONSTRUCTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=111&c=1 */\
  V(JS_ARRAY_CONSTRUCTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=59&c=1 */\
  V(JS_PROMISE_CONSTRUCTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=39&c=1 */\
  V(JS_REG_EXP_CONSTRUCTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=37&c=1 */\
  V(JS_CLASS_CONSTRUCTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=45&c=1 */\
  V(JS_ARRAY_ITERATOR_PROTOTYPE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=195&c=1 */\
  V(JS_ITERATOR_PROTOTYPE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=192&c=1 */\
  V(JS_MAP_ITERATOR_PROTOTYPE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=198&c=1 */\
  V(JS_OBJECT_PROTOTYPE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=177&c=1 */\
  V(JS_PROMISE_PROTOTYPE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=183&c=1 */\
  V(JS_REG_EXP_PROTOTYPE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=180&c=1 */\
  V(JS_SET_ITERATOR_PROTOTYPE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=201&c=1 */\
  V(JS_SET_PROTOTYPE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=189&c=1 */\
  V(JS_STRING_ITERATOR_PROTOTYPE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=204&c=1 */\
  V(JS_TYPED_ARRAY_PROTOTYPE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=186&c=1 */\
  V(JS_MAP_KEY_ITERATOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=22&c=1 */\
  V(JS_MAP_KEY_VALUE_ITERATOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=24&c=1 */\
  V(JS_MAP_VALUE_ITERATOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=26&c=1 */\
  V(JS_SET_KEY_VALUE_ITERATOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=30&c=1 */\
  V(JS_SET_VALUE_ITERATOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=32&c=1 */\
  V(JS_GENERATOR_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=5&c=1 */\
  V(JS_ASYNC_FUNCTION_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=28&c=1 */\
  V(JS_ASYNC_GENERATOR_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=32&c=1 */\
  V(JS_MAP_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=11&c=1 */\
  V(JS_SET_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=10&c=1 */\
  V(JS_WEAK_MAP_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=19&c=1 */\
  V(JS_WEAK_SET_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=18&c=1 */\
  V(JS_ARGUMENTS_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=5&c=1 */\
  V(JS_ARRAY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=52&c=1 */\
  V(JS_ARRAY_ITERATOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=7&c=1 */\
  V(JS_ASYNC_FROM_SYNC_ITERATOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=158&c=1 */\
  V(JS_COLLATOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=7&c=1 */\
  V(JS_CONTEXT_EXTENSION_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=593&c=1 */\
  V(JS_DATE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=138&c=1 */\
  V(JS_DATE_TIME_FORMAT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=23&c=1 */\
  V(JS_DISPLAY_NAMES_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=18&c=1 */\
  V(JS_ERROR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=595&c=1 */\
  V(JS_EXTERNAL_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=43&c=1 */\
  V(JS_FINALIZATION_REGISTRY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=9&c=1 */\
  V(JS_LIST_FORMAT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=14&c=1 */\
  V(JS_LOCALE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-locale.tq?l=7&c=1 */\
  V(JS_MESSAGE_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=119&c=1 */\
  V(JS_NUMBER_FORMAT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=7&c=1 */\
  V(JS_PLURAL_RULES_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=12&c=1 */\
  V(JS_REG_EXP_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=16&c=1 */\
  V(JS_REG_EXP_STRING_ITERATOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp-string-iterator.tq?l=11&c=1 */\
  V(JS_RELATIVE_TIME_FORMAT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=13&c=1 */\
  V(JS_SEGMENT_ITERATOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=11&c=1 */\
  V(JS_SEGMENTER_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=13&c=1 */\
  V(JS_SEGMENTS_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=11&c=1 */\
  V(JS_SHADOW_REALM_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shadow-realms.tq?l=5&c=1 */\
  V(JS_SHARED_STRUCT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-struct.tq?l=5&c=1 */\
  V(JS_STRING_ITERATOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=165&c=1 */\
  V(JS_TEMPORAL_CALENDAR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=37&c=1 */\
  V(JS_TEMPORAL_DURATION_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=41&c=1 */\
  V(JS_TEMPORAL_INSTANT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=54&c=1 */\
  V(JS_TEMPORAL_PLAIN_DATE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=63&c=1 */\
  V(JS_TEMPORAL_PLAIN_DATE_TIME_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=56&c=1 */\
  V(JS_TEMPORAL_PLAIN_MONTH_DAY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=68&c=1 */\
  V(JS_TEMPORAL_PLAIN_TIME_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=73&c=1 */\
  V(JS_TEMPORAL_PLAIN_YEAR_MONTH_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=79&c=1 */\
  V(JS_TEMPORAL_TIME_ZONE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=84&c=1 */\
  V(JS_TEMPORAL_ZONED_DATE_TIME_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=89&c=1 */\
  V(JS_V8_BREAK_ITERATOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=7&c=1 */\
  V(JS_WEAK_REF_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=42&c=1 */\
  V(WASM_GLOBAL_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=144&c=1 */\
  V(WASM_INSTANCE_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=12&c=1 */\
  V(WASM_MEMORY_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=138&c=1 */\
  V(WASM_MODULE_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=117&c=1 */\
  V(WASM_SUSPENDER_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=103&c=1 */\
  V(WASM_TABLE_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=123&c=1 */\
  V(WASM_TAG_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=159&c=1 */\
  V(WASM_VALUE_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/debug/debug-wasm-objects.tq?l=7&c=1 */\

// Pairs of (ClassName, INSTANCE_TYPE) for classes that have
// full Torque definitions.
#define TORQUE_INSTANCE_CHECKERS_SINGLE_FULLY_DEFINED(V) \
  V(Symbol, SYMBOL_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=29&c=1 */ \
  V(HeapNumber, HEAP_NUMBER_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/heap-number.tq?l=5&c=1 */ \
  V(Oddball, ODDBALL_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=5&c=1 */ \
  V(PromiseFulfillReactionJobTask, PROMISE_FULFILL_REACTION_JOB_TASK_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=60&c=1 */ \
  V(PromiseRejectReactionJobTask, PROMISE_REJECT_REACTION_JOB_TASK_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=62&c=1 */ \
  V(CallableTask, CALLABLE_TASK_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=14&c=1 */ \
  V(CallbackTask, CALLBACK_TASK_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=9&c=1 */ \
  V(PromiseResolveThenableJobTask, PROMISE_RESOLVE_THENABLE_JOB_TASK_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=64&c=1 */ \
  V(FunctionTemplateInfo, FUNCTION_TEMPLATE_INFO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=41&c=1 */ \
  V(ObjectTemplateInfo, OBJECT_TEMPLATE_INFO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=77&c=1 */ \
  V(AccessCheckInfo, ACCESS_CHECK_INFO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=31&c=1 */ \
  V(AccessorInfo, ACCESSOR_INFO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=51&c=1 */ \
  V(AccessorPair, ACCESSOR_PAIR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=19&c=1 */ \
  V(AliasedArgumentsEntry, ALIASED_ARGUMENTS_ENTRY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=91&c=1 */ \
  V(AllocationMemento, ALLOCATION_MEMENTO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/allocation-site.tq?l=7&c=1 */ \
  V(ArrayBoilerplateDescription, ARRAY_BOILERPLATE_DESCRIPTION_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=5&c=1 */ \
  V(AsmWasmData, ASM_WASM_DATA_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=166&c=1 */ \
  V(AsyncGeneratorRequest, ASYNC_GENERATOR_REQUEST_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=40&c=1 */ \
  V(BreakPoint, BREAK_POINT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=5&c=1 */ \
  V(BreakPointInfo, BREAK_POINT_INFO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=10&c=1 */ \
  V(CachedTemplateObject, CACHED_TEMPLATE_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=5&c=1 */ \
  V(CallHandlerInfo, CALL_HANDLER_INFO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=5&c=1 */ \
  V(CallSiteInfo, CALL_SITE_INFO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=17&c=1 */ \
  V(ClassPositions, CLASS_POSITIONS_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=14&c=1 */ \
  V(DebugInfo, DEBUG_INFO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=33&c=1 */ \
  V(EnumCache, ENUM_CACHE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=5&c=1 */ \
  V(ErrorStackData, ERROR_STACK_DATA_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=117&c=1 */ \
  V(FeedbackCell, FEEDBACK_CELL_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-cell.tq?l=5&c=1 */ \
  V(FunctionTemplateRareData, FUNCTION_TEMPLATE_RARE_DATA_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=14&c=1 */ \
  V(InterceptorInfo, INTERCEPTOR_INFO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=19&c=1 */ \
  V(InterpreterData, INTERPRETER_DATA_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=11&c=1 */ \
  V(ModuleRequest, MODULE_REQUEST_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=50&c=1 */ \
  V(PromiseCapability, PROMISE_CAPABILITY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=5&c=1 */ \
  V(PromiseOnStack, PROMISE_ON_STACK_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=131&c=1 */ \
  V(PromiseReaction, PROMISE_REACTION_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=27&c=1 */ \
  V(PropertyDescriptorObject, PROPERTY_DESCRIPTOR_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=19&c=1 */ \
  V(PrototypeInfo, PROTOTYPE_INFO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=9&c=1 */ \
  V(RegExpBoilerplateDescription, REG_EXP_BOILERPLATE_DESCRIPTION_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=10&c=1 */ \
  V(Script, SCRIPT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=17&c=1 */ \
  V(ScriptOrModule, SCRIPT_OR_MODULE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=22&c=1 */ \
  V(SourceTextModuleInfoEntry, SOURCE_TEXT_MODULE_INFO_ENTRY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=61&c=1 */ \
  V(StackFrameInfo, STACK_FRAME_INFO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=76&c=1 */ \
  V(TemplateObjectDescription, TEMPLATE_OBJECT_DESCRIPTION_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=11&c=1 */ \
  V(Tuple2, TUPLE2_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=9&c=1 */ \
  V(WasmContinuationObject, WASM_CONTINUATION_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=97&c=1 */ \
  V(WasmExceptionTag, WASM_EXCEPTION_TAG_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=110&c=1 */ \
  V(WasmIndirectFunctionTable, WASM_INDIRECT_FUNCTION_TABLE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=87&c=1 */ \
  V(ByteArray, BYTE_ARRAY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=1 */ \
  V(BytecodeArray, BYTECODE_ARRAY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=15&c=1 */ \
  V(FixedDoubleArray, FIXED_DOUBLE_ARRAY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=18&c=1 */ \
  V(InternalClassWithSmiElements, INTERNAL_CLASS_WITH_SMI_ELEMENTS_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1191&c=1 */ \
  V(SloppyArgumentsElements, SLOPPY_ARGUMENTS_ELEMENTS_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=77&c=1 */ \
  V(TurbofanBitsetType, TURBOFAN_BITSET_TYPE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=59&c=1 */ \
  V(TurbofanHeapConstantType, TURBOFAN_HEAP_CONSTANT_TYPE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=77&c=1 */ \
  V(TurbofanOtherNumberConstantType, TURBOFAN_OTHER_NUMBER_CONSTANT_TYPE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=82&c=1 */ \
  V(TurbofanRangeType, TURBOFAN_RANGE_TYPE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=71&c=1 */ \
  V(TurbofanUnionType, TURBOFAN_UNION_TYPE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=65&c=1 */ \
  V(WasmInternalFunction, WASM_INTERNAL_FUNCTION_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=31&c=1 */ \
  V(WasmTypeInfo, WASM_TYPE_INFO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=172&c=1 */ \
  V(UncompiledDataWithPreparseDataAndJob, UNCOMPILED_DATA_WITH_PREPARSE_DATA_AND_JOB_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=141&c=1 */ \
  V(UncompiledDataWithoutPreparseDataWithJob, UNCOMPILED_DATA_WITHOUT_PREPARSE_DATA_WITH_JOB_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=132&c=1 */ \
  V(WasmCapiFunctionData, WASM_CAPI_FUNCTION_DATA_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=78&c=1 */ \
  V(WasmExportedFunctionData, WASM_EXPORTED_FUNCTION_DATA_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=54&c=1 */ \
  V(WasmJSFunctionData, WASM_JS_FUNCTION_DATA_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=72&c=1 */ \
  V(ExportedSubClass, EXPORTED_SUB_CLASS_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1170&c=1 */ \
  V(ExportedSubClass2, EXPORTED_SUB_CLASS2_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1282&c=1 */ \
  V(SmallOrderedHashMap, SMALL_ORDERED_HASH_MAP_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=65&c=1 */ \
  V(SmallOrderedHashSet, SMALL_ORDERED_HASH_SET_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=26&c=1 */ \
  V(SmallOrderedNameDictionary, SMALL_ORDERED_NAME_DICTIONARY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=102&c=1 */ \
  V(AbstractInternalClassSubclass1, ABSTRACT_INTERNAL_CLASS_SUBCLASS1_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1187&c=1 */ \
  V(AbstractInternalClassSubclass2, ABSTRACT_INTERNAL_CLASS_SUBCLASS2_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1189&c=1 */ \
  V(StrongDescriptorArray, STRONG_DESCRIPTOR_ARRAY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=29&c=1 */ \
  V(SourceTextModule, SOURCE_TEXT_MODULE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=12&c=1 */ \
  V(SyntheticModule, SYNTHETIC_MODULE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/synthetic-module.tq?l=5&c=1 */ \
  V(Cell, CELL_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=5&c=1 */ \
  V(CoverageInfo, COVERAGE_INFO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=66&c=1 */ \
  V(EmbedderDataArray, EMBEDDER_DATA_ARRAY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/embedder-data-array.tq?l=5&c=1 */ \
  V(FeedbackVector, FEEDBACK_VECTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=18&c=1 */ \
  V(FreeSpace, FREE_SPACE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/free-space.tq?l=5&c=1 */ \
  V(InternalClass, INTERNAL_CLASS_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=759&c=1 */ \
  V(InternalClassWithStructElements, INTERNAL_CLASS_WITH_STRUCT_ELEMENTS_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1202&c=1 */ \
  V(Map, MAP_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=37&c=1 */ \
  V(MegaDomHandler, MEGA_DOM_HANDLER_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=5&c=1 */ \
  V(OnHeapBasicBlockProfilerData, ON_HEAP_BASIC_BLOCK_PROFILER_DATA_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=150&c=1 */ \
  V(PreparseData, PREPARSE_DATA_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=5&c=1 */ \
  V(PropertyArray, PROPERTY_ARRAY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-array.tq?l=5&c=1 */ \
  V(PropertyCell, PROPERTY_CELL_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=5&c=1 */ \
  V(ScopeInfo, SCOPE_INFO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=110&c=1 */ \
  V(SharedFunctionInfo, SHARED_FUNCTION_INFO_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=50&c=1 */ \
  V(SmiBox, SMI_BOX_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=926&c=1 */ \
  V(SmiPair, SMI_PAIR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=825&c=1 */ \
  V(SortState, SORT_STATE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=17&c=1 */ \
  V(SwissNameDictionary, SWISS_NAME_DICTIONARY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=7&c=1 */ \
  V(WasmApiFunctionRef, WASM_API_FUNCTION_REF_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=20&c=1 */ \
  V(WasmOnFulfilledData, WASM_ON_FULFILLED_DATA_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=83&c=1 */ \
  V(WeakArrayList, WEAK_ARRAY_LIST_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=40&c=1 */ \
  V(WeakCell, WEAK_CELL_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=21&c=1 */ \
  V(WasmArray, WASM_ARRAY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=197&c=1 */ \
  V(WasmStruct, WASM_STRUCT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=193&c=1 */ \
  V(JSProxy, JS_PROXY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=5&c=1 */ \
  V(JSGlobalObject, JS_GLOBAL_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=109&c=1 */ \
  V(JSGlobalProxy, JS_GLOBAL_PROXY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=103&c=1 */ \
  V(JSModuleNamespace, JS_MODULE_NAMESPACE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=20&c=1 */ \
  V(JSPrimitiveWrapper, JS_PRIMITIVE_WRAPPER_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=117&c=1 */ \
  V(JSDataView, JS_DATA_VIEW_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=103&c=1 */ \
  V(JSTypedArray, JS_TYPED_ARRAY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=90&c=1 */ \
  V(JSArrayBuffer, JS_ARRAY_BUFFER_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=14&c=1 */ \
  V(JSPromise, JS_PROMISE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=13&c=1 */ \
  V(JSBoundFunction, JS_BOUND_FUNCTION_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=9&c=1 */ \
  V(JSWrappedFunction, JS_WRAPPED_FUNCTION_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=21&c=1 */ \
  V(JSAsyncFunctionObject, JS_ASYNC_FUNCTION_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=28&c=1 */ \
  V(JSAsyncGeneratorObject, JS_ASYNC_GENERATOR_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=32&c=1 */ \
  V(JSMap, JS_MAP_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=11&c=1 */ \
  V(JSSet, JS_SET_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=10&c=1 */ \
  V(JSWeakMap, JS_WEAK_MAP_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=19&c=1 */ \
  V(JSWeakSet, JS_WEAK_SET_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=18&c=1 */ \
  V(JSArgumentsObject, JS_ARGUMENTS_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=5&c=1 */ \
  V(JSArray, JS_ARRAY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=52&c=1 */ \
  V(JSArrayIterator, JS_ARRAY_ITERATOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=7&c=1 */ \
  V(JSAsyncFromSyncIterator, JS_ASYNC_FROM_SYNC_ITERATOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=158&c=1 */ \
  V(JSCollator, JS_COLLATOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=7&c=1 */ \
  V(JSDate, JS_DATE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=138&c=1 */ \
  V(JSDateTimeFormat, JS_DATE_TIME_FORMAT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=23&c=1 */ \
  V(JSDisplayNames, JS_DISPLAY_NAMES_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=18&c=1 */ \
  V(JSExternalObject, JS_EXTERNAL_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=43&c=1 */ \
  V(JSFinalizationRegistry, JS_FINALIZATION_REGISTRY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=9&c=1 */ \
  V(JSListFormat, JS_LIST_FORMAT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=14&c=1 */ \
  V(JSLocale, JS_LOCALE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-locale.tq?l=7&c=1 */ \
  V(JSMessageObject, JS_MESSAGE_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=119&c=1 */ \
  V(JSNumberFormat, JS_NUMBER_FORMAT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=7&c=1 */ \
  V(JSPluralRules, JS_PLURAL_RULES_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=12&c=1 */ \
  V(JSRegExp, JS_REG_EXP_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=16&c=1 */ \
  V(JSRegExpStringIterator, JS_REG_EXP_STRING_ITERATOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp-string-iterator.tq?l=11&c=1 */ \
  V(JSRelativeTimeFormat, JS_RELATIVE_TIME_FORMAT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=13&c=1 */ \
  V(JSSegmentIterator, JS_SEGMENT_ITERATOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=11&c=1 */ \
  V(JSSegmenter, JS_SEGMENTER_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=13&c=1 */ \
  V(JSSegments, JS_SEGMENTS_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=11&c=1 */ \
  V(JSShadowRealm, JS_SHADOW_REALM_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shadow-realms.tq?l=5&c=1 */ \
  V(JSSharedStruct, JS_SHARED_STRUCT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-struct.tq?l=5&c=1 */ \
  V(JSStringIterator, JS_STRING_ITERATOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=165&c=1 */ \
  V(JSTemporalCalendar, JS_TEMPORAL_CALENDAR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=37&c=1 */ \
  V(JSTemporalDuration, JS_TEMPORAL_DURATION_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=41&c=1 */ \
  V(JSTemporalInstant, JS_TEMPORAL_INSTANT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=54&c=1 */ \
  V(JSTemporalPlainDate, JS_TEMPORAL_PLAIN_DATE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=63&c=1 */ \
  V(JSTemporalPlainDateTime, JS_TEMPORAL_PLAIN_DATE_TIME_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=56&c=1 */ \
  V(JSTemporalPlainMonthDay, JS_TEMPORAL_PLAIN_MONTH_DAY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=68&c=1 */ \
  V(JSTemporalPlainTime, JS_TEMPORAL_PLAIN_TIME_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=73&c=1 */ \
  V(JSTemporalPlainYearMonth, JS_TEMPORAL_PLAIN_YEAR_MONTH_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=79&c=1 */ \
  V(JSTemporalTimeZone, JS_TEMPORAL_TIME_ZONE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=84&c=1 */ \
  V(JSTemporalZonedDateTime, JS_TEMPORAL_ZONED_DATE_TIME_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=89&c=1 */ \
  V(JSV8BreakIterator, JS_V8_BREAK_ITERATOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=7&c=1 */ \
  V(JSWeakRef, JS_WEAK_REF_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=42&c=1 */ \
  V(WasmGlobalObject, WASM_GLOBAL_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=144&c=1 */ \
  V(WasmMemoryObject, WASM_MEMORY_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=138&c=1 */ \
  V(WasmModuleObject, WASM_MODULE_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=117&c=1 */ \
  V(WasmSuspenderObject, WASM_SUSPENDER_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=103&c=1 */ \
  V(WasmTableObject, WASM_TABLE_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=123&c=1 */ \
  V(WasmTagObject, WASM_TAG_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=159&c=1 */ \

// Pairs of (ClassName, INSTANCE_TYPE) for classes that have
// full Torque definitions and subclasses.
#define TORQUE_INSTANCE_CHECKERS_MULTIPLE_FULLY_DEFINED(V) \
  V(FixedArray, FIXED_ARRAY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=11&c=1 */ \
  V(Foreign, FOREIGN_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/foreign.tq?l=5&c=1 */ \
  V(UncompiledDataWithPreparseData, UNCOMPILED_DATA_WITH_PREPARSE_DATA_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=125&c=1 */ \
  V(UncompiledDataWithoutPreparseData, UNCOMPILED_DATA_WITHOUT_PREPARSE_DATA_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=119&c=1 */ \
  V(WasmFunctionData, WASM_FUNCTION_DATA_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=46&c=1 */ \
  V(ExportedSubClassBase, EXPORTED_SUB_CLASS_BASE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1177&c=1 */ \
  V(DescriptorArray, DESCRIPTOR_ARRAY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=17&c=1 */ \
  V(WeakFixedArray, WEAK_FIXED_ARRAY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=22&c=1 */ \
  V(JSObject, JS_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=14&c=1 */ \
  V(JSFunction, JS_FUNCTION_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=31&c=1 */ \
  V(JSGeneratorObject, JS_GENERATOR_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=5&c=1 */ \

// Pairs of (ClassName, INSTANCE_TYPE) for classes that are
// declared but not defined in Torque. These classes may
// correspond with actual C++ classes, but they are not
// guaranteed to.
#define TORQUE_INSTANCE_CHECKERS_SINGLE_ONLY_DECLARED(V) \
  V(BigIntBase, BIG_INT_BASE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bigint.tq?l=7&c=1 */ \
  V(LoadHandler, LOAD_HANDLER_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/ic/handler-configuration.tq?l=7&c=1 */ \
  V(StoreHandler, STORE_HANDLER_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/ic/handler-configuration.tq?l=8&c=1 */ \
  V(AllocationSite, ALLOCATION_SITE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/allocation-site.tq?l=5&c=1 */ \
  V(EphemeronHashTable, EPHEMERON_HASH_TABLE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=221&c=1 */ \
  V(GlobalDictionary, GLOBAL_DICTIONARY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=219&c=1 */ \
  V(NameDictionary, NAME_DICTIONARY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=218&c=1 */ \
  V(NameToIndexHashTable, NAME_TO_INDEX_HASH_TABLE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=216&c=1 */ \
  V(NumberDictionary, NUMBER_DICTIONARY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=224&c=1 */ \
  V(OrderedHashMap, ORDERED_HASH_MAP_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=213&c=1 */ \
  V(OrderedHashSet, ORDERED_HASH_SET_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=214&c=1 */ \
  V(OrderedNameDictionary, ORDERED_NAME_DICTIONARY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=215&c=1 */ \
  V(RegisteredSymbolTable, REGISTERED_SYMBOL_TABLE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=217&c=1 */ \
  V(SimpleNumberDictionary, SIMPLE_NUMBER_DICTIONARY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=220&c=1 */ \
  V(ClosureFeedbackCellArray, CLOSURE_FEEDBACK_CELL_ARRAY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=237&c=1 */ \
  V(ObjectBoilerplateDescription, OBJECT_BOILERPLATE_DESCRIPTION_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=236&c=1 */ \
  V(ScriptContextTable, SCRIPT_CONTEXT_TABLE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=238&c=1 */ \
  V(AwaitContext, AWAIT_CONTEXT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=17&c=1 */ \
  V(BlockContext, BLOCK_CONTEXT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=18&c=1 */ \
  V(CatchContext, CATCH_CONTEXT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=19&c=1 */ \
  V(DebugEvaluateContext, DEBUG_EVALUATE_CONTEXT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=20&c=1 */ \
  V(EvalContext, EVAL_CONTEXT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=22&c=1 */ \
  V(FunctionContext, FUNCTION_CONTEXT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=27&c=1 */ \
  V(ModuleContext, MODULE_CONTEXT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=23&c=1 */ \
  V(NativeContext, NATIVE_CONTEXT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=53&c=1 */ \
  V(ScriptContext, SCRIPT_CONTEXT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=24&c=1 */ \
  V(WithContext, WITH_CONTEXT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=25&c=1 */ \
  V(TransitionArray, TRANSITION_ARRAY_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=240&c=1 */ \
  V(Code, CODE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=230&c=1 */ \
  V(CodeDataContainer, CODE_DATA_CONTAINER_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=37&c=1 */ \
  V(FeedbackMetadata, FEEDBACK_METADATA_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=34&c=1 */ \
  V(Filler, FILLER_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=570&c=1 */ \
  V(JSSpecialApiObject, JS_SPECIAL_API_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=590&c=1 */ \
  V(JSLastDummyApiObject, JS_LAST_DUMMY_API_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=583&c=1 */ \
  V(Bigint64TypedArrayConstructor, BIGINT64_TYPED_ARRAY_CONSTRUCTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=141&c=1 */ \
  V(Biguint64TypedArrayConstructor, BIGUINT64_TYPED_ARRAY_CONSTRUCTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=138&c=1 */ \
  V(Float32TypedArrayConstructor, FLOAT32_TYPED_ARRAY_CONSTRUCTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=129&c=1 */ \
  V(Float64TypedArrayConstructor, FLOAT64_TYPED_ARRAY_CONSTRUCTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=132&c=1 */ \
  V(Int16TypedArrayConstructor, INT16_TYPED_ARRAY_CONSTRUCTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=120&c=1 */ \
  V(Int32TypedArrayConstructor, INT32_TYPED_ARRAY_CONSTRUCTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=126&c=1 */ \
  V(Int8TypedArrayConstructor, INT8_TYPED_ARRAY_CONSTRUCTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=114&c=1 */ \
  V(Uint16TypedArrayConstructor, UINT16_TYPED_ARRAY_CONSTRUCTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=117&c=1 */ \
  V(Uint32TypedArrayConstructor, UINT32_TYPED_ARRAY_CONSTRUCTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=123&c=1 */ \
  V(Uint8ClampedTypedArrayConstructor, UINT8_CLAMPED_TYPED_ARRAY_CONSTRUCTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=135&c=1 */ \
  V(Uint8TypedArrayConstructor, UINT8_TYPED_ARRAY_CONSTRUCTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=111&c=1 */ \
  V(JSArrayConstructor, JS_ARRAY_CONSTRUCTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=59&c=1 */ \
  V(JSPromiseConstructor, JS_PROMISE_CONSTRUCTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=39&c=1 */ \
  V(JSRegExpConstructor, JS_REG_EXP_CONSTRUCTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=37&c=1 */ \
  V(JSClassConstructor, JS_CLASS_CONSTRUCTOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=45&c=1 */ \
  V(JSArrayIteratorPrototype, JS_ARRAY_ITERATOR_PROTOTYPE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=195&c=1 */ \
  V(JSIteratorPrototype, JS_ITERATOR_PROTOTYPE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=192&c=1 */ \
  V(JSMapIteratorPrototype, JS_MAP_ITERATOR_PROTOTYPE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=198&c=1 */ \
  V(JSObjectPrototype, JS_OBJECT_PROTOTYPE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=177&c=1 */ \
  V(JSPromisePrototype, JS_PROMISE_PROTOTYPE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=183&c=1 */ \
  V(JSRegExpPrototype, JS_REG_EXP_PROTOTYPE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=180&c=1 */ \
  V(JSSetIteratorPrototype, JS_SET_ITERATOR_PROTOTYPE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=201&c=1 */ \
  V(JSSetPrototype, JS_SET_PROTOTYPE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=189&c=1 */ \
  V(JSStringIteratorPrototype, JS_STRING_ITERATOR_PROTOTYPE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=204&c=1 */ \
  V(JSTypedArrayPrototype, JS_TYPED_ARRAY_PROTOTYPE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=186&c=1 */ \
  V(JSMapKeyIterator, JS_MAP_KEY_ITERATOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=22&c=1 */ \
  V(JSMapKeyValueIterator, JS_MAP_KEY_VALUE_ITERATOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=24&c=1 */ \
  V(JSMapValueIterator, JS_MAP_VALUE_ITERATOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=26&c=1 */ \
  V(JSSetKeyValueIterator, JS_SET_KEY_VALUE_ITERATOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=30&c=1 */ \
  V(JSSetValueIterator, JS_SET_VALUE_ITERATOR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=32&c=1 */ \
  V(JSContextExtensionObject, JS_CONTEXT_EXTENSION_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=593&c=1 */ \
  V(JSError, JS_ERROR_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=595&c=1 */ \
  V(WasmInstanceObject, WASM_INSTANCE_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=12&c=1 */ \
  V(WasmValueObject, WASM_VALUE_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/debug/debug-wasm-objects.tq?l=7&c=1 */ \

// Pairs of (ClassName, INSTANCE_TYPE) for classes that are
// declared but not defined in Torque, and have subclasses.
// These classes may correspond with actual C++ classes, but
// they are not guaranteed to.
#define TORQUE_INSTANCE_CHECKERS_MULTIPLE_ONLY_DECLARED(V) \
  V(HashTable, HASH_TABLE_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=211&c=1 */ \
  V(JSApiObject, JS_API_OBJECT_TYPE) /* https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=576&c=1 */ \

// Triples of (ClassName, FIRST_TYPE, LAST_TYPE) for classes
// that have full Torque definitions.
#define TORQUE_INSTANCE_CHECKERS_RANGE_FULLY_DEFINED(V) \
  V(String, FIRST_STRING_TYPE, LAST_STRING_TYPE) \
  V(Name, FIRST_NAME_TYPE, LAST_NAME_TYPE) \
  V(PrimitiveHeapObject, FIRST_PRIMITIVE_HEAP_OBJECT_TYPE, LAST_PRIMITIVE_HEAP_OBJECT_TYPE) \
  V(PromiseReactionJobTask, FIRST_PROMISE_REACTION_JOB_TASK_TYPE, LAST_PROMISE_REACTION_JOB_TASK_TYPE) \
  V(Microtask, FIRST_MICROTASK_TYPE, LAST_MICROTASK_TYPE) \
  V(DataHandler, FIRST_DATA_HANDLER_TYPE, LAST_DATA_HANDLER_TYPE) \
  V(TemplateInfo, FIRST_TEMPLATE_INFO_TYPE, LAST_TEMPLATE_INFO_TYPE) \
  V(Struct, FIRST_STRUCT_TYPE, LAST_STRUCT_TYPE) \
  V(FixedArray, FIRST_FIXED_ARRAY_TYPE, LAST_FIXED_ARRAY_TYPE) \
  V(FixedArrayBase, FIRST_FIXED_ARRAY_BASE_TYPE, LAST_FIXED_ARRAY_BASE_TYPE) \
  V(TurbofanType, FIRST_TURBOFAN_TYPE_TYPE, LAST_TURBOFAN_TYPE_TYPE) \
  V(Foreign, FIRST_FOREIGN_TYPE, LAST_FOREIGN_TYPE) \
  V(Context, FIRST_CONTEXT_TYPE, LAST_CONTEXT_TYPE) \
  V(UncompiledDataWithPreparseData, FIRST_UNCOMPILED_DATA_WITH_PREPARSE_DATA_TYPE, LAST_UNCOMPILED_DATA_WITH_PREPARSE_DATA_TYPE) \
  V(UncompiledDataWithoutPreparseData, FIRST_UNCOMPILED_DATA_WITHOUT_PREPARSE_DATA_TYPE, LAST_UNCOMPILED_DATA_WITHOUT_PREPARSE_DATA_TYPE) \
  V(UncompiledData, FIRST_UNCOMPILED_DATA_TYPE, LAST_UNCOMPILED_DATA_TYPE) \
  V(WasmFunctionData, FIRST_WASM_FUNCTION_DATA_TYPE, LAST_WASM_FUNCTION_DATA_TYPE) \
  V(ExportedSubClassBase, FIRST_EXPORTED_SUB_CLASS_BASE_TYPE, LAST_EXPORTED_SUB_CLASS_BASE_TYPE) \
  V(SmallOrderedHashTable, FIRST_SMALL_ORDERED_HASH_TABLE_TYPE, LAST_SMALL_ORDERED_HASH_TABLE_TYPE) \
  V(AbstractInternalClass, FIRST_ABSTRACT_INTERNAL_CLASS_TYPE, LAST_ABSTRACT_INTERNAL_CLASS_TYPE) \
  V(DescriptorArray, FIRST_DESCRIPTOR_ARRAY_TYPE, LAST_DESCRIPTOR_ARRAY_TYPE) \
  V(Module, FIRST_MODULE_TYPE, LAST_MODULE_TYPE) \
  V(WeakFixedArray, FIRST_WEAK_FIXED_ARRAY_TYPE, LAST_WEAK_FIXED_ARRAY_TYPE) \
  V(WasmObject, FIRST_WASM_OBJECT_TYPE, LAST_WASM_OBJECT_TYPE) \
  V(JSSpecialObject, FIRST_JS_SPECIAL_OBJECT_TYPE, LAST_JS_SPECIAL_OBJECT_TYPE) \
  V(JSCustomElementsObject, FIRST_JS_CUSTOM_ELEMENTS_OBJECT_TYPE, LAST_JS_CUSTOM_ELEMENTS_OBJECT_TYPE) \
  V(JSArrayBufferView, FIRST_JS_ARRAY_BUFFER_VIEW_TYPE, LAST_JS_ARRAY_BUFFER_VIEW_TYPE) \
  V(JSObjectWithEmbedderSlots, FIRST_JS_OBJECT_WITH_EMBEDDER_SLOTS_TYPE, LAST_JS_OBJECT_WITH_EMBEDDER_SLOTS_TYPE) \
  V(JSFunction, FIRST_JS_FUNCTION_TYPE, LAST_JS_FUNCTION_TYPE) \
  V(JSFunctionOrBoundFunctionOrWrappedFunction, FIRST_JS_FUNCTION_OR_BOUND_FUNCTION_OR_WRAPPED_FUNCTION_TYPE, LAST_JS_FUNCTION_OR_BOUND_FUNCTION_OR_WRAPPED_FUNCTION_TYPE) \
  V(JSCollectionIterator, FIRST_JS_COLLECTION_ITERATOR_TYPE, LAST_JS_COLLECTION_ITERATOR_TYPE) \
  V(JSGeneratorObject, FIRST_JS_GENERATOR_OBJECT_TYPE, LAST_JS_GENERATOR_OBJECT_TYPE) \
  V(JSCollection, FIRST_JS_COLLECTION_TYPE, LAST_JS_COLLECTION_TYPE) \
  V(JSWeakCollection, FIRST_JS_WEAK_COLLECTION_TYPE, LAST_JS_WEAK_COLLECTION_TYPE) \
  V(JSObject, FIRST_JS_OBJECT_TYPE, LAST_JS_OBJECT_TYPE) \
  V(JSReceiver, FIRST_JS_RECEIVER_TYPE, LAST_JS_RECEIVER_TYPE) \

// Triples of (ClassName, FIRST_TYPE, LAST_TYPE) for classes
// that are declared but not defined in Torque. These classes
// may correspond with actual C++ classes, but they are not
// guaranteed to.
#define TORQUE_INSTANCE_CHECKERS_RANGE_ONLY_DECLARED(V) \
  V(HashTable, FIRST_HASH_TABLE_TYPE, LAST_HASH_TABLE_TYPE) \
  V(JSApiObject, FIRST_JS_API_OBJECT_TYPE, LAST_JS_API_OBJECT_TYPE) \
  V(TypedArrayConstructor, FIRST_TYPED_ARRAY_CONSTRUCTOR_TYPE, LAST_TYPED_ARRAY_CONSTRUCTOR_TYPE) \
  V(JSPrototype, FIRST_JS_PROTOTYPE_TYPE, LAST_JS_PROTOTYPE_TYPE) \
  V(JSMapIterator, FIRST_JS_MAP_ITERATOR_TYPE, LAST_JS_MAP_ITERATOR_TYPE) \
  V(JSSetIterator, FIRST_JS_SET_ITERATOR_TYPE, LAST_JS_SET_ITERATOR_TYPE) \

// Fully Torque-defined classes (both internal and exported).
#define TORQUE_DEFINED_CLASS_LIST(V) \
  V(SloppyArgumentsElements) \
  V(StrongDescriptorArray) \
  V(OnHeapBasicBlockProfilerData) \
  V(TurbofanType) \
  V(TurbofanBitsetType) \
  V(TurbofanUnionType) \
  V(TurbofanRangeType) \
  V(TurbofanHeapConstantType) \
  V(TurbofanOtherNumberConstantType) \
  V(InternalClass) \
  V(SmiPair) \
  V(SmiBox) \
  V(ExportedSubClassBase) \
  V(ExportedSubClass) \
  V(AbstractInternalClass) \
  V(AbstractInternalClassSubclass1) \
  V(AbstractInternalClassSubclass2) \
  V(InternalClassWithSmiElements) \
  V(InternalClassWithStructElements) \
  V(ExportedSubClass2) \
  V(SortState) \

#define TORQUE_DEFINED_VARSIZE_INSTANCE_TYPE_LIST(V) \
  V(SLOPPY_ARGUMENTS_ELEMENTS_TYPE, SloppyArgumentsElements, sloppy_arguments_elements) \
  V(DESCRIPTOR_ARRAY_TYPE, DescriptorArray, descriptor_array) \
  V(STRONG_DESCRIPTOR_ARRAY_TYPE, StrongDescriptorArray, strong_descriptor_array) \
  V(INTERNAL_CLASS_WITH_SMI_ELEMENTS_TYPE, InternalClassWithSmiElements, internal_class_with_smi_elements) \
  V(INTERNAL_CLASS_WITH_STRUCT_ELEMENTS_TYPE, InternalClassWithStructElements, internal_class_with_struct_elements) \

#define TORQUE_DEFINED_FIXED_INSTANCE_TYPE_LIST(V) \
  V(UNCOMPILED_DATA_WITHOUT_PREPARSE_DATA_TYPE, UncompiledDataWithoutPreparseData, uncompiled_data_without_preparse_data) \
  V(UNCOMPILED_DATA_WITH_PREPARSE_DATA_TYPE, UncompiledDataWithPreparseData, uncompiled_data_with_preparse_data) \
  V(UNCOMPILED_DATA_WITHOUT_PREPARSE_DATA_WITH_JOB_TYPE, UncompiledDataWithoutPreparseDataWithJob, uncompiled_data_without_preparse_data_with_job) \
  V(UNCOMPILED_DATA_WITH_PREPARSE_DATA_AND_JOB_TYPE, UncompiledDataWithPreparseDataAndJob, uncompiled_data_with_preparse_data_and_job) \
  V(ON_HEAP_BASIC_BLOCK_PROFILER_DATA_TYPE, OnHeapBasicBlockProfilerData, on_heap_basic_block_profiler_data) \
  V(TURBOFAN_BITSET_TYPE_TYPE, TurbofanBitsetType, turbofan_bitset_type) \
  V(TURBOFAN_UNION_TYPE_TYPE, TurbofanUnionType, turbofan_union_type) \
  V(TURBOFAN_RANGE_TYPE_TYPE, TurbofanRangeType, turbofan_range_type) \
  V(TURBOFAN_HEAP_CONSTANT_TYPE_TYPE, TurbofanHeapConstantType, turbofan_heap_constant_type) \
  V(TURBOFAN_OTHER_NUMBER_CONSTANT_TYPE_TYPE, TurbofanOtherNumberConstantType, turbofan_other_number_constant_type) \
  V(INTERNAL_CLASS_TYPE, InternalClass, internal_class) \
  V(SMI_PAIR_TYPE, SmiPair, smi_pair) \
  V(SMI_BOX_TYPE, SmiBox, smi_box) \
  V(EXPORTED_SUB_CLASS_BASE_TYPE, ExportedSubClassBase, exported_sub_class_base) \
  V(EXPORTED_SUB_CLASS_TYPE, ExportedSubClass, exported_sub_class) \
  V(ABSTRACT_INTERNAL_CLASS_SUBCLASS1_TYPE, AbstractInternalClassSubclass1, abstract_internal_class_subclass1) \
  V(ABSTRACT_INTERNAL_CLASS_SUBCLASS2_TYPE, AbstractInternalClassSubclass2, abstract_internal_class_subclass2) \
  V(EXPORTED_SUB_CLASS2_TYPE, ExportedSubClass2, exported_sub_class2) \
  V(SORT_STATE_TYPE, SortState, sort_state) \

#define TORQUE_DEFINED_INSTANCE_TYPE_LIST(V) \
  TORQUE_DEFINED_VARSIZE_INSTANCE_TYPE_LIST(V) \
  TORQUE_DEFINED_FIXED_INSTANCE_TYPE_LIST(V) \

#define TORQUE_DEFINED_MAP_CSA_LIST_GENERATOR(V, _) \
  V(_, SloppyArgumentsElementsMap, sloppy_arguments_elements_map, SloppyArgumentsElements) \
  V(_, DescriptorArrayMap, descriptor_array_map, DescriptorArray) \
  V(_, StrongDescriptorArrayMap, strong_descriptor_array_map, StrongDescriptorArray) \
  V(_, UncompiledDataWithoutPreparseDataMap, uncompiled_data_without_preparse_data_map, UncompiledDataWithoutPreparseData) \
  V(_, UncompiledDataWithPreparseDataMap, uncompiled_data_with_preparse_data_map, UncompiledDataWithPreparseData) \
  V(_, UncompiledDataWithoutPreparseDataWithJobMap, uncompiled_data_without_preparse_data_with_job_map, UncompiledDataWithoutPreparseDataWithJob) \
  V(_, UncompiledDataWithPreparseDataAndJobMap, uncompiled_data_with_preparse_data_and_job_map, UncompiledDataWithPreparseDataAndJob) \
  V(_, OnHeapBasicBlockProfilerDataMap, on_heap_basic_block_profiler_data_map, OnHeapBasicBlockProfilerData) \
  V(_, TurbofanBitsetTypeMap, turbofan_bitset_type_map, TurbofanBitsetType) \
  V(_, TurbofanUnionTypeMap, turbofan_union_type_map, TurbofanUnionType) \
  V(_, TurbofanRangeTypeMap, turbofan_range_type_map, TurbofanRangeType) \
  V(_, TurbofanHeapConstantTypeMap, turbofan_heap_constant_type_map, TurbofanHeapConstantType) \
  V(_, TurbofanOtherNumberConstantTypeMap, turbofan_other_number_constant_type_map, TurbofanOtherNumberConstantType) \
  V(_, InternalClassMap, internal_class_map, InternalClass) \
  V(_, SmiPairMap, smi_pair_map, SmiPair) \
  V(_, SmiBoxMap, smi_box_map, SmiBox) \
  V(_, ExportedSubClassBaseMap, exported_sub_class_base_map, ExportedSubClassBase) \
  V(_, ExportedSubClassMap, exported_sub_class_map, ExportedSubClass) \
  V(_, AbstractInternalClassSubclass1Map, abstract_internal_class_subclass1_map, AbstractInternalClassSubclass1) \
  V(_, AbstractInternalClassSubclass2Map, abstract_internal_class_subclass2_map, AbstractInternalClassSubclass2) \
  V(_, InternalClassWithSmiElementsMap, internal_class_with_smi_elements_map, InternalClassWithSmiElements) \
  V(_, InternalClassWithStructElementsMap, internal_class_with_struct_elements_map, InternalClassWithStructElements) \
  V(_, ExportedSubClass2Map, exported_sub_class2_map, ExportedSubClass2) \
  V(_, SortStateMap, sort_state_map, SortState) \

#define TORQUE_DEFINED_MAP_ROOT_LIST(V) \
  V(Map, sloppy_arguments_elements_map, SloppyArgumentsElementsMap) \
  V(Map, descriptor_array_map, DescriptorArrayMap) \
  V(Map, strong_descriptor_array_map, StrongDescriptorArrayMap) \
  V(Map, uncompiled_data_without_preparse_data_map, UncompiledDataWithoutPreparseDataMap) \
  V(Map, uncompiled_data_with_preparse_data_map, UncompiledDataWithPreparseDataMap) \
  V(Map, uncompiled_data_without_preparse_data_with_job_map, UncompiledDataWithoutPreparseDataWithJobMap) \
  V(Map, uncompiled_data_with_preparse_data_and_job_map, UncompiledDataWithPreparseDataAndJobMap) \
  V(Map, on_heap_basic_block_profiler_data_map, OnHeapBasicBlockProfilerDataMap) \
  V(Map, turbofan_bitset_type_map, TurbofanBitsetTypeMap) \
  V(Map, turbofan_union_type_map, TurbofanUnionTypeMap) \
  V(Map, turbofan_range_type_map, TurbofanRangeTypeMap) \
  V(Map, turbofan_heap_constant_type_map, TurbofanHeapConstantTypeMap) \
  V(Map, turbofan_other_number_constant_type_map, TurbofanOtherNumberConstantTypeMap) \
  V(Map, internal_class_map, InternalClassMap) \
  V(Map, smi_pair_map, SmiPairMap) \
  V(Map, smi_box_map, SmiBoxMap) \
  V(Map, exported_sub_class_base_map, ExportedSubClassBaseMap) \
  V(Map, exported_sub_class_map, ExportedSubClassMap) \
  V(Map, abstract_internal_class_subclass1_map, AbstractInternalClassSubclass1Map) \
  V(Map, abstract_internal_class_subclass2_map, AbstractInternalClassSubclass2Map) \
  V(Map, internal_class_with_smi_elements_map, InternalClassWithSmiElementsMap) \
  V(Map, internal_class_with_struct_elements_map, InternalClassWithStructElementsMap) \
  V(Map, exported_sub_class2_map, ExportedSubClass2Map) \
  V(Map, sort_state_map, SortStateMap) \

#endif  // V8_GEN_TORQUE_GENERATED_INSTANCE_TYPES_H_
