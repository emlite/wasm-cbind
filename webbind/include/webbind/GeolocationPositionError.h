#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(GeolocationPositionError, em_Val);

unsigned short GeolocationPositionError_code(const GeolocationPositionError *self);

jb_String GeolocationPositionError_message(const GeolocationPositionError *self);
