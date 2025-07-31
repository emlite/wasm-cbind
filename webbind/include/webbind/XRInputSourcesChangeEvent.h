#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct XRSession XRSession;
typedef struct XRInputSource XRInputSource;


DECLARE_EMLITE_TYPE(XRInputSourcesChangeEvent, Event);

XRInputSourcesChangeEvent XRInputSourcesChangeEvent_new(jb_String * type, jb_Any * eventInitDict);

XRSession XRInputSourcesChangeEvent_session(const XRInputSourcesChangeEvent *self);

jb_Array XRInputSourcesChangeEvent_added(const XRInputSourcesChangeEvent *self);

jb_Array XRInputSourcesChangeEvent_removed(const XRInputSourcesChangeEvent *self);
