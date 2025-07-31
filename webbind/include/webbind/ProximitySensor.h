#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Sensor.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(ProximitySensor, Sensor);

ProximitySensor ProximitySensor_new0();

ProximitySensor ProximitySensor_new1(jb_Any * sensorOptions);

double ProximitySensor_distance(const ProximitySensor *self);

double ProximitySensor_max(const ProximitySensor *self);

bool ProximitySensor_near(const ProximitySensor *self);
