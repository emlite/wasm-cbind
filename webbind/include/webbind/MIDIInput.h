#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "MIDIPort.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(MIDIInput, MIDIPort);

jb_Any MIDIInput_onmidimessage(const MIDIInput *self);

void MIDIInput_set_onmidimessage(MIDIInput* self, jb_Any * value);
