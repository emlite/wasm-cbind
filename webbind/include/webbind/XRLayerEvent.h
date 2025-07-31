#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct XRLayer XRLayer;


DECLARE_EMLITE_TYPE(XRLayerEvent, Event);

XRLayerEvent XRLayerEvent_new(jb_String * type, jb_Any * eventInitDict);

XRLayer XRLayerEvent_layer(const XRLayerEvent *self);
