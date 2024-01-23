/// @file xed-operand-element-type-enum.c

// This file was automatically generated.
// Do not edit this file.

#include <string.h>
#include <assert.h>
#include "xed-operand-element-type-enum.h"

typedef struct {
    const char* name;
    xed_operand_element_type_enum_t value;
} name_table_xed_operand_element_type_enum_t;
static const name_table_xed_operand_element_type_enum_t name_array_xed_operand_element_type_enum_t[] = {
{"INVALID", XED_OPERAND_ELEMENT_TYPE_INVALID},
{"UINT", XED_OPERAND_ELEMENT_TYPE_UINT},
{"INT", XED_OPERAND_ELEMENT_TYPE_INT},
{"SINGLE", XED_OPERAND_ELEMENT_TYPE_SINGLE},
{"DOUBLE", XED_OPERAND_ELEMENT_TYPE_DOUBLE},
{"LONGDOUBLE", XED_OPERAND_ELEMENT_TYPE_LONGDOUBLE},
{"LONGBCD", XED_OPERAND_ELEMENT_TYPE_LONGBCD},
{"STRUCT", XED_OPERAND_ELEMENT_TYPE_STRUCT},
{"VARIABLE", XED_OPERAND_ELEMENT_TYPE_VARIABLE},
{"FLOAT16", XED_OPERAND_ELEMENT_TYPE_FLOAT16},
{"BFLOAT16", XED_OPERAND_ELEMENT_TYPE_BFLOAT16},
{"INT8", XED_OPERAND_ELEMENT_TYPE_INT8},
{"UINT8", XED_OPERAND_ELEMENT_TYPE_UINT8},
{"LAST", XED_OPERAND_ELEMENT_TYPE_LAST},
{0, XED_OPERAND_ELEMENT_TYPE_LAST},
};

        
xed_operand_element_type_enum_t str2xed_operand_element_type_enum_t(const char* s)
{
   const name_table_xed_operand_element_type_enum_t* p = name_array_xed_operand_element_type_enum_t;
   while( p->name ) {
     if (strcmp(p->name,s) == 0) {
      return p->value;
     }
     p++;
   }
        

   return XED_OPERAND_ELEMENT_TYPE_INVALID;
}


const char* xed_operand_element_type_enum_t2str(const xed_operand_element_type_enum_t p)
{
   xed_operand_element_type_enum_t type_idx = p;
   if ( p > XED_OPERAND_ELEMENT_TYPE_LAST) type_idx = XED_OPERAND_ELEMENT_TYPE_LAST;
   return name_array_xed_operand_element_type_enum_t[type_idx].name;
}

xed_operand_element_type_enum_t xed_operand_element_type_enum_t_last(void) {
    return XED_OPERAND_ELEMENT_TYPE_LAST;
}
       
/*

Here is a skeleton switch statement embedded in a comment


  switch(p) {
  case XED_OPERAND_ELEMENT_TYPE_INVALID:
  case XED_OPERAND_ELEMENT_TYPE_UINT:
  case XED_OPERAND_ELEMENT_TYPE_INT:
  case XED_OPERAND_ELEMENT_TYPE_SINGLE:
  case XED_OPERAND_ELEMENT_TYPE_DOUBLE:
  case XED_OPERAND_ELEMENT_TYPE_LONGDOUBLE:
  case XED_OPERAND_ELEMENT_TYPE_LONGBCD:
  case XED_OPERAND_ELEMENT_TYPE_STRUCT:
  case XED_OPERAND_ELEMENT_TYPE_VARIABLE:
  case XED_OPERAND_ELEMENT_TYPE_FLOAT16:
  case XED_OPERAND_ELEMENT_TYPE_BFLOAT16:
  case XED_OPERAND_ELEMENT_TYPE_INT8:
  case XED_OPERAND_ELEMENT_TYPE_UINT8:
  case XED_OPERAND_ELEMENT_TYPE_LAST:
  default:
     xed_assert(0);
  }
*/
