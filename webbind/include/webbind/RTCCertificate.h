#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct RTCDtlsFingerprint RTCDtlsFingerprint;


DECLARE_EMLITE_TYPE(RTCDtlsFingerprint, em_Val);

jb_String RTCDtlsFingerprint_algorithm(const RTCDtlsFingerprint *self);

void RTCDtlsFingerprint_set_algorithm(RTCDtlsFingerprint* self, jb_String * value);

jb_String RTCDtlsFingerprint_value(const RTCDtlsFingerprint *self);

void RTCDtlsFingerprint_set_value(RTCDtlsFingerprint* self, jb_String * value);
DECLARE_EMLITE_TYPE(RTCCertificate, em_Val);

jb_Any RTCCertificate_expires(const RTCCertificate *self);

jb_Array RTCCertificate_getFingerprints(RTCCertificate* self );
