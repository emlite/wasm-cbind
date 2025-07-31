#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct TextTrack TextTrack;


DECLARE_EMLITE_TYPE(HTMLTrackElement, HTMLElement);

HTMLTrackElement HTMLTrackElement_new();

jb_String HTMLTrackElement_kind(const HTMLTrackElement *self);

void HTMLTrackElement_set_kind(HTMLTrackElement* self, jb_String * value);

jb_String HTMLTrackElement_src(const HTMLTrackElement *self);

void HTMLTrackElement_set_src(HTMLTrackElement* self, jb_String * value);

jb_String HTMLTrackElement_srclang(const HTMLTrackElement *self);

void HTMLTrackElement_set_srclang(HTMLTrackElement* self, jb_String * value);

jb_String HTMLTrackElement_label(const HTMLTrackElement *self);

void HTMLTrackElement_set_label(HTMLTrackElement* self, jb_String * value);

bool HTMLTrackElement_default_(const HTMLTrackElement *self);

void HTMLTrackElement_set_default_(HTMLTrackElement* self, bool value);

unsigned short HTMLTrackElement_readyState(const HTMLTrackElement *self);

TextTrack HTMLTrackElement_track(const HTMLTrackElement *self);
