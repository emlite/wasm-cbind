#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "TextTrackCue.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(DataCue, TextTrackCue);

DataCue DataCue_new0(double startTime, double endTime, jb_Any * value);

DataCue DataCue_new1(double startTime, double endTime, jb_Any * value, jb_String * type);

jb_Any DataCue_value(const DataCue *self);

void DataCue_set_value(DataCue* self, jb_Any * value);

jb_String DataCue_type(const DataCue *self);
