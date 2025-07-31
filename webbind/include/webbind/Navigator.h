#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct AudioSession AudioSession;
typedef struct AudioContext AudioContext;
typedef struct BatteryManager BatteryManager;
typedef struct Clipboard Clipboard;
typedef struct ContactsManager ContactsManager;
typedef struct CredentialsContainer CredentialsContainer;
typedef struct DevicePosture DevicePosture;
typedef struct MediaKeySystemAccess MediaKeySystemAccess;
typedef struct MediaKeySystemConfiguration MediaKeySystemConfiguration;
typedef struct Gamepad Gamepad;
typedef struct Geolocation Geolocation;
typedef struct RelatedApplication RelatedApplication;
typedef struct HandwritingRecognizerQueryResult HandwritingRecognizerQueryResult;
typedef struct HandwritingModelConstraint HandwritingModelConstraint;
typedef struct HandwritingRecognizer HandwritingRecognizer;
typedef struct UserActivation UserActivation;
typedef struct Ink Ink;
typedef struct Scheduling Scheduling;
typedef struct Keyboard Keyboard;
typedef struct NavigatorLogin NavigatorLogin;
typedef struct NavigatorManagedData NavigatorManagedData;
typedef struct MediaCapabilities MediaCapabilities;
typedef struct MediaDevices MediaDevices;
typedef struct PreferenceManager PreferenceManager;
typedef struct MediaSession MediaSession;
typedef struct Permissions Permissions;
typedef struct Presentation Presentation;
typedef struct Attribution Attribution;
typedef struct WakeLock WakeLock;
typedef struct Serial Serial;
typedef struct ServiceWorkerContainer ServiceWorkerContainer;
typedef struct AuctionAdInterestGroup AuctionAdInterestGroup;
typedef struct AuctionAdInterestGroupKey AuctionAdInterestGroupKey;
typedef struct AuctionAdConfig AuctionAdConfig;
typedef struct AdAuctionData AdAuctionData;
typedef struct AdAuctionDataConfig AdAuctionDataConfig;
typedef struct ProtectedAudience ProtectedAudience;
typedef struct VirtualKeyboard VirtualKeyboard;
typedef struct Bluetooth Bluetooth;
typedef struct ShareData ShareData;
typedef struct HID HID;
typedef struct MIDIAccess MIDIAccess;
typedef struct MIDIOptions MIDIOptions;
typedef struct USB USB;
typedef struct XRSystem XRSystem;
typedef struct WindowControlsOverlay WindowControlsOverlay;
typedef struct PluginArray PluginArray;
typedef struct MimeTypeArray MimeTypeArray;
typedef struct NetworkInformation NetworkInformation;
typedef struct StorageBucketManager StorageBucketManager;
typedef struct StorageManager StorageManager;
typedef struct NavigatorUAData NavigatorUAData;
typedef struct LockManager LockManager;
typedef struct GPU GPU;
typedef struct ML ML;
typedef struct File File;
typedef struct AbortSignal AbortSignal;


DECLARE_EMLITE_TYPE(MediaKeySystemConfiguration, em_Val);

jb_String MediaKeySystemConfiguration_label(const MediaKeySystemConfiguration *self);

void MediaKeySystemConfiguration_set_label(MediaKeySystemConfiguration* self, jb_String * value);

jb_Array MediaKeySystemConfiguration_initDataTypes(const MediaKeySystemConfiguration *self);

void MediaKeySystemConfiguration_set_initDataTypes(MediaKeySystemConfiguration* self, jb_Array * value);

jb_Array MediaKeySystemConfiguration_audioCapabilities(const MediaKeySystemConfiguration *self);

void MediaKeySystemConfiguration_set_audioCapabilities(MediaKeySystemConfiguration* self, jb_Array * value);

jb_Array MediaKeySystemConfiguration_videoCapabilities(const MediaKeySystemConfiguration *self);

void MediaKeySystemConfiguration_set_videoCapabilities(MediaKeySystemConfiguration* self, jb_Array * value);

MediaKeysRequirement MediaKeySystemConfiguration_distinctiveIdentifier(const MediaKeySystemConfiguration *self);

void MediaKeySystemConfiguration_set_distinctiveIdentifier(MediaKeySystemConfiguration* self, MediaKeysRequirement * value);

