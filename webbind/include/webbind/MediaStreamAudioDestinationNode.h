#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct MediaStream MediaStream;


DECLARE_EMLITE_TYPE(MediaStreamAudioDestinationNode, AudioNode);

MediaStreamAudioDestinationNode MediaStreamAudioDestinationNode_new0(AudioContext * context);

MediaStreamAudioDestinationNode MediaStreamAudioDestinationNode_new1(AudioContext * context, jb_Any * options);

MediaStream MediaStreamAudioDestinationNode_stream(const MediaStreamAudioDestinationNode *self);
