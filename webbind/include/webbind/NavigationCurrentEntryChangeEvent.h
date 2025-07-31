#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct NavigationHistoryEntry NavigationHistoryEntry;


DECLARE_EMLITE_TYPE(NavigationCurrentEntryChangeEvent, Event);

NavigationCurrentEntryChangeEvent NavigationCurrentEntryChangeEvent_new(jb_String * type, jb_Any * eventInitDict);

NavigationType NavigationCurrentEntryChangeEvent_navigationType(const NavigationCurrentEntryChangeEvent *self);

NavigationHistoryEntry NavigationCurrentEntryChangeEvent_from(const NavigationCurrentEntryChangeEvent *self);
