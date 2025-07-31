#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(WEBGL_draw_instanced_base_vertex_base_instance, em_Val);

jb_Undefined WEBGL_draw_instanced_base_vertex_base_instance_drawArraysInstancedBaseInstanceWEBGL(WEBGL_draw_instanced_base_vertex_base_instance* self , jb_Any * mode, jb_Any * first, jb_Any * count, jb_Any * instanceCount, jb_Any * baseInstance);

jb_Undefined WEBGL_draw_instanced_base_vertex_base_instance_drawElementsInstancedBaseVertexBaseInstanceWEBGL(WEBGL_draw_instanced_base_vertex_base_instance* self , jb_Any * mode, jb_Any * count, jb_Any * type, jb_Any * offset, jb_Any * instanceCount, jb_Any * baseVertex, jb_Any * baseInstance);
