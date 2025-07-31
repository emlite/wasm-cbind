#include <jsbind/jsbind.h>
#include "DOMException.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(IdentityCredentialError, DOMException);

IdentityCredentialError IdentityCredentialError_new0();

IdentityCredentialError IdentityCredentialError_new1(jb_String * message);

IdentityCredentialError IdentityCredentialError_new2(jb_String * message, jb_Any * options);

jb_String IdentityCredentialError_error(const IdentityCredentialError *self);

jb_String IdentityCredentialError_url(const IdentityCredentialError *self);
