#include <stdio.h>
#include <stdlib.h>

#define FIB_NUM 42

long int Fibonacci( long int fib_num, long int fib_array[fib_num] );

int main( void ){

	/* We will change this to 42 and see how it works */
	long int fib_num = FIB_NUM;

	long int fib_array[FIB_NUM] = {0}; 

	long int loop = 0;
	while (loop < fib_num){
		fib_array[loop] = 0;
		loop++;
	}

	fprintf( stdout, "The %ld Fib Number is = %ld\n", fib_num, Fibonacci( fib_num - 1, fib_array ) );

	return EXIT_SUCCESS;

}

long int Fibonacci( long int fib_num, long int fib_array[fib_num] ){

	if(fib_array[fib_num] != 0){
		return fib_array[fib_num];
	}

	if( fib_num == 0 )
		fib_array[fib_num] = 1;

	else if( fib_num == 1 )
		fib_array[fib_num] = 1;

	fib_array[fib_num] = Fibonacci( fib_num - 1, fib_array ) + Fibonacci( fib_num - 2, fib_array );

	return fib_array[fib_num];
}
