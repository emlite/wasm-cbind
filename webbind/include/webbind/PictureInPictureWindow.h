#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(PictureInPictureWindow, EventTarget);

long PictureInPictureWindow_width(const PictureInPictureWindow *self);

long PictureInPictureWindow_height(const PictureInPictureWindow *self);

jb_Any PictureInPictureWindow_onresize(const PictureInPictureWindow *self);

void PictureInPictureWindow_set_onresize(PictureInPictureWindow* self, jb_Any * value);
