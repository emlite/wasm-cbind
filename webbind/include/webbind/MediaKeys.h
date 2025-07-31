#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct MediaKeySession MediaKeySession;
typedef struct MediaKeysPolicy MediaKeysPolicy;


DECLARE_EMLITE_TYPE(MediaKeysPolicy, em_Val);

jb_String MediaKeysPolicy_minHdcpVersion(const MediaKeysPolicy *self);

void MediaKeysPolicy_set_minHdcpVersion(MediaKeysPolicy* self, jb_String * value);
DECLARE_EMLITE_TYPE(MediaKeys, em_Val);

MediaKeySession MediaKeys_createSession0(MediaKeys* self );

MediaKeySession MediaKeys_createSession1(MediaKeys* self , MediaKeySessionType * sessionType);

jb_Promise MediaKeys_getStatusForPolicy0(MediaKeys* self );

jb_Promise MediaKeys_getStatusForPolicy1(MediaKeys* self , MediaKeysPolicy * policy);

jb_Promise MediaKeys_setServerCertificate(MediaKeys* self , jb_Any * serverCertificate);
