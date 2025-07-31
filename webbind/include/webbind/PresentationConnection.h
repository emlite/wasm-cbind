#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(PresentationConnection, EventTarget);

jb_String PresentationConnection_id(const PresentationConnection *self);

jb_String PresentationConnection_url(const PresentationConnection *self);

PresentationConnectionState PresentationConnection_state(const PresentationConnection *self);

jb_Undefined PresentationConnection_close(PresentationConnection* self );

jb_Undefined PresentationConnection_terminate(PresentationConnection* self );

jb_Any PresentationConnection_onconnect(const PresentationConnection *self);

void PresentationConnection_set_onconnect(PresentationConnection* self, jb_Any * value);

jb_Any PresentationConnection_onclose(const PresentationConnection *self);

void PresentationConnection_set_onclose(PresentationConnection* self, jb_Any * value);

jb_Any PresentationConnection_onterminate(const PresentationConnection *self);

void PresentationConnection_set_onterminate(PresentationConnection* self, jb_Any * value);

BinaryType PresentationConnection_binaryType(const PresentationConnection *self);

void PresentationConnection_set_binaryType(PresentationConnection* self, BinaryType * value);

jb_Any PresentationConnection_onmessage(const PresentationConnection *self);

void PresentationConnection_set_onmessage(PresentationConnection* self, jb_Any * value);

jb_Undefined PresentationConnection_send(PresentationConnection* self , jb_Any * data);
