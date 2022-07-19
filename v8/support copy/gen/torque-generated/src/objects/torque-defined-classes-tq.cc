#include "src/objects/torque-defined-classes-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=29&c=1
bool IsStrongDescriptorArray_NonInline(HeapObject o) {
  return o.IsStrongDescriptorArray();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedStrongDescriptorArray<StrongDescriptorArray, DescriptorArray>::StrongDescriptorArrayVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::StrongDescriptorArrayVerify(StrongDescriptorArray::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=759&c=1
bool IsInternalClass_NonInline(HeapObject o) {
  return o.IsInternalClass();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedInternalClass<InternalClass, HeapObject>::InternalClassVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::InternalClassVerify(InternalClass::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=825&c=1
bool IsSmiPair_NonInline(HeapObject o) {
  return o.IsSmiPair();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedSmiPair<SmiPair, HeapObject>::SmiPairVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::SmiPairVerify(SmiPair::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=926&c=1
bool IsSmiBox_NonInline(HeapObject o) {
  return o.IsSmiBox();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedSmiBox<SmiBox, HeapObject>::SmiBoxVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::SmiBoxVerify(SmiBox::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1177&c=1
bool IsExportedSubClassBase_NonInline(HeapObject o) {
  return o.IsExportedSubClassBase();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedExportedSubClassBase<ExportedSubClassBase, HeapObject>::ExportedSubClassBaseVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::ExportedSubClassBaseVerify(ExportedSubClassBase::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1170&c=1
bool IsExportedSubClass_NonInline(HeapObject o) {
  return o.IsExportedSubClass();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedExportedSubClass<ExportedSubClass, ExportedSubClassBase>::ExportedSubClassVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::ExportedSubClassVerify(ExportedSubClass::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1183&c=1
bool IsAbstractInternalClass_NonInline(HeapObject o) {
  return o.IsAbstractInternalClass();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedAbstractInternalClass<AbstractInternalClass, HeapObject>::AbstractInternalClassVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::AbstractInternalClassVerify(AbstractInternalClass::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1187&c=1
bool IsAbstractInternalClassSubclass1_NonInline(HeapObject o) {
  return o.IsAbstractInternalClassSubclass1();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedAbstractInternalClassSubclass1<AbstractInternalClassSubclass1, AbstractInternalClass>::AbstractInternalClassSubclass1Verify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::AbstractInternalClassSubclass1Verify(AbstractInternalClassSubclass1::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1189&c=1
bool IsAbstractInternalClassSubclass2_NonInline(HeapObject o) {
  return o.IsAbstractInternalClassSubclass2();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedAbstractInternalClassSubclass2<AbstractInternalClassSubclass2, AbstractInternalClass>::AbstractInternalClassSubclass2Verify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::AbstractInternalClassSubclass2Verify(AbstractInternalClassSubclass2::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1191&c=1
bool IsInternalClassWithSmiElements_NonInline(HeapObject o) {
  return o.IsInternalClassWithSmiElements();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedInternalClassWithSmiElements<InternalClassWithSmiElements, FixedArrayBase>::InternalClassWithSmiElementsVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::InternalClassWithSmiElementsVerify(InternalClassWithSmiElements::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1202&c=1
bool IsInternalClassWithStructElements_NonInline(HeapObject o) {
  return o.IsInternalClassWithStructElements();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedInternalClassWithStructElements<InternalClassWithStructElements, HeapObject>::InternalClassWithStructElementsVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::InternalClassWithStructElementsVerify(InternalClassWithStructElements::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1282&c=1
bool IsExportedSubClass2_NonInline(HeapObject o) {
  return o.IsExportedSubClass2();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedExportedSubClass2<ExportedSubClass2, ExportedSubClassBase>::ExportedSubClass2Verify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::ExportedSubClass2Verify(ExportedSubClass2::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=17&c=1
bool IsSortState_NonInline(HeapObject o) {
  return o.IsSortState();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedSortState<SortState, HeapObject>::SortStateVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::SortStateVerify(SortState::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
