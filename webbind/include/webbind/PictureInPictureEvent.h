#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct PictureInPictureWindow PictureInPictureWindow;


DECLARE_EMLITE_TYPE(PictureInPictureEvent, Event);

PictureInPictureEvent PictureInPictureEvent_new(jb_String * type, jb_Any * eventInitDict);

PictureInPictureWindow PictureInPictureEvent_pictureInPictureWindow(const PictureInPictureEvent *self);
