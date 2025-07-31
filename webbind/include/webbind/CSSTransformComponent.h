#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DOMMatrix DOMMatrix;


DECLARE_EMLITE_TYPE(CSSTransformComponent, em_Val);

bool CSSTransformComponent_is2D(const CSSTransformComponent *self);

void CSSTransformComponent_set_is2D(CSSTransformComponent* self, bool value);

DOMMatrix CSSTransformComponent_toMatrix(CSSTransformComponent* self );
