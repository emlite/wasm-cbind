#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct WebGLTimerQueryEXT WebGLTimerQueryEXT;


DECLARE_EMLITE_TYPE(EXT_disjoint_timer_query, em_Val);

WebGLTimerQueryEXT EXT_disjoint_timer_query_createQueryEXT(EXT_disjoint_timer_query* self );

jb_Undefined EXT_disjoint_timer_query_deleteQueryEXT(EXT_disjoint_timer_query* self , WebGLTimerQueryEXT * query);

bool EXT_disjoint_timer_query_isQueryEXT(EXT_disjoint_timer_query* self , WebGLTimerQueryEXT * query);

jb_Undefined EXT_disjoint_timer_query_beginQueryEXT(EXT_disjoint_timer_query* self , jb_Any * target, WebGLTimerQueryEXT * query);

jb_Undefined EXT_disjoint_timer_query_endQueryEXT(EXT_disjoint_timer_query* self , jb_Any * target);

jb_Undefined EXT_disjoint_timer_query_queryCounterEXT(EXT_disjoint_timer_query* self , WebGLTimerQueryEXT * query, jb_Any * target);

jb_Any EXT_disjoint_timer_query_getQueryEXT(EXT_disjoint_timer_query* self , jb_Any * target, jb_Any * pname);

jb_Any EXT_disjoint_timer_query_getQueryObjectEXT(EXT_disjoint_timer_query* self , WebGLTimerQueryEXT * query, jb_Any * pname);
