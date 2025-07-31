#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Worklet.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct MessagePort MessagePort;


DECLARE_EMLITE_TYPE(AudioWorklet, Worklet);

jb_Any AudioWorklet_port(const AudioWorklet *self);
