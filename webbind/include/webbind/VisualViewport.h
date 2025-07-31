#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(VisualViewport, EventTarget);

double VisualViewport_offsetLeft(const VisualViewport *self);

double VisualViewport_offsetTop(const VisualViewport *self);

double VisualViewport_pageLeft(const VisualViewport *self);

double VisualViewport_pageTop(const VisualViewport *self);

double VisualViewport_width(const VisualViewport *self);

double VisualViewport_height(const VisualViewport *self);

double VisualViewport_scale(const VisualViewport *self);

jb_Any VisualViewport_onresize(const VisualViewport *self);

void VisualViewport_set_onresize(VisualViewport* self, jb_Any * value);

jb_Any VisualViewport_onscroll(const VisualViewport *self);

void VisualViewport_set_onscroll(VisualViewport* self, jb_Any * value);

jb_Any VisualViewport_onscrollend(const VisualViewport *self);

void VisualViewport_set_onscrollend(VisualViewport* self, jb_Any * value);
