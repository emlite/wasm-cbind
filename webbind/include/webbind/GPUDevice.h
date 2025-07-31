#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct GPUSupportedFeatures GPUSupportedFeatures;
typedef struct GPUSupportedLimits GPUSupportedLimits;
typedef struct GPUAdapterInfo GPUAdapterInfo;
typedef struct GPUQueue GPUQueue;
typedef struct GPUBuffer GPUBuffer;
typedef struct GPUBufferDescriptor GPUBufferDescriptor;
typedef struct GPUTexture GPUTexture;
typedef struct GPUTextureDescriptor GPUTextureDescriptor;
typedef struct GPUSampler GPUSampler;
typedef struct GPUSamplerDescriptor GPUSamplerDescriptor;
typedef struct GPUExternalTexture GPUExternalTexture;
typedef struct GPUExternalTextureDescriptor GPUExternalTextureDescriptor;
typedef struct GPUBindGroupLayout GPUBindGroupLayout;
typedef struct GPUBindGroupLayoutDescriptor GPUBindGroupLayoutDescriptor;
typedef struct GPUPipelineLayout GPUPipelineLayout;
typedef struct GPUPipelineLayoutDescriptor GPUPipelineLayoutDescriptor;
typedef struct GPUBindGroup GPUBindGroup;
typedef struct GPUBindGroupDescriptor GPUBindGroupDescriptor;
typedef struct GPUShaderModule GPUShaderModule;
typedef struct GPUShaderModuleDescriptor GPUShaderModuleDescriptor;
typedef struct GPUComputePipeline GPUComputePipeline;
typedef struct GPUComputePipelineDescriptor GPUComputePipelineDescriptor;
typedef struct GPURenderPipeline GPURenderPipeline;
typedef struct GPURenderPipelineDescriptor GPURenderPipelineDescriptor;
typedef struct GPUCommandEncoder GPUCommandEncoder;
typedef struct GPUCommandEncoderDescriptor GPUCommandEncoderDescriptor;
typedef struct GPURenderBundleEncoder GPURenderBundleEncoder;
typedef struct GPURenderBundleEncoderDescriptor GPURenderBundleEncoderDescriptor;
typedef struct GPUQuerySet GPUQuerySet;
typedef struct GPUQuerySetDescriptor GPUQuerySetDescriptor;
typedef struct GPUDeviceLostInfo GPUDeviceLostInfo;
typedef struct GPUError GPUError;


DECLARE_EMLITE_TYPE(GPUBufferDescriptor, em_Val);

jb_Any GPUBufferDescriptor_size(const GPUBufferDescriptor *self);

void GPUBufferDescriptor_set_size(GPUBufferDescriptor* self, jb_Any * value);

jb_Any GPUBufferDescriptor_usage(const GPUBufferDescriptor *self);

void GPUBufferDescriptor_set_usage(GPUBufferDescriptor* self, jb_Any * value);

bool GPUBufferDescriptor_mappedAtCreation(const GPUBufferDescriptor *self);

void GPUBufferDescriptor_set_mappedAtCreation(GPUBufferDescriptor* self, bool value);
DECLARE_EMLITE_TYPE(GPUTextureDescriptor, em_Val);

jb_Any GPUTextureDescriptor_size(const GPUTextureDescriptor *self);

void GPUTextureDescriptor_set_size(GPUTextureDescriptor* self, jb_Any * value);

jb_Any GPUTextureDescriptor_mipLevelCount(const GPUTextureDescriptor *self);

void GPUTextureDescriptor_set_mipLevelCount(GPUTextureDescriptor* self, jb_Any * value);

jb_Any GPUTextureDescriptor_sampleCount(const GPUTextureDescriptor *self);

void GPUTextureDescriptor_set_sampleCount(GPUTextureDescriptor* self, jb_Any * value);

GPUTextureDimension GPUTextureDescriptor_dimension(const GPUTextureDescriptor *self);

