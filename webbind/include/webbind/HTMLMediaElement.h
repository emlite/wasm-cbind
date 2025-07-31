#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct MediaError MediaError;
typedef struct TimeRanges TimeRanges;
typedef struct AudioTrackList AudioTrackList;
typedef struct VideoTrackList VideoTrackList;
typedef struct TextTrackList TextTrackList;
typedef struct TextTrack TextTrack;
typedef struct MediaKeys MediaKeys;
typedef struct MediaStream MediaStream;
typedef struct RemotePlayback RemotePlayback;


DECLARE_EMLITE_TYPE(HTMLMediaElement, HTMLElement);

MediaError HTMLMediaElement_error(const HTMLMediaElement *self);

jb_String HTMLMediaElement_src(const HTMLMediaElement *self);

void HTMLMediaElement_set_src(HTMLMediaElement* self, jb_String * value);

jb_Any HTMLMediaElement_srcObject(const HTMLMediaElement *self);

void HTMLMediaElement_set_srcObject(HTMLMediaElement* self, jb_Any * value);

jb_String HTMLMediaElement_currentSrc(const HTMLMediaElement *self);

jb_String HTMLMediaElement_crossOrigin(const HTMLMediaElement *self);

void HTMLMediaElement_set_crossOrigin(HTMLMediaElement* self, jb_String * value);

unsigned short HTMLMediaElement_networkState(const HTMLMediaElement *self);

jb_String HTMLMediaElement_preload(const HTMLMediaElement *self);

void HTMLMediaElement_set_preload(HTMLMediaElement* self, jb_String * value);

TimeRanges HTMLMediaElement_buffered(const HTMLMediaElement *self);

jb_Undefined HTMLMediaElement_load(HTMLMediaElement* self );

CanPlayTypeResult HTMLMediaElement_canPlayType(HTMLMediaElement* self , jb_String * type);

unsigned short HTMLMediaElement_readyState(const HTMLMediaElement *self);

bool HTMLMediaElement_seeking(const HTMLMediaElement *self);

double HTMLMediaElement_currentTime(const HTMLMediaElement *self);

void HTMLMediaElement_set_currentTime(HTMLMediaElement* self, double value);

jb_Undefined HTMLMediaElement_fastSeek(HTMLMediaElement* self , double time);

double HTMLMediaElement_duration(const HTMLMediaElement *self);

jb_Object HTMLMediaElement_getStartDate(HTMLMediaElement* self );

bool HTMLMediaElement_paused(const HTMLMediaElement *self);

double HTMLMediaElement_defaultPlaybackRate(const HTMLMediaElement *self);

void HTMLMediaElement_set_defaultPlaybackRate(HTMLMediaElement* self, double value);

double HTMLMediaElement_playbackRate(const HTMLMediaElement *self);

void HTMLMediaElement_set_playbackRate(HTMLMediaElement* self, double value);

bool HTMLMediaElement_preservesPitch(const HTMLMediaElement *self);

void HTMLMediaElement_set_preservesPitch(HTMLMediaElement* self, bool value);

TimeRanges HTMLMediaElement_played(const HTMLMediaElement *self);

TimeRanges HTMLMediaElement_seekable(const HTMLMediaElement *self);

bool HTMLMediaElement_ended(const HTMLMediaElement *self);

bool HTMLMediaElement_autoplay(const HTMLMediaElement *self);

void HTMLMediaElement_set_autoplay(HTMLMediaElement* self, bool value);

bool HTMLMediaElement_loop(const HTMLMediaElement *self);

void HTMLMediaElement_set_loop(HTMLMediaElement* self, bool value);

jb_Promise HTMLMediaElement_play(HTMLMediaElement* self );

jb_Undefined HTMLMediaElement_pause(HTMLMediaElement* self );

bool HTMLMediaElement_controls(const HTMLMediaElement *self);

void HTMLMediaElement_set_controls(HTMLMediaElement* self, bool value);

double HTMLMediaElement_volume(const HTMLMediaElement *self);

void HTMLMediaElement_set_volume(HTMLMediaElement* self, double value);

bool HTMLMediaElement_muted(const HTMLMediaElement *self);

void HTMLMediaElement_set_muted(HTMLMediaElement* self, bool value);

bool HTMLMediaElement_defaultMuted(const HTMLMediaElement *self);

void HTMLMediaElement_set_defaultMuted(HTMLMediaElement* self, bool value);

AudioTrackList HTMLMediaElement_audioTracks(const HTMLMediaElement *self);

VideoTrackList HTMLMediaElement_videoTracks(const HTMLMediaElement *self);

TextTrackList HTMLMediaElement_textTracks(const HTMLMediaElement *self);

TextTrack HTMLMediaElement_addTextTrack0(HTMLMediaElement* self , TextTrackKind * kind);

TextTrack HTMLMediaElement_addTextTrack1(HTMLMediaElement* self , TextTrackKind * kind, jb_String * label);

TextTrack HTMLMediaElement_addTextTrack2(HTMLMediaElement* self , TextTrackKind * kind, jb_String * label, jb_String * language);

jb_String HTMLMediaElement_sinkId(const HTMLMediaElement *self);

jb_Promise HTMLMediaElement_setSinkId(HTMLMediaElement* self , jb_String * sinkId);

MediaKeys HTMLMediaElement_mediaKeys(const HTMLMediaElement *self);

jb_Any HTMLMediaElement_onencrypted(const HTMLMediaElement *self);

void HTMLMediaElement_set_onencrypted(HTMLMediaElement* self, jb_Any * value);

jb_Any HTMLMediaElement_onwaitingforkey(const HTMLMediaElement *self);

void HTMLMediaElement_set_onwaitingforkey(HTMLMediaElement* self, jb_Any * value);

jb_Promise HTMLMediaElement_setMediaKeys(HTMLMediaElement* self , MediaKeys * mediaKeys);

MediaStream HTMLMediaElement_captureStream(HTMLMediaElement* self );

RemotePlayback HTMLMediaElement_remote(const HTMLMediaElement *self);

bool HTMLMediaElement_disableRemotePlayback(const HTMLMediaElement *self);

void HTMLMediaElement_set_disableRemotePlayback(HTMLMediaElement* self, bool value);
