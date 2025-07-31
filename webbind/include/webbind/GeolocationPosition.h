#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct GeolocationCoordinates GeolocationCoordinates;


DECLARE_EMLITE_TYPE(GeolocationPosition, em_Val);

GeolocationCoordinates GeolocationPosition_coords(const GeolocationPosition *self);

jb_Any GeolocationPosition_timestamp(const GeolocationPosition *self);

jb_Object GeolocationPosition_toJSON(GeolocationPosition* self );
