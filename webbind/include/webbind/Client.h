#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "MessagePort.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(Client, em_Val);

jb_String Client_url(const Client *self);

FrameType Client_frameType(const Client *self);

jb_String Client_id(const Client *self);

ClientType Client_type(const Client *self);

jb_Undefined Client_postMessage0(Client* self , jb_Any * message);

jb_Undefined Client_postMessage1(Client* self , jb_Any * message, StructuredSerializeOptions * options);

ClientLifecycleState Client_lifecycleState(const Client *self);
