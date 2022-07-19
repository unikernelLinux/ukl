#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_TEMPORAL_OBJECTS_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_TEMPORAL_OBJECTS_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=37&c=1
TNode<JSTemporalCalendar> Cast_JSTemporalCalendar_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=41&c=1
TNode<JSTemporalDuration> Cast_JSTemporalDuration_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=54&c=1
TNode<JSTemporalInstant> Cast_JSTemporalInstant_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=56&c=1
TNode<JSTemporalPlainDateTime> Cast_JSTemporalPlainDateTime_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=63&c=1
TNode<JSTemporalPlainDate> Cast_JSTemporalPlainDate_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=68&c=1
TNode<JSTemporalPlainMonthDay> Cast_JSTemporalPlainMonthDay_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=73&c=1
TNode<JSTemporalPlainTime> Cast_JSTemporalPlainTime_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=79&c=1
TNode<JSTemporalPlainYearMonth> Cast_JSTemporalPlainYearMonth_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=84&c=1
TNode<JSTemporalTimeZone> Cast_JSTemporalTimeZone_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=89&c=1
TNode<JSTemporalZonedDateTime> Cast_JSTemporalZonedDateTime_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=38&c=3
TNode<Smi> LoadJSTemporalCalendarFlags_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalCalendar> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=38&c=3
void StoreJSTemporalCalendarFlags_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalCalendar> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=42&c=3
TNode<Number> LoadJSTemporalDurationYears_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalDuration> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=42&c=3
void StoreJSTemporalDurationYears_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalDuration> p_o, TNode<Number> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=43&c=3
TNode<Number> LoadJSTemporalDurationMonths_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalDuration> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=43&c=3
void StoreJSTemporalDurationMonths_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalDuration> p_o, TNode<Number> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=44&c=3
TNode<Number> LoadJSTemporalDurationWeeks_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalDuration> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=44&c=3
void StoreJSTemporalDurationWeeks_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalDuration> p_o, TNode<Number> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=45&c=3
TNode<Number> LoadJSTemporalDurationDays_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalDuration> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=45&c=3
void StoreJSTemporalDurationDays_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalDuration> p_o, TNode<Number> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=46&c=3
TNode<Number> LoadJSTemporalDurationHours_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalDuration> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=46&c=3
void StoreJSTemporalDurationHours_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalDuration> p_o, TNode<Number> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=47&c=3
TNode<Number> LoadJSTemporalDurationMinutes_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalDuration> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=47&c=3
void StoreJSTemporalDurationMinutes_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalDuration> p_o, TNode<Number> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=48&c=3
TNode<Number> LoadJSTemporalDurationSeconds_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalDuration> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=48&c=3
void StoreJSTemporalDurationSeconds_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalDuration> p_o, TNode<Number> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=49&c=3
TNode<Number> LoadJSTemporalDurationMilliseconds_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalDuration> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=49&c=3
void StoreJSTemporalDurationMilliseconds_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalDuration> p_o, TNode<Number> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=50&c=3
TNode<Number> LoadJSTemporalDurationMicroseconds_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalDuration> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=50&c=3
void StoreJSTemporalDurationMicroseconds_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalDuration> p_o, TNode<Number> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=51&c=3
TNode<Number> LoadJSTemporalDurationNanoseconds_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalDuration> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=51&c=3
void StoreJSTemporalDurationNanoseconds_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalDuration> p_o, TNode<Number> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=54&c=51
TNode<BigInt> LoadJSTemporalInstantNanoseconds_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalInstant> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=54&c=51
void StoreJSTemporalInstantNanoseconds_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalInstant> p_o, TNode<BigInt> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=57&c=3
TNode<Smi> LoadJSTemporalPlainDateTimeYearMonthDay_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainDateTime> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=57&c=3
void StoreJSTemporalPlainDateTimeYearMonthDay_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainDateTime> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=58&c=3
TNode<Smi> LoadJSTemporalPlainDateTimeHourMinuteSecond_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainDateTime> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=58&c=3
void StoreJSTemporalPlainDateTimeHourMinuteSecond_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainDateTime> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=59&c=3
TNode<Smi> LoadJSTemporalPlainDateTimeSecondParts_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainDateTime> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=59&c=3
void StoreJSTemporalPlainDateTimeSecondParts_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainDateTime> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=60&c=3
TNode<JSReceiver> LoadJSTemporalPlainDateTimeCalendar_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainDateTime> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=60&c=3
void StoreJSTemporalPlainDateTimeCalendar_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainDateTime> p_o, TNode<JSReceiver> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=64&c=3
TNode<Smi> LoadJSTemporalPlainDateYearMonthDay_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainDate> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=64&c=3
void StoreJSTemporalPlainDateYearMonthDay_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainDate> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=65&c=3
TNode<JSReceiver> LoadJSTemporalPlainDateCalendar_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainDate> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=65&c=3
void StoreJSTemporalPlainDateCalendar_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainDate> p_o, TNode<JSReceiver> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=69&c=3
TNode<Smi> LoadJSTemporalPlainMonthDayYearMonthDay_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainMonthDay> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=69&c=3
void StoreJSTemporalPlainMonthDayYearMonthDay_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainMonthDay> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=70&c=3
TNode<JSReceiver> LoadJSTemporalPlainMonthDayCalendar_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainMonthDay> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=70&c=3
void StoreJSTemporalPlainMonthDayCalendar_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainMonthDay> p_o, TNode<JSReceiver> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=74&c=3
TNode<Smi> LoadJSTemporalPlainTimeHourMinuteSecond_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainTime> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=74&c=3
void StoreJSTemporalPlainTimeHourMinuteSecond_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainTime> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=75&c=3
TNode<Smi> LoadJSTemporalPlainTimeSecondParts_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainTime> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=75&c=3
void StoreJSTemporalPlainTimeSecondParts_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainTime> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=76&c=3
TNode<JSReceiver> LoadJSTemporalPlainTimeCalendar_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainTime> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=76&c=3
void StoreJSTemporalPlainTimeCalendar_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainTime> p_o, TNode<JSReceiver> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=80&c=3
TNode<Smi> LoadJSTemporalPlainYearMonthYearMonthDay_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainYearMonth> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=80&c=3
void StoreJSTemporalPlainYearMonthYearMonthDay_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainYearMonth> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=81&c=3
TNode<JSReceiver> LoadJSTemporalPlainYearMonthCalendar_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainYearMonth> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=81&c=3
void StoreJSTemporalPlainYearMonthCalendar_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainYearMonth> p_o, TNode<JSReceiver> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=85&c=3
TNode<Smi> LoadJSTemporalTimeZoneFlags_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalTimeZone> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=85&c=3
void StoreJSTemporalTimeZoneFlags_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalTimeZone> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=86&c=3
TNode<Smi> LoadJSTemporalTimeZoneDetails_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalTimeZone> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=86&c=3
void StoreJSTemporalTimeZoneDetails_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalTimeZone> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=90&c=3
TNode<BigInt> LoadJSTemporalZonedDateTimeNanoseconds_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalZonedDateTime> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=90&c=3
void StoreJSTemporalZonedDateTimeNanoseconds_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalZonedDateTime> p_o, TNode<BigInt> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=91&c=3
TNode<JSReceiver> LoadJSTemporalZonedDateTimeTimeZone_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalZonedDateTime> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=91&c=3
void StoreJSTemporalZonedDateTimeTimeZone_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalZonedDateTime> p_o, TNode<JSReceiver> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=92&c=3
TNode<JSReceiver> LoadJSTemporalZonedDateTimeCalendar_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalZonedDateTime> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=92&c=3
void StoreJSTemporalZonedDateTimeCalendar_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalZonedDateTime> p_o, TNode<JSReceiver> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=37&c=1
TNode<JSTemporalCalendar> DownCastForTorqueClass_JSTemporalCalendar_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=41&c=1
TNode<JSTemporalDuration> DownCastForTorqueClass_JSTemporalDuration_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=54&c=1
TNode<JSTemporalInstant> DownCastForTorqueClass_JSTemporalInstant_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=56&c=1
TNode<JSTemporalPlainDateTime> DownCastForTorqueClass_JSTemporalPlainDateTime_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=63&c=1
TNode<JSTemporalPlainDate> DownCastForTorqueClass_JSTemporalPlainDate_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=68&c=1
TNode<JSTemporalPlainMonthDay> DownCastForTorqueClass_JSTemporalPlainMonthDay_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=73&c=1
TNode<JSTemporalPlainTime> DownCastForTorqueClass_JSTemporalPlainTime_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=79&c=1
TNode<JSTemporalPlainYearMonth> DownCastForTorqueClass_JSTemporalPlainYearMonth_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=84&c=1
TNode<JSTemporalTimeZone> DownCastForTorqueClass_JSTemporalTimeZone_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=89&c=1
TNode<JSTemporalZonedDateTime> DownCastForTorqueClass_JSTemporalZonedDateTime_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_TEMPORAL_OBJECTS_TQ_CSA_H_
