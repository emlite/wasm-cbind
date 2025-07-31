#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CanvasRenderingContext2D.h"
#include "SVGSVGElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct OffscreenCanvas OffscreenCanvas;
typedef struct DOMMatrix DOMMatrix;
typedef struct CanvasGradient CanvasGradient;
typedef struct CanvasPattern CanvasPattern;
typedef struct Path2D Path2D;
typedef struct TextMetrics TextMetrics;
typedef struct ImageData ImageData;


DECLARE_EMLITE_TYPE(OffscreenCanvasRenderingContext2D, em_Val);

OffscreenCanvas OffscreenCanvasRenderingContext2D_canvas(const OffscreenCanvasRenderingContext2D *self);

CanvasRenderingContext2DSettings OffscreenCanvasRenderingContext2D_getContextAttributes(OffscreenCanvasRenderingContext2D* self );

jb_Undefined OffscreenCanvasRenderingContext2D_save(OffscreenCanvasRenderingContext2D* self );

jb_Undefined OffscreenCanvasRenderingContext2D_restore(OffscreenCanvasRenderingContext2D* self );

jb_Undefined OffscreenCanvasRenderingContext2D_reset(OffscreenCanvasRenderingContext2D* self );

bool OffscreenCanvasRenderingContext2D_isContextLost(OffscreenCanvasRenderingContext2D* self );

jb_Undefined OffscreenCanvasRenderingContext2D_scale(OffscreenCanvasRenderingContext2D* self , double x, double y);

jb_Undefined OffscreenCanvasRenderingContext2D_rotate(OffscreenCanvasRenderingContext2D* self , double angle);

jb_Undefined OffscreenCanvasRenderingContext2D_translate(OffscreenCanvasRenderingContext2D* self , double x, double y);

jb_Undefined OffscreenCanvasRenderingContext2D_transform(OffscreenCanvasRenderingContext2D* self , double a, double b, double c, double d, double e, double f);

DOMMatrix OffscreenCanvasRenderingContext2D_getTransform(OffscreenCanvasRenderingContext2D* self );

jb_Undefined OffscreenCanvasRenderingContext2D_setTransform0(OffscreenCanvasRenderingContext2D* self );

jb_Undefined OffscreenCanvasRenderingContext2D_setTransform1(OffscreenCanvasRenderingContext2D* self , DOMMatrix2DInit * transform);

jb_Undefined OffscreenCanvasRenderingContext2D_resetTransform(OffscreenCanvasRenderingContext2D* self );

double OffscreenCanvasRenderingContext2D_globalAlpha(const OffscreenCanvasRenderingContext2D *self);

void OffscreenCanvasRenderingContext2D_set_globalAlpha(OffscreenCanvasRenderingContext2D* self, double value);

jb_String OffscreenCanvasRenderingContext2D_globalCompositeOperation(const OffscreenCanvasRenderingContext2D *self);

void OffscreenCanvasRenderingContext2D_set_globalCompositeOperation(OffscreenCanvasRenderingContext2D* self, jb_String * value);

bool OffscreenCanvasRenderingContext2D_imageSmoothingEnabled(const OffscreenCanvasRenderingContext2D *self);

void OffscreenCanvasRenderingContext2D_set_imageSmoothingEnabled(OffscreenCanvasRenderingContext2D* self, bool value);

ImageSmoothingQuality OffscreenCanvasRenderingContext2D_imageSmoothingQuality(const OffscreenCanvasRenderingContext2D *self);

void OffscreenCanvasRenderingContext2D_set_imageSmoothingQuality(OffscreenCanvasRenderingContext2D* self, ImageSmoothingQuality * value);

jb_Any OffscreenCanvasRenderingContext2D_strokeStyle(const OffscreenCanvasRenderingContext2D *self);

void OffscreenCanvasRenderingContext2D_set_strokeStyle(OffscreenCanvasRenderingContext2D* self, jb_Any * value);

jb_Any OffscreenCanvasRenderingContext2D_fillStyle(const OffscreenCanvasRenderingContext2D *self);

void OffscreenCanvasRenderingContext2D_set_fillStyle(OffscreenCanvasRenderingContext2D* self, jb_Any * value);

