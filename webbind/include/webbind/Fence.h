#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct FenceEvent FenceEvent;
typedef struct FencedFrameConfig FencedFrameConfig;
typedef struct Event Event;


DECLARE_EMLITE_TYPE(FenceEvent, em_Val);

jb_String FenceEvent_eventType(const FenceEvent *self);

void FenceEvent_set_eventType(FenceEvent* self, jb_String * value);

jb_String FenceEvent_eventData(const FenceEvent *self);

void FenceEvent_set_eventData(FenceEvent* self, jb_String * value);

jb_Array FenceEvent_destination(const FenceEvent *self);

void FenceEvent_set_destination(FenceEvent* self, jb_Array * value);

bool FenceEvent_crossOriginExposed(const FenceEvent *self);

void FenceEvent_set_crossOriginExposed(FenceEvent* self, bool value);

bool FenceEvent_once(const FenceEvent *self);

void FenceEvent_set_once(FenceEvent* self, bool value);

jb_String FenceEvent_destinationURL(const FenceEvent *self);

void FenceEvent_set_destinationURL(FenceEvent* self, jb_String * value);
DECLARE_EMLITE_TYPE(Fence, em_Val);

jb_Undefined Fence_reportEvent0(Fence* self );

jb_Undefined Fence_reportEvent1(Fence* self , jb_Any * event);

jb_Undefined Fence_setReportEventDataForAutomaticBeacons0(Fence* self );

jb_Undefined Fence_setReportEventDataForAutomaticBeacons1(Fence* self , FenceEvent * event);

jb_Array Fence_getNestedConfigs(Fence* self );

jb_Promise Fence_disableUntrustedNetwork(Fence* self );

jb_Undefined Fence_notifyEvent(Fence* self , Event * event);
