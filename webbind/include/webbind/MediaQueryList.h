#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(MediaQueryList, EventTarget);

jb_String MediaQueryList_media(const MediaQueryList *self);

bool MediaQueryList_matches(const MediaQueryList *self);

jb_Undefined MediaQueryList_addListener(MediaQueryList* self , jb_Function * callback);

jb_Undefined MediaQueryList_removeListener(MediaQueryList* self , jb_Function * callback);

jb_Any MediaQueryList_onchange(const MediaQueryList *self);

void MediaQueryList_set_onchange(MediaQueryList* self, jb_Any * value);
