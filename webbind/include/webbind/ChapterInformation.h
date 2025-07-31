#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct MediaImage MediaImage;


DECLARE_EMLITE_TYPE(MediaImage, em_Val);

jb_String MediaImage_src(const MediaImage *self);

void MediaImage_set_src(MediaImage* self, jb_String * value);

jb_String MediaImage_sizes(const MediaImage *self);

void MediaImage_set_sizes(MediaImage* self, jb_String * value);

jb_String MediaImage_type(const MediaImage *self);

void MediaImage_set_type(MediaImage* self, jb_String * value);
DECLARE_EMLITE_TYPE(ChapterInformation, em_Val);

jb_String ChapterInformation_title(const ChapterInformation *self);

double ChapterInformation_startTime(const ChapterInformation *self);

jb_Array ChapterInformation_artwork(const ChapterInformation *self);
