#include "../libs/bit.h"

char * get_bit_string( char* value, BIT* bits ) {
  BIT *current = bits;

  unsigned int int_value = atoi(value);

  char *bit_string;
  if( int_value > 0 ) {
    bit_string = (char*)malloc( number_of_bits_required( int_value ));
  
    unsigned int count = 0;
    while( current != NULL ) {
      bit_string[count++] = current->bit;
      current = current->next;
    }
    bit_string[count] = '\0';
  }

  return bit_string;
}