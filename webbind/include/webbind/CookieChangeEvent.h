#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "CookieStore.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CookieChangeEvent, Event);

CookieChangeEvent CookieChangeEvent_new0(jb_String * type);

CookieChangeEvent CookieChangeEvent_new1(jb_String * type, jb_Any * eventInitDict);

jb_Array CookieChangeEvent_changed(const CookieChangeEvent *self);

jb_Array CookieChangeEvent_deleted(const CookieChangeEvent *self);
