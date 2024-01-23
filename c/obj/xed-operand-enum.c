/// @file xed-operand-enum.c

// This file was automatically generated.
// Do not edit this file.

#include <string.h>
#include <assert.h>
#include "xed-operand-enum.h"

typedef struct {
    const char* name;
    xed_operand_enum_t value;
} name_table_xed_operand_enum_t;
static const name_table_xed_operand_enum_t name_array_xed_operand_enum_t[] = {
{"INVALID", XED_OPERAND_INVALID},
{"ABSBR", XED_OPERAND_ABSBR},
{"AGEN", XED_OPERAND_AGEN},
{"AMD3DNOW", XED_OPERAND_AMD3DNOW},
{"ASZ", XED_OPERAND_ASZ},
{"BASE0", XED_OPERAND_BASE0},
{"BASE1", XED_OPERAND_BASE1},
{"BCAST", XED_OPERAND_BCAST},
{"BCRC", XED_OPERAND_BCRC},
{"BRDISP_WIDTH", XED_OPERAND_BRDISP_WIDTH},
{"CET", XED_OPERAND_CET},
{"CHIP", XED_OPERAND_CHIP},
{"CLDEMOTE", XED_OPERAND_CLDEMOTE},
{"DEFAULT_SEG", XED_OPERAND_DEFAULT_SEG},
{"DF32", XED_OPERAND_DF32},
{"DF64", XED_OPERAND_DF64},
{"DISP", XED_OPERAND_DISP},
{"DISP_WIDTH", XED_OPERAND_DISP_WIDTH},
{"DUMMY", XED_OPERAND_DUMMY},
{"EASZ", XED_OPERAND_EASZ},
{"ELEMENT_SIZE", XED_OPERAND_ELEMENT_SIZE},
{"ENCODER_PREFERRED", XED_OPERAND_ENCODER_PREFERRED},
{"ENCODE_FORCE", XED_OPERAND_ENCODE_FORCE},
{"EOSZ", XED_OPERAND_EOSZ},
{"ERROR", XED_OPERAND_ERROR},
{"ESRC", XED_OPERAND_ESRC},
{"EVVSPACE", XED_OPERAND_EVVSPACE},
{"FIRST_F2F3", XED_OPERAND_FIRST_F2F3},
{"HAS_EGPR", XED_OPERAND_HAS_EGPR},
{"HAS_MODRM", XED_OPERAND_HAS_MODRM},
{"HAS_SIB", XED_OPERAND_HAS_SIB},
{"HINT", XED_OPERAND_HINT},
{"ICLASS", XED_OPERAND_ICLASS},
{"ILD_F2", XED_OPERAND_ILD_F2},
{"ILD_F3", XED_OPERAND_ILD_F3},
{"ILD_SEG", XED_OPERAND_ILD_SEG},
{"IMM0", XED_OPERAND_IMM0},
{"IMM0SIGNED", XED_OPERAND_IMM0SIGNED},
{"IMM1", XED_OPERAND_IMM1},
{"IMM1_BYTES", XED_OPERAND_IMM1_BYTES},
{"IMM_WIDTH", XED_OPERAND_IMM_WIDTH},
{"INDEX", XED_OPERAND_INDEX},
{"LAST_F2F3", XED_OPERAND_LAST_F2F3},
{"LLRC", XED_OPERAND_LLRC},
{"LOCK", XED_OPERAND_LOCK},
{"LZCNT", XED_OPERAND_LZCNT},
{"MAP", XED_OPERAND_MAP},
{"MASK", XED_OPERAND_MASK},
{"MAX_BYTES", XED_OPERAND_MAX_BYTES},
{"MEM0", XED_OPERAND_MEM0},
{"MEM1", XED_OPERAND_MEM1},
{"MEM_WIDTH", XED_OPERAND_MEM_WIDTH},
{"MOD", XED_OPERAND_MOD},
{"MODE", XED_OPERAND_MODE},
{"MODEP5", XED_OPERAND_MODEP5},
{"MODEP55C", XED_OPERAND_MODEP55C},
{"MODE_FIRST_PREFIX", XED_OPERAND_MODE_FIRST_PREFIX},
{"MODE_SHORT_UD0", XED_OPERAND_MODE_SHORT_UD0},
{"MODRM_BYTE", XED_OPERAND_MODRM_BYTE},
{"MPXMODE", XED_OPERAND_MPXMODE},
{"MUST_USE_EVEX", XED_OPERAND_MUST_USE_EVEX},
{"ND", XED_OPERAND_ND},
{"NEEDREX", XED_OPERAND_NEEDREX},
{"NEED_MEMDISP", XED_OPERAND_NEED_MEMDISP},
{"NEED_SIB", XED_OPERAND_NEED_SIB},
{"NELEM", XED_OPERAND_NELEM},
{"NF", XED_OPERAND_NF},
{"NOMINAL_OPCODE", XED_OPERAND_NOMINAL_OPCODE},
{"NOREX", XED_OPERAND_NOREX},
{"NOREX2", XED_OPERAND_NOREX2},
{"NO_APX", XED_OPERAND_NO_APX},
{"NO_EVEX", XED_OPERAND_NO_EVEX},
{"NO_VEX", XED_OPERAND_NO_VEX},
{"NPREFIXES", XED_OPERAND_NPREFIXES},
{"NREXES", XED_OPERAND_NREXES},
{"NSEG_PREFIXES", XED_OPERAND_NSEG_PREFIXES},
{"OSZ", XED_OPERAND_OSZ},
{"OUTREG", XED_OPERAND_OUTREG},
{"OUT_OF_BYTES", XED_OPERAND_OUT_OF_BYTES},
{"P4", XED_OPERAND_P4},
{"POS_DISP", XED_OPERAND_POS_DISP},
{"POS_IMM", XED_OPERAND_POS_IMM},
{"POS_IMM1", XED_OPERAND_POS_IMM1},
{"POS_MODRM", XED_OPERAND_POS_MODRM},
{"POS_NOMINAL_OPCODE", XED_OPERAND_POS_NOMINAL_OPCODE},
{"POS_SIB", XED_OPERAND_POS_SIB},
{"PREFIX66", XED_OPERAND_PREFIX66},
{"PTR", XED_OPERAND_PTR},
{"REALMODE", XED_OPERAND_REALMODE},
{"REG", XED_OPERAND_REG},
{"REG0", XED_OPERAND_REG0},
{"REG1", XED_OPERAND_REG1},
{"REG2", XED_OPERAND_REG2},
{"REG3", XED_OPERAND_REG3},
{"REG4", XED_OPERAND_REG4},
{"REG5", XED_OPERAND_REG5},
{"REG6", XED_OPERAND_REG6},
{"REG7", XED_OPERAND_REG7},
{"REG8", XED_OPERAND_REG8},
{"REG9", XED_OPERAND_REG9},
{"RELBR", XED_OPERAND_RELBR},
{"REP", XED_OPERAND_REP},
{"REX", XED_OPERAND_REX},
{"REX2", XED_OPERAND_REX2},
{"REXB", XED_OPERAND_REXB},
{"REXB4", XED_OPERAND_REXB4},
{"REXR", XED_OPERAND_REXR},
{"REXR4", XED_OPERAND_REXR4},
{"REXW", XED_OPERAND_REXW},
{"REXX", XED_OPERAND_REXX},
{"REXX4", XED_OPERAND_REXX4},
{"RM", XED_OPERAND_RM},
{"ROUNDC", XED_OPERAND_ROUNDC},
{"SAE", XED_OPERAND_SAE},
{"SCALE", XED_OPERAND_SCALE},
{"SCC", XED_OPERAND_SCC},
{"SEG0", XED_OPERAND_SEG0},
{"SEG1", XED_OPERAND_SEG1},
{"SEG_OVD", XED_OPERAND_SEG_OVD},
{"SIBBASE", XED_OPERAND_SIBBASE},
{"SIBINDEX", XED_OPERAND_SIBINDEX},
{"SIBSCALE", XED_OPERAND_SIBSCALE},
{"SKIP_OSZ", XED_OPERAND_SKIP_OSZ},
{"SMODE", XED_OPERAND_SMODE},
{"SRM", XED_OPERAND_SRM},
{"TZCNT", XED_OPERAND_TZCNT},
{"UBIT", XED_OPERAND_UBIT},
{"UIMM0", XED_OPERAND_UIMM0},
{"UIMM1", XED_OPERAND_UIMM1},
{"USING_DEFAULT_SEGMENT0", XED_OPERAND_USING_DEFAULT_SEGMENT0},
{"USING_DEFAULT_SEGMENT1", XED_OPERAND_USING_DEFAULT_SEGMENT1},
{"VEXDEST210", XED_OPERAND_VEXDEST210},
{"VEXDEST3", XED_OPERAND_VEXDEST3},
{"VEXDEST4", XED_OPERAND_VEXDEST4},
{"VEXVALID", XED_OPERAND_VEXVALID},
{"VEX_C4", XED_OPERAND_VEX_C4},
{"VEX_PREFIX", XED_OPERAND_VEX_PREFIX},
{"VL", XED_OPERAND_VL},
{"VL_IGN", XED_OPERAND_VL_IGN},
{"WBNOINVD", XED_OPERAND_WBNOINVD},
{"ZEROING", XED_OPERAND_ZEROING},
{"LAST", XED_OPERAND_LAST},
{0, XED_OPERAND_LAST},
};

        
xed_operand_enum_t str2xed_operand_enum_t(const char* s)
{
   const name_table_xed_operand_enum_t* p = name_array_xed_operand_enum_t;
   while( p->name ) {
     if (strcmp(p->name,s) == 0) {
      return p->value;
     }
     p++;
   }
        

   return XED_OPERAND_INVALID;
}


