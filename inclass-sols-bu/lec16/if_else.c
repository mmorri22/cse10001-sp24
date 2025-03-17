#include <stdio.h>

int main( void ){

	/* Create variables for comparison */
	int num_credits = 18;

	/* If-Else If Build */
	if( num_credits < 16 ){
		fprintf( stdout, "not full time at %d\n", num_credits );
	}
	else if( num_credits >= 16 && num_credits < 19 ){
		fprintf( stdout, "full time at %d\n", num_credits );
	}
	else{
		fprintf( stdout, "Speak to your advisor\n" );
	}

	return 0;

}
