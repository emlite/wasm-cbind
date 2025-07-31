#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct HTMLTableCaptionElement HTMLTableCaptionElement;
typedef struct HTMLTableSectionElement HTMLTableSectionElement;
typedef struct HTMLCollection HTMLCollection;
typedef struct HTMLTableRowElement HTMLTableRowElement;


DECLARE_EMLITE_TYPE(HTMLTableElement, HTMLElement);

HTMLTableElement HTMLTableElement_new();

HTMLTableCaptionElement HTMLTableElement_caption(const HTMLTableElement *self);

void HTMLTableElement_set_caption(HTMLTableElement* self, HTMLTableCaptionElement * value);

HTMLTableCaptionElement HTMLTableElement_createCaption(HTMLTableElement* self );

jb_Undefined HTMLTableElement_deleteCaption(HTMLTableElement* self );

HTMLTableSectionElement HTMLTableElement_tHead(const HTMLTableElement *self);

void HTMLTableElement_set_tHead(HTMLTableElement* self, HTMLTableSectionElement * value);

HTMLTableSectionElement HTMLTableElement_createTHead(HTMLTableElement* self );

jb_Undefined HTMLTableElement_deleteTHead(HTMLTableElement* self );

HTMLTableSectionElement HTMLTableElement_tFoot(const HTMLTableElement *self);

void HTMLTableElement_set_tFoot(HTMLTableElement* self, HTMLTableSectionElement * value);

HTMLTableSectionElement HTMLTableElement_createTFoot(HTMLTableElement* self );

jb_Undefined HTMLTableElement_deleteTFoot(HTMLTableElement* self );

HTMLCollection HTMLTableElement_tBodies(const HTMLTableElement *self);

HTMLTableSectionElement HTMLTableElement_createTBody(HTMLTableElement* self );

HTMLCollection HTMLTableElement_rows(const HTMLTableElement *self);

HTMLTableRowElement HTMLTableElement_insertRow0(HTMLTableElement* self );

HTMLTableRowElement HTMLTableElement_insertRow1(HTMLTableElement* self , long index);

jb_Undefined HTMLTableElement_deleteRow(HTMLTableElement* self , long index);

jb_String HTMLTableElement_align(const HTMLTableElement *self);

void HTMLTableElement_set_align(HTMLTableElement* self, jb_String * value);

jb_String HTMLTableElement_border(const HTMLTableElement *self);

void HTMLTableElement_set_border(HTMLTableElement* self, jb_String * value);

jb_String HTMLTableElement_frame(const HTMLTableElement *self);

void HTMLTableElement_set_frame(HTMLTableElement* self, jb_String * value);

jb_String HTMLTableElement_rules(const HTMLTableElement *self);

void HTMLTableElement_set_rules(HTMLTableElement* self, jb_String * value);

jb_String HTMLTableElement_summary(const HTMLTableElement *self);

void HTMLTableElement_set_summary(HTMLTableElement* self, jb_String * value);

jb_String HTMLTableElement_width(const HTMLTableElement *self);

void HTMLTableElement_set_width(HTMLTableElement* self, jb_String * value);

jb_String HTMLTableElement_bgColor(const HTMLTableElement *self);

void HTMLTableElement_set_bgColor(HTMLTableElement* self, jb_String * value);

jb_String HTMLTableElement_cellPadding(const HTMLTableElement *self);

void HTMLTableElement_set_cellPadding(HTMLTableElement* self, jb_String * value);

jb_String HTMLTableElement_cellSpacing(const HTMLTableElement *self);

void HTMLTableElement_set_cellSpacing(HTMLTableElement* self, jb_String * value);
