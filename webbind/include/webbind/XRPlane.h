#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct XRSpace XRSpace;
typedef struct DOMPointReadOnly DOMPointReadOnly;


DECLARE_EMLITE_TYPE(XRPlane, em_Val);

XRSpace XRPlane_planeSpace(const XRPlane *self);

jb_Array XRPlane_polygon(const XRPlane *self);

XRPlaneOrientation XRPlane_orientation(const XRPlane *self);

jb_Any XRPlane_lastChangedTime(const XRPlane *self);

jb_String XRPlane_semanticLabel(const XRPlane *self);
