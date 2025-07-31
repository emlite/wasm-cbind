#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct PresentationConnection PresentationConnection;


DECLARE_EMLITE_TYPE(PresentationConnectionAvailableEvent, Event);

PresentationConnectionAvailableEvent PresentationConnectionAvailableEvent_new(jb_String * type, jb_Any * eventInitDict);

PresentationConnection PresentationConnectionAvailableEvent_connection(const PresentationConnectionAvailableEvent *self);
