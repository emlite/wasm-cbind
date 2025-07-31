#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(WorkerLocation, em_Val);

jb_String WorkerLocation_href(const WorkerLocation *self);

jb_String WorkerLocation_origin(const WorkerLocation *self);

jb_String WorkerLocation_protocol(const WorkerLocation *self);

jb_String WorkerLocation_host(const WorkerLocation *self);

jb_String WorkerLocation_hostname(const WorkerLocation *self);

jb_String WorkerLocation_port(const WorkerLocation *self);

jb_String WorkerLocation_pathname(const WorkerLocation *self);

jb_String WorkerLocation_search(const WorkerLocation *self);

jb_String WorkerLocation_hash(const WorkerLocation *self);
