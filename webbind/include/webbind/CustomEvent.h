#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CustomEventInit CustomEventInit;

DECLARE_EMLITE_TYPE(CustomEvent, Event);

CustomEvent CustomEvent_new0(jb_String * type);

CustomEvent CustomEvent_new1(jb_String * type, CustomEventInit * eventInitDict);

jb_Any CustomEvent_detail(const CustomEvent *self);

jb_Undefined CustomEvent_initCustomEvent0(CustomEvent* self , jb_String * type);

jb_Undefined CustomEvent_initCustomEvent1(CustomEvent* self , jb_String * type, bool bubbles);

jb_Undefined CustomEvent_initCustomEvent2(CustomEvent* self , jb_String * type, bool bubbles, bool cancelable);

jb_Undefined CustomEvent_initCustomEvent3(CustomEvent* self , jb_String * type, bool bubbles, bool cancelable, jb_Any * detail);

#ifdef __cplusplus
}
#endif
