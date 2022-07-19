#include "src/objects/js-temporal-objects-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=37&c=1
bool IsJSTemporalCalendar_NonInline(HeapObject o) {
  return o.IsJSTemporalCalendar();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSTemporalCalendar<JSTemporalCalendar, JSObject>::JSTemporalCalendarVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSTemporalCalendarVerify(JSTemporalCalendar::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=41&c=1
bool IsJSTemporalDuration_NonInline(HeapObject o) {
  return o.IsJSTemporalDuration();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSTemporalDuration<JSTemporalDuration, JSObject>::JSTemporalDurationVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSTemporalDurationVerify(JSTemporalDuration::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=54&c=1
bool IsJSTemporalInstant_NonInline(HeapObject o) {
  return o.IsJSTemporalInstant();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSTemporalInstant<JSTemporalInstant, JSObject>::JSTemporalInstantVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSTemporalInstantVerify(JSTemporalInstant::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=56&c=1
bool IsJSTemporalPlainDateTime_NonInline(HeapObject o) {
  return o.IsJSTemporalPlainDateTime();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSTemporalPlainDateTime<JSTemporalPlainDateTime, JSObject>::JSTemporalPlainDateTimeVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSTemporalPlainDateTimeVerify(JSTemporalPlainDateTime::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=63&c=1
bool IsJSTemporalPlainDate_NonInline(HeapObject o) {
  return o.IsJSTemporalPlainDate();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSTemporalPlainDate<JSTemporalPlainDate, JSObject>::JSTemporalPlainDateVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSTemporalPlainDateVerify(JSTemporalPlainDate::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=68&c=1
bool IsJSTemporalPlainMonthDay_NonInline(HeapObject o) {
  return o.IsJSTemporalPlainMonthDay();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSTemporalPlainMonthDay<JSTemporalPlainMonthDay, JSObject>::JSTemporalPlainMonthDayVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSTemporalPlainMonthDayVerify(JSTemporalPlainMonthDay::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=73&c=1
bool IsJSTemporalPlainTime_NonInline(HeapObject o) {
  return o.IsJSTemporalPlainTime();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSTemporalPlainTime<JSTemporalPlainTime, JSObject>::JSTemporalPlainTimeVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSTemporalPlainTimeVerify(JSTemporalPlainTime::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=79&c=1
bool IsJSTemporalPlainYearMonth_NonInline(HeapObject o) {
  return o.IsJSTemporalPlainYearMonth();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSTemporalPlainYearMonth<JSTemporalPlainYearMonth, JSObject>::JSTemporalPlainYearMonthVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSTemporalPlainYearMonthVerify(JSTemporalPlainYearMonth::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=84&c=1
bool IsJSTemporalTimeZone_NonInline(HeapObject o) {
  return o.IsJSTemporalTimeZone();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSTemporalTimeZone<JSTemporalTimeZone, JSObject>::JSTemporalTimeZoneVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSTemporalTimeZoneVerify(JSTemporalTimeZone::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=89&c=1
bool IsJSTemporalZonedDateTime_NonInline(HeapObject o) {
  return o.IsJSTemporalZonedDateTime();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSTemporalZonedDateTime<JSTemporalZonedDateTime, JSObject>::JSTemporalZonedDateTimeVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSTemporalZonedDateTimeVerify(JSTemporalZonedDateTime::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
