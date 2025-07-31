#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "MessagePort.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(PortalHost, EventTarget);

jb_Undefined PortalHost_postMessage0(PortalHost* self , jb_Any * message);

jb_Undefined PortalHost_postMessage1(PortalHost* self , jb_Any * message, StructuredSerializeOptions * options);

jb_Any PortalHost_onmessage(const PortalHost *self);

void PortalHost_set_onmessage(PortalHost* self, jb_Any * value);

jb_Any PortalHost_onmessageerror(const PortalHost *self);

void PortalHost_set_onmessageerror(PortalHost* self, jb_Any * value);
