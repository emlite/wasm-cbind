#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(DeviceMotionEventAcceleration, em_Val);

double DeviceMotionEventAcceleration_x(const DeviceMotionEventAcceleration *self);

double DeviceMotionEventAcceleration_y(const DeviceMotionEventAcceleration *self);

double DeviceMotionEventAcceleration_z(const DeviceMotionEventAcceleration *self);
