#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct XRInputSource XRInputSource;
typedef struct XRHitTestResult XRHitTestResult;


DECLARE_EMLITE_TYPE(XRTransientInputHitTestResult, em_Val);

XRInputSource XRTransientInputHitTestResult_inputSource(const XRTransientInputHitTestResult *self);

jb_Array XRTransientInputHitTestResult_results(const XRTransientInputHitTestResult *self);
