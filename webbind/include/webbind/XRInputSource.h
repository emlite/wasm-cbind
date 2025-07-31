#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct XRSpace XRSpace;
typedef struct Gamepad Gamepad;
typedef struct XRHand XRHand;


DECLARE_EMLITE_TYPE(XRInputSource, em_Val);

XRHandedness XRInputSource_handedness(const XRInputSource *self);

XRTargetRayMode XRInputSource_targetRayMode(const XRInputSource *self);

XRSpace XRInputSource_targetRaySpace(const XRInputSource *self);

XRSpace XRInputSource_gripSpace(const XRInputSource *self);

jb_Array XRInputSource_profiles(const XRInputSource *self);

bool XRInputSource_skipRendering(const XRInputSource *self);

Gamepad XRInputSource_gamepad(const XRInputSource *self);

XRHand XRInputSource_hand(const XRInputSource *self);