const char* xed_operand_enum_t2str(const xed_operand_enum_t p)
{
   xed_operand_enum_t type_idx = p;
   if ( p > XED_OPERAND_LAST) type_idx = XED_OPERAND_LAST;
   return name_array_xed_operand_enum_t[type_idx].name;
}

xed_operand_enum_t xed_operand_enum_t_last(void) {
    return XED_OPERAND_LAST;
}
       
/*

Here is a skeleton switch statement embedded in a comment


  switch(p) {
  case XED_OPERAND_INVALID:
  case XED_OPERAND_ABSBR:
  case XED_OPERAND_AGEN:
  case XED_OPERAND_AMD3DNOW:
  case XED_OPERAND_ASZ:
  case XED_OPERAND_BASE0:
  case XED_OPERAND_BASE1:
  case XED_OPERAND_BCAST:
  case XED_OPERAND_BCRC:
  case XED_OPERAND_BRDISP_WIDTH:
  case XED_OPERAND_CET:
  case XED_OPERAND_CHIP:
  case XED_OPERAND_CLDEMOTE:
  case XED_OPERAND_DEFAULT_SEG:
  case XED_OPERAND_DF32:
  case XED_OPERAND_DF64:
  case XED_OPERAND_DISP:
  case XED_OPERAND_DISP_WIDTH:
  case XED_OPERAND_DUMMY:
  case XED_OPERAND_EASZ:
  case XED_OPERAND_ELEMENT_SIZE:
  case XED_OPERAND_ENCODER_PREFERRED:
  case XED_OPERAND_ENCODE_FORCE:
  case XED_OPERAND_EOSZ:
  case XED_OPERAND_ERROR:
  case XED_OPERAND_ESRC:
  case XED_OPERAND_EVVSPACE:
  case XED_OPERAND_FIRST_F2F3:
  case XED_OPERAND_HAS_EGPR:
  case XED_OPERAND_HAS_MODRM:
  case XED_OPERAND_HAS_SIB:
  case XED_OPERAND_HINT:
  case XED_OPERAND_ICLASS:
  case XED_OPERAND_ILD_F2:
  case XED_OPERAND_ILD_F3:
  case XED_OPERAND_ILD_SEG:
  case XED_OPERAND_IMM0:
  case XED_OPERAND_IMM0SIGNED:
  case XED_OPERAND_IMM1:
  case XED_OPERAND_IMM1_BYTES:
  case XED_OPERAND_IMM_WIDTH:
  case XED_OPERAND_INDEX:
  case XED_OPERAND_LAST_F2F3:
  case XED_OPERAND_LLRC:
  case XED_OPERAND_LOCK:
  case XED_OPERAND_LZCNT:
  case XED_OPERAND_MAP:
  case XED_OPERAND_MASK:
  case XED_OPERAND_MAX_BYTES:
  case XED_OPERAND_MEM0:
  case XED_OPERAND_MEM1:
  case XED_OPERAND_MEM_WIDTH:
  case XED_OPERAND_MOD:
  case XED_OPERAND_MODE:
  case XED_OPERAND_MODEP5:
  case XED_OPERAND_MODEP55C:
  case XED_OPERAND_MODE_FIRST_PREFIX:
  case XED_OPERAND_MODE_SHORT_UD0:
  case XED_OPERAND_MODRM_BYTE:
  case XED_OPERAND_MPXMODE:
  case XED_OPERAND_MUST_USE_EVEX:
  case XED_OPERAND_ND:
  case XED_OPERAND_NEEDREX:
  case XED_OPERAND_NEED_MEMDISP:
  case XED_OPERAND_NEED_SIB:
  case XED_OPERAND_NELEM:
  case XED_OPERAND_NF:
  case XED_OPERAND_NOMINAL_OPCODE:
  case XED_OPERAND_NOREX:
  case XED_OPERAND_NOREX2:
  case XED_OPERAND_NO_APX:
  case XED_OPERAND_NO_EVEX:
  case XED_OPERAND_NO_VEX:
  case XED_OPERAND_NPREFIXES:
  case XED_OPERAND_NREXES:
  case XED_OPERAND_NSEG_PREFIXES:
  case XED_OPERAND_OSZ:
  case XED_OPERAND_OUTREG:
  case XED_OPERAND_OUT_OF_BYTES:
  case XED_OPERAND_P4:
  case XED_OPERAND_POS_DISP:
  case XED_OPERAND_POS_IMM:
  case XED_OPERAND_POS_IMM1:
  case XED_OPERAND_POS_MODRM:
  case XED_OPERAND_POS_NOMINAL_OPCODE:
  case XED_OPERAND_POS_SIB:
  case XED_OPERAND_PREFIX66:
  case XED_OPERAND_PTR:
  case XED_OPERAND_REALMODE:
  case XED_OPERAND_REG:
  case XED_OPERAND_REG0:
  case XED_OPERAND_REG1:
  case XED_OPERAND_REG2:
  case XED_OPERAND_REG3:
  case XED_OPERAND_REG4:
  case XED_OPERAND_REG5:
  case XED_OPERAND_REG6:
  case XED_OPERAND_REG7:
  case XED_OPERAND_REG8:
  case XED_OPERAND_REG9:
  case XED_OPERAND_RELBR:
  case XED_OPERAND_REP:
  case XED_OPERAND_REX:
  case XED_OPERAND_REX2:
  case XED_OPERAND_REXB:
  case XED_OPERAND_REXB4:
  case XED_OPERAND_REXR:
  case XED_OPERAND_REXR4:
  case XED_OPERAND_REXW:
  case XED_OPERAND_REXX:
  case XED_OPERAND_REXX4:
  case XED_OPERAND_RM:
  case XED_OPERAND_ROUNDC:
  case XED_OPERAND_SAE:
  case XED_OPERAND_SCALE:
  case XED_OPERAND_SCC:
  case XED_OPERAND_SEG0:
  case XED_OPERAND_SEG1:
  case XED_OPERAND_SEG_OVD:
  case XED_OPERAND_SIBBASE:
  case XED_OPERAND_SIBINDEX:
  case XED_OPERAND_SIBSCALE:
  case XED_OPERAND_SKIP_OSZ:
  case XED_OPERAND_SMODE:
  case XED_OPERAND_SRM:
  case XED_OPERAND_TZCNT:
  case XED_OPERAND_UBIT:
  case XED_OPERAND_UIMM0:
  case XED_OPERAND_UIMM1:
  case XED_OPERAND_USING_DEFAULT_SEGMENT0:
  case XED_OPERAND_USING_DEFAULT_SEGMENT1:
  case XED_OPERAND_VEXDEST210:
  case XED_OPERAND_VEXDEST3:
  case XED_OPERAND_VEXDEST4:
  case XED_OPERAND_VEXVALID:
  case XED_OPERAND_VEX_C4:
  case XED_OPERAND_VEX_PREFIX:
  case XED_OPERAND_VL:
  case XED_OPERAND_VL_IGN:
  case XED_OPERAND_WBNOINVD:
  case XED_OPERAND_ZEROING:
  case XED_OPERAND_LAST:
  default:
     xed_assert(0);
  }
*/
