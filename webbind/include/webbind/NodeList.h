#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Node Node;


DECLARE_EMLITE_TYPE(NodeList, em_Val);

Node NodeList_item(NodeList* self , unsigned long index);

unsigned long NodeList_length(const NodeList *self);
