#ifndef __BIT_STRUCT_H__
#define __BIT_STRUCT_H__

#include <stdlib.h>
#include <stddef.h>
#include "bit_lib.h"

typedef struct _BIT {  
  char bit;
  struct _BIT *prev;
  struct _BIT *next;  
} BIT;

BIT* create_bits( char bit, BIT* prev, BIT* next );

BIT* parse_bits( unsigned number );

#endif