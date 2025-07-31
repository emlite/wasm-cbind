#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Element Element;


DECLARE_EMLITE_TYPE(CommandEvent, Event);

CommandEvent CommandEvent_new0(jb_String * type);

CommandEvent CommandEvent_new1(jb_String * type, jb_Any * eventInitDict);

Element CommandEvent_source(const CommandEvent *self);

jb_String CommandEvent_command(const CommandEvent *self);
