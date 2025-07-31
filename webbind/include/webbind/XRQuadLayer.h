#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "XRCompositionLayer.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct XRSpace XRSpace;
typedef struct XRRigidTransform XRRigidTransform;


DECLARE_EMLITE_TYPE(XRQuadLayer, XRCompositionLayer);

XRSpace XRQuadLayer_space(const XRQuadLayer *self);

void XRQuadLayer_set_space(XRQuadLayer* self, XRSpace * value);

XRRigidTransform XRQuadLayer_transform(const XRQuadLayer *self);

void XRQuadLayer_set_transform(XRQuadLayer* self, XRRigidTransform * value);

float XRQuadLayer_width(const XRQuadLayer *self);

void XRQuadLayer_set_width(XRQuadLayer* self, float value);

float XRQuadLayer_height(const XRQuadLayer *self);

void XRQuadLayer_set_height(XRQuadLayer* self, float value);

jb_Any XRQuadLayer_onredraw(const XRQuadLayer *self);

void XRQuadLayer_set_onredraw(XRQuadLayer* self, jb_Any * value);