void GPUTextureDescriptor_set_dimension(GPUTextureDescriptor* self, GPUTextureDimension * value);

GPUTextureFormat GPUTextureDescriptor_format(const GPUTextureDescriptor *self);

void GPUTextureDescriptor_set_format(GPUTextureDescriptor* self, GPUTextureFormat * value);

jb_Any GPUTextureDescriptor_usage(const GPUTextureDescriptor *self);

void GPUTextureDescriptor_set_usage(GPUTextureDescriptor* self, jb_Any * value);

jb_Array GPUTextureDescriptor_viewFormats(const GPUTextureDescriptor *self);

void GPUTextureDescriptor_set_viewFormats(GPUTextureDescriptor* self, jb_Array * value);
DECLARE_EMLITE_TYPE(GPUSamplerDescriptor, em_Val);

GPUAddressMode GPUSamplerDescriptor_addressModeU(const GPUSamplerDescriptor *self);

void GPUSamplerDescriptor_set_addressModeU(GPUSamplerDescriptor* self, GPUAddressMode * value);

GPUAddressMode GPUSamplerDescriptor_addressModeV(const GPUSamplerDescriptor *self);

void GPUSamplerDescriptor_set_addressModeV(GPUSamplerDescriptor* self, GPUAddressMode * value);

GPUAddressMode GPUSamplerDescriptor_addressModeW(const GPUSamplerDescriptor *self);

void GPUSamplerDescriptor_set_addressModeW(GPUSamplerDescriptor* self, GPUAddressMode * value);

GPUFilterMode GPUSamplerDescriptor_magFilter(const GPUSamplerDescriptor *self);

void GPUSamplerDescriptor_set_magFilter(GPUSamplerDescriptor* self, GPUFilterMode * value);

GPUFilterMode GPUSamplerDescriptor_minFilter(const GPUSamplerDescriptor *self);

void GPUSamplerDescriptor_set_minFilter(GPUSamplerDescriptor* self, GPUFilterMode * value);

GPUMipmapFilterMode GPUSamplerDescriptor_mipmapFilter(const GPUSamplerDescriptor *self);

void GPUSamplerDescriptor_set_mipmapFilter(GPUSamplerDescriptor* self, GPUMipmapFilterMode * value);

float GPUSamplerDescriptor_lodMinClamp(const GPUSamplerDescriptor *self);

void GPUSamplerDescriptor_set_lodMinClamp(GPUSamplerDescriptor* self, float value);

float GPUSamplerDescriptor_lodMaxClamp(const GPUSamplerDescriptor *self);

void GPUSamplerDescriptor_set_lodMaxClamp(GPUSamplerDescriptor* self, float value);

GPUCompareFunction GPUSamplerDescriptor_compare(const GPUSamplerDescriptor *self);

void GPUSamplerDescriptor_set_compare(GPUSamplerDescriptor* self, GPUCompareFunction * value);

unsigned short GPUSamplerDescriptor_maxAnisotropy(const GPUSamplerDescriptor *self);

void GPUSamplerDescriptor_set_maxAnisotropy(GPUSamplerDescriptor* self, unsigned short value);
DECLARE_EMLITE_TYPE(GPUExternalTextureDescriptor, em_Val);

jb_Any GPUExternalTextureDescriptor_source(const GPUExternalTextureDescriptor *self);

void GPUExternalTextureDescriptor_set_source(GPUExternalTextureDescriptor* self, jb_Any * value);

PredefinedColorSpace GPUExternalTextureDescriptor_colorSpace(const GPUExternalTextureDescriptor *self);

void GPUExternalTextureDescriptor_set_colorSpace(GPUExternalTextureDescriptor* self, PredefinedColorSpace * value);
DECLARE_EMLITE_TYPE(GPUBindGroupLayoutDescriptor, em_Val);

