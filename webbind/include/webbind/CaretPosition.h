#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Node Node;
typedef struct DOMRect DOMRect;


DECLARE_EMLITE_TYPE(CaretPosition, em_Val);

Node CaretPosition_offsetNode(const CaretPosition *self);

unsigned long CaretPosition_offset(const CaretPosition *self);

DOMRect CaretPosition_getClientRect(CaretPosition* self );
