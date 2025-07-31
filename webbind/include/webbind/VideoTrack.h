#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SourceBuffer SourceBuffer;


DECLARE_EMLITE_TYPE(VideoTrack, em_Val);

jb_String VideoTrack_id(const VideoTrack *self);

jb_String VideoTrack_kind(const VideoTrack *self);

jb_String VideoTrack_label(const VideoTrack *self);

jb_String VideoTrack_language(const VideoTrack *self);

bool VideoTrack_selected(const VideoTrack *self);

void VideoTrack_set_selected(VideoTrack* self, bool value);

SourceBuffer VideoTrack_sourceBuffer(const VideoTrack *self);