jb_Array GPUBindGroupLayoutDescriptor_entries(const GPUBindGroupLayoutDescriptor *self);

void GPUBindGroupLayoutDescriptor_set_entries(GPUBindGroupLayoutDescriptor* self, jb_Array * value);
DECLARE_EMLITE_TYPE(GPUPipelineLayoutDescriptor, em_Val);

jb_Array GPUPipelineLayoutDescriptor_bindGroupLayouts(const GPUPipelineLayoutDescriptor *self);

void GPUPipelineLayoutDescriptor_set_bindGroupLayouts(GPUPipelineLayoutDescriptor* self, jb_Array * value);
DECLARE_EMLITE_TYPE(GPUBindGroupDescriptor, em_Val);

GPUBindGroupLayout GPUBindGroupDescriptor_layout(const GPUBindGroupDescriptor *self);

void GPUBindGroupDescriptor_set_layout(GPUBindGroupDescriptor* self, GPUBindGroupLayout * value);

jb_Array GPUBindGroupDescriptor_entries(const GPUBindGroupDescriptor *self);

void GPUBindGroupDescriptor_set_entries(GPUBindGroupDescriptor* self, jb_Array * value);
DECLARE_EMLITE_TYPE(GPUShaderModuleDescriptor, em_Val);

jb_String GPUShaderModuleDescriptor_code(const GPUShaderModuleDescriptor *self);

void GPUShaderModuleDescriptor_set_code(GPUShaderModuleDescriptor* self, jb_String * value);

jb_Array GPUShaderModuleDescriptor_compilationHints(const GPUShaderModuleDescriptor *self);

void GPUShaderModuleDescriptor_set_compilationHints(GPUShaderModuleDescriptor* self, jb_Array * value);
DECLARE_EMLITE_TYPE(GPUComputePipelineDescriptor, em_Val);

jb_Any GPUComputePipelineDescriptor_compute(const GPUComputePipelineDescriptor *self);

void GPUComputePipelineDescriptor_set_compute(GPUComputePipelineDescriptor* self, jb_Any * value);
DECLARE_EMLITE_TYPE(GPURenderPipelineDescriptor, em_Val);

jb_Any GPURenderPipelineDescriptor_vertex(const GPURenderPipelineDescriptor *self);

void GPURenderPipelineDescriptor_set_vertex(GPURenderPipelineDescriptor* self, jb_Any * value);

jb_Any GPURenderPipelineDescriptor_primitive(const GPURenderPipelineDescriptor *self);

void GPURenderPipelineDescriptor_set_primitive(GPURenderPipelineDescriptor* self, jb_Any * value);

jb_Any GPURenderPipelineDescriptor_depthStencil(const GPURenderPipelineDescriptor *self);

void GPURenderPipelineDescriptor_set_depthStencil(GPURenderPipelineDescriptor* self, jb_Any * value);

jb_Any GPURenderPipelineDescriptor_multisample(const GPURenderPipelineDescriptor *self);

void GPURenderPipelineDescriptor_set_multisample(GPURenderPipelineDescriptor* self, jb_Any * value);

jb_Any GPURenderPipelineDescriptor_fragment(const GPURenderPipelineDescriptor *self);

void GPURenderPipelineDescriptor_set_fragment(GPURenderPipelineDescriptor* self, jb_Any * value);
DECLARE_EMLITE_TYPE(GPUCommandEncoderDescriptor, em_Val);
DECLARE_EMLITE_TYPE(GPURenderBundleEncoderDescriptor, em_Val);

bool GPURenderBundleEncoderDescriptor_depthReadOnly(const GPURenderBundleEncoderDescriptor *self);

void GPURenderBundleEncoderDescriptor_set_depthReadOnly(GPURenderBundleEncoderDescriptor* self, bool value);

bool GPURenderBundleEncoderDescriptor_stencilReadOnly(const GPURenderBundleEncoderDescriptor *self);

