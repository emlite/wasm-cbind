#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(GeolocationCoordinates, em_Val);

double GeolocationCoordinates_accuracy(const GeolocationCoordinates *self);

double GeolocationCoordinates_latitude(const GeolocationCoordinates *self);

double GeolocationCoordinates_longitude(const GeolocationCoordinates *self);

double GeolocationCoordinates_altitude(const GeolocationCoordinates *self);

double GeolocationCoordinates_altitudeAccuracy(const GeolocationCoordinates *self);

double GeolocationCoordinates_heading(const GeolocationCoordinates *self);

double GeolocationCoordinates_speed(const GeolocationCoordinates *self);

jb_Object GeolocationCoordinates_toJSON(GeolocationCoordinates* self );
