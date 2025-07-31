#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct AudioParam AudioParam;


DECLARE_EMLITE_TYPE(AudioListener, em_Val);

AudioParam AudioListener_positionX(const AudioListener *self);

AudioParam AudioListener_positionY(const AudioListener *self);

AudioParam AudioListener_positionZ(const AudioListener *self);

AudioParam AudioListener_forwardX(const AudioListener *self);

AudioParam AudioListener_forwardY(const AudioListener *self);

AudioParam AudioListener_forwardZ(const AudioListener *self);

AudioParam AudioListener_upX(const AudioListener *self);

AudioParam AudioListener_upY(const AudioListener *self);

AudioParam AudioListener_upZ(const AudioListener *self);

jb_Undefined AudioListener_setPosition(AudioListener* self , float x, float y, float z);

jb_Undefined AudioListener_setOrientation(AudioListener* self , float x, float y, float z, float xUp, float yUp, float zUp);
