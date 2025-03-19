#include <stdio.h>

int main( void ){

	/* Create Variable */
	int while_int = 3;

	/* While Loop Statement */
	while( while_int >= 0 ){
		fprintf(stdout, "%d %p\n", while_int, &while_int );
		while_int--;
	}

	return 0;
}
