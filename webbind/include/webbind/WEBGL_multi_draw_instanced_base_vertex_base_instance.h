#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(WEBGL_multi_draw_instanced_base_vertex_base_instance, em_Val);

jb_Undefined WEBGL_multi_draw_instanced_base_vertex_base_instance_multiDrawArraysInstancedBaseInstanceWEBGL(WEBGL_multi_draw_instanced_base_vertex_base_instance* self , jb_Any * mode, jb_Any * firstsList, long long firstsOffset, jb_Any * countsList, long long countsOffset, jb_Any * instanceCountsList, long long instanceCountsOffset, jb_Any * baseInstancesList, long long baseInstancesOffset, jb_Any * drawcount);

jb_Undefined WEBGL_multi_draw_instanced_base_vertex_base_instance_multiDrawElementsInstancedBaseVertexBaseInstanceWEBGL(WEBGL_multi_draw_instanced_base_vertex_base_instance* self , jb_Any * mode, jb_Any * countsList, long long countsOffset, jb_Any * type, jb_Any * offsetsList, long long offsetsOffset, jb_Any * instanceCountsList, long long instanceCountsOffset, jb_Any * baseVerticesList, long long baseVerticesOffset, jb_Any * baseInstancesList, long long baseInstancesOffset, jb_Any * drawcount);
