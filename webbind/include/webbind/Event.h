#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct EventTarget EventTarget;


DECLARE_EMLITE_TYPE(Event, em_Val);

Event Event_new0(jb_String * type);

Event Event_new1(jb_String * type, jb_Any * eventInitDict);

jb_String Event_type(const Event *self);

EventTarget Event_target(const Event *self);

EventTarget Event_srcElement(const Event *self);

EventTarget Event_currentTarget(const Event *self);

jb_Array Event_composedPath(Event* self );

unsigned short Event_eventPhase(const Event *self);

jb_Undefined Event_stopPropagation(Event* self );

bool Event_cancelBubble(const Event *self);

void Event_set_cancelBubble(Event* self, bool value);

jb_Undefined Event_stopImmediatePropagation(Event* self );

bool Event_bubbles(const Event *self);

bool Event_cancelable(const Event *self);

bool Event_returnValue(const Event *self);

void Event_set_returnValue(Event* self, bool value);

jb_Undefined Event_preventDefault(Event* self );

bool Event_defaultPrevented(const Event *self);

bool Event_composed(const Event *self);

bool Event_isTrusted(const Event *self);

jb_Any Event_timeStamp(const Event *self);

jb_Undefined Event_initEvent0(Event* self , jb_String * type);

jb_Undefined Event_initEvent1(Event* self , jb_String * type, bool bubbles);

jb_Undefined Event_initEvent2(Event* self , jb_String * type, bool bubbles, bool cancelable);
