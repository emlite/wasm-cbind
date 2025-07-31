#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGGeometryElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DOMPointReadOnly DOMPointReadOnly;
typedef struct DOMPoint DOMPoint;
typedef struct DOMMatrixInit DOMMatrixInit;


DECLARE_EMLITE_TYPE(DOMMatrixInit, em_Val);

double DOMMatrixInit_m13(const DOMMatrixInit *self);

void DOMMatrixInit_set_m13(DOMMatrixInit* self, double value);

double DOMMatrixInit_m14(const DOMMatrixInit *self);

void DOMMatrixInit_set_m14(DOMMatrixInit* self, double value);

double DOMMatrixInit_m23(const DOMMatrixInit *self);

void DOMMatrixInit_set_m23(DOMMatrixInit* self, double value);

double DOMMatrixInit_m24(const DOMMatrixInit *self);

void DOMMatrixInit_set_m24(DOMMatrixInit* self, double value);

double DOMMatrixInit_m31(const DOMMatrixInit *self);

void DOMMatrixInit_set_m31(DOMMatrixInit* self, double value);

double DOMMatrixInit_m32(const DOMMatrixInit *self);

void DOMMatrixInit_set_m32(DOMMatrixInit* self, double value);

double DOMMatrixInit_m33(const DOMMatrixInit *self);

void DOMMatrixInit_set_m33(DOMMatrixInit* self, double value);

double DOMMatrixInit_m34(const DOMMatrixInit *self);

void DOMMatrixInit_set_m34(DOMMatrixInit* self, double value);

double DOMMatrixInit_m43(const DOMMatrixInit *self);

void DOMMatrixInit_set_m43(DOMMatrixInit* self, double value);

double DOMMatrixInit_m44(const DOMMatrixInit *self);

void DOMMatrixInit_set_m44(DOMMatrixInit* self, double value);

bool DOMMatrixInit_is2D(const DOMMatrixInit *self);

void DOMMatrixInit_set_is2D(DOMMatrixInit* self, bool value);
DECLARE_EMLITE_TYPE(DOMPointReadOnly, em_Val);

DOMPointReadOnly DOMPointReadOnly_new0();

DOMPointReadOnly DOMPointReadOnly_new1(double x);

DOMPointReadOnly DOMPointReadOnly_new2(double x, double y);

DOMPointReadOnly DOMPointReadOnly_new3(double x, double y, double z);

DOMPointReadOnly DOMPointReadOnly_new4(double x, double y, double z, double w);

DOMPointReadOnly DOMPointReadOnly_fromPoint0(DOMPointReadOnly* self );

DOMPointReadOnly DOMPointReadOnly_fromPoint1(DOMPointReadOnly* self , DOMPointInit * other);

double DOMPointReadOnly_x(const DOMPointReadOnly *self);

double DOMPointReadOnly_y(const DOMPointReadOnly *self);

double DOMPointReadOnly_z(const DOMPointReadOnly *self);

double DOMPointReadOnly_w(const DOMPointReadOnly *self);

DOMPoint DOMPointReadOnly_matrixTransform0(DOMPointReadOnly* self );

DOMPoint DOMPointReadOnly_matrixTransform1(DOMPointReadOnly* self , DOMMatrixInit * matrix);

jb_Object DOMPointReadOnly_toJSON(DOMPointReadOnly* self );
