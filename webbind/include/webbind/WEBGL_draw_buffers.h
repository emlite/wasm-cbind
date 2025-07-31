#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(WEBGL_draw_buffers, em_Val);

jb_Undefined WEBGL_draw_buffers_drawBuffersWEBGL(WEBGL_draw_buffers* self , jb_Array * buffers);
