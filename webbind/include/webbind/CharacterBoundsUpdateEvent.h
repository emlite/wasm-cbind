#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CharacterBoundsUpdateEvent, Event);

CharacterBoundsUpdateEvent CharacterBoundsUpdateEvent_new0(jb_String * type);

CharacterBoundsUpdateEvent CharacterBoundsUpdateEvent_new1(jb_String * type, jb_Any * options);

unsigned long CharacterBoundsUpdateEvent_rangeStart(const CharacterBoundsUpdateEvent *self);

unsigned long CharacterBoundsUpdateEvent_rangeEnd(const CharacterBoundsUpdateEvent *self);
