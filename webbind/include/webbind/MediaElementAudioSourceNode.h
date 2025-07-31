#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct HTMLMediaElement HTMLMediaElement;
typedef struct AudioContext AudioContext;


DECLARE_EMLITE_TYPE(MediaElementAudioSourceNode, AudioNode);

MediaElementAudioSourceNode MediaElementAudioSourceNode_new(AudioContext * context, jb_Any * options);

HTMLMediaElement MediaElementAudioSourceNode_mediaElement(const MediaElementAudioSourceNode *self);
