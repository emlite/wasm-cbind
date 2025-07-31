#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Element Element;


DECLARE_EMLITE_TYPE(HTMLAllCollection, em_Val);

unsigned long HTMLAllCollection_length(const HTMLAllCollection *self);

jb_Any HTMLAllCollection_namedItem(HTMLAllCollection* self , jb_String * name);

jb_Any HTMLAllCollection_item0(HTMLAllCollection* self );

jb_Any HTMLAllCollection_item1(HTMLAllCollection* self , jb_String * nameOrIndex);
