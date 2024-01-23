/// @file xed-isa-set-enum.c

// This file was automatically generated.
// Do not edit this file.

#include <string.h>
#include <assert.h>
#include "xed-isa-set-enum.h"

typedef struct {
    const char* name;
    xed_isa_set_enum_t value;
} name_table_xed_isa_set_enum_t;
static const name_table_xed_isa_set_enum_t name_array_xed_isa_set_enum_t[] = {
{"INVALID", XED_ISA_SET_INVALID},
{"3DNOW", XED_ISA_SET_3DNOW},
{"ADOX_ADCX", XED_ISA_SET_ADOX_ADCX},
{"AES", XED_ISA_SET_AES},
{"AMD", XED_ISA_SET_AMD},
{"AMD_INVLPGB", XED_ISA_SET_AMD_INVLPGB},
{"AMX_BF16", XED_ISA_SET_AMX_BF16},
{"AMX_COMPLEX", XED_ISA_SET_AMX_COMPLEX},
{"AMX_FP16", XED_ISA_SET_AMX_FP16},
{"AMX_INT8", XED_ISA_SET_AMX_INT8},
{"AMX_TILE", XED_ISA_SET_AMX_TILE},
{"APX_F", XED_ISA_SET_APX_F},
{"APX_F_ADX", XED_ISA_SET_APX_F_ADX},
{"APX_F_AMX", XED_ISA_SET_APX_F_AMX},
{"APX_F_BMI1", XED_ISA_SET_APX_F_BMI1},
{"APX_F_BMI2", XED_ISA_SET_APX_F_BMI2},
{"APX_F_CET", XED_ISA_SET_APX_F_CET},
{"APX_F_CMPCCXADD", XED_ISA_SET_APX_F_CMPCCXADD},
{"APX_F_ENQCMD", XED_ISA_SET_APX_F_ENQCMD},
{"APX_F_INVPCID", XED_ISA_SET_APX_F_INVPCID},
{"APX_F_KEYLOCKER", XED_ISA_SET_APX_F_KEYLOCKER},
{"APX_F_KEYLOCKER_WIDE", XED_ISA_SET_APX_F_KEYLOCKER_WIDE},
{"APX_F_KOPB", XED_ISA_SET_APX_F_KOPB},
{"APX_F_KOPD", XED_ISA_SET_APX_F_KOPD},
{"APX_F_KOPQ", XED_ISA_SET_APX_F_KOPQ},
{"APX_F_KOPW", XED_ISA_SET_APX_F_KOPW},
{"APX_F_LZCNT", XED_ISA_SET_APX_F_LZCNT},
{"APX_F_MOVBE", XED_ISA_SET_APX_F_MOVBE},
{"APX_F_MOVDIR64B", XED_ISA_SET_APX_F_MOVDIR64B},
{"APX_F_MOVDIRI", XED_ISA_SET_APX_F_MOVDIRI},
{"APX_F_RAO_INT", XED_ISA_SET_APX_F_RAO_INT},
{"APX_F_SHA", XED_ISA_SET_APX_F_SHA},
{"APX_F_USER_MSR", XED_ISA_SET_APX_F_USER_MSR},
{"APX_F_VMX", XED_ISA_SET_APX_F_VMX},
{"AVX", XED_ISA_SET_AVX},
{"AVX2", XED_ISA_SET_AVX2},
{"AVX2GATHER", XED_ISA_SET_AVX2GATHER},
{"AVX512BW_128", XED_ISA_SET_AVX512BW_128},
{"AVX512BW_128N", XED_ISA_SET_AVX512BW_128N},
{"AVX512BW_256", XED_ISA_SET_AVX512BW_256},
{"AVX512BW_512", XED_ISA_SET_AVX512BW_512},
{"AVX512BW_KOPD", XED_ISA_SET_AVX512BW_KOPD},
{"AVX512BW_KOPQ", XED_ISA_SET_AVX512BW_KOPQ},
{"AVX512CD_128", XED_ISA_SET_AVX512CD_128},
{"AVX512CD_256", XED_ISA_SET_AVX512CD_256},
{"AVX512CD_512", XED_ISA_SET_AVX512CD_512},
{"AVX512DQ_128", XED_ISA_SET_AVX512DQ_128},
{"AVX512DQ_128N", XED_ISA_SET_AVX512DQ_128N},
{"AVX512DQ_256", XED_ISA_SET_AVX512DQ_256},
{"AVX512DQ_512", XED_ISA_SET_AVX512DQ_512},
{"AVX512DQ_KOPB", XED_ISA_SET_AVX512DQ_KOPB},
{"AVX512DQ_KOPW", XED_ISA_SET_AVX512DQ_KOPW},
{"AVX512DQ_SCALAR", XED_ISA_SET_AVX512DQ_SCALAR},
{"AVX512ER_512", XED_ISA_SET_AVX512ER_512},
{"AVX512ER_SCALAR", XED_ISA_SET_AVX512ER_SCALAR},
{"AVX512F_128", XED_ISA_SET_AVX512F_128},
{"AVX512F_128N", XED_ISA_SET_AVX512F_128N},
{"AVX512F_256", XED_ISA_SET_AVX512F_256},
{"AVX512F_512", XED_ISA_SET_AVX512F_512},
{"AVX512F_KOPW", XED_ISA_SET_AVX512F_KOPW},
{"AVX512F_SCALAR", XED_ISA_SET_AVX512F_SCALAR},
{"AVX512PF_512", XED_ISA_SET_AVX512PF_512},
{"AVX512_4FMAPS_512", XED_ISA_SET_AVX512_4FMAPS_512},
{"AVX512_4FMAPS_SCALAR", XED_ISA_SET_AVX512_4FMAPS_SCALAR},
{"AVX512_4VNNIW_512", XED_ISA_SET_AVX512_4VNNIW_512},
{"AVX512_BF16_128", XED_ISA_SET_AVX512_BF16_128},
{"AVX512_BF16_256", XED_ISA_SET_AVX512_BF16_256},
{"AVX512_BF16_512", XED_ISA_SET_AVX512_BF16_512},
{"AVX512_BITALG_128", XED_ISA_SET_AVX512_BITALG_128},
{"AVX512_BITALG_256", XED_ISA_SET_AVX512_BITALG_256},
{"AVX512_BITALG_512", XED_ISA_SET_AVX512_BITALG_512},
{"AVX512_FP16_128", XED_ISA_SET_AVX512_FP16_128},
{"AVX512_FP16_128N", XED_ISA_SET_AVX512_FP16_128N},
{"AVX512_FP16_256", XED_ISA_SET_AVX512_FP16_256},
{"AVX512_FP16_512", XED_ISA_SET_AVX512_FP16_512},
{"AVX512_FP16_SCALAR", XED_ISA_SET_AVX512_FP16_SCALAR},
{"AVX512_GFNI_128", XED_ISA_SET_AVX512_GFNI_128},
{"AVX512_GFNI_256", XED_ISA_SET_AVX512_GFNI_256},
{"AVX512_GFNI_512", XED_ISA_SET_AVX512_GFNI_512},
{"AVX512_IFMA_128", XED_ISA_SET_AVX512_IFMA_128},
{"AVX512_IFMA_256", XED_ISA_SET_AVX512_IFMA_256},
{"AVX512_IFMA_512", XED_ISA_SET_AVX512_IFMA_512},
{"AVX512_VAES_128", XED_ISA_SET_AVX512_VAES_128},
{"AVX512_VAES_256", XED_ISA_SET_AVX512_VAES_256},
{"AVX512_VAES_512", XED_ISA_SET_AVX512_VAES_512},
{"AVX512_VBMI2_128", XED_ISA_SET_AVX512_VBMI2_128},
{"AVX512_VBMI2_256", XED_ISA_SET_AVX512_VBMI2_256},
{"AVX512_VBMI2_512", XED_ISA_SET_AVX512_VBMI2_512},
{"AVX512_VBMI_128", XED_ISA_SET_AVX512_VBMI_128},
{"AVX512_VBMI_256", XED_ISA_SET_AVX512_VBMI_256},
{"AVX512_VBMI_512", XED_ISA_SET_AVX512_VBMI_512},
{"AVX512_VNNI_128", XED_ISA_SET_AVX512_VNNI_128},
{"AVX512_VNNI_256", XED_ISA_SET_AVX512_VNNI_256},
{"AVX512_VNNI_512", XED_ISA_SET_AVX512_VNNI_512},
{"AVX512_VP2INTERSECT_128", XED_ISA_SET_AVX512_VP2INTERSECT_128},
{"AVX512_VP2INTERSECT_256", XED_ISA_SET_AVX512_VP2INTERSECT_256},
{"AVX512_VP2INTERSECT_512", XED_ISA_SET_AVX512_VP2INTERSECT_512},
{"AVX512_VPCLMULQDQ_128", XED_ISA_SET_AVX512_VPCLMULQDQ_128},
{"AVX512_VPCLMULQDQ_256", XED_ISA_SET_AVX512_VPCLMULQDQ_256},
{"AVX512_VPCLMULQDQ_512", XED_ISA_SET_AVX512_VPCLMULQDQ_512},
{"AVX512_VPOPCNTDQ_128", XED_ISA_SET_AVX512_VPOPCNTDQ_128},
{"AVX512_VPOPCNTDQ_256", XED_ISA_SET_AVX512_VPOPCNTDQ_256},
{"AVX512_VPOPCNTDQ_512", XED_ISA_SET_AVX512_VPOPCNTDQ_512},
{"AVXAES", XED_ISA_SET_AVXAES},
{"AVX_GFNI", XED_ISA_SET_AVX_GFNI},
{"AVX_IFMA", XED_ISA_SET_AVX_IFMA},
{"AVX_NE_CONVERT", XED_ISA_SET_AVX_NE_CONVERT},
{"AVX_VNNI", XED_ISA_SET_AVX_VNNI},
{"AVX_VNNI_INT16", XED_ISA_SET_AVX_VNNI_INT16},
{"AVX_VNNI_INT8", XED_ISA_SET_AVX_VNNI_INT8},
{"BMI1", XED_ISA_SET_BMI1},
{"BMI2", XED_ISA_SET_BMI2},
{"CET", XED_ISA_SET_CET},
{"CLDEMOTE", XED_ISA_SET_CLDEMOTE},
{"CLFLUSHOPT", XED_ISA_SET_CLFLUSHOPT},
{"CLFSH", XED_ISA_SET_CLFSH},
{"CLWB", XED_ISA_SET_CLWB},
{"CLZERO", XED_ISA_SET_CLZERO},
{"CMOV", XED_ISA_SET_CMOV},
{"CMPCCXADD", XED_ISA_SET_CMPCCXADD},
{"CMPXCHG16B", XED_ISA_SET_CMPXCHG16B},
{"ENQCMD", XED_ISA_SET_ENQCMD},
{"F16C", XED_ISA_SET_F16C},
{"FAT_NOP", XED_ISA_SET_FAT_NOP},
{"FCMOV", XED_ISA_SET_FCMOV},
{"FCOMI", XED_ISA_SET_FCOMI},
{"FMA", XED_ISA_SET_FMA},
{"FMA4", XED_ISA_SET_FMA4},
{"FRED", XED_ISA_SET_FRED},
{"FXSAVE", XED_ISA_SET_FXSAVE},
{"FXSAVE64", XED_ISA_SET_FXSAVE64},
{"GFNI", XED_ISA_SET_GFNI},
{"HRESET", XED_ISA_SET_HRESET},
{"I186", XED_ISA_SET_I186},
{"I286PROTECTED", XED_ISA_SET_I286PROTECTED},
{"I286REAL", XED_ISA_SET_I286REAL},
{"I386", XED_ISA_SET_I386},
{"I486", XED_ISA_SET_I486},
{"I486REAL", XED_ISA_SET_I486REAL},
{"I86", XED_ISA_SET_I86},
{"ICACHE_PREFETCH", XED_ISA_SET_ICACHE_PREFETCH},
{"INVPCID", XED_ISA_SET_INVPCID},
{"KEYLOCKER", XED_ISA_SET_KEYLOCKER},
{"KEYLOCKER_WIDE", XED_ISA_SET_KEYLOCKER_WIDE},
{"LAHF", XED_ISA_SET_LAHF},
{"LKGS", XED_ISA_SET_LKGS},
{"LONGMODE", XED_ISA_SET_LONGMODE},
{"LWP", XED_ISA_SET_LWP},
{"LZCNT", XED_ISA_SET_LZCNT},
{"MCOMMIT", XED_ISA_SET_MCOMMIT},
{"MONITOR", XED_ISA_SET_MONITOR},
{"MONITORX", XED_ISA_SET_MONITORX},
{"MOVBE", XED_ISA_SET_MOVBE},
{"MOVDIR64B", XED_ISA_SET_MOVDIR64B},
{"MOVDIRI", XED_ISA_SET_MOVDIRI},
{"MPX", XED_ISA_SET_MPX},
{"MSRLIST", XED_ISA_SET_MSRLIST},
{"PAUSE", XED_ISA_SET_PAUSE},
{"PBNDKB", XED_ISA_SET_PBNDKB},
{"PCLMULQDQ", XED_ISA_SET_PCLMULQDQ},
{"PCONFIG", XED_ISA_SET_PCONFIG},
{"PENTIUMMMX", XED_ISA_SET_PENTIUMMMX},
{"PENTIUMREAL", XED_ISA_SET_PENTIUMREAL},
{"PKU", XED_ISA_SET_PKU},
{"POPCNT", XED_ISA_SET_POPCNT},
{"PPRO", XED_ISA_SET_PPRO},
{"PPRO_UD0_LONG", XED_ISA_SET_PPRO_UD0_LONG},
{"PPRO_UD0_SHORT", XED_ISA_SET_PPRO_UD0_SHORT},
{"PREFETCHW", XED_ISA_SET_PREFETCHW},
{"PREFETCHWT1", XED_ISA_SET_PREFETCHWT1},
{"PREFETCH_NOP", XED_ISA_SET_PREFETCH_NOP},
{"PTWRITE", XED_ISA_SET_PTWRITE},
{"RAO_INT", XED_ISA_SET_RAO_INT},
{"RDPID", XED_ISA_SET_RDPID},
{"RDPMC", XED_ISA_SET_RDPMC},
{"RDPRU", XED_ISA_SET_RDPRU},
{"RDRAND", XED_ISA_SET_RDRAND},
{"RDSEED", XED_ISA_SET_RDSEED},
{"RDTSCP", XED_ISA_SET_RDTSCP},
{"RDWRFSGS", XED_ISA_SET_RDWRFSGS},
{"RTM", XED_ISA_SET_RTM},
{"SERIALIZE", XED_ISA_SET_SERIALIZE},
{"SGX", XED_ISA_SET_SGX},
{"SGX_ENCLV", XED_ISA_SET_SGX_ENCLV},
{"SHA", XED_ISA_SET_SHA},
{"SHA512", XED_ISA_SET_SHA512},
{"SM3", XED_ISA_SET_SM3},
{"SM4", XED_ISA_SET_SM4},
{"SMAP", XED_ISA_SET_SMAP},
{"SMX", XED_ISA_SET_SMX},
{"SNP", XED_ISA_SET_SNP},
{"SSE", XED_ISA_SET_SSE},
{"SSE2", XED_ISA_SET_SSE2},
{"SSE2MMX", XED_ISA_SET_SSE2MMX},
{"SSE3", XED_ISA_SET_SSE3},
{"SSE3X87", XED_ISA_SET_SSE3X87},
{"SSE4", XED_ISA_SET_SSE4},
{"SSE42", XED_ISA_SET_SSE42},
{"SSE4A", XED_ISA_SET_SSE4A},
{"SSEMXCSR", XED_ISA_SET_SSEMXCSR},
{"SSE_PREFETCH", XED_ISA_SET_SSE_PREFETCH},
{"SSSE3", XED_ISA_SET_SSSE3},
{"SSSE3MMX", XED_ISA_SET_SSSE3MMX},
{"SVM", XED_ISA_SET_SVM},
{"TBM", XED_ISA_SET_TBM},
{"TDX", XED_ISA_SET_TDX},
{"TSX_LDTRK", XED_ISA_SET_TSX_LDTRK},
{"UINTR", XED_ISA_SET_UINTR},
{"USER_MSR", XED_ISA_SET_USER_MSR},
{"VAES", XED_ISA_SET_VAES},
{"VIA_PADLOCK_AES", XED_ISA_SET_VIA_PADLOCK_AES},
{"VIA_PADLOCK_MONTMUL", XED_ISA_SET_VIA_PADLOCK_MONTMUL},
{"VIA_PADLOCK_RNG", XED_ISA_SET_VIA_PADLOCK_RNG},
{"VIA_PADLOCK_SHA", XED_ISA_SET_VIA_PADLOCK_SHA},
{"VMFUNC", XED_ISA_SET_VMFUNC},
{"VPCLMULQDQ", XED_ISA_SET_VPCLMULQDQ},
{"VTX", XED_ISA_SET_VTX},
{"WAITPKG", XED_ISA_SET_WAITPKG},
{"WBNOINVD", XED_ISA_SET_WBNOINVD},
{"WRMSRNS", XED_ISA_SET_WRMSRNS},
{"X87", XED_ISA_SET_X87},
{"XOP", XED_ISA_SET_XOP},
{"XSAVE", XED_ISA_SET_XSAVE},
{"XSAVEC", XED_ISA_SET_XSAVEC},
{"XSAVEOPT", XED_ISA_SET_XSAVEOPT},
{"XSAVES", XED_ISA_SET_XSAVES},
{"LAST", XED_ISA_SET_LAST},
{0, XED_ISA_SET_LAST},
};

        
xed_isa_set_enum_t str2xed_isa_set_enum_t(const char* s)
{
   const name_table_xed_isa_set_enum_t* p = name_array_xed_isa_set_enum_t;
   while( p->name ) {
     if (strcmp(p->name,s) == 0) {
      return p->value;
     }
     p++;
   }
        

   return XED_ISA_SET_INVALID;
}


