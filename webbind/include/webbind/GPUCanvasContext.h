#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct GPUCanvasConfiguration GPUCanvasConfiguration;
typedef struct GPUTexture GPUTexture;
typedef struct GPUDevice GPUDevice;


DECLARE_EMLITE_TYPE(GPUCanvasConfiguration, em_Val);

GPUDevice GPUCanvasConfiguration_device(const GPUCanvasConfiguration *self);

void GPUCanvasConfiguration_set_device(GPUCanvasConfiguration* self, GPUDevice * value);

GPUTextureFormat GPUCanvasConfiguration_format(const GPUCanvasConfiguration *self);

void GPUCanvasConfiguration_set_format(GPUCanvasConfiguration* self, GPUTextureFormat * value);

jb_Any GPUCanvasConfiguration_usage(const GPUCanvasConfiguration *self);

void GPUCanvasConfiguration_set_usage(GPUCanvasConfiguration* self, jb_Any * value);

jb_Array GPUCanvasConfiguration_viewFormats(const GPUCanvasConfiguration *self);

void GPUCanvasConfiguration_set_viewFormats(GPUCanvasConfiguration* self, jb_Array * value);

PredefinedColorSpace GPUCanvasConfiguration_colorSpace(const GPUCanvasConfiguration *self);

void GPUCanvasConfiguration_set_colorSpace(GPUCanvasConfiguration* self, PredefinedColorSpace * value);

jb_Any GPUCanvasConfiguration_toneMapping(const GPUCanvasConfiguration *self);

void GPUCanvasConfiguration_set_toneMapping(GPUCanvasConfiguration* self, jb_Any * value);

GPUCanvasAlphaMode GPUCanvasConfiguration_alphaMode(const GPUCanvasConfiguration *self);

void GPUCanvasConfiguration_set_alphaMode(GPUCanvasConfiguration* self, GPUCanvasAlphaMode * value);
DECLARE_EMLITE_TYPE(GPUCanvasContext, em_Val);

jb_Any GPUCanvasContext_canvas(const GPUCanvasContext *self);

jb_Undefined GPUCanvasContext_configure(GPUCanvasContext* self , GPUCanvasConfiguration * configuration);

jb_Undefined GPUCanvasContext_unconfigure(GPUCanvasContext* self );

GPUCanvasConfiguration GPUCanvasContext_getConfiguration(GPUCanvasContext* self );

GPUTexture GPUCanvasContext_getCurrentTexture(GPUCanvasContext* self );
