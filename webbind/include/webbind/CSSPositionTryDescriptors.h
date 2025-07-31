#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSStyleDeclaration.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CSSPositionTryDescriptors, CSSStyleDeclaration);

jb_String CSSPositionTryDescriptors_margin(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_margin(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_marginTop(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_marginTop(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_marginRight(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_marginRight(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_marginBottom(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_marginBottom(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_marginLeft(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_marginLeft(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_marginBlock(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_marginBlock(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_marginBlockStart(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_marginBlockStart(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_marginBlockEnd(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_marginBlockEnd(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_marginInline(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_marginInline(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_marginInlineStart(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_marginInlineStart(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_marginInlineEnd(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_marginInlineEnd(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_margin_top(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_margin_top(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_margin_right(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_margin_right(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_margin_bottom(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_margin_bottom(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_margin_left(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_margin_left(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_margin_block(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_margin_block(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_margin_block_start(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_margin_block_start(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_margin_block_end(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_margin_block_end(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_margin_inline(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_margin_inline(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_margin_inline_start(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_margin_inline_start(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_margin_inline_end(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_margin_inline_end(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_inset(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_inset(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_insetBlock(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_insetBlock(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_insetBlockStart(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_insetBlockStart(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_insetBlockEnd(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_insetBlockEnd(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_insetInline(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_insetInline(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_insetInlineStart(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_insetInlineStart(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_insetInlineEnd(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_insetInlineEnd(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_top(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_top(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_left(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_left(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_right(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_right(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_bottom(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_bottom(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_inset_block(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_inset_block(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_inset_block_start(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_inset_block_start(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_inset_block_end(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_inset_block_end(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_inset_inline(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_inset_inline(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_inset_inline_start(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_inset_inline_start(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_inset_inline_end(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_inset_inline_end(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_width(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_width(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_minWidth(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_minWidth(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_maxWidth(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_maxWidth(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_height(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_height(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_minHeight(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_minHeight(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_maxHeight(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_maxHeight(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_blockSize(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_blockSize(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_minBlockSize(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_minBlockSize(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_maxBlockSize(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_maxBlockSize(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_inlineSize(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_inlineSize(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_minInlineSize(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_minInlineSize(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_maxInlineSize(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_maxInlineSize(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_min_width(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_min_width(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_max_width(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_max_width(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_min_height(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_min_height(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_max_height(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_max_height(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_block_size(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_block_size(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_min_block_size(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_min_block_size(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_max_block_size(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_max_block_size(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_inline_size(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_inline_size(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_min_inline_size(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_min_inline_size(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_max_inline_size(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_max_inline_size(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_placeSelf(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_placeSelf(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_alignSelf(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_alignSelf(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_justifySelf(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_justifySelf(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_place_self(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_place_self(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_align_self(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_align_self(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_justify_self(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_justify_self(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_positionAnchor(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_positionAnchor(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_position_anchor(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_position_anchor(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_positionArea(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_positionArea(CSSPositionTryDescriptors* self, jb_String * value);

jb_String CSSPositionTryDescriptors_position_area(const CSSPositionTryDescriptors *self);

void CSSPositionTryDescriptors_set_position_area(CSSPositionTryDescriptors* self, jb_String * value);
