#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Element Element;
typedef struct DOMRectReadOnly DOMRectReadOnly;
typedef struct ResizeObserverSize ResizeObserverSize;


DECLARE_EMLITE_TYPE(ResizeObserverEntry, em_Val);

Element ResizeObserverEntry_target(const ResizeObserverEntry *self);

DOMRectReadOnly ResizeObserverEntry_contentRect(const ResizeObserverEntry *self);

jb_Array ResizeObserverEntry_borderBoxSize(const ResizeObserverEntry *self);

jb_Array ResizeObserverEntry_contentBoxSize(const ResizeObserverEntry *self);

jb_Array ResizeObserverEntry_devicePixelContentBoxSize(const ResizeObserverEntry *self);
