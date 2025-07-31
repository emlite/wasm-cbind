#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(WebGLContextEvent, Event);

WebGLContextEvent WebGLContextEvent_new0(jb_String * type);

WebGLContextEvent WebGLContextEvent_new1(jb_String * type, jb_Any * eventInit);

jb_String WebGLContextEvent_statusMessage(const WebGLContextEvent *self);
