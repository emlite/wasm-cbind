#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGGraphicsElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAnimatedLength SVGAnimatedLength;
typedef struct DOMPointReadOnly DOMPointReadOnly;
typedef struct NodeList NodeList;
typedef struct DOMRectReadOnly DOMRectReadOnly;
typedef struct SVGElement SVGElement;
typedef struct SVGNumber SVGNumber;
typedef struct SVGLength SVGLength;
typedef struct SVGAngle SVGAngle;
typedef struct DOMPoint DOMPoint;
typedef struct DOMMatrix DOMMatrix;
typedef struct DOMRect DOMRect;
typedef struct SVGTransform SVGTransform;
typedef struct DOMMatrix2DInit DOMMatrix2DInit;
typedef struct Element Element;
typedef struct SVGAnimatedRect SVGAnimatedRect;
typedef struct SVGAnimatedPreserveAspectRatio SVGAnimatedPreserveAspectRatio;


DECLARE_EMLITE_TYPE(DOMMatrix2DInit, em_Val);

double DOMMatrix2DInit_a(const DOMMatrix2DInit *self);

void DOMMatrix2DInit_set_a(DOMMatrix2DInit* self, double value);

double DOMMatrix2DInit_b(const DOMMatrix2DInit *self);

void DOMMatrix2DInit_set_b(DOMMatrix2DInit* self, double value);

double DOMMatrix2DInit_c(const DOMMatrix2DInit *self);

void DOMMatrix2DInit_set_c(DOMMatrix2DInit* self, double value);

double DOMMatrix2DInit_d(const DOMMatrix2DInit *self);

void DOMMatrix2DInit_set_d(DOMMatrix2DInit* self, double value);

double DOMMatrix2DInit_e(const DOMMatrix2DInit *self);

void DOMMatrix2DInit_set_e(DOMMatrix2DInit* self, double value);

double DOMMatrix2DInit_f(const DOMMatrix2DInit *self);

void DOMMatrix2DInit_set_f(DOMMatrix2DInit* self, double value);

double DOMMatrix2DInit_m11(const DOMMatrix2DInit *self);

void DOMMatrix2DInit_set_m11(DOMMatrix2DInit* self, double value);

double DOMMatrix2DInit_m12(const DOMMatrix2DInit *self);

void DOMMatrix2DInit_set_m12(DOMMatrix2DInit* self, double value);

double DOMMatrix2DInit_m21(const DOMMatrix2DInit *self);

void DOMMatrix2DInit_set_m21(DOMMatrix2DInit* self, double value);

double DOMMatrix2DInit_m22(const DOMMatrix2DInit *self);

void DOMMatrix2DInit_set_m22(DOMMatrix2DInit* self, double value);

double DOMMatrix2DInit_m41(const DOMMatrix2DInit *self);

void DOMMatrix2DInit_set_m41(DOMMatrix2DInit* self, double value);

double DOMMatrix2DInit_m42(const DOMMatrix2DInit *self);

void DOMMatrix2DInit_set_m42(DOMMatrix2DInit* self, double value);
DECLARE_EMLITE_TYPE(SVGSVGElement, SVGGraphicsElement);

SVGAnimatedLength SVGSVGElement_x(const SVGSVGElement *self);

SVGAnimatedLength SVGSVGElement_y(const SVGSVGElement *self);

SVGAnimatedLength SVGSVGElement_width(const SVGSVGElement *self);

SVGAnimatedLength SVGSVGElement_height(const SVGSVGElement *self);

float SVGSVGElement_currentScale(const SVGSVGElement *self);

void SVGSVGElement_set_currentScale(SVGSVGElement* self, float value);

DOMPointReadOnly SVGSVGElement_currentTranslate(const SVGSVGElement *self);

NodeList SVGSVGElement_getIntersectionList(SVGSVGElement* self , DOMRectReadOnly * rect, SVGElement * referenceElement);

NodeList SVGSVGElement_getEnclosureList(SVGSVGElement* self , DOMRectReadOnly * rect, SVGElement * referenceElement);

bool SVGSVGElement_checkIntersection(SVGSVGElement* self , SVGElement * element, DOMRectReadOnly * rect);

bool SVGSVGElement_checkEnclosure(SVGSVGElement* self , SVGElement * element, DOMRectReadOnly * rect);

jb_Undefined SVGSVGElement_deselectAll(SVGSVGElement* self );

SVGNumber SVGSVGElement_createSVGNumber(SVGSVGElement* self );

SVGLength SVGSVGElement_createSVGLength(SVGSVGElement* self );

SVGAngle SVGSVGElement_createSVGAngle(SVGSVGElement* self );

DOMPoint SVGSVGElement_createSVGPoint(SVGSVGElement* self );

DOMMatrix SVGSVGElement_createSVGMatrix(SVGSVGElement* self );

DOMRect SVGSVGElement_createSVGRect(SVGSVGElement* self );

SVGTransform SVGSVGElement_createSVGTransform(SVGSVGElement* self );

SVGTransform SVGSVGElement_createSVGTransformFromMatrix0(SVGSVGElement* self );

SVGTransform SVGSVGElement_createSVGTransformFromMatrix1(SVGSVGElement* self , DOMMatrix2DInit * matrix);

Element SVGSVGElement_getElementById(SVGSVGElement* self , jb_String * elementId);

unsigned long SVGSVGElement_suspendRedraw(SVGSVGElement* self , unsigned long maxWaitMilliseconds);

jb_Undefined SVGSVGElement_unsuspendRedraw(SVGSVGElement* self , unsigned long suspendHandleID);

jb_Undefined SVGSVGElement_unsuspendRedrawAll(SVGSVGElement* self );

jb_Undefined SVGSVGElement_forceRedraw(SVGSVGElement* self );

jb_Undefined SVGSVGElement_pauseAnimations(SVGSVGElement* self );

jb_Undefined SVGSVGElement_unpauseAnimations(SVGSVGElement* self );

bool SVGSVGElement_animationsPaused(SVGSVGElement* self );

float SVGSVGElement_getCurrentTime(SVGSVGElement* self );

jb_Undefined SVGSVGElement_setCurrentTime(SVGSVGElement* self , float seconds);

SVGAnimatedRect SVGSVGElement_viewBox(const SVGSVGElement *self);

SVGAnimatedPreserveAspectRatio SVGSVGElement_preserveAspectRatio(const SVGSVGElement *self);

jb_Any SVGSVGElement_onportalactivate(const SVGSVGElement *self);

void SVGSVGElement_set_onportalactivate(SVGSVGElement* self, jb_Any * value);
