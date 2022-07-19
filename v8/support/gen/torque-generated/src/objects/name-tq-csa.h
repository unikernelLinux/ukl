#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_NAME_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_NAME_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=5&c=1
TNode<Name> Cast_Name_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=29&c=1
TNode<Symbol> Cast_Symbol_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=47&c=1
TNode<Uint32T> kNameEmptyHashField_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=53&c=1
TNode<BoolT> ContainsCachedArrayIndex_0(compiler::CodeAssemblerState* state_, TNode<Uint32T> p_hash);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=57&c=1
TNode<Uint32T> kArrayIndexValueBitsShift_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=58&c=1
TNode<Uint32T> kArrayIndexLengthBitsShift_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=61&c=1
TNode<Uint32T> TenToThe_0(compiler::CodeAssemblerState* state_, TNode<Uint32T> p_exponent);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=70&c=1
TNode<BoolT> IsIntegerIndex_0(compiler::CodeAssemblerState* state_, TNode<Uint32T> p_hash);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=74&c=1
TNode<Uint32T> MakeArrayIndexHash_0(compiler::CodeAssemblerState* state_, TNode<Uint32T> p_value, TNode<Uint32T> p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=7&c=3
TNode<Uint32T> LoadNameRawHashField_0(compiler::CodeAssemblerState* state_, TNode<Name> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=7&c=3
void StoreNameRawHashField_0(compiler::CodeAssemblerState* state_, TNode<Name> p_o, TNode<Uint32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=30&c=3
TNode<Uint32T> LoadSymbolFlags_0(compiler::CodeAssemblerState* state_, TNode<Symbol> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=30&c=3
void StoreSymbolFlags_0(compiler::CodeAssemblerState* state_, TNode<Symbol> p_o, TNode<Uint32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=31&c=3
TNode<PrimitiveHeapObject> LoadSymbolDescription_0(compiler::CodeAssemblerState* state_, TNode<Symbol> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=31&c=3
void StoreSymbolDescription_0(compiler::CodeAssemblerState* state_, TNode<Symbol> p_o, TNode<PrimitiveHeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=5&c=1
TNode<Name> DownCastForTorqueClass_Name_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=29&c=1
TNode<Symbol> DownCastForTorqueClass_Symbol_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_NAME_TQ_CSA_H_