MediaKeysRequirement MediaKeySystemConfiguration_persistentState(const MediaKeySystemConfiguration *self);

void MediaKeySystemConfiguration_set_persistentState(MediaKeySystemConfiguration* self, MediaKeysRequirement * value);

jb_Array MediaKeySystemConfiguration_sessionTypes(const MediaKeySystemConfiguration *self);

void MediaKeySystemConfiguration_set_sessionTypes(MediaKeySystemConfiguration* self, jb_Array * value);
DECLARE_EMLITE_TYPE(RelatedApplication, em_Val);

jb_String RelatedApplication_platform(const RelatedApplication *self);

void RelatedApplication_set_platform(RelatedApplication* self, jb_String * value);

jb_String RelatedApplication_url(const RelatedApplication *self);

void RelatedApplication_set_url(RelatedApplication* self, jb_String * value);

jb_String RelatedApplication_id(const RelatedApplication *self);

void RelatedApplication_set_id(RelatedApplication* self, jb_String * value);

jb_String RelatedApplication_version(const RelatedApplication *self);

void RelatedApplication_set_version(RelatedApplication* self, jb_String * value);
DECLARE_EMLITE_TYPE(HandwritingRecognizerQueryResult, em_Val);

bool HandwritingRecognizerQueryResult_textAlternatives(const HandwritingRecognizerQueryResult *self);

void HandwritingRecognizerQueryResult_set_textAlternatives(HandwritingRecognizerQueryResult* self, bool value);

bool HandwritingRecognizerQueryResult_textSegmentation(const HandwritingRecognizerQueryResult *self);

void HandwritingRecognizerQueryResult_set_textSegmentation(HandwritingRecognizerQueryResult* self, bool value);

jb_Any HandwritingRecognizerQueryResult_hints(const HandwritingRecognizerQueryResult *self);

void HandwritingRecognizerQueryResult_set_hints(HandwritingRecognizerQueryResult* self, jb_Any * value);
DECLARE_EMLITE_TYPE(HandwritingModelConstraint, em_Val);

jb_Array HandwritingModelConstraint_languages(const HandwritingModelConstraint *self);

void HandwritingModelConstraint_set_languages(HandwritingModelConstraint* self, jb_Array * value);
DECLARE_EMLITE_TYPE(AuctionAdInterestGroup, em_Val);

double AuctionAdInterestGroup_priority(const AuctionAdInterestGroup *self);

void AuctionAdInterestGroup_set_priority(AuctionAdInterestGroup* self, double value);

jb_Object AuctionAdInterestGroup_prioritySignalsOverrides(const AuctionAdInterestGroup *self);

void AuctionAdInterestGroup_set_prioritySignalsOverrides(AuctionAdInterestGroup* self, jb_Object * value);

double AuctionAdInterestGroup_lifetimeMs(const AuctionAdInterestGroup *self);

void AuctionAdInterestGroup_set_lifetimeMs(AuctionAdInterestGroup* self, double value);

jb_String AuctionAdInterestGroup_additionalBidKey(const AuctionAdInterestGroup *self);

void AuctionAdInterestGroup_set_additionalBidKey(AuctionAdInterestGroup* self, jb_String * value);

jb_Any AuctionAdInterestGroup_privateAggregationConfig(const AuctionAdInterestGroup *self);

void AuctionAdInterestGroup_set_privateAggregationConfig(AuctionAdInterestGroup* self, jb_Any * value);
DECLARE_EMLITE_TYPE(AuctionAdInterestGroupKey, em_Val);

jb_String AuctionAdInterestGroupKey_owner(const AuctionAdInterestGroupKey *self);

void AuctionAdInterestGroupKey_set_owner(AuctionAdInterestGroupKey* self, jb_String * value);

jb_String AuctionAdInterestGroupKey_name(const AuctionAdInterestGroupKey *self);

void AuctionAdInterestGroupKey_set_name(AuctionAdInterestGroupKey* self, jb_String * value);
DECLARE_EMLITE_TYPE(AuctionAdConfig, em_Val);

jb_String AuctionAdConfig_seller(const AuctionAdConfig *self);

void AuctionAdConfig_set_seller(AuctionAdConfig* self, jb_String * value);

jb_String AuctionAdConfig_decisionLogicURL(const AuctionAdConfig *self);

