#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "DOMRectReadOnly.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DOMQuad DOMQuad;
typedef struct DOMPoint DOMPoint;
typedef struct DOMRect DOMRect;
typedef struct DOMQuadInit DOMQuadInit;
typedef struct DOMPointInit DOMPointInit;


DECLARE_EMLITE_TYPE(DOMQuad, em_Val);

DOMQuad DOMQuad_new0();

DOMQuad DOMQuad_new1(DOMPointInit * p1);

DOMQuad DOMQuad_new2(DOMPointInit * p1, DOMPointInit * p2);

DOMQuad DOMQuad_new3(DOMPointInit * p1, DOMPointInit * p2, DOMPointInit * p3);

DOMQuad DOMQuad_new4(DOMPointInit * p1, DOMPointInit * p2, DOMPointInit * p3, DOMPointInit * p4);

DOMQuad DOMQuad_fromRect0(DOMQuad* self );

DOMQuad DOMQuad_fromRect1(DOMQuad* self , DOMRectInit * other);

DOMQuad DOMQuad_fromQuad0(DOMQuad* self );

DOMQuad DOMQuad_fromQuad1(DOMQuad* self , DOMQuadInit * other);

DOMPoint DOMQuad_p1(const DOMQuad *self);

DOMPoint DOMQuad_p2(const DOMQuad *self);

DOMPoint DOMQuad_p3(const DOMQuad *self);

DOMPoint DOMQuad_p4(const DOMQuad *self);

DOMRect DOMQuad_getBounds(DOMQuad* self );

jb_Object DOMQuad_toJSON(DOMQuad* self );
