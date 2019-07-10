#include "../libs/bit_lib.h"

unsigned get_bit( unsigned number ) {  
  return ( ( number & 1 ) ? '1' : '0' );
}

unsigned number_of_bits_required( unsigned number ) {
  return (int)log2(number)+1;
}