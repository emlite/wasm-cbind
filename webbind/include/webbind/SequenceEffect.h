#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "GroupEffect.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SequenceEffect SequenceEffect;


DECLARE_EMLITE_TYPE(SequenceEffect, GroupEffect);

SequenceEffect SequenceEffect_new0(jb_Array * children);

SequenceEffect SequenceEffect_new1(jb_Array * children, jb_Any * timing);

SequenceEffect SequenceEffect_clone(SequenceEffect* self );
