#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CSSUnitValue CSSUnitValue;
typedef struct CSSParserDeclaration CSSParserDeclaration;
typedef struct CSSParserRule CSSParserRule;




bool CSS_supports0(jb_String * property, jb_String * value);
bool CSS_supports1(jb_String * conditionText);










jb_Promise CSS_parseStylesheet0(jb_Any * css);
jb_Promise CSS_parseStylesheet1(jb_Any * css, jb_Any * options);
jb_Promise CSS_parseRuleList0(jb_Any * css);
jb_Promise CSS_parseRuleList1(jb_Any * css, jb_Any * options);
jb_Promise CSS_parseRule0(jb_Any * css);
jb_Promise CSS_parseRule1(jb_Any * css, jb_Any * options);
jb_Promise CSS_parseDeclarationList0(jb_Any * css);
jb_Promise CSS_parseDeclarationList1(jb_Any * css, jb_Any * options);
CSSParserDeclaration CSS_parseDeclaration0(jb_String * css);
CSSParserDeclaration CSS_parseDeclaration1(jb_String * css, jb_Any * options);
jb_Any CSS_parseValue(jb_String * css);
jb_Array CSS_parseValueList(jb_String * css);
jb_Array CSS_parseCommaValueList(jb_String * css);


jb_Undefined CSS_registerProperty(jb_Any * definition);


CSSUnitValue CSS_number(double value);
CSSUnitValue CSS_percent(double value);
CSSUnitValue CSS_cap(double value);
CSSUnitValue CSS_ch(double value);
CSSUnitValue CSS_em(double value);
CSSUnitValue CSS_ex(double value);
CSSUnitValue CSS_ic(double value);
CSSUnitValue CSS_lh(double value);
CSSUnitValue CSS_rcap(double value);
CSSUnitValue CSS_rch(double value);
CSSUnitValue CSS_rem(double value);
CSSUnitValue CSS_rex(double value);
CSSUnitValue CSS_ric(double value);
CSSUnitValue CSS_rlh(double value);
CSSUnitValue CSS_vw(double value);
CSSUnitValue CSS_vh(double value);
CSSUnitValue CSS_vi(double value);
CSSUnitValue CSS_vb(double value);
CSSUnitValue CSS_vmin(double value);
CSSUnitValue CSS_vmax(double value);
CSSUnitValue CSS_svw(double value);
CSSUnitValue CSS_svh(double value);
CSSUnitValue CSS_svi(double value);
CSSUnitValue CSS_svb(double value);
CSSUnitValue CSS_svmin(double value);
CSSUnitValue CSS_svmax(double value);
CSSUnitValue CSS_lvw(double value);
CSSUnitValue CSS_lvh(double value);
CSSUnitValue CSS_lvi(double value);
CSSUnitValue CSS_lvb(double value);
CSSUnitValue CSS_lvmin(double value);
CSSUnitValue CSS_lvmax(double value);
CSSUnitValue CSS_dvw(double value);
CSSUnitValue CSS_dvh(double value);
CSSUnitValue CSS_dvi(double value);
CSSUnitValue CSS_dvb(double value);
CSSUnitValue CSS_dvmin(double value);
CSSUnitValue CSS_dvmax(double value);
CSSUnitValue CSS_cqw(double value);
CSSUnitValue CSS_cqh(double value);
CSSUnitValue CSS_cqi(double value);
CSSUnitValue CSS_cqb(double value);
CSSUnitValue CSS_cqmin(double value);
CSSUnitValue CSS_cqmax(double value);
CSSUnitValue CSS_cm(double value);
CSSUnitValue CSS_mm(double value);
CSSUnitValue CSS_Q(double value);
CSSUnitValue CSS_in(double value);
CSSUnitValue CSS_pt(double value);
CSSUnitValue CSS_pc(double value);
CSSUnitValue CSS_px(double value);
CSSUnitValue CSS_deg(double value);
CSSUnitValue CSS_grad(double value);
CSSUnitValue CSS_rad(double value);
CSSUnitValue CSS_turn(double value);
CSSUnitValue CSS_s(double value);
CSSUnitValue CSS_ms(double value);
CSSUnitValue CSS_Hz(double value);
CSSUnitValue CSS_kHz(double value);
CSSUnitValue CSS_dpi(double value);
CSSUnitValue CSS_dpcm(double value);
CSSUnitValue CSS_dppx(double value);
CSSUnitValue CSS_fr(double value);


jb_String CSS_escape(jb_String * ident);


#ifdef __cplusplus
}
#endif