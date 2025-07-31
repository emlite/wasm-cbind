#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(WEBGL_multi_draw, em_Val);

jb_Undefined WEBGL_multi_draw_multiDrawArraysWEBGL(WEBGL_multi_draw* self , jb_Any * mode, jb_Any * firstsList, long long firstsOffset, jb_Any * countsList, long long countsOffset, jb_Any * drawcount);

jb_Undefined WEBGL_multi_draw_multiDrawElementsWEBGL(WEBGL_multi_draw* self , jb_Any * mode, jb_Any * countsList, long long countsOffset, jb_Any * type, jb_Any * offsetsList, long long offsetsOffset, jb_Any * drawcount);

jb_Undefined WEBGL_multi_draw_multiDrawArraysInstancedWEBGL(WEBGL_multi_draw* self , jb_Any * mode, jb_Any * firstsList, long long firstsOffset, jb_Any * countsList, long long countsOffset, jb_Any * instanceCountsList, long long instanceCountsOffset, jb_Any * drawcount);

jb_Undefined WEBGL_multi_draw_multiDrawElementsInstancedWEBGL(WEBGL_multi_draw* self , jb_Any * mode, jb_Any * countsList, long long countsOffset, jb_Any * type, jb_Any * offsetsList, long long offsetsOffset, jb_Any * instanceCountsList, long long instanceCountsOffset, jb_Any * drawcount);
