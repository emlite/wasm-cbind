#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "DOMPointReadOnly.h"
#include "SVGGeometryElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DOMMatrixReadOnly DOMMatrixReadOnly;
typedef struct DOMMatrix DOMMatrix;
typedef struct DOMPoint DOMPoint;


DECLARE_EMLITE_TYPE(DOMMatrixReadOnly, em_Val);

DOMMatrixReadOnly DOMMatrixReadOnly_new0();

DOMMatrixReadOnly DOMMatrixReadOnly_new1(jb_Any * init);

DOMMatrixReadOnly DOMMatrixReadOnly_fromMatrix0(DOMMatrixReadOnly* self );

DOMMatrixReadOnly DOMMatrixReadOnly_fromMatrix1(DOMMatrixReadOnly* self , DOMMatrixInit * other);

DOMMatrixReadOnly DOMMatrixReadOnly_fromFloat32Array(DOMMatrixReadOnly* self , jb_Float32Array * array32);

DOMMatrixReadOnly DOMMatrixReadOnly_fromFloat64Array(DOMMatrixReadOnly* self , jb_Float64Array * array64);

double DOMMatrixReadOnly_a(const DOMMatrixReadOnly *self);

double DOMMatrixReadOnly_b(const DOMMatrixReadOnly *self);

double DOMMatrixReadOnly_c(const DOMMatrixReadOnly *self);

double DOMMatrixReadOnly_d(const DOMMatrixReadOnly *self);

double DOMMatrixReadOnly_e(const DOMMatrixReadOnly *self);

double DOMMatrixReadOnly_f(const DOMMatrixReadOnly *self);

double DOMMatrixReadOnly_m11(const DOMMatrixReadOnly *self);

double DOMMatrixReadOnly_m12(const DOMMatrixReadOnly *self);

double DOMMatrixReadOnly_m13(const DOMMatrixReadOnly *self);

double DOMMatrixReadOnly_m14(const DOMMatrixReadOnly *self);

double DOMMatrixReadOnly_m21(const DOMMatrixReadOnly *self);

double DOMMatrixReadOnly_m22(const DOMMatrixReadOnly *self);

double DOMMatrixReadOnly_m23(const DOMMatrixReadOnly *self);

double DOMMatrixReadOnly_m24(const DOMMatrixReadOnly *self);

double DOMMatrixReadOnly_m31(const DOMMatrixReadOnly *self);

double DOMMatrixReadOnly_m32(const DOMMatrixReadOnly *self);

double DOMMatrixReadOnly_m33(const DOMMatrixReadOnly *self);

double DOMMatrixReadOnly_m34(const DOMMatrixReadOnly *self);

double DOMMatrixReadOnly_m41(const DOMMatrixReadOnly *self);

double DOMMatrixReadOnly_m42(const DOMMatrixReadOnly *self);

double DOMMatrixReadOnly_m43(const DOMMatrixReadOnly *self);

double DOMMatrixReadOnly_m44(const DOMMatrixReadOnly *self);

bool DOMMatrixReadOnly_is2D(const DOMMatrixReadOnly *self);

bool DOMMatrixReadOnly_isIdentity(const DOMMatrixReadOnly *self);

DOMMatrix DOMMatrixReadOnly_translate0(DOMMatrixReadOnly* self );

DOMMatrix DOMMatrixReadOnly_translate1(DOMMatrixReadOnly* self , double tx);

DOMMatrix DOMMatrixReadOnly_translate2(DOMMatrixReadOnly* self , double tx, double ty);

DOMMatrix DOMMatrixReadOnly_translate3(DOMMatrixReadOnly* self , double tx, double ty, double tz);

DOMMatrix DOMMatrixReadOnly_scale0(DOMMatrixReadOnly* self );

DOMMatrix DOMMatrixReadOnly_scale1(DOMMatrixReadOnly* self , double scaleX);

DOMMatrix DOMMatrixReadOnly_scale2(DOMMatrixReadOnly* self , double scaleX, double scaleY);

DOMMatrix DOMMatrixReadOnly_scale3(DOMMatrixReadOnly* self , double scaleX, double scaleY, double scaleZ);

DOMMatrix DOMMatrixReadOnly_scale4(DOMMatrixReadOnly* self , double scaleX, double scaleY, double scaleZ, double originX);

