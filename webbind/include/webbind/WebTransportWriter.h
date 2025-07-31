#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "WritableStreamDefaultWriter.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(WebTransportWriter, WritableStreamDefaultWriter);

jb_Promise WebTransportWriter_atomicWrite0(WebTransportWriter* self );

jb_Promise WebTransportWriter_atomicWrite1(WebTransportWriter* self , jb_Any * chunk);

jb_Undefined WebTransportWriter_commit(WebTransportWriter* self );
