#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(RemotePlayback, EventTarget);

jb_Promise RemotePlayback_watchAvailability(RemotePlayback* self , jb_Function * callback);

jb_Promise RemotePlayback_cancelWatchAvailability0(RemotePlayback* self );

jb_Promise RemotePlayback_cancelWatchAvailability1(RemotePlayback* self , long id);

RemotePlaybackState RemotePlayback_state(const RemotePlayback *self);

jb_Any RemotePlayback_onconnecting(const RemotePlayback *self);

void RemotePlayback_set_onconnecting(RemotePlayback* self, jb_Any * value);

jb_Any RemotePlayback_onconnect(const RemotePlayback *self);

void RemotePlayback_set_onconnect(RemotePlayback* self, jb_Any * value);

jb_Any RemotePlayback_ondisconnect(const RemotePlayback *self);

void RemotePlayback_set_ondisconnect(RemotePlayback* self, jb_Any * value);

jb_Promise RemotePlayback_prompt(RemotePlayback* self );
