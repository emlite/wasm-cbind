#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "XMLHttpRequestEventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct XMLHttpRequestUpload XMLHttpRequestUpload;
typedef struct Document Document;
typedef struct AttributionReportingRequestOptions AttributionReportingRequestOptions;
typedef struct PrivateToken PrivateToken;


DECLARE_EMLITE_TYPE(AttributionReportingRequestOptions, em_Val);

bool AttributionReportingRequestOptions_eventSourceEligible(const AttributionReportingRequestOptions *self);

void AttributionReportingRequestOptions_set_eventSourceEligible(AttributionReportingRequestOptions* self, bool value);

bool AttributionReportingRequestOptions_triggerEligible(const AttributionReportingRequestOptions *self);

void AttributionReportingRequestOptions_set_triggerEligible(AttributionReportingRequestOptions* self, bool value);
DECLARE_EMLITE_TYPE(PrivateToken, em_Val);

TokenVersion PrivateToken_version(const PrivateToken *self);

void PrivateToken_set_version(PrivateToken* self, TokenVersion * value);

OperationType PrivateToken_operation(const PrivateToken *self);

void PrivateToken_set_operation(PrivateToken* self, OperationType * value);

RefreshPolicy PrivateToken_refreshPolicy(const PrivateToken *self);

void PrivateToken_set_refreshPolicy(PrivateToken* self, RefreshPolicy * value);

jb_Array PrivateToken_issuers(const PrivateToken *self);

void PrivateToken_set_issuers(PrivateToken* self, jb_Array * value);
DECLARE_EMLITE_TYPE(XMLHttpRequest, XMLHttpRequestEventTarget);

XMLHttpRequest XMLHttpRequest_new();

jb_Any XMLHttpRequest_onreadystatechange(const XMLHttpRequest *self);

void XMLHttpRequest_set_onreadystatechange(XMLHttpRequest* self, jb_Any * value);

unsigned short XMLHttpRequest_readyState(const XMLHttpRequest *self);

jb_Undefined XMLHttpRequest_open0(XMLHttpRequest* self , jb_String * method, jb_String * url, bool async);

jb_Undefined XMLHttpRequest_open1(XMLHttpRequest* self , jb_String * method, jb_String * url, bool async, jb_String * username);

jb_Undefined XMLHttpRequest_open2(XMLHttpRequest* self , jb_String * method, jb_String * url, bool async, jb_String * username, jb_String * password);

jb_Undefined XMLHttpRequest_setRequestHeader(XMLHttpRequest* self , jb_String * name, jb_String * value);

unsigned long XMLHttpRequest_timeout(const XMLHttpRequest *self);

void XMLHttpRequest_set_timeout(XMLHttpRequest* self, unsigned long value);

bool XMLHttpRequest_withCredentials(const XMLHttpRequest *self);

void XMLHttpRequest_set_withCredentials(XMLHttpRequest* self, bool value);

XMLHttpRequestUpload XMLHttpRequest_upload(const XMLHttpRequest *self);

jb_Undefined XMLHttpRequest_send0(XMLHttpRequest* self );

jb_Undefined XMLHttpRequest_send1(XMLHttpRequest* self , jb_Any * body);

jb_Undefined XMLHttpRequest_abort(XMLHttpRequest* self );

jb_String XMLHttpRequest_responseURL(const XMLHttpRequest *self);

unsigned short XMLHttpRequest_status(const XMLHttpRequest *self);

jb_String XMLHttpRequest_statusText(const XMLHttpRequest *self);

jb_String XMLHttpRequest_getResponseHeader(XMLHttpRequest* self , jb_String * name);

jb_String XMLHttpRequest_getAllResponseHeaders(XMLHttpRequest* self );

jb_Undefined XMLHttpRequest_overrideMimeType(XMLHttpRequest* self , jb_String * mime);

XMLHttpRequestResponseType XMLHttpRequest_responseType(const XMLHttpRequest *self);

void XMLHttpRequest_set_responseType(XMLHttpRequest* self, XMLHttpRequestResponseType * value);

jb_Any XMLHttpRequest_response(const XMLHttpRequest *self);

jb_String XMLHttpRequest_responseText(const XMLHttpRequest *self);

Document XMLHttpRequest_responseXML(const XMLHttpRequest *self);

jb_Undefined XMLHttpRequest_setAttributionReporting(XMLHttpRequest* self , AttributionReportingRequestOptions * options);

jb_Undefined XMLHttpRequest_setPrivateToken(XMLHttpRequest* self , PrivateToken * privateToken);
