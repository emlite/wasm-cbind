#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(WebGLObject, em_Val);

jb_String WebGLObject_label(const WebGLObject *self);

void WebGLObject_set_label(WebGLObject* self, jb_String * value);
