#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "XRCompositionLayer.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct XRSpace XRSpace;
typedef struct DOMPointReadOnly DOMPointReadOnly;


DECLARE_EMLITE_TYPE(XRCubeLayer, XRCompositionLayer);

XRSpace XRCubeLayer_space(const XRCubeLayer *self);

void XRCubeLayer_set_space(XRCubeLayer* self, XRSpace * value);

DOMPointReadOnly XRCubeLayer_orientation(const XRCubeLayer *self);

void XRCubeLayer_set_orientation(XRCubeLayer* self, DOMPointReadOnly * value);

jb_Any XRCubeLayer_onredraw(const XRCubeLayer *self);

void XRCubeLayer_set_onredraw(XRCubeLayer* self, jb_Any * value);
