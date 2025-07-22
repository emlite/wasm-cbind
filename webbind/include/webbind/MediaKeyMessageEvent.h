#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(MediaKeyMessageEvent, Event);

MediaKeyMessageEvent MediaKeyMessageEvent_new(jb_DOMString * type, jb_Any * eventInitDict);

MediaKeyMessageType MediaKeyMessageEvent_messageType( const MediaKeyMessageEvent *self);

jb_ArrayBuffer MediaKeyMessageEvent_message( const MediaKeyMessageEvent *self);
