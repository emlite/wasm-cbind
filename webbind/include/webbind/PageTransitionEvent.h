#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(PageTransitionEvent, Event);

PageTransitionEvent PageTransitionEvent_new0(jb_String * type);

PageTransitionEvent PageTransitionEvent_new1(jb_String * type, jb_Any * eventInitDict);

bool PageTransitionEvent_persisted(const PageTransitionEvent *self);
