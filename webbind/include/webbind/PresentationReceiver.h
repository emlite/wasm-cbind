#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct PresentationConnectionList PresentationConnectionList;


DECLARE_EMLITE_TYPE(PresentationReceiver, em_Val);

jb_Promise PresentationReceiver_connectionList(const PresentationReceiver *self);
