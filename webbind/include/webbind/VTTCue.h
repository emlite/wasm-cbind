#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "TextTrackCue.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct VTTRegion VTTRegion;
typedef struct DocumentFragment DocumentFragment;


DECLARE_EMLITE_TYPE(VTTCue, TextTrackCue);

VTTCue VTTCue_new(double startTime, double endTime, jb_String * text);

VTTRegion VTTCue_region(const VTTCue *self);

void VTTCue_set_region(VTTCue* self, VTTRegion * value);

DirectionSetting VTTCue_vertical(const VTTCue *self);

void VTTCue_set_vertical(VTTCue* self, DirectionSetting * value);

bool VTTCue_snapToLines(const VTTCue *self);

void VTTCue_set_snapToLines(VTTCue* self, bool value);

jb_Any VTTCue_line(const VTTCue *self);

void VTTCue_set_line(VTTCue* self, jb_Any * value);

LineAlignSetting VTTCue_lineAlign(const VTTCue *self);

void VTTCue_set_lineAlign(VTTCue* self, LineAlignSetting * value);

jb_Any VTTCue_position(const VTTCue *self);

void VTTCue_set_position(VTTCue* self, jb_Any * value);

PositionAlignSetting VTTCue_positionAlign(const VTTCue *self);

void VTTCue_set_positionAlign(VTTCue* self, PositionAlignSetting * value);

double VTTCue_size(const VTTCue *self);

void VTTCue_set_size(VTTCue* self, double value);

AlignSetting VTTCue_align(const VTTCue *self);

void VTTCue_set_align(VTTCue* self, AlignSetting * value);

jb_String VTTCue_text(const VTTCue *self);

void VTTCue_set_text(VTTCue* self, jb_String * value);

DocumentFragment VTTCue_getCueAsHTML(VTTCue* self );
