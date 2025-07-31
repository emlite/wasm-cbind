#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(RTCIdentityAssertion, em_Val);

RTCIdentityAssertion RTCIdentityAssertion_new(jb_String * idp, jb_String * name);

jb_String RTCIdentityAssertion_idp(const RTCIdentityAssertion *self);

void RTCIdentityAssertion_set_idp(RTCIdentityAssertion* self, jb_String * value);

jb_String RTCIdentityAssertion_name(const RTCIdentityAssertion *self);

void RTCIdentityAssertion_set_name(RTCIdentityAssertion* self, jb_String * value);
