#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_DATA_HANDLER_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_DATA_HANDLER_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=7&c=1
TNode<DataHandler> Cast_DataHandler_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=13&c=31
TNode<Object> LoadDataHandlerSmiHandler_0(compiler::CodeAssemblerState* state_, TNode<DataHandler> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=13&c=31
void StoreDataHandlerSmiHandler_0(compiler::CodeAssemblerState* state_, TNode<DataHandler> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=17&c=3
TNode<Object> LoadDataHandlerValidityCell_0(compiler::CodeAssemblerState* state_, TNode<DataHandler> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=17&c=3
void StoreDataHandlerValidityCell_0(compiler::CodeAssemblerState* state_, TNode<DataHandler> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=20&c=3
TNode<MaybeObject> LoadDataHandlerData1_0(compiler::CodeAssemblerState* state_, TNode<DataHandler> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=20&c=3
void StoreDataHandlerData1_0(compiler::CodeAssemblerState* state_, TNode<DataHandler> p_o, TNode<MaybeObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=21&c=3
TNode<MaybeObject> LoadDataHandlerData2_0(compiler::CodeAssemblerState* state_, TNode<DataHandler> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=21&c=3
void StoreDataHandlerData2_0(compiler::CodeAssemblerState* state_, TNode<DataHandler> p_o, TNode<MaybeObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=22&c=3
TNode<MaybeObject> LoadDataHandlerData3_0(compiler::CodeAssemblerState* state_, TNode<DataHandler> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=22&c=3
void StoreDataHandlerData3_0(compiler::CodeAssemblerState* state_, TNode<DataHandler> p_o, TNode<MaybeObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=7&c=1
TNode<DataHandler> DownCastForTorqueClass_DataHandler_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_DATA_HANDLER_TQ_CSA_H_
