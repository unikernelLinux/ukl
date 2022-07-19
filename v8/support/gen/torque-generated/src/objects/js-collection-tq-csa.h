#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_COLLECTION_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_COLLECTION_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=5&c=1
TNode<JSCollection> Cast_JSCollection_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=10&c=1
TNode<JSSet> Cast_JSSet_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=11&c=1
TNode<JSMap> Cast_JSMap_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=13&c=1
TNode<JSWeakCollection> Cast_JSWeakCollection_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=18&c=1
TNode<JSWeakSet> Cast_JSWeakSet_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=19&c=1
TNode<JSWeakMap> Cast_JSWeakMap_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=21&c=1
TNode<JSMapIterator> Cast_JSMapIterator_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=22&c=1
TNode<JSMapIterator> Cast_JSMapKeyIterator_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=24&c=1
TNode<JSMapIterator> Cast_JSMapKeyValueIterator_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=26&c=1
TNode<JSMapIterator> Cast_JSMapValueIterator_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=29&c=1
TNode<JSSetIterator> Cast_JSSetIterator_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=30&c=1
TNode<JSSetIterator> Cast_JSSetKeyValueIterator_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=32&c=1
TNode<JSSetIterator> Cast_JSSetValueIterator_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=8&c=3
TNode<Object> LoadJSCollectionTable_0(compiler::CodeAssemblerState* state_, TNode<JSCollection> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=8&c=3
void StoreJSCollectionTable_0(compiler::CodeAssemblerState* state_, TNode<JSCollection> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=16&c=3
TNode<Object> LoadJSWeakCollectionTable_0(compiler::CodeAssemblerState* state_, TNode<JSWeakCollection> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=16&c=3
void StoreJSWeakCollectionTable_0(compiler::CodeAssemblerState* state_, TNode<JSWeakCollection> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=5&c=1
TNode<JSCollection> DownCastForTorqueClass_JSCollection_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=10&c=1
TNode<JSSet> DownCastForTorqueClass_JSSet_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=11&c=1
TNode<JSMap> DownCastForTorqueClass_JSMap_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=13&c=1
TNode<JSWeakCollection> DownCastForTorqueClass_JSWeakCollection_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=18&c=1
TNode<JSWeakSet> DownCastForTorqueClass_JSWeakSet_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=19&c=1
TNode<JSWeakMap> DownCastForTorqueClass_JSWeakMap_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=21&c=1
TNode<JSMapIterator> DownCastForTorqueClass_JSMapIterator_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=22&c=1
TNode<JSMapIterator> DownCastForTorqueClass_JSMapKeyIterator_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=24&c=1
TNode<JSMapIterator> DownCastForTorqueClass_JSMapKeyValueIterator_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=26&c=1
TNode<JSMapIterator> DownCastForTorqueClass_JSMapValueIterator_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=29&c=1
TNode<JSSetIterator> DownCastForTorqueClass_JSSetIterator_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=30&c=1
TNode<JSSetIterator> DownCastForTorqueClass_JSSetKeyValueIterator_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=32&c=1
TNode<JSSetIterator> DownCastForTorqueClass_JSSetValueIterator_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_COLLECTION_TQ_CSA_H_
