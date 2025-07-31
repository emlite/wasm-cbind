#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "OrientationSensor.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(RelativeOrientationSensor, OrientationSensor);

RelativeOrientationSensor RelativeOrientationSensor_new0();

RelativeOrientationSensor RelativeOrientationSensor_new1(jb_Any * sensorOptions);
