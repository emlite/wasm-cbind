#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "MIDIPort.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(MIDIOutput, MIDIPort);

jb_Undefined MIDIOutput_send0(MIDIOutput* self , jb_Array * data);

jb_Undefined MIDIOutput_send1(MIDIOutput* self , jb_Array * data, jb_Any * timestamp);

jb_Undefined MIDIOutput_clear(MIDIOutput* self );
