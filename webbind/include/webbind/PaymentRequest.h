#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct PaymentResponse PaymentResponse;
typedef struct PaymentDetailsUpdate PaymentDetailsUpdate;
typedef struct ContactAddress ContactAddress;
typedef struct PaymentMethodData PaymentMethodData;


DECLARE_EMLITE_TYPE(PaymentDetailsUpdate, em_Val);

jb_String PaymentDetailsUpdate_error(const PaymentDetailsUpdate *self);

void PaymentDetailsUpdate_set_error(PaymentDetailsUpdate* self, jb_String * value);

jb_Any PaymentDetailsUpdate_total(const PaymentDetailsUpdate *self);

void PaymentDetailsUpdate_set_total(PaymentDetailsUpdate* self, jb_Any * value);

jb_Any PaymentDetailsUpdate_shippingAddressErrors(const PaymentDetailsUpdate *self);

void PaymentDetailsUpdate_set_shippingAddressErrors(PaymentDetailsUpdate* self, jb_Any * value);

jb_Any PaymentDetailsUpdate_payerErrors(const PaymentDetailsUpdate *self);

void PaymentDetailsUpdate_set_payerErrors(PaymentDetailsUpdate* self, jb_Any * value);

jb_Object PaymentDetailsUpdate_paymentMethodErrors(const PaymentDetailsUpdate *self);

void PaymentDetailsUpdate_set_paymentMethodErrors(PaymentDetailsUpdate* self, jb_Object * value);
DECLARE_EMLITE_TYPE(PaymentRequest, EventTarget);

PaymentRequest PaymentRequest_new0(jb_Array * methodData, jb_Any * details);

PaymentRequest PaymentRequest_new1(jb_Array * methodData, jb_Any * details, jb_Any * options);

jb_Promise PaymentRequest_show0(PaymentRequest* self );

jb_Promise PaymentRequest_show1(PaymentRequest* self , jb_Promise * detailsPromise);

jb_Promise PaymentRequest_abort(PaymentRequest* self );

jb_Promise PaymentRequest_canMakePayment(PaymentRequest* self );

jb_String PaymentRequest_id(const PaymentRequest *self);

ContactAddress PaymentRequest_shippingAddress(const PaymentRequest *self);

jb_String PaymentRequest_shippingOption(const PaymentRequest *self);

PaymentShippingType PaymentRequest_shippingType(const PaymentRequest *self);

jb_Any PaymentRequest_onshippingaddresschange(const PaymentRequest *self);

void PaymentRequest_set_onshippingaddresschange(PaymentRequest* self, jb_Any * value);

jb_Any PaymentRequest_onshippingoptionchange(const PaymentRequest *self);

void PaymentRequest_set_onshippingoptionchange(PaymentRequest* self, jb_Any * value);

jb_Any PaymentRequest_onpaymentmethodchange(const PaymentRequest *self);

void PaymentRequest_set_onpaymentmethodchange(PaymentRequest* self, jb_Any * value);

jb_Promise PaymentRequest_securePaymentConfirmationAvailability(PaymentRequest* self );
