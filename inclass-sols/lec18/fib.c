#include <stdio.h>
#include <stdlib.h>

long int Fibonacci( long int fib_num );

int main( void ){

	/* We will change this to 42 and see how it works */
	long int fib_num = 50;

	fprintf( stdout, "The %ld Fib Number is = %ld\n", fib_num, Fibonacci( fib_num - 1 ) );

	return EXIT_SUCCESS;

}

long int Fibonacci( long int fib_num ){

	if( fib_num == 0 )
		return 1;

	if( fib_num == 1 )
		return 1;

	return Fibonacci( fib_num - 1 ) + Fibonacci( fib_num - 2 );

}
