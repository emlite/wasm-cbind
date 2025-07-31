#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ExtendableEvent.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct PaymentMethodData PaymentMethodData;
typedef struct PaymentDetailsModifier PaymentDetailsModifier;
typedef struct PaymentShippingOption PaymentShippingOption;
typedef struct WindowClient WindowClient;
typedef struct PaymentRequestDetailsUpdate PaymentRequestDetailsUpdate;
typedef struct AddressInit AddressInit;
typedef struct PaymentHandlerResponse PaymentHandlerResponse;


DECLARE_EMLITE_TYPE(PaymentMethodData, em_Val);

jb_String PaymentMethodData_supportedMethods(const PaymentMethodData *self);

void PaymentMethodData_set_supportedMethods(PaymentMethodData* self, jb_String * value);

jb_Object PaymentMethodData_data(const PaymentMethodData *self);

void PaymentMethodData_set_data(PaymentMethodData* self, jb_Object * value);
DECLARE_EMLITE_TYPE(PaymentDetailsModifier, em_Val);

jb_String PaymentDetailsModifier_supportedMethods(const PaymentDetailsModifier *self);

void PaymentDetailsModifier_set_supportedMethods(PaymentDetailsModifier* self, jb_String * value);

jb_Any PaymentDetailsModifier_total(const PaymentDetailsModifier *self);

void PaymentDetailsModifier_set_total(PaymentDetailsModifier* self, jb_Any * value);

jb_Array PaymentDetailsModifier_additionalDisplayItems(const PaymentDetailsModifier *self);

void PaymentDetailsModifier_set_additionalDisplayItems(PaymentDetailsModifier* self, jb_Array * value);

jb_Object PaymentDetailsModifier_data(const PaymentDetailsModifier *self);

void PaymentDetailsModifier_set_data(PaymentDetailsModifier* self, jb_Object * value);
DECLARE_EMLITE_TYPE(PaymentShippingOption, em_Val);

jb_String PaymentShippingOption_id(const PaymentShippingOption *self);

void PaymentShippingOption_set_id(PaymentShippingOption* self, jb_String * value);

jb_String PaymentShippingOption_label(const PaymentShippingOption *self);

void PaymentShippingOption_set_label(PaymentShippingOption* self, jb_String * value);

jb_Any PaymentShippingOption_amount(const PaymentShippingOption *self);

void PaymentShippingOption_set_amount(PaymentShippingOption* self, jb_Any * value);

bool PaymentShippingOption_selected(const PaymentShippingOption *self);

void PaymentShippingOption_set_selected(PaymentShippingOption* self, bool value);
DECLARE_EMLITE_TYPE(PaymentRequestDetailsUpdate, em_Val);

jb_String PaymentRequestDetailsUpdate_error(const PaymentRequestDetailsUpdate *self);

void PaymentRequestDetailsUpdate_set_error(PaymentRequestDetailsUpdate* self, jb_String * value);

jb_Any PaymentRequestDetailsUpdate_total(const PaymentRequestDetailsUpdate *self);

void PaymentRequestDetailsUpdate_set_total(PaymentRequestDetailsUpdate* self, jb_Any * value);

jb_Array PaymentRequestDetailsUpdate_modifiers(const PaymentRequestDetailsUpdate *self);

void PaymentRequestDetailsUpdate_set_modifiers(PaymentRequestDetailsUpdate* self, jb_Array * value);

jb_Array PaymentRequestDetailsUpdate_shippingOptions(const PaymentRequestDetailsUpdate *self);

void PaymentRequestDetailsUpdate_set_shippingOptions(PaymentRequestDetailsUpdate* self, jb_Array * value);

jb_Object PaymentRequestDetailsUpdate_paymentMethodErrors(const PaymentRequestDetailsUpdate *self);

void PaymentRequestDetailsUpdate_set_paymentMethodErrors(PaymentRequestDetailsUpdate* self, jb_Object * value);

jb_Any PaymentRequestDetailsUpdate_shippingAddressErrors(const PaymentRequestDetailsUpdate *self);

void PaymentRequestDetailsUpdate_set_shippingAddressErrors(PaymentRequestDetailsUpdate* self, jb_Any * value);
DECLARE_EMLITE_TYPE(AddressInit, em_Val);

jb_String AddressInit_country(const AddressInit *self);

void AddressInit_set_country(AddressInit* self, jb_String * value);

jb_Array AddressInit_addressLine(const AddressInit *self);

void AddressInit_set_addressLine(AddressInit* self, jb_Array * value);

