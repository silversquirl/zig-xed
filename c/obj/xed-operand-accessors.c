/// @file xed-operand-accessors.c

// This file was automatically generated.
// Do not edit this file.

#include "xed-operand-accessors.h"
XED_DLL_EXPORT void xed3_get_generic_operand(const xed_decoded_inst_t* d, xed_operand_enum_t operand, void* ret_arg)
{
    switch(operand) {
    case XED_OPERAND_ABSBR:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_absbr(d);
       break;
    case XED_OPERAND_AGEN:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_agen(d);
       break;
    case XED_OPERAND_AMD3DNOW:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_amd3dnow(d);
       break;
    case XED_OPERAND_ASZ:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_asz(d);
       break;
    case XED_OPERAND_BASE0:
       *((xed_reg_enum_t*)ret_arg)=xed3_operand_get_base0(d);
       break;
    case XED_OPERAND_BASE1:
       *((xed_reg_enum_t*)ret_arg)=xed3_operand_get_base1(d);
       break;
    case XED_OPERAND_BCAST:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_bcast(d);
       break;
    case XED_OPERAND_BCRC:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_bcrc(d);
       break;
    case XED_OPERAND_BRDISP_WIDTH:
       *((xed_uint8_t*)ret_arg)=xed3_operand_get_brdisp_width(d);
       break;
    case XED_OPERAND_CET:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_cet(d);
       break;
    case XED_OPERAND_CHIP:
       *((xed_chip_enum_t*)ret_arg)=xed3_operand_get_chip(d);
       break;
    case XED_OPERAND_CLDEMOTE:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_cldemote(d);
       break;
    case XED_OPERAND_DEFAULT_SEG:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_default_seg(d);
       break;
    case XED_OPERAND_DF32:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_df32(d);
       break;
    case XED_OPERAND_DF64:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_df64(d);
       break;
    case XED_OPERAND_DISP:
       *((xed_int64_t*)ret_arg)=xed3_operand_get_disp(d);
       break;
    case XED_OPERAND_DISP_WIDTH:
       *((xed_uint8_t*)ret_arg)=xed3_operand_get_disp_width(d);
       break;
    case XED_OPERAND_DUMMY:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_dummy(d);
       break;
    case XED_OPERAND_EASZ:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_easz(d);
       break;
    case XED_OPERAND_ELEMENT_SIZE:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_element_size(d);
       break;
    case XED_OPERAND_ENCODER_PREFERRED:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_encoder_preferred(d);
       break;
    case XED_OPERAND_ENCODE_FORCE:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_encode_force(d);
       break;
    case XED_OPERAND_EOSZ:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_eosz(d);
       break;
    case XED_OPERAND_ERROR:
       *((xed_error_enum_t*)ret_arg)=xed3_operand_get_error(d);
       break;
    case XED_OPERAND_ESRC:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_esrc(d);
       break;
    case XED_OPERAND_EVVSPACE:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_evvspace(d);
       break;
    case XED_OPERAND_FIRST_F2F3:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_first_f2f3(d);
       break;
    case XED_OPERAND_HAS_EGPR:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_has_egpr(d);
       break;
    case XED_OPERAND_HAS_MODRM:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_has_modrm(d);
       break;
    case XED_OPERAND_HAS_SIB:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_has_sib(d);
       break;
    case XED_OPERAND_HINT:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_hint(d);
       break;
    case XED_OPERAND_ICLASS:
       *((xed_iclass_enum_t*)ret_arg)=xed3_operand_get_iclass(d);
       break;
    case XED_OPERAND_ILD_F2:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_ild_f2(d);
       break;
    case XED_OPERAND_ILD_F3:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_ild_f3(d);
       break;
    case XED_OPERAND_ILD_SEG:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_ild_seg(d);
       break;
    case XED_OPERAND_IMM0:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_imm0(d);
       break;
    case XED_OPERAND_IMM0SIGNED:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_imm0signed(d);
       break;
    case XED_OPERAND_IMM1:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_imm1(d);
       break;
    case XED_OPERAND_IMM1_BYTES:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_imm1_bytes(d);
       break;
    case XED_OPERAND_IMM_WIDTH:
       *((xed_uint8_t*)ret_arg)=xed3_operand_get_imm_width(d);
       break;
    case XED_OPERAND_INDEX:
       *((xed_reg_enum_t*)ret_arg)=xed3_operand_get_index(d);
       break;
    case XED_OPERAND_LAST_F2F3:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_last_f2f3(d);
       break;
    case XED_OPERAND_LLRC:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_llrc(d);
       break;
    case XED_OPERAND_LOCK:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_lock(d);
       break;
    case XED_OPERAND_LZCNT:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_lzcnt(d);
       break;
    case XED_OPERAND_MAP:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_map(d);
       break;
    case XED_OPERAND_MASK:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_mask(d);
       break;
    case XED_OPERAND_MAX_BYTES:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_max_bytes(d);
       break;
    case XED_OPERAND_MEM0:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_mem0(d);
       break;
    case XED_OPERAND_MEM1:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_mem1(d);
       break;
    case XED_OPERAND_MEM_WIDTH:
       *((xed_uint16_t*)ret_arg)=xed3_operand_get_mem_width(d);
       break;
    case XED_OPERAND_MOD:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_mod(d);
       break;
    case XED_OPERAND_MODE:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_mode(d);
       break;
    case XED_OPERAND_MODEP5:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_modep5(d);
       break;
    case XED_OPERAND_MODEP55C:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_modep55c(d);
       break;
    case XED_OPERAND_MODE_FIRST_PREFIX:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_mode_first_prefix(d);
       break;
    case XED_OPERAND_MODE_SHORT_UD0:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_mode_short_ud0(d);
       break;
    case XED_OPERAND_MODRM_BYTE:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_modrm_byte(d);
       break;
    case XED_OPERAND_MPXMODE:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_mpxmode(d);
       break;
    case XED_OPERAND_MUST_USE_EVEX:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_must_use_evex(d);
       break;
    case XED_OPERAND_ND:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_nd(d);
       break;
    case XED_OPERAND_NEEDREX:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_needrex(d);
       break;
    case XED_OPERAND_NEED_MEMDISP:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_need_memdisp(d);
       break;
    case XED_OPERAND_NEED_SIB:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_need_sib(d);
       break;
    case XED_OPERAND_NELEM:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_nelem(d);
       break;
    case XED_OPERAND_NF:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_nf(d);
       break;
    case XED_OPERAND_NOMINAL_OPCODE:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_nominal_opcode(d);
       break;
    case XED_OPERAND_NOREX:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_norex(d);
       break;
    case XED_OPERAND_NOREX2:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_norex2(d);
       break;
    case XED_OPERAND_NO_APX:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_no_apx(d);
       break;
    case XED_OPERAND_NO_EVEX:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_no_evex(d);
       break;
    case XED_OPERAND_NO_VEX:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_no_vex(d);
       break;
    case XED_OPERAND_NPREFIXES:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_nprefixes(d);
       break;
    case XED_OPERAND_NREXES:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_nrexes(d);
       break;
    case XED_OPERAND_NSEG_PREFIXES:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_nseg_prefixes(d);
       break;
    case XED_OPERAND_OSZ:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_osz(d);
       break;
    case XED_OPERAND_OUTREG:
       *((xed_reg_enum_t*)ret_arg)=xed3_operand_get_outreg(d);
       break;
    case XED_OPERAND_OUT_OF_BYTES:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_out_of_bytes(d);
       break;
    case XED_OPERAND_P4:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_p4(d);
       break;
    case XED_OPERAND_POS_DISP:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_pos_disp(d);
       break;
    case XED_OPERAND_POS_IMM:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_pos_imm(d);
       break;
    case XED_OPERAND_POS_IMM1:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_pos_imm1(d);
       break;
    case XED_OPERAND_POS_MODRM:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_pos_modrm(d);
       break;
    case XED_OPERAND_POS_NOMINAL_OPCODE:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_pos_nominal_opcode(d);
       break;
    case XED_OPERAND_POS_SIB:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_pos_sib(d);
       break;
    case XED_OPERAND_PREFIX66:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_prefix66(d);
       break;
    case XED_OPERAND_PTR:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_ptr(d);
       break;
    case XED_OPERAND_REALMODE:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_realmode(d);
       break;
    case XED_OPERAND_REG:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_reg(d);
       break;
    case XED_OPERAND_REG0:
       *((xed_reg_enum_t*)ret_arg)=xed3_operand_get_reg0(d);
       break;
    case XED_OPERAND_REG1:
       *((xed_reg_enum_t*)ret_arg)=xed3_operand_get_reg1(d);
       break;
    case XED_OPERAND_REG2:
       *((xed_reg_enum_t*)ret_arg)=xed3_operand_get_reg2(d);
       break;
    case XED_OPERAND_REG3:
       *((xed_reg_enum_t*)ret_arg)=xed3_operand_get_reg3(d);
       break;
    case XED_OPERAND_REG4:
       *((xed_reg_enum_t*)ret_arg)=xed3_operand_get_reg4(d);
       break;
    case XED_OPERAND_REG5:
       *((xed_reg_enum_t*)ret_arg)=xed3_operand_get_reg5(d);
       break;
    case XED_OPERAND_REG6:
       *((xed_reg_enum_t*)ret_arg)=xed3_operand_get_reg6(d);
       break;
    case XED_OPERAND_REG7:
       *((xed_reg_enum_t*)ret_arg)=xed3_operand_get_reg7(d);
       break;
    case XED_OPERAND_REG8:
       *((xed_reg_enum_t*)ret_arg)=xed3_operand_get_reg8(d);
       break;
    case XED_OPERAND_REG9:
       *((xed_reg_enum_t*)ret_arg)=xed3_operand_get_reg9(d);
       break;
    case XED_OPERAND_RELBR:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_relbr(d);
       break;
    case XED_OPERAND_REP:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_rep(d);
       break;
    case XED_OPERAND_REX:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_rex(d);
       break;
    case XED_OPERAND_REX2:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_rex2(d);
       break;
    case XED_OPERAND_REXB:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_rexb(d);
       break;
    case XED_OPERAND_REXB4:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_rexb4(d);
       break;
    case XED_OPERAND_REXR:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_rexr(d);
       break;
    case XED_OPERAND_REXR4:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_rexr4(d);
       break;
    case XED_OPERAND_REXW:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_rexw(d);
       break;
    case XED_OPERAND_REXX:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_rexx(d);
       break;
    case XED_OPERAND_REXX4:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_rexx4(d);
       break;
    case XED_OPERAND_RM:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_rm(d);
       break;
    case XED_OPERAND_ROUNDC:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_roundc(d);
       break;
    case XED_OPERAND_SAE:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_sae(d);
       break;
    case XED_OPERAND_SCALE:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_scale(d);
       break;
    case XED_OPERAND_SCC:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_scc(d);
       break;
    case XED_OPERAND_SEG0:
       *((xed_reg_enum_t*)ret_arg)=xed3_operand_get_seg0(d);
       break;
    case XED_OPERAND_SEG1:
       *((xed_reg_enum_t*)ret_arg)=xed3_operand_get_seg1(d);
       break;
    case XED_OPERAND_SEG_OVD:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_seg_ovd(d);
       break;
    case XED_OPERAND_SIBBASE:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_sibbase(d);
       break;
    case XED_OPERAND_SIBINDEX:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_sibindex(d);
       break;
    case XED_OPERAND_SIBSCALE:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_sibscale(d);
       break;
    case XED_OPERAND_SKIP_OSZ:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_skip_osz(d);
       break;
    case XED_OPERAND_SMODE:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_smode(d);
       break;
    case XED_OPERAND_SRM:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_srm(d);
       break;
    case XED_OPERAND_TZCNT:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_tzcnt(d);
       break;
    case XED_OPERAND_UBIT:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_ubit(d);
       break;
    case XED_OPERAND_UIMM0:
       *((xed_uint64_t*)ret_arg)=xed3_operand_get_uimm0(d);
       break;
    case XED_OPERAND_UIMM1:
       *((xed_uint8_t*)ret_arg)=xed3_operand_get_uimm1(d);
       break;
    case XED_OPERAND_USING_DEFAULT_SEGMENT0:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_using_default_segment0(d);
       break;
    case XED_OPERAND_USING_DEFAULT_SEGMENT1:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_using_default_segment1(d);
       break;
    case XED_OPERAND_VEXDEST210:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_vexdest210(d);
       break;
    case XED_OPERAND_VEXDEST3:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_vexdest3(d);
       break;
    case XED_OPERAND_VEXDEST4:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_vexdest4(d);
       break;
    case XED_OPERAND_VEXVALID:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_vexvalid(d);
       break;
    case XED_OPERAND_VEX_C4:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_vex_c4(d);
       break;
    case XED_OPERAND_VEX_PREFIX:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_vex_prefix(d);
       break;
    case XED_OPERAND_VL:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_vl(d);
       break;
    case XED_OPERAND_VL_IGN:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_vl_ign(d);
       break;
    case XED_OPERAND_WBNOINVD:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_wbnoinvd(d);
       break;
    case XED_OPERAND_ZEROING:
       *((xed_bits_t*)ret_arg)=xed3_operand_get_zeroing(d);
       break;
    default:
       xed_assert(0);
       break;
    }
}
XED_DLL_EXPORT void xed3_set_generic_operand(xed_decoded_inst_t* d, xed_operand_enum_t operand, xed_uint32_t val)
{
    switch(operand) {
    case XED_OPERAND_ABSBR:
       xed3_operand_set_absbr(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_AGEN:
       xed3_operand_set_agen(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_AMD3DNOW:
       xed3_operand_set_amd3dnow(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_ASZ:
       xed3_operand_set_asz(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_BASE0:
       xed3_operand_set_base0(d,(xed_reg_enum_t)val);
       break;
    case XED_OPERAND_BASE1:
       xed3_operand_set_base1(d,(xed_reg_enum_t)val);
       break;
    case XED_OPERAND_BCAST:
       xed3_operand_set_bcast(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_BCRC:
       xed3_operand_set_bcrc(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_BRDISP_WIDTH:
       xed3_operand_set_brdisp_width(d,(xed_uint8_t)val);
       break;
    case XED_OPERAND_CET:
       xed3_operand_set_cet(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_CHIP:
       xed3_operand_set_chip(d,(xed_chip_enum_t)val);
       break;
    case XED_OPERAND_CLDEMOTE:
       xed3_operand_set_cldemote(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_DEFAULT_SEG:
       xed3_operand_set_default_seg(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_DF32:
       xed3_operand_set_df32(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_DF64:
       xed3_operand_set_df64(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_DISP:
       xed3_operand_set_disp(d,(xed_int64_t)val);
       break;
    case XED_OPERAND_DISP_WIDTH:
       xed3_operand_set_disp_width(d,(xed_uint8_t)val);
       break;
    case XED_OPERAND_DUMMY:
       xed3_operand_set_dummy(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_EASZ:
       xed3_operand_set_easz(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_ELEMENT_SIZE:
       xed3_operand_set_element_size(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_ENCODER_PREFERRED:
       xed3_operand_set_encoder_preferred(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_ENCODE_FORCE:
       xed3_operand_set_encode_force(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_EOSZ:
       xed3_operand_set_eosz(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_ERROR:
       xed3_operand_set_error(d,(xed_error_enum_t)val);
       break;
    case XED_OPERAND_ESRC:
       xed3_operand_set_esrc(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_EVVSPACE:
       xed3_operand_set_evvspace(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_FIRST_F2F3:
       xed3_operand_set_first_f2f3(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_HAS_EGPR:
       xed3_operand_set_has_egpr(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_HAS_MODRM:
       xed3_operand_set_has_modrm(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_HAS_SIB:
       xed3_operand_set_has_sib(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_HINT:
       xed3_operand_set_hint(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_ICLASS:
       xed3_operand_set_iclass(d,(xed_iclass_enum_t)val);
       break;
    case XED_OPERAND_ILD_F2:
       xed3_operand_set_ild_f2(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_ILD_F3:
       xed3_operand_set_ild_f3(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_ILD_SEG:
       xed3_operand_set_ild_seg(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_IMM0:
       xed3_operand_set_imm0(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_IMM0SIGNED:
       xed3_operand_set_imm0signed(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_IMM1:
       xed3_operand_set_imm1(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_IMM1_BYTES:
       xed3_operand_set_imm1_bytes(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_IMM_WIDTH:
       xed3_operand_set_imm_width(d,(xed_uint8_t)val);
       break;
    case XED_OPERAND_INDEX:
       xed3_operand_set_index(d,(xed_reg_enum_t)val);
       break;
    case XED_OPERAND_LAST_F2F3:
       xed3_operand_set_last_f2f3(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_LLRC:
       xed3_operand_set_llrc(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_LOCK:
       xed3_operand_set_lock(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_LZCNT:
       xed3_operand_set_lzcnt(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_MAP:
       xed3_operand_set_map(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_MASK:
       xed3_operand_set_mask(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_MAX_BYTES:
       xed3_operand_set_max_bytes(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_MEM0:
       xed3_operand_set_mem0(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_MEM1:
       xed3_operand_set_mem1(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_MEM_WIDTH:
       xed3_operand_set_mem_width(d,(xed_uint16_t)val);
       break;
    case XED_OPERAND_MOD:
       xed3_operand_set_mod(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_MODE:
       xed3_operand_set_mode(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_MODEP5:
       xed3_operand_set_modep5(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_MODEP55C:
       xed3_operand_set_modep55c(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_MODE_FIRST_PREFIX:
       xed3_operand_set_mode_first_prefix(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_MODE_SHORT_UD0:
       xed3_operand_set_mode_short_ud0(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_MODRM_BYTE:
       xed3_operand_set_modrm_byte(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_MPXMODE:
       xed3_operand_set_mpxmode(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_MUST_USE_EVEX:
       xed3_operand_set_must_use_evex(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_ND:
       xed3_operand_set_nd(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_NEEDREX:
       xed3_operand_set_needrex(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_NEED_MEMDISP:
       xed3_operand_set_need_memdisp(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_NEED_SIB:
       xed3_operand_set_need_sib(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_NELEM:
       xed3_operand_set_nelem(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_NF:
       xed3_operand_set_nf(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_NOMINAL_OPCODE:
       xed3_operand_set_nominal_opcode(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_NOREX:
       xed3_operand_set_norex(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_NOREX2:
       xed3_operand_set_norex2(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_NO_APX:
       xed3_operand_set_no_apx(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_NO_EVEX:
       xed3_operand_set_no_evex(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_NO_VEX:
       xed3_operand_set_no_vex(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_NPREFIXES:
       xed3_operand_set_nprefixes(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_NREXES:
       xed3_operand_set_nrexes(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_NSEG_PREFIXES:
       xed3_operand_set_nseg_prefixes(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_OSZ:
       xed3_operand_set_osz(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_OUTREG:
       xed3_operand_set_outreg(d,(xed_reg_enum_t)val);
       break;
    case XED_OPERAND_OUT_OF_BYTES:
       xed3_operand_set_out_of_bytes(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_P4:
       xed3_operand_set_p4(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_POS_DISP:
       xed3_operand_set_pos_disp(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_POS_IMM:
       xed3_operand_set_pos_imm(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_POS_IMM1:
       xed3_operand_set_pos_imm1(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_POS_MODRM:
       xed3_operand_set_pos_modrm(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_POS_NOMINAL_OPCODE:
       xed3_operand_set_pos_nominal_opcode(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_POS_SIB:
       xed3_operand_set_pos_sib(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_PREFIX66:
       xed3_operand_set_prefix66(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_PTR:
       xed3_operand_set_ptr(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_REALMODE:
       xed3_operand_set_realmode(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_REG:
       xed3_operand_set_reg(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_REG0:
       xed3_operand_set_reg0(d,(xed_reg_enum_t)val);
       break;
    case XED_OPERAND_REG1:
       xed3_operand_set_reg1(d,(xed_reg_enum_t)val);
       break;
    case XED_OPERAND_REG2:
       xed3_operand_set_reg2(d,(xed_reg_enum_t)val);
       break;
    case XED_OPERAND_REG3:
       xed3_operand_set_reg3(d,(xed_reg_enum_t)val);
       break;
    case XED_OPERAND_REG4:
       xed3_operand_set_reg4(d,(xed_reg_enum_t)val);
       break;
    case XED_OPERAND_REG5:
       xed3_operand_set_reg5(d,(xed_reg_enum_t)val);
       break;
    case XED_OPERAND_REG6:
       xed3_operand_set_reg6(d,(xed_reg_enum_t)val);
       break;
    case XED_OPERAND_REG7:
       xed3_operand_set_reg7(d,(xed_reg_enum_t)val);
       break;
    case XED_OPERAND_REG8:
       xed3_operand_set_reg8(d,(xed_reg_enum_t)val);
       break;
    case XED_OPERAND_REG9:
       xed3_operand_set_reg9(d,(xed_reg_enum_t)val);
       break;
    case XED_OPERAND_RELBR:
       xed3_operand_set_relbr(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_REP:
       xed3_operand_set_rep(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_REX:
       xed3_operand_set_rex(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_REX2:
       xed3_operand_set_rex2(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_REXB:
       xed3_operand_set_rexb(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_REXB4:
       xed3_operand_set_rexb4(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_REXR:
       xed3_operand_set_rexr(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_REXR4:
       xed3_operand_set_rexr4(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_REXW:
       xed3_operand_set_rexw(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_REXX:
       xed3_operand_set_rexx(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_REXX4:
       xed3_operand_set_rexx4(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_RM:
       xed3_operand_set_rm(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_ROUNDC:
       xed3_operand_set_roundc(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_SAE:
       xed3_operand_set_sae(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_SCALE:
       xed3_operand_set_scale(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_SCC:
       xed3_operand_set_scc(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_SEG0:
       xed3_operand_set_seg0(d,(xed_reg_enum_t)val);
       break;
    case XED_OPERAND_SEG1:
       xed3_operand_set_seg1(d,(xed_reg_enum_t)val);
       break;
    case XED_OPERAND_SEG_OVD:
       xed3_operand_set_seg_ovd(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_SIBBASE:
       xed3_operand_set_sibbase(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_SIBINDEX:
       xed3_operand_set_sibindex(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_SIBSCALE:
       xed3_operand_set_sibscale(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_SKIP_OSZ:
       xed3_operand_set_skip_osz(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_SMODE:
       xed3_operand_set_smode(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_SRM:
       xed3_operand_set_srm(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_TZCNT:
       xed3_operand_set_tzcnt(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_UBIT:
       xed3_operand_set_ubit(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_UIMM0:
       xed3_operand_set_uimm0(d,(xed_uint64_t)val);
       break;
    case XED_OPERAND_UIMM1:
       xed3_operand_set_uimm1(d,(xed_uint8_t)val);
       break;
    case XED_OPERAND_USING_DEFAULT_SEGMENT0:
       xed3_operand_set_using_default_segment0(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_USING_DEFAULT_SEGMENT1:
       xed3_operand_set_using_default_segment1(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_VEXDEST210:
       xed3_operand_set_vexdest210(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_VEXDEST3:
       xed3_operand_set_vexdest3(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_VEXDEST4:
       xed3_operand_set_vexdest4(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_VEXVALID:
       xed3_operand_set_vexvalid(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_VEX_C4:
       xed3_operand_set_vex_c4(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_VEX_PREFIX:
       xed3_operand_set_vex_prefix(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_VL:
       xed3_operand_set_vl(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_VL_IGN:
       xed3_operand_set_vl_ign(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_WBNOINVD:
       xed3_operand_set_wbnoinvd(d,(xed_bits_t)val);
       break;
    case XED_OPERAND_ZEROING:
       xed3_operand_set_zeroing(d,(xed_bits_t)val);
       break;
    default:
       xed_assert(0);
       break;
    }
}
