#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "DOMException.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(GPUPipelineError, DOMException);

GPUPipelineError GPUPipelineError_new0();

GPUPipelineError GPUPipelineError_new1(jb_String * message);

GPUPipelineError GPUPipelineError_new2(jb_String * message, jb_Any * options);

GPUPipelineErrorReason GPUPipelineError_reason(const GPUPipelineError *self);