void AuctionAdConfig_set_decisionLogicURL(AuctionAdConfig* self, jb_String * value);

jb_String AuctionAdConfig_trustedScoringSignalsURL(const AuctionAdConfig *self);

void AuctionAdConfig_set_trustedScoringSignalsURL(AuctionAdConfig* self, jb_String * value);

long AuctionAdConfig_maxTrustedScoringSignalsURLLength(const AuctionAdConfig *self);

void AuctionAdConfig_set_maxTrustedScoringSignalsURLLength(AuctionAdConfig* self, long value);

jb_String AuctionAdConfig_trustedScoringSignalsCoordinator(const AuctionAdConfig *self);

void AuctionAdConfig_set_trustedScoringSignalsCoordinator(AuctionAdConfig* self, jb_String * value);

bool AuctionAdConfig_sendCreativeScanningMetadata(const AuctionAdConfig *self);

void AuctionAdConfig_set_sendCreativeScanningMetadata(AuctionAdConfig* self, bool value);

jb_Array AuctionAdConfig_interestGroupBuyers(const AuctionAdConfig *self);

void AuctionAdConfig_set_interestGroupBuyers(AuctionAdConfig* self, jb_Array * value);

jb_Promise AuctionAdConfig_auctionSignals(const AuctionAdConfig *self);

void AuctionAdConfig_set_auctionSignals(AuctionAdConfig* self, jb_Promise * value);

jb_Promise AuctionAdConfig_sellerSignals(const AuctionAdConfig *self);

void AuctionAdConfig_set_sellerSignals(AuctionAdConfig* self, jb_Promise * value);

jb_Promise AuctionAdConfig_directFromSellerSignalsHeaderAdSlot(const AuctionAdConfig *self);

void AuctionAdConfig_set_directFromSellerSignalsHeaderAdSlot(AuctionAdConfig* self, jb_Promise * value);

jb_Promise AuctionAdConfig_deprecatedRenderURLReplacements(const AuctionAdConfig *self);

void AuctionAdConfig_set_deprecatedRenderURLReplacements(AuctionAdConfig* self, jb_Promise * value);

long long AuctionAdConfig_sellerTimeout(const AuctionAdConfig *self);

void AuctionAdConfig_set_sellerTimeout(AuctionAdConfig* self, long long value);

unsigned short AuctionAdConfig_sellerExperimentGroupId(const AuctionAdConfig *self);

void AuctionAdConfig_set_sellerExperimentGroupId(AuctionAdConfig* self, unsigned short value);

jb_Promise AuctionAdConfig_perBuyerSignals(const AuctionAdConfig *self);

void AuctionAdConfig_set_perBuyerSignals(AuctionAdConfig* self, jb_Promise * value);

jb_Promise AuctionAdConfig_perBuyerTimeouts(const AuctionAdConfig *self);

void AuctionAdConfig_set_perBuyerTimeouts(AuctionAdConfig* self, jb_Promise * value);

jb_Promise AuctionAdConfig_perBuyerCumulativeTimeouts(const AuctionAdConfig *self);

void AuctionAdConfig_set_perBuyerCumulativeTimeouts(AuctionAdConfig* self, jb_Promise * value);

long long AuctionAdConfig_reportingTimeout(const AuctionAdConfig *self);

void AuctionAdConfig_set_reportingTimeout(AuctionAdConfig* self, long long value);

jb_String AuctionAdConfig_sellerCurrency(const AuctionAdConfig *self);

void AuctionAdConfig_set_sellerCurrency(AuctionAdConfig* self, jb_String * value);

jb_Promise AuctionAdConfig_perBuyerCurrencies(const AuctionAdConfig *self);

void AuctionAdConfig_set_perBuyerCurrencies(AuctionAdConfig* self, jb_Promise * value);

jb_Object AuctionAdConfig_perBuyerMultiBidLimits(const AuctionAdConfig *self);

void AuctionAdConfig_set_perBuyerMultiBidLimits(AuctionAdConfig* self, jb_Object * value);

jb_Object AuctionAdConfig_perBuyerGroupLimits(const AuctionAdConfig *self);

void AuctionAdConfig_set_perBuyerGroupLimits(AuctionAdConfig* self, jb_Object * value);

jb_Object AuctionAdConfig_perBuyerExperimentGroupIds(const AuctionAdConfig *self);

