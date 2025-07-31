#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(WebGLShaderPrecisionFormat, em_Val);

jb_Any WebGLShaderPrecisionFormat_rangeMin(const WebGLShaderPrecisionFormat *self);

jb_Any WebGLShaderPrecisionFormat_rangeMax(const WebGLShaderPrecisionFormat *self);

jb_Any WebGLShaderPrecisionFormat_precision(const WebGLShaderPrecisionFormat *self);
