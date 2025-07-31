#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "UIEvent.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct TouchList TouchList;


DECLARE_EMLITE_TYPE(TouchEvent, UIEvent);

TouchEvent TouchEvent_new0(jb_String * type);

TouchEvent TouchEvent_new1(jb_String * type, jb_Any * eventInitDict);

TouchList TouchEvent_touches(const TouchEvent *self);

TouchList TouchEvent_targetTouches(const TouchEvent *self);

TouchList TouchEvent_changedTouches(const TouchEvent *self);

bool TouchEvent_altKey(const TouchEvent *self);

bool TouchEvent_metaKey(const TouchEvent *self);

bool TouchEvent_ctrlKey(const TouchEvent *self);

bool TouchEvent_shiftKey(const TouchEvent *self);

bool TouchEvent_getModifierState(TouchEvent* self , jb_String * keyArg);
