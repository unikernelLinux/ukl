// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=5&c=1
template <class D, class P>
class TorqueGeneratedOddballAsserts {
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=9&c=3
  static constexpr int kToNumberRawOffset = P::kHeaderSize;
  static constexpr int kToNumberRawOffsetEnd = kToNumberRawOffset + kDoubleSize - 1;
  static constexpr int kStartOfStrongFieldsOffset = kToNumberRawOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=10&c=3
  static constexpr int kToStringOffset = kToNumberRawOffsetEnd + 1;
  static constexpr int kToStringOffsetEnd = kToStringOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=11&c=3
  static constexpr int kToNumberOffset = kToStringOffsetEnd + 1;
  static constexpr int kToNumberOffsetEnd = kToNumberOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=12&c=3
  static constexpr int kTypeOfOffset = kToNumberOffsetEnd + 1;
  static constexpr int kTypeOfOffsetEnd = kTypeOfOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=13&c=3
  static constexpr int kKindOffset = kTypeOfOffsetEnd + 1;
  static constexpr int kKindOffsetEnd = kKindOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kKindOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kKindOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kKindOffsetEnd + 1;
  static constexpr int kHeaderSize = kKindOffsetEnd + 1;
  static constexpr int kSize = kKindOffsetEnd + 1;

  static_assert(kToNumberRawOffset == D::kToNumberRawOffset,
                "Values of Oddball::kToNumberRawOffset defined in Torque and C++ do not match");
  static_assert(StaticStringsEqual("float64", D::kToNumberRawTqFieldType),
                "Types of Oddball::kToNumberRawOffset specified in Torque and C++ do not match");
  static_assert(kToStringOffset == D::kToStringOffset,
                "Values of Oddball::kToStringOffset defined in Torque and C++ do not match");
  static_assert(StaticStringsEqual("String", D::kToStringTqFieldType),
                "Types of Oddball::kToStringOffset specified in Torque and C++ do not match");
  static_assert(kToNumberOffset == D::kToNumberOffset,
                "Values of Oddball::kToNumberOffset defined in Torque and C++ do not match");
  static_assert(StaticStringsEqual("Number", D::kToNumberTqFieldType),
                "Types of Oddball::kToNumberOffset specified in Torque and C++ do not match");
  static_assert(kTypeOfOffset == D::kTypeOfOffset,
                "Values of Oddball::kTypeOfOffset defined in Torque and C++ do not match");
  static_assert(StaticStringsEqual("String", D::kTypeOfTqFieldType),
                "Types of Oddball::kTypeOfOffset specified in Torque and C++ do not match");
  static_assert(kKindOffset == D::kKindOffset,
                "Values of Oddball::kKindOffset defined in Torque and C++ do not match");
  static_assert(StaticStringsEqual("Smi", D::kKindTqFieldType),
                "Types of Oddball::kKindOffset specified in Torque and C++ do not match");
  static_assert(kSize == D::kSize);
};

