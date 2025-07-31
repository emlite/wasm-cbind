#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSStyleDeclaration.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CSSFontFaceDescriptors, CSSStyleDeclaration);

jb_String CSSFontFaceDescriptors_src(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_src(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_fontFamily(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_fontFamily(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_font_family(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_font_family(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_fontStyle(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_fontStyle(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_font_style(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_font_style(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_fontWeight(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_fontWeight(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_font_weight(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_font_weight(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_fontStretch(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_fontStretch(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_font_stretch(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_font_stretch(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_fontWidth(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_fontWidth(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_font_width(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_font_width(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_fontSize(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_fontSize(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_font_size(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_font_size(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_sizeAdjust(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_sizeAdjust(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_size_adjust(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_size_adjust(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_unicodeRange(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_unicodeRange(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_unicode_range(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_unicode_range(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_fontFeatureSettings(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_fontFeatureSettings(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_font_feature_settings(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_font_feature_settings(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_fontVariationSettings(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_fontVariationSettings(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_font_variation_settings(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_font_variation_settings(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_fontNamedInstance(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_fontNamedInstance(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_font_named_instance(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_font_named_instance(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_fontDisplay(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_fontDisplay(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_font_display(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_font_display(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_fontLanguageOverride(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_fontLanguageOverride(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_font_language_override(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_font_language_override(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_ascentOverride(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_ascentOverride(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_ascent_override(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_ascent_override(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_descentOverride(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_descentOverride(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_descent_override(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_descent_override(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_lineGapOverride(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_lineGapOverride(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_line_gap_override(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_line_gap_override(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_superscriptPositionOverride(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_superscriptPositionOverride(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_superscript_position_override(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_superscript_position_override(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_subscriptPositionOverride(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_subscriptPositionOverride(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_subscript_position_override(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_subscript_position_override(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_superscriptSizeOverride(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_superscriptSizeOverride(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_superscript_size_override(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_superscript_size_override(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_subscriptSizeOverride(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_subscriptSizeOverride(CSSFontFaceDescriptors* self, jb_String * value);

jb_String CSSFontFaceDescriptors_subscript_size_override(const CSSFontFaceDescriptors *self);

void CSSFontFaceDescriptors_set_subscript_size_override(CSSFontFaceDescriptors* self, jb_String * value);
