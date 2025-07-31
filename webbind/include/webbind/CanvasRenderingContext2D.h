#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGSVGElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct HTMLCanvasElement HTMLCanvasElement;
typedef struct CanvasRenderingContext2DSettings CanvasRenderingContext2DSettings;
typedef struct DOMMatrix DOMMatrix;
typedef struct CanvasGradient CanvasGradient;
typedef struct CanvasPattern CanvasPattern;
typedef struct Path2D Path2D;
typedef struct Element Element;
typedef struct TextMetrics TextMetrics;
typedef struct ImageData ImageData;
typedef struct ImageDataSettings ImageDataSettings;


DECLARE_EMLITE_TYPE(CanvasRenderingContext2DSettings, em_Val);

bool CanvasRenderingContext2DSettings_alpha(const CanvasRenderingContext2DSettings *self);

void CanvasRenderingContext2DSettings_set_alpha(CanvasRenderingContext2DSettings* self, bool value);

bool CanvasRenderingContext2DSettings_desynchronized(const CanvasRenderingContext2DSettings *self);

void CanvasRenderingContext2DSettings_set_desynchronized(CanvasRenderingContext2DSettings* self, bool value);

PredefinedColorSpace CanvasRenderingContext2DSettings_colorSpace(const CanvasRenderingContext2DSettings *self);

void CanvasRenderingContext2DSettings_set_colorSpace(CanvasRenderingContext2DSettings* self, PredefinedColorSpace * value);

CanvasColorType CanvasRenderingContext2DSettings_colorType(const CanvasRenderingContext2DSettings *self);

void CanvasRenderingContext2DSettings_set_colorType(CanvasRenderingContext2DSettings* self, CanvasColorType * value);

bool CanvasRenderingContext2DSettings_willReadFrequently(const CanvasRenderingContext2DSettings *self);

void CanvasRenderingContext2DSettings_set_willReadFrequently(CanvasRenderingContext2DSettings* self, bool value);
DECLARE_EMLITE_TYPE(ImageDataSettings, em_Val);

PredefinedColorSpace ImageDataSettings_colorSpace(const ImageDataSettings *self);

void ImageDataSettings_set_colorSpace(ImageDataSettings* self, PredefinedColorSpace * value);

ImageDataPixelFormat ImageDataSettings_pixelFormat(const ImageDataSettings *self);

void ImageDataSettings_set_pixelFormat(ImageDataSettings* self, ImageDataPixelFormat * value);
DECLARE_EMLITE_TYPE(CanvasRenderingContext2D, em_Val);

HTMLCanvasElement CanvasRenderingContext2D_canvas(const CanvasRenderingContext2D *self);

CanvasRenderingContext2DSettings CanvasRenderingContext2D_getContextAttributes(CanvasRenderingContext2D* self );

jb_Undefined CanvasRenderingContext2D_save(CanvasRenderingContext2D* self );

jb_Undefined CanvasRenderingContext2D_restore(CanvasRenderingContext2D* self );

jb_Undefined CanvasRenderingContext2D_reset(CanvasRenderingContext2D* self );

bool CanvasRenderingContext2D_isContextLost(CanvasRenderingContext2D* self );

jb_Undefined CanvasRenderingContext2D_scale(CanvasRenderingContext2D* self , double x, double y);

jb_Undefined CanvasRenderingContext2D_rotate(CanvasRenderingContext2D* self , double angle);

jb_Undefined CanvasRenderingContext2D_translate(CanvasRenderingContext2D* self , double x, double y);

jb_Undefined CanvasRenderingContext2D_transform(CanvasRenderingContext2D* self , double a, double b, double c, double d, double e, double f);

DOMMatrix CanvasRenderingContext2D_getTransform(CanvasRenderingContext2D* self );

jb_Undefined CanvasRenderingContext2D_setTransform0(CanvasRenderingContext2D* self );

jb_Undefined CanvasRenderingContext2D_setTransform1(CanvasRenderingContext2D* self , DOMMatrix2DInit * transform);

