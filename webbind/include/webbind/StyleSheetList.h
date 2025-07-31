#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CSSStyleSheet CSSStyleSheet;


DECLARE_EMLITE_TYPE(StyleSheetList, em_Val);

CSSStyleSheet StyleSheetList_item(StyleSheetList* self , unsigned long index);

unsigned long StyleSheetList_length(const StyleSheetList *self);