const char* xed_isa_set_enum_t2str(const xed_isa_set_enum_t p)
{
   xed_isa_set_enum_t type_idx = p;
   if ( p > XED_ISA_SET_LAST) type_idx = XED_ISA_SET_LAST;
   return name_array_xed_isa_set_enum_t[type_idx].name;
}

xed_isa_set_enum_t xed_isa_set_enum_t_last(void) {
    return XED_ISA_SET_LAST;
}
       
/*

Here is a skeleton switch statement embedded in a comment


  switch(p) {
  case XED_ISA_SET_INVALID:
  case XED_ISA_SET_3DNOW:
  case XED_ISA_SET_ADOX_ADCX:
  case XED_ISA_SET_AES:
  case XED_ISA_SET_AMD:
  case XED_ISA_SET_AMD_INVLPGB:
  case XED_ISA_SET_AMX_BF16:
  case XED_ISA_SET_AMX_COMPLEX:
  case XED_ISA_SET_AMX_FP16:
  case XED_ISA_SET_AMX_INT8:
  case XED_ISA_SET_AMX_TILE:
  case XED_ISA_SET_APX_F:
  case XED_ISA_SET_APX_F_ADX:
  case XED_ISA_SET_APX_F_AMX:
  case XED_ISA_SET_APX_F_BMI1:
  case XED_ISA_SET_APX_F_BMI2:
  case XED_ISA_SET_APX_F_CET:
  case XED_ISA_SET_APX_F_CMPCCXADD:
  case XED_ISA_SET_APX_F_ENQCMD:
  case XED_ISA_SET_APX_F_INVPCID:
  case XED_ISA_SET_APX_F_KEYLOCKER:
  case XED_ISA_SET_APX_F_KEYLOCKER_WIDE:
  case XED_ISA_SET_APX_F_KOPB:
  case XED_ISA_SET_APX_F_KOPD:
  case XED_ISA_SET_APX_F_KOPQ:
  case XED_ISA_SET_APX_F_KOPW:
  case XED_ISA_SET_APX_F_LZCNT:
  case XED_ISA_SET_APX_F_MOVBE:
  case XED_ISA_SET_APX_F_MOVDIR64B:
  case XED_ISA_SET_APX_F_MOVDIRI:
  case XED_ISA_SET_APX_F_RAO_INT:
  case XED_ISA_SET_APX_F_SHA:
  case XED_ISA_SET_APX_F_USER_MSR:
  case XED_ISA_SET_APX_F_VMX:
  case XED_ISA_SET_AVX:
  case XED_ISA_SET_AVX2:
  case XED_ISA_SET_AVX2GATHER:
  case XED_ISA_SET_AVX512BW_128:
  case XED_ISA_SET_AVX512BW_128N:
  case XED_ISA_SET_AVX512BW_256:
  case XED_ISA_SET_AVX512BW_512:
  case XED_ISA_SET_AVX512BW_KOPD:
  case XED_ISA_SET_AVX512BW_KOPQ:
  case XED_ISA_SET_AVX512CD_128:
  case XED_ISA_SET_AVX512CD_256:
  case XED_ISA_SET_AVX512CD_512:
  case XED_ISA_SET_AVX512DQ_128:
  case XED_ISA_SET_AVX512DQ_128N:
  case XED_ISA_SET_AVX512DQ_256:
  case XED_ISA_SET_AVX512DQ_512:
  case XED_ISA_SET_AVX512DQ_KOPB:
  case XED_ISA_SET_AVX512DQ_KOPW:
  case XED_ISA_SET_AVX512DQ_SCALAR:
  case XED_ISA_SET_AVX512ER_512:
  case XED_ISA_SET_AVX512ER_SCALAR:
  case XED_ISA_SET_AVX512F_128:
  case XED_ISA_SET_AVX512F_128N:
  case XED_ISA_SET_AVX512F_256:
  case XED_ISA_SET_AVX512F_512:
  case XED_ISA_SET_AVX512F_KOPW:
  case XED_ISA_SET_AVX512F_SCALAR:
  case XED_ISA_SET_AVX512PF_512:
  case XED_ISA_SET_AVX512_4FMAPS_512:
  case XED_ISA_SET_AVX512_4FMAPS_SCALAR:
  case XED_ISA_SET_AVX512_4VNNIW_512:
  case XED_ISA_SET_AVX512_BF16_128:
  case XED_ISA_SET_AVX512_BF16_256:
  case XED_ISA_SET_AVX512_BF16_512:
  case XED_ISA_SET_AVX512_BITALG_128:
  case XED_ISA_SET_AVX512_BITALG_256:
  case XED_ISA_SET_AVX512_BITALG_512:
  case XED_ISA_SET_AVX512_FP16_128:
  case XED_ISA_SET_AVX512_FP16_128N:
  case XED_ISA_SET_AVX512_FP16_256:
  case XED_ISA_SET_AVX512_FP16_512:
  case XED_ISA_SET_AVX512_FP16_SCALAR:
  case XED_ISA_SET_AVX512_GFNI_128:
  case XED_ISA_SET_AVX512_GFNI_256:
  case XED_ISA_SET_AVX512_GFNI_512:
  case XED_ISA_SET_AVX512_IFMA_128:
  case XED_ISA_SET_AVX512_IFMA_256:
  case XED_ISA_SET_AVX512_IFMA_512:
  case XED_ISA_SET_AVX512_VAES_128:
  case XED_ISA_SET_AVX512_VAES_256:
  case XED_ISA_SET_AVX512_VAES_512:
  case XED_ISA_SET_AVX512_VBMI2_128:
  case XED_ISA_SET_AVX512_VBMI2_256:
  case XED_ISA_SET_AVX512_VBMI2_512:
  case XED_ISA_SET_AVX512_VBMI_128:
  case XED_ISA_SET_AVX512_VBMI_256:
  case XED_ISA_SET_AVX512_VBMI_512:
  case XED_ISA_SET_AVX512_VNNI_128:
  case XED_ISA_SET_AVX512_VNNI_256:
  case XED_ISA_SET_AVX512_VNNI_512:
  case XED_ISA_SET_AVX512_VP2INTERSECT_128:
  case XED_ISA_SET_AVX512_VP2INTERSECT_256:
  case XED_ISA_SET_AVX512_VP2INTERSECT_512:
  case XED_ISA_SET_AVX512_VPCLMULQDQ_128:
  case XED_ISA_SET_AVX512_VPCLMULQDQ_256:
  case XED_ISA_SET_AVX512_VPCLMULQDQ_512:
  case XED_ISA_SET_AVX512_VPOPCNTDQ_128:
  case XED_ISA_SET_AVX512_VPOPCNTDQ_256:
  case XED_ISA_SET_AVX512_VPOPCNTDQ_512:
  case XED_ISA_SET_AVXAES:
  case XED_ISA_SET_AVX_GFNI:
  case XED_ISA_SET_AVX_IFMA:
  case XED_ISA_SET_AVX_NE_CONVERT:
  case XED_ISA_SET_AVX_VNNI:
  case XED_ISA_SET_AVX_VNNI_INT16:
  case XED_ISA_SET_AVX_VNNI_INT8:
  case XED_ISA_SET_BMI1:
  case XED_ISA_SET_BMI2:
  case XED_ISA_SET_CET:
  case XED_ISA_SET_CLDEMOTE:
  case XED_ISA_SET_CLFLUSHOPT:
  case XED_ISA_SET_CLFSH:
  case XED_ISA_SET_CLWB:
  case XED_ISA_SET_CLZERO:
  case XED_ISA_SET_CMOV:
  case XED_ISA_SET_CMPCCXADD:
  case XED_ISA_SET_CMPXCHG16B:
  case XED_ISA_SET_ENQCMD:
  case XED_ISA_SET_F16C:
  case XED_ISA_SET_FAT_NOP:
  case XED_ISA_SET_FCMOV:
  case XED_ISA_SET_FCOMI:
  case XED_ISA_SET_FMA:
  case XED_ISA_SET_FMA4:
  case XED_ISA_SET_FRED:
  case XED_ISA_SET_FXSAVE:
  case XED_ISA_SET_FXSAVE64:
  case XED_ISA_SET_GFNI:
  case XED_ISA_SET_HRESET:
  case XED_ISA_SET_I186:
  case XED_ISA_SET_I286PROTECTED:
  case XED_ISA_SET_I286REAL:
  case XED_ISA_SET_I386:
  case XED_ISA_SET_I486:
  case XED_ISA_SET_I486REAL:
  case XED_ISA_SET_I86:
  case XED_ISA_SET_ICACHE_PREFETCH:
  case XED_ISA_SET_INVPCID:
  case XED_ISA_SET_KEYLOCKER:
  case XED_ISA_SET_KEYLOCKER_WIDE:
  case XED_ISA_SET_LAHF:
  case XED_ISA_SET_LKGS:
  case XED_ISA_SET_LONGMODE:
  case XED_ISA_SET_LWP:
  case XED_ISA_SET_LZCNT:
  case XED_ISA_SET_MCOMMIT:
  case XED_ISA_SET_MONITOR:
  case XED_ISA_SET_MONITORX:
  case XED_ISA_SET_MOVBE:
  case XED_ISA_SET_MOVDIR64B:
  case XED_ISA_SET_MOVDIRI:
  case XED_ISA_SET_MPX:
  case XED_ISA_SET_MSRLIST:
  case XED_ISA_SET_PAUSE:
  case XED_ISA_SET_PBNDKB:
  case XED_ISA_SET_PCLMULQDQ:
  case XED_ISA_SET_PCONFIG:
  case XED_ISA_SET_PENTIUMMMX:
  case XED_ISA_SET_PENTIUMREAL:
  case XED_ISA_SET_PKU:
  case XED_ISA_SET_POPCNT:
  case XED_ISA_SET_PPRO:
  case XED_ISA_SET_PPRO_UD0_LONG:
  case XED_ISA_SET_PPRO_UD0_SHORT:
  case XED_ISA_SET_PREFETCHW:
  case XED_ISA_SET_PREFETCHWT1:
  case XED_ISA_SET_PREFETCH_NOP:
  case XED_ISA_SET_PTWRITE:
  case XED_ISA_SET_RAO_INT:
  case XED_ISA_SET_RDPID:
  case XED_ISA_SET_RDPMC:
  case XED_ISA_SET_RDPRU:
  case XED_ISA_SET_RDRAND:
  case XED_ISA_SET_RDSEED:
  case XED_ISA_SET_RDTSCP:
  case XED_ISA_SET_RDWRFSGS:
  case XED_ISA_SET_RTM:
  case XED_ISA_SET_SERIALIZE:
  case XED_ISA_SET_SGX:
  case XED_ISA_SET_SGX_ENCLV:
  case XED_ISA_SET_SHA:
  case XED_ISA_SET_SHA512:
  case XED_ISA_SET_SM3:
  case XED_ISA_SET_SM4:
  case XED_ISA_SET_SMAP:
  case XED_ISA_SET_SMX:
  case XED_ISA_SET_SNP:
  case XED_ISA_SET_SSE:
  case XED_ISA_SET_SSE2:
  case XED_ISA_SET_SSE2MMX:
  case XED_ISA_SET_SSE3:
  case XED_ISA_SET_SSE3X87:
  case XED_ISA_SET_SSE4:
  case XED_ISA_SET_SSE42:
  case XED_ISA_SET_SSE4A:
  case XED_ISA_SET_SSEMXCSR:
  case XED_ISA_SET_SSE_PREFETCH:
  case XED_ISA_SET_SSSE3:
  case XED_ISA_SET_SSSE3MMX:
  case XED_ISA_SET_SVM:
  case XED_ISA_SET_TBM:
  case XED_ISA_SET_TDX:
  case XED_ISA_SET_TSX_LDTRK:
  case XED_ISA_SET_UINTR:
  case XED_ISA_SET_USER_MSR:
  case XED_ISA_SET_VAES:
  case XED_ISA_SET_VIA_PADLOCK_AES:
  case XED_ISA_SET_VIA_PADLOCK_MONTMUL:
  case XED_ISA_SET_VIA_PADLOCK_RNG:
  case XED_ISA_SET_VIA_PADLOCK_SHA:
  case XED_ISA_SET_VMFUNC:
  case XED_ISA_SET_VPCLMULQDQ:
  case XED_ISA_SET_VTX:
  case XED_ISA_SET_WAITPKG:
  case XED_ISA_SET_WBNOINVD:
  case XED_ISA_SET_WRMSRNS:
  case XED_ISA_SET_X87:
  case XED_ISA_SET_XOP:
  case XED_ISA_SET_XSAVE:
  case XED_ISA_SET_XSAVEC:
  case XED_ISA_SET_XSAVEOPT:
  case XED_ISA_SET_XSAVES:
  case XED_ISA_SET_LAST:
  default:
     xed_assert(0);
  }
*/
