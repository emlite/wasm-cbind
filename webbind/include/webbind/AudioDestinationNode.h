#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(AudioDestinationNode, AudioNode);

unsigned long AudioDestinationNode_maxChannelCount(const AudioDestinationNode *self);