CanvasGradient OffscreenCanvasRenderingContext2D_createLinearGradient(OffscreenCanvasRenderingContext2D* self , double x0, double y0, double x1, double y1);

CanvasGradient OffscreenCanvasRenderingContext2D_createRadialGradient(OffscreenCanvasRenderingContext2D* self , double x0, double y0, double r0, double x1, double y1, double r1);

CanvasGradient OffscreenCanvasRenderingContext2D_createConicGradient(OffscreenCanvasRenderingContext2D* self , double startAngle, double x, double y);

CanvasPattern OffscreenCanvasRenderingContext2D_createPattern(OffscreenCanvasRenderingContext2D* self , jb_Any * image, jb_String * repetition);

double OffscreenCanvasRenderingContext2D_shadowOffsetX(const OffscreenCanvasRenderingContext2D *self);

void OffscreenCanvasRenderingContext2D_set_shadowOffsetX(OffscreenCanvasRenderingContext2D* self, double value);

double OffscreenCanvasRenderingContext2D_shadowOffsetY(const OffscreenCanvasRenderingContext2D *self);

void OffscreenCanvasRenderingContext2D_set_shadowOffsetY(OffscreenCanvasRenderingContext2D* self, double value);

double OffscreenCanvasRenderingContext2D_shadowBlur(const OffscreenCanvasRenderingContext2D *self);

void OffscreenCanvasRenderingContext2D_set_shadowBlur(OffscreenCanvasRenderingContext2D* self, double value);

jb_String OffscreenCanvasRenderingContext2D_shadowColor(const OffscreenCanvasRenderingContext2D *self);

void OffscreenCanvasRenderingContext2D_set_shadowColor(OffscreenCanvasRenderingContext2D* self, jb_String * value);

jb_String OffscreenCanvasRenderingContext2D_filter(const OffscreenCanvasRenderingContext2D *self);

void OffscreenCanvasRenderingContext2D_set_filter(OffscreenCanvasRenderingContext2D* self, jb_String * value);

jb_Undefined OffscreenCanvasRenderingContext2D_clearRect(OffscreenCanvasRenderingContext2D* self , double x, double y, double w, double h);

jb_Undefined OffscreenCanvasRenderingContext2D_fillRect(OffscreenCanvasRenderingContext2D* self , double x, double y, double w, double h);

jb_Undefined OffscreenCanvasRenderingContext2D_strokeRect(OffscreenCanvasRenderingContext2D* self , double x, double y, double w, double h);

jb_Undefined OffscreenCanvasRenderingContext2D_beginPath(OffscreenCanvasRenderingContext2D* self );

jb_Undefined OffscreenCanvasRenderingContext2D_fill0(OffscreenCanvasRenderingContext2D* self , Path2D * path);

jb_Undefined OffscreenCanvasRenderingContext2D_fill1(OffscreenCanvasRenderingContext2D* self , Path2D * path, CanvasFillRule * fillRule);

jb_Undefined OffscreenCanvasRenderingContext2D_stroke(OffscreenCanvasRenderingContext2D* self , Path2D * path);

jb_Undefined OffscreenCanvasRenderingContext2D_clip0(OffscreenCanvasRenderingContext2D* self , Path2D * path);

jb_Undefined OffscreenCanvasRenderingContext2D_clip1(OffscreenCanvasRenderingContext2D* self , Path2D * path, CanvasFillRule * fillRule);

bool OffscreenCanvasRenderingContext2D_isPointInPath0(OffscreenCanvasRenderingContext2D* self , Path2D * path, double x, double y);

bool OffscreenCanvasRenderingContext2D_isPointInPath1(OffscreenCanvasRenderingContext2D* self , Path2D * path, double x, double y, CanvasFillRule * fillRule);

bool OffscreenCanvasRenderingContext2D_isPointInStroke(OffscreenCanvasRenderingContext2D* self , Path2D * path, double x, double y);

jb_Undefined OffscreenCanvasRenderingContext2D_fillText0(OffscreenCanvasRenderingContext2D* self , jb_String * text, double x, double y);

jb_Undefined OffscreenCanvasRenderingContext2D_fillText1(OffscreenCanvasRenderingContext2D* self , jb_String * text, double x, double y, double maxWidth);

