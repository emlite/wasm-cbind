#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(BatteryManager, EventTarget);

bool BatteryManager_charging(const BatteryManager *self);

double BatteryManager_chargingTime(const BatteryManager *self);

double BatteryManager_dischargingTime(const BatteryManager *self);

double BatteryManager_level(const BatteryManager *self);

jb_Any BatteryManager_onchargingchange(const BatteryManager *self);

void BatteryManager_set_onchargingchange(BatteryManager* self, jb_Any * value);

jb_Any BatteryManager_onchargingtimechange(const BatteryManager *self);

void BatteryManager_set_onchargingtimechange(BatteryManager* self, jb_Any * value);

jb_Any BatteryManager_ondischargingtimechange(const BatteryManager *self);

void BatteryManager_set_ondischargingtimechange(BatteryManager* self, jb_Any * value);

jb_Any BatteryManager_onlevelchange(const BatteryManager *self);

void BatteryManager_set_onlevelchange(BatteryManager* self, jb_Any * value);
