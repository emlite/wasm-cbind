#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(SecurityPolicyViolationEvent, Event);

SecurityPolicyViolationEvent SecurityPolicyViolationEvent_new0(jb_String * type);

SecurityPolicyViolationEvent SecurityPolicyViolationEvent_new1(jb_String * type, jb_Any * eventInitDict);

jb_String SecurityPolicyViolationEvent_documentURI(const SecurityPolicyViolationEvent *self);

jb_String SecurityPolicyViolationEvent_referrer(const SecurityPolicyViolationEvent *self);

jb_String SecurityPolicyViolationEvent_blockedURI(const SecurityPolicyViolationEvent *self);

jb_String SecurityPolicyViolationEvent_effectiveDirective(const SecurityPolicyViolationEvent *self);

jb_String SecurityPolicyViolationEvent_violatedDirective(const SecurityPolicyViolationEvent *self);

jb_String SecurityPolicyViolationEvent_originalPolicy(const SecurityPolicyViolationEvent *self);

jb_String SecurityPolicyViolationEvent_sourceFile(const SecurityPolicyViolationEvent *self);

jb_String SecurityPolicyViolationEvent_sample(const SecurityPolicyViolationEvent *self);

SecurityPolicyViolationEventDisposition SecurityPolicyViolationEvent_disposition(const SecurityPolicyViolationEvent *self);

unsigned short SecurityPolicyViolationEvent_statusCode(const SecurityPolicyViolationEvent *self);

unsigned long SecurityPolicyViolationEvent_lineNumber(const SecurityPolicyViolationEvent *self);

unsigned long SecurityPolicyViolationEvent_columnNumber(const SecurityPolicyViolationEvent *self);
