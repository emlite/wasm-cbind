#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct XRSpace XRSpace;


DECLARE_EMLITE_TYPE(XRLightProbe, EventTarget);

XRSpace XRLightProbe_probeSpace(const XRLightProbe *self);

jb_Any XRLightProbe_onreflectionchange(const XRLightProbe *self);

void XRLightProbe_set_onreflectionchange(XRLightProbe* self, jb_Any * value);
