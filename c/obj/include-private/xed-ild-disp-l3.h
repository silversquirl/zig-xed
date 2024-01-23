/// @file include-private/xed-ild-disp-l3.h

// This file was automatically generated.
// Do not edit this file.

#if !defined(INCLUDE_PRIVATE_XED_ILD_DISP_L3_H)
# define INCLUDE_PRIVATE_XED_ILD_DISP_L3_H
/*BEGIN_LEGAL

Copyright (c) 2024 Intel Corporation

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
  
END_LEGAL */
#include "xed-internal-header.h"
void xed_lookup_function_init_BRDISPz_BRDISP_WIDTH(void);

void xed_lookup_function_init_MEMDISPv_DISP_WIDTH(void);

/*Lookup function*/
static XED_INLINE xed_bits_t xed_lookup_function_BRDISP32_BRDISP_WIDTH_l3(void)
{
/*Constant function*/
return 0x20;
}
/*Lookup function*/
static XED_INLINE xed_bits_t xed_lookup_function_BRDISP64_BRDISP_WIDTH_l3(void)
{
/*Constant function*/
return 0x40;
}
/*Lookup function*/
static XED_INLINE xed_bits_t xed_lookup_function_BRDISP8_BRDISP_WIDTH_l3(void)
{
/*Constant function*/
return 0x8;
}
/*Array declaration*/
extern xed_bits_t xed_lookup_BRDISPz_BRDISP_WIDTH[4];

/*Lookup function*/
static XED_INLINE xed_bits_t xed_lookup_function_BRDISPz_BRDISP_WIDTH_l3(xed_bits_t arg_EOSZ)
{
xed_bits_t _v;
xed_assert(arg_EOSZ>=1 && arg_EOSZ<4);
_v=xed_lookup_BRDISPz_BRDISP_WIDTH[arg_EOSZ];
return _v;
}
/*Array declaration*/
extern xed_bits_t xed_lookup_MEMDISPv_DISP_WIDTH[4];

/*Lookup function*/
static XED_INLINE xed_bits_t xed_lookup_function_MEMDISPv_DISP_WIDTH_l3(xed_bits_t arg_EASZ)
{
xed_bits_t _v;
xed_assert(arg_EASZ>=1 && arg_EASZ<4);
_v=xed_lookup_MEMDISPv_DISP_WIDTH[arg_EASZ];
return _v;
}
void xed_ild_disp_l3_init(void);

#endif
