#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGNumber SVGNumber;


DECLARE_EMLITE_TYPE(SVGNumberList, em_Val);

unsigned long SVGNumberList_length(const SVGNumberList *self);

unsigned long SVGNumberList_numberOfItems(const SVGNumberList *self);

jb_Undefined SVGNumberList_clear(SVGNumberList* self );

SVGNumber SVGNumberList_initialize(SVGNumberList* self , SVGNumber * newItem);

SVGNumber SVGNumberList_getItem(SVGNumberList* self , unsigned long index);

SVGNumber SVGNumberList_insertItemBefore(SVGNumberList* self , SVGNumber * newItem, unsigned long index);

SVGNumber SVGNumberList_replaceItem(SVGNumberList* self , SVGNumber * newItem, unsigned long index);

SVGNumber SVGNumberList_removeItem(SVGNumberList* self , unsigned long index);

SVGNumber SVGNumberList_appendItem(SVGNumberList* self , SVGNumber * newItem);
