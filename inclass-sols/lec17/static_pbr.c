#include <stdio.h>

/* Put the compiler directive here */
#define ARRAY_LEN 6

/* When we copy to static_basic_prb.c, put the function declaration */
void print_array( double static_array[ARRAY_LEN] );

int main(){

  /* Allocate the static integer values */
  double static_array[ARRAY_LEN] = {10, -2, 15, -47, 51, 9};
  int iter;
  int* iter_ptr = &iter;

  fprintf( stdout, "%p\n", &iter );
  fprintf( stdout, "%p %p\n", &iter_ptr, iter_ptr);
  fprintf( stdout, "%p\n", &static_array );
  for( iter = 0; iter < ARRAY_LEN; iter++){
    fprintf( stdout, "%d %lf %p\n", iter, static_array[iter], &static_array[iter] );
  }

  fprintf( stdout, "\n" );

  print_array( static_array );


  return 0;
}

/* When we copy to static_basic_prb.c, put the function definition */
void print_array( double static_array[ARRAY_LEN] ){

  /* Iterate through the array and print the values */
  int iter;
  for( iter = 0; iter < ARRAY_LEN; iter++){
    fprintf( stdout, "%d %lf %p\n", iter, static_array[iter], &static_array[iter] );
  }

}