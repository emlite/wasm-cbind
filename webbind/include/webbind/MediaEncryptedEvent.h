#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(MediaEncryptedEvent, Event);

MediaEncryptedEvent MediaEncryptedEvent_new0(jb_String * type);

MediaEncryptedEvent MediaEncryptedEvent_new1(jb_String * type, jb_Any * eventInitDict);

jb_String MediaEncryptedEvent_initDataType(const MediaEncryptedEvent *self);

jb_ArrayBuffer MediaEncryptedEvent_initData(const MediaEncryptedEvent *self);
