#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct VideoTrack VideoTrack;


DECLARE_EMLITE_TYPE(VideoTrackList, EventTarget);

unsigned long VideoTrackList_length(const VideoTrackList *self);

VideoTrack VideoTrackList_getTrackById(VideoTrackList* self , jb_String * id);

long VideoTrackList_selectedIndex(const VideoTrackList *self);

jb_Any VideoTrackList_onchange(const VideoTrackList *self);

void VideoTrackList_set_onchange(VideoTrackList* self, jb_Any * value);

jb_Any VideoTrackList_onaddtrack(const VideoTrackList *self);

void VideoTrackList_set_onaddtrack(VideoTrackList* self, jb_Any * value);

jb_Any VideoTrackList_onremovetrack(const VideoTrackList *self);

void VideoTrackList_set_onremovetrack(VideoTrackList* self, jb_Any * value);
