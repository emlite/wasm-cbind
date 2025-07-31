#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct XRRigidTransform XRRigidTransform;
typedef struct DOMPointReadOnly DOMPointReadOnly;


DECLARE_EMLITE_TYPE(XRPose, em_Val);

XRRigidTransform XRPose_transform(const XRPose *self);

DOMPointReadOnly XRPose_linearVelocity(const XRPose *self);

DOMPointReadOnly XRPose_angularVelocity(const XRPose *self);

bool XRPose_emulatedPosition(const XRPose *self);
