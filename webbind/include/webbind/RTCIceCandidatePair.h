#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct RTCIceCandidate RTCIceCandidate;


DECLARE_EMLITE_TYPE(RTCIceCandidatePair, em_Val);

RTCIceCandidate RTCIceCandidatePair_local(const RTCIceCandidatePair *self);

RTCIceCandidate RTCIceCandidatePair_remote(const RTCIceCandidatePair *self);
