#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct XRPose XRPose;
typedef struct XRSpace XRSpace;
typedef struct XRAnchor XRAnchor;


DECLARE_EMLITE_TYPE(XRHitTestResult, em_Val);

XRPose XRHitTestResult_getPose(XRHitTestResult* self , XRSpace * baseSpace);

jb_Promise XRHitTestResult_createAnchor(XRHitTestResult* self );