jb_Undefined OffscreenCanvasRenderingContext2D_strokeText0(OffscreenCanvasRenderingContext2D* self , jb_String * text, double x, double y);

jb_Undefined OffscreenCanvasRenderingContext2D_strokeText1(OffscreenCanvasRenderingContext2D* self , jb_String * text, double x, double y, double maxWidth);

TextMetrics OffscreenCanvasRenderingContext2D_measureText(OffscreenCanvasRenderingContext2D* self , jb_String * text);

jb_Undefined OffscreenCanvasRenderingContext2D_drawImage(OffscreenCanvasRenderingContext2D* self , jb_Any * image, double sx, double sy, double sw, double sh, double dx, double dy, double dw, double dh);

ImageData OffscreenCanvasRenderingContext2D_createImageData(OffscreenCanvasRenderingContext2D* self , ImageData * imageData);

ImageData OffscreenCanvasRenderingContext2D_getImageData0(OffscreenCanvasRenderingContext2D* self , long sx, long sy, long sw, long sh);

ImageData OffscreenCanvasRenderingContext2D_getImageData1(OffscreenCanvasRenderingContext2D* self , long sx, long sy, long sw, long sh, ImageDataSettings * settings);

jb_Undefined OffscreenCanvasRenderingContext2D_putImageData(OffscreenCanvasRenderingContext2D* self , ImageData * imageData, long dx, long dy, long dirtyX, long dirtyY, long dirtyWidth, long dirtyHeight);

double OffscreenCanvasRenderingContext2D_lineWidth(const OffscreenCanvasRenderingContext2D *self);

void OffscreenCanvasRenderingContext2D_set_lineWidth(OffscreenCanvasRenderingContext2D* self, double value);

CanvasLineCap OffscreenCanvasRenderingContext2D_lineCap(const OffscreenCanvasRenderingContext2D *self);

void OffscreenCanvasRenderingContext2D_set_lineCap(OffscreenCanvasRenderingContext2D* self, CanvasLineCap * value);

CanvasLineJoin OffscreenCanvasRenderingContext2D_lineJoin(const OffscreenCanvasRenderingContext2D *self);

void OffscreenCanvasRenderingContext2D_set_lineJoin(OffscreenCanvasRenderingContext2D* self, CanvasLineJoin * value);

double OffscreenCanvasRenderingContext2D_miterLimit(const OffscreenCanvasRenderingContext2D *self);

void OffscreenCanvasRenderingContext2D_set_miterLimit(OffscreenCanvasRenderingContext2D* self, double value);

jb_Undefined OffscreenCanvasRenderingContext2D_setLineDash(OffscreenCanvasRenderingContext2D* self , jb_Array * segments);

jb_Array OffscreenCanvasRenderingContext2D_getLineDash(OffscreenCanvasRenderingContext2D* self );

double OffscreenCanvasRenderingContext2D_lineDashOffset(const OffscreenCanvasRenderingContext2D *self);

void OffscreenCanvasRenderingContext2D_set_lineDashOffset(OffscreenCanvasRenderingContext2D* self, double value);

jb_String OffscreenCanvasRenderingContext2D_lang(const OffscreenCanvasRenderingContext2D *self);

void OffscreenCanvasRenderingContext2D_set_lang(OffscreenCanvasRenderingContext2D* self, jb_String * value);

jb_String OffscreenCanvasRenderingContext2D_font(const OffscreenCanvasRenderingContext2D *self);

void OffscreenCanvasRenderingContext2D_set_font(OffscreenCanvasRenderingContext2D* self, jb_String * value);

CanvasTextAlign OffscreenCanvasRenderingContext2D_textAlign(const OffscreenCanvasRenderingContext2D *self);

void OffscreenCanvasRenderingContext2D_set_textAlign(OffscreenCanvasRenderingContext2D* self, CanvasTextAlign * value);

CanvasTextBaseline OffscreenCanvasRenderingContext2D_textBaseline(const OffscreenCanvasRenderingContext2D *self);

void OffscreenCanvasRenderingContext2D_set_textBaseline(OffscreenCanvasRenderingContext2D* self, CanvasTextBaseline * value);

