#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "DOMMatrixReadOnly.h"
#include "DOMPointReadOnly.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DOMMatrix DOMMatrix;


DECLARE_EMLITE_TYPE(DOMMatrix, DOMMatrixReadOnly);

DOMMatrix DOMMatrix_new0();

DOMMatrix DOMMatrix_new1(jb_Any * init);

DOMMatrix DOMMatrix_fromMatrix0(DOMMatrix* self );

DOMMatrix DOMMatrix_fromMatrix1(DOMMatrix* self , DOMMatrixInit * other);

DOMMatrix DOMMatrix_fromFloat32Array(DOMMatrix* self , jb_Float32Array * array32);

DOMMatrix DOMMatrix_fromFloat64Array(DOMMatrix* self , jb_Float64Array * array64);

double DOMMatrix_a(const DOMMatrix *self);

void DOMMatrix_set_a(DOMMatrix* self, double value);

double DOMMatrix_b(const DOMMatrix *self);

void DOMMatrix_set_b(DOMMatrix* self, double value);

double DOMMatrix_c(const DOMMatrix *self);

void DOMMatrix_set_c(DOMMatrix* self, double value);

double DOMMatrix_d(const DOMMatrix *self);

void DOMMatrix_set_d(DOMMatrix* self, double value);

double DOMMatrix_e(const DOMMatrix *self);

void DOMMatrix_set_e(DOMMatrix* self, double value);

double DOMMatrix_f(const DOMMatrix *self);

void DOMMatrix_set_f(DOMMatrix* self, double value);

double DOMMatrix_m11(const DOMMatrix *self);

void DOMMatrix_set_m11(DOMMatrix* self, double value);

double DOMMatrix_m12(const DOMMatrix *self);

void DOMMatrix_set_m12(DOMMatrix* self, double value);

double DOMMatrix_m13(const DOMMatrix *self);

void DOMMatrix_set_m13(DOMMatrix* self, double value);

double DOMMatrix_m14(const DOMMatrix *self);

void DOMMatrix_set_m14(DOMMatrix* self, double value);

double DOMMatrix_m21(const DOMMatrix *self);

void DOMMatrix_set_m21(DOMMatrix* self, double value);

double DOMMatrix_m22(const DOMMatrix *self);

void DOMMatrix_set_m22(DOMMatrix* self, double value);

double DOMMatrix_m23(const DOMMatrix *self);

void DOMMatrix_set_m23(DOMMatrix* self, double value);

double DOMMatrix_m24(const DOMMatrix *self);

void DOMMatrix_set_m24(DOMMatrix* self, double value);

double DOMMatrix_m31(const DOMMatrix *self);

void DOMMatrix_set_m31(DOMMatrix* self, double value);

double DOMMatrix_m32(const DOMMatrix *self);

void DOMMatrix_set_m32(DOMMatrix* self, double value);

double DOMMatrix_m33(const DOMMatrix *self);

void DOMMatrix_set_m33(DOMMatrix* self, double value);

double DOMMatrix_m34(const DOMMatrix *self);

void DOMMatrix_set_m34(DOMMatrix* self, double value);

double DOMMatrix_m41(const DOMMatrix *self);

void DOMMatrix_set_m41(DOMMatrix* self, double value);

double DOMMatrix_m42(const DOMMatrix *self);

void DOMMatrix_set_m42(DOMMatrix* self, double value);

double DOMMatrix_m43(const DOMMatrix *self);

void DOMMatrix_set_m43(DOMMatrix* self, double value);

double DOMMatrix_m44(const DOMMatrix *self);

void DOMMatrix_set_m44(DOMMatrix* self, double value);

DOMMatrix DOMMatrix_multiplySelf0(DOMMatrix* self );

DOMMatrix DOMMatrix_multiplySelf1(DOMMatrix* self , DOMMatrixInit * other);

