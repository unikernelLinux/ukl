#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_FRAMES_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_FRAMES_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/frames.tq?l=11&c=1
TNode<Smi> FromConstexpr_FrameType_constexpr_FrameType_0(compiler::CodeAssemblerState* state_, StackFrame::Type p_t);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/frames.tq?l=21&c=1
TNode<Smi> Cast_FrameType_0(compiler::CodeAssemblerState* state_, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/frames.tq?l=40&c=1
TNode<Object> LoadObjectFromFrame_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_f, int32_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/frames.tq?l=43&c=1
TNode<RawPtrT> LoadPointerFromFrame_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_f, int32_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/frames.tq?l=46&c=1
TNode<IntPtrT> LoadIntptrFromFrame_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_f, int32_t p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/frames.tq?l=52&c=1
TNode<JSFunction> LoadFunctionFromFrame_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_f);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/frames.tq?l=62&c=1
TNode<RawPtrT> LoadCallerFromFrame_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_f);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/frames.tq?l=72&c=1
TNode<IntPtrT> LoadArgCFromFrame_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_f);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/frames.tq?l=78&c=1
TNode<Object> Cast_ContextOrFrameType_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/frames.tq?l=96&c=1
TNode<Object> LoadContextOrFrameTypeFromFrame_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<RawPtrT> p_f);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/frames.tq?l=103&c=1
TNode<BoolT> FrameTypeEquals_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_f1, TNode<Smi> p_f2);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/frames.tq?l=109&c=1
TNode<RawPtrT> Cast_FrameWithArguments_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<RawPtrT> p_f, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/frames.tq?l=134&c=1
TNode<JSFunction> LoadTargetFromFrame_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/frames.tq?l=99&c=10
TNode<Object> UnsafeCast_ContextOrFrameType_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/frames.tq?l=112&c=7
TNode<HeapObject> Cast_HeapObject_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_FRAMES_TQ_CSA_H_
