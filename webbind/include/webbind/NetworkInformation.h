#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(NetworkInformation, EventTarget);

ConnectionType NetworkInformation_type(const NetworkInformation *self);

EffectiveConnectionType NetworkInformation_effectiveType(const NetworkInformation *self);

jb_Any NetworkInformation_downlinkMax(const NetworkInformation *self);

jb_Any NetworkInformation_downlink(const NetworkInformation *self);

jb_Any NetworkInformation_rtt(const NetworkInformation *self);

jb_Any NetworkInformation_onchange(const NetworkInformation *self);

void NetworkInformation_set_onchange(NetworkInformation* self, jb_Any * value);

bool NetworkInformation_saveData(const NetworkInformation *self);
