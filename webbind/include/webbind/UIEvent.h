#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Window Window;
typedef struct InputDeviceCapabilities InputDeviceCapabilities;


DECLARE_EMLITE_TYPE(UIEvent, Event);

UIEvent UIEvent_new0(jb_String * type);

UIEvent UIEvent_new1(jb_String * type, jb_Any * eventInitDict);

Window UIEvent_view(const UIEvent *self);

long UIEvent_detail(const UIEvent *self);

InputDeviceCapabilities UIEvent_sourceCapabilities(const UIEvent *self);

jb_Undefined UIEvent_initUIEvent0(UIEvent* self , jb_String * typeArg);

jb_Undefined UIEvent_initUIEvent1(UIEvent* self , jb_String * typeArg, bool bubblesArg);

jb_Undefined UIEvent_initUIEvent2(UIEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg);

jb_Undefined UIEvent_initUIEvent3(UIEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg);

jb_Undefined UIEvent_initUIEvent4(UIEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg);

unsigned long UIEvent_which(const UIEvent *self);
