#include <stdio.h>

int main( void ){

	/* Create Variable */
	int switch_int;


	/* for Loop Statement */
	for( switch_int = 3; switch_int >= 0; switch_int-- ){
		fprintf( stdout, "%d %p\n", switch_int, &switch_int );
	}


	return 0;
}
