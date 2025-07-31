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


DECLARE_EMLITE_TYPE(XRCylinderLayer, XRCompositionLayer);

XRSpace XRCylinderLayer_space(const XRCylinderLayer *self);

void XRCylinderLayer_set_space(XRCylinderLayer* self, XRSpace * value);

XRRigidTransform XRCylinderLayer_transform(const XRCylinderLayer *self);

void XRCylinderLayer_set_transform(XRCylinderLayer* self, XRRigidTransform * value);

float XRCylinderLayer_radius(const XRCylinderLayer *self);

void XRCylinderLayer_set_radius(XRCylinderLayer* self, float value);

float XRCylinderLayer_centralAngle(const XRCylinderLayer *self);

void XRCylinderLayer_set_centralAngle(XRCylinderLayer* self, float value);

float XRCylinderLayer_aspectRatio(const XRCylinderLayer *self);

void XRCylinderLayer_set_aspectRatio(XRCylinderLayer* self, float value);

jb_Any XRCylinderLayer_onredraw(const XRCylinderLayer *self);

void XRCylinderLayer_set_onredraw(XRCylinderLayer* self, jb_Any * value);
