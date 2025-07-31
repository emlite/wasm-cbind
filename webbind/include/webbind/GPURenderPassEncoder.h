#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct GPURenderBundle GPURenderBundle;
typedef struct GPUBindGroup GPUBindGroup;
typedef struct GPURenderPipeline GPURenderPipeline;
typedef struct GPUBuffer GPUBuffer;


DECLARE_EMLITE_TYPE(GPURenderPassEncoder, em_Val);

jb_Undefined GPURenderPassEncoder_setViewport(GPURenderPassEncoder* self , float x, float y, float width, float height, float minDepth, float maxDepth);

jb_Undefined GPURenderPassEncoder_setScissorRect(GPURenderPassEncoder* self , jb_Any * x, jb_Any * y, jb_Any * width, jb_Any * height);

jb_Undefined GPURenderPassEncoder_setBlendConstant(GPURenderPassEncoder* self , jb_Any * color);

jb_Undefined GPURenderPassEncoder_setStencilReference(GPURenderPassEncoder* self , jb_Any * reference);

jb_Undefined GPURenderPassEncoder_beginOcclusionQuery(GPURenderPassEncoder* self , jb_Any * queryIndex);

jb_Undefined GPURenderPassEncoder_endOcclusionQuery(GPURenderPassEncoder* self );

jb_Undefined GPURenderPassEncoder_executeBundles(GPURenderPassEncoder* self , jb_Array * bundles);

jb_Undefined GPURenderPassEncoder_end(GPURenderPassEncoder* self );

jb_String GPURenderPassEncoder_label(const GPURenderPassEncoder *self);

void GPURenderPassEncoder_set_label(GPURenderPassEncoder* self, jb_String * value);

jb_Undefined GPURenderPassEncoder_pushDebugGroup(GPURenderPassEncoder* self , jb_String * groupLabel);

jb_Undefined GPURenderPassEncoder_popDebugGroup(GPURenderPassEncoder* self );

jb_Undefined GPURenderPassEncoder_insertDebugMarker(GPURenderPassEncoder* self , jb_String * markerLabel);

jb_Undefined GPURenderPassEncoder_setBindGroup(GPURenderPassEncoder* self , jb_Any * index, GPUBindGroup * bindGroup, jb_Uint32Array * dynamicOffsetsData, jb_Any * dynamicOffsetsDataStart, jb_Any * dynamicOffsetsDataLength);

jb_Undefined GPURenderPassEncoder_setPipeline(GPURenderPassEncoder* self , GPURenderPipeline * pipeline);

jb_Undefined GPURenderPassEncoder_setIndexBuffer0(GPURenderPassEncoder* self , GPUBuffer * buffer, GPUIndexFormat * indexFormat);

jb_Undefined GPURenderPassEncoder_setIndexBuffer1(GPURenderPassEncoder* self , GPUBuffer * buffer, GPUIndexFormat * indexFormat, jb_Any * offset);

jb_Undefined GPURenderPassEncoder_setIndexBuffer2(GPURenderPassEncoder* self , GPUBuffer * buffer, GPUIndexFormat * indexFormat, jb_Any * offset, jb_Any * size);

jb_Undefined GPURenderPassEncoder_setVertexBuffer0(GPURenderPassEncoder* self , jb_Any * slot, GPUBuffer * buffer);

jb_Undefined GPURenderPassEncoder_setVertexBuffer1(GPURenderPassEncoder* self , jb_Any * slot, GPUBuffer * buffer, jb_Any * offset);

jb_Undefined GPURenderPassEncoder_setVertexBuffer2(GPURenderPassEncoder* self , jb_Any * slot, GPUBuffer * buffer, jb_Any * offset, jb_Any * size);

jb_Undefined GPURenderPassEncoder_draw0(GPURenderPassEncoder* self , jb_Any * vertexCount);

jb_Undefined GPURenderPassEncoder_draw1(GPURenderPassEncoder* self , jb_Any * vertexCount, jb_Any * instanceCount);

jb_Undefined GPURenderPassEncoder_draw2(GPURenderPassEncoder* self , jb_Any * vertexCount, jb_Any * instanceCount, jb_Any * firstVertex);

jb_Undefined GPURenderPassEncoder_draw3(GPURenderPassEncoder* self , jb_Any * vertexCount, jb_Any * instanceCount, jb_Any * firstVertex, jb_Any * firstInstance);

jb_Undefined GPURenderPassEncoder_drawIndexed0(GPURenderPassEncoder* self , jb_Any * indexCount);

jb_Undefined GPURenderPassEncoder_drawIndexed1(GPURenderPassEncoder* self , jb_Any * indexCount, jb_Any * instanceCount);

jb_Undefined GPURenderPassEncoder_drawIndexed2(GPURenderPassEncoder* self , jb_Any * indexCount, jb_Any * instanceCount, jb_Any * firstIndex);

jb_Undefined GPURenderPassEncoder_drawIndexed3(GPURenderPassEncoder* self , jb_Any * indexCount, jb_Any * instanceCount, jb_Any * firstIndex, jb_Any * baseVertex);

jb_Undefined GPURenderPassEncoder_drawIndexed4(GPURenderPassEncoder* self , jb_Any * indexCount, jb_Any * instanceCount, jb_Any * firstIndex, jb_Any * baseVertex, jb_Any * firstInstance);

jb_Undefined GPURenderPassEncoder_drawIndirect(GPURenderPassEncoder* self , GPUBuffer * indirectBuffer, jb_Any * indirectOffset);

jb_Undefined GPURenderPassEncoder_drawIndexedIndirect(GPURenderPassEncoder* self , GPUBuffer * indirectBuffer, jb_Any * indirectOffset);
