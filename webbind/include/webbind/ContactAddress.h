#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(ContactAddress, em_Val);

jb_Object ContactAddress_toJSON(ContactAddress* self );

jb_String ContactAddress_city(const ContactAddress *self);

jb_String ContactAddress_country(const ContactAddress *self);

jb_String ContactAddress_dependentLocality(const ContactAddress *self);

jb_String ContactAddress_organization(const ContactAddress *self);

jb_String ContactAddress_phone(const ContactAddress *self);

jb_String ContactAddress_postalCode(const ContactAddress *self);

jb_String ContactAddress_recipient(const ContactAddress *self);

jb_String ContactAddress_region(const ContactAddress *self);

jb_String ContactAddress_sortingCode(const ContactAddress *self);

jb_Array ContactAddress_addressLine(const ContactAddress *self);
