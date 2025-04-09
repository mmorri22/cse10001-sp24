/* Step 1 - Write the required memory elements for dynamic malloc */
#include <stdio.h>
#include <stdlib.h>

/* Step 2 - Create a compiler directive for a size of 4 element */
#define ARRAY_SIZE 4

int main( void ){

  /* Step 4 - Create a static integer array with five elements */
  int int_array[ARRAY_SIZE] = {11, -22, 17, 8};

  /* Step 5a - Create a variable for the size of the dynamic array */
  long unsigned int dyn_array_len;

  /* Step 5b - Read in a size using fscanf */
  if( fscanf( stdin, "%lu", &dyn_array_len ) ) {}
  else{
    return EXIT_FAILURE;
  }

  /* Step 5c - Print the location and value of this variable */
  fprintf( stdout, "dyn_array_len: %p %lu\n", &dyn_array_len, dyn_array_len );

  /* Step 5d - Dynamically allocate an int array using the size */
  int* dyn_int_array = (int *)malloc( dyn_array_len * sizeof(int) );

  /* Step 6 - Read in the number of values using fscanf */
  long unsigned int iter;

  for(iter = 0; iter < dyn_array_len; iter++){
    fprintf(stdout, "Enter a value: ");
    if( fscanf(stdin, "%d", &dyn_int_array[iter] ) ){}
  }

  /* Step 7 - Print the address and values of each location in the dynamic array */
  /* Step 7.1 - Location and value of the register containing the base address */
  for( iter = 0; iter < ARRAY_SIZE; iter++){
    fprintf(stdout,"int_array[%lu]: %p %d\n", iter, &int_array[iter], int_array[iter]);
  }

  /* Step 7.2 - Location and value of each element in the dynamic array */
  fprintf( stdout, "dyn_int_array: %p %p\n", &dyn_int_array, dyn_int_array);

  for( iter = 0; iter < dyn_array_len; iter++ ){
    fprintf(stdout,"dyn_int_array[%lu]: %p %d\n", iter, &dyn_int_array[iter], dyn_int_array[iter]);
  }

  /* Step 8 - Free the Dynamic Array */
  free( dyn_int_array );

  /* Step 3 - Now that we have #include<stdlib.h>, use compiler directive EXIT_SUCCESS */
  return EXIT_SUCCESS;
}
