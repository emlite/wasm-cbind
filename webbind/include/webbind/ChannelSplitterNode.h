#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(ChannelSplitterNode, AudioNode);

ChannelSplitterNode ChannelSplitterNode_new0(BaseAudioContext * context);

ChannelSplitterNode ChannelSplitterNode_new1(BaseAudioContext * context, jb_Any * options);
