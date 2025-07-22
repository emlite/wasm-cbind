#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "OrientationSensor.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(AbsoluteOrientationSensor, OrientationSensor);

AbsoluteOrientationSensor AbsoluteOrientationSensor_new0();

AbsoluteOrientationSensor AbsoluteOrientationSensor_new1(jb_Any * sensorOptions);
