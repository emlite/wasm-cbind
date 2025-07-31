#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(WebSocket, EventTarget);

WebSocket WebSocket_new0(jb_String * url);

WebSocket WebSocket_new1(jb_String * url, jb_Any * protocols);

jb_String WebSocket_url(const WebSocket *self);

unsigned short WebSocket_readyState(const WebSocket *self);

long long WebSocket_bufferedAmount(const WebSocket *self);

jb_Any WebSocket_onopen(const WebSocket *self);

void WebSocket_set_onopen(WebSocket* self, jb_Any * value);

jb_Any WebSocket_onerror(const WebSocket *self);

void WebSocket_set_onerror(WebSocket* self, jb_Any * value);

jb_Any WebSocket_onclose(const WebSocket *self);

void WebSocket_set_onclose(WebSocket* self, jb_Any * value);

jb_String WebSocket_extensions(const WebSocket *self);

jb_String WebSocket_protocol(const WebSocket *self);

jb_Undefined WebSocket_close0(WebSocket* self );

jb_Undefined WebSocket_close1(WebSocket* self , unsigned short code);

jb_Undefined WebSocket_close2(WebSocket* self , unsigned short code, jb_String * reason);

jb_Any WebSocket_onmessage(const WebSocket *self);

void WebSocket_set_onmessage(WebSocket* self, jb_Any * value);

BinaryType WebSocket_binaryType(const WebSocket *self);

void WebSocket_set_binaryType(WebSocket* self, BinaryType * value);

jb_Undefined WebSocket_send(WebSocket* self , jb_Any * data);
