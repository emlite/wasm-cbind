#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct GPURenderPassEncoder GPURenderPassEncoder;
typedef struct GPURenderPassDescriptor GPURenderPassDescriptor;
typedef struct GPUComputePassEncoder GPUComputePassEncoder;
typedef struct GPUComputePassDescriptor GPUComputePassDescriptor;
typedef struct GPUBuffer GPUBuffer;
typedef struct GPUTexelCopyBufferInfo GPUTexelCopyBufferInfo;
typedef struct GPUTexelCopyTextureInfo GPUTexelCopyTextureInfo;
typedef struct GPUQuerySet GPUQuerySet;
typedef struct GPUCommandBuffer GPUCommandBuffer;
typedef struct GPUCommandBufferDescriptor GPUCommandBufferDescriptor;
typedef struct GPUTexture GPUTexture;


DECLARE_EMLITE_TYPE(GPURenderPassDescriptor, em_Val);

jb_Array GPURenderPassDescriptor_colorAttachments(const GPURenderPassDescriptor *self);

void GPURenderPassDescriptor_set_colorAttachments(GPURenderPassDescriptor* self, jb_Array * value);

jb_Any GPURenderPassDescriptor_depthStencilAttachment(const GPURenderPassDescriptor *self);

void GPURenderPassDescriptor_set_depthStencilAttachment(GPURenderPassDescriptor* self, jb_Any * value);

GPUQuerySet GPURenderPassDescriptor_occlusionQuerySet(const GPURenderPassDescriptor *self);

void GPURenderPassDescriptor_set_occlusionQuerySet(GPURenderPassDescriptor* self, GPUQuerySet * value);

jb_Any GPURenderPassDescriptor_timestampWrites(const GPURenderPassDescriptor *self);

void GPURenderPassDescriptor_set_timestampWrites(GPURenderPassDescriptor* self, jb_Any * value);

jb_Any GPURenderPassDescriptor_maxDrawCount(const GPURenderPassDescriptor *self);

void GPURenderPassDescriptor_set_maxDrawCount(GPURenderPassDescriptor* self, jb_Any * value);
DECLARE_EMLITE_TYPE(GPUComputePassDescriptor, em_Val);

jb_Any GPUComputePassDescriptor_timestampWrites(const GPUComputePassDescriptor *self);

void GPUComputePassDescriptor_set_timestampWrites(GPUComputePassDescriptor* self, jb_Any * value);
DECLARE_EMLITE_TYPE(GPUTexelCopyBufferInfo, em_Val);

GPUBuffer GPUTexelCopyBufferInfo_buffer(const GPUTexelCopyBufferInfo *self);

void GPUTexelCopyBufferInfo_set_buffer(GPUTexelCopyBufferInfo* self, GPUBuffer * value);
DECLARE_EMLITE_TYPE(GPUTexelCopyTextureInfo, em_Val);

GPUTexture GPUTexelCopyTextureInfo_texture(const GPUTexelCopyTextureInfo *self);

void GPUTexelCopyTextureInfo_set_texture(GPUTexelCopyTextureInfo* self, GPUTexture * value);

jb_Any GPUTexelCopyTextureInfo_mipLevel(const GPUTexelCopyTextureInfo *self);

void GPUTexelCopyTextureInfo_set_mipLevel(GPUTexelCopyTextureInfo* self, jb_Any * value);

jb_Any GPUTexelCopyTextureInfo_origin(const GPUTexelCopyTextureInfo *self);

void GPUTexelCopyTextureInfo_set_origin(GPUTexelCopyTextureInfo* self, jb_Any * value);

GPUTextureAspect GPUTexelCopyTextureInfo_aspect(const GPUTexelCopyTextureInfo *self);

void GPUTexelCopyTextureInfo_set_aspect(GPUTexelCopyTextureInfo* self, GPUTextureAspect * value);
DECLARE_EMLITE_TYPE(GPUCommandBufferDescriptor, em_Val);
DECLARE_EMLITE_TYPE(GPUCommandEncoder, em_Val);

GPURenderPassEncoder GPUCommandEncoder_beginRenderPass(GPUCommandEncoder* self , GPURenderPassDescriptor * descriptor);

GPUComputePassEncoder GPUCommandEncoder_beginComputePass0(GPUCommandEncoder* self );

GPUComputePassEncoder GPUCommandEncoder_beginComputePass1(GPUCommandEncoder* self , GPUComputePassDescriptor * descriptor);

jb_Undefined GPUCommandEncoder_copyBufferToBuffer0(GPUCommandEncoder* self , GPUBuffer * source, jb_Any * sourceOffset, GPUBuffer * destination, jb_Any * destinationOffset);

jb_Undefined GPUCommandEncoder_copyBufferToBuffer1(GPUCommandEncoder* self , GPUBuffer * source, jb_Any * sourceOffset, GPUBuffer * destination, jb_Any * destinationOffset, jb_Any * size);

jb_Undefined GPUCommandEncoder_copyBufferToTexture(GPUCommandEncoder* self , GPUTexelCopyBufferInfo * source, GPUTexelCopyTextureInfo * destination, jb_Any * copySize);

jb_Undefined GPUCommandEncoder_copyTextureToBuffer(GPUCommandEncoder* self , GPUTexelCopyTextureInfo * source, GPUTexelCopyBufferInfo * destination, jb_Any * copySize);

jb_Undefined GPUCommandEncoder_copyTextureToTexture(GPUCommandEncoder* self , GPUTexelCopyTextureInfo * source, GPUTexelCopyTextureInfo * destination, jb_Any * copySize);

jb_Undefined GPUCommandEncoder_clearBuffer0(GPUCommandEncoder* self , GPUBuffer * buffer);

jb_Undefined GPUCommandEncoder_clearBuffer1(GPUCommandEncoder* self , GPUBuffer * buffer, jb_Any * offset);

jb_Undefined GPUCommandEncoder_clearBuffer2(GPUCommandEncoder* self , GPUBuffer * buffer, jb_Any * offset, jb_Any * size);

jb_Undefined GPUCommandEncoder_resolveQuerySet(GPUCommandEncoder* self , GPUQuerySet * querySet, jb_Any * firstQuery, jb_Any * queryCount, GPUBuffer * destination, jb_Any * destinationOffset);

GPUCommandBuffer GPUCommandEncoder_finish0(GPUCommandEncoder* self );

GPUCommandBuffer GPUCommandEncoder_finish1(GPUCommandEncoder* self , GPUCommandBufferDescriptor * descriptor);

jb_String GPUCommandEncoder_label(const GPUCommandEncoder *self);

void GPUCommandEncoder_set_label(GPUCommandEncoder* self, jb_String * value);

jb_Undefined GPUCommandEncoder_pushDebugGroup(GPUCommandEncoder* self , jb_String * groupLabel);

jb_Undefined GPUCommandEncoder_popDebugGroup(GPUCommandEncoder* self );

jb_Undefined GPUCommandEncoder_insertDebugMarker(GPUCommandEncoder* self , jb_String * markerLabel);
