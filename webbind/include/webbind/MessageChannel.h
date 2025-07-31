#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct MessagePort MessagePort;


DECLARE_EMLITE_TYPE(MessageChannel, em_Val);

MessageChannel MessageChannel_new();

jb_Any MessageChannel_port1(const MessageChannel *self);

jb_Any MessageChannel_port2(const MessageChannel *self);
