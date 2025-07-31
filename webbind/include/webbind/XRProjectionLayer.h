#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "XRCompositionLayer.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct XRRigidTransform XRRigidTransform;


DECLARE_EMLITE_TYPE(XRProjectionLayer, XRCompositionLayer);

unsigned long XRProjectionLayer_textureWidth(const XRProjectionLayer *self);

unsigned long XRProjectionLayer_textureHeight(const XRProjectionLayer *self);

unsigned long XRProjectionLayer_textureArrayLength(const XRProjectionLayer *self);

bool XRProjectionLayer_ignoreDepthValues(const XRProjectionLayer *self);

float XRProjectionLayer_fixedFoveation(const XRProjectionLayer *self);

void XRProjectionLayer_set_fixedFoveation(XRProjectionLayer* self, float value);

XRRigidTransform XRProjectionLayer_deltaPose(const XRProjectionLayer *self);

void XRProjectionLayer_set_deltaPose(XRProjectionLayer* self, XRRigidTransform * value);
