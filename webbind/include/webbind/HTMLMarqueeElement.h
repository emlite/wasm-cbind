#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(HTMLMarqueeElement, HTMLElement);

HTMLMarqueeElement HTMLMarqueeElement_new();

jb_String HTMLMarqueeElement_behavior(const HTMLMarqueeElement *self);

void HTMLMarqueeElement_set_behavior(HTMLMarqueeElement* self, jb_String * value);

jb_String HTMLMarqueeElement_bgColor(const HTMLMarqueeElement *self);

void HTMLMarqueeElement_set_bgColor(HTMLMarqueeElement* self, jb_String * value);

jb_String HTMLMarqueeElement_direction(const HTMLMarqueeElement *self);

void HTMLMarqueeElement_set_direction(HTMLMarqueeElement* self, jb_String * value);

jb_String HTMLMarqueeElement_height(const HTMLMarqueeElement *self);

void HTMLMarqueeElement_set_height(HTMLMarqueeElement* self, jb_String * value);

unsigned long HTMLMarqueeElement_hspace(const HTMLMarqueeElement *self);

void HTMLMarqueeElement_set_hspace(HTMLMarqueeElement* self, unsigned long value);

long HTMLMarqueeElement_loop(const HTMLMarqueeElement *self);

void HTMLMarqueeElement_set_loop(HTMLMarqueeElement* self, long value);

unsigned long HTMLMarqueeElement_scrollAmount(const HTMLMarqueeElement *self);

void HTMLMarqueeElement_set_scrollAmount(HTMLMarqueeElement* self, unsigned long value);

unsigned long HTMLMarqueeElement_scrollDelay(const HTMLMarqueeElement *self);

void HTMLMarqueeElement_set_scrollDelay(HTMLMarqueeElement* self, unsigned long value);

bool HTMLMarqueeElement_trueSpeed(const HTMLMarqueeElement *self);

void HTMLMarqueeElement_set_trueSpeed(HTMLMarqueeElement* self, bool value);

unsigned long HTMLMarqueeElement_vspace(const HTMLMarqueeElement *self);

void HTMLMarqueeElement_set_vspace(HTMLMarqueeElement* self, unsigned long value);

jb_String HTMLMarqueeElement_width(const HTMLMarqueeElement *self);

void HTMLMarqueeElement_set_width(HTMLMarqueeElement* self, jb_String * value);

jb_Undefined HTMLMarqueeElement_start(HTMLMarqueeElement* self );

jb_Undefined HTMLMarqueeElement_stop(HTMLMarqueeElement* self );
