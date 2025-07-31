#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct MIDIPort MIDIPort;


DECLARE_EMLITE_TYPE(MIDIConnectionEvent, Event);

MIDIConnectionEvent MIDIConnectionEvent_new0(jb_String * type);

MIDIConnectionEvent MIDIConnectionEvent_new1(jb_String * type, jb_Any * eventInitDict);

MIDIPort MIDIConnectionEvent_port(const MIDIConnectionEvent *self);
