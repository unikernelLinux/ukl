#ifndef V8_GEN_TORQUE_GENERATED_TEST_TORQUE_TEST_TORQUE_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_TEST_TORQUE_TEST_TORQUE_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=12&c=1
TNode<BoolT> ElementsKindTestHelper1_0(compiler::CodeAssemblerState* state_, ElementsKind p_kind);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=22&c=1
bool ElementsKindTestHelper2_0(compiler::CodeAssemblerState* state_, ElementsKind p_kind);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=27&c=1
void LabelTestHelper1_0(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label1);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=32&c=1
void LabelTestHelper2_0(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label2, compiler::TypedCodeAssemblerVariable<Smi>* label_Label2_parameter_0);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=37&c=1
void LabelTestHelper3_0(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label3, compiler::TypedCodeAssemblerVariable<Oddball>* label_Label3_parameter_0, compiler::TypedCodeAssemblerVariable<Smi>* label_Label3_parameter_1);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=42&c=1
void TestConstexpr1_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=48&c=1
void TestConstexprIf_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=55&c=1
void TestConstexprReturn_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=67&c=1
TNode<Oddball> TestGotoLabel_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=76&c=1
TNode<Oddball> TestGotoLabelWithOneParameter_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=86&c=1
TNode<Oddball> TestGotoLabelWithTwoParameters_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=105&c=1
void TestBuiltinSpecialization_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=113&c=1
void LabelTestHelper4_0(compiler::CodeAssemblerState* state_, bool p_flag, compiler::CodeAssemblerLabel* label_Label4, compiler::CodeAssemblerLabel* label_Label5);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=122&c=1
TNode<BoolT> CallLabelTestHelper4_0(compiler::CodeAssemblerState* state_, bool p_flag);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=132&c=1
TNode<Oddball> TestPartiallyUnusedLabel_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=148&c=1
TNode<Object> GenericMacroTest_Object_0(compiler::CodeAssemblerState* state_, TNode<Object> p_param2);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=157&c=1
TNode<Object> GenericMacroTestWithLabels_Object_0(compiler::CodeAssemblerState* state_, TNode<Object> p_param2, compiler::CodeAssemblerLabel* label_Y);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=162&c=1
void TestMacroSpecialization_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=188&c=1
TNode<Oddball> TestFunctionPointers_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=197&c=1
TNode<Oddball> TestVariableRedeclaration_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=204&c=1
TNode<Smi> TestTernaryOperator_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_x);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=210&c=1
void TestFunctionPointerToGeneric_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=222&c=1
TNode<BuiltinPtr> TestTypeAlias_0(compiler::CodeAssemblerState* state_, TNode<BuiltinPtr> p_x);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=227&c=1
TNode<Oddball> TestUnsafeCast_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Number> p_n);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=238&c=1
void TestHexLiteral_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=244&c=1
void TestLargeIntegerLiterals_0(compiler::CodeAssemblerState* state_, TNode<Context> p_c);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=250&c=1
void TestMultilineAssert_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=258&c=1
void TestNewlineInString_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=263&c=1
int31_t kConstexprConst_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=264&c=1
TNode<IntPtrT> kIntptrConst_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=265&c=1
TNode<Smi> kSmiConst_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=267&c=1
void TestModuleConstBindings_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=274&c=1
void TestLocalConstBindings_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=300&c=1
TNode<Smi> TestStruct1_0(compiler::CodeAssemblerState* state_, TorqueStructTestStructA_0 p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=305&c=1
TorqueStructTestStructA_0 TestStruct2_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=314&c=1
TorqueStructTestStructA_0 TestStruct3_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=340&c=1
TorqueStructTestStructC_0 TestStruct4_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=349&c=1
void CallTestStructInLabel_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=358&c=1
void TestForLoop_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=457&c=1
void TestSubtyping_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_x);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=474&c=1
TNode<Int32T> TypeswitchExample_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_x);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=503&c=1
void TestTypeswitch_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=511&c=1
void TestTypeswitchAsanLsanFailure_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_obj);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=533&c=1
void TestGenericOverload_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=541&c=1
void TestEquality_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=551&c=1
TNode<BoolT> TestOrAnd_0(compiler::CodeAssemblerState* state_, TNode<BoolT> p_x, TNode<BoolT> p_y, TNode<BoolT> p_z);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=556&c=1
TNode<BoolT> TestAndOr_0(compiler::CodeAssemblerState* state_, TNode<BoolT> p_x, TNode<BoolT> p_y, TNode<BoolT> p_z);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=561&c=1
void TestLogicalOperators_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=581&c=1
TNode<Smi> TestCall_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_i, compiler::CodeAssemblerLabel* label_A);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=587&c=1
void TestOtherwiseWithCode1_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=599&c=1
void TestOtherwiseWithCode2_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=609&c=1
void TestOtherwiseWithCode3_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=618&c=1
void TestForwardLabel_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=629&c=1
void TestQualifiedAccess_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=635&c=1
TNode<Smi> TestCatch1_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=646&c=1
void TestCatch2Wrapper_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=651&c=1
TNode<Smi> TestCatch2_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=662&c=1
void TestCatch3WrapperWithLabel_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, compiler::CodeAssemblerLabel* label__Abort);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=668&c=1
TNode<Smi> TestCatch3_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=685&c=1
void TestIterator_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Map> p_map);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=704&c=1
void TestFrame1_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=720&c=1
void TestNew_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=744&c=1
void TestStructConstructor_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=759&c=1
TNode<InternalClass> Cast_InternalClass_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=769&c=1
TNode<InternalClass> NewInternalClass_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_x);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=773&c=1
void TestInternalClass_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=792&c=1
void TestConstInStructs_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=803&c=1
void TestParentFrameArguments_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=819&c=1
TNode<Object> TestNewFixedArrayFromSpread_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=825&c=1
TNode<SmiPair> Cast_SmiPair_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=839&c=1
void TestReferences_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=850&c=1
void TestSlices_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=878&c=1
TNode<Oddball> TestSliceEnumeration_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=907&c=1
void TestStaticAssert_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=926&c=1
TNode<SmiBox> Cast_SmiBox_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=935&c=1
void TestLoadEliminationFixed_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=949&c=1
void TestLoadEliminationVariable_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=961&c=1
TNode<Smi> TestRedundantArrayElementCheck_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=976&c=1
TNode<Smi> TestRedundantSmiCheck_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=995&c=1
TNode<IntPtrT> TestGenericStruct1_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1016&c=1
TorqueStructTestTuple_TestTuple_intptr_Smi_TestTuple_Smi_intptr_0 TestGenericStruct2_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1028&c=1
TNode<BoolT> BranchAndWriteResult_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_x, TNode<SmiBox> p_box);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1038&c=1
void TestBranchOnBoolOptimization_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Smi> p_input);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1058&c=1
void TestBitFieldLoad_0(compiler::CodeAssemblerState* state_, TNode<Uint8T> p_val, TNode<BoolT> p_expectedA, TNode<Uint16T> p_expectedB, TNode<Uint32T> p_expectedC, TNode<BoolT> p_expectedD);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1068&c=1
void TestBitFieldStore_0(compiler::CodeAssemblerState* state_, TNode<Uint8T> p_val);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1087&c=1
void TestBitFieldInit_0(compiler::CodeAssemblerState* state_, TNode<BoolT> p_a, TNode<Uint16T> p_b, TNode<Uint32T> p_c, TNode<BoolT> p_d);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1105&c=1
void TestBitFieldUintptrOps_0(compiler::CodeAssemblerState* state_, TNode<Uint32T> p_val2, TNode<UintPtrT> p_val3);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1146&c=1
void TestBitFieldMultipleFlags_0(compiler::CodeAssemblerState* state_, TNode<BoolT> p_a, TNode<Int32T> p_b, TNode<BoolT> p_c);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1170&c=1
TNode<ExportedSubClass> Cast_ExportedSubClass_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1177&c=1
TNode<ExportedSubClassBase> Cast_ExportedSubClassBase_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1183&c=1
TNode<AbstractInternalClass> Cast_AbstractInternalClass_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1187&c=1
TNode<AbstractInternalClassSubclass1> Cast_AbstractInternalClassSubclass1_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1189&c=1
TNode<AbstractInternalClassSubclass2> Cast_AbstractInternalClassSubclass2_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1191&c=1
TNode<InternalClassWithSmiElements> Cast_InternalClassWithSmiElements_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1202&c=1
TNode<InternalClassWithStructElements> Cast_InternalClassWithStructElements_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1226&c=1
void TestFullyGeneratedClassWithElements_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1276&c=1
TNode<ExportedSubClass> TestFullyGeneratedClassFromCpp_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1282&c=1
TNode<ExportedSubClass2> Cast_ExportedSubClass2_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1289&c=1
void TestGeneratedCastOperators_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1323&c=1
void TestNewPretenured_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1330&c=1
void TestWord8Phi_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1343&c=1
void TestOffHeapSlice_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_ptr, TNode<IntPtrT> p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1366&c=1
void TestCallMultiReturnBuiltin_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1373&c=1
TNode<Smi> TestRunLazyTwice_0(compiler::CodeAssemblerState* state_, std::function<TNode<Smi>()> p_lazySmi);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1380&c=1
TNode<Smi> GetLazySmi_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1384&c=1
TNode<Smi> AddTwoSmiValues_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_a, TNode<Smi> p_b);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1388&c=1
TNode<Smi> AddSmiAndConstexprValues_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_a, int31_t p_b);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1392&c=1
void TestCreateLazyNodeFromTorque_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=765&c=3
TNode<Smi> LoadInternalClassA_0(compiler::CodeAssemblerState* state_, TNode<InternalClass> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=765&c=3
void StoreInternalClassA_0(compiler::CodeAssemblerState* state_, TNode<InternalClass> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=766&c=3
TNode<Number> LoadInternalClassB_0(compiler::CodeAssemblerState* state_, TNode<InternalClass> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=766&c=3
void StoreInternalClassB_0(compiler::CodeAssemblerState* state_, TNode<InternalClass> p_o, TNode<Number> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=760&c=3
void Method_InternalClass_Flip_0(compiler::CodeAssemblerState* state_, TNode<InternalClass> p_this, compiler::CodeAssemblerLabel* label_NotASmi);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=829&c=3
TNode<Smi> LoadSmiPairA_0(compiler::CodeAssemblerState* state_, TNode<SmiPair> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=829&c=3
void StoreSmiPairA_0(compiler::CodeAssemblerState* state_, TNode<SmiPair> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=830&c=3
TNode<Smi> LoadSmiPairB_0(compiler::CodeAssemblerState* state_, TNode<SmiPair> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=830&c=3
void StoreSmiPairB_0(compiler::CodeAssemblerState* state_, TNode<SmiPair> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=826&c=3
TorqueStructReference_Smi_0 Method_SmiPair_GetA_0(compiler::CodeAssemblerState* state_, TNode<SmiPair> p_this);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=927&c=3
TNode<Smi> LoadSmiBoxValue_0(compiler::CodeAssemblerState* state_, TNode<SmiBox> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=927&c=3
void StoreSmiBoxValue_0(compiler::CodeAssemblerState* state_, TNode<SmiBox> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=928&c=3
TNode<Smi> LoadSmiBoxUnrelated_0(compiler::CodeAssemblerState* state_, TNode<SmiBox> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=928&c=3
void StoreSmiBoxUnrelated_0(compiler::CodeAssemblerState* state_, TNode<SmiBox> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1179&c=3
TNode<HeapObject> LoadExportedSubClassBaseA_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClassBase> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1179&c=3
void StoreExportedSubClassBaseA_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClassBase> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1180&c=3
TNode<HeapObject> LoadExportedSubClassBaseB_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClassBase> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1180&c=3
void StoreExportedSubClassBaseB_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClassBase> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1172&c=3
TNode<Int32T> LoadExportedSubClassCField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1172&c=3
void StoreExportedSubClassCField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass> p_o, TNode<Int32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1173&c=3
TNode<Int32T> LoadExportedSubClassDField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1173&c=3
void StoreExportedSubClassDField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass> p_o, TNode<Int32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1174&c=3
TNode<Smi> LoadExportedSubClassEField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1174&c=3
void StoreExportedSubClassEField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1192&c=3
TNode<Smi> LoadInternalClassWithSmiElementsData_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithSmiElements> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1192&c=3
void StoreInternalClassWithSmiElementsData_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithSmiElements> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1193&c=3
TNode<Oddball> LoadInternalClassWithSmiElementsObject_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithSmiElements> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1193&c=3
void StoreInternalClassWithSmiElementsObject_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithSmiElements> p_o, TNode<Oddball> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1194&c=3
TorqueStructSlice_Smi_MutableReference_Smi_0 FieldSliceInternalClassWithSmiElementsEntries_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithSmiElements> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1194&c=3
TNode<Smi> LoadInternalClassWithSmiElementsEntries_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithSmiElements> p_o, TNode<IntPtrT> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1194&c=3
void StoreInternalClassWithSmiElementsEntries_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithSmiElements> p_o, TNode<IntPtrT> p_i, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1203&c=3
TNode<Int32T> LoadInternalClassWithStructElementsDummy1_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1203&c=3
void StoreInternalClassWithStructElementsDummy1_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o, TNode<Int32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1204&c=3
TNode<Int32T> LoadInternalClassWithStructElementsDummy2_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1204&c=3
void StoreInternalClassWithStructElementsDummy2_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o, TNode<Int32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1205&c=9
TNode<Smi> LoadInternalClassWithStructElementsCount_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1206&c=3
TNode<Smi> LoadInternalClassWithStructElementsData_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1206&c=3
void StoreInternalClassWithStructElementsData_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1207&c=3
TNode<Object> LoadInternalClassWithStructElementsObject_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1207&c=3
void StoreInternalClassWithStructElementsObject_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1208&c=3
TorqueStructSlice_Smi_MutableReference_Smi_0 FieldSliceInternalClassWithStructElementsEntries_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1208&c=3
TNode<Smi> LoadInternalClassWithStructElementsEntries_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o, TNode<IntPtrT> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1208&c=3
void StoreInternalClassWithStructElementsEntries_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o, TNode<IntPtrT> p_i, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1209&c=3
TorqueStructSlice_InternalClassStructElement_MutableReference_InternalClassStructElement_0 FieldSliceInternalClassWithStructElementsMoreEntries_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1284&c=3
TNode<Int32T> LoadExportedSubClass2XField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass2> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1284&c=3
void StoreExportedSubClass2XField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass2> p_o, TNode<Int32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1285&c=3
TNode<Int32T> LoadExportedSubClass2YField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass2> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1285&c=3
void StoreExportedSubClass2YField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass2> p_o, TNode<Int32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1286&c=3
TNode<Smi> LoadExportedSubClass2ZField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass2> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1286&c=3
void StoreExportedSubClass2ZField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass2> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=166&c=11
TNode<Object> GenericMacroTest_Smi_0(compiler::CodeAssemblerState* state_, TNode<Smi> p__param);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=171&c=12
TNode<Object> GenericMacroTestWithLabels_Smi_0(compiler::CodeAssemblerState* state_, TNode<Smi> p__param, compiler::CodeAssemblerLabel* label__X);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=477&c=15
TNode<Object> IncrementIfSmi_NumberOrFixedArray_0(compiler::CodeAssemblerState* state_, TNode<Object> p_x);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=478&c=5
TNode<FixedArray> Cast_FixedArray_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=537&c=9
TNode<Smi> ExampleGenericOverload_Smi_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=538&c=25
TNode<Object> ExampleGenericOverload_Object_0(compiler::CodeAssemblerState* state_, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=632&c=10
TNode<BoolT> Is_JSArray_Smi_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Smi> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=759&c=1
TNode<InternalClass> DownCastForTorqueClass_InternalClass_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=822&c=10
void InitializeFieldsFromIterator_Object_TestIterator_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_Object_MutableReference_Object_0 p_target, TorqueStructTestIterator_0 p_originIterator);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=825&c=1
TNode<SmiPair> DownCastForTorqueClass_SmiPair_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=845&c=3
void Swap_Smi_0(compiler::CodeAssemblerState* state_, TorqueStructReference_Smi_0 p_a, TorqueStructReference_Smi_0 p_b);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=926&c=1
TNode<SmiBox> DownCastForTorqueClass_SmiBox_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1020&c=24
TorqueStructTestTuple_Smi_intptr_0 TupleSwap_intptr_Smi_0(compiler::CodeAssemblerState* state_, TorqueStructTestTuple_intptr_Smi_0 p_tuple);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1170&c=1
TNode<ExportedSubClass> DownCastForTorqueClass_ExportedSubClass_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1177&c=1
TNode<ExportedSubClassBase> DownCastForTorqueClass_ExportedSubClassBase_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1183&c=1
TNode<AbstractInternalClass> DownCastForTorqueClass_AbstractInternalClass_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1187&c=1
TNode<AbstractInternalClassSubclass1> DownCastForTorqueClass_AbstractInternalClassSubclass1_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1189&c=1
TNode<AbstractInternalClassSubclass2> DownCastForTorqueClass_AbstractInternalClassSubclass2_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1191&c=1
TNode<InternalClassWithSmiElements> DownCastForTorqueClass_InternalClassWithSmiElements_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1202&c=1
TNode<InternalClassWithStructElements> DownCastForTorqueClass_InternalClassWithStructElements_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1231&c=19
void InitializeFieldsFromIterator_Smi_SmiGeneratorIterator_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_Smi_MutableReference_Smi_0 p_target, TorqueStructSmiGeneratorIterator_0 p_originIterator);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1248&c=19
void InitializeFieldsFromIterator_InternalClassStructElement_InternalClassStructElementGeneratorIterator_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_InternalClassStructElement_MutableReference_InternalClassStructElement_0 p_target, TorqueStructInternalClassStructElementGeneratorIterator_0 p_originIterator);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1282&c=1
TNode<ExportedSubClass2> DownCastForTorqueClass_ExportedSubClass2_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1299&c=10
TNode<BoolT> Is_ExportedSubClassBase_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1300&c=10
TNode<BoolT> Is_ExportedSubClass_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1301&c=11
TNode<BoolT> Is_ExportedSubClass2_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1310&c=11
TNode<BoolT> Is_JSSloppyArgumentsObject_JSFunction_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSFunction> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1312&c=27
TNode<FixedArray> NewFixedArray_ConstantIterator_TheHole_0(compiler::CodeAssemblerState* state_, TNode<IntPtrT> p_length, TorqueStructConstantIterator_TheHole_0 p_it);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1313&c=20
TNode<SloppyArgumentsElements> NewSloppyArgumentsElements_ConstantIterator_TheHole_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_length, TNode<Context> p_context, TNode<FixedArray> p_arguments, TorqueStructConstantIterator_TheHole_0 p_it);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1317&c=10
TNode<BoolT> Is_JSArgumentsObject_JSSloppyArgumentsObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSArgumentsObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1326&c=10
TNode<BoolT> Is_ExportedSubClassBase_ExportedSubClassBase_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<ExportedSubClassBase> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1345&c=47
TNode<String> Convert_String_constexpr_string_0(compiler::CodeAssemblerState* state_, const char* p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1345&c=18
TNode<SeqOneByteString> UnsafeCast_SeqOneByteString_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1347&c=10
TorqueStructReference_char8_0 NewOffHeapReference_char8_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_ptr);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1209&c=3
TorqueStructSlice_InternalClassStructElement_MutableReference_InternalClassStructElement_0 NewMutableSlice_InternalClassStructElement_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset, TNode<IntPtrT> p_length);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_TEST_TORQUE_TEST_TORQUE_TQ_CSA_H_