DOMMatrix DOMMatrix_preMultiplySelf0(DOMMatrix* self );

DOMMatrix DOMMatrix_preMultiplySelf1(DOMMatrix* self , DOMMatrixInit * other);

DOMMatrix DOMMatrix_translateSelf0(DOMMatrix* self );

DOMMatrix DOMMatrix_translateSelf1(DOMMatrix* self , double tx);

DOMMatrix DOMMatrix_translateSelf2(DOMMatrix* self , double tx, double ty);

DOMMatrix DOMMatrix_translateSelf3(DOMMatrix* self , double tx, double ty, double tz);

DOMMatrix DOMMatrix_scaleSelf0(DOMMatrix* self );

DOMMatrix DOMMatrix_scaleSelf1(DOMMatrix* self , double scaleX);

DOMMatrix DOMMatrix_scaleSelf2(DOMMatrix* self , double scaleX, double scaleY);

DOMMatrix DOMMatrix_scaleSelf3(DOMMatrix* self , double scaleX, double scaleY, double scaleZ);

DOMMatrix DOMMatrix_scaleSelf4(DOMMatrix* self , double scaleX, double scaleY, double scaleZ, double originX);

DOMMatrix DOMMatrix_scaleSelf5(DOMMatrix* self , double scaleX, double scaleY, double scaleZ, double originX, double originY);

DOMMatrix DOMMatrix_scaleSelf6(DOMMatrix* self , double scaleX, double scaleY, double scaleZ, double originX, double originY, double originZ);

DOMMatrix DOMMatrix_scale3dSelf0(DOMMatrix* self );

DOMMatrix DOMMatrix_scale3dSelf1(DOMMatrix* self , double scale);

DOMMatrix DOMMatrix_scale3dSelf2(DOMMatrix* self , double scale, double originX);

DOMMatrix DOMMatrix_scale3dSelf3(DOMMatrix* self , double scale, double originX, double originY);

DOMMatrix DOMMatrix_scale3dSelf4(DOMMatrix* self , double scale, double originX, double originY, double originZ);

DOMMatrix DOMMatrix_rotateSelf0(DOMMatrix* self );

DOMMatrix DOMMatrix_rotateSelf1(DOMMatrix* self , double rotX);

DOMMatrix DOMMatrix_rotateSelf2(DOMMatrix* self , double rotX, double rotY);

DOMMatrix DOMMatrix_rotateSelf3(DOMMatrix* self , double rotX, double rotY, double rotZ);

DOMMatrix DOMMatrix_rotateFromVectorSelf0(DOMMatrix* self );

DOMMatrix DOMMatrix_rotateFromVectorSelf1(DOMMatrix* self , double x);

DOMMatrix DOMMatrix_rotateFromVectorSelf2(DOMMatrix* self , double x, double y);

DOMMatrix DOMMatrix_rotateAxisAngleSelf0(DOMMatrix* self );

DOMMatrix DOMMatrix_rotateAxisAngleSelf1(DOMMatrix* self , double x);

DOMMatrix DOMMatrix_rotateAxisAngleSelf2(DOMMatrix* self , double x, double y);

DOMMatrix DOMMatrix_rotateAxisAngleSelf3(DOMMatrix* self , double x, double y, double z);

DOMMatrix DOMMatrix_rotateAxisAngleSelf4(DOMMatrix* self , double x, double y, double z, double angle);

DOMMatrix DOMMatrix_skewXSelf0(DOMMatrix* self );

DOMMatrix DOMMatrix_skewXSelf1(DOMMatrix* self , double sx);

DOMMatrix DOMMatrix_skewYSelf0(DOMMatrix* self );

DOMMatrix DOMMatrix_skewYSelf1(DOMMatrix* self , double sy);

DOMMatrix DOMMatrix_invertSelf(DOMMatrix* self );

DOMMatrix DOMMatrix_setMatrixValue(DOMMatrix* self , jb_String * transformList);
