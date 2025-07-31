#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Event Event;
typedef struct Observable Observable;
typedef struct ObservableEventListenerOptions ObservableEventListenerOptions;


DECLARE_EMLITE_TYPE(ObservableEventListenerOptions, em_Val);

bool ObservableEventListenerOptions_capture(const ObservableEventListenerOptions *self);

void ObservableEventListenerOptions_set_capture(ObservableEventListenerOptions* self, bool value);

bool ObservableEventListenerOptions_passive(const ObservableEventListenerOptions *self);

void ObservableEventListenerOptions_set_passive(ObservableEventListenerOptions* self, bool value);
DECLARE_EMLITE_TYPE(EventTarget, em_Val);

EventTarget EventTarget_new();

jb_Undefined EventTarget_addEventListener0(EventTarget* self , jb_String * type, jb_Function * callback);

jb_Undefined EventTarget_addEventListener1(EventTarget* self , jb_String * type, jb_Function * callback, jb_Any * options);

jb_Undefined EventTarget_removeEventListener0(EventTarget* self , jb_String * type, jb_Function * callback);

jb_Undefined EventTarget_removeEventListener1(EventTarget* self , jb_String * type, jb_Function * callback, jb_Any * options);

bool EventTarget_dispatchEvent(EventTarget* self , Event * event);

Observable EventTarget_when0(EventTarget* self , jb_String * type);

Observable EventTarget_when1(EventTarget* self , jb_String * type, ObservableEventListenerOptions * options);
