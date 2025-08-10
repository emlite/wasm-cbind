#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Sensor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SensorOptions SensorOptions;

DECLARE_EMLITE_TYPE(ProximitySensor, Sensor);

ProximitySensor ProximitySensor_new0();

ProximitySensor ProximitySensor_new1(SensorOptions * sensorOptions);

double ProximitySensor_distance(const ProximitySensor *self);

double ProximitySensor_max(const ProximitySensor *self);

bool ProximitySensor_near(const ProximitySensor *self);

#ifdef __cplusplus
}
#endif