void AuctionAdConfig_set_perBuyerExperimentGroupIds(AuctionAdConfig* self, jb_Object * value);

jb_Object AuctionAdConfig_perBuyerPrioritySignals(const AuctionAdConfig *self);

void AuctionAdConfig_set_perBuyerPrioritySignals(AuctionAdConfig* self, jb_Object * value);

jb_Array AuctionAdConfig_auctionReportBuyerKeys(const AuctionAdConfig *self);

void AuctionAdConfig_set_auctionReportBuyerKeys(AuctionAdConfig* self, jb_Array * value);

jb_Object AuctionAdConfig_auctionReportBuyers(const AuctionAdConfig *self);

void AuctionAdConfig_set_auctionReportBuyers(AuctionAdConfig* self, jb_Object * value);

jb_Any AuctionAdConfig_auctionReportBuyerDebugModeConfig(const AuctionAdConfig *self);

void AuctionAdConfig_set_auctionReportBuyerDebugModeConfig(AuctionAdConfig* self, jb_Any * value);

jb_Array AuctionAdConfig_requiredSellerCapabilities(const AuctionAdConfig *self);

void AuctionAdConfig_set_requiredSellerCapabilities(AuctionAdConfig* self, jb_Array * value);

jb_Any AuctionAdConfig_privateAggregationConfig(const AuctionAdConfig *self);

void AuctionAdConfig_set_privateAggregationConfig(AuctionAdConfig* self, jb_Any * value);

jb_Object AuctionAdConfig_requestedSize(const AuctionAdConfig *self);

void AuctionAdConfig_set_requestedSize(AuctionAdConfig* self, jb_Object * value);

jb_Array AuctionAdConfig_allSlotsRequestedSizes(const AuctionAdConfig *self);

void AuctionAdConfig_set_allSlotsRequestedSizes(AuctionAdConfig* self, jb_Array * value);

jb_Promise AuctionAdConfig_additionalBids(const AuctionAdConfig *self);

void AuctionAdConfig_set_additionalBids(AuctionAdConfig* self, jb_Promise * value);

jb_String AuctionAdConfig_auctionNonce(const AuctionAdConfig *self);

void AuctionAdConfig_set_auctionNonce(AuctionAdConfig* self, jb_String * value);

jb_Any AuctionAdConfig_sellerRealTimeReportingConfig(const AuctionAdConfig *self);

void AuctionAdConfig_set_sellerRealTimeReportingConfig(AuctionAdConfig* self, jb_Any * value);

jb_Object AuctionAdConfig_perBuyerRealTimeReportingConfig(const AuctionAdConfig *self);

void AuctionAdConfig_set_perBuyerRealTimeReportingConfig(AuctionAdConfig* self, jb_Object * value);

jb_Array AuctionAdConfig_componentAuctions(const AuctionAdConfig *self);

void AuctionAdConfig_set_componentAuctions(AuctionAdConfig* self, jb_Array * value);

AbortSignal AuctionAdConfig_signal(const AuctionAdConfig *self);

void AuctionAdConfig_set_signal(AuctionAdConfig* self, AbortSignal * value);

jb_Promise AuctionAdConfig_resolveToConfig(const AuctionAdConfig *self);

void AuctionAdConfig_set_resolveToConfig(AuctionAdConfig* self, jb_Promise * value);

jb_Promise AuctionAdConfig_serverResponse(const AuctionAdConfig *self);

void AuctionAdConfig_set_serverResponse(AuctionAdConfig* self, jb_Promise * value);

jb_String AuctionAdConfig_requestId(const AuctionAdConfig *self);

void AuctionAdConfig_set_requestId(AuctionAdConfig* self, jb_String * value);
DECLARE_EMLITE_TYPE(AdAuctionData, em_Val);

jb_String AdAuctionData_requestId(const AdAuctionData *self);

void AdAuctionData_set_requestId(AdAuctionData* self, jb_String * value);

jb_Uint8Array AdAuctionData_request(const AdAuctionData *self);

void AdAuctionData_set_request(AdAuctionData* self, jb_Uint8Array * value);

jb_Array AdAuctionData_requests(const AdAuctionData *self);

void AdAuctionData_set_requests(AdAuctionData* self, jb_Array * value);
DECLARE_EMLITE_TYPE(AdAuctionDataConfig, em_Val);

