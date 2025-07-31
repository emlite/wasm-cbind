#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "DOMRectReadOnly.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DOMRect DOMRect;


DECLARE_EMLITE_TYPE(DOMRect, DOMRectReadOnly);

DOMRect DOMRect_new0();

DOMRect DOMRect_new1(double x);

DOMRect DOMRect_new2(double x, double y);

DOMRect DOMRect_new3(double x, double y, double width);

DOMRect DOMRect_new4(double x, double y, double width, double height);

DOMRect DOMRect_fromRect0(DOMRect* self );

DOMRect DOMRect_fromRect1(DOMRect* self , DOMRectInit * other);

double DOMRect_x(const DOMRect *self);

void DOMRect_set_x(DOMRect* self, double value);

double DOMRect_y(const DOMRect *self);

void DOMRect_set_y(DOMRect* self, double value);

double DOMRect_width(const DOMRect *self);

void DOMRect_set_width(DOMRect* self, double value);

double DOMRect_height(const DOMRect *self);

void DOMRect_set_height(DOMRect* self, double value);
