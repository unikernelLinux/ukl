class JSTemporalCalendar;
class JSTemporalDuration;
class JSTemporalInstant;
class JSTemporalPlainDateTime;
class JSTemporalPlainDate;
class JSTemporalPlainMonthDay;
class JSTemporalPlainTime;
class JSTemporalPlainYearMonth;
class JSTemporalTimeZone;
class JSTemporalZonedDateTime;
// Alias for HeapObject::IsJSTemporalCalendar() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=37&c=1
V8_EXPORT_PRIVATE bool IsJSTemporalCalendar_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=37&c=1
template <class D, class P>
class TorqueGeneratedJSTemporalCalendar : public P {
  static_assert(
      std::is_same<JSTemporalCalendar, D>::value,
      "Use this class as direct base for JSTemporalCalendar.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSTemporalCalendar.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSTemporalCalendar<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=38&c=3
  inline int flags() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=38&c=3
  inline void set_flags(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=37&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=37&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSTemporalCalendar)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=37&c=1
  V8_EXPORT_PRIVATE void JSTemporalCalendarVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=38&c=3
  static constexpr int kFlagsOffset = P::kHeaderSize;
  static constexpr int kFlagsOffsetEnd = kFlagsOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kFlagsOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kFlagsOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kFlagsOffsetEnd + 1;
  static constexpr int kHeaderSize = kFlagsOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSTemporalCalendar() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSTemporalCalendar, DAlias>::value,
        "class TorqueGeneratedJSTemporalCalendar should be used as direct base for JSTemporalCalendar.");
  }

 protected:
  inline explicit TorqueGeneratedJSTemporalCalendar(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSTemporalCalendar(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSTemporalDuration() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=41&c=1
V8_EXPORT_PRIVATE bool IsJSTemporalDuration_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=41&c=1
template <class D, class P>
class TorqueGeneratedJSTemporalDuration : public P {
  static_assert(
      std::is_same<JSTemporalDuration, D>::value,
      "Use this class as direct base for JSTemporalDuration.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSTemporalDuration.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSTemporalDuration<D,P>;

  // Torque type: Number
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=42&c=3
  inline Object years() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=42&c=3
  inline Object years(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=42&c=3
  inline void set_years(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: Number
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=43&c=3
  inline Object months() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=43&c=3
  inline Object months(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=43&c=3
  inline void set_months(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: Number
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=44&c=3
  inline Object weeks() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=44&c=3
  inline Object weeks(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=44&c=3
  inline void set_weeks(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: Number
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=45&c=3
  inline Object days() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=45&c=3
  inline Object days(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=45&c=3
  inline void set_days(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: Number
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=46&c=3
  inline Object hours() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=46&c=3
  inline Object hours(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=46&c=3
  inline void set_hours(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: Number
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=47&c=3
  inline Object minutes() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=47&c=3
  inline Object minutes(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=47&c=3
  inline void set_minutes(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: Number
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=48&c=3
  inline Object seconds() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=48&c=3
  inline Object seconds(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=48&c=3
  inline void set_seconds(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: Number
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=49&c=3
  inline Object milliseconds() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=49&c=3
  inline Object milliseconds(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=49&c=3
  inline void set_milliseconds(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: Number
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=50&c=3
  inline Object microseconds() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=50&c=3
  inline Object microseconds(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=50&c=3
  inline void set_microseconds(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: Number
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=51&c=3
  inline Object nanoseconds() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=51&c=3
  inline Object nanoseconds(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=51&c=3
  inline void set_nanoseconds(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=41&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=41&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSTemporalDuration)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=41&c=1
  V8_EXPORT_PRIVATE void JSTemporalDurationVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=42&c=3
  static constexpr int kYearsOffset = P::kHeaderSize;
  static constexpr int kYearsOffsetEnd = kYearsOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=43&c=3
  static constexpr int kMonthsOffset = kYearsOffsetEnd + 1;
  static constexpr int kMonthsOffsetEnd = kMonthsOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=44&c=3
  static constexpr int kWeeksOffset = kMonthsOffsetEnd + 1;
  static constexpr int kWeeksOffsetEnd = kWeeksOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=45&c=3
  static constexpr int kDaysOffset = kWeeksOffsetEnd + 1;
  static constexpr int kDaysOffsetEnd = kDaysOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=46&c=3
  static constexpr int kHoursOffset = kDaysOffsetEnd + 1;
  static constexpr int kHoursOffsetEnd = kHoursOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=47&c=3
  static constexpr int kMinutesOffset = kHoursOffsetEnd + 1;
  static constexpr int kMinutesOffsetEnd = kMinutesOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=48&c=3
  static constexpr int kSecondsOffset = kMinutesOffsetEnd + 1;
  static constexpr int kSecondsOffsetEnd = kSecondsOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=49&c=3
  static constexpr int kMillisecondsOffset = kSecondsOffsetEnd + 1;
  static constexpr int kMillisecondsOffsetEnd = kMillisecondsOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=50&c=3
  static constexpr int kMicrosecondsOffset = kMillisecondsOffsetEnd + 1;
  static constexpr int kMicrosecondsOffsetEnd = kMicrosecondsOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=51&c=3
  static constexpr int kNanosecondsOffset = kMicrosecondsOffsetEnd + 1;
  static constexpr int kNanosecondsOffsetEnd = kNanosecondsOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kNanosecondsOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kNanosecondsOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kNanosecondsOffsetEnd + 1;
  static constexpr int kHeaderSize = kNanosecondsOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSTemporalDuration() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSTemporalDuration, DAlias>::value,
        "class TorqueGeneratedJSTemporalDuration should be used as direct base for JSTemporalDuration.");
  }

 protected:
  inline explicit TorqueGeneratedJSTemporalDuration(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSTemporalDuration(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSTemporalInstant() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=54&c=1
V8_EXPORT_PRIVATE bool IsJSTemporalInstant_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=54&c=1
template <class D, class P>
class TorqueGeneratedJSTemporalInstant : public P {
  static_assert(
      std::is_same<JSTemporalInstant, D>::value,
      "Use this class as direct base for JSTemporalInstant.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSTemporalInstant.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSTemporalInstant<D,P>;

  // Torque type: BigInt
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=54&c=51
  inline BigInt nanoseconds() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=54&c=51
  inline BigInt nanoseconds(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=54&c=51
  inline void set_nanoseconds(BigInt value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=54&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=54&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSTemporalInstant)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=54&c=1
  V8_EXPORT_PRIVATE void JSTemporalInstantVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=54&c=51
  static constexpr int kNanosecondsOffset = P::kHeaderSize;
  static constexpr int kNanosecondsOffsetEnd = kNanosecondsOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kNanosecondsOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kNanosecondsOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kNanosecondsOffsetEnd + 1;
  static constexpr int kHeaderSize = kNanosecondsOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSTemporalInstant() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSTemporalInstant, DAlias>::value,
        "class TorqueGeneratedJSTemporalInstant should be used as direct base for JSTemporalInstant.");
  }

 protected:
  inline explicit TorqueGeneratedJSTemporalInstant(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSTemporalInstant(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSTemporalPlainDateTime() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=56&c=1
V8_EXPORT_PRIVATE bool IsJSTemporalPlainDateTime_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=56&c=1
template <class D, class P>
class TorqueGeneratedJSTemporalPlainDateTime : public P {
  static_assert(
      std::is_same<JSTemporalPlainDateTime, D>::value,
      "Use this class as direct base for JSTemporalPlainDateTime.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSTemporalPlainDateTime.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSTemporalPlainDateTime<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=57&c=3
  inline int year_month_day() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=57&c=3
  inline void set_year_month_day(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=58&c=3
  inline int hour_minute_second() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=58&c=3
  inline void set_hour_minute_second(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=59&c=3
  inline int second_parts() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=59&c=3
  inline void set_second_parts(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=60&c=3
  inline JSReceiver calendar() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=60&c=3
  inline JSReceiver calendar(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=60&c=3
  inline void set_calendar(JSReceiver value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=56&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=56&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSTemporalPlainDateTime)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=56&c=1
  V8_EXPORT_PRIVATE void JSTemporalPlainDateTimeVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=57&c=3
  static constexpr int kYearMonthDayOffset = P::kHeaderSize;
  static constexpr int kYearMonthDayOffsetEnd = kYearMonthDayOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=58&c=3
  static constexpr int kHourMinuteSecondOffset = kYearMonthDayOffsetEnd + 1;
  static constexpr int kHourMinuteSecondOffsetEnd = kHourMinuteSecondOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=59&c=3
  static constexpr int kSecondPartsOffset = kHourMinuteSecondOffsetEnd + 1;
  static constexpr int kSecondPartsOffsetEnd = kSecondPartsOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=60&c=3
  static constexpr int kCalendarOffset = kSecondPartsOffsetEnd + 1;
  static constexpr int kCalendarOffsetEnd = kCalendarOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kCalendarOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kCalendarOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kCalendarOffsetEnd + 1;
  static constexpr int kHeaderSize = kCalendarOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSTemporalPlainDateTime() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSTemporalPlainDateTime, DAlias>::value,
        "class TorqueGeneratedJSTemporalPlainDateTime should be used as direct base for JSTemporalPlainDateTime.");
  }

 protected:
  inline explicit TorqueGeneratedJSTemporalPlainDateTime(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSTemporalPlainDateTime(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSTemporalPlainDate() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=63&c=1
V8_EXPORT_PRIVATE bool IsJSTemporalPlainDate_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=63&c=1
template <class D, class P>
class TorqueGeneratedJSTemporalPlainDate : public P {
  static_assert(
      std::is_same<JSTemporalPlainDate, D>::value,
      "Use this class as direct base for JSTemporalPlainDate.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSTemporalPlainDate.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSTemporalPlainDate<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=64&c=3
  inline int year_month_day() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=64&c=3
  inline void set_year_month_day(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=65&c=3
  inline JSReceiver calendar() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=65&c=3
  inline JSReceiver calendar(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=65&c=3
  inline void set_calendar(JSReceiver value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=63&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=63&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSTemporalPlainDate)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=63&c=1
  V8_EXPORT_PRIVATE void JSTemporalPlainDateVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=64&c=3
  static constexpr int kYearMonthDayOffset = P::kHeaderSize;
  static constexpr int kYearMonthDayOffsetEnd = kYearMonthDayOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=65&c=3
  static constexpr int kCalendarOffset = kYearMonthDayOffsetEnd + 1;
  static constexpr int kCalendarOffsetEnd = kCalendarOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kCalendarOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kCalendarOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kCalendarOffsetEnd + 1;
  static constexpr int kHeaderSize = kCalendarOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSTemporalPlainDate() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSTemporalPlainDate, DAlias>::value,
        "class TorqueGeneratedJSTemporalPlainDate should be used as direct base for JSTemporalPlainDate.");
  }

 protected:
  inline explicit TorqueGeneratedJSTemporalPlainDate(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSTemporalPlainDate(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSTemporalPlainMonthDay() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=68&c=1
V8_EXPORT_PRIVATE bool IsJSTemporalPlainMonthDay_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=68&c=1
template <class D, class P>
class TorqueGeneratedJSTemporalPlainMonthDay : public P {
  static_assert(
      std::is_same<JSTemporalPlainMonthDay, D>::value,
      "Use this class as direct base for JSTemporalPlainMonthDay.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSTemporalPlainMonthDay.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSTemporalPlainMonthDay<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=69&c=3
  inline int year_month_day() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=69&c=3
  inline void set_year_month_day(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=70&c=3
  inline JSReceiver calendar() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=70&c=3
  inline JSReceiver calendar(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=70&c=3
  inline void set_calendar(JSReceiver value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=68&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=68&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSTemporalPlainMonthDay)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=68&c=1
  V8_EXPORT_PRIVATE void JSTemporalPlainMonthDayVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=69&c=3
  static constexpr int kYearMonthDayOffset = P::kHeaderSize;
  static constexpr int kYearMonthDayOffsetEnd = kYearMonthDayOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=70&c=3
  static constexpr int kCalendarOffset = kYearMonthDayOffsetEnd + 1;
  static constexpr int kCalendarOffsetEnd = kCalendarOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kCalendarOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kCalendarOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kCalendarOffsetEnd + 1;
  static constexpr int kHeaderSize = kCalendarOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSTemporalPlainMonthDay() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSTemporalPlainMonthDay, DAlias>::value,
        "class TorqueGeneratedJSTemporalPlainMonthDay should be used as direct base for JSTemporalPlainMonthDay.");
  }

 protected:
  inline explicit TorqueGeneratedJSTemporalPlainMonthDay(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSTemporalPlainMonthDay(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSTemporalPlainTime() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=73&c=1
V8_EXPORT_PRIVATE bool IsJSTemporalPlainTime_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=73&c=1
template <class D, class P>
class TorqueGeneratedJSTemporalPlainTime : public P {
  static_assert(
      std::is_same<JSTemporalPlainTime, D>::value,
      "Use this class as direct base for JSTemporalPlainTime.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSTemporalPlainTime.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSTemporalPlainTime<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=74&c=3
  inline int hour_minute_second() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=74&c=3
  inline void set_hour_minute_second(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=75&c=3
  inline int second_parts() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=75&c=3
  inline void set_second_parts(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=76&c=3
  inline JSReceiver calendar() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=76&c=3
  inline JSReceiver calendar(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=76&c=3
  inline void set_calendar(JSReceiver value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=73&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=73&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSTemporalPlainTime)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=73&c=1
  V8_EXPORT_PRIVATE void JSTemporalPlainTimeVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=74&c=3
  static constexpr int kHourMinuteSecondOffset = P::kHeaderSize;
  static constexpr int kHourMinuteSecondOffsetEnd = kHourMinuteSecondOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=75&c=3
  static constexpr int kSecondPartsOffset = kHourMinuteSecondOffsetEnd + 1;
  static constexpr int kSecondPartsOffsetEnd = kSecondPartsOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=76&c=3
  static constexpr int kCalendarOffset = kSecondPartsOffsetEnd + 1;
  static constexpr int kCalendarOffsetEnd = kCalendarOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kCalendarOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kCalendarOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kCalendarOffsetEnd + 1;
  static constexpr int kHeaderSize = kCalendarOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSTemporalPlainTime() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSTemporalPlainTime, DAlias>::value,
        "class TorqueGeneratedJSTemporalPlainTime should be used as direct base for JSTemporalPlainTime.");
  }

 protected:
  inline explicit TorqueGeneratedJSTemporalPlainTime(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSTemporalPlainTime(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSTemporalPlainYearMonth() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=79&c=1
V8_EXPORT_PRIVATE bool IsJSTemporalPlainYearMonth_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=79&c=1
template <class D, class P>
class TorqueGeneratedJSTemporalPlainYearMonth : public P {
  static_assert(
      std::is_same<JSTemporalPlainYearMonth, D>::value,
      "Use this class as direct base for JSTemporalPlainYearMonth.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSTemporalPlainYearMonth.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSTemporalPlainYearMonth<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=80&c=3
  inline int year_month_day() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=80&c=3
  inline void set_year_month_day(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=81&c=3
  inline JSReceiver calendar() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=81&c=3
  inline JSReceiver calendar(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=81&c=3
  inline void set_calendar(JSReceiver value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=79&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=79&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSTemporalPlainYearMonth)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=79&c=1
  V8_EXPORT_PRIVATE void JSTemporalPlainYearMonthVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=80&c=3
  static constexpr int kYearMonthDayOffset = P::kHeaderSize;
  static constexpr int kYearMonthDayOffsetEnd = kYearMonthDayOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=81&c=3
  static constexpr int kCalendarOffset = kYearMonthDayOffsetEnd + 1;
  static constexpr int kCalendarOffsetEnd = kCalendarOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kCalendarOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kCalendarOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kCalendarOffsetEnd + 1;
  static constexpr int kHeaderSize = kCalendarOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSTemporalPlainYearMonth() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSTemporalPlainYearMonth, DAlias>::value,
        "class TorqueGeneratedJSTemporalPlainYearMonth should be used as direct base for JSTemporalPlainYearMonth.");
  }

 protected:
  inline explicit TorqueGeneratedJSTemporalPlainYearMonth(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSTemporalPlainYearMonth(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSTemporalTimeZone() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=84&c=1
V8_EXPORT_PRIVATE bool IsJSTemporalTimeZone_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=84&c=1
template <class D, class P>
class TorqueGeneratedJSTemporalTimeZone : public P {
  static_assert(
      std::is_same<JSTemporalTimeZone, D>::value,
      "Use this class as direct base for JSTemporalTimeZone.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSTemporalTimeZone.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSTemporalTimeZone<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=85&c=3
  inline int flags() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=85&c=3
  inline void set_flags(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=86&c=3
  inline int details() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=86&c=3
  inline void set_details(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=84&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=84&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSTemporalTimeZone)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=84&c=1
  V8_EXPORT_PRIVATE void JSTemporalTimeZoneVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=85&c=3
  static constexpr int kFlagsOffset = P::kHeaderSize;
  static constexpr int kFlagsOffsetEnd = kFlagsOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=86&c=3
  static constexpr int kDetailsOffset = kFlagsOffsetEnd + 1;
  static constexpr int kDetailsOffsetEnd = kDetailsOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kDetailsOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kDetailsOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kDetailsOffsetEnd + 1;
  static constexpr int kHeaderSize = kDetailsOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSTemporalTimeZone() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSTemporalTimeZone, DAlias>::value,
        "class TorqueGeneratedJSTemporalTimeZone should be used as direct base for JSTemporalTimeZone.");
  }

 protected:
  inline explicit TorqueGeneratedJSTemporalTimeZone(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSTemporalTimeZone(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSTemporalZonedDateTime() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=89&c=1
V8_EXPORT_PRIVATE bool IsJSTemporalZonedDateTime_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=89&c=1
template <class D, class P>
class TorqueGeneratedJSTemporalZonedDateTime : public P {
  static_assert(
      std::is_same<JSTemporalZonedDateTime, D>::value,
      "Use this class as direct base for JSTemporalZonedDateTime.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSTemporalZonedDateTime.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSTemporalZonedDateTime<D,P>;

  // Torque type: BigInt
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=90&c=3
  inline BigInt nanoseconds() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=90&c=3
  inline BigInt nanoseconds(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=90&c=3
  inline void set_nanoseconds(BigInt value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=91&c=3
  inline JSReceiver time_zone() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=91&c=3
  inline JSReceiver time_zone(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=91&c=3
  inline void set_time_zone(JSReceiver value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=92&c=3
  inline JSReceiver calendar() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=92&c=3
  inline JSReceiver calendar(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=92&c=3
  inline void set_calendar(JSReceiver value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=89&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=89&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(JSTemporalZonedDateTime)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=89&c=1
  V8_EXPORT_PRIVATE void JSTemporalZonedDateTimeVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=90&c=3
  static constexpr int kNanosecondsOffset = P::kHeaderSize;
  static constexpr int kNanosecondsOffsetEnd = kNanosecondsOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=91&c=3
  static constexpr int kTimeZoneOffset = kNanosecondsOffsetEnd + 1;
  static constexpr int kTimeZoneOffsetEnd = kTimeZoneOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=92&c=3
  static constexpr int kCalendarOffset = kTimeZoneOffsetEnd + 1;
  static constexpr int kCalendarOffsetEnd = kCalendarOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kCalendarOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kCalendarOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kCalendarOffsetEnd + 1;
  static constexpr int kHeaderSize = kCalendarOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSTemporalZonedDateTime() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSTemporalZonedDateTime, DAlias>::value,
        "class TorqueGeneratedJSTemporalZonedDateTime should be used as direct base for JSTemporalZonedDateTime.");
  }

 protected:
  inline explicit TorqueGeneratedJSTemporalZonedDateTime(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSTemporalZonedDateTime(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