jb_String AdAuctionDataConfig_seller(const AdAuctionDataConfig *self);

void AdAuctionDataConfig_set_seller(AdAuctionDataConfig* self, jb_String * value);

jb_String AdAuctionDataConfig_coordinatorOrigin(const AdAuctionDataConfig *self);

void AdAuctionDataConfig_set_coordinatorOrigin(AdAuctionDataConfig* self, jb_String * value);

jb_Array AdAuctionDataConfig_sellers(const AdAuctionDataConfig *self);

void AdAuctionDataConfig_set_sellers(AdAuctionDataConfig* self, jb_Array * value);

unsigned long AdAuctionDataConfig_requestSize(const AdAuctionDataConfig *self);

void AdAuctionDataConfig_set_requestSize(AdAuctionDataConfig* self, unsigned long value);

jb_Object AdAuctionDataConfig_perBuyerConfig(const AdAuctionDataConfig *self);

void AdAuctionDataConfig_set_perBuyerConfig(AdAuctionDataConfig* self, jb_Object * value);
DECLARE_EMLITE_TYPE(ShareData, em_Val);

jb_Array ShareData_files(const ShareData *self);

void ShareData_set_files(ShareData* self, jb_Array * value);

jb_String ShareData_title(const ShareData *self);

void ShareData_set_title(ShareData* self, jb_String * value);

jb_String ShareData_text(const ShareData *self);

void ShareData_set_text(ShareData* self, jb_String * value);

jb_String ShareData_url(const ShareData *self);

void ShareData_set_url(ShareData* self, jb_String * value);
DECLARE_EMLITE_TYPE(MIDIOptions, em_Val);

bool MIDIOptions_sysex(const MIDIOptions *self);

void MIDIOptions_set_sysex(MIDIOptions* self, bool value);

bool MIDIOptions_software(const MIDIOptions *self);

void MIDIOptions_set_software(MIDIOptions* self, bool value);
DECLARE_EMLITE_TYPE(Navigator, em_Val);

AudioSession Navigator_audioSession(const Navigator *self);

AutoplayPolicy Navigator_getAutoplayPolicy(Navigator* self , AudioContext * context);

jb_Promise Navigator_getBattery(Navigator* self );

bool Navigator_sendBeacon0(Navigator* self , jb_String * url);

bool Navigator_sendBeacon1(Navigator* self , jb_String * url, jb_Any * data);

Clipboard Navigator_clipboard(const Navigator *self);

ContactsManager Navigator_contacts(const Navigator *self);

CredentialsContainer Navigator_credentials(const Navigator *self);

DevicePosture Navigator_devicePosture(const Navigator *self);

jb_Promise Navigator_requestMediaKeySystemAccess(Navigator* self , jb_String * keySystem, jb_Array * supportedConfigurations);

jb_Promise Navigator_deprecatedReplaceInURN(Navigator* self , jb_Any * urnOrConfig, jb_Object * replacements);

jb_Promise Navigator_deprecatedURNtoURL0(Navigator* self , jb_Any * urnOrConfig);

jb_Promise Navigator_deprecatedURNtoURL1(Navigator* self , jb_Any * urnOrConfig, bool send_reports);

jb_Array Navigator_adAuctionComponents(Navigator* self , unsigned short numAdComponents);

jb_Array Navigator_getGamepads(Navigator* self );

Geolocation Navigator_geolocation(const Navigator *self);

jb_Promise Navigator_getInstalledRelatedApps(Navigator* self );

jb_Promise Navigator_queryHandwritingRecognizer(Navigator* self , HandwritingModelConstraint * constraint);

jb_Promise Navigator_createHandwritingRecognizer(Navigator* self , HandwritingModelConstraint * constraint);

UserActivation Navigator_userActivation(const Navigator *self);

Ink Navigator_ink(const Navigator *self);

Scheduling Navigator_scheduling(const Navigator *self);

Keyboard Navigator_keyboard(const Navigator *self);

NavigatorLogin Navigator_login(const Navigator *self);

NavigatorManagedData Navigator_managed(const Navigator *self);

MediaCapabilities Navigator_mediaCapabilities(const Navigator *self);

MediaDevices Navigator_mediaDevices(const Navigator *self);

PreferenceManager Navigator_preferences(const Navigator *self);

MediaSession Navigator_mediaSession(const Navigator *self);

