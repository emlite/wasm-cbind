#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Touch Touch;


DECLARE_EMLITE_TYPE(TouchList, em_Val);

unsigned long TouchList_length(const TouchList *self);

Touch TouchList_item(TouchList* self , unsigned long index);
