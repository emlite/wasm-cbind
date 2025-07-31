#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(HTMLTableCellElement, HTMLElement);

HTMLTableCellElement HTMLTableCellElement_new();

unsigned long HTMLTableCellElement_colSpan(const HTMLTableCellElement *self);

void HTMLTableCellElement_set_colSpan(HTMLTableCellElement* self, unsigned long value);

unsigned long HTMLTableCellElement_rowSpan(const HTMLTableCellElement *self);

void HTMLTableCellElement_set_rowSpan(HTMLTableCellElement* self, unsigned long value);

jb_String HTMLTableCellElement_headers(const HTMLTableCellElement *self);

void HTMLTableCellElement_set_headers(HTMLTableCellElement* self, jb_String * value);

long HTMLTableCellElement_cellIndex(const HTMLTableCellElement *self);

jb_String HTMLTableCellElement_scope(const HTMLTableCellElement *self);

void HTMLTableCellElement_set_scope(HTMLTableCellElement* self, jb_String * value);

jb_String HTMLTableCellElement_abbr(const HTMLTableCellElement *self);

void HTMLTableCellElement_set_abbr(HTMLTableCellElement* self, jb_String * value);

jb_String HTMLTableCellElement_align(const HTMLTableCellElement *self);

void HTMLTableCellElement_set_align(HTMLTableCellElement* self, jb_String * value);

jb_String HTMLTableCellElement_axis(const HTMLTableCellElement *self);

void HTMLTableCellElement_set_axis(HTMLTableCellElement* self, jb_String * value);

jb_String HTMLTableCellElement_height(const HTMLTableCellElement *self);

void HTMLTableCellElement_set_height(HTMLTableCellElement* self, jb_String * value);

jb_String HTMLTableCellElement_width(const HTMLTableCellElement *self);

void HTMLTableCellElement_set_width(HTMLTableCellElement* self, jb_String * value);

jb_String HTMLTableCellElement_ch(const HTMLTableCellElement *self);

void HTMLTableCellElement_set_ch(HTMLTableCellElement* self, jb_String * value);

jb_String HTMLTableCellElement_chOff(const HTMLTableCellElement *self);

void HTMLTableCellElement_set_chOff(HTMLTableCellElement* self, jb_String * value);

bool HTMLTableCellElement_noWrap(const HTMLTableCellElement *self);

void HTMLTableCellElement_set_noWrap(HTMLTableCellElement* self, bool value);

jb_String HTMLTableCellElement_vAlign(const HTMLTableCellElement *self);

void HTMLTableCellElement_set_vAlign(HTMLTableCellElement* self, jb_String * value);

jb_String HTMLTableCellElement_bgColor(const HTMLTableCellElement *self);

void HTMLTableCellElement_set_bgColor(HTMLTableCellElement* self, jb_String * value);
