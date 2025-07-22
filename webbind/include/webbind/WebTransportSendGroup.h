#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "WebTransportSendStream.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(WebTransportSendGroup, em_Val);

jb_Promise WebTransportSendGroup_getStats(WebTransportSendGroup* self );
