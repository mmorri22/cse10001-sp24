#include <stdio.h>

int main(){

  int first_int;
  float first_float;
  double first_double;
  char first_array[50];

  /* Step 1 - Write fscanf to read in the values */
  fprintf( stdout, "Enter an integer, float, double, and a string: ");

  // If statement ensure we do not ignore return value of ‘fscanf’, 
  if( fscanf( stdin, "%d %f %lf %s", &first_int, &first_float, &first_double, first_array) ){
    // Do nothing
  }

  /* Step 2 - Write fprintf to print all the values */
  fprintf( stdout, "%d %.2f %.2lf %s\n", first_int, first_float, first_double, first_array);

  return 0;
}
