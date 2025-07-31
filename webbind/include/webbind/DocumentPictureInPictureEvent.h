#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Window Window;


DECLARE_EMLITE_TYPE(DocumentPictureInPictureEvent, Event);

DocumentPictureInPictureEvent DocumentPictureInPictureEvent_new(jb_String * type, jb_Any * eventInitDict);

Window DocumentPictureInPictureEvent_window(const DocumentPictureInPictureEvent *self);