DOMMatrix DOMMatrixReadOnly_scale5(DOMMatrixReadOnly* self , double scaleX, double scaleY, double scaleZ, double originX, double originY);

DOMMatrix DOMMatrixReadOnly_scale6(DOMMatrixReadOnly* self , double scaleX, double scaleY, double scaleZ, double originX, double originY, double originZ);

DOMMatrix DOMMatrixReadOnly_scaleNonUniform0(DOMMatrixReadOnly* self );

DOMMatrix DOMMatrixReadOnly_scaleNonUniform1(DOMMatrixReadOnly* self , double scaleX);

DOMMatrix DOMMatrixReadOnly_scaleNonUniform2(DOMMatrixReadOnly* self , double scaleX, double scaleY);

DOMMatrix DOMMatrixReadOnly_scale3d0(DOMMatrixReadOnly* self );

DOMMatrix DOMMatrixReadOnly_scale3d1(DOMMatrixReadOnly* self , double scale);

DOMMatrix DOMMatrixReadOnly_scale3d2(DOMMatrixReadOnly* self , double scale, double originX);

DOMMatrix DOMMatrixReadOnly_scale3d3(DOMMatrixReadOnly* self , double scale, double originX, double originY);

DOMMatrix DOMMatrixReadOnly_scale3d4(DOMMatrixReadOnly* self , double scale, double originX, double originY, double originZ);

DOMMatrix DOMMatrixReadOnly_rotate0(DOMMatrixReadOnly* self );

DOMMatrix DOMMatrixReadOnly_rotate1(DOMMatrixReadOnly* self , double rotX);

DOMMatrix DOMMatrixReadOnly_rotate2(DOMMatrixReadOnly* self , double rotX, double rotY);

DOMMatrix DOMMatrixReadOnly_rotate3(DOMMatrixReadOnly* self , double rotX, double rotY, double rotZ);

DOMMatrix DOMMatrixReadOnly_rotateFromVector0(DOMMatrixReadOnly* self );

DOMMatrix DOMMatrixReadOnly_rotateFromVector1(DOMMatrixReadOnly* self , double x);

DOMMatrix DOMMatrixReadOnly_rotateFromVector2(DOMMatrixReadOnly* self , double x, double y);

DOMMatrix DOMMatrixReadOnly_rotateAxisAngle0(DOMMatrixReadOnly* self );

DOMMatrix DOMMatrixReadOnly_rotateAxisAngle1(DOMMatrixReadOnly* self , double x);

DOMMatrix DOMMatrixReadOnly_rotateAxisAngle2(DOMMatrixReadOnly* self , double x, double y);

DOMMatrix DOMMatrixReadOnly_rotateAxisAngle3(DOMMatrixReadOnly* self , double x, double y, double z);

DOMMatrix DOMMatrixReadOnly_rotateAxisAngle4(DOMMatrixReadOnly* self , double x, double y, double z, double angle);

DOMMatrix DOMMatrixReadOnly_skewX0(DOMMatrixReadOnly* self );

DOMMatrix DOMMatrixReadOnly_skewX1(DOMMatrixReadOnly* self , double sx);

DOMMatrix DOMMatrixReadOnly_skewY0(DOMMatrixReadOnly* self );

DOMMatrix DOMMatrixReadOnly_skewY1(DOMMatrixReadOnly* self , double sy);

DOMMatrix DOMMatrixReadOnly_multiply0(DOMMatrixReadOnly* self );

DOMMatrix DOMMatrixReadOnly_multiply1(DOMMatrixReadOnly* self , DOMMatrixInit * other);

DOMMatrix DOMMatrixReadOnly_flipX(DOMMatrixReadOnly* self );

DOMMatrix DOMMatrixReadOnly_flipY(DOMMatrixReadOnly* self );

DOMMatrix DOMMatrixReadOnly_inverse(DOMMatrixReadOnly* self );

DOMPoint DOMMatrixReadOnly_transformPoint0(DOMMatrixReadOnly* self );

DOMPoint DOMMatrixReadOnly_transformPoint1(DOMMatrixReadOnly* self , DOMPointInit * point);

jb_Float32Array DOMMatrixReadOnly_toFloat32Array(DOMMatrixReadOnly* self );

jb_Float64Array DOMMatrixReadOnly_toFloat64Array(DOMMatrixReadOnly* self );

jb_Object DOMMatrixReadOnly_toJSON(DOMMatrixReadOnly* self );
