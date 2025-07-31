#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "DocumentFragment.h"
#include "Element.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Element Element;
typedef struct Animation Animation;


DECLARE_EMLITE_TYPE(ShadowRoot, DocumentFragment);

ShadowRootMode ShadowRoot_mode(const ShadowRoot *self);

bool ShadowRoot_delegatesFocus(const ShadowRoot *self);

SlotAssignmentMode ShadowRoot_slotAssignment(const ShadowRoot *self);

bool ShadowRoot_clonable(const ShadowRoot *self);

bool ShadowRoot_serializable(const ShadowRoot *self);

Element ShadowRoot_host(const ShadowRoot *self);

jb_Any ShadowRoot_onslotchange(const ShadowRoot *self);

void ShadowRoot_set_onslotchange(ShadowRoot* self, jb_Any * value);

jb_Undefined ShadowRoot_setHTMLUnsafe(ShadowRoot* self , jb_Any * html);

jb_String ShadowRoot_getHTML0(ShadowRoot* self );

jb_String ShadowRoot_getHTML1(ShadowRoot* self , GetHTMLOptions * options);

jb_Any ShadowRoot_innerHTML(const ShadowRoot *self);

void ShadowRoot_set_innerHTML(ShadowRoot* self, jb_Any * value);

jb_Array ShadowRoot_getAnimations(ShadowRoot* self );
