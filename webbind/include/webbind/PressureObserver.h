#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct PressureObserverOptions PressureObserverOptions;
typedef struct PressureRecord PressureRecord;


DECLARE_EMLITE_TYPE(PressureObserverOptions, em_Val);

unsigned long PressureObserverOptions_sampleInterval(const PressureObserverOptions *self);

void PressureObserverOptions_set_sampleInterval(PressureObserverOptions* self, unsigned long value);
DECLARE_EMLITE_TYPE(PressureObserver, em_Val);

PressureObserver PressureObserver_new(jb_Function * callback);

jb_Promise PressureObserver_observe0(PressureObserver* self , PressureSource * source);

jb_Promise PressureObserver_observe1(PressureObserver* self , PressureSource * source, PressureObserverOptions * options);

jb_Undefined PressureObserver_unobserve(PressureObserver* self , PressureSource * source);

jb_Undefined PressureObserver_disconnect(PressureObserver* self );

jb_Array PressureObserver_takeRecords(PressureObserver* self );

jb_Array PressureObserver_knownSources(const PressureObserver *self);
