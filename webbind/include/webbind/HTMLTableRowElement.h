#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct HTMLCollection HTMLCollection;
typedef struct HTMLTableCellElement HTMLTableCellElement;


DECLARE_EMLITE_TYPE(HTMLTableRowElement, HTMLElement);

HTMLTableRowElement HTMLTableRowElement_new();

long HTMLTableRowElement_rowIndex(const HTMLTableRowElement *self);

long HTMLTableRowElement_sectionRowIndex(const HTMLTableRowElement *self);

HTMLCollection HTMLTableRowElement_cells(const HTMLTableRowElement *self);

HTMLTableCellElement HTMLTableRowElement_insertCell0(HTMLTableRowElement* self );

HTMLTableCellElement HTMLTableRowElement_insertCell1(HTMLTableRowElement* self , long index);

jb_Undefined HTMLTableRowElement_deleteCell(HTMLTableRowElement* self , long index);

jb_String HTMLTableRowElement_align(const HTMLTableRowElement *self);

void HTMLTableRowElement_set_align(HTMLTableRowElement* self, jb_String * value);

jb_String HTMLTableRowElement_ch(const HTMLTableRowElement *self);

void HTMLTableRowElement_set_ch(HTMLTableRowElement* self, jb_String * value);

jb_String HTMLTableRowElement_chOff(const HTMLTableRowElement *self);

void HTMLTableRowElement_set_chOff(HTMLTableRowElement* self, jb_String * value);

jb_String HTMLTableRowElement_vAlign(const HTMLTableRowElement *self);

void HTMLTableRowElement_set_vAlign(HTMLTableRowElement* self, jb_String * value);

jb_String HTMLTableRowElement_bgColor(const HTMLTableRowElement *self);

void HTMLTableRowElement_set_bgColor(HTMLTableRowElement* self, jb_String * value);
