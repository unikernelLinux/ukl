// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=38&c=3
template<class D, class P>
int TorqueGeneratedJSTemporalCalendar<D, P>::flags() const {
  int value;
  value = TaggedField<Smi>::load(*this, kFlagsOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=38&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalCalendar<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=37&c=1
template<class D, class P>
D TorqueGeneratedJSTemporalCalendar<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSTemporalCalendar<D, P>::TorqueGeneratedJSTemporalCalendar(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSTemporalCalendar_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSTemporalCalendar<D, P>::TorqueGeneratedJSTemporalCalendar(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSTemporalCalendar_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=42&c=3
template<class D, class P>
Object TorqueGeneratedJSTemporalDuration<D, P>::years() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSTemporalDuration::years(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=42&c=3
template<class D, class P>
Object TorqueGeneratedJSTemporalDuration<D, P>::years(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kYearsOffset);
  DCHECK(value.IsHeapNumber() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=42&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalDuration<D, P>::set_years(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapNumber() || value.IsSmi());
  WRITE_FIELD(*this, kYearsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kYearsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=43&c=3
template<class D, class P>
Object TorqueGeneratedJSTemporalDuration<D, P>::months() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSTemporalDuration::months(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=43&c=3
template<class D, class P>
Object TorqueGeneratedJSTemporalDuration<D, P>::months(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kMonthsOffset);
  DCHECK(value.IsHeapNumber() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=43&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalDuration<D, P>::set_months(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapNumber() || value.IsSmi());
  WRITE_FIELD(*this, kMonthsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kMonthsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=44&c=3
template<class D, class P>
Object TorqueGeneratedJSTemporalDuration<D, P>::weeks() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSTemporalDuration::weeks(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=44&c=3
template<class D, class P>
Object TorqueGeneratedJSTemporalDuration<D, P>::weeks(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kWeeksOffset);
  DCHECK(value.IsHeapNumber() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=44&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalDuration<D, P>::set_weeks(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapNumber() || value.IsSmi());
  WRITE_FIELD(*this, kWeeksOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kWeeksOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=45&c=3
template<class D, class P>
Object TorqueGeneratedJSTemporalDuration<D, P>::days() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSTemporalDuration::days(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=45&c=3
template<class D, class P>
Object TorqueGeneratedJSTemporalDuration<D, P>::days(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kDaysOffset);
  DCHECK(value.IsHeapNumber() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=45&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalDuration<D, P>::set_days(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapNumber() || value.IsSmi());
  WRITE_FIELD(*this, kDaysOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDaysOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=46&c=3
template<class D, class P>
Object TorqueGeneratedJSTemporalDuration<D, P>::hours() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSTemporalDuration::hours(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=46&c=3
template<class D, class P>
Object TorqueGeneratedJSTemporalDuration<D, P>::hours(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kHoursOffset);
  DCHECK(value.IsHeapNumber() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=46&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalDuration<D, P>::set_hours(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapNumber() || value.IsSmi());
  WRITE_FIELD(*this, kHoursOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kHoursOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=47&c=3
template<class D, class P>
Object TorqueGeneratedJSTemporalDuration<D, P>::minutes() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSTemporalDuration::minutes(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=47&c=3
template<class D, class P>
Object TorqueGeneratedJSTemporalDuration<D, P>::minutes(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kMinutesOffset);
  DCHECK(value.IsHeapNumber() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=47&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalDuration<D, P>::set_minutes(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapNumber() || value.IsSmi());
  WRITE_FIELD(*this, kMinutesOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kMinutesOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=48&c=3
template<class D, class P>
Object TorqueGeneratedJSTemporalDuration<D, P>::seconds() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSTemporalDuration::seconds(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=48&c=3
template<class D, class P>
Object TorqueGeneratedJSTemporalDuration<D, P>::seconds(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kSecondsOffset);
  DCHECK(value.IsHeapNumber() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=48&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalDuration<D, P>::set_seconds(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapNumber() || value.IsSmi());
  WRITE_FIELD(*this, kSecondsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSecondsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=49&c=3
template<class D, class P>
Object TorqueGeneratedJSTemporalDuration<D, P>::milliseconds() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSTemporalDuration::milliseconds(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=49&c=3
template<class D, class P>
Object TorqueGeneratedJSTemporalDuration<D, P>::milliseconds(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kMillisecondsOffset);
  DCHECK(value.IsHeapNumber() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=49&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalDuration<D, P>::set_milliseconds(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapNumber() || value.IsSmi());
  WRITE_FIELD(*this, kMillisecondsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kMillisecondsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=50&c=3
template<class D, class P>
Object TorqueGeneratedJSTemporalDuration<D, P>::microseconds() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSTemporalDuration::microseconds(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=50&c=3
template<class D, class P>
Object TorqueGeneratedJSTemporalDuration<D, P>::microseconds(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kMicrosecondsOffset);
  DCHECK(value.IsHeapNumber() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=50&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalDuration<D, P>::set_microseconds(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapNumber() || value.IsSmi());
  WRITE_FIELD(*this, kMicrosecondsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kMicrosecondsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=51&c=3
template<class D, class P>
Object TorqueGeneratedJSTemporalDuration<D, P>::nanoseconds() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSTemporalDuration::nanoseconds(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=51&c=3
template<class D, class P>
Object TorqueGeneratedJSTemporalDuration<D, P>::nanoseconds(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kNanosecondsOffset);
  DCHECK(value.IsHeapNumber() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=51&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalDuration<D, P>::set_nanoseconds(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapNumber() || value.IsSmi());
  WRITE_FIELD(*this, kNanosecondsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNanosecondsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=41&c=1
template<class D, class P>
D TorqueGeneratedJSTemporalDuration<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSTemporalDuration<D, P>::TorqueGeneratedJSTemporalDuration(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSTemporalDuration_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSTemporalDuration<D, P>::TorqueGeneratedJSTemporalDuration(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSTemporalDuration_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=54&c=51
template<class D, class P>
BigInt TorqueGeneratedJSTemporalInstant<D, P>::nanoseconds() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSTemporalInstant::nanoseconds(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=54&c=51
template<class D, class P>
BigInt TorqueGeneratedJSTemporalInstant<D, P>::nanoseconds(PtrComprCageBase cage_base) const {
  BigInt value;
  value = TaggedField<BigInt>::load(cage_base, *this, kNanosecondsOffset);
  DCHECK(value.IsBigInt());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=54&c=51
template<class D, class P>
void TorqueGeneratedJSTemporalInstant<D, P>::set_nanoseconds(BigInt value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsBigInt());
  WRITE_FIELD(*this, kNanosecondsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNanosecondsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=54&c=1
template<class D, class P>
D TorqueGeneratedJSTemporalInstant<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSTemporalInstant<D, P>::TorqueGeneratedJSTemporalInstant(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSTemporalInstant_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSTemporalInstant<D, P>::TorqueGeneratedJSTemporalInstant(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSTemporalInstant_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=57&c=3
template<class D, class P>
int TorqueGeneratedJSTemporalPlainDateTime<D, P>::year_month_day() const {
  int value;
  value = TaggedField<Smi>::load(*this, kYearMonthDayOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=57&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalPlainDateTime<D, P>::set_year_month_day(int value) {
  WRITE_FIELD(*this, kYearMonthDayOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=58&c=3
template<class D, class P>
int TorqueGeneratedJSTemporalPlainDateTime<D, P>::hour_minute_second() const {
  int value;
  value = TaggedField<Smi>::load(*this, kHourMinuteSecondOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=58&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalPlainDateTime<D, P>::set_hour_minute_second(int value) {
  WRITE_FIELD(*this, kHourMinuteSecondOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=59&c=3
template<class D, class P>
int TorqueGeneratedJSTemporalPlainDateTime<D, P>::second_parts() const {
  int value;
  value = TaggedField<Smi>::load(*this, kSecondPartsOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=59&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalPlainDateTime<D, P>::set_second_parts(int value) {
  WRITE_FIELD(*this, kSecondPartsOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=60&c=3
template<class D, class P>
JSReceiver TorqueGeneratedJSTemporalPlainDateTime<D, P>::calendar() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSTemporalPlainDateTime::calendar(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=60&c=3
template<class D, class P>
JSReceiver TorqueGeneratedJSTemporalPlainDateTime<D, P>::calendar(PtrComprCageBase cage_base) const {
  JSReceiver value;
  value = TaggedField<JSReceiver>::load(cage_base, *this, kCalendarOffset);
  DCHECK(value.IsJSReceiver());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=60&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalPlainDateTime<D, P>::set_calendar(JSReceiver value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver());
  WRITE_FIELD(*this, kCalendarOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCalendarOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=56&c=1
template<class D, class P>
D TorqueGeneratedJSTemporalPlainDateTime<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSTemporalPlainDateTime<D, P>::TorqueGeneratedJSTemporalPlainDateTime(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSTemporalPlainDateTime_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSTemporalPlainDateTime<D, P>::TorqueGeneratedJSTemporalPlainDateTime(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSTemporalPlainDateTime_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=64&c=3
template<class D, class P>
int TorqueGeneratedJSTemporalPlainDate<D, P>::year_month_day() const {
  int value;
  value = TaggedField<Smi>::load(*this, kYearMonthDayOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=64&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalPlainDate<D, P>::set_year_month_day(int value) {
  WRITE_FIELD(*this, kYearMonthDayOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=65&c=3
template<class D, class P>
JSReceiver TorqueGeneratedJSTemporalPlainDate<D, P>::calendar() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSTemporalPlainDate::calendar(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=65&c=3
template<class D, class P>
JSReceiver TorqueGeneratedJSTemporalPlainDate<D, P>::calendar(PtrComprCageBase cage_base) const {
  JSReceiver value;
  value = TaggedField<JSReceiver>::load(cage_base, *this, kCalendarOffset);
  DCHECK(value.IsJSReceiver());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=65&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalPlainDate<D, P>::set_calendar(JSReceiver value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver());
  WRITE_FIELD(*this, kCalendarOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCalendarOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=63&c=1
template<class D, class P>
D TorqueGeneratedJSTemporalPlainDate<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSTemporalPlainDate<D, P>::TorqueGeneratedJSTemporalPlainDate(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSTemporalPlainDate_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSTemporalPlainDate<D, P>::TorqueGeneratedJSTemporalPlainDate(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSTemporalPlainDate_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=69&c=3
template<class D, class P>
int TorqueGeneratedJSTemporalPlainMonthDay<D, P>::year_month_day() const {
  int value;
  value = TaggedField<Smi>::load(*this, kYearMonthDayOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=69&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalPlainMonthDay<D, P>::set_year_month_day(int value) {
  WRITE_FIELD(*this, kYearMonthDayOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=70&c=3
template<class D, class P>
JSReceiver TorqueGeneratedJSTemporalPlainMonthDay<D, P>::calendar() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSTemporalPlainMonthDay::calendar(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=70&c=3
template<class D, class P>
JSReceiver TorqueGeneratedJSTemporalPlainMonthDay<D, P>::calendar(PtrComprCageBase cage_base) const {
  JSReceiver value;
  value = TaggedField<JSReceiver>::load(cage_base, *this, kCalendarOffset);
  DCHECK(value.IsJSReceiver());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=70&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalPlainMonthDay<D, P>::set_calendar(JSReceiver value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver());
  WRITE_FIELD(*this, kCalendarOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCalendarOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=68&c=1
template<class D, class P>
D TorqueGeneratedJSTemporalPlainMonthDay<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSTemporalPlainMonthDay<D, P>::TorqueGeneratedJSTemporalPlainMonthDay(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSTemporalPlainMonthDay_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSTemporalPlainMonthDay<D, P>::TorqueGeneratedJSTemporalPlainMonthDay(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSTemporalPlainMonthDay_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=74&c=3
template<class D, class P>
int TorqueGeneratedJSTemporalPlainTime<D, P>::hour_minute_second() const {
  int value;
  value = TaggedField<Smi>::load(*this, kHourMinuteSecondOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=74&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalPlainTime<D, P>::set_hour_minute_second(int value) {
  WRITE_FIELD(*this, kHourMinuteSecondOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=75&c=3
template<class D, class P>
int TorqueGeneratedJSTemporalPlainTime<D, P>::second_parts() const {
  int value;
  value = TaggedField<Smi>::load(*this, kSecondPartsOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=75&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalPlainTime<D, P>::set_second_parts(int value) {
  WRITE_FIELD(*this, kSecondPartsOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=76&c=3
template<class D, class P>
JSReceiver TorqueGeneratedJSTemporalPlainTime<D, P>::calendar() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSTemporalPlainTime::calendar(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=76&c=3
template<class D, class P>
JSReceiver TorqueGeneratedJSTemporalPlainTime<D, P>::calendar(PtrComprCageBase cage_base) const {
  JSReceiver value;
  value = TaggedField<JSReceiver>::load(cage_base, *this, kCalendarOffset);
  DCHECK(value.IsJSReceiver());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=76&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalPlainTime<D, P>::set_calendar(JSReceiver value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver());
  WRITE_FIELD(*this, kCalendarOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCalendarOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=73&c=1
template<class D, class P>
D TorqueGeneratedJSTemporalPlainTime<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSTemporalPlainTime<D, P>::TorqueGeneratedJSTemporalPlainTime(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSTemporalPlainTime_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSTemporalPlainTime<D, P>::TorqueGeneratedJSTemporalPlainTime(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSTemporalPlainTime_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=80&c=3
template<class D, class P>
int TorqueGeneratedJSTemporalPlainYearMonth<D, P>::year_month_day() const {
  int value;
  value = TaggedField<Smi>::load(*this, kYearMonthDayOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=80&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalPlainYearMonth<D, P>::set_year_month_day(int value) {
  WRITE_FIELD(*this, kYearMonthDayOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=81&c=3
template<class D, class P>
JSReceiver TorqueGeneratedJSTemporalPlainYearMonth<D, P>::calendar() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSTemporalPlainYearMonth::calendar(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=81&c=3
template<class D, class P>
JSReceiver TorqueGeneratedJSTemporalPlainYearMonth<D, P>::calendar(PtrComprCageBase cage_base) const {
  JSReceiver value;
  value = TaggedField<JSReceiver>::load(cage_base, *this, kCalendarOffset);
  DCHECK(value.IsJSReceiver());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=81&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalPlainYearMonth<D, P>::set_calendar(JSReceiver value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver());
  WRITE_FIELD(*this, kCalendarOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCalendarOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=79&c=1
template<class D, class P>
D TorqueGeneratedJSTemporalPlainYearMonth<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSTemporalPlainYearMonth<D, P>::TorqueGeneratedJSTemporalPlainYearMonth(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSTemporalPlainYearMonth_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSTemporalPlainYearMonth<D, P>::TorqueGeneratedJSTemporalPlainYearMonth(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSTemporalPlainYearMonth_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=85&c=3
template<class D, class P>
int TorqueGeneratedJSTemporalTimeZone<D, P>::flags() const {
  int value;
  value = TaggedField<Smi>::load(*this, kFlagsOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=85&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalTimeZone<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=86&c=3
template<class D, class P>
int TorqueGeneratedJSTemporalTimeZone<D, P>::details() const {
  int value;
  value = TaggedField<Smi>::load(*this, kDetailsOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=86&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalTimeZone<D, P>::set_details(int value) {
  WRITE_FIELD(*this, kDetailsOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=84&c=1
template<class D, class P>
D TorqueGeneratedJSTemporalTimeZone<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSTemporalTimeZone<D, P>::TorqueGeneratedJSTemporalTimeZone(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSTemporalTimeZone_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSTemporalTimeZone<D, P>::TorqueGeneratedJSTemporalTimeZone(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSTemporalTimeZone_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=90&c=3
template<class D, class P>
BigInt TorqueGeneratedJSTemporalZonedDateTime<D, P>::nanoseconds() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSTemporalZonedDateTime::nanoseconds(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=90&c=3
template<class D, class P>
BigInt TorqueGeneratedJSTemporalZonedDateTime<D, P>::nanoseconds(PtrComprCageBase cage_base) const {
  BigInt value;
  value = TaggedField<BigInt>::load(cage_base, *this, kNanosecondsOffset);
  DCHECK(value.IsBigInt());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=90&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalZonedDateTime<D, P>::set_nanoseconds(BigInt value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsBigInt());
  WRITE_FIELD(*this, kNanosecondsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNanosecondsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=91&c=3
template<class D, class P>
JSReceiver TorqueGeneratedJSTemporalZonedDateTime<D, P>::time_zone() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSTemporalZonedDateTime::time_zone(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=91&c=3
template<class D, class P>
JSReceiver TorqueGeneratedJSTemporalZonedDateTime<D, P>::time_zone(PtrComprCageBase cage_base) const {
  JSReceiver value;
  value = TaggedField<JSReceiver>::load(cage_base, *this, kTimeZoneOffset);
  DCHECK(value.IsJSReceiver());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=91&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalZonedDateTime<D, P>::set_time_zone(JSReceiver value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver());
  WRITE_FIELD(*this, kTimeZoneOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTimeZoneOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=92&c=3
template<class D, class P>
JSReceiver TorqueGeneratedJSTemporalZonedDateTime<D, P>::calendar() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSTemporalZonedDateTime::calendar(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=92&c=3
template<class D, class P>
JSReceiver TorqueGeneratedJSTemporalZonedDateTime<D, P>::calendar(PtrComprCageBase cage_base) const {
  JSReceiver value;
  value = TaggedField<JSReceiver>::load(cage_base, *this, kCalendarOffset);
  DCHECK(value.IsJSReceiver());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=92&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalZonedDateTime<D, P>::set_calendar(JSReceiver value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver());
  WRITE_FIELD(*this, kCalendarOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCalendarOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=89&c=1
template<class D, class P>
D TorqueGeneratedJSTemporalZonedDateTime<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSTemporalZonedDateTime<D, P>::TorqueGeneratedJSTemporalZonedDateTime(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSTemporalZonedDateTime_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSTemporalZonedDateTime<D, P>::TorqueGeneratedJSTemporalZonedDateTime(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSTemporalZonedDateTime_NonInline(*this));
}
