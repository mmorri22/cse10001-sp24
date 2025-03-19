#include <stdio.h>

int main( void ){

	/* Create variables for comparison */
	int num_credits = 18;

	/* If-Else If Build */
	if( num_credits < 12 ){
		fprintf( stdout, "Not full time: %d\n", num_credits);
	}
	else if( num_credits >= 12 && num_credits < 19){
		fprintf( stdout, "Full time: %d\n", num_credits);
	}
	else{
		fprintf( stdout,"Speak to your advisor.\n" );
	}


	return 0;

}
