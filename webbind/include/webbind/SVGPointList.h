#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DOMPoint DOMPoint;


DECLARE_EMLITE_TYPE(SVGPointList, em_Val);

unsigned long SVGPointList_length(const SVGPointList *self);

unsigned long SVGPointList_numberOfItems(const SVGPointList *self);

jb_Undefined SVGPointList_clear(SVGPointList* self );

DOMPoint SVGPointList_initialize(SVGPointList* self , DOMPoint * newItem);

DOMPoint SVGPointList_getItem(SVGPointList* self , unsigned long index);

DOMPoint SVGPointList_insertItemBefore(SVGPointList* self , DOMPoint * newItem, unsigned long index);

DOMPoint SVGPointList_replaceItem(SVGPointList* self , DOMPoint * newItem, unsigned long index);

DOMPoint SVGPointList_removeItem(SVGPointList* self , unsigned long index);

DOMPoint SVGPointList_appendItem(SVGPointList* self , DOMPoint * newItem);