jb_String AddressInit_region(const AddressInit *self);

void AddressInit_set_region(AddressInit* self, jb_String * value);

jb_String AddressInit_city(const AddressInit *self);

void AddressInit_set_city(AddressInit* self, jb_String * value);

jb_String AddressInit_dependentLocality(const AddressInit *self);

void AddressInit_set_dependentLocality(AddressInit* self, jb_String * value);

jb_String AddressInit_postalCode(const AddressInit *self);

void AddressInit_set_postalCode(AddressInit* self, jb_String * value);

jb_String AddressInit_sortingCode(const AddressInit *self);

void AddressInit_set_sortingCode(AddressInit* self, jb_String * value);

jb_String AddressInit_organization(const AddressInit *self);

void AddressInit_set_organization(AddressInit* self, jb_String * value);

jb_String AddressInit_recipient(const AddressInit *self);

void AddressInit_set_recipient(AddressInit* self, jb_String * value);

jb_String AddressInit_phone(const AddressInit *self);

void AddressInit_set_phone(AddressInit* self, jb_String * value);
DECLARE_EMLITE_TYPE(PaymentHandlerResponse, em_Val);

jb_String PaymentHandlerResponse_methodName(const PaymentHandlerResponse *self);

void PaymentHandlerResponse_set_methodName(PaymentHandlerResponse* self, jb_String * value);

jb_Object PaymentHandlerResponse_details(const PaymentHandlerResponse *self);

void PaymentHandlerResponse_set_details(PaymentHandlerResponse* self, jb_Object * value);

jb_String PaymentHandlerResponse_payerName(const PaymentHandlerResponse *self);

void PaymentHandlerResponse_set_payerName(PaymentHandlerResponse* self, jb_String * value);

jb_String PaymentHandlerResponse_payerEmail(const PaymentHandlerResponse *self);

void PaymentHandlerResponse_set_payerEmail(PaymentHandlerResponse* self, jb_String * value);

jb_String PaymentHandlerResponse_payerPhone(const PaymentHandlerResponse *self);

void PaymentHandlerResponse_set_payerPhone(PaymentHandlerResponse* self, jb_String * value);

AddressInit PaymentHandlerResponse_shippingAddress(const PaymentHandlerResponse *self);

void PaymentHandlerResponse_set_shippingAddress(PaymentHandlerResponse* self, AddressInit * value);

jb_String PaymentHandlerResponse_shippingOption(const PaymentHandlerResponse *self);

void PaymentHandlerResponse_set_shippingOption(PaymentHandlerResponse* self, jb_String * value);
DECLARE_EMLITE_TYPE(PaymentRequestEvent, ExtendableEvent);

PaymentRequestEvent PaymentRequestEvent_new0(jb_String * type);

PaymentRequestEvent PaymentRequestEvent_new1(jb_String * type, jb_Any * eventInitDict);

jb_String PaymentRequestEvent_topOrigin(const PaymentRequestEvent *self);

jb_String PaymentRequestEvent_paymentRequestOrigin(const PaymentRequestEvent *self);

jb_String PaymentRequestEvent_paymentRequestId(const PaymentRequestEvent *self);

jb_Array PaymentRequestEvent_methodData(const PaymentRequestEvent *self);

jb_Object PaymentRequestEvent_total(const PaymentRequestEvent *self);

jb_Array PaymentRequestEvent_modifiers(const PaymentRequestEvent *self);

jb_Object PaymentRequestEvent_paymentOptions(const PaymentRequestEvent *self);

jb_Array PaymentRequestEvent_shippingOptions(const PaymentRequestEvent *self);

jb_Promise PaymentRequestEvent_openWindow(PaymentRequestEvent* self , jb_String * url);

jb_Promise PaymentRequestEvent_changePaymentMethod0(PaymentRequestEvent* self , jb_String * methodName);

jb_Promise PaymentRequestEvent_changePaymentMethod1(PaymentRequestEvent* self , jb_String * methodName, jb_Object * methodDetails);

jb_Promise PaymentRequestEvent_changeShippingAddress0(PaymentRequestEvent* self );

jb_Promise PaymentRequestEvent_changeShippingAddress1(PaymentRequestEvent* self , AddressInit * shippingAddress);

jb_Promise PaymentRequestEvent_changeShippingOption(PaymentRequestEvent* self , jb_String * shippingOption);

jb_Undefined PaymentRequestEvent_respondWith(PaymentRequestEvent* self , jb_Promise * handlerResponsePromise);
