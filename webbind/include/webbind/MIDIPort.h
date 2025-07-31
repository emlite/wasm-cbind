#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct MIDIPort MIDIPort;


DECLARE_EMLITE_TYPE(MIDIPort, EventTarget);

jb_String MIDIPort_id(const MIDIPort *self);

jb_String MIDIPort_manufacturer(const MIDIPort *self);

jb_String MIDIPort_name(const MIDIPort *self);

MIDIPortType MIDIPort_type(const MIDIPort *self);

jb_String MIDIPort_version(const MIDIPort *self);

MIDIPortDeviceState MIDIPort_state(const MIDIPort *self);

MIDIPortConnectionState MIDIPort_connection(const MIDIPort *self);

jb_Any MIDIPort_onstatechange(const MIDIPort *self);

void MIDIPort_set_onstatechange(MIDIPort* self, jb_Any * value);

jb_Promise MIDIPort_open(MIDIPort* self );

jb_Promise MIDIPort_close(MIDIPort* self );
