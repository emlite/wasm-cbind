#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Node Node;
typedef struct MutationObserverInit MutationObserverInit;
typedef struct MutationRecord MutationRecord;


DECLARE_EMLITE_TYPE(MutationObserverInit, em_Val);

bool MutationObserverInit_childList(const MutationObserverInit *self);

void MutationObserverInit_set_childList(MutationObserverInit* self, bool value);

bool MutationObserverInit_attributes(const MutationObserverInit *self);

void MutationObserverInit_set_attributes(MutationObserverInit* self, bool value);

bool MutationObserverInit_characterData(const MutationObserverInit *self);

void MutationObserverInit_set_characterData(MutationObserverInit* self, bool value);

bool MutationObserverInit_subtree(const MutationObserverInit *self);

void MutationObserverInit_set_subtree(MutationObserverInit* self, bool value);

bool MutationObserverInit_attributeOldValue(const MutationObserverInit *self);

void MutationObserverInit_set_attributeOldValue(MutationObserverInit* self, bool value);

bool MutationObserverInit_characterDataOldValue(const MutationObserverInit *self);

void MutationObserverInit_set_characterDataOldValue(MutationObserverInit* self, bool value);

jb_Array MutationObserverInit_attributeFilter(const MutationObserverInit *self);

void MutationObserverInit_set_attributeFilter(MutationObserverInit* self, jb_Array * value);
DECLARE_EMLITE_TYPE(MutationObserver, em_Val);

MutationObserver MutationObserver_new(jb_Function * callback);

jb_Undefined MutationObserver_observe0(MutationObserver* self , Node * target);

jb_Undefined MutationObserver_observe1(MutationObserver* self , Node * target, MutationObserverInit * options);

jb_Undefined MutationObserver_disconnect(MutationObserver* self );

jb_Array MutationObserver_takeRecords(MutationObserver* self );
