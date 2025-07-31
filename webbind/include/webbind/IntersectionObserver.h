#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Element Element;
typedef struct IntersectionObserverEntry IntersectionObserverEntry;


DECLARE_EMLITE_TYPE(IntersectionObserver, em_Val);

IntersectionObserver IntersectionObserver_new0(jb_Function * callback);

IntersectionObserver IntersectionObserver_new1(jb_Function * callback, jb_Any * options);

jb_Any IntersectionObserver_root(const IntersectionObserver *self);

jb_String IntersectionObserver_rootMargin(const IntersectionObserver *self);

jb_String IntersectionObserver_scrollMargin(const IntersectionObserver *self);

jb_Array IntersectionObserver_thresholds(const IntersectionObserver *self);

long IntersectionObserver_delay(const IntersectionObserver *self);

bool IntersectionObserver_trackVisibility(const IntersectionObserver *self);

jb_Undefined IntersectionObserver_observe(IntersectionObserver* self , Element * target);

jb_Undefined IntersectionObserver_unobserve(IntersectionObserver* self , Element * target);

jb_Undefined IntersectionObserver_disconnect(IntersectionObserver* self );

jb_Array IntersectionObserver_takeRecords(IntersectionObserver* self );
