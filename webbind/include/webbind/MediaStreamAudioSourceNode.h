#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct MediaStream MediaStream;


DECLARE_EMLITE_TYPE(MediaStreamAudioSourceNode, AudioNode);

MediaStreamAudioSourceNode MediaStreamAudioSourceNode_new(AudioContext * context, jb_Any * options);

MediaStream MediaStreamAudioSourceNode_mediaStream(const MediaStreamAudioSourceNode *self);
