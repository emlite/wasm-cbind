#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct PreferenceObject PreferenceObject;


DECLARE_EMLITE_TYPE(PreferenceManager, em_Val);

PreferenceObject PreferenceManager_colorScheme(const PreferenceManager *self);

PreferenceObject PreferenceManager_contrast(const PreferenceManager *self);

PreferenceObject PreferenceManager_reducedMotion(const PreferenceManager *self);

PreferenceObject PreferenceManager_reducedTransparency(const PreferenceManager *self);

PreferenceObject PreferenceManager_reducedData(const PreferenceManager *self);
