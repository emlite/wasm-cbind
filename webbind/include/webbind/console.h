#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


jb_Undefined console_assert0();
jb_Undefined console_assert1(bool condition);
jb_Undefined console_assert2(bool condition, jb_Any * data);
jb_Undefined console_clear();
jb_Undefined console_debug(jb_Any * data);
jb_Undefined console_error(jb_Any * data);
jb_Undefined console_info(jb_Any * data);
jb_Undefined console_log(jb_Any * data);
jb_Undefined console_table0();
jb_Undefined console_table1(jb_Any * tabularData);
jb_Undefined console_table2(jb_Any * tabularData, jb_Array * properties);
jb_Undefined console_trace(jb_Any * data);
jb_Undefined console_warn(jb_Any * data);
jb_Undefined console_dir0();
jb_Undefined console_dir1(jb_Any * item);
jb_Undefined console_dir2(jb_Any * item, jb_Object * options);
jb_Undefined console_dirxml(jb_Any * data);
jb_Undefined console_count0();
jb_Undefined console_count1(jb_String * label);
jb_Undefined console_countReset0();
jb_Undefined console_countReset1(jb_String * label);
jb_Undefined console_group(jb_Any * data);
jb_Undefined console_groupCollapsed(jb_Any * data);
jb_Undefined console_groupEnd();
jb_Undefined console_time0();
jb_Undefined console_time1(jb_String * label);
jb_Undefined console_timeLog0();
jb_Undefined console_timeLog1(jb_String * label);
jb_Undefined console_timeLog2(jb_String * label, jb_Any * data);
jb_Undefined console_timeEnd0();
jb_Undefined console_timeEnd1(jb_String * label);
