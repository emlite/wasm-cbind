#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(TrackEvent, Event);

TrackEvent TrackEvent_new0(jb_String * type);

TrackEvent TrackEvent_new1(jb_String * type, jb_Any * eventInitDict);

jb_Any TrackEvent_track(const TrackEvent *self);
