#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct XRRigidTransform XRRigidTransform;


DECLARE_EMLITE_TYPE(XRDepthInformation, em_Val);

unsigned long XRDepthInformation_width(const XRDepthInformation *self);

unsigned long XRDepthInformation_height(const XRDepthInformation *self);

XRRigidTransform XRDepthInformation_normDepthBufferFromNormView(const XRDepthInformation *self);

float XRDepthInformation_rawValueToMeters(const XRDepthInformation *self);

jb_Float32Array XRDepthInformation_projectionMatrix(const XRDepthInformation *self);

XRRigidTransform XRDepthInformation_transform(const XRDepthInformation *self);
