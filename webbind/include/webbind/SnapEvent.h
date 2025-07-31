#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Node Node;


DECLARE_EMLITE_TYPE(SnapEvent, Event);

SnapEvent SnapEvent_new0(jb_String * type);

SnapEvent SnapEvent_new1(jb_String * type, jb_Any * eventInitDict);

Node SnapEvent_snapTargetBlock(const SnapEvent *self);

Node SnapEvent_snapTargetInline(const SnapEvent *self);
