#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct EventCounts EventCounts;
typedef struct PerformanceTiming PerformanceTiming;
typedef struct PerformanceNavigation PerformanceNavigation;
typedef struct MemoryMeasurement MemoryMeasurement;
typedef struct PerformanceMark PerformanceMark;
typedef struct PerformanceMarkOptions PerformanceMarkOptions;
typedef struct PerformanceMeasure PerformanceMeasure;


DECLARE_EMLITE_TYPE(MemoryMeasurement, em_Val);

long long MemoryMeasurement_bytes(const MemoryMeasurement *self);

void MemoryMeasurement_set_bytes(MemoryMeasurement* self, long long value);

jb_Array MemoryMeasurement_breakdown(const MemoryMeasurement *self);

void MemoryMeasurement_set_breakdown(MemoryMeasurement* self, jb_Array * value);
DECLARE_EMLITE_TYPE(PerformanceMarkOptions, em_Val);

jb_Any PerformanceMarkOptions_detail(const PerformanceMarkOptions *self);

void PerformanceMarkOptions_set_detail(PerformanceMarkOptions* self, jb_Any * value);

jb_Any PerformanceMarkOptions_startTime(const PerformanceMarkOptions *self);

void PerformanceMarkOptions_set_startTime(PerformanceMarkOptions* self, jb_Any * value);
DECLARE_EMLITE_TYPE(Performance, EventTarget);

jb_Any Performance_now(Performance* self );

jb_Any Performance_timeOrigin(const Performance *self);

jb_Object Performance_toJSON(Performance* self );

EventCounts Performance_eventCounts(const Performance *self);

long long Performance_interactionCount(const Performance *self);

PerformanceTiming Performance_timing(const Performance *self);

PerformanceNavigation Performance_navigation(const Performance *self);

jb_Promise Performance_measureUserAgentSpecificMemory(Performance* self );

jb_Any Performance_getEntries(Performance* self );

jb_Any Performance_getEntriesByType(Performance* self , jb_String * type);

jb_Any Performance_getEntriesByName0(Performance* self , jb_String * name);

jb_Any Performance_getEntriesByName1(Performance* self , jb_String * name, jb_String * type);

jb_Undefined Performance_clearResourceTimings(Performance* self );

jb_Undefined Performance_setResourceTimingBufferSize(Performance* self , unsigned long maxSize);

jb_Any Performance_onresourcetimingbufferfull(const Performance *self);

void Performance_set_onresourcetimingbufferfull(Performance* self, jb_Any * value);

PerformanceMark Performance_mark0(Performance* self , jb_String * markName);

PerformanceMark Performance_mark1(Performance* self , jb_String * markName, PerformanceMarkOptions * markOptions);

jb_Undefined Performance_clearMarks0(Performance* self );

jb_Undefined Performance_clearMarks1(Performance* self , jb_String * markName);

PerformanceMeasure Performance_measure0(Performance* self , jb_String * measureName);

PerformanceMeasure Performance_measure1(Performance* self , jb_String * measureName, jb_Any * startOrMeasureOptions);

PerformanceMeasure Performance_measure2(Performance* self , jb_String * measureName, jb_Any * startOrMeasureOptions, jb_String * endMark);

jb_Undefined Performance_clearMeasures0(Performance* self );

jb_Undefined Performance_clearMeasures1(Performance* self , jb_String * measureName);
