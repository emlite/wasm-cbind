#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Document Document;


DECLARE_EMLITE_TYPE(HTMLFrameElement, HTMLElement);

HTMLFrameElement HTMLFrameElement_new();

jb_String HTMLFrameElement_name(const HTMLFrameElement *self);

void HTMLFrameElement_set_name(HTMLFrameElement* self, jb_String * value);

jb_String HTMLFrameElement_scrolling(const HTMLFrameElement *self);

void HTMLFrameElement_set_scrolling(HTMLFrameElement* self, jb_String * value);

jb_String HTMLFrameElement_src(const HTMLFrameElement *self);

void HTMLFrameElement_set_src(HTMLFrameElement* self, jb_String * value);

jb_String HTMLFrameElement_frameBorder(const HTMLFrameElement *self);

void HTMLFrameElement_set_frameBorder(HTMLFrameElement* self, jb_String * value);

jb_String HTMLFrameElement_longDesc(const HTMLFrameElement *self);

void HTMLFrameElement_set_longDesc(HTMLFrameElement* self, jb_String * value);

bool HTMLFrameElement_noResize(const HTMLFrameElement *self);

void HTMLFrameElement_set_noResize(HTMLFrameElement* self, bool value);

Document HTMLFrameElement_contentDocument(const HTMLFrameElement *self);

jb_Any HTMLFrameElement_contentWindow(const HTMLFrameElement *self);

jb_String HTMLFrameElement_marginHeight(const HTMLFrameElement *self);

void HTMLFrameElement_set_marginHeight(HTMLFrameElement* self, jb_String * value);

jb_String HTMLFrameElement_marginWidth(const HTMLFrameElement *self);

void HTMLFrameElement_set_marginWidth(HTMLFrameElement* self, jb_String * value);
