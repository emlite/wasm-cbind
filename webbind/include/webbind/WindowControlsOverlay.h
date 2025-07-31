#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DOMRect DOMRect;


DECLARE_EMLITE_TYPE(WindowControlsOverlay, EventTarget);

bool WindowControlsOverlay_visible(const WindowControlsOverlay *self);

DOMRect WindowControlsOverlay_getTitlebarAreaRect(WindowControlsOverlay* self );

jb_Any WindowControlsOverlay_ongeometrychange(const WindowControlsOverlay *self);

void WindowControlsOverlay_set_ongeometrychange(WindowControlsOverlay* self, jb_Any * value);
