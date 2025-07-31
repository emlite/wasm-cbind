#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Response Response;
typedef struct Headers Headers;
typedef struct ReadableStream ReadableStream;
typedef struct Blob Blob;
typedef struct FormData FormData;


DECLARE_EMLITE_TYPE(Response, em_Val);

Response Response_new0();

Response Response_new1(jb_Any * body);

Response Response_new2(jb_Any * body, jb_Any * init);

Response Response_error(Response* self );

Response Response_redirect0(Response* self , jb_String * url);

Response Response_redirect1(Response* self , jb_String * url, unsigned short status);

jb_Promise Response_json(Response* self );

ResponseType Response_type(const Response *self);

jb_String Response_url(const Response *self);

bool Response_redirected(const Response *self);

unsigned short Response_status(const Response *self);

bool Response_ok(const Response *self);

jb_String Response_statusText(const Response *self);

Headers Response_headers(const Response *self);

Response Response_clone(Response* self );

ReadableStream Response_body(const Response *self);

bool Response_bodyUsed(const Response *self);

jb_Promise Response_arrayBuffer(Response* self );

jb_Promise Response_blob(Response* self );

jb_Promise Response_bytes(Response* self );

jb_Promise Response_formData(Response* self );

jb_Promise Response_text(Response* self );
