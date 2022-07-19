#ifndef V8_GEN_TORQUE_GENERATED_VISITOR_LISTS_H_
#define V8_GEN_TORQUE_GENERATED_VISITOR_LISTS_H_

#define TORQUE_INSTANCE_TYPE_TO_BODY_DESCRIPTOR_LIST(V)\
V(FIXED_ARRAY_TYPE,FixedArray)\
V(WEAK_FIXED_ARRAY_TYPE,WeakFixedArray)\
V(SLOPPY_ARGUMENTS_ELEMENTS_TYPE,SloppyArgumentsElements)\
V(SCOPE_INFO_TYPE,ScopeInfo)\
V(DESCRIPTOR_ARRAY_TYPE,DescriptorArray)\
V(STRONG_DESCRIPTOR_ARRAY_TYPE,StrongDescriptorArray)\
V(FEEDBACK_VECTOR_TYPE,FeedbackVector)\
V(WEAK_ARRAY_LIST_TYPE,WeakArrayList)\
V(MEGA_DOM_HANDLER_TYPE,MegaDomHandler)\
V(SHARED_FUNCTION_INFO_TYPE,SharedFunctionInfo)\
V(UNCOMPILED_DATA_WITHOUT_PREPARSE_DATA_TYPE,UncompiledDataWithoutPreparseData)\
V(UNCOMPILED_DATA_WITH_PREPARSE_DATA_TYPE,UncompiledDataWithPreparseData)\
V(UNCOMPILED_DATA_WITHOUT_PREPARSE_DATA_WITH_JOB_TYPE,UncompiledDataWithoutPreparseDataWithJob)\
V(UNCOMPILED_DATA_WITH_PREPARSE_DATA_AND_JOB_TYPE,UncompiledDataWithPreparseDataAndJob)\
V(ON_HEAP_BASIC_BLOCK_PROFILER_DATA_TYPE,OnHeapBasicBlockProfilerData)\
V(TURBOFAN_BITSET_TYPE_TYPE,TurbofanBitsetType)\
V(TURBOFAN_UNION_TYPE_TYPE,TurbofanUnionType)\
V(TURBOFAN_RANGE_TYPE_TYPE,TurbofanRangeType)\
V(TURBOFAN_HEAP_CONSTANT_TYPE_TYPE,TurbofanHeapConstantType)\
V(TURBOFAN_OTHER_NUMBER_CONSTANT_TYPE_TYPE,TurbofanOtherNumberConstantType)\
V(INTERNAL_CLASS_TYPE,InternalClass)\
V(SMI_PAIR_TYPE,SmiPair)\
V(SMI_BOX_TYPE,SmiBox)\
V(EXPORTED_SUB_CLASS_BASE_TYPE,ExportedSubClassBase)\
V(EXPORTED_SUB_CLASS_TYPE,ExportedSubClass)\
V(ABSTRACT_INTERNAL_CLASS_SUBCLASS1_TYPE,AbstractInternalClassSubclass1)\
V(ABSTRACT_INTERNAL_CLASS_SUBCLASS2_TYPE,AbstractInternalClassSubclass2)\
V(INTERNAL_CLASS_WITH_SMI_ELEMENTS_TYPE,InternalClassWithSmiElements)\
V(INTERNAL_CLASS_WITH_STRUCT_ELEMENTS_TYPE,InternalClassWithStructElements)\
V(EXPORTED_SUB_CLASS2_TYPE,ExportedSubClass2)\
V(SORT_STATE_TYPE,SortState)\

#define TORQUE_DATA_ONLY_VISITOR_ID_LIST(V)\

#define TORQUE_POINTER_VISITOR_ID_LIST(V)\
V(Context)\
V(FixedArray)\
V(WeakFixedArray)\
V(SloppyArgumentsElements)\
V(ScopeInfo)\
V(DescriptorArray)\
V(StrongDescriptorArray)\
V(FeedbackVector)\
V(WeakArrayList)\
V(MegaDomHandler)\
V(SharedFunctionInfo)\
V(UncompiledDataWithoutPreparseData)\
V(UncompiledDataWithPreparseData)\
V(UncompiledDataWithoutPreparseDataWithJob)\
V(UncompiledDataWithPreparseDataAndJob)\
V(OnHeapBasicBlockProfilerData)\
V(ConsString)\
V(SeqOneByteString)\
V(SeqTwoByteString)\
V(SlicedString)\
V(ThinString)\
V(TurbofanBitsetType)\
V(TurbofanUnionType)\
V(TurbofanRangeType)\
V(TurbofanHeapConstantType)\
V(TurbofanOtherNumberConstantType)\
V(InternalClass)\
V(SmiPair)\
V(SmiBox)\
V(ExportedSubClassBase)\
V(ExportedSubClass)\
V(AbstractInternalClassSubclass1)\
V(AbstractInternalClassSubclass2)\
V(InternalClassWithSmiElements)\
V(InternalClassWithStructElements)\
V(ExportedSubClass2)\
V(SortState)\

#endif  // V8_GEN_TORQUE_GENERATED_VISITOR_LISTS_H_
