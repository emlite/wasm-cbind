#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct AnimationEffect AnimationEffect;


DECLARE_EMLITE_TYPE(AnimationNodeList, em_Val);

unsigned long AnimationNodeList_length(const AnimationNodeList *self);

AnimationEffect AnimationNodeList_item(AnimationNodeList* self , unsigned long index);
