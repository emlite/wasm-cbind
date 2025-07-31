#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "GPUError.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(GPUInternalError, GPUError);

GPUInternalError GPUInternalError_new(jb_String * message);
