#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct TextTrack TextTrack;


DECLARE_EMLITE_TYPE(TextTrackCue, EventTarget);

TextTrack TextTrackCue_track(const TextTrackCue *self);

jb_String TextTrackCue_id(const TextTrackCue *self);

void TextTrackCue_set_id(TextTrackCue* self, jb_String * value);

double TextTrackCue_startTime(const TextTrackCue *self);

void TextTrackCue_set_startTime(TextTrackCue* self, double value);

double TextTrackCue_endTime(const TextTrackCue *self);

void TextTrackCue_set_endTime(TextTrackCue* self, double value);

bool TextTrackCue_pauseOnExit(const TextTrackCue *self);

void TextTrackCue_set_pauseOnExit(TextTrackCue* self, bool value);

jb_Any TextTrackCue_onenter(const TextTrackCue *self);

void TextTrackCue_set_onenter(TextTrackCue* self, jb_Any * value);

jb_Any TextTrackCue_onexit(const TextTrackCue *self);

void TextTrackCue_set_onexit(TextTrackCue* self, jb_Any * value);
