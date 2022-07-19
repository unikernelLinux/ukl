#ifndef V8_GEN_TORQUE_GENERATED_BIT_FIELDS_H_
#define V8_GEN_TORQUE_GENERATED_BIT_FIELDS_H_

#include "src/base/bit-field.h"

namespace v8 {
namespace internal {
#define DEFINE_TORQUE_GENERATED_INTERCEPTOR_INFO_FLAGS() \
  using CanInterceptSymbolsBit = base::BitField<bool, 0, 1, uint32_t>; \
  using AllCanReadBit = base::BitField<bool, 1, 1, uint32_t>; \
  using NonMaskingBit = base::BitField<bool, 2, 1, uint32_t>; \
  using NamedBit = base::BitField<bool, 3, 1, uint32_t>; \
  using HasNoSideEffectBit = base::BitField<bool, 4, 1, uint32_t>; \
  enum Flag: uint32_t { \
    kNone = 0, \
    kCanInterceptSymbols = uint32_t{1} << 0, \
    kAllCanRead = uint32_t{1} << 1, \
    kNonMasking = uint32_t{1} << 2, \
    kNamed = uint32_t{1} << 3, \
    kHasNoSideEffect = uint32_t{1} << 4, \
  }; \
  using Flags = base::Flags<Flag>; \
  static constexpr int kFlagCount = 5; \

#define DEFINE_TORQUE_GENERATED_ACCESSOR_INFO_FLAGS() \
  using AllCanReadBit = base::BitField<bool, 0, 1, uint32_t>; \
  using AllCanWriteBit = base::BitField<bool, 1, 1, uint32_t>; \
  using IsSpecialDataPropertyBit = base::BitField<bool, 2, 1, uint32_t>; \
  using IsSloppyBit = base::BitField<bool, 3, 1, uint32_t>; \
  using ReplaceOnAccessBit = base::BitField<bool, 4, 1, uint32_t>; \
  using GetterSideEffectTypeBits = base::BitField<SideEffectType, 5, 2, uint32_t>; \
  using SetterSideEffectTypeBits = base::BitField<SideEffectType, 7, 2, uint32_t>; \
  using InitialAttributesBits = base::BitField<PropertyAttributes, 9, 3, uint32_t>; \

#define DEFINE_TORQUE_GENERATED_CALL_SITE_INFO_FLAGS() \
  using IsWasmBit = base::BitField<bool, 0, 1, uint32_t>; \
  using IsAsmJsWasmBit = base::BitField<bool, 1, 1, uint32_t>; \
  using IsStrictBit = base::BitField<bool, 2, 1, uint32_t>; \
  using IsConstructorBit = base::BitField<bool, 3, 1, uint32_t>; \
  using IsAsmJsAtNumberConversionBit = base::BitField<bool, 4, 1, uint32_t>; \
  using IsAsyncBit = base::BitField<bool, 5, 1, uint32_t>; \
  using IsSourcePositionComputedBit = base::BitField<bool, 6, 1, uint32_t>; \
  enum Flag: uint32_t { \
    kNone = 0, \
    kIsWasm = uint32_t{1} << 0, \
    kIsAsmJsWasm = uint32_t{1} << 1, \
    kIsStrict = uint32_t{1} << 2, \
    kIsConstructor = uint32_t{1} << 3, \
    kIsAsmJsAtNumberConversion = uint32_t{1} << 4, \
    kIsAsync = uint32_t{1} << 5, \
    kIsSourcePositionComputed = uint32_t{1} << 6, \
  }; \
  using Flags = base::Flags<Flag>; \
  static constexpr int kFlagCount = 7; \

#define DEFINE_TORQUE_GENERATED_OSRURGENCY_AND_INSTALL_TARGET() \
  using OsrUrgencyBits = base::BitField<uint32_t, 0, 3, uint16_t>; \
  using OsrInstallTargetBits = base::BitField<uint32_t, 3, 13, uint16_t>; \

#define DEFINE_TORQUE_GENERATED_DEBUG_INFO_FLAGS() \
  using HasBreakInfoBit = base::BitField<bool, 0, 1, uint32_t>; \
  using PreparedForDebugExecutionBit = base::BitField<bool, 1, 1, uint32_t>; \
  using HasCoverageInfoBit = base::BitField<bool, 2, 1, uint32_t>; \
  using BreakAtEntryBit = base::BitField<bool, 3, 1, uint32_t>; \
  using CanBreakAtEntryBit = base::BitField<bool, 4, 1, uint32_t>; \
  using DebugExecutionModeBit = base::BitField<bool, 5, 1, uint32_t>; \
  enum Flag: uint32_t { \
    kNone = 0, \
    kHasBreakInfo = uint32_t{1} << 0, \
    kPreparedForDebugExecution = uint32_t{1} << 1, \
    kHasCoverageInfo = uint32_t{1} << 2, \
    kBreakAtEntry = uint32_t{1} << 3, \
    kCanBreakAtEntry = uint32_t{1} << 4, \
    kDebugExecutionMode = uint32_t{1} << 5, \
  }; \
  using Flags = base::Flags<Flag>; \
  static constexpr int kFlagCount = 6; \

#define DEFINE_TORQUE_GENERATED_DEBUGGER_HINTS() \
  using SideEffectStateBits = base::BitField<int32_t, 0, 2, uint32_t>; \
  using DebugIsBlackboxedBit = base::BitField<bool, 2, 1, uint32_t>; \
  using ComputedDebugIsBlackboxedBit = base::BitField<bool, 3, 1, uint32_t>; \
  using DebuggingIdBits = base::BitField<int32_t, 4, 20, uint32_t>; \

#define DEFINE_TORQUE_GENERATED_STACK_FRAME_INFO_FLAGS() \
  using IsConstructorBit = base::BitField<bool, 0, 1, uint32_t>; \
  using BytecodeOffsetOrSourcePositionBits = base::BitField<int32_t, 1, 30, uint32_t>; \

#define DEFINE_TORQUE_GENERATED_FEEDBACK_VECTOR_FLAGS() \
  using TieringStateBits = base::BitField<TieringState, 0, 3, uint32_t>; \
  using MaybeHasOptimizedCodeBit = base::BitField<bool, 3, 1, uint32_t>; \
  using OsrTieringStateBit = base::BitField<TieringState, 4, 1, uint32_t>; \
  using AllYourBitsAreBelongToJgruberBits = base::BitField<uint32_t, 5, 27, uint32_t>; \

#define DEFINE_TORQUE_GENERATED_JS_ARRAY_BUFFER_FLAGS() \
  using IsExternalBit = base::BitField<bool, 0, 1, uint32_t>; \
  using IsDetachableBit = base::BitField<bool, 1, 1, uint32_t>; \
  using WasDetachedBit = base::BitField<bool, 2, 1, uint32_t>; \
  using IsAsmJsMemoryBit = base::BitField<bool, 3, 1, uint32_t>; \
  using IsSharedBit = base::BitField<bool, 4, 1, uint32_t>; \
  using IsResizableBit = base::BitField<bool, 5, 1, uint32_t>; \
  enum Flag: uint32_t { \
    kNone = 0, \
    kIsExternal = uint32_t{1} << 0, \
    kIsDetachable = uint32_t{1} << 1, \
    kWasDetached = uint32_t{1} << 2, \
    kIsAsmJsMemory = uint32_t{1} << 3, \
    kIsShared = uint32_t{1} << 4, \
    kIsResizable = uint32_t{1} << 5, \
  }; \
  using Flags = base::Flags<Flag>; \
  static constexpr int kFlagCount = 6; \

#define DEFINE_TORQUE_GENERATED_JS_ARRAY_BUFFER_VIEW_FLAGS() \
  using IsLengthTrackingBit = base::BitField<bool, 0, 1, uint32_t>; \
  using IsBackedByRabBit = base::BitField<bool, 1, 1, uint32_t>; \
  enum Flag: uint32_t { \
    kNone = 0, \
    kIsLengthTracking = uint32_t{1} << 0, \
    kIsBackedByRab = uint32_t{1} << 1, \
  }; \
  using Flags = base::Flags<Flag>; \
  static constexpr int kFlagCount = 2; \

#define DEFINE_TORQUE_GENERATED_JS_PROMISE_FLAGS() \
  using StatusBits = base::BitField<Promise::PromiseState, 0, 2, uint32_t>; \
  using HasHandlerBit = base::BitField<bool, 2, 1, uint32_t>; \
  using HandledHintBit = base::BitField<bool, 3, 1, uint32_t>; \
  using IsSilentBit = base::BitField<bool, 4, 1, uint32_t>; \
  using AsyncTaskIdBits = base::BitField<int32_t, 5, 22, uint32_t>; \

#define DEFINE_TORQUE_GENERATED_JS_REG_EXP_STRING_ITERATOR_FLAGS() \
  using DoneBit = base::BitField<bool, 0, 1, uint32_t>; \
  using GlobalBit = base::BitField<bool, 1, 1, uint32_t>; \
  using UnicodeBit = base::BitField<bool, 2, 1, uint32_t>; \
  enum Flag: uint32_t { \
    kNone = 0, \
    kDone = uint32_t{1} << 0, \
    kGlobal = uint32_t{1} << 1, \
    kUnicode = uint32_t{1} << 2, \
  }; \
  using Flags = base::Flags<Flag>; \
  static constexpr int kFlagCount = 3; \

#define DEFINE_TORQUE_GENERATED_JS_REG_EXP_FLAGS() \
  using GlobalBit = base::BitField<bool, 0, 1, uint32_t>; \
  using IgnoreCaseBit = base::BitField<bool, 1, 1, uint32_t>; \
  using MultilineBit = base::BitField<bool, 2, 1, uint32_t>; \
  using StickyBit = base::BitField<bool, 3, 1, uint32_t>; \
  using UnicodeBit = base::BitField<bool, 4, 1, uint32_t>; \
  using DotAllBit = base::BitField<bool, 5, 1, uint32_t>; \
  using LinearBit = base::BitField<bool, 6, 1, uint32_t>; \
  using HasIndicesBit = base::BitField<bool, 7, 1, uint32_t>; \
  enum Flag: uint32_t { \
    kNone = 0, \
    kGlobal = uint32_t{1} << 0, \
    kIgnoreCase = uint32_t{1} << 1, \
    kMultiline = uint32_t{1} << 2, \
    kSticky = uint32_t{1} << 3, \
    kUnicode = uint32_t{1} << 4, \
    kDotAll = uint32_t{1} << 5, \
    kLinear = uint32_t{1} << 6, \
    kHasIndices = uint32_t{1} << 7, \
  }; \
  using Flags = base::Flags<Flag>; \
  static constexpr int kFlagCount = 8; \

#define DEFINE_TORQUE_GENERATED_JS_TEMPORAL_CALENDAR_FLAGS() \
  using CalendarIndexBits = base::BitField<int32_t, 0, 5, uint32_t>; \

#define DEFINE_TORQUE_GENERATED_JS_TEMPORAL_YEAR_MONTH_DAY() \
  using IsoYearBits = base::BitField<int32_t, 0, 20, uint32_t>; \
  using IsoMonthBits = base::BitField<int32_t, 20, 4, uint32_t>; \
  using IsoDayBits = base::BitField<int32_t, 24, 5, uint32_t>; \

#define DEFINE_TORQUE_GENERATED_JS_TEMPORAL_HOUR_MINUTE_SECOND() \
  using IsoHourBits = base::BitField<int32_t, 0, 5, uint32_t>; \
  using IsoMinuteBits = base::BitField<int32_t, 5, 6, uint32_t>; \
  using IsoSecondBits = base::BitField<int32_t, 11, 6, uint32_t>; \

#define DEFINE_TORQUE_GENERATED_JS_TEMPORAL_SECOND_PARTS() \
  using IsoMillisecondBits = base::BitField<int32_t, 0, 10, uint32_t>; \
  using IsoMicrosecondBits = base::BitField<int32_t, 10, 10, uint32_t>; \
  using IsoNanosecondBits = base::BitField<int32_t, 20, 10, uint32_t>; \

#define DEFINE_TORQUE_GENERATED_JS_TEMPORAL_TIME_ZONE_FLAGS() \
  using IsOffsetBit = base::BitField<bool, 0, 1, uint32_t>; \
  using OffsetMillisecondsOrTimeZoneIndexBits = base::BitField<int32_t, 1, 28, uint32_t>; \

#define DEFINE_TORQUE_GENERATED_JS_TEMPORAL_TIME_ZONE_SUB_MILLISECONDS() \
  using OffsetSubMillisecondsBits = base::BitField<int32_t, 0, 21, uint32_t>; \

#define DEFINE_TORQUE_GENERATED_FINALIZATION_REGISTRY_FLAGS() \
  using ScheduledForCleanupBit = base::BitField<bool, 0, 1, uint32_t>; \
  enum Flag: uint32_t { \
    kNone = 0, \
    kScheduledForCleanup = uint32_t{1} << 0, \
  }; \
  using Flags = base::Flags<Flag>; \
  static constexpr int kFlagCount = 1; \

#define DEFINE_TORQUE_GENERATED_MAP_BIT_FIELDS1() \
  using HasNonInstancePrototypeBit = base::BitField<bool, 0, 1, uint8_t>; \
  using IsCallableBit = base::BitField<bool, 1, 1, uint8_t>; \
  using HasNamedInterceptorBit = base::BitField<bool, 2, 1, uint8_t>; \
  using HasIndexedInterceptorBit = base::BitField<bool, 3, 1, uint8_t>; \
  using IsUndetectableBit = base::BitField<bool, 4, 1, uint8_t>; \
  using IsAccessCheckNeededBit = base::BitField<bool, 5, 1, uint8_t>; \
  using IsConstructorBit = base::BitField<bool, 6, 1, uint8_t>; \
  using HasPrototypeSlotBit = base::BitField<bool, 7, 1, uint8_t>; \
  enum Flag: uint8_t { \
    kNone = 0, \
    kHasNonInstancePrototype = uint8_t{1} << 0, \
    kIsCallable = uint8_t{1} << 1, \
    kHasNamedInterceptor = uint8_t{1} << 2, \
    kHasIndexedInterceptor = uint8_t{1} << 3, \
    kIsUndetectable = uint8_t{1} << 4, \
    kIsAccessCheckNeeded = uint8_t{1} << 5, \
    kIsConstructor = uint8_t{1} << 6, \
    kHasPrototypeSlot = uint8_t{1} << 7, \
  }; \
  using Flags = base::Flags<Flag>; \
  static constexpr int kFlagCount = 8; \

#define DEFINE_TORQUE_GENERATED_MAP_BIT_FIELDS2() \
  using NewTargetIsBaseBit = base::BitField<bool, 0, 1, uint8_t>; \
  using IsImmutablePrototypeBit = base::BitField<bool, 1, 1, uint8_t>; \
  using ElementsKindBits = base::BitField<ElementsKind, 2, 6, uint8_t>; \

#define DEFINE_TORQUE_GENERATED_MAP_BIT_FIELDS3() \
  using EnumLengthBits = base::BitField<int32_t, 0, 10, uint32_t>; \
  using NumberOfOwnDescriptorsBits = base::BitField<int32_t, 10, 10, uint32_t>; \
  using IsPrototypeMapBit = base::BitField<bool, 20, 1, uint32_t>; \
  using IsDictionaryMapBit = base::BitField<bool, 21, 1, uint32_t>; \
  using OwnsDescriptorsBit = base::BitField<bool, 22, 1, uint32_t>; \
  using IsInRetainedMapListBit = base::BitField<bool, 23, 1, uint32_t>; \
  using IsDeprecatedBit = base::BitField<bool, 24, 1, uint32_t>; \
  using IsUnstableBit = base::BitField<bool, 25, 1, uint32_t>; \
  using IsMigrationTargetBit = base::BitField<bool, 26, 1, uint32_t>; \
  using IsExtensibleBit = base::BitField<bool, 27, 1, uint32_t>; \
  using MayHaveInterestingSymbolsBit = base::BitField<bool, 28, 1, uint32_t>; \
  using ConstructionCounterBits = base::BitField<int32_t, 29, 3, uint32_t>; \

#define DEFINE_TORQUE_GENERATED_NAME_HASH() \
  using HashFieldTypeBits = base::BitField<Name::HashFieldType, 0, 2, uint32_t>; \
  using ArrayIndexValueBits = base::BitField<uint32_t, 2, 24, uint32_t>; \
  using ArrayIndexLengthBits = base::BitField<uint32_t, 26, 6, uint32_t>; \

#define DEFINE_TORQUE_GENERATED_SYMBOL_FLAGS() \
  using IsPrivateBit = base::BitField<bool, 0, 1, uint32_t>; \
  using IsWellKnownSymbolBit = base::BitField<bool, 1, 1, uint32_t>; \
  using IsInPublicSymbolTableBit = base::BitField<bool, 2, 1, uint32_t>; \
  using IsInterestingSymbolBit = base::BitField<bool, 3, 1, uint32_t>; \
  using IsPrivateNameBit = base::BitField<bool, 4, 1, uint32_t>; \
  using IsPrivateBrandBit = base::BitField<bool, 5, 1, uint32_t>; \
  enum Flag: uint32_t { \
    kNone = 0, \
    kIsPrivate = uint32_t{1} << 0, \
    kIsWellKnownSymbol = uint32_t{1} << 1, \
    kIsInPublicSymbolTable = uint32_t{1} << 2, \
    kIsInterestingSymbol = uint32_t{1} << 3, \
    kIsPrivateName = uint32_t{1} << 4, \
    kIsPrivateBrand = uint32_t{1} << 5, \
  }; \
  using Flags = base::Flags<Flag>; \
  static constexpr int kFlagCount = 6; \

#define DEFINE_TORQUE_GENERATED_PROPERTY_DESCRIPTOR_OBJECT_FLAGS() \
  using IsEnumerableBit = base::BitField<bool, 0, 1, uint32_t>; \
  using HasEnumerableBit = base::BitField<bool, 1, 1, uint32_t>; \
  using IsConfigurableBit = base::BitField<bool, 2, 1, uint32_t>; \
  using HasConfigurableBit = base::BitField<bool, 3, 1, uint32_t>; \
  using IsWritableBit = base::BitField<bool, 4, 1, uint32_t>; \
  using HasWritableBit = base::BitField<bool, 5, 1, uint32_t>; \
  using HasValueBit = base::BitField<bool, 6, 1, uint32_t>; \
  using HasGetBit = base::BitField<bool, 7, 1, uint32_t>; \
  using HasSetBit = base::BitField<bool, 8, 1, uint32_t>; \
  enum Flag: uint32_t { \
    kNone = 0, \
    kIsEnumerable = uint32_t{1} << 0, \
    kHasEnumerable = uint32_t{1} << 1, \
    kIsConfigurable = uint32_t{1} << 2, \
    kHasConfigurable = uint32_t{1} << 3, \
    kIsWritable = uint32_t{1} << 4, \
    kHasWritable = uint32_t{1} << 5, \
    kHasValue = uint32_t{1} << 6, \
    kHasGet = uint32_t{1} << 7, \
    kHasSet = uint32_t{1} << 8, \
  }; \
  using Flags = base::Flags<Flag>; \
  static constexpr int kFlagCount = 9; \

#define DEFINE_TORQUE_GENERATED_PROTOTYPE_INFO_FLAGS() \
  using ShouldBeFastBit = base::BitField<bool, 0, 1, uint32_t>; \
  enum Flag: uint32_t { \
    kNone = 0, \
    kShouldBeFast = uint32_t{1} << 0, \
  }; \
  using Flags = base::Flags<Flag>; \
  static constexpr int kFlagCount = 1; \

#define DEFINE_TORQUE_GENERATED_SCOPE_FLAGS() \
  using ScopeTypeBits = base::BitField<ScopeType, 0, 4, uint32_t>; \
  using SloppyEvalCanExtendVarsBit = base::BitField<bool, 4, 1, uint32_t>; \
  using LanguageModeBit = base::BitField<LanguageMode, 5, 1, uint32_t>; \
  using DeclarationScopeBit = base::BitField<bool, 6, 1, uint32_t>; \
  using ReceiverVariableBits = base::BitField<VariableAllocationInfo, 7, 2, uint32_t>; \
  using ClassScopeHasPrivateBrandBit = base::BitField<bool, 9, 1, uint32_t>; \
  using HasSavedClassVariableBit = base::BitField<bool, 10, 1, uint32_t>; \
  using HasNewTargetBit = base::BitField<bool, 11, 1, uint32_t>; \
  using FunctionVariableBits = base::BitField<VariableAllocationInfo, 12, 2, uint32_t>; \
  using HasInferredFunctionNameBit = base::BitField<bool, 14, 1, uint32_t>; \
  using IsAsmModuleBit = base::BitField<bool, 15, 1, uint32_t>; \
  using HasSimpleParametersBit = base::BitField<bool, 16, 1, uint32_t>; \
  using FunctionKindBits = base::BitField<FunctionKind, 17, 5, uint32_t>; \
  using HasOuterScopeInfoBit = base::BitField<bool, 22, 1, uint32_t>; \
  using IsDebugEvaluateScopeBit = base::BitField<bool, 23, 1, uint32_t>; \
  using ForceContextAllocationBit = base::BitField<bool, 24, 1, uint32_t>; \
  using PrivateNameLookupSkipsOuterClassBit = base::BitField<bool, 25, 1, uint32_t>; \
  using HasContextExtensionSlotBit = base::BitField<bool, 26, 1, uint32_t>; \
  using IsReplModeScopeBit = base::BitField<bool, 27, 1, uint32_t>; \
  using HasLocalsBlockListBit = base::BitField<bool, 28, 1, uint32_t>; \
  using IsEmptyBit = base::BitField<bool, 29, 1, uint32_t>; \

#define DEFINE_TORQUE_GENERATED_VARIABLE_PROPERTIES() \
  using VariableModeBits = base::BitField<VariableMode, 0, 4, uint32_t>; \
  using InitFlagBit = base::BitField<InitializationFlag, 4, 1, uint32_t>; \
  using MaybeAssignedFlagBit = base::BitField<MaybeAssignedFlag, 5, 1, uint32_t>; \
  using ParameterNumberBits = base::BitField<uint32_t, 6, 16, uint32_t>; \
  using IsStaticFlagBit = base::BitField<IsStaticFlag, 22, 1, uint32_t>; \

#define DEFINE_TORQUE_GENERATED_SCRIPT_FLAGS() \
  using CompilationTypeBit = base::BitField<Script::CompilationType, 0, 1, uint32_t>; \
  using CompilationStateBit = base::BitField<Script::CompilationState, 1, 1, uint32_t>; \
  using IsReplModeBit = base::BitField<bool, 2, 1, uint32_t>; \
  using OriginOptionsBits = base::BitField<int32_t, 3, 4, uint32_t>; \
  using BreakOnEntryBit = base::BitField<bool, 7, 1, uint32_t>; \

#define DEFINE_TORQUE_GENERATED_SHARED_FUNCTION_INFO_FLAGS() \
  using FunctionKindBits = base::BitField<FunctionKind, 0, 5, uint32_t>; \
  using IsNativeBit = base::BitField<bool, 5, 1, uint32_t>; \
  using IsStrictBit = base::BitField<bool, 6, 1, uint32_t>; \
  using FunctionSyntaxKindBits = base::BitField<FunctionSyntaxKind, 7, 3, uint32_t>; \
  using IsClassConstructorBit = base::BitField<bool, 10, 1, uint32_t>; \
  using HasDuplicateParametersBit = base::BitField<bool, 11, 1, uint32_t>; \
  using AllowLazyCompilationBit = base::BitField<bool, 12, 1, uint32_t>; \
  using IsAsmWasmBrokenBit = base::BitField<bool, 13, 1, uint32_t>; \
  using FunctionMapIndexBits = base::BitField<uint32_t, 14, 5, uint32_t>; \
  using DisabledOptimizationReasonBits = base::BitField<BailoutReason, 19, 4, uint32_t>; \
  using RequiresInstanceMembersInitializerBit = base::BitField<bool, 23, 1, uint32_t>; \
  using ConstructAsBuiltinBit = base::BitField<bool, 24, 1, uint32_t>; \
  using NameShouldPrintAsAnonymousBit = base::BitField<bool, 25, 1, uint32_t>; \
  using HasReportedBinaryCoverageBit = base::BitField<bool, 26, 1, uint32_t>; \
  using IsTopLevelBit = base::BitField<bool, 27, 1, uint32_t>; \
  using PropertiesAreFinalBit = base::BitField<bool, 28, 1, uint32_t>; \
  using PrivateNameLookupSkipsOuterClassBit = base::BitField<bool, 29, 1, uint32_t>; \
  using OsrCodeCacheStateBits = base::BitField<OSRCodeCacheStateOfSFI, 30, 2, uint32_t>; \

#define DEFINE_TORQUE_GENERATED_SHARED_FUNCTION_INFO_FLAGS2() \
  using ClassScopeHasPrivateBrandBit = base::BitField<bool, 0, 1, uint8_t>; \
  using HasStaticPrivateMethodsOrAccessorsBit = base::BitField<bool, 1, 1, uint8_t>; \
  using MaglevCompilationFailedBit = base::BitField<bool, 2, 1, uint8_t>; \
  enum Flag: uint8_t { \
    kNone = 0, \
    kClassScopeHasPrivateBrand = uint8_t{1} << 0, \
    kHasStaticPrivateMethodsOrAccessors = uint8_t{1} << 1, \
    kMaglevCompilationFailed = uint8_t{1} << 2, \
  }; \
  using Flags = base::Flags<Flag>; \
  static constexpr int kFlagCount = 3; \

#define DEFINE_TORQUE_GENERATED_SOURCE_TEXT_MODULE_FLAGS() \
  using AsyncBit = base::BitField<bool, 0, 1, uint32_t>; \
  using AsyncEvaluatingOrdinalBits = base::BitField<uint32_t, 1, 30, uint32_t>; \

#define DEFINE_TORQUE_GENERATED_STRING_INSTANCE_TYPE() \
  using RepresentationBits = base::BitField<StringRepresentationTag, 0, 3, uint16_t>; \
  using IsOneByteBit = base::BitField<bool, 3, 1, uint16_t>; \
  using IsUncachedBit = base::BitField<bool, 4, 1, uint16_t>; \
  using IsNotInternalizedBit = base::BitField<bool, 5, 1, uint16_t>; \
  using IsSharedBit = base::BitField<bool, 6, 1, uint16_t>; \

#define DEFINE_TORQUE_GENERATED_FUNCTION_TEMPLATE_INFO_FLAGS() \
  using UndetectableBit = base::BitField<bool, 0, 1, uint32_t>; \
  using NeedsAccessCheckBit = base::BitField<bool, 1, 1, uint32_t>; \
  using ReadOnlyPrototypeBit = base::BitField<bool, 2, 1, uint32_t>; \
  using RemovePrototypeBit = base::BitField<bool, 3, 1, uint32_t>; \
  using AcceptAnyReceiverBit = base::BitField<bool, 4, 1, uint32_t>; \
  using PublishedBit = base::BitField<bool, 5, 1, uint32_t>; \
  using AllowedReceiverInstanceTypeRangeStartBits = base::BitField<int16_t, 6, 12, uint32_t>; \
  using AllowedReceiverInstanceTypeRangeEndBits = base::BitField<int16_t, 18, 12, uint32_t>; \

#define DEFINE_TORQUE_GENERATED_OBJECT_TEMPLATE_INFO_FLAGS() \
  using IsImmutablePrototypeBit = base::BitField<bool, 0, 1, uint32_t>; \
  using IsCodeKindBit = base::BitField<bool, 1, 1, uint32_t>; \
  using EmbedderFieldCountBits = base::BitField<int32_t, 2, 28, uint32_t>; \

#define DEFINE_TORQUE_GENERATED_TURBOFAN_TYPE_LOW_BITS() \
  using UnusedPaddingField1Bit = base::BitField<bool, 0, 1, uint32_t>; \
  using OtherUnsigned31Bit = base::BitField<bool, 1, 1, uint32_t>; \
  using OtherUnsigned32Bit = base::BitField<bool, 2, 1, uint32_t>; \
  using OtherSigned32Bit = base::BitField<bool, 3, 1, uint32_t>; \
  using OtherNumberBit = base::BitField<bool, 4, 1, uint32_t>; \
  using OtherStringBit = base::BitField<bool, 5, 1, uint32_t>; \
  using Negative31Bit = base::BitField<bool, 6, 1, uint32_t>; \
  using NullBit = base::BitField<bool, 7, 1, uint32_t>; \
  using UndefinedBit = base::BitField<bool, 8, 1, uint32_t>; \
  using BooleanBit = base::BitField<bool, 9, 1, uint32_t>; \
  using Unsigned30Bit = base::BitField<bool, 10, 1, uint32_t>; \
  using MinusZeroBit = base::BitField<bool, 11, 1, uint32_t>; \
  using NaNBit = base::BitField<bool, 12, 1, uint32_t>; \
  using SymbolBit = base::BitField<bool, 13, 1, uint32_t>; \
  using InternalizedStringBit = base::BitField<bool, 14, 1, uint32_t>; \
  using OtherCallableBit = base::BitField<bool, 15, 1, uint32_t>; \
  using OtherObjectBit = base::BitField<bool, 16, 1, uint32_t>; \
  using OtherUndetectableBit = base::BitField<bool, 17, 1, uint32_t>; \
  using CallableProxyBit = base::BitField<bool, 18, 1, uint32_t>; \
  using OtherProxyBit = base::BitField<bool, 19, 1, uint32_t>; \
  using CallableFunctionBit = base::BitField<bool, 20, 1, uint32_t>; \
  using ClassConstructorBit = base::BitField<bool, 21, 1, uint32_t>; \
  using BoundFunctionBit = base::BitField<bool, 22, 1, uint32_t>; \
  using HoleBit = base::BitField<bool, 23, 1, uint32_t>; \
  using OtherInternalBit = base::BitField<bool, 24, 1, uint32_t>; \
  using ExternalPointerBit = base::BitField<bool, 25, 1, uint32_t>; \
  using ArrayBit = base::BitField<bool, 26, 1, uint32_t>; \
  using UnsignedBigInt63Bit = base::BitField<bool, 27, 1, uint32_t>; \
  using OtherUnsignedBigInt64Bit = base::BitField<bool, 28, 1, uint32_t>; \
  using NegativeBigInt63Bit = base::BitField<bool, 29, 1, uint32_t>; \
  using OtherBigIntBit = base::BitField<bool, 30, 1, uint32_t>; \
  using WasmObjectBit = base::BitField<bool, 31, 1, uint32_t>; \
  enum Flag: uint32_t { \
    kNone = 0, \
    kUnusedPaddingField1 = uint32_t{1} << 0, \
    kOtherUnsigned31 = uint32_t{1} << 1, \
    kOtherUnsigned32 = uint32_t{1} << 2, \
    kOtherSigned32 = uint32_t{1} << 3, \
    kOtherNumber = uint32_t{1} << 4, \
    kOtherString = uint32_t{1} << 5, \
    kNegative31 = uint32_t{1} << 6, \
    kNull = uint32_t{1} << 7, \
    kUndefined = uint32_t{1} << 8, \
    kBoolean = uint32_t{1} << 9, \
    kUnsigned30 = uint32_t{1} << 10, \
    kMinusZero = uint32_t{1} << 11, \
    kNaN = uint32_t{1} << 12, \
    kSymbol = uint32_t{1} << 13, \
    kInternalizedString = uint32_t{1} << 14, \
    kOtherCallable = uint32_t{1} << 15, \
    kOtherObject = uint32_t{1} << 16, \
    kOtherUndetectable = uint32_t{1} << 17, \
    kCallableProxy = uint32_t{1} << 18, \
    kOtherProxy = uint32_t{1} << 19, \
    kCallableFunction = uint32_t{1} << 20, \
    kClassConstructor = uint32_t{1} << 21, \
    kBoundFunction = uint32_t{1} << 22, \
    kHole = uint32_t{1} << 23, \
    kOtherInternal = uint32_t{1} << 24, \
    kExternalPointer = uint32_t{1} << 25, \
    kArray = uint32_t{1} << 26, \
    kUnsignedBigInt63 = uint32_t{1} << 27, \
    kOtherUnsignedBigInt64 = uint32_t{1} << 28, \
    kNegativeBigInt63 = uint32_t{1} << 29, \
    kOtherBigInt = uint32_t{1} << 30, \
    kWasmObject = uint32_t{1} << 31, \
  }; \
  using Flags = base::Flags<Flag>; \
  static constexpr int kFlagCount = 32; \

#define DEFINE_TORQUE_GENERATED_TURBOFAN_TYPE_HIGH_BITS() \
  using SandboxedPointerBit = base::BitField<bool, 0, 1, uint32_t>; \
  enum Flag: uint32_t { \
    kNone = 0, \
    kSandboxedPointer = uint32_t{1} << 0, \
  }; \
  using Flags = base::Flags<Flag>; \
  static constexpr int kFlagCount = 1; \

#define DEFINE_TORQUE_GENERATED_TEST_BIT_FIELD_STRUCT() \
  using ABit = base::BitField<bool, 0, 1, uint8_t>; \
  using BBits = base::BitField<uint16_t, 1, 3, uint8_t>; \
  using CBits = base::BitField<uint32_t, 4, 3, uint8_t>; \
  using DBit = base::BitField<bool, 7, 1, uint8_t>; \

#define DEFINE_TORQUE_GENERATED_TEST_BIT_FIELD_STRUCT2() \
  using ABits = base::BitField<uintptr_t, 0, 5, uint32_t>; \
  using BBits = base::BitField<uintptr_t, 5, 6, uint32_t>; \

#define DEFINE_TORQUE_GENERATED_TEST_BIT_FIELD_STRUCT3() \
  using CBit = base::BitField<bool, 0, 1, uintptr_t>; \
  using DBits = base::BitField<uint32_t, 1, 9, uintptr_t>; \
  using EBits = base::BitField<uintptr_t, 10, 17, uintptr_t>; \

#define DEFINE_TORQUE_GENERATED_TEST_BIT_FIELD_STRUCT4() \
  using ABit = base::BitField<bool, 0, 1, uint32_t>; \
  using BBits = base::BitField<int32_t, 1, 3, uint32_t>; \
  using CBit = base::BitField<bool, 4, 1, uint32_t>; \

#define DEFINE_TORQUE_GENERATED_TEST_BIT_FIELD_STRUCT5() \
  using BBits = base::BitField<int32_t, 0, 19, uint32_t>; \
  using ABit = base::BitField<bool, 19, 1, uint32_t>; \
  using CBit = base::BitField<bool, 20, 1, uint32_t>; \

#define DEFINE_TORQUE_GENERATED_JS_DATE_TIME_FORMAT_FLAGS() \
  using HourCycleBits = base::BitField<JSDateTimeFormat::HourCycle, 0, 3, uint32_t>; \
  using DateStyleBits = base::BitField<JSDateTimeFormat::DateTimeStyle, 3, 3, uint32_t>; \
  using TimeStyleBits = base::BitField<JSDateTimeFormat::DateTimeStyle, 6, 3, uint32_t>; \
  using AltCalendarBit = base::BitField<bool, 9, 1, uint32_t>; \

#define DEFINE_TORQUE_GENERATED_JS_DISPLAY_NAMES_FLAGS() \
  using StyleBits = base::BitField<JSDisplayNames::Style, 0, 2, uint32_t>; \
  using FallbackBit = base::BitField<JSDisplayNames::Fallback, 2, 1, uint32_t>; \
  using LanguageDisplayBit = base::BitField<JSDisplayNames::LanguageDisplay, 3, 1, uint32_t>; \

#define DEFINE_TORQUE_GENERATED_JS_LIST_FORMAT_FLAGS() \
  using StyleBits = base::BitField<JSListFormat::Style, 0, 2, uint32_t>; \
  using TypeBits = base::BitField<JSListFormat::Type, 2, 2, uint32_t>; \

#define DEFINE_TORQUE_GENERATED_JS_PLURAL_RULES_FLAGS() \
  using TypeBit = base::BitField<JSPluralRules::Type, 0, 1, uint32_t>; \
  enum Flag: uint32_t { \
    kNone = 0, \
    kType = uint32_t{1} << 0, \
  }; \
  using Flags = base::Flags<Flag>; \
  static constexpr int kFlagCount = 1; \

#define DEFINE_TORQUE_GENERATED_JS_RELATIVE_TIME_FORMAT_FLAGS() \
  using NumericBit = base::BitField<JSRelativeTimeFormat::Numeric, 0, 1, uint32_t>; \
  enum Flag: uint32_t { \
    kNone = 0, \
    kNumeric = uint32_t{1} << 0, \
  }; \
  using Flags = base::Flags<Flag>; \
  static constexpr int kFlagCount = 1; \

#define DEFINE_TORQUE_GENERATED_JS_SEGMENT_ITERATOR_FLAGS() \
  using GranularityBits = base::BitField<JSSegmenter::Granularity, 0, 2, uint32_t>; \

#define DEFINE_TORQUE_GENERATED_JS_SEGMENTER_FLAGS() \
  using GranularityBits = base::BitField<JSSegmenter::Granularity, 0, 2, uint32_t>; \

#define DEFINE_TORQUE_GENERATED_JS_SEGMENTS_FLAGS() \
  using GranularityBits = base::BitField<JSSegmenter::Granularity, 0, 2, uint32_t>; \

}  // namespace internal
}  // namespace v8
#endif  // V8_GEN_TORQUE_GENERATED_BIT_FIELDS_H_
