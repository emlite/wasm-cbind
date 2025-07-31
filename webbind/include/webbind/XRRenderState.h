#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct XRWebGLLayer XRWebGLLayer;
typedef struct XRLayer XRLayer;


DECLARE_EMLITE_TYPE(XRRenderState, em_Val);

double XRRenderState_depthNear(const XRRenderState *self);

double XRRenderState_depthFar(const XRRenderState *self);

bool XRRenderState_passthroughFullyObscured(const XRRenderState *self);

double XRRenderState_inlineVerticalFieldOfView(const XRRenderState *self);

XRWebGLLayer XRRenderState_baseLayer(const XRRenderState *self);

jb_Array XRRenderState_layers(const XRRenderState *self);