Permissions Navigator_permissions(const Navigator *self);

long Navigator_maxTouchPoints(const Navigator *self);

Presentation Navigator_presentation(const Navigator *self);

Attribution Navigator_attribution(const Navigator *self);

WakeLock Navigator_wakeLock(const Navigator *self);

Serial Navigator_serial(const Navigator *self);

ServiceWorkerContainer Navigator_serviceWorker(const Navigator *self);

jb_Promise Navigator_joinAdInterestGroup(Navigator* self , AuctionAdInterestGroup * group);

jb_Promise Navigator_leaveAdInterestGroup0(Navigator* self );

jb_Promise Navigator_leaveAdInterestGroup1(Navigator* self , AuctionAdInterestGroupKey * group);

jb_Promise Navigator_clearOriginJoinedAdInterestGroups0(Navigator* self , jb_String * owner);

jb_Promise Navigator_clearOriginJoinedAdInterestGroups1(Navigator* self , jb_String * owner, jb_Array * interestGroupsToKeep);

jb_Promise Navigator_runAdAuction(Navigator* self , AuctionAdConfig * config);

bool Navigator_deprecatedRunAdAuctionEnforcesKAnonymity(const Navigator *self);

bool Navigator_canLoadAdAuctionFencedFrame(Navigator* self );

jb_Promise Navigator_getInterestGroupAdAuctionData0(Navigator* self );

jb_Promise Navigator_getInterestGroupAdAuctionData1(Navigator* self , AdAuctionDataConfig * config);

jb_Promise Navigator_createAuctionNonce(Navigator* self );

jb_Undefined Navigator_updateAdInterestGroups(Navigator* self );

ProtectedAudience Navigator_protectedAudience(const Navigator *self);

bool Navigator_vibrate(Navigator* self , jb_Any * pattern);

VirtualKeyboard Navigator_virtualKeyboard(const Navigator *self);

Bluetooth Navigator_bluetooth(const Navigator *self);

jb_Promise Navigator_share0(Navigator* self );

jb_Promise Navigator_share1(Navigator* self , ShareData * data);

bool Navigator_canShare0(Navigator* self );

bool Navigator_canShare1(Navigator* self , ShareData * data);

HID Navigator_hid(const Navigator *self);

jb_Promise Navigator_requestMIDIAccess0(Navigator* self );

jb_Promise Navigator_requestMIDIAccess1(Navigator* self , MIDIOptions * options);

USB Navigator_usb(const Navigator *self);

XRSystem Navigator_xr(const Navigator *self);

WindowControlsOverlay Navigator_windowControlsOverlay(const Navigator *self);

jb_Promise Navigator_setAppBadge0(Navigator* self );

jb_Promise Navigator_setAppBadge1(Navigator* self , long long contents);

jb_Promise Navigator_clearAppBadge(Navigator* self );

double Navigator_deviceMemory(const Navigator *self);

bool Navigator_globalPrivacyControl(const Navigator *self);

bool Navigator_taintEnabled(Navigator* self );

jb_String Navigator_oscpu(const Navigator *self);

jb_String Navigator_language(const Navigator *self);

jb_Array Navigator_languages(const Navigator *self);

bool Navigator_onLine(const Navigator *self);

jb_Undefined Navigator_registerProtocolHandler(Navigator* self , jb_String * scheme, jb_String * url);

jb_Undefined Navigator_unregisterProtocolHandler(Navigator* self , jb_String * scheme, jb_String * url);

bool Navigator_cookieEnabled(const Navigator *self);

PluginArray Navigator_plugins(const Navigator *self);

MimeTypeArray Navigator_mimeTypes(const Navigator *self);

bool Navigator_javaEnabled(Navigator* self );

bool Navigator_pdfViewerEnabled(const Navigator *self);

long long Navigator_hardwareConcurrency(const Navigator *self);

NetworkInformation Navigator_connection(const Navigator *self);

StorageBucketManager Navigator_storageBuckets(const Navigator *self);

StorageManager Navigator_storage(const Navigator *self);

NavigatorUAData Navigator_userAgentData(const Navigator *self);

LockManager Navigator_locks(const Navigator *self);

bool Navigator_webdriver(const Navigator *self);

GPU Navigator_gpu(const Navigator *self);

ML Navigator_ml(const Navigator *self);
