/// @file xed-enc-operand-lu.c

// This file was automatically generated.
// Do not edit this file.

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
#include "xed-encode.h"
#include "xed-operand-accessors.h"
XED_NOINLINE xed_uint64_t xed_enc_lu_BASE0_EASZ(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_base0(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_easz(xes)) << ((9));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_DEFAULT_SEG_SEG0(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_default_seg(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_seg0(xes)) << ((2));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_NEED_SIB(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_need_sib(xes)) << ((0));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_EASZ_INDEX(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_easz(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_index(xes)) << ((2));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_NEED_SIB_SCALE(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_need_sib(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_scale(xes)) << ((1));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_DISP_WIDTH_EASZ(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_disp_width(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_easz(xes)) << ((7));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_BASE0_INDEX(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_base0(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_index(xes)) << ((9));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_BASE0_MODE(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_base0(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_mode(xes)) << ((9));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_BASE0_EASZ_MODE(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_base0(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_easz(xes)) << ((9));
   key += ((xed_uint64_t) xed3_operand_get_mode(xes)) << ((11));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_BASE0(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_base0(xes)) << ((0));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_EASZ_NEED_SIB(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_easz(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_need_sib(xes)) << ((2));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_DISP_WIDTH(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_disp_width(xes)) << ((0));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_EOSZ_MODE(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_eosz(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_mode(xes)) << ((2));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_EASZ_MODE(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_easz(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_mode(xes)) << ((2));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_MODE_SMODE(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_mode(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_smode(xes)) << ((2));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_AGEN(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_agen(xes)) << ((0));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_SEG0(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_seg0(xes)) << ((0));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_SEG1(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_seg1(xes)) << ((0));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_MODE(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_mode(xes)) << ((0));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_DF32_DF64_EOSZ_MODE_SKIP_OSZ_VEXVALID(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_df32(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_df64(xes)) << ((1));
   key += ((xed_uint64_t) xed3_operand_get_eosz(xes)) << ((2));
   key += ((xed_uint64_t) xed3_operand_get_mode(xes)) << ((4));
   key += ((xed_uint64_t) xed3_operand_get_skip_osz(xes)) << ((6));
   key += ((xed_uint64_t) xed3_operand_get_vexvalid(xes)) << ((7));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_VEXVALID(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_vexvalid(xes)) << ((0));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_MAP(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_map(xes)) << ((0));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_MODE_REXB_REXX(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_mode(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_rexb(xes)) << ((2));
   key += ((xed_uint64_t) xed3_operand_get_rexx(xes)) << ((3));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_REG_REXR(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_reg(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_rexr(xes)) << ((3));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_REXB_RM(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_rexb(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_rm(xes)) << ((1));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_MODE_REXR(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_mode(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_rexr(xes)) << ((2));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_MODE_REXB_REXX_VEX_C4(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_mode(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_rexb(xes)) << ((2));
   key += ((xed_uint64_t) xed3_operand_get_rexx(xes)) << ((3));
   key += ((xed_uint64_t) xed3_operand_get_vex_c4(xes)) << ((4));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_MAP_VEX_C4(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_map(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_vex_c4(xes)) << ((4));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_VEX_PREFIX_VL(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_vex_prefix(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_vl(xes)) << ((2));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_DUMMY(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_dummy(xes)) << ((0));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_SCALE(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_scale(xes)) << ((0));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_INDEX(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_index(xes)) << ((0));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_MODE_REXX(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_mode(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_rexx(xes)) << ((2));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_MODE_REXB(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_mode(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_rexb(xes)) << ((2));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_MODE_REXR4(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_mode(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_rexr4(xes)) << ((2));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_MAP_MODE_REXB4(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_map(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_mode(xes)) << ((4));
   key += ((xed_uint64_t) xed3_operand_get_rexb4(xes)) << ((6));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_MOD_MODE_REXX4(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_mod(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_mode(xes)) << ((2));
   key += ((xed_uint64_t) xed3_operand_get_rexx4(xes)) << ((4));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_VEX_PREFIX(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_vex_prefix(xes)) << ((0));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_ROUNDC_SAE_VL_VL_IGN(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_roundc(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_sae(xes)) << ((3));
   key += ((xed_uint64_t) xed3_operand_get_vl(xes)) << ((4));
   key += ((xed_uint64_t) xed3_operand_get_vl_ign(xes)) << ((6));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_VEXDEST4(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_vexdest4(xes)) << ((0));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_ROUNDC(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_roundc(xes)) << ((0));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_SAE(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_sae(xes)) << ((0));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_BCAST(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_bcast(xes)) << ((0));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_EVVSPACE(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_evvspace(xes)) << ((0));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_MASK_VEXDEST4(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_mask(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_vexdest4(xes)) << ((3));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_IMM_WIDTH_MODE_UIMM0_1(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_imm_width(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_mode(xes)) << ((7));
   key += ((xed_uint64_t) xed3_operand_get_uimm0_1(xes)) << ((9));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_EOSZ_IMM_WIDTH(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_eosz(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_imm_width(xes)) << ((2));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_IMM_WIDTH(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_imm_width(xes)) << ((0));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_BRDISP_WIDTH(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_brdisp_width(xes)) << ((0));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_BRDISP_WIDTH_EOSZ(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_brdisp_width(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_eosz(xes)) << ((6));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_OUTREG_VEXVALID(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_outreg(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_vexvalid(xes)) << ((9));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_OUTREG(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_outreg(xes)) << ((0));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_MODE_OUTREG(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_mode(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_outreg(xes)) << ((2));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_EASZ_OUTREG(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_easz(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_outreg(xes)) << ((2));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_OUTREG_SMODE(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_outreg(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_smode(xes)) << ((9));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_EOSZ_OUTREG(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_eosz(xes)) << ((0));
   key += ((xed_uint64_t) xed3_operand_get_outreg(xes)) << ((2));
   return key;
}
XED_NOINLINE xed_uint64_t xed_enc_lu_EOSZ(xed_encoder_request_t* xes)
{
   xed_uint64_t key = 0;
   key += ((xed_uint64_t) xed3_operand_get_eosz(xes)) << ((0));
   return key;
}