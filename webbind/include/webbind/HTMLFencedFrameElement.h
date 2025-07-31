#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct FencedFrameConfig FencedFrameConfig;
typedef struct DOMTokenList DOMTokenList;


DECLARE_EMLITE_TYPE(HTMLFencedFrameElement, HTMLElement);

HTMLFencedFrameElement HTMLFencedFrameElement_new();

FencedFrameConfig HTMLFencedFrameElement_config(const HTMLFencedFrameElement *self);

void HTMLFencedFrameElement_set_config(HTMLFencedFrameElement* self, FencedFrameConfig * value);

jb_String HTMLFencedFrameElement_width(const HTMLFencedFrameElement *self);

void HTMLFencedFrameElement_set_width(HTMLFencedFrameElement* self, jb_String * value);

jb_String HTMLFencedFrameElement_height(const HTMLFencedFrameElement *self);

void HTMLFencedFrameElement_set_height(HTMLFencedFrameElement* self, jb_String * value);

DOMTokenList HTMLFencedFrameElement_sandbox(const HTMLFencedFrameElement *self);

jb_String HTMLFencedFrameElement_allow(const HTMLFencedFrameElement *self);

void HTMLFencedFrameElement_set_allow(HTMLFencedFrameElement* self, jb_String * value);
