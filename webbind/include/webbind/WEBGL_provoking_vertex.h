#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(WEBGL_provoking_vertex, em_Val);

jb_Undefined WEBGL_provoking_vertex_provokingVertexWEBGL(WEBGL_provoking_vertex* self , jb_Any * provokeMode);
