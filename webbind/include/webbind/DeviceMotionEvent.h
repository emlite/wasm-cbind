#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DeviceMotionEventAcceleration DeviceMotionEventAcceleration;
typedef struct DeviceMotionEventRotationRate DeviceMotionEventRotationRate;


DECLARE_EMLITE_TYPE(DeviceMotionEvent, Event);

DeviceMotionEvent DeviceMotionEvent_new0(jb_String * type);

DeviceMotionEvent DeviceMotionEvent_new1(jb_String * type, jb_Any * eventInitDict);

DeviceMotionEventAcceleration DeviceMotionEvent_acceleration(const DeviceMotionEvent *self);

DeviceMotionEventAcceleration DeviceMotionEvent_accelerationIncludingGravity(const DeviceMotionEvent *self);

DeviceMotionEventRotationRate DeviceMotionEvent_rotationRate(const DeviceMotionEvent *self);

double DeviceMotionEvent_interval(const DeviceMotionEvent *self);

jb_Promise DeviceMotionEvent_requestPermission(DeviceMotionEvent* self );
