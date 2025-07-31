#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Accelerometer.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(GravitySensor, Accelerometer);

GravitySensor GravitySensor_new0();

GravitySensor GravitySensor_new1(jb_Any * options);
