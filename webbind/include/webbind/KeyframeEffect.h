#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AnimationEffect.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Element Element;


DECLARE_EMLITE_TYPE(KeyframeEffect, AnimationEffect);

KeyframeEffect KeyframeEffect_new(KeyframeEffect * source);

Element KeyframeEffect_target(const KeyframeEffect *self);

void KeyframeEffect_set_target(KeyframeEffect* self, Element * value);

jb_String KeyframeEffect_pseudoElement(const KeyframeEffect *self);

void KeyframeEffect_set_pseudoElement(KeyframeEffect* self, jb_String * value);

CompositeOperation KeyframeEffect_composite(const KeyframeEffect *self);

void KeyframeEffect_set_composite(KeyframeEffect* self, CompositeOperation * value);

jb_Array KeyframeEffect_getKeyframes(KeyframeEffect* self );

jb_Undefined KeyframeEffect_setKeyframes(KeyframeEffect* self , jb_Object * keyframes);

IterationCompositeOperation KeyframeEffect_iterationComposite(const KeyframeEffect *self);

void KeyframeEffect_set_iterationComposite(KeyframeEffect* self, IterationCompositeOperation * value);
