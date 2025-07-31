#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct TextTrackCue TextTrackCue;


DECLARE_EMLITE_TYPE(TextTrackCueList, em_Val);

unsigned long TextTrackCueList_length(const TextTrackCueList *self);

TextTrackCue TextTrackCueList_getCueById(TextTrackCueList* self , jb_String * id);
