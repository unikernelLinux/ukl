#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_WEAK_REFS_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_WEAK_REFS_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=9&c=1
TNode<JSFinalizationRegistry> Cast_JSFinalizationRegistry_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=21&c=1
TNode<WeakCell> Cast_WeakCell_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=42&c=1
TNode<JSWeakRef> Cast_JSWeakRef_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=22&c=3
TNode<HeapObject> LoadWeakCellFinalizationRegistry_0(compiler::CodeAssemblerState* state_, TNode<WeakCell> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=22&c=3
void StoreWeakCellFinalizationRegistry_0(compiler::CodeAssemblerState* state_, TNode<WeakCell> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=23&c=3
TNode<HeapObject> LoadWeakCellTarget_0(compiler::CodeAssemblerState* state_, TNode<WeakCell> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=23&c=3
void StoreWeakCellTarget_0(compiler::CodeAssemblerState* state_, TNode<WeakCell> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=24&c=3
TNode<HeapObject> LoadWeakCellUnregisterToken_0(compiler::CodeAssemblerState* state_, TNode<WeakCell> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=24&c=3
void StoreWeakCellUnregisterToken_0(compiler::CodeAssemblerState* state_, TNode<WeakCell> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=25&c=3
TNode<Object> LoadWeakCellHoldings_0(compiler::CodeAssemblerState* state_, TNode<WeakCell> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=25&c=3
void StoreWeakCellHoldings_0(compiler::CodeAssemblerState* state_, TNode<WeakCell> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=29&c=3
TNode<HeapObject> LoadWeakCellPrev_0(compiler::CodeAssemblerState* state_, TNode<WeakCell> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=29&c=3
void StoreWeakCellPrev_0(compiler::CodeAssemblerState* state_, TNode<WeakCell> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=30&c=3
TNode<HeapObject> LoadWeakCellNext_0(compiler::CodeAssemblerState* state_, TNode<WeakCell> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=30&c=3
void StoreWeakCellNext_0(compiler::CodeAssemblerState* state_, TNode<WeakCell> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=38&c=3
TNode<HeapObject> LoadWeakCellKeyListPrev_0(compiler::CodeAssemblerState* state_, TNode<WeakCell> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=38&c=3
void StoreWeakCellKeyListPrev_0(compiler::CodeAssemblerState* state_, TNode<WeakCell> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=39&c=3
TNode<HeapObject> LoadWeakCellKeyListNext_0(compiler::CodeAssemblerState* state_, TNode<WeakCell> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=39&c=3
void StoreWeakCellKeyListNext_0(compiler::CodeAssemblerState* state_, TNode<WeakCell> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=10&c=3
TNode<NativeContext> LoadJSFinalizationRegistryNativeContext_0(compiler::CodeAssemblerState* state_, TNode<JSFinalizationRegistry> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=10&c=3
void StoreJSFinalizationRegistryNativeContext_0(compiler::CodeAssemblerState* state_, TNode<JSFinalizationRegistry> p_o, TNode<NativeContext> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=11&c=3
TNode<JSReceiver> LoadJSFinalizationRegistryCleanup_0(compiler::CodeAssemblerState* state_, TNode<JSFinalizationRegistry> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=11&c=3
void StoreJSFinalizationRegistryCleanup_0(compiler::CodeAssemblerState* state_, TNode<JSFinalizationRegistry> p_o, TNode<JSReceiver> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=12&c=3
TNode<HeapObject> LoadJSFinalizationRegistryActiveCells_0(compiler::CodeAssemblerState* state_, TNode<JSFinalizationRegistry> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=12&c=3
void StoreJSFinalizationRegistryActiveCells_0(compiler::CodeAssemblerState* state_, TNode<JSFinalizationRegistry> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=13&c=3
TNode<HeapObject> LoadJSFinalizationRegistryClearedCells_0(compiler::CodeAssemblerState* state_, TNode<JSFinalizationRegistry> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=13&c=3
void StoreJSFinalizationRegistryClearedCells_0(compiler::CodeAssemblerState* state_, TNode<JSFinalizationRegistry> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=14&c=3
TNode<Object> LoadJSFinalizationRegistryKeyMap_0(compiler::CodeAssemblerState* state_, TNode<JSFinalizationRegistry> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=14&c=3
void StoreJSFinalizationRegistryKeyMap_0(compiler::CodeAssemblerState* state_, TNode<JSFinalizationRegistry> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=17&c=3
TNode<HeapObject> LoadJSFinalizationRegistryNextDirty_0(compiler::CodeAssemblerState* state_, TNode<JSFinalizationRegistry> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=17&c=3
void StoreJSFinalizationRegistryNextDirty_0(compiler::CodeAssemblerState* state_, TNode<JSFinalizationRegistry> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=18&c=3
TNode<Smi> LoadJSFinalizationRegistryFlags_0(compiler::CodeAssemblerState* state_, TNode<JSFinalizationRegistry> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=18&c=3
void StoreJSFinalizationRegistryFlags_0(compiler::CodeAssemblerState* state_, TNode<JSFinalizationRegistry> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=42&c=43
TNode<HeapObject> LoadJSWeakRefTarget_0(compiler::CodeAssemblerState* state_, TNode<JSWeakRef> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=42&c=43
void StoreJSWeakRefTarget_0(compiler::CodeAssemblerState* state_, TNode<JSWeakRef> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=9&c=1
TNode<JSFinalizationRegistry> DownCastForTorqueClass_JSFinalizationRegistry_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=21&c=1
TNode<WeakCell> DownCastForTorqueClass_WeakCell_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=42&c=1
TNode<JSWeakRef> DownCastForTorqueClass_JSWeakRef_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_WEAK_REFS_TQ_CSA_H_
