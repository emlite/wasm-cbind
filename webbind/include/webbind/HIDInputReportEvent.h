#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HIDInputReportEventInit HIDInputReportEventInit;
typedef struct HIDDevice HIDDevice;

DECLARE_EMLITE_TYPE(HIDInputReportEvent, Event);

HIDInputReportEvent HIDInputReportEvent_new(jb_String * type, HIDInputReportEventInit * eventInitDict);

HIDDevice HIDInputReportEvent_device(const HIDInputReportEvent *self);

unsigned char HIDInputReportEvent_reportId(const HIDInputReportEvent *self);

jb_DataView HIDInputReportEvent_data(const HIDInputReportEvent *self);

#ifdef __cplusplus
}
#endif
