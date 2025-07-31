#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct WebGLQuery WebGLQuery;


DECLARE_EMLITE_TYPE(EXT_disjoint_timer_query_webgl2, em_Val);

jb_Undefined EXT_disjoint_timer_query_webgl2_queryCounterEXT(EXT_disjoint_timer_query_webgl2* self , WebGLQuery * query, jb_Any * target);
