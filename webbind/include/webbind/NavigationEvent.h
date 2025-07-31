#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "UIEvent.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct EventTarget EventTarget;


DECLARE_EMLITE_TYPE(NavigationEvent, UIEvent);

NavigationEvent NavigationEvent_new0(jb_String * type);

NavigationEvent NavigationEvent_new1(jb_String * type, jb_Any * eventInitDict);

SpatialNavigationDirection NavigationEvent_dir(const NavigationEvent *self);

EventTarget NavigationEvent_relatedTarget(const NavigationEvent *self);
