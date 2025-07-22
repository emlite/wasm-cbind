#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(ChannelMergerNode, AudioNode);

ChannelMergerNode ChannelMergerNode_new0(BaseAudioContext * context);

ChannelMergerNode ChannelMergerNode_new1(BaseAudioContext * context, jb_Any * options);
