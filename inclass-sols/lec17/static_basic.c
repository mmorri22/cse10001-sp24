#include <stdio.h>

/* Put the compiler directive here */
#define ARRAY_LEN 6

/* When we copy to static_basic_prb.c, put the function declaration */

int main(){

  /* Allocate the static integer values */
  int static_array[ARRAY_LEN] = {10, -2, 15, -47, 51, 9};

  /* Iterate through the array and print the values */
  int iter;

  fprintf(stdout, "%p %p\n", &iter, &static_array);

  for( iter = 0; iter < ARRAY_LEN; iter++){
    fprintf(stdout, "%d %d %p\n", iter, static_array[iter], &static_array[iter]);
  }


  return 0;
}

/* When we copy to static_basic_prb.c, put the function definition */
