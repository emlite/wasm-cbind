#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLMediaElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(HTMLAudioElement, HTMLMediaElement);

HTMLAudioElement HTMLAudioElement_new();