jb_Undefined CanvasRenderingContext2D_resetTransform(CanvasRenderingContext2D* self );

double CanvasRenderingContext2D_globalAlpha(const CanvasRenderingContext2D *self);

void CanvasRenderingContext2D_set_globalAlpha(CanvasRenderingContext2D* self, double value);

jb_String CanvasRenderingContext2D_globalCompositeOperation(const CanvasRenderingContext2D *self);

void CanvasRenderingContext2D_set_globalCompositeOperation(CanvasRenderingContext2D* self, jb_String * value);

bool CanvasRenderingContext2D_imageSmoothingEnabled(const CanvasRenderingContext2D *self);

void CanvasRenderingContext2D_set_imageSmoothingEnabled(CanvasRenderingContext2D* self, bool value);

ImageSmoothingQuality CanvasRenderingContext2D_imageSmoothingQuality(const CanvasRenderingContext2D *self);

void CanvasRenderingContext2D_set_imageSmoothingQuality(CanvasRenderingContext2D* self, ImageSmoothingQuality * value);

jb_Any CanvasRenderingContext2D_strokeStyle(const CanvasRenderingContext2D *self);

void CanvasRenderingContext2D_set_strokeStyle(CanvasRenderingContext2D* self, jb_Any * value);

jb_Any CanvasRenderingContext2D_fillStyle(const CanvasRenderingContext2D *self);

void CanvasRenderingContext2D_set_fillStyle(CanvasRenderingContext2D* self, jb_Any * value);

CanvasGradient CanvasRenderingContext2D_createLinearGradient(CanvasRenderingContext2D* self , double x0, double y0, double x1, double y1);

CanvasGradient CanvasRenderingContext2D_createRadialGradient(CanvasRenderingContext2D* self , double x0, double y0, double r0, double x1, double y1, double r1);

CanvasGradient CanvasRenderingContext2D_createConicGradient(CanvasRenderingContext2D* self , double startAngle, double x, double y);

CanvasPattern CanvasRenderingContext2D_createPattern(CanvasRenderingContext2D* self , jb_Any * image, jb_String * repetition);

double CanvasRenderingContext2D_shadowOffsetX(const CanvasRenderingContext2D *self);

void CanvasRenderingContext2D_set_shadowOffsetX(CanvasRenderingContext2D* self, double value);

double CanvasRenderingContext2D_shadowOffsetY(const CanvasRenderingContext2D *self);

void CanvasRenderingContext2D_set_shadowOffsetY(CanvasRenderingContext2D* self, double value);

double CanvasRenderingContext2D_shadowBlur(const CanvasRenderingContext2D *self);

void CanvasRenderingContext2D_set_shadowBlur(CanvasRenderingContext2D* self, double value);

jb_String CanvasRenderingContext2D_shadowColor(const CanvasRenderingContext2D *self);

void CanvasRenderingContext2D_set_shadowColor(CanvasRenderingContext2D* self, jb_String * value);

jb_String CanvasRenderingContext2D_filter(const CanvasRenderingContext2D *self);

void CanvasRenderingContext2D_set_filter(CanvasRenderingContext2D* self, jb_String * value);

jb_Undefined CanvasRenderingContext2D_clearRect(CanvasRenderingContext2D* self , double x, double y, double w, double h);

jb_Undefined CanvasRenderingContext2D_fillRect(CanvasRenderingContext2D* self , double x, double y, double w, double h);

jb_Undefined CanvasRenderingContext2D_strokeRect(CanvasRenderingContext2D* self , double x, double y, double w, double h);

jb_Undefined CanvasRenderingContext2D_beginPath(CanvasRenderingContext2D* self );

jb_Undefined CanvasRenderingContext2D_fill0(CanvasRenderingContext2D* self , Path2D * path);

jb_Undefined CanvasRenderingContext2D_fill1(CanvasRenderingContext2D* self , Path2D * path, CanvasFillRule * fillRule);

jb_Undefined CanvasRenderingContext2D_stroke(CanvasRenderingContext2D* self , Path2D * path);

