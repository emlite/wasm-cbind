#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct WritableStream WritableStream;
typedef struct MediaStreamTrack MediaStreamTrack;


DECLARE_EMLITE_TYPE(VideoTrackGenerator, em_Val);

VideoTrackGenerator VideoTrackGenerator_new();

WritableStream VideoTrackGenerator_writable(const VideoTrackGenerator *self);

bool VideoTrackGenerator_muted(const VideoTrackGenerator *self);

void VideoTrackGenerator_set_muted(VideoTrackGenerator* self, bool value);

MediaStreamTrack VideoTrackGenerator_track(const VideoTrackGenerator *self);
