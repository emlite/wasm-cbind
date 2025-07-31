#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "XRPose.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(XRJointPose, XRPose);

float XRJointPose_radius(const XRJointPose *self);
