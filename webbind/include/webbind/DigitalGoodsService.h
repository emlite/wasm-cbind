#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct ItemDetails ItemDetails;
typedef struct PurchaseDetails PurchaseDetails;


DECLARE_EMLITE_TYPE(ItemDetails, em_Val);

jb_String ItemDetails_itemId(const ItemDetails *self);

void ItemDetails_set_itemId(ItemDetails* self, jb_String * value);

jb_String ItemDetails_title(const ItemDetails *self);

void ItemDetails_set_title(ItemDetails* self, jb_String * value);

jb_Any ItemDetails_price(const ItemDetails *self);

void ItemDetails_set_price(ItemDetails* self, jb_Any * value);

ItemType ItemDetails_type(const ItemDetails *self);

void ItemDetails_set_type(ItemDetails* self, ItemType * value);

jb_String ItemDetails_description(const ItemDetails *self);

void ItemDetails_set_description(ItemDetails* self, jb_String * value);

jb_Array ItemDetails_iconURLs(const ItemDetails *self);

void ItemDetails_set_iconURLs(ItemDetails* self, jb_Array * value);

jb_String ItemDetails_subscriptionPeriod(const ItemDetails *self);

void ItemDetails_set_subscriptionPeriod(ItemDetails* self, jb_String * value);

jb_String ItemDetails_freeTrialPeriod(const ItemDetails *self);

void ItemDetails_set_freeTrialPeriod(ItemDetails* self, jb_String * value);

jb_Any ItemDetails_introductoryPrice(const ItemDetails *self);

void ItemDetails_set_introductoryPrice(ItemDetails* self, jb_Any * value);

jb_String ItemDetails_introductoryPricePeriod(const ItemDetails *self);

void ItemDetails_set_introductoryPricePeriod(ItemDetails* self, jb_String * value);

long long ItemDetails_introductoryPriceCycles(const ItemDetails *self);

void ItemDetails_set_introductoryPriceCycles(ItemDetails* self, long long value);
DECLARE_EMLITE_TYPE(PurchaseDetails, em_Val);

jb_String PurchaseDetails_itemId(const PurchaseDetails *self);

void PurchaseDetails_set_itemId(PurchaseDetails* self, jb_String * value);

jb_String PurchaseDetails_purchaseToken(const PurchaseDetails *self);

void PurchaseDetails_set_purchaseToken(PurchaseDetails* self, jb_String * value);
DECLARE_EMLITE_TYPE(DigitalGoodsService, em_Val);

jb_Promise DigitalGoodsService_getDetails(DigitalGoodsService* self , jb_Array * itemIds);

jb_Promise DigitalGoodsService_listPurchases(DigitalGoodsService* self );

jb_Promise DigitalGoodsService_listPurchaseHistory(DigitalGoodsService* self );

jb_Promise DigitalGoodsService_consume(DigitalGoodsService* self , jb_String * purchaseToken);
