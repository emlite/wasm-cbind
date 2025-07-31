#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "BaseAudioContext.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct AudioTimestamp AudioTimestamp;
typedef struct MediaElementAudioSourceNode MediaElementAudioSourceNode;
typedef struct HTMLMediaElement HTMLMediaElement;
typedef struct MediaStreamAudioSourceNode MediaStreamAudioSourceNode;
typedef struct MediaStream MediaStream;
typedef struct MediaStreamTrackAudioSourceNode MediaStreamTrackAudioSourceNode;
typedef struct MediaStreamTrack MediaStreamTrack;
typedef struct MediaStreamAudioDestinationNode MediaStreamAudioDestinationNode;


DECLARE_EMLITE_TYPE(AudioTimestamp, em_Val);

double AudioTimestamp_contextTime(const AudioTimestamp *self);

void AudioTimestamp_set_contextTime(AudioTimestamp* self, double value);

jb_Any AudioTimestamp_performanceTime(const AudioTimestamp *self);

void AudioTimestamp_set_performanceTime(AudioTimestamp* self, jb_Any * value);
DECLARE_EMLITE_TYPE(AudioContext, BaseAudioContext);

AudioContext AudioContext_new0();

AudioContext AudioContext_new1(jb_Any * contextOptions);

double AudioContext_baseLatency(const AudioContext *self);

double AudioContext_outputLatency(const AudioContext *self);

jb_Any AudioContext_sinkId(const AudioContext *self);

jb_Any AudioContext_onsinkchange(const AudioContext *self);

void AudioContext_set_onsinkchange(AudioContext* self, jb_Any * value);

jb_Any AudioContext_onerror(const AudioContext *self);

void AudioContext_set_onerror(AudioContext* self, jb_Any * value);

AudioTimestamp AudioContext_getOutputTimestamp(AudioContext* self );

jb_Promise AudioContext_resume(AudioContext* self );

jb_Promise AudioContext_suspend(AudioContext* self );

jb_Promise AudioContext_close(AudioContext* self );

jb_Promise AudioContext_setSinkId(AudioContext* self , jb_Any * sinkId);

MediaElementAudioSourceNode AudioContext_createMediaElementSource(AudioContext* self , HTMLMediaElement * mediaElement);

MediaStreamAudioSourceNode AudioContext_createMediaStreamSource(AudioContext* self , MediaStream * mediaStream);

MediaStreamTrackAudioSourceNode AudioContext_createMediaStreamTrackSource(AudioContext* self , MediaStreamTrack * mediaStreamTrack);

MediaStreamAudioDestinationNode AudioContext_createMediaStreamDestination(AudioContext* self );
