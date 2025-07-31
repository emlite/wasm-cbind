#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct HIDCollectionInfo HIDCollectionInfo;


DECLARE_EMLITE_TYPE(HIDCollectionInfo, em_Val);

unsigned short HIDCollectionInfo_usagePage(const HIDCollectionInfo *self);

void HIDCollectionInfo_set_usagePage(HIDCollectionInfo* self, unsigned short value);

unsigned short HIDCollectionInfo_usage(const HIDCollectionInfo *self);

void HIDCollectionInfo_set_usage(HIDCollectionInfo* self, unsigned short value);

unsigned char HIDCollectionInfo_type(const HIDCollectionInfo *self);

void HIDCollectionInfo_set_type(HIDCollectionInfo* self, unsigned char value);

jb_Array HIDCollectionInfo_children(const HIDCollectionInfo *self);

void HIDCollectionInfo_set_children(HIDCollectionInfo* self, jb_Array * value);

jb_Array HIDCollectionInfo_inputReports(const HIDCollectionInfo *self);

void HIDCollectionInfo_set_inputReports(HIDCollectionInfo* self, jb_Array * value);

jb_Array HIDCollectionInfo_outputReports(const HIDCollectionInfo *self);

void HIDCollectionInfo_set_outputReports(HIDCollectionInfo* self, jb_Array * value);

jb_Array HIDCollectionInfo_featureReports(const HIDCollectionInfo *self);

void HIDCollectionInfo_set_featureReports(HIDCollectionInfo* self, jb_Array * value);
DECLARE_EMLITE_TYPE(HIDDevice, EventTarget);

jb_Any HIDDevice_oninputreport(const HIDDevice *self);

void HIDDevice_set_oninputreport(HIDDevice* self, jb_Any * value);

bool HIDDevice_opened(const HIDDevice *self);

unsigned short HIDDevice_vendorId(const HIDDevice *self);

unsigned short HIDDevice_productId(const HIDDevice *self);

jb_String HIDDevice_productName(const HIDDevice *self);

jb_Array HIDDevice_collections(const HIDDevice *self);

jb_Promise HIDDevice_open(HIDDevice* self );

jb_Promise HIDDevice_close(HIDDevice* self );

jb_Promise HIDDevice_forget(HIDDevice* self );

jb_Promise HIDDevice_sendReport(HIDDevice* self , unsigned char reportId, jb_Any * data);

jb_Promise HIDDevice_sendFeatureReport(HIDDevice* self , unsigned char reportId, jb_Any * data);

jb_Promise HIDDevice_receiveFeatureReport(HIDDevice* self , unsigned char reportId);
