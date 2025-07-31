#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct EventTarget EventTarget;


DECLARE_EMLITE_TYPE(Touch, em_Val);

Touch Touch_new(jb_Any * touchInitDict);

long Touch_identifier(const Touch *self);

EventTarget Touch_target(const Touch *self);

double Touch_screenX(const Touch *self);

double Touch_screenY(const Touch *self);

double Touch_clientX(const Touch *self);

double Touch_clientY(const Touch *self);

double Touch_pageX(const Touch *self);

double Touch_pageY(const Touch *self);

float Touch_radiusX(const Touch *self);

float Touch_radiusY(const Touch *self);

float Touch_rotationAngle(const Touch *self);

float Touch_force(const Touch *self);

float Touch_altitudeAngle(const Touch *self);

float Touch_azimuthAngle(const Touch *self);

TouchType Touch_touchType(const Touch *self);
