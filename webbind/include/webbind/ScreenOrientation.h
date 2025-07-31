#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(ScreenOrientation, EventTarget);

jb_Promise ScreenOrientation_lock(ScreenOrientation* self , OrientationLockType * orientation);

jb_Undefined ScreenOrientation_unlock(ScreenOrientation* self );

OrientationType ScreenOrientation_type(const ScreenOrientation *self);

unsigned short ScreenOrientation_angle(const ScreenOrientation *self);

jb_Any ScreenOrientation_onchange(const ScreenOrientation *self);

void ScreenOrientation_set_onchange(ScreenOrientation* self, jb_Any * value);
