#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_COLLECTION_ITERATOR_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_COLLECTION_ITERATOR_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection-iterator.tq?l=5&c=1
TNode<JSCollectionIterator> Cast_JSCollectionIterator_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection-iterator.tq?l=8&c=3
TNode<Object> LoadJSCollectionIteratorTable_0(compiler::CodeAssemblerState* state_, TNode<JSCollectionIterator> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection-iterator.tq?l=8&c=3
void StoreJSCollectionIteratorTable_0(compiler::CodeAssemblerState* state_, TNode<JSCollectionIterator> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection-iterator.tq?l=10&c=3
TNode<Object> LoadJSCollectionIteratorIndex_0(compiler::CodeAssemblerState* state_, TNode<JSCollectionIterator> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection-iterator.tq?l=10&c=3
void StoreJSCollectionIteratorIndex_0(compiler::CodeAssemblerState* state_, TNode<JSCollectionIterator> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection-iterator.tq?l=5&c=1
TNode<JSCollectionIterator> DownCastForTorqueClass_JSCollectionIterator_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_COLLECTION_ITERATOR_TQ_CSA_H_
