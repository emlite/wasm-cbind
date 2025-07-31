#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ExtendableEvent.h"
#include "CookieStore.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(ExtendableCookieChangeEvent, ExtendableEvent);

ExtendableCookieChangeEvent ExtendableCookieChangeEvent_new0(jb_String * type);

ExtendableCookieChangeEvent ExtendableCookieChangeEvent_new1(jb_String * type, jb_Any * eventInitDict);

jb_Array ExtendableCookieChangeEvent_changed(const ExtendableCookieChangeEvent *self);

jb_Array ExtendableCookieChangeEvent_deleted(const ExtendableCookieChangeEvent *self);
