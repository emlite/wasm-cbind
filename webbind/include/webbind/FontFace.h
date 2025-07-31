#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct FontFace FontFace;
typedef struct FontFaceFeatures FontFaceFeatures;
typedef struct FontFaceVariations FontFaceVariations;
typedef struct FontFacePalettes FontFacePalettes;


DECLARE_EMLITE_TYPE(FontFace, em_Val);

FontFace FontFace_new0(jb_String * family, jb_Any * source);

FontFace FontFace_new1(jb_String * family, jb_Any * source, jb_Any * descriptors);

jb_String FontFace_family(const FontFace *self);

void FontFace_set_family(FontFace* self, jb_String * value);

jb_String FontFace_style(const FontFace *self);

void FontFace_set_style(FontFace* self, jb_String * value);

jb_String FontFace_weight(const FontFace *self);

void FontFace_set_weight(FontFace* self, jb_String * value);

jb_String FontFace_stretch(const FontFace *self);

void FontFace_set_stretch(FontFace* self, jb_String * value);

jb_String FontFace_unicodeRange(const FontFace *self);

void FontFace_set_unicodeRange(FontFace* self, jb_String * value);

jb_String FontFace_featureSettings(const FontFace *self);

void FontFace_set_featureSettings(FontFace* self, jb_String * value);

jb_String FontFace_variationSettings(const FontFace *self);

void FontFace_set_variationSettings(FontFace* self, jb_String * value);

jb_String FontFace_display(const FontFace *self);

void FontFace_set_display(FontFace* self, jb_String * value);

jb_String FontFace_ascentOverride(const FontFace *self);

void FontFace_set_ascentOverride(FontFace* self, jb_String * value);

jb_String FontFace_descentOverride(const FontFace *self);

void FontFace_set_descentOverride(FontFace* self, jb_String * value);

jb_String FontFace_lineGapOverride(const FontFace *self);

void FontFace_set_lineGapOverride(FontFace* self, jb_String * value);

FontFaceLoadStatus FontFace_status(const FontFace *self);

jb_Promise FontFace_load(FontFace* self );

jb_Promise FontFace_loaded(const FontFace *self);

FontFaceFeatures FontFace_features(const FontFace *self);

FontFaceVariations FontFace_variations(const FontFace *self);

FontFacePalettes FontFace_palettes(const FontFace *self);
