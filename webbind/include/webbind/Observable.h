#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SubscribeOptions SubscribeOptions;
typedef struct Observable Observable;
typedef struct AbortSignal AbortSignal;


DECLARE_EMLITE_TYPE(SubscribeOptions, em_Val);

AbortSignal SubscribeOptions_signal(const SubscribeOptions *self);

void SubscribeOptions_set_signal(SubscribeOptions* self, AbortSignal * value);
DECLARE_EMLITE_TYPE(Observable, em_Val);

Observable Observable_new(jb_Function * callback);

jb_Undefined Observable_subscribe0(Observable* self );

jb_Undefined Observable_subscribe1(Observable* self , jb_Any * observer);

jb_Undefined Observable_subscribe2(Observable* self , jb_Any * observer, SubscribeOptions * options);

Observable Observable_from(Observable* self , jb_Any * value);

Observable Observable_takeUntil(Observable* self , jb_Any * value);

Observable Observable_map(Observable* self , jb_Function * mapper);

Observable Observable_filter(Observable* self , jb_Function * predicate);

Observable Observable_take(Observable* self , long long amount);

Observable Observable_drop(Observable* self , long long amount);

Observable Observable_flatMap(Observable* self , jb_Function * mapper);

Observable Observable_switchMap(Observable* self , jb_Function * mapper);

Observable Observable_inspect0(Observable* self );

Observable Observable_inspect1(Observable* self , jb_Any * inspectorUnion);

Observable Observable_catch_(Observable* self , jb_Function * callback);

Observable Observable_finally(Observable* self , jb_Any * callback);

jb_Promise Observable_toArray0(Observable* self );

jb_Promise Observable_toArray1(Observable* self , SubscribeOptions * options);

jb_Promise Observable_forEach0(Observable* self , jb_Function * callback);

jb_Promise Observable_forEach1(Observable* self , jb_Function * callback, SubscribeOptions * options);

jb_Promise Observable_every0(Observable* self , jb_Function * predicate);

jb_Promise Observable_every1(Observable* self , jb_Function * predicate, SubscribeOptions * options);

jb_Promise Observable_first0(Observable* self );

jb_Promise Observable_first1(Observable* self , SubscribeOptions * options);

jb_Promise Observable_last0(Observable* self );

jb_Promise Observable_last1(Observable* self , SubscribeOptions * options);

jb_Promise Observable_find0(Observable* self , jb_Function * predicate);

jb_Promise Observable_find1(Observable* self , jb_Function * predicate, SubscribeOptions * options);

jb_Promise Observable_some0(Observable* self , jb_Function * predicate);

jb_Promise Observable_some1(Observable* self , jb_Function * predicate, SubscribeOptions * options);

jb_Promise Observable_reduce0(Observable* self , jb_Function * reducer);

jb_Promise Observable_reduce1(Observable* self , jb_Function * reducer, jb_Any * initialValue);

jb_Promise Observable_reduce2(Observable* self , jb_Function * reducer, jb_Any * initialValue, SubscribeOptions * options);
