#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Node Node;


DECLARE_EMLITE_TYPE(XMLSerializer, em_Val);

XMLSerializer XMLSerializer_new();

jb_String XMLSerializer_serializeToString(XMLSerializer* self , Node * root);
