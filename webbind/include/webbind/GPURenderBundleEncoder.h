#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct GPURenderBundle GPURenderBundle;
typedef struct GPURenderBundleDescriptor GPURenderBundleDescriptor;
typedef struct GPUBindGroup GPUBindGroup;
typedef struct GPURenderPipeline GPURenderPipeline;
typedef struct GPUBuffer GPUBuffer;


DECLARE_EMLITE_TYPE(GPURenderBundleDescriptor, em_Val);
DECLARE_EMLITE_TYPE(GPURenderBundleEncoder, em_Val);

GPURenderBundle GPURenderBundleEncoder_finish0(GPURenderBundleEncoder* self );

GPURenderBundle GPURenderBundleEncoder_finish1(GPURenderBundleEncoder* self , GPURenderBundleDescriptor * descriptor);

jb_String GPURenderBundleEncoder_label(const GPURenderBundleEncoder *self);

void GPURenderBundleEncoder_set_label(GPURenderBundleEncoder* self, jb_String * value);

jb_Undefined GPURenderBundleEncoder_pushDebugGroup(GPURenderBundleEncoder* self , jb_String * groupLabel);

jb_Undefined GPURenderBundleEncoder_popDebugGroup(GPURenderBundleEncoder* self );

jb_Undefined GPURenderBundleEncoder_insertDebugMarker(GPURenderBundleEncoder* self , jb_String * markerLabel);

jb_Undefined GPURenderBundleEncoder_setBindGroup(GPURenderBundleEncoder* self , jb_Any * index, GPUBindGroup * bindGroup, jb_Uint32Array * dynamicOffsetsData, jb_Any * dynamicOffsetsDataStart, jb_Any * dynamicOffsetsDataLength);

jb_Undefined GPURenderBundleEncoder_setPipeline(GPURenderBundleEncoder* self , GPURenderPipeline * pipeline);

jb_Undefined GPURenderBundleEncoder_setIndexBuffer0(GPURenderBundleEncoder* self , GPUBuffer * buffer, GPUIndexFormat * indexFormat);

jb_Undefined GPURenderBundleEncoder_setIndexBuffer1(GPURenderBundleEncoder* self , GPUBuffer * buffer, GPUIndexFormat * indexFormat, jb_Any * offset);

jb_Undefined GPURenderBundleEncoder_setIndexBuffer2(GPURenderBundleEncoder* self , GPUBuffer * buffer, GPUIndexFormat * indexFormat, jb_Any * offset, jb_Any * size);

jb_Undefined GPURenderBundleEncoder_setVertexBuffer0(GPURenderBundleEncoder* self , jb_Any * slot, GPUBuffer * buffer);

jb_Undefined GPURenderBundleEncoder_setVertexBuffer1(GPURenderBundleEncoder* self , jb_Any * slot, GPUBuffer * buffer, jb_Any * offset);

jb_Undefined GPURenderBundleEncoder_setVertexBuffer2(GPURenderBundleEncoder* self , jb_Any * slot, GPUBuffer * buffer, jb_Any * offset, jb_Any * size);

jb_Undefined GPURenderBundleEncoder_draw0(GPURenderBundleEncoder* self , jb_Any * vertexCount);

jb_Undefined GPURenderBundleEncoder_draw1(GPURenderBundleEncoder* self , jb_Any * vertexCount, jb_Any * instanceCount);

jb_Undefined GPURenderBundleEncoder_draw2(GPURenderBundleEncoder* self , jb_Any * vertexCount, jb_Any * instanceCount, jb_Any * firstVertex);

jb_Undefined GPURenderBundleEncoder_draw3(GPURenderBundleEncoder* self , jb_Any * vertexCount, jb_Any * instanceCount, jb_Any * firstVertex, jb_Any * firstInstance);

jb_Undefined GPURenderBundleEncoder_drawIndexed0(GPURenderBundleEncoder* self , jb_Any * indexCount);

jb_Undefined GPURenderBundleEncoder_drawIndexed1(GPURenderBundleEncoder* self , jb_Any * indexCount, jb_Any * instanceCount);

jb_Undefined GPURenderBundleEncoder_drawIndexed2(GPURenderBundleEncoder* self , jb_Any * indexCount, jb_Any * instanceCount, jb_Any * firstIndex);

jb_Undefined GPURenderBundleEncoder_drawIndexed3(GPURenderBundleEncoder* self , jb_Any * indexCount, jb_Any * instanceCount, jb_Any * firstIndex, jb_Any * baseVertex);

jb_Undefined GPURenderBundleEncoder_drawIndexed4(GPURenderBundleEncoder* self , jb_Any * indexCount, jb_Any * instanceCount, jb_Any * firstIndex, jb_Any * baseVertex, jb_Any * firstInstance);

jb_Undefined GPURenderBundleEncoder_drawIndirect(GPURenderBundleEncoder* self , GPUBuffer * indirectBuffer, jb_Any * indirectOffset);

jb_Undefined GPURenderBundleEncoder_drawIndexedIndirect(GPURenderBundleEncoder* self , GPUBuffer * indirectBuffer, jb_Any * indirectOffset);
