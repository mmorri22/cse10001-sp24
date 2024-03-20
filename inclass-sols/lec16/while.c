#include <stdio.h>

int main( void ){

	/* Create Variable */
	int switch_int = 3;

	/* While Loop Statement */
	while( switch_int >= 0 ){
		fprintf( stdout, "%d %p\n", switch_int, &switch_int );
		switch_int--;
	}


	return 0;
}
