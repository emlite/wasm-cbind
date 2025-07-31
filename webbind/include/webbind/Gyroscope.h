#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Sensor.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(Gyroscope, Sensor);

Gyroscope Gyroscope_new0();

Gyroscope Gyroscope_new1(jb_Any * sensorOptions);

double Gyroscope_x(const Gyroscope *self);

double Gyroscope_y(const Gyroscope *self);

double Gyroscope_z(const Gyroscope *self);
