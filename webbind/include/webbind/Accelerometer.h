#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Sensor.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(Accelerometer, Sensor);

Accelerometer Accelerometer_new0();

Accelerometer Accelerometer_new1(jb_Any * options);

double Accelerometer_x(const Accelerometer *self);

double Accelerometer_y(const Accelerometer *self);

double Accelerometer_z(const Accelerometer *self);
