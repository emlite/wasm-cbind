#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CanvasGradient, em_Val);

jb_Undefined CanvasGradient_addColorStop(CanvasGradient* self , double offset, jb_String * color);
