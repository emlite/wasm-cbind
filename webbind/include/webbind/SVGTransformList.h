#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGSVGElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGTransform SVGTransform;


DECLARE_EMLITE_TYPE(SVGTransformList, em_Val);

unsigned long SVGTransformList_length(const SVGTransformList *self);

unsigned long SVGTransformList_numberOfItems(const SVGTransformList *self);

jb_Undefined SVGTransformList_clear(SVGTransformList* self );

SVGTransform SVGTransformList_initialize(SVGTransformList* self , SVGTransform * newItem);

SVGTransform SVGTransformList_getItem(SVGTransformList* self , unsigned long index);

SVGTransform SVGTransformList_insertItemBefore(SVGTransformList* self , SVGTransform * newItem, unsigned long index);

SVGTransform SVGTransformList_replaceItem(SVGTransformList* self , SVGTransform * newItem, unsigned long index);

SVGTransform SVGTransformList_removeItem(SVGTransformList* self , unsigned long index);

SVGTransform SVGTransformList_appendItem(SVGTransformList* self , SVGTransform * newItem);

SVGTransform SVGTransformList_createSVGTransformFromMatrix0(SVGTransformList* self );

SVGTransform SVGTransformList_createSVGTransformFromMatrix1(SVGTransformList* self , DOMMatrix2DInit * matrix);

SVGTransform SVGTransformList_consolidate(SVGTransformList* self );
