#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct HIDDevice HIDDevice;


DECLARE_EMLITE_TYPE(HIDInputReportEvent, Event);

HIDInputReportEvent HIDInputReportEvent_new(jb_String * type, jb_Any * eventInitDict);

HIDDevice HIDInputReportEvent_device(const HIDInputReportEvent *self);

unsigned char HIDInputReportEvent_reportId(const HIDInputReportEvent *self);

jb_DataView HIDInputReportEvent_data(const HIDInputReportEvent *self);
