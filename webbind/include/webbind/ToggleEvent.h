#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ToggleEventInit ToggleEventInit;
typedef struct Element Element;

DECLARE_EMLITE_TYPE(ToggleEvent, Event);

ToggleEvent ToggleEvent_new0(jb_String * type);

ToggleEvent ToggleEvent_new1(jb_String * type, ToggleEventInit * eventInitDict);

jb_String ToggleEvent_oldState(const ToggleEvent *self);

jb_String ToggleEvent_newState(const ToggleEvent *self);

Element ToggleEvent_source(const ToggleEvent *self);

#ifdef __cplusplus
}
#endif
