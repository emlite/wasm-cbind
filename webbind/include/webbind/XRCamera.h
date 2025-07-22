#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(XRCamera, em_Val);

unsigned long XRCamera_width( const XRCamera *self);

unsigned long XRCamera_height( const XRCamera *self);
