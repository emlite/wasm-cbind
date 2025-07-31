#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct HTMLElement HTMLElement;


DECLARE_EMLITE_TYPE(CaptureController, EventTarget);

CaptureController CaptureController_new();

jb_Undefined CaptureController_setFocusBehavior(CaptureController* self , CaptureStartFocusBehavior * focusBehavior);

jb_Any CaptureController_oncapturedmousechange(const CaptureController *self);

void CaptureController_set_oncapturedmousechange(CaptureController* self, jb_Any * value);

jb_Array CaptureController_getSupportedZoomLevels(CaptureController* self );

long CaptureController_zoomLevel(const CaptureController *self);

jb_Promise CaptureController_increaseZoomLevel(CaptureController* self );

jb_Promise CaptureController_decreaseZoomLevel(CaptureController* self );

jb_Promise CaptureController_resetZoomLevel(CaptureController* self );

jb_Any CaptureController_onzoomlevelchange(const CaptureController *self);

void CaptureController_set_onzoomlevelchange(CaptureController* self, jb_Any * value);

jb_Promise CaptureController_forwardWheel(CaptureController* self , HTMLElement * element);
