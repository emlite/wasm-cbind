#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct MessagePort MessagePort;


DECLARE_EMLITE_TYPE(AudioWorkletProcessor, em_Val);

AudioWorkletProcessor AudioWorkletProcessor_new();

jb_Any AudioWorkletProcessor_port(const AudioWorkletProcessor *self);
