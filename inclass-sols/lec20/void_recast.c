#include <stdio.h>
#include <stdlib.h>

int main()
{

  /* Step 1a - Allocate a length of four */
  long unsigned int array_len = 4;

  /* Step 1b - Allocate a void pointer array */
  void* void_array = malloc( array_len * sizeof(char) );

  /* Step 3 - Using pointer arithmetic and ASCII hex, save values A, B, C, D */
  *( (char *)(void_array + 0*sizeof(char)) ) = 'A';
  *( (char *)(void_array + 1*sizeof(char)) ) = 0x42;
  *( (char *)(void_array + 2*sizeof(char)) ) = 67;
  *( (char *)(void_array + 3*sizeof(char)) ) = 'D';

  /* Step 4 - Loop through and print addresses */
  fprintf( stdout, "&void_array = %p, void_array = %p\n", &void_array, void_array);

  long unsigned int iter;
  for(iter = 0; iter < array_len; iter++){

    fprintf( stdout, "void_array[%lu] addr = %p, ", iter, (void_array + iter) );

    fprintf( stdout, "void_array[%lu] val = %c\n", iter, *( (char *)(void_array + iter*sizeof(char))) ); 
  }

  /* Step 5 - Loop through and print addresses */



  /* Step 6 - Cast the address to int and print the result */
  fprintf( stdout, "%p %f\n", void_array, *( (float *)(void_array + 0*sizeof(float))) );

  /* Step 1c - Free the void array*/
  free( void_array );

  return 0;
}
