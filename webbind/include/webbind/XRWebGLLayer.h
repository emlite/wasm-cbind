#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "XRLayer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRSession XRSession;
typedef struct XRWebGLLayerInit XRWebGLLayerInit;
typedef struct WebGLFramebuffer WebGLFramebuffer;
typedef struct XRViewport XRViewport;
typedef struct XRView XRView;

DECLARE_EMLITE_TYPE(XRWebGLLayer, XRLayer);

XRWebGLLayer XRWebGLLayer_new0(XRSession * session, jb_Any * context);

XRWebGLLayer XRWebGLLayer_new1(XRSession * session, jb_Any * context, XRWebGLLayerInit * layerInit);

bool XRWebGLLayer_antialias(const XRWebGLLayer *self);

bool XRWebGLLayer_ignoreDepthValues(const XRWebGLLayer *self);

float XRWebGLLayer_fixedFoveation(const XRWebGLLayer *self);

void XRWebGLLayer_set_fixedFoveation(XRWebGLLayer* self, float value);

WebGLFramebuffer XRWebGLLayer_framebuffer(const XRWebGLLayer *self);

unsigned long XRWebGLLayer_framebufferWidth(const XRWebGLLayer *self);

unsigned long XRWebGLLayer_framebufferHeight(const XRWebGLLayer *self);

XRViewport XRWebGLLayer_getViewport(XRWebGLLayer* self , XRView * view);

double XRWebGLLayer_getNativeFramebufferScaleFactor(XRWebGLLayer* self , XRSession * session);

#ifdef __cplusplus
}
#endif
