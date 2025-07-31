#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Accelerometer.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(LinearAccelerationSensor, Accelerometer);

LinearAccelerationSensor LinearAccelerationSensor_new0();

LinearAccelerationSensor LinearAccelerationSensor_new1(jb_Any * options);
