#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct PresentationConnection PresentationConnection;


DECLARE_EMLITE_TYPE(PresentationConnectionList, EventTarget);

jb_Array PresentationConnectionList_connections(const PresentationConnectionList *self);

jb_Any PresentationConnectionList_onconnectionavailable(const PresentationConnectionList *self);

void PresentationConnectionList_set_onconnectionavailable(PresentationConnectionList* self, jb_Any * value);
