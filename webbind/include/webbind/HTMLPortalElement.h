#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "MessagePort.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct PortalActivateOptions PortalActivateOptions;


DECLARE_EMLITE_TYPE(PortalActivateOptions, em_Val);

jb_Any PortalActivateOptions_data(const PortalActivateOptions *self);

void PortalActivateOptions_set_data(PortalActivateOptions* self, jb_Any * value);
DECLARE_EMLITE_TYPE(HTMLPortalElement, HTMLElement);

HTMLPortalElement HTMLPortalElement_new();

jb_String HTMLPortalElement_src(const HTMLPortalElement *self);

void HTMLPortalElement_set_src(HTMLPortalElement* self, jb_String * value);

jb_String HTMLPortalElement_referrerPolicy(const HTMLPortalElement *self);

void HTMLPortalElement_set_referrerPolicy(HTMLPortalElement* self, jb_String * value);

jb_Promise HTMLPortalElement_activate0(HTMLPortalElement* self );

jb_Promise HTMLPortalElement_activate1(HTMLPortalElement* self , PortalActivateOptions * options);

jb_Undefined HTMLPortalElement_postMessage0(HTMLPortalElement* self , jb_Any * message);

jb_Undefined HTMLPortalElement_postMessage1(HTMLPortalElement* self , jb_Any * message, StructuredSerializeOptions * options);

jb_Any HTMLPortalElement_onmessage(const HTMLPortalElement *self);

void HTMLPortalElement_set_onmessage(HTMLPortalElement* self, jb_Any * value);

jb_Any HTMLPortalElement_onmessageerror(const HTMLPortalElement *self);

void HTMLPortalElement_set_onmessageerror(HTMLPortalElement* self, jb_Any * value);
