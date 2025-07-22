#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} XRViewport;


DECLARE_EMLITE_TYPE(XRViewport, em_Val);

long XRViewport_x( const XRViewport *self);

long XRViewport_y( const XRViewport *self);

long XRViewport_width( const XRViewport *self);

long XRViewport_height( const XRViewport *self);
