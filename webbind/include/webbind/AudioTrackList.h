#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct AudioTrack AudioTrack;


DECLARE_EMLITE_TYPE(AudioTrackList, EventTarget);

unsigned long AudioTrackList_length(const AudioTrackList *self);

AudioTrack AudioTrackList_getTrackById(AudioTrackList* self , jb_String * id);

jb_Any AudioTrackList_onchange(const AudioTrackList *self);

void AudioTrackList_set_onchange(AudioTrackList* self, jb_Any * value);

jb_Any AudioTrackList_onaddtrack(const AudioTrackList *self);

void AudioTrackList_set_onaddtrack(AudioTrackList* self, jb_Any * value);

jb_Any AudioTrackList_onremovetrack(const AudioTrackList *self);

void AudioTrackList_set_onremovetrack(AudioTrackList* self, jb_Any * value);
