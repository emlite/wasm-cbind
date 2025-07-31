#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Sensor.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(Magnetometer, Sensor);

Magnetometer Magnetometer_new0();

Magnetometer Magnetometer_new1(jb_Any * sensorOptions);

double Magnetometer_x(const Magnetometer *self);

double Magnetometer_y(const Magnetometer *self);

double Magnetometer_z(const Magnetometer *self);
