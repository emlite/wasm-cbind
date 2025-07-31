#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct GPUError GPUError;


DECLARE_EMLITE_TYPE(GPUUncapturedErrorEvent, Event);

GPUUncapturedErrorEvent GPUUncapturedErrorEvent_new(jb_String * type, jb_Any * gpuUncapturedErrorEventInitDict);

GPUError GPUUncapturedErrorEvent_error(const GPUUncapturedErrorEvent *self);
