#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(SVGStringList, em_Val);

unsigned long SVGStringList_length(const SVGStringList *self);

unsigned long SVGStringList_numberOfItems(const SVGStringList *self);

jb_Undefined SVGStringList_clear(SVGStringList* self );

jb_String SVGStringList_initialize(SVGStringList* self , jb_String * newItem);

jb_String SVGStringList_getItem(SVGStringList* self , unsigned long index);

jb_String SVGStringList_insertItemBefore(SVGStringList* self , jb_String * newItem, unsigned long index);

jb_String SVGStringList_replaceItem(SVGStringList* self , jb_String * newItem, unsigned long index);

jb_String SVGStringList_removeItem(SVGStringList* self , unsigned long index);

jb_String SVGStringList_appendItem(SVGStringList* self , jb_String * newItem);
