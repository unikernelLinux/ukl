#include "src/heap/factory-base.h"
#include "src/heap/factory-base-inl.h"
#include "src/heap/heap.h"
#include "src/heap/heap-inl.h"
#include "src/execution/isolate.h"
#include "src/objects/all-objects-inl.h"

namespace v8 {
namespace internal {

template <typename Impl>
Handle<SloppyArgumentsElements> TorqueGeneratedFactory<Impl>::NewSloppyArgumentsElements(int length, Handle<Context> context, Handle<FixedArray> arguments, AllocationType allocation_type) {
 int size = TorqueGeneratedSloppyArgumentsElements<SloppyArgumentsElements, FixedArrayBase>::SizeFor(length);
  Map map = factory()->read_only_roots().sloppy_arguments_elements_map();  HeapObject raw_object =
    factory()->AllocateRawWithImmortalMap(size, allocation_type, map);
  SloppyArgumentsElements result = SloppyArgumentsElements::cast(raw_object);
  DisallowGarbageCollection no_gc;  WriteBarrierMode write_barrier_mode =
     allocation_type == AllocationType::kYoung
     ? SKIP_WRITE_BARRIER : UPDATE_WRITE_BARRIER;
  USE(write_barrier_mode);
  result.TorqueGeneratedClass::set_length(length);
  result.TorqueGeneratedClass::set_context(*context, write_barrier_mode);
  result.TorqueGeneratedClass::set_arguments(*arguments, write_barrier_mode);
  return handle(result, factory()->isolate());
}

template EXPORT_TEMPLATE_DEFINE(V8_EXPORT_PRIVATE) Handle<SloppyArgumentsElements>TorqueGeneratedFactory<Factory>::NewSloppyArgumentsElements(int length, Handle<Context> context, Handle<FixedArray> arguments, AllocationType allocation_type);
template EXPORT_TEMPLATE_DEFINE(V8_EXPORT_PRIVATE) Handle<SloppyArgumentsElements>TorqueGeneratedFactory<LocalFactory>::NewSloppyArgumentsElements(int length, Handle<Context> context, Handle<FixedArray> arguments, AllocationType allocation_type);


template <typename Impl>
Handle<UncompiledDataWithoutPreparseData> TorqueGeneratedFactory<Impl>::NewUncompiledDataWithoutPreparseData(Handle<String> inferred_name, int32_t start_position, int32_t end_position, AllocationType allocation_type) {
 int size = TorqueGeneratedUncompiledDataWithoutPreparseData<UncompiledDataWithoutPreparseData, UncompiledData>::SizeFor();
  Map map = factory()->read_only_roots().uncompiled_data_without_preparse_data_map();  HeapObject raw_object =
    factory()->AllocateRawWithImmortalMap(size, allocation_type, map);
  UncompiledDataWithoutPreparseData result = UncompiledDataWithoutPreparseData::cast(raw_object);
  DisallowGarbageCollection no_gc;  WriteBarrierMode write_barrier_mode =
     allocation_type == AllocationType::kYoung
     ? SKIP_WRITE_BARRIER : UPDATE_WRITE_BARRIER;
  USE(write_barrier_mode);
  result.TorqueGeneratedClass::set_inferred_name(*inferred_name, write_barrier_mode);
  result.TorqueGeneratedClass::set_start_position(start_position);
  result.TorqueGeneratedClass::set_end_position(end_position);
  return handle(result, factory()->isolate());
}

template EXPORT_TEMPLATE_DEFINE(V8_EXPORT_PRIVATE) Handle<UncompiledDataWithoutPreparseData>TorqueGeneratedFactory<Factory>::NewUncompiledDataWithoutPreparseData(Handle<String> inferred_name, int32_t start_position, int32_t end_position, AllocationType allocation_type);
template EXPORT_TEMPLATE_DEFINE(V8_EXPORT_PRIVATE) Handle<UncompiledDataWithoutPreparseData>TorqueGeneratedFactory<LocalFactory>::NewUncompiledDataWithoutPreparseData(Handle<String> inferred_name, int32_t start_position, int32_t end_position, AllocationType allocation_type);


template <typename Impl>
Handle<UncompiledDataWithPreparseData> TorqueGeneratedFactory<Impl>::NewUncompiledDataWithPreparseData(Handle<String> inferred_name, int32_t start_position, int32_t end_position, Handle<PreparseData> preparse_data, AllocationType allocation_type) {
 int size = TorqueGeneratedUncompiledDataWithPreparseData<UncompiledDataWithPreparseData, UncompiledData>::SizeFor();
  Map map = factory()->read_only_roots().uncompiled_data_with_preparse_data_map();  HeapObject raw_object =
    factory()->AllocateRawWithImmortalMap(size, allocation_type, map);
  UncompiledDataWithPreparseData result = UncompiledDataWithPreparseData::cast(raw_object);
  DisallowGarbageCollection no_gc;  WriteBarrierMode write_barrier_mode =
     allocation_type == AllocationType::kYoung
     ? SKIP_WRITE_BARRIER : UPDATE_WRITE_BARRIER;
  USE(write_barrier_mode);
  result.TorqueGeneratedClass::set_inferred_name(*inferred_name, write_barrier_mode);
  result.TorqueGeneratedClass::set_start_position(start_position);
  result.TorqueGeneratedClass::set_end_position(end_position);
  result.TorqueGeneratedClass::set_preparse_data(*preparse_data, write_barrier_mode);
  return handle(result, factory()->isolate());
}

template EXPORT_TEMPLATE_DEFINE(V8_EXPORT_PRIVATE) Handle<UncompiledDataWithPreparseData>TorqueGeneratedFactory<Factory>::NewUncompiledDataWithPreparseData(Handle<String> inferred_name, int32_t start_position, int32_t end_position, Handle<PreparseData> preparse_data, AllocationType allocation_type);
template EXPORT_TEMPLATE_DEFINE(V8_EXPORT_PRIVATE) Handle<UncompiledDataWithPreparseData>TorqueGeneratedFactory<LocalFactory>::NewUncompiledDataWithPreparseData(Handle<String> inferred_name, int32_t start_position, int32_t end_position, Handle<PreparseData> preparse_data, AllocationType allocation_type);


template <typename Impl>
Handle<UncompiledDataWithoutPreparseDataWithJob> TorqueGeneratedFactory<Impl>::NewUncompiledDataWithoutPreparseDataWithJob(Handle<String> inferred_name, int32_t start_position, int32_t end_position, Address job, AllocationType allocation_type) {
 int size = TorqueGeneratedUncompiledDataWithoutPreparseDataWithJob<UncompiledDataWithoutPreparseDataWithJob, UncompiledDataWithoutPreparseData>::SizeFor();
  Map map = factory()->read_only_roots().uncompiled_data_without_preparse_data_with_job_map();  HeapObject raw_object =
    factory()->AllocateRawWithImmortalMap(size, allocation_type, map);
  UncompiledDataWithoutPreparseDataWithJob result = UncompiledDataWithoutPreparseDataWithJob::cast(raw_object);
  DisallowGarbageCollection no_gc;  WriteBarrierMode write_barrier_mode =
     allocation_type == AllocationType::kYoung
     ? SKIP_WRITE_BARRIER : UPDATE_WRITE_BARRIER;
  USE(write_barrier_mode);
  result.TorqueGeneratedClass::set_inferred_name(*inferred_name, write_barrier_mode);
  result.TorqueGeneratedClass::set_start_position(start_position);
  result.TorqueGeneratedClass::set_end_position(end_position);
  result.TorqueGeneratedClass::set_job(job);
  return handle(result, factory()->isolate());
}

template EXPORT_TEMPLATE_DEFINE(V8_EXPORT_PRIVATE) Handle<UncompiledDataWithoutPreparseDataWithJob>TorqueGeneratedFactory<Factory>::NewUncompiledDataWithoutPreparseDataWithJob(Handle<String> inferred_name, int32_t start_position, int32_t end_position, Address job, AllocationType allocation_type);
template EXPORT_TEMPLATE_DEFINE(V8_EXPORT_PRIVATE) Handle<UncompiledDataWithoutPreparseDataWithJob>TorqueGeneratedFactory<LocalFactory>::NewUncompiledDataWithoutPreparseDataWithJob(Handle<String> inferred_name, int32_t start_position, int32_t end_position, Address job, AllocationType allocation_type);


template <typename Impl>
Handle<UncompiledDataWithPreparseDataAndJob> TorqueGeneratedFactory<Impl>::NewUncompiledDataWithPreparseDataAndJob(Handle<String> inferred_name, int32_t start_position, int32_t end_position, Handle<PreparseData> preparse_data, Address job, AllocationType allocation_type) {
 int size = TorqueGeneratedUncompiledDataWithPreparseDataAndJob<UncompiledDataWithPreparseDataAndJob, UncompiledDataWithPreparseData>::SizeFor();
  Map map = factory()->read_only_roots().uncompiled_data_with_preparse_data_and_job_map();  HeapObject raw_object =
    factory()->AllocateRawWithImmortalMap(size, allocation_type, map);
  UncompiledDataWithPreparseDataAndJob result = UncompiledDataWithPreparseDataAndJob::cast(raw_object);
  DisallowGarbageCollection no_gc;  WriteBarrierMode write_barrier_mode =
     allocation_type == AllocationType::kYoung
     ? SKIP_WRITE_BARRIER : UPDATE_WRITE_BARRIER;
  USE(write_barrier_mode);
  result.TorqueGeneratedClass::set_inferred_name(*inferred_name, write_barrier_mode);
  result.TorqueGeneratedClass::set_start_position(start_position);
  result.TorqueGeneratedClass::set_end_position(end_position);
  result.TorqueGeneratedClass::set_preparse_data(*preparse_data, write_barrier_mode);
  result.TorqueGeneratedClass::set_job(job);
  return handle(result, factory()->isolate());
}

template EXPORT_TEMPLATE_DEFINE(V8_EXPORT_PRIVATE) Handle<UncompiledDataWithPreparseDataAndJob>TorqueGeneratedFactory<Factory>::NewUncompiledDataWithPreparseDataAndJob(Handle<String> inferred_name, int32_t start_position, int32_t end_position, Handle<PreparseData> preparse_data, Address job, AllocationType allocation_type);
template EXPORT_TEMPLATE_DEFINE(V8_EXPORT_PRIVATE) Handle<UncompiledDataWithPreparseDataAndJob>TorqueGeneratedFactory<LocalFactory>::NewUncompiledDataWithPreparseDataAndJob(Handle<String> inferred_name, int32_t start_position, int32_t end_position, Handle<PreparseData> preparse_data, Address job, AllocationType allocation_type);


template <typename Impl>
Handle<OnHeapBasicBlockProfilerData> TorqueGeneratedFactory<Impl>::NewOnHeapBasicBlockProfilerData(Handle<ByteArray> block_ids, Handle<ByteArray> counts, Handle<String> name, Handle<String> schedule, Handle<String> code, int hash, AllocationType allocation_type) {
 int size = TorqueGeneratedOnHeapBasicBlockProfilerData<OnHeapBasicBlockProfilerData, HeapObject>::SizeFor();
  Map map = factory()->read_only_roots().on_heap_basic_block_profiler_data_map();  HeapObject raw_object =
    factory()->AllocateRawWithImmortalMap(size, allocation_type, map);
  OnHeapBasicBlockProfilerData result = OnHeapBasicBlockProfilerData::cast(raw_object);
  DisallowGarbageCollection no_gc;  WriteBarrierMode write_barrier_mode =
     allocation_type == AllocationType::kYoung
     ? SKIP_WRITE_BARRIER : UPDATE_WRITE_BARRIER;
  USE(write_barrier_mode);
  result.TorqueGeneratedClass::set_block_ids(*block_ids, write_barrier_mode);
  result.TorqueGeneratedClass::set_counts(*counts, write_barrier_mode);
  result.TorqueGeneratedClass::set_name(*name, write_barrier_mode);
  result.TorqueGeneratedClass::set_schedule(*schedule, write_barrier_mode);
  result.TorqueGeneratedClass::set_code(*code, write_barrier_mode);
  result.TorqueGeneratedClass::set_hash(hash);
  return handle(result, factory()->isolate());
}

template EXPORT_TEMPLATE_DEFINE(V8_EXPORT_PRIVATE) Handle<OnHeapBasicBlockProfilerData>TorqueGeneratedFactory<Factory>::NewOnHeapBasicBlockProfilerData(Handle<ByteArray> block_ids, Handle<ByteArray> counts, Handle<String> name, Handle<String> schedule, Handle<String> code, int hash, AllocationType allocation_type);
template EXPORT_TEMPLATE_DEFINE(V8_EXPORT_PRIVATE) Handle<OnHeapBasicBlockProfilerData>TorqueGeneratedFactory<LocalFactory>::NewOnHeapBasicBlockProfilerData(Handle<ByteArray> block_ids, Handle<ByteArray> counts, Handle<String> name, Handle<String> schedule, Handle<String> code, int hash, AllocationType allocation_type);


template <typename Impl>
Handle<TurbofanBitsetType> TorqueGeneratedFactory<Impl>::NewTurbofanBitsetType(uint32_t bitset_low, uint32_t bitset_high, AllocationType allocation_type) {
 int size = TorqueGeneratedTurbofanBitsetType<TurbofanBitsetType, TurbofanType>::SizeFor();
  Map map = factory()->read_only_roots().turbofan_bitset_type_map();  HeapObject raw_object =
    factory()->AllocateRawWithImmortalMap(size, allocation_type, map);
  TurbofanBitsetType result = TurbofanBitsetType::cast(raw_object);
  DisallowGarbageCollection no_gc;  WriteBarrierMode write_barrier_mode =
     allocation_type == AllocationType::kYoung
     ? SKIP_WRITE_BARRIER : UPDATE_WRITE_BARRIER;
  USE(write_barrier_mode);
  result.TorqueGeneratedClass::set_bitset_low(bitset_low);
  result.TorqueGeneratedClass::set_bitset_high(bitset_high);
  return handle(result, factory()->isolate());
}

template EXPORT_TEMPLATE_DEFINE(V8_EXPORT_PRIVATE) Handle<TurbofanBitsetType>TorqueGeneratedFactory<Factory>::NewTurbofanBitsetType(uint32_t bitset_low, uint32_t bitset_high, AllocationType allocation_type);
template EXPORT_TEMPLATE_DEFINE(V8_EXPORT_PRIVATE) Handle<TurbofanBitsetType>TorqueGeneratedFactory<LocalFactory>::NewTurbofanBitsetType(uint32_t bitset_low, uint32_t bitset_high, AllocationType allocation_type);


template <typename Impl>
Handle<TurbofanUnionType> TorqueGeneratedFactory<Impl>::NewTurbofanUnionType(Handle<TurbofanType> type1, Handle<TurbofanType> type2, AllocationType allocation_type) {
 int size = TorqueGeneratedTurbofanUnionType<TurbofanUnionType, TurbofanType>::SizeFor();
  Map map = factory()->read_only_roots().turbofan_union_type_map();  HeapObject raw_object =
    factory()->AllocateRawWithImmortalMap(size, allocation_type, map);
  TurbofanUnionType result = TurbofanUnionType::cast(raw_object);
  DisallowGarbageCollection no_gc;  WriteBarrierMode write_barrier_mode =
     allocation_type == AllocationType::kYoung
     ? SKIP_WRITE_BARRIER : UPDATE_WRITE_BARRIER;
  USE(write_barrier_mode);
  result.TorqueGeneratedClass::set_type1(*type1, write_barrier_mode);
  result.TorqueGeneratedClass::set_type2(*type2, write_barrier_mode);
  return handle(result, factory()->isolate());
}

template EXPORT_TEMPLATE_DEFINE(V8_EXPORT_PRIVATE) Handle<TurbofanUnionType>TorqueGeneratedFactory<Factory>::NewTurbofanUnionType(Handle<TurbofanType> type1, Handle<TurbofanType> type2, AllocationType allocation_type);
template EXPORT_TEMPLATE_DEFINE(V8_EXPORT_PRIVATE) Handle<TurbofanUnionType>TorqueGeneratedFactory<LocalFactory>::NewTurbofanUnionType(Handle<TurbofanType> type1, Handle<TurbofanType> type2, AllocationType allocation_type);


template <typename Impl>
Handle<TurbofanRangeType> TorqueGeneratedFactory<Impl>::NewTurbofanRangeType(double min, double max, AllocationType allocation_type) {
 int size = TorqueGeneratedTurbofanRangeType<TurbofanRangeType, TurbofanType>::SizeFor();
  Map map = factory()->read_only_roots().turbofan_range_type_map();  HeapObject raw_object =
    factory()->AllocateRawWithImmortalMap(size, allocation_type, map);
  TurbofanRangeType result = TurbofanRangeType::cast(raw_object);
  DisallowGarbageCollection no_gc;  WriteBarrierMode write_barrier_mode =
     allocation_type == AllocationType::kYoung
     ? SKIP_WRITE_BARRIER : UPDATE_WRITE_BARRIER;
  USE(write_barrier_mode);
  result.TorqueGeneratedClass::set_min(min);
  result.TorqueGeneratedClass::set_max(max);
  return handle(result, factory()->isolate());
}

template EXPORT_TEMPLATE_DEFINE(V8_EXPORT_PRIVATE) Handle<TurbofanRangeType>TorqueGeneratedFactory<Factory>::NewTurbofanRangeType(double min, double max, AllocationType allocation_type);
template EXPORT_TEMPLATE_DEFINE(V8_EXPORT_PRIVATE) Handle<TurbofanRangeType>TorqueGeneratedFactory<LocalFactory>::NewTurbofanRangeType(double min, double max, AllocationType allocation_type);


template <typename Impl>
Handle<TurbofanHeapConstantType> TorqueGeneratedFactory<Impl>::NewTurbofanHeapConstantType(Handle<HeapObject> constant, AllocationType allocation_type) {
 int size = TorqueGeneratedTurbofanHeapConstantType<TurbofanHeapConstantType, TurbofanType>::SizeFor();
  Map map = factory()->read_only_roots().turbofan_heap_constant_type_map();  HeapObject raw_object =
    factory()->AllocateRawWithImmortalMap(size, allocation_type, map);
  TurbofanHeapConstantType result = TurbofanHeapConstantType::cast(raw_object);
  DisallowGarbageCollection no_gc;  WriteBarrierMode write_barrier_mode =
     allocation_type == AllocationType::kYoung
     ? SKIP_WRITE_BARRIER : UPDATE_WRITE_BARRIER;
  USE(write_barrier_mode);
  result.TorqueGeneratedClass::set_constant(*constant, write_barrier_mode);
  return handle(result, factory()->isolate());
}

template EXPORT_TEMPLATE_DEFINE(V8_EXPORT_PRIVATE) Handle<TurbofanHeapConstantType>TorqueGeneratedFactory<Factory>::NewTurbofanHeapConstantType(Handle<HeapObject> constant, AllocationType allocation_type);
template EXPORT_TEMPLATE_DEFINE(V8_EXPORT_PRIVATE) Handle<TurbofanHeapConstantType>TorqueGeneratedFactory<LocalFactory>::NewTurbofanHeapConstantType(Handle<HeapObject> constant, AllocationType allocation_type);


template <typename Impl>
Handle<TurbofanOtherNumberConstantType> TorqueGeneratedFactory<Impl>::NewTurbofanOtherNumberConstantType(double constant, AllocationType allocation_type) {
 int size = TorqueGeneratedTurbofanOtherNumberConstantType<TurbofanOtherNumberConstantType, TurbofanType>::SizeFor();
  Map map = factory()->read_only_roots().turbofan_other_number_constant_type_map();  HeapObject raw_object =
    factory()->AllocateRawWithImmortalMap(size, allocation_type, map);
  TurbofanOtherNumberConstantType result = TurbofanOtherNumberConstantType::cast(raw_object);
  DisallowGarbageCollection no_gc;  WriteBarrierMode write_barrier_mode =
     allocation_type == AllocationType::kYoung
     ? SKIP_WRITE_BARRIER : UPDATE_WRITE_BARRIER;
  USE(write_barrier_mode);
  result.TorqueGeneratedClass::set_constant(constant);
  return handle(result, factory()->isolate());
}

template EXPORT_TEMPLATE_DEFINE(V8_EXPORT_PRIVATE) Handle<TurbofanOtherNumberConstantType>TorqueGeneratedFactory<Factory>::NewTurbofanOtherNumberConstantType(double constant, AllocationType allocation_type);
template EXPORT_TEMPLATE_DEFINE(V8_EXPORT_PRIVATE) Handle<TurbofanOtherNumberConstantType>TorqueGeneratedFactory<LocalFactory>::NewTurbofanOtherNumberConstantType(double constant, AllocationType allocation_type);


template <typename Impl>
Handle<ExportedSubClassBase> TorqueGeneratedFactory<Impl>::NewExportedSubClassBase(Handle<HeapObject> a, Handle<HeapObject> b, AllocationType allocation_type) {
 int size = TorqueGeneratedExportedSubClassBase<ExportedSubClassBase, HeapObject>::SizeFor();
  Map map = factory()->read_only_roots().exported_sub_class_base_map();  HeapObject raw_object =
    factory()->AllocateRawWithImmortalMap(size, allocation_type, map);
  ExportedSubClassBase result = ExportedSubClassBase::cast(raw_object);
  DisallowGarbageCollection no_gc;  WriteBarrierMode write_barrier_mode =
     allocation_type == AllocationType::kYoung
     ? SKIP_WRITE_BARRIER : UPDATE_WRITE_BARRIER;
  USE(write_barrier_mode);
  result.TorqueGeneratedClass::set_a(*a, write_barrier_mode);
  result.TorqueGeneratedClass::set_b(*b, write_barrier_mode);
  return handle(result, factory()->isolate());
}

template EXPORT_TEMPLATE_DEFINE(V8_EXPORT_PRIVATE) Handle<ExportedSubClassBase>TorqueGeneratedFactory<Factory>::NewExportedSubClassBase(Handle<HeapObject> a, Handle<HeapObject> b, AllocationType allocation_type);
template EXPORT_TEMPLATE_DEFINE(V8_EXPORT_PRIVATE) Handle<ExportedSubClassBase>TorqueGeneratedFactory<LocalFactory>::NewExportedSubClassBase(Handle<HeapObject> a, Handle<HeapObject> b, AllocationType allocation_type);


template <typename Impl>
Handle<ExportedSubClass> TorqueGeneratedFactory<Impl>::NewExportedSubClass(Handle<HeapObject> a, Handle<HeapObject> b, int32_t c_field, int32_t d_field, int e_field, AllocationType allocation_type) {
 int size = TorqueGeneratedExportedSubClass<ExportedSubClass, ExportedSubClassBase>::SizeFor();
  Map map = factory()->read_only_roots().exported_sub_class_map();  HeapObject raw_object =
    factory()->AllocateRawWithImmortalMap(size, allocation_type, map);
  ExportedSubClass result = ExportedSubClass::cast(raw_object);
  DisallowGarbageCollection no_gc;  WriteBarrierMode write_barrier_mode =
     allocation_type == AllocationType::kYoung
     ? SKIP_WRITE_BARRIER : UPDATE_WRITE_BARRIER;
  USE(write_barrier_mode);
  result.TorqueGeneratedClass::set_a(*a, write_barrier_mode);
  result.TorqueGeneratedClass::set_b(*b, write_barrier_mode);
  result.TorqueGeneratedClass::set_c_field(c_field);
  result.TorqueGeneratedClass::set_d_field(d_field);
  result.TorqueGeneratedClass::set_e_field(e_field);
  return handle(result, factory()->isolate());
}

template EXPORT_TEMPLATE_DEFINE(V8_EXPORT_PRIVATE) Handle<ExportedSubClass>TorqueGeneratedFactory<Factory>::NewExportedSubClass(Handle<HeapObject> a, Handle<HeapObject> b, int32_t c_field, int32_t d_field, int e_field, AllocationType allocation_type);
template EXPORT_TEMPLATE_DEFINE(V8_EXPORT_PRIVATE) Handle<ExportedSubClass>TorqueGeneratedFactory<LocalFactory>::NewExportedSubClass(Handle<HeapObject> a, Handle<HeapObject> b, int32_t c_field, int32_t d_field, int e_field, AllocationType allocation_type);


template <typename Impl>
Handle<ExportedSubClass2> TorqueGeneratedFactory<Impl>::NewExportedSubClass2(Handle<HeapObject> a, Handle<HeapObject> b, int32_t x_field, int32_t y_field, int z_field, AllocationType allocation_type) {
 int size = TorqueGeneratedExportedSubClass2<ExportedSubClass2, ExportedSubClassBase>::SizeFor();
  Map map = factory()->read_only_roots().exported_sub_class2_map();  HeapObject raw_object =
    factory()->AllocateRawWithImmortalMap(size, allocation_type, map);
  ExportedSubClass2 result = ExportedSubClass2::cast(raw_object);
  DisallowGarbageCollection no_gc;  WriteBarrierMode write_barrier_mode =
     allocation_type == AllocationType::kYoung
     ? SKIP_WRITE_BARRIER : UPDATE_WRITE_BARRIER;
  USE(write_barrier_mode);
  result.TorqueGeneratedClass::set_a(*a, write_barrier_mode);
  result.TorqueGeneratedClass::set_b(*b, write_barrier_mode);
  result.TorqueGeneratedClass::set_x_field(x_field);
  result.TorqueGeneratedClass::set_y_field(y_field);
  result.TorqueGeneratedClass::set_z_field(z_field);
  return handle(result, factory()->isolate());
}

template EXPORT_TEMPLATE_DEFINE(V8_EXPORT_PRIVATE) Handle<ExportedSubClass2>TorqueGeneratedFactory<Factory>::NewExportedSubClass2(Handle<HeapObject> a, Handle<HeapObject> b, int32_t x_field, int32_t y_field, int z_field, AllocationType allocation_type);
template EXPORT_TEMPLATE_DEFINE(V8_EXPORT_PRIVATE) Handle<ExportedSubClass2>TorqueGeneratedFactory<LocalFactory>::NewExportedSubClass2(Handle<HeapObject> a, Handle<HeapObject> b, int32_t x_field, int32_t y_field, int z_field, AllocationType allocation_type);


}  // namespace internal
}  // namespace v8
