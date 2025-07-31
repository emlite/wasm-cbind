#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "MouseEvent.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(WheelEvent, MouseEvent);

WheelEvent WheelEvent_new0(jb_String * type);

WheelEvent WheelEvent_new1(jb_String * type, jb_Any * eventInitDict);

double WheelEvent_deltaX(const WheelEvent *self);

double WheelEvent_deltaY(const WheelEvent *self);

double WheelEvent_deltaZ(const WheelEvent *self);

unsigned long WheelEvent_deltaMode(const WheelEvent *self);
