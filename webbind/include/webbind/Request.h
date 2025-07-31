#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Headers Headers;
typedef struct AbortSignal AbortSignal;
typedef struct Request Request;
typedef struct ReadableStream ReadableStream;
typedef struct Blob Blob;
typedef struct FormData FormData;


DECLARE_EMLITE_TYPE(Request, em_Val);

Request Request_new0(jb_Any * input);

Request Request_new1(jb_Any * input, jb_Any * init);

jb_String Request_method(const Request *self);

jb_String Request_url(const Request *self);

Headers Request_headers(const Request *self);

RequestDestination Request_destination(const Request *self);

jb_String Request_referrer(const Request *self);

ReferrerPolicy Request_referrerPolicy(const Request *self);

RequestMode Request_mode(const Request *self);

RequestCredentials Request_credentials(const Request *self);

RequestCache Request_cache(const Request *self);

RequestRedirect Request_redirect(const Request *self);

jb_String Request_integrity(const Request *self);

bool Request_keepalive(const Request *self);

bool Request_isReloadNavigation(const Request *self);

bool Request_isHistoryNavigation(const Request *self);

AbortSignal Request_signal(const Request *self);

RequestDuplex Request_duplex(const Request *self);

Request Request_clone(Request* self );

IPAddressSpace Request_targetAddressSpace(const Request *self);

ReadableStream Request_body(const Request *self);

bool Request_bodyUsed(const Request *self);

jb_Promise Request_arrayBuffer(Request* self );

jb_Promise Request_blob(Request* self );

jb_Promise Request_bytes(Request* self );

jb_Promise Request_formData(Request* self );

jb_Promise Request_json(Request* self );

jb_Promise Request_text(Request* self );
