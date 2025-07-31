#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct FontFace FontFace;


DECLARE_EMLITE_TYPE(FontFaceSetLoadEvent, Event);

FontFaceSetLoadEvent FontFaceSetLoadEvent_new0(jb_String * type);

FontFaceSetLoadEvent FontFaceSetLoadEvent_new1(jb_String * type, jb_Any * eventInitDict);

jb_Array FontFaceSetLoadEvent_fontfaces(const FontFaceSetLoadEvent *self);
