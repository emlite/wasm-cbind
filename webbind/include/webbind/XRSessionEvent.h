#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct XRSession XRSession;


DECLARE_EMLITE_TYPE(XRSessionEvent, Event);

XRSessionEvent XRSessionEvent_new(jb_String * type, jb_Any * eventInitDict);

XRSession XRSessionEvent_session(const XRSessionEvent *self);