jb_Undefined CanvasRenderingContext2D_clip0(CanvasRenderingContext2D* self , Path2D * path);

jb_Undefined CanvasRenderingContext2D_clip1(CanvasRenderingContext2D* self , Path2D * path, CanvasFillRule * fillRule);

bool CanvasRenderingContext2D_isPointInPath0(CanvasRenderingContext2D* self , Path2D * path, double x, double y);

bool CanvasRenderingContext2D_isPointInPath1(CanvasRenderingContext2D* self , Path2D * path, double x, double y, CanvasFillRule * fillRule);

bool CanvasRenderingContext2D_isPointInStroke(CanvasRenderingContext2D* self , Path2D * path, double x, double y);

jb_Undefined CanvasRenderingContext2D_drawFocusIfNeeded(CanvasRenderingContext2D* self , Path2D * path, Element * element);

jb_Undefined CanvasRenderingContext2D_fillText0(CanvasRenderingContext2D* self , jb_String * text, double x, double y);

jb_Undefined CanvasRenderingContext2D_fillText1(CanvasRenderingContext2D* self , jb_String * text, double x, double y, double maxWidth);

jb_Undefined CanvasRenderingContext2D_strokeText0(CanvasRenderingContext2D* self , jb_String * text, double x, double y);

jb_Undefined CanvasRenderingContext2D_strokeText1(CanvasRenderingContext2D* self , jb_String * text, double x, double y, double maxWidth);

TextMetrics CanvasRenderingContext2D_measureText(CanvasRenderingContext2D* self , jb_String * text);

jb_Undefined CanvasRenderingContext2D_drawImage(CanvasRenderingContext2D* self , jb_Any * image, double sx, double sy, double sw, double sh, double dx, double dy, double dw, double dh);

ImageData CanvasRenderingContext2D_createImageData(CanvasRenderingContext2D* self , ImageData * imageData);

ImageData CanvasRenderingContext2D_getImageData0(CanvasRenderingContext2D* self , long sx, long sy, long sw, long sh);

ImageData CanvasRenderingContext2D_getImageData1(CanvasRenderingContext2D* self , long sx, long sy, long sw, long sh, ImageDataSettings * settings);

jb_Undefined CanvasRenderingContext2D_putImageData(CanvasRenderingContext2D* self , ImageData * imageData, long dx, long dy, long dirtyX, long dirtyY, long dirtyWidth, long dirtyHeight);

double CanvasRenderingContext2D_lineWidth(const CanvasRenderingContext2D *self);

void CanvasRenderingContext2D_set_lineWidth(CanvasRenderingContext2D* self, double value);

CanvasLineCap CanvasRenderingContext2D_lineCap(const CanvasRenderingContext2D *self);

void CanvasRenderingContext2D_set_lineCap(CanvasRenderingContext2D* self, CanvasLineCap * value);

CanvasLineJoin CanvasRenderingContext2D_lineJoin(const CanvasRenderingContext2D *self);

void CanvasRenderingContext2D_set_lineJoin(CanvasRenderingContext2D* self, CanvasLineJoin * value);

double CanvasRenderingContext2D_miterLimit(const CanvasRenderingContext2D *self);

void CanvasRenderingContext2D_set_miterLimit(CanvasRenderingContext2D* self, double value);

jb_Undefined CanvasRenderingContext2D_setLineDash(CanvasRenderingContext2D* self , jb_Array * segments);

jb_Array CanvasRenderingContext2D_getLineDash(CanvasRenderingContext2D* self );

double CanvasRenderingContext2D_lineDashOffset(const CanvasRenderingContext2D *self);

void CanvasRenderingContext2D_set_lineDashOffset(CanvasRenderingContext2D* self, double value);

jb_String CanvasRenderingContext2D_lang(const CanvasRenderingContext2D *self);

void CanvasRenderingContext2D_set_lang(CanvasRenderingContext2D* self, jb_String * value);

jb_String CanvasRenderingContext2D_font(const CanvasRenderingContext2D *self);

