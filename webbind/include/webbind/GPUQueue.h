#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "GPUCommandEncoder.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct GPUCommandBuffer GPUCommandBuffer;
typedef struct GPUBuffer GPUBuffer;
typedef struct GPUTexelCopyBufferLayout GPUTexelCopyBufferLayout;
typedef struct GPUCopyExternalImageSourceInfo GPUCopyExternalImageSourceInfo;
typedef struct GPUCopyExternalImageDestInfo GPUCopyExternalImageDestInfo;


DECLARE_EMLITE_TYPE(GPUTexelCopyBufferLayout, em_Val);

jb_Any GPUTexelCopyBufferLayout_offset(const GPUTexelCopyBufferLayout *self);

void GPUTexelCopyBufferLayout_set_offset(GPUTexelCopyBufferLayout* self, jb_Any * value);

jb_Any GPUTexelCopyBufferLayout_bytesPerRow(const GPUTexelCopyBufferLayout *self);

void GPUTexelCopyBufferLayout_set_bytesPerRow(GPUTexelCopyBufferLayout* self, jb_Any * value);

jb_Any GPUTexelCopyBufferLayout_rowsPerImage(const GPUTexelCopyBufferLayout *self);

void GPUTexelCopyBufferLayout_set_rowsPerImage(GPUTexelCopyBufferLayout* self, jb_Any * value);
DECLARE_EMLITE_TYPE(GPUCopyExternalImageSourceInfo, em_Val);

jb_Any GPUCopyExternalImageSourceInfo_source(const GPUCopyExternalImageSourceInfo *self);

void GPUCopyExternalImageSourceInfo_set_source(GPUCopyExternalImageSourceInfo* self, jb_Any * value);

jb_Any GPUCopyExternalImageSourceInfo_origin(const GPUCopyExternalImageSourceInfo *self);

void GPUCopyExternalImageSourceInfo_set_origin(GPUCopyExternalImageSourceInfo* self, jb_Any * value);

bool GPUCopyExternalImageSourceInfo_flipY(const GPUCopyExternalImageSourceInfo *self);

void GPUCopyExternalImageSourceInfo_set_flipY(GPUCopyExternalImageSourceInfo* self, bool value);
DECLARE_EMLITE_TYPE(GPUCopyExternalImageDestInfo, em_Val);

PredefinedColorSpace GPUCopyExternalImageDestInfo_colorSpace(const GPUCopyExternalImageDestInfo *self);

void GPUCopyExternalImageDestInfo_set_colorSpace(GPUCopyExternalImageDestInfo* self, PredefinedColorSpace * value);

bool GPUCopyExternalImageDestInfo_premultipliedAlpha(const GPUCopyExternalImageDestInfo *self);

void GPUCopyExternalImageDestInfo_set_premultipliedAlpha(GPUCopyExternalImageDestInfo* self, bool value);
DECLARE_EMLITE_TYPE(GPUQueue, em_Val);

jb_Undefined GPUQueue_submit(GPUQueue* self , jb_Array * commandBuffers);

jb_Promise GPUQueue_onSubmittedWorkDone(GPUQueue* self );

jb_Undefined GPUQueue_writeBuffer0(GPUQueue* self , GPUBuffer * buffer, jb_Any * bufferOffset, jb_Any * data);

jb_Undefined GPUQueue_writeBuffer1(GPUQueue* self , GPUBuffer * buffer, jb_Any * bufferOffset, jb_Any * data, jb_Any * dataOffset);

jb_Undefined GPUQueue_writeBuffer2(GPUQueue* self , GPUBuffer * buffer, jb_Any * bufferOffset, jb_Any * data, jb_Any * dataOffset, jb_Any * size);

jb_Undefined GPUQueue_writeTexture(GPUQueue* self , GPUTexelCopyTextureInfo * destination, jb_Any * data, GPUTexelCopyBufferLayout * dataLayout, jb_Any * size);

jb_Undefined GPUQueue_copyExternalImageToTexture(GPUQueue* self , GPUCopyExternalImageSourceInfo * source, GPUCopyExternalImageDestInfo * destination, jb_Any * copySize);

jb_String GPUQueue_label(const GPUQueue *self);

void GPUQueue_set_label(GPUQueue* self, jb_String * value);
