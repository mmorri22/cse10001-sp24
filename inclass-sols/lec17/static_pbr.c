#include <stdio.h>

/* Put the compiler directive here */
#define ARRAY_LEN 6

/* When we copy to static_basic_prb.c, put the function declaration */
void print_array( int static_array[ARRAY_LEN], int* iter_ptr );

int main(){

  /* Allocate the static integer values */
  int static_array[ARRAY_LEN] = {10, -2, 15, -47, 51, 9};

  /* Iterate through the array and print the values */
  int iter;

  int* iter_ptr = &iter;

  fprintf(stdout, "%p %p %p %p %p\n", &iter, iter_ptr, &iter_ptr, &static_array, static_array);

  for( iter = 0; iter < ARRAY_LEN; iter++){
    fprintf(stdout, "%d %d %p\n", iter, static_array[iter], &static_array[iter]);
  }

  fprintf(stdout, "-----------\n");

  print_array( static_array, &iter );

  fprintf(stdout, "-----------\n");

  print_array( static_array, iter_ptr );

  return 0;
}

/* When we copy to static_basic_prb.c, put the function definition */
void print_array( int static_array[ARRAY_LEN], int* iter_ptr ){

  // int iter;

  fprintf(stdout, "%p %p %d %p %p\n", &iter_ptr, iter_ptr, *iter_ptr, &static_array, static_array);

  for( *iter_ptr = 0; *iter_ptr < ARRAY_LEN; (*iter_ptr)++){
    fprintf(stdout, "%d %d %p\n", *iter_ptr, static_array[*iter_ptr], &static_array[*iter_ptr]);
  }

  static_array[2] = 10;

}