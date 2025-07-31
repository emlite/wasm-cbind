#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(PerformanceObserverEntryList, em_Val);

jb_Any PerformanceObserverEntryList_getEntries(PerformanceObserverEntryList* self );

jb_Any PerformanceObserverEntryList_getEntriesByType(PerformanceObserverEntryList* self , jb_String * type);

jb_Any PerformanceObserverEntryList_getEntriesByName0(PerformanceObserverEntryList* self , jb_String * name);

jb_Any PerformanceObserverEntryList_getEntriesByName1(PerformanceObserverEntryList* self , jb_String * name, jb_String * type);
