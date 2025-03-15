#include <stdio.h>
#include <stdlib.h>

int Fibonacci( int fib_num, int fib_array[] );

int main( void ){

	/* We will change this to 42 and see how it works */
	int fib_num = 42;
	int fib_array[42];

	int iter;
	for( iter = 0; iter < fib_num; ++iter ){
		fib_array[iter] = 0;
		// fprintf( stdout, "fib_array[%d] = %p %d\n", iter, &fib_array[iter] , fib_array[iter] );
	}	

	fprintf( stdout, "The %d Fib Number is = %d\n", fib_num, Fibonacci( fib_num - 1, fib_array ) );

	return EXIT_SUCCESS;

}

int Fibonacci( int fib_num, int fib_array[] ){

	if( fib_array[fib_num] != 0 ){
		return fib_array[fib_num];
	}

	if( fib_num == 0  || fib_num == 1 ){
		fib_array[fib_num] = 1;
		return 1;
	}

	fib_array[fib_num] = Fibonacci( fib_num - 1, fib_array ) + Fibonacci( fib_num - 2, fib_array );

	return fib_array[fib_num];

}
