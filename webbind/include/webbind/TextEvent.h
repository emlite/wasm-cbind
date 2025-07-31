#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "UIEvent.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Window Window;


DECLARE_EMLITE_TYPE(TextEvent, UIEvent);

jb_String TextEvent_data(const TextEvent *self);

jb_Undefined TextEvent_initTextEvent0(TextEvent* self , jb_String * type);

jb_Undefined TextEvent_initTextEvent1(TextEvent* self , jb_String * type, bool bubbles);

jb_Undefined TextEvent_initTextEvent2(TextEvent* self , jb_String * type, bool bubbles, bool cancelable);

jb_Undefined TextEvent_initTextEvent3(TextEvent* self , jb_String * type, bool bubbles, bool cancelable, Window * view);

jb_Undefined TextEvent_initTextEvent4(TextEvent* self , jb_String * type, bool bubbles, bool cancelable, Window * view, jb_String * data);
