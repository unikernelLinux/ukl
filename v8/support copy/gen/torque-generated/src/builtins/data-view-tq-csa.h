#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_DATA_VIEW_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_DATA_VIEW_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=9&c=1
const char* kBuiltinNameByteLength_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=11&c=1
const char* kBuiltinNameByteOffset_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=14&c=1
TNode<String> MakeDataViewGetterNameString_0(compiler::CodeAssemblerState* state_, ElementsKind p_kind);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=40&c=1
TNode<String> MakeDataViewSetterNameString_0(compiler::CodeAssemblerState* state_, ElementsKind p_kind);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=66&c=1
TNode<BoolT> WasDetached_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBufferView> p_view);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=70&c=1
TNode<JSDataView> ValidateDataView_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, TNode<String> p_method);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=135&c=1
TNode<Smi> LoadDataView8_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, bool p_signed);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=144&c=1
TNode<Number> LoadDataView16_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<BoolT> p_requestedLittleEndian, bool p_signed);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=171&c=1
TNode<Number> LoadDataView32_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<BoolT> p_requestedLittleEndian, ElementsKind p_kind);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=200&c=1
TNode<Number> LoadDataViewFloat64_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<BoolT> p_requestedLittleEndian);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=231&c=1
int31_t kZeroDigitBigInt_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=232&c=1
int31_t kOneDigitBigInt_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=233&c=1
int31_t kTwoDigitBigInt_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=236&c=1
TNode<BigInt> MakeBigIntOn64Bit_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Uint32T> p_lowWord, TNode<Uint32T> p_highWord, bool p_signed);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=264&c=1
TNode<BigInt> MakeBigIntOn32Bit_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Uint32T> p_lowWord, TNode<Uint32T> p_highWord, bool p_signed);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=331&c=1
TNode<BigInt> MakeBigInt_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Uint32T> p_lowWord, TNode<Uint32T> p_highWord, bool p_signed);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=342&c=1
TNode<BigInt> LoadDataViewBigInt_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<BoolT> p_requestedLittleEndian, bool p_signed);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=374&c=1
TNode<Numeric> DataViewGet_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, TNode<Object> p_requestIndex, TNode<Object> p_requestedLittleEndian, ElementsKind p_kind);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=545&c=1
void StoreDataView8_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<Uint32T> p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=550&c=1
void StoreDataView16_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<Uint32T> p_value, TNode<BoolT> p_requestedLittleEndian);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=567&c=1
void StoreDataView32_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<Uint32T> p_value, TNode<BoolT> p_requestedLittleEndian);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=590&c=1
void StoreDataView64_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<Uint32T> p_lowWord, TNode<Uint32T> p_highWord, TNode<BoolT> p_requestedLittleEndian);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=634&c=1
void StoreDataViewBigInt_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<BigInt> p_bigIntValue, TNode<BoolT> p_requestedLittleEndian);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=673&c=1
TNode<Object> DataViewSet_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, TNode<Object> p_requestIndex, TNode<Object> p_value, TNode<Object> p_requestedLittleEndian, ElementsKind p_kind);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=72&c=12
TNode<JSDataView> Cast_JSDataView_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_DATA_VIEW_TQ_CSA_H_
