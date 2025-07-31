#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(ImageTrack, em_Val);

bool ImageTrack_animated(const ImageTrack *self);

unsigned long ImageTrack_frameCount(const ImageTrack *self);

float ImageTrack_repetitionCount(const ImageTrack *self);

bool ImageTrack_selected(const ImageTrack *self);

void ImageTrack_set_selected(ImageTrack* self, bool value);
