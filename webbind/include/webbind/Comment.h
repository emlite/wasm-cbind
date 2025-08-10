#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CharacterData.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(Comment, CharacterData);

Comment Comment_new0();

Comment Comment_new1(jb_String * data);

#ifdef __cplusplus
}
#endif