CanvasDirection OffscreenCanvasRenderingContext2D_direction(const OffscreenCanvasRenderingContext2D *self);

void OffscreenCanvasRenderingContext2D_set_direction(OffscreenCanvasRenderingContext2D* self, CanvasDirection * value);

jb_String OffscreenCanvasRenderingContext2D_letterSpacing(const OffscreenCanvasRenderingContext2D *self);

void OffscreenCanvasRenderingContext2D_set_letterSpacing(OffscreenCanvasRenderingContext2D* self, jb_String * value);

CanvasFontKerning OffscreenCanvasRenderingContext2D_fontKerning(const OffscreenCanvasRenderingContext2D *self);

void OffscreenCanvasRenderingContext2D_set_fontKerning(OffscreenCanvasRenderingContext2D* self, CanvasFontKerning * value);

CanvasFontStretch OffscreenCanvasRenderingContext2D_fontStretch(const OffscreenCanvasRenderingContext2D *self);

void OffscreenCanvasRenderingContext2D_set_fontStretch(OffscreenCanvasRenderingContext2D* self, CanvasFontStretch * value);

CanvasFontVariantCaps OffscreenCanvasRenderingContext2D_fontVariantCaps(const OffscreenCanvasRenderingContext2D *self);

void OffscreenCanvasRenderingContext2D_set_fontVariantCaps(OffscreenCanvasRenderingContext2D* self, CanvasFontVariantCaps * value);

CanvasTextRendering OffscreenCanvasRenderingContext2D_textRendering(const OffscreenCanvasRenderingContext2D *self);

void OffscreenCanvasRenderingContext2D_set_textRendering(OffscreenCanvasRenderingContext2D* self, CanvasTextRendering * value);

jb_String OffscreenCanvasRenderingContext2D_wordSpacing(const OffscreenCanvasRenderingContext2D *self);

void OffscreenCanvasRenderingContext2D_set_wordSpacing(OffscreenCanvasRenderingContext2D* self, jb_String * value);

jb_Undefined OffscreenCanvasRenderingContext2D_closePath(OffscreenCanvasRenderingContext2D* self );

jb_Undefined OffscreenCanvasRenderingContext2D_moveTo(OffscreenCanvasRenderingContext2D* self , double x, double y);

jb_Undefined OffscreenCanvasRenderingContext2D_lineTo(OffscreenCanvasRenderingContext2D* self , double x, double y);

jb_Undefined OffscreenCanvasRenderingContext2D_quadraticCurveTo(OffscreenCanvasRenderingContext2D* self , double cpx, double cpy, double x, double y);

jb_Undefined OffscreenCanvasRenderingContext2D_bezierCurveTo(OffscreenCanvasRenderingContext2D* self , double cp1x, double cp1y, double cp2x, double cp2y, double x, double y);

jb_Undefined OffscreenCanvasRenderingContext2D_arcTo(OffscreenCanvasRenderingContext2D* self , double x1, double y1, double x2, double y2, double radius);

jb_Undefined OffscreenCanvasRenderingContext2D_rect(OffscreenCanvasRenderingContext2D* self , double x, double y, double w, double h);

jb_Undefined OffscreenCanvasRenderingContext2D_roundRect0(OffscreenCanvasRenderingContext2D* self , double x, double y, double w, double h);

jb_Undefined OffscreenCanvasRenderingContext2D_roundRect1(OffscreenCanvasRenderingContext2D* self , double x, double y, double w, double h, jb_Any * radii);

jb_Undefined OffscreenCanvasRenderingContext2D_arc0(OffscreenCanvasRenderingContext2D* self , double x, double y, double radius, double startAngle, double endAngle);

jb_Undefined OffscreenCanvasRenderingContext2D_arc1(OffscreenCanvasRenderingContext2D* self , double x, double y, double radius, double startAngle, double endAngle, bool counterclockwise);

jb_Undefined OffscreenCanvasRenderingContext2D_ellipse0(OffscreenCanvasRenderingContext2D* self , double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle);

jb_Undefined OffscreenCanvasRenderingContext2D_ellipse1(OffscreenCanvasRenderingContext2D* self , double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle, bool counterclockwise);
