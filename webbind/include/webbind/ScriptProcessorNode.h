#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"


typedef struct {
  AudioNode inner;
} ScriptProcessorNode;


DECLARE_EMLITE_TYPE(ScriptProcessorNode, AudioNode);

jb_Any ScriptProcessorNode_onaudioprocess( const ScriptProcessorNode *self);

void ScriptProcessorNode_set_onaudioprocess(ScriptProcessorNode* self, const jb_Any* value);

long ScriptProcessorNode_bufferSize( const ScriptProcessorNode *self);
