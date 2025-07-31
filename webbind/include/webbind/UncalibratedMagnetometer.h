#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Sensor.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(UncalibratedMagnetometer, Sensor);

UncalibratedMagnetometer UncalibratedMagnetometer_new0();

UncalibratedMagnetometer UncalibratedMagnetometer_new1(jb_Any * sensorOptions);

double UncalibratedMagnetometer_x(const UncalibratedMagnetometer *self);

double UncalibratedMagnetometer_y(const UncalibratedMagnetometer *self);

double UncalibratedMagnetometer_z(const UncalibratedMagnetometer *self);

double UncalibratedMagnetometer_xBias(const UncalibratedMagnetometer *self);

double UncalibratedMagnetometer_yBias(const UncalibratedMagnetometer *self);

double UncalibratedMagnetometer_zBias(const UncalibratedMagnetometer *self);
