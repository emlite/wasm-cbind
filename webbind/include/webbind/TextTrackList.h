#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct TextTrack TextTrack;


DECLARE_EMLITE_TYPE(TextTrackList, EventTarget);

unsigned long TextTrackList_length(const TextTrackList *self);

TextTrack TextTrackList_getTrackById(TextTrackList* self , jb_String * id);

jb_Any TextTrackList_onchange(const TextTrackList *self);

void TextTrackList_set_onchange(TextTrackList* self, jb_Any * value);

jb_Any TextTrackList_onaddtrack(const TextTrackList *self);

void TextTrackList_set_onaddtrack(TextTrackList* self, jb_Any * value);

jb_Any TextTrackList_onremovetrack(const TextTrackList *self);

void TextTrackList_set_onremovetrack(TextTrackList* self, jb_Any * value);
