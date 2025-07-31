#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct MediaStreamTrack MediaStreamTrack;


DECLARE_EMLITE_TYPE(MediaStreamTrackEvent, Event);

MediaStreamTrackEvent MediaStreamTrackEvent_new(jb_String * type, jb_Any * eventInitDict);

MediaStreamTrack MediaStreamTrackEvent_track(const MediaStreamTrackEvent *self);
