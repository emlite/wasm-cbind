#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct HTMLCollection HTMLCollection;
typedef struct HTMLTableRowElement HTMLTableRowElement;


DECLARE_EMLITE_TYPE(HTMLTableSectionElement, HTMLElement);

HTMLTableSectionElement HTMLTableSectionElement_new();

HTMLCollection HTMLTableSectionElement_rows(const HTMLTableSectionElement *self);

HTMLTableRowElement HTMLTableSectionElement_insertRow0(HTMLTableSectionElement* self );

HTMLTableRowElement HTMLTableSectionElement_insertRow1(HTMLTableSectionElement* self , long index);

jb_Undefined HTMLTableSectionElement_deleteRow(HTMLTableSectionElement* self , long index);

jb_String HTMLTableSectionElement_align(const HTMLTableSectionElement *self);

void HTMLTableSectionElement_set_align(HTMLTableSectionElement* self, jb_String * value);

jb_String HTMLTableSectionElement_ch(const HTMLTableSectionElement *self);

void HTMLTableSectionElement_set_ch(HTMLTableSectionElement* self, jb_String * value);

jb_String HTMLTableSectionElement_chOff(const HTMLTableSectionElement *self);

void HTMLTableSectionElement_set_chOff(HTMLTableSectionElement* self, jb_String * value);

jb_String HTMLTableSectionElement_vAlign(const HTMLTableSectionElement *self);

void HTMLTableSectionElement_set_vAlign(HTMLTableSectionElement* self, jb_String * value);
