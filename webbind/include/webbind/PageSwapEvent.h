#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct NavigationActivation NavigationActivation;
typedef struct ViewTransition ViewTransition;


DECLARE_EMLITE_TYPE(PageSwapEvent, Event);

PageSwapEvent PageSwapEvent_new0(jb_String * type);

PageSwapEvent PageSwapEvent_new1(jb_String * type, jb_Any * eventInitDict);

NavigationActivation PageSwapEvent_activation(const PageSwapEvent *self);

ViewTransition PageSwapEvent_viewTransition(const PageSwapEvent *self);
