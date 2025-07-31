#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGSVGElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DOMMatrix DOMMatrix;
typedef struct CanvasGradient CanvasGradient;
typedef struct CanvasPattern CanvasPattern;
typedef struct Path2D Path2D;


DECLARE_EMLITE_TYPE(PaintRenderingContext2D, em_Val);

jb_Undefined PaintRenderingContext2D_save(PaintRenderingContext2D* self );

jb_Undefined PaintRenderingContext2D_restore(PaintRenderingContext2D* self );

jb_Undefined PaintRenderingContext2D_reset(PaintRenderingContext2D* self );

bool PaintRenderingContext2D_isContextLost(PaintRenderingContext2D* self );

jb_Undefined PaintRenderingContext2D_scale(PaintRenderingContext2D* self , double x, double y);

jb_Undefined PaintRenderingContext2D_rotate(PaintRenderingContext2D* self , double angle);

jb_Undefined PaintRenderingContext2D_translate(PaintRenderingContext2D* self , double x, double y);

jb_Undefined PaintRenderingContext2D_transform(PaintRenderingContext2D* self , double a, double b, double c, double d, double e, double f);

DOMMatrix PaintRenderingContext2D_getTransform(PaintRenderingContext2D* self );

jb_Undefined PaintRenderingContext2D_setTransform0(PaintRenderingContext2D* self );

jb_Undefined PaintRenderingContext2D_setTransform1(PaintRenderingContext2D* self , DOMMatrix2DInit * transform);

jb_Undefined PaintRenderingContext2D_resetTransform(PaintRenderingContext2D* self );

double PaintRenderingContext2D_globalAlpha(const PaintRenderingContext2D *self);

void PaintRenderingContext2D_set_globalAlpha(PaintRenderingContext2D* self, double value);

jb_String PaintRenderingContext2D_globalCompositeOperation(const PaintRenderingContext2D *self);

void PaintRenderingContext2D_set_globalCompositeOperation(PaintRenderingContext2D* self, jb_String * value);

bool PaintRenderingContext2D_imageSmoothingEnabled(const PaintRenderingContext2D *self);

void PaintRenderingContext2D_set_imageSmoothingEnabled(PaintRenderingContext2D* self, bool value);

ImageSmoothingQuality PaintRenderingContext2D_imageSmoothingQuality(const PaintRenderingContext2D *self);

void PaintRenderingContext2D_set_imageSmoothingQuality(PaintRenderingContext2D* self, ImageSmoothingQuality * value);

jb_Any PaintRenderingContext2D_strokeStyle(const PaintRenderingContext2D *self);

void PaintRenderingContext2D_set_strokeStyle(PaintRenderingContext2D* self, jb_Any * value);

jb_Any PaintRenderingContext2D_fillStyle(const PaintRenderingContext2D *self);

void PaintRenderingContext2D_set_fillStyle(PaintRenderingContext2D* self, jb_Any * value);

CanvasGradient PaintRenderingContext2D_createLinearGradient(PaintRenderingContext2D* self , double x0, double y0, double x1, double y1);

CanvasGradient PaintRenderingContext2D_createRadialGradient(PaintRenderingContext2D* self , double x0, double y0, double r0, double x1, double y1, double r1);

CanvasGradient PaintRenderingContext2D_createConicGradient(PaintRenderingContext2D* self , double startAngle, double x, double y);

CanvasPattern PaintRenderingContext2D_createPattern(PaintRenderingContext2D* self , jb_Any * image, jb_String * repetition);

double PaintRenderingContext2D_shadowOffsetX(const PaintRenderingContext2D *self);

void PaintRenderingContext2D_set_shadowOffsetX(PaintRenderingContext2D* self, double value);

double PaintRenderingContext2D_shadowOffsetY(const PaintRenderingContext2D *self);

void PaintRenderingContext2D_set_shadowOffsetY(PaintRenderingContext2D* self, double value);

double PaintRenderingContext2D_shadowBlur(const PaintRenderingContext2D *self);

void PaintRenderingContext2D_set_shadowBlur(PaintRenderingContext2D* self, double value);

jb_String PaintRenderingContext2D_shadowColor(const PaintRenderingContext2D *self);

void PaintRenderingContext2D_set_shadowColor(PaintRenderingContext2D* self, jb_String * value);

jb_Undefined PaintRenderingContext2D_clearRect(PaintRenderingContext2D* self , double x, double y, double w, double h);

jb_Undefined PaintRenderingContext2D_fillRect(PaintRenderingContext2D* self , double x, double y, double w, double h);

