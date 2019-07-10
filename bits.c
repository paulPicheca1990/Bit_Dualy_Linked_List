/* ##################################################################
 * <Author>: Paul Picheca
 * <Data>: 2019-06-19
 * <Purpose>: This is program will attempt to convert 
 *            strings entered via the cmd-line args
 *            into integers, and then binary characters
 * 
 * <Remarks>: The program should do the following:
 *            1) Parse cmd-line args
 *              a) no values given: exit program 
 *            2) Convert the input to an integer
 *            3) Create doubly-linked list of struct _BIT
 *            4) Parse each bit into a struct of _BIT
 *            5) Display the parsed input and the binary 
 *               representation of that value
 *               --> Iterate through the Linked list and 
 *                   display the binary values (little endian). 
 * 
 *               NOTE: if the value is a string and cannot be parsed 
 *                     into an integer, the binary value will be 0
 * 
 * ################################################################ */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "./libs/bit.h"

void print_bits( char *value, BIT* bits ) {
  char *bit_string = get_bit_string( value, bits );

  printf( " %20s | ", value );  
  printf( "%20s\n", bit_string );  
  
  if( bit_string != NULL )
    free(bit_string);
} 

void print_title() {
  char *bar = "=============================================\n";
  printf( "%s %-20s | %-20s\n%s", bar, "Normal Value", "Binary Value", bar );
}

int main( int argc, char *argv[] ) {  
  int max = argc - 1;
  int index = 1;

  print_title();

  int number;        
  while ( index <= max ) {
    number = atoi(argv[index]);  
    
    BIT *bits = parse_bits(number);

    print_bits(argv[index++], bits);

    free(bits);    
  }
  
  return 0;
}