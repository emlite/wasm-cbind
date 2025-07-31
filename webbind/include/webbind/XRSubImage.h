#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct XRViewport XRViewport;


DECLARE_EMLITE_TYPE(XRSubImage, em_Val);

XRViewport XRSubImage_viewport(const XRSubImage *self);
