#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct XRInputSource XRInputSource;


DECLARE_EMLITE_TYPE(XRInputSourceArray, em_Val);

unsigned long XRInputSourceArray_length(const XRInputSourceArray *self);
