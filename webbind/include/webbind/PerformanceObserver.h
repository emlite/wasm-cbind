#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct PerformanceObserverInit PerformanceObserverInit;


DECLARE_EMLITE_TYPE(PerformanceObserverInit, em_Val);

jb_Array PerformanceObserverInit_entryTypes(const PerformanceObserverInit *self);

void PerformanceObserverInit_set_entryTypes(PerformanceObserverInit* self, jb_Array * value);

jb_String PerformanceObserverInit_type(const PerformanceObserverInit *self);

void PerformanceObserverInit_set_type(PerformanceObserverInit* self, jb_String * value);

bool PerformanceObserverInit_buffered(const PerformanceObserverInit *self);

void PerformanceObserverInit_set_buffered(PerformanceObserverInit* self, bool value);
DECLARE_EMLITE_TYPE(PerformanceObserver, em_Val);

PerformanceObserver PerformanceObserver_new(jb_Function * callback);

jb_Undefined PerformanceObserver_observe0(PerformanceObserver* self );

jb_Undefined PerformanceObserver_observe1(PerformanceObserver* self , PerformanceObserverInit * options);

jb_Undefined PerformanceObserver_disconnect(PerformanceObserver* self );

jb_Any PerformanceObserver_takeRecords(PerformanceObserver* self );

jb_Array PerformanceObserver_supportedEntryTypes(const PerformanceObserver *self);
