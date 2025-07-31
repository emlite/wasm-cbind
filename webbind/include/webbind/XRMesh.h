#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct XRSpace XRSpace;


DECLARE_EMLITE_TYPE(XRMesh, em_Val);

XRSpace XRMesh_meshSpace(const XRMesh *self);

jb_Array XRMesh_vertices(const XRMesh *self);

jb_Uint32Array XRMesh_indices(const XRMesh *self);

jb_Any XRMesh_lastChangedTime(const XRMesh *self);

jb_String XRMesh_semanticLabel(const XRMesh *self);
