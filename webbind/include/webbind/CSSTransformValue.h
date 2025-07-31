#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSStyleValue.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CSSTransformComponent CSSTransformComponent;
typedef struct DOMMatrix DOMMatrix;


DECLARE_EMLITE_TYPE(CSSTransformValue, CSSStyleValue);

CSSTransformValue CSSTransformValue_new(jb_Array * transforms);

unsigned long CSSTransformValue_length(const CSSTransformValue *self);

bool CSSTransformValue_is2D(const CSSTransformValue *self);

DOMMatrix CSSTransformValue_toMatrix(CSSTransformValue* self );
