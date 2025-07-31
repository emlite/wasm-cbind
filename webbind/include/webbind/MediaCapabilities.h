#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct MediaCapabilitiesDecodingInfo MediaCapabilitiesDecodingInfo;
typedef struct MediaDecodingConfiguration MediaDecodingConfiguration;
typedef struct MediaCapabilitiesEncodingInfo MediaCapabilitiesEncodingInfo;
typedef struct MediaEncodingConfiguration MediaEncodingConfiguration;
typedef struct MediaKeySystemAccess MediaKeySystemAccess;


DECLARE_EMLITE_TYPE(MediaCapabilitiesDecodingInfo, em_Val);

MediaKeySystemAccess MediaCapabilitiesDecodingInfo_keySystemAccess(const MediaCapabilitiesDecodingInfo *self);

void MediaCapabilitiesDecodingInfo_set_keySystemAccess(MediaCapabilitiesDecodingInfo* self, MediaKeySystemAccess * value);

MediaDecodingConfiguration MediaCapabilitiesDecodingInfo_configuration(const MediaCapabilitiesDecodingInfo *self);

void MediaCapabilitiesDecodingInfo_set_configuration(MediaCapabilitiesDecodingInfo* self, MediaDecodingConfiguration * value);
DECLARE_EMLITE_TYPE(MediaDecodingConfiguration, em_Val);

MediaDecodingType MediaDecodingConfiguration_type(const MediaDecodingConfiguration *self);

void MediaDecodingConfiguration_set_type(MediaDecodingConfiguration* self, MediaDecodingType * value);

jb_Any MediaDecodingConfiguration_keySystemConfiguration(const MediaDecodingConfiguration *self);

void MediaDecodingConfiguration_set_keySystemConfiguration(MediaDecodingConfiguration* self, jb_Any * value);
DECLARE_EMLITE_TYPE(MediaCapabilitiesEncodingInfo, em_Val);

MediaEncodingConfiguration MediaCapabilitiesEncodingInfo_configuration(const MediaCapabilitiesEncodingInfo *self);

void MediaCapabilitiesEncodingInfo_set_configuration(MediaCapabilitiesEncodingInfo* self, MediaEncodingConfiguration * value);
DECLARE_EMLITE_TYPE(MediaEncodingConfiguration, em_Val);

MediaEncodingType MediaEncodingConfiguration_type(const MediaEncodingConfiguration *self);

void MediaEncodingConfiguration_set_type(MediaEncodingConfiguration* self, MediaEncodingType * value);
DECLARE_EMLITE_TYPE(MediaCapabilities, em_Val);

jb_Promise MediaCapabilities_decodingInfo(MediaCapabilities* self , MediaDecodingConfiguration * configuration);

jb_Promise MediaCapabilities_encodingInfo(MediaCapabilities* self , MediaEncodingConfiguration * configuration);
