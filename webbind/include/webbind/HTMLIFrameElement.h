#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DOMTokenList DOMTokenList;
typedef struct Document Document;
typedef struct PermissionsPolicy PermissionsPolicy;


DECLARE_EMLITE_TYPE(HTMLIFrameElement, HTMLElement);

HTMLIFrameElement HTMLIFrameElement_new();

jb_String HTMLIFrameElement_src(const HTMLIFrameElement *self);

void HTMLIFrameElement_set_src(HTMLIFrameElement* self, jb_String * value);

jb_Any HTMLIFrameElement_srcdoc(const HTMLIFrameElement *self);

void HTMLIFrameElement_set_srcdoc(HTMLIFrameElement* self, jb_Any * value);

jb_String HTMLIFrameElement_name(const HTMLIFrameElement *self);

void HTMLIFrameElement_set_name(HTMLIFrameElement* self, jb_String * value);

DOMTokenList HTMLIFrameElement_sandbox(const HTMLIFrameElement *self);

jb_String HTMLIFrameElement_allow(const HTMLIFrameElement *self);

void HTMLIFrameElement_set_allow(HTMLIFrameElement* self, jb_String * value);

bool HTMLIFrameElement_allowFullscreen(const HTMLIFrameElement *self);

void HTMLIFrameElement_set_allowFullscreen(HTMLIFrameElement* self, bool value);

jb_String HTMLIFrameElement_width(const HTMLIFrameElement *self);

void HTMLIFrameElement_set_width(HTMLIFrameElement* self, jb_String * value);

jb_String HTMLIFrameElement_height(const HTMLIFrameElement *self);

void HTMLIFrameElement_set_height(HTMLIFrameElement* self, jb_String * value);

jb_String HTMLIFrameElement_referrerPolicy(const HTMLIFrameElement *self);

void HTMLIFrameElement_set_referrerPolicy(HTMLIFrameElement* self, jb_String * value);

jb_String HTMLIFrameElement_loading(const HTMLIFrameElement *self);

void HTMLIFrameElement_set_loading(HTMLIFrameElement* self, jb_String * value);

Document HTMLIFrameElement_contentDocument(const HTMLIFrameElement *self);

jb_Any HTMLIFrameElement_contentWindow(const HTMLIFrameElement *self);

Document HTMLIFrameElement_getSVGDocument(HTMLIFrameElement* self );

bool HTMLIFrameElement_credentialless(const HTMLIFrameElement *self);

void HTMLIFrameElement_set_credentialless(HTMLIFrameElement* self, bool value);

jb_String HTMLIFrameElement_csp(const HTMLIFrameElement *self);

void HTMLIFrameElement_set_csp(HTMLIFrameElement* self, jb_String * value);

jb_String HTMLIFrameElement_align(const HTMLIFrameElement *self);

void HTMLIFrameElement_set_align(HTMLIFrameElement* self, jb_String * value);

jb_String HTMLIFrameElement_scrolling(const HTMLIFrameElement *self);

void HTMLIFrameElement_set_scrolling(HTMLIFrameElement* self, jb_String * value);

jb_String HTMLIFrameElement_frameBorder(const HTMLIFrameElement *self);

void HTMLIFrameElement_set_frameBorder(HTMLIFrameElement* self, jb_String * value);

jb_String HTMLIFrameElement_longDesc(const HTMLIFrameElement *self);

void HTMLIFrameElement_set_longDesc(HTMLIFrameElement* self, jb_String * value);

jb_String HTMLIFrameElement_marginHeight(const HTMLIFrameElement *self);

void HTMLIFrameElement_set_marginHeight(HTMLIFrameElement* self, jb_String * value);

jb_String HTMLIFrameElement_marginWidth(const HTMLIFrameElement *self);

void HTMLIFrameElement_set_marginWidth(HTMLIFrameElement* self, jb_String * value);

PermissionsPolicy HTMLIFrameElement_permissionsPolicy(const HTMLIFrameElement *self);

jb_String HTMLIFrameElement_privateToken(const HTMLIFrameElement *self);

void HTMLIFrameElement_set_privateToken(HTMLIFrameElement* self, jb_String * value);

bool HTMLIFrameElement_adAuctionHeaders(const HTMLIFrameElement *self);

void HTMLIFrameElement_set_adAuctionHeaders(HTMLIFrameElement* self, bool value);

bool HTMLIFrameElement_sharedStorageWritable(const HTMLIFrameElement *self);

void HTMLIFrameElement_set_sharedStorageWritable(HTMLIFrameElement* self, bool value);
