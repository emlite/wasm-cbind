#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSTransformComponent.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DOMMatrix DOMMatrix;
typedef struct DOMMatrixReadOnly DOMMatrixReadOnly;


DECLARE_EMLITE_TYPE(CSSMatrixComponent, CSSTransformComponent);

CSSMatrixComponent CSSMatrixComponent_new0(DOMMatrixReadOnly * matrix);

CSSMatrixComponent CSSMatrixComponent_new1(DOMMatrixReadOnly * matrix, jb_Any * options);

DOMMatrix CSSMatrixComponent_matrix(const CSSMatrixComponent *self);

void CSSMatrixComponent_set_matrix(CSSMatrixComponent* self, DOMMatrix * value);
