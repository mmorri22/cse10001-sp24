#include <stdio.h>

/* Function Declarations */
int sum_func( int first_num, int second_num );

int main( void ){

	/* Create Variables */
	/* Note: Only create variables we are using at intermediate steps */
	int first_num = 5;
	int second_num = 6;

	fprintf( stdout, "In main: %p %p\n", &first_num, &second_num);
	fprintf( stdout, "In main: %d %d\n", first_num, second_num);

	/* Average of two doubles */
	int sum_val = sum_func( first_num, second_num );

	/* Print the result */
	fprintf(stdout, "%d+%d=%d\n", first_num, second_num, sum_val );
	fprintf(stdout, "Incorrect sum because of change in sum_func\n");

	return 0;
}

/* Function Definitions */
int sum_func( int first_num, int second_num ){

	first_num++;

	fprintf( stdout, "In sum_func: %p %p\n", &first_num, &second_num);
	fprintf( stdout, "In sum_func: %d %d\n", first_num, second_num);

	return first_num + second_num;
}