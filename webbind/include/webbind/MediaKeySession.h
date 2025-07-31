#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct MediaKeyStatusMap MediaKeyStatusMap;


DECLARE_EMLITE_TYPE(MediaKeySession, EventTarget);

jb_String MediaKeySession_sessionId(const MediaKeySession *self);

double MediaKeySession_expiration(const MediaKeySession *self);

jb_Promise MediaKeySession_closed(const MediaKeySession *self);

MediaKeyStatusMap MediaKeySession_keyStatuses(const MediaKeySession *self);

jb_Any MediaKeySession_onkeystatuseschange(const MediaKeySession *self);

void MediaKeySession_set_onkeystatuseschange(MediaKeySession* self, jb_Any * value);

jb_Any MediaKeySession_onmessage(const MediaKeySession *self);

void MediaKeySession_set_onmessage(MediaKeySession* self, jb_Any * value);

jb_Promise MediaKeySession_generateRequest(MediaKeySession* self , jb_String * initDataType, jb_Any * initData);

jb_Promise MediaKeySession_load(MediaKeySession* self , jb_String * sessionId);

jb_Promise MediaKeySession_update(MediaKeySession* self , jb_Any * response);

jb_Promise MediaKeySession_close(MediaKeySession* self );

jb_Promise MediaKeySession_remove(MediaKeySession* self );
