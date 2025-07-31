#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct ChapterInformation ChapterInformation;


DECLARE_EMLITE_TYPE(MediaMetadata, em_Val);

MediaMetadata MediaMetadata_new0();

MediaMetadata MediaMetadata_new1(jb_Any * init);

jb_String MediaMetadata_title(const MediaMetadata *self);

void MediaMetadata_set_title(MediaMetadata* self, jb_String * value);

jb_String MediaMetadata_artist(const MediaMetadata *self);

void MediaMetadata_set_artist(MediaMetadata* self, jb_String * value);

jb_String MediaMetadata_album(const MediaMetadata *self);

void MediaMetadata_set_album(MediaMetadata* self, jb_String * value);

jb_Array MediaMetadata_artwork(const MediaMetadata *self);

void MediaMetadata_set_artwork(MediaMetadata* self, jb_Array * value);

jb_Array MediaMetadata_chapterInfo(const MediaMetadata *self);
