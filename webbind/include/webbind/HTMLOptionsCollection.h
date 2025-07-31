#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLCollection.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct HTMLOptionElement HTMLOptionElement;


DECLARE_EMLITE_TYPE(HTMLOptionsCollection, HTMLCollection);

unsigned long HTMLOptionsCollection_length(const HTMLOptionsCollection *self);

void HTMLOptionsCollection_set_length(HTMLOptionsCollection* self, unsigned long value);

jb_Undefined HTMLOptionsCollection_add0(HTMLOptionsCollection* self , jb_Any * element);

jb_Undefined HTMLOptionsCollection_add1(HTMLOptionsCollection* self , jb_Any * element, jb_Any * before);

jb_Undefined HTMLOptionsCollection_remove(HTMLOptionsCollection* self , long index);

long HTMLOptionsCollection_selectedIndex(const HTMLOptionsCollection *self);

void HTMLOptionsCollection_set_selectedIndex(HTMLOptionsCollection* self, long value);
