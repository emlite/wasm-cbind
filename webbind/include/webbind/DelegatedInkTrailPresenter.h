#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Element Element;
typedef struct PointerEvent PointerEvent;
typedef struct InkTrailStyle InkTrailStyle;


DECLARE_EMLITE_TYPE(InkTrailStyle, em_Val);

jb_String InkTrailStyle_color(const InkTrailStyle *self);

void InkTrailStyle_set_color(InkTrailStyle* self, jb_String * value);

double InkTrailStyle_diameter(const InkTrailStyle *self);

void InkTrailStyle_set_diameter(InkTrailStyle* self, double value);
DECLARE_EMLITE_TYPE(DelegatedInkTrailPresenter, em_Val);

Element DelegatedInkTrailPresenter_presentationArea(const DelegatedInkTrailPresenter *self);

jb_Undefined DelegatedInkTrailPresenter_updateInkTrailStartPoint(DelegatedInkTrailPresenter* self , PointerEvent * event, InkTrailStyle * style);
