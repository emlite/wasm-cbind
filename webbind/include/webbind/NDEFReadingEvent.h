#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct NDEFMessage NDEFMessage;


DECLARE_EMLITE_TYPE(NDEFReadingEvent, Event);

NDEFReadingEvent NDEFReadingEvent_new(jb_String * type, jb_Any * readingEventInitDict);

jb_String NDEFReadingEvent_serialNumber(const NDEFReadingEvent *self);

NDEFMessage NDEFReadingEvent_message(const NDEFReadingEvent *self);
