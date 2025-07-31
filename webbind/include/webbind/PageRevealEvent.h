#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct ViewTransition ViewTransition;


DECLARE_EMLITE_TYPE(PageRevealEvent, Event);

PageRevealEvent PageRevealEvent_new0(jb_String * type);

PageRevealEvent PageRevealEvent_new1(jb_String * type, jb_Any * eventInitDict);

ViewTransition PageRevealEvent_viewTransition(const PageRevealEvent *self);
