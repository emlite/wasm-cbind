#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(WebGLActiveInfo, em_Val);

jb_Any WebGLActiveInfo_size(const WebGLActiveInfo *self);

jb_Any WebGLActiveInfo_type(const WebGLActiveInfo *self);

jb_String WebGLActiveInfo_name(const WebGLActiveInfo *self);