void CanvasRenderingContext2D_set_font(CanvasRenderingContext2D* self, jb_String * value);

CanvasTextAlign CanvasRenderingContext2D_textAlign(const CanvasRenderingContext2D *self);

void CanvasRenderingContext2D_set_textAlign(CanvasRenderingContext2D* self, CanvasTextAlign * value);

CanvasTextBaseline CanvasRenderingContext2D_textBaseline(const CanvasRenderingContext2D *self);

void CanvasRenderingContext2D_set_textBaseline(CanvasRenderingContext2D* self, CanvasTextBaseline * value);

CanvasDirection CanvasRenderingContext2D_direction(const CanvasRenderingContext2D *self);

void CanvasRenderingContext2D_set_direction(CanvasRenderingContext2D* self, CanvasDirection * value);

jb_String CanvasRenderingContext2D_letterSpacing(const CanvasRenderingContext2D *self);

void CanvasRenderingContext2D_set_letterSpacing(CanvasRenderingContext2D* self, jb_String * value);

CanvasFontKerning CanvasRenderingContext2D_fontKerning(const CanvasRenderingContext2D *self);

void CanvasRenderingContext2D_set_fontKerning(CanvasRenderingContext2D* self, CanvasFontKerning * value);

CanvasFontStretch CanvasRenderingContext2D_fontStretch(const CanvasRenderingContext2D *self);

void CanvasRenderingContext2D_set_fontStretch(CanvasRenderingContext2D* self, CanvasFontStretch * value);

CanvasFontVariantCaps CanvasRenderingContext2D_fontVariantCaps(const CanvasRenderingContext2D *self);

void CanvasRenderingContext2D_set_fontVariantCaps(CanvasRenderingContext2D* self, CanvasFontVariantCaps * value);

CanvasTextRendering CanvasRenderingContext2D_textRendering(const CanvasRenderingContext2D *self);

void CanvasRenderingContext2D_set_textRendering(CanvasRenderingContext2D* self, CanvasTextRendering * value);

jb_String CanvasRenderingContext2D_wordSpacing(const CanvasRenderingContext2D *self);

void CanvasRenderingContext2D_set_wordSpacing(CanvasRenderingContext2D* self, jb_String * value);

jb_Undefined CanvasRenderingContext2D_closePath(CanvasRenderingContext2D* self );

jb_Undefined CanvasRenderingContext2D_moveTo(CanvasRenderingContext2D* self , double x, double y);

jb_Undefined CanvasRenderingContext2D_lineTo(CanvasRenderingContext2D* self , double x, double y);

jb_Undefined CanvasRenderingContext2D_quadraticCurveTo(CanvasRenderingContext2D* self , double cpx, double cpy, double x, double y);

jb_Undefined CanvasRenderingContext2D_bezierCurveTo(CanvasRenderingContext2D* self , double cp1x, double cp1y, double cp2x, double cp2y, double x, double y);

jb_Undefined CanvasRenderingContext2D_arcTo(CanvasRenderingContext2D* self , double x1, double y1, double x2, double y2, double radius);

jb_Undefined CanvasRenderingContext2D_rect(CanvasRenderingContext2D* self , double x, double y, double w, double h);

jb_Undefined CanvasRenderingContext2D_roundRect0(CanvasRenderingContext2D* self , double x, double y, double w, double h);

jb_Undefined CanvasRenderingContext2D_roundRect1(CanvasRenderingContext2D* self , double x, double y, double w, double h, jb_Any * radii);

jb_Undefined CanvasRenderingContext2D_arc0(CanvasRenderingContext2D* self , double x, double y, double radius, double startAngle, double endAngle);

jb_Undefined CanvasRenderingContext2D_arc1(CanvasRenderingContext2D* self , double x, double y, double radius, double startAngle, double endAngle, bool counterclockwise);

jb_Undefined CanvasRenderingContext2D_ellipse0(CanvasRenderingContext2D* self , double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle);

jb_Undefined CanvasRenderingContext2D_ellipse1(CanvasRenderingContext2D* self , double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle, bool counterclockwise);
