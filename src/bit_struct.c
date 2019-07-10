#include "../libs/bit_struct.h"

BIT* create_bits( char bit, BIT* prev, BIT* next ) {  
  BIT *bits = (BIT*)malloc(sizeof(BIT));    

  bits->bit = bit; 
  bits->prev = prev;
  bits->next = next;
  
  return bits;
}

BIT* parse_bits( unsigned number ) {    
  BIT *bits = create_bits( get_bit(number), NULL, NULL );
  
  while( number >>= 1 )                 
    bits = create_bits( get_bit(number), NULL, bits );  

  return bits;
}