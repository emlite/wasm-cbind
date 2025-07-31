#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct GPUAdapter GPUAdapter;
typedef struct GPURequestAdapterOptions GPURequestAdapterOptions;
typedef struct WGSLLanguageFeatures WGSLLanguageFeatures;


DECLARE_EMLITE_TYPE(GPURequestAdapterOptions, em_Val);

jb_String GPURequestAdapterOptions_featureLevel(const GPURequestAdapterOptions *self);

void GPURequestAdapterOptions_set_featureLevel(GPURequestAdapterOptions* self, jb_String * value);

GPUPowerPreference GPURequestAdapterOptions_powerPreference(const GPURequestAdapterOptions *self);

void GPURequestAdapterOptions_set_powerPreference(GPURequestAdapterOptions* self, GPUPowerPreference * value);

bool GPURequestAdapterOptions_forceFallbackAdapter(const GPURequestAdapterOptions *self);

void GPURequestAdapterOptions_set_forceFallbackAdapter(GPURequestAdapterOptions* self, bool value);

bool GPURequestAdapterOptions_xrCompatible(const GPURequestAdapterOptions *self);

void GPURequestAdapterOptions_set_xrCompatible(GPURequestAdapterOptions* self, bool value);
DECLARE_EMLITE_TYPE(GPU, em_Val);

jb_Promise GPU_requestAdapter0(GPU* self );

jb_Promise GPU_requestAdapter1(GPU* self , GPURequestAdapterOptions * options);

GPUTextureFormat GPU_getPreferredCanvasFormat(GPU* self );

WGSLLanguageFeatures GPU_wgslLanguageFeatures(const GPU *self);
