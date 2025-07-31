#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct PresentationConnection PresentationConnection;
typedef struct PresentationAvailability PresentationAvailability;


DECLARE_EMLITE_TYPE(PresentationRequest, EventTarget);

PresentationRequest PresentationRequest_new(jb_Array * urls);

jb_Promise PresentationRequest_start(PresentationRequest* self );

jb_Promise PresentationRequest_reconnect(PresentationRequest* self , jb_String * presentationId);

jb_Promise PresentationRequest_getAvailability(PresentationRequest* self );

jb_Any PresentationRequest_onconnectionavailable(const PresentationRequest *self);

void PresentationRequest_set_onconnectionavailable(PresentationRequest* self, jb_Any * value);
