#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(VTTRegion, em_Val);

VTTRegion VTTRegion_new();

jb_String VTTRegion_id(const VTTRegion *self);

void VTTRegion_set_id(VTTRegion* self, jb_String * value);

double VTTRegion_width(const VTTRegion *self);

void VTTRegion_set_width(VTTRegion* self, double value);

unsigned long VTTRegion_lines(const VTTRegion *self);

void VTTRegion_set_lines(VTTRegion* self, unsigned long value);

double VTTRegion_regionAnchorX(const VTTRegion *self);

void VTTRegion_set_regionAnchorX(VTTRegion* self, double value);

double VTTRegion_regionAnchorY(const VTTRegion *self);

void VTTRegion_set_regionAnchorY(VTTRegion* self, double value);

double VTTRegion_viewportAnchorX(const VTTRegion *self);

void VTTRegion_set_viewportAnchorX(VTTRegion* self, double value);

double VTTRegion_viewportAnchorY(const VTTRegion *self);

void VTTRegion_set_viewportAnchorY(VTTRegion* self, double value);

ScrollSetting VTTRegion_scroll(const VTTRegion *self);

void VTTRegion_set_scroll(VTTRegion* self, ScrollSetting * value);
