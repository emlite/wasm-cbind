#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(VideoPlaybackQuality, em_Val);

jb_Any VideoPlaybackQuality_creationTime(const VideoPlaybackQuality *self);

unsigned long VideoPlaybackQuality_droppedVideoFrames(const VideoPlaybackQuality *self);

unsigned long VideoPlaybackQuality_totalVideoFrames(const VideoPlaybackQuality *self);

unsigned long VideoPlaybackQuality_corruptedVideoFrames(const VideoPlaybackQuality *self);