void GPURenderBundleEncoderDescriptor_set_stencilReadOnly(GPURenderBundleEncoderDescriptor* self, bool value);
DECLARE_EMLITE_TYPE(GPUQuerySetDescriptor, em_Val);

GPUQueryType GPUQuerySetDescriptor_type(const GPUQuerySetDescriptor *self);

void GPUQuerySetDescriptor_set_type(GPUQuerySetDescriptor* self, GPUQueryType * value);

jb_Any GPUQuerySetDescriptor_count(const GPUQuerySetDescriptor *self);

void GPUQuerySetDescriptor_set_count(GPUQuerySetDescriptor* self, jb_Any * value);
DECLARE_EMLITE_TYPE(GPUDevice, EventTarget);

GPUSupportedFeatures GPUDevice_features(const GPUDevice *self);

GPUSupportedLimits GPUDevice_limits(const GPUDevice *self);

GPUAdapterInfo GPUDevice_adapterInfo(const GPUDevice *self);

GPUQueue GPUDevice_queue(const GPUDevice *self);

jb_Undefined GPUDevice_destroy(GPUDevice* self );

GPUBuffer GPUDevice_createBuffer(GPUDevice* self , GPUBufferDescriptor * descriptor);

GPUTexture GPUDevice_createTexture(GPUDevice* self , GPUTextureDescriptor * descriptor);

GPUSampler GPUDevice_createSampler0(GPUDevice* self );

GPUSampler GPUDevice_createSampler1(GPUDevice* self , GPUSamplerDescriptor * descriptor);

GPUExternalTexture GPUDevice_importExternalTexture(GPUDevice* self , GPUExternalTextureDescriptor * descriptor);

GPUBindGroupLayout GPUDevice_createBindGroupLayout(GPUDevice* self , GPUBindGroupLayoutDescriptor * descriptor);

GPUPipelineLayout GPUDevice_createPipelineLayout(GPUDevice* self , GPUPipelineLayoutDescriptor * descriptor);

GPUBindGroup GPUDevice_createBindGroup(GPUDevice* self , GPUBindGroupDescriptor * descriptor);

GPUShaderModule GPUDevice_createShaderModule(GPUDevice* self , GPUShaderModuleDescriptor * descriptor);

GPUComputePipeline GPUDevice_createComputePipeline(GPUDevice* self , GPUComputePipelineDescriptor * descriptor);

GPURenderPipeline GPUDevice_createRenderPipeline(GPUDevice* self , GPURenderPipelineDescriptor * descriptor);

jb_Promise GPUDevice_createComputePipelineAsync(GPUDevice* self , GPUComputePipelineDescriptor * descriptor);

jb_Promise GPUDevice_createRenderPipelineAsync(GPUDevice* self , GPURenderPipelineDescriptor * descriptor);

GPUCommandEncoder GPUDevice_createCommandEncoder0(GPUDevice* self );

GPUCommandEncoder GPUDevice_createCommandEncoder1(GPUDevice* self , GPUCommandEncoderDescriptor * descriptor);

GPURenderBundleEncoder GPUDevice_createRenderBundleEncoder(GPUDevice* self , GPURenderBundleEncoderDescriptor * descriptor);

GPUQuerySet GPUDevice_createQuerySet(GPUDevice* self , GPUQuerySetDescriptor * descriptor);

jb_Promise GPUDevice_lost(const GPUDevice *self);

jb_Undefined GPUDevice_pushErrorScope(GPUDevice* self , GPUErrorFilter * filter);

jb_Promise GPUDevice_popErrorScope(GPUDevice* self );

jb_Any GPUDevice_onuncapturederror(const GPUDevice *self);

void GPUDevice_set_onuncapturederror(GPUDevice* self, jb_Any * value);

jb_String GPUDevice_label(const GPUDevice *self);

void GPUDevice_set_label(GPUDevice* self, jb_String * value);
