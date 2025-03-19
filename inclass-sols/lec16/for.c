#include <stdio.h>

int main( void ){

	/* Create Variable */
	int for_int;

	/* For Loop Statement */
	for( for_int = 3; for_int >= 0; for_int--){
		fprintf(stdout, "%d %p\n", for_int, &for_int );
	}

	return 0;
}
