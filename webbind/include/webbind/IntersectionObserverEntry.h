#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DOMRectReadOnly DOMRectReadOnly;
typedef struct Element Element;


DECLARE_EMLITE_TYPE(IntersectionObserverEntry, em_Val);

IntersectionObserverEntry IntersectionObserverEntry_new(jb_Any * intersectionObserverEntryInit);

jb_Any IntersectionObserverEntry_time(const IntersectionObserverEntry *self);

DOMRectReadOnly IntersectionObserverEntry_rootBounds(const IntersectionObserverEntry *self);

DOMRectReadOnly IntersectionObserverEntry_boundingClientRect(const IntersectionObserverEntry *self);

DOMRectReadOnly IntersectionObserverEntry_intersectionRect(const IntersectionObserverEntry *self);

bool IntersectionObserverEntry_isIntersecting(const IntersectionObserverEntry *self);

bool IntersectionObserverEntry_isVisible(const IntersectionObserverEntry *self);

double IntersectionObserverEntry_intersectionRatio(const IntersectionObserverEntry *self);

Element IntersectionObserverEntry_target(const IntersectionObserverEntry *self);
