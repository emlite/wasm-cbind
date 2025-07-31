#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct WebGLVertexArrayObjectOES WebGLVertexArrayObjectOES;


DECLARE_EMLITE_TYPE(OES_vertex_array_object, em_Val);

WebGLVertexArrayObjectOES OES_vertex_array_object_createVertexArrayOES(OES_vertex_array_object* self );

jb_Undefined OES_vertex_array_object_deleteVertexArrayOES(OES_vertex_array_object* self , WebGLVertexArrayObjectOES * arrayObject);

jb_Any OES_vertex_array_object_isVertexArrayOES(OES_vertex_array_object* self , WebGLVertexArrayObjectOES * arrayObject);

jb_Undefined OES_vertex_array_object_bindVertexArrayOES(OES_vertex_array_object* self , WebGLVertexArrayObjectOES * arrayObject);
