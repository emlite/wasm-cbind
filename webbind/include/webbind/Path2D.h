#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGSVGElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Path2D Path2D;


DECLARE_EMLITE_TYPE(Path2D, em_Val);

Path2D Path2D_new0();

Path2D Path2D_new1(jb_Any * path);

jb_Undefined Path2D_addPath0(Path2D* self , Path2D * path);

jb_Undefined Path2D_addPath1(Path2D* self , Path2D * path, DOMMatrix2DInit * transform);

jb_Undefined Path2D_closePath(Path2D* self );

jb_Undefined Path2D_moveTo(Path2D* self , double x, double y);

jb_Undefined Path2D_lineTo(Path2D* self , double x, double y);

jb_Undefined Path2D_quadraticCurveTo(Path2D* self , double cpx, double cpy, double x, double y);

jb_Undefined Path2D_bezierCurveTo(Path2D* self , double cp1x, double cp1y, double cp2x, double cp2y, double x, double y);

jb_Undefined Path2D_arcTo(Path2D* self , double x1, double y1, double x2, double y2, double radius);

jb_Undefined Path2D_rect(Path2D* self , double x, double y, double w, double h);

jb_Undefined Path2D_roundRect0(Path2D* self , double x, double y, double w, double h);

jb_Undefined Path2D_roundRect1(Path2D* self , double x, double y, double w, double h, jb_Any * radii);

jb_Undefined Path2D_arc0(Path2D* self , double x, double y, double radius, double startAngle, double endAngle);

jb_Undefined Path2D_arc1(Path2D* self , double x, double y, double radius, double startAngle, double endAngle, bool counterclockwise);

jb_Undefined Path2D_ellipse0(Path2D* self , double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle);

jb_Undefined Path2D_ellipse1(Path2D* self , double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle, bool counterclockwise);
