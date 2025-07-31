#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "XRLayer.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(XRCompositionLayer, XRLayer);

XRLayerLayout XRCompositionLayer_layout(const XRCompositionLayer *self);

bool XRCompositionLayer_blendTextureSourceAlpha(const XRCompositionLayer *self);

void XRCompositionLayer_set_blendTextureSourceAlpha(XRCompositionLayer* self, bool value);

bool XRCompositionLayer_forceMonoPresentation(const XRCompositionLayer *self);

void XRCompositionLayer_set_forceMonoPresentation(XRCompositionLayer* self, bool value);

float XRCompositionLayer_opacity(const XRCompositionLayer *self);

void XRCompositionLayer_set_opacity(XRCompositionLayer* self, float value);

unsigned long XRCompositionLayer_mipLevels(const XRCompositionLayer *self);

XRLayerQuality XRCompositionLayer_quality(const XRCompositionLayer *self);

void XRCompositionLayer_set_quality(XRCompositionLayer* self, XRLayerQuality * value);

bool XRCompositionLayer_needsRedraw(const XRCompositionLayer *self);

jb_Undefined XRCompositionLayer_destroy(XRCompositionLayer* self );
