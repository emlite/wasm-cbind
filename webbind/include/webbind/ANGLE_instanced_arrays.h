#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(ANGLE_instanced_arrays, em_Val);

jb_Undefined ANGLE_instanced_arrays_drawArraysInstancedANGLE(ANGLE_instanced_arrays* self , jb_Any * mode, jb_Any * first, jb_Any * count, jb_Any * primcount);

jb_Undefined ANGLE_instanced_arrays_drawElementsInstancedANGLE(ANGLE_instanced_arrays* self , jb_Any * mode, jb_Any * count, jb_Any * type, jb_Any * offset, jb_Any * primcount);

jb_Undefined ANGLE_instanced_arrays_vertexAttribDivisorANGLE(ANGLE_instanced_arrays* self , jb_Any * index, jb_Any * divisor);