jb_Undefined PaintRenderingContext2D_strokeRect(PaintRenderingContext2D* self , double x, double y, double w, double h);

jb_Undefined PaintRenderingContext2D_beginPath(PaintRenderingContext2D* self );

jb_Undefined PaintRenderingContext2D_fill0(PaintRenderingContext2D* self , Path2D * path);

jb_Undefined PaintRenderingContext2D_fill1(PaintRenderingContext2D* self , Path2D * path, CanvasFillRule * fillRule);

jb_Undefined PaintRenderingContext2D_stroke(PaintRenderingContext2D* self , Path2D * path);

jb_Undefined PaintRenderingContext2D_clip0(PaintRenderingContext2D* self , Path2D * path);

jb_Undefined PaintRenderingContext2D_clip1(PaintRenderingContext2D* self , Path2D * path, CanvasFillRule * fillRule);

bool PaintRenderingContext2D_isPointInPath0(PaintRenderingContext2D* self , Path2D * path, double x, double y);

bool PaintRenderingContext2D_isPointInPath1(PaintRenderingContext2D* self , Path2D * path, double x, double y, CanvasFillRule * fillRule);

bool PaintRenderingContext2D_isPointInStroke(PaintRenderingContext2D* self , Path2D * path, double x, double y);

jb_Undefined PaintRenderingContext2D_drawImage(PaintRenderingContext2D* self , jb_Any * image, double sx, double sy, double sw, double sh, double dx, double dy, double dw, double dh);

double PaintRenderingContext2D_lineWidth(const PaintRenderingContext2D *self);

void PaintRenderingContext2D_set_lineWidth(PaintRenderingContext2D* self, double value);

CanvasLineCap PaintRenderingContext2D_lineCap(const PaintRenderingContext2D *self);

void PaintRenderingContext2D_set_lineCap(PaintRenderingContext2D* self, CanvasLineCap * value);

CanvasLineJoin PaintRenderingContext2D_lineJoin(const PaintRenderingContext2D *self);

void PaintRenderingContext2D_set_lineJoin(PaintRenderingContext2D* self, CanvasLineJoin * value);

double PaintRenderingContext2D_miterLimit(const PaintRenderingContext2D *self);

void PaintRenderingContext2D_set_miterLimit(PaintRenderingContext2D* self, double value);

jb_Undefined PaintRenderingContext2D_setLineDash(PaintRenderingContext2D* self , jb_Array * segments);

jb_Array PaintRenderingContext2D_getLineDash(PaintRenderingContext2D* self );

double PaintRenderingContext2D_lineDashOffset(const PaintRenderingContext2D *self);

void PaintRenderingContext2D_set_lineDashOffset(PaintRenderingContext2D* self, double value);

jb_Undefined PaintRenderingContext2D_closePath(PaintRenderingContext2D* self );

jb_Undefined PaintRenderingContext2D_moveTo(PaintRenderingContext2D* self , double x, double y);

jb_Undefined PaintRenderingContext2D_lineTo(PaintRenderingContext2D* self , double x, double y);

jb_Undefined PaintRenderingContext2D_quadraticCurveTo(PaintRenderingContext2D* self , double cpx, double cpy, double x, double y);

jb_Undefined PaintRenderingContext2D_bezierCurveTo(PaintRenderingContext2D* self , double cp1x, double cp1y, double cp2x, double cp2y, double x, double y);

jb_Undefined PaintRenderingContext2D_arcTo(PaintRenderingContext2D* self , double x1, double y1, double x2, double y2, double radius);

jb_Undefined PaintRenderingContext2D_rect(PaintRenderingContext2D* self , double x, double y, double w, double h);

jb_Undefined PaintRenderingContext2D_roundRect0(PaintRenderingContext2D* self , double x, double y, double w, double h);

jb_Undefined PaintRenderingContext2D_roundRect1(PaintRenderingContext2D* self , double x, double y, double w, double h, jb_Any * radii);

jb_Undefined PaintRenderingContext2D_arc0(PaintRenderingContext2D* self , double x, double y, double radius, double startAngle, double endAngle);

jb_Undefined PaintRenderingContext2D_arc1(PaintRenderingContext2D* self , double x, double y, double radius, double startAngle, double endAngle, bool counterclockwise);

jb_Undefined PaintRenderingContext2D_ellipse0(PaintRenderingContext2D* self , double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle);

jb_Undefined PaintRenderingContext2D_ellipse1(PaintRenderingContext2D* self , double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle, bool counterclockwise);
