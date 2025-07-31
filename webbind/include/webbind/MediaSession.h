#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct MediaMetadata MediaMetadata;
typedef struct MediaPositionState MediaPositionState;


DECLARE_EMLITE_TYPE(MediaPositionState, em_Val);

double MediaPositionState_duration(const MediaPositionState *self);

void MediaPositionState_set_duration(MediaPositionState* self, double value);

double MediaPositionState_playbackRate(const MediaPositionState *self);

void MediaPositionState_set_playbackRate(MediaPositionState* self, double value);

double MediaPositionState_position(const MediaPositionState *self);

void MediaPositionState_set_position(MediaPositionState* self, double value);
DECLARE_EMLITE_TYPE(MediaSession, em_Val);

MediaMetadata MediaSession_metadata(const MediaSession *self);

void MediaSession_set_metadata(MediaSession* self, MediaMetadata * value);

MediaSessionPlaybackState MediaSession_playbackState(const MediaSession *self);

void MediaSession_set_playbackState(MediaSession* self, MediaSessionPlaybackState * value);

jb_Undefined MediaSession_setActionHandler(MediaSession* self , MediaSessionAction * action, jb_Function * handler);

jb_Undefined MediaSession_setPositionState0(MediaSession* self );

jb_Undefined MediaSession_setPositionState1(MediaSession* self , MediaPositionState * state);

jb_Promise MediaSession_setMicrophoneActive(MediaSession* self , bool active);

jb_Promise MediaSession_setCameraActive(MediaSession* self , bool active);

jb_Promise MediaSession_setScreenshareActive(MediaSession* self , bool active);
