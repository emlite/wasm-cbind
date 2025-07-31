#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(Sensor, EventTarget);

bool Sensor_activated(const Sensor *self);

bool Sensor_hasReading(const Sensor *self);

jb_Any Sensor_timestamp(const Sensor *self);

jb_Undefined Sensor_start(Sensor* self );

jb_Undefined Sensor_stop(Sensor* self );

jb_Any Sensor_onreading(const Sensor *self);

void Sensor_set_onreading(Sensor* self, jb_Any * value);

jb_Any Sensor_onactivate(const Sensor *self);

void Sensor_set_onactivate(Sensor* self, jb_Any * value);

jb_Any Sensor_onerror(const Sensor *self);

void Sensor_set_onerror(Sensor* self, jb_Any * value);
