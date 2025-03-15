#include <stdio.h>

int main( void ){

	/* Create variables for comparison */
	int switch_int = 3;
	fprintf( stdout, "%d %p\n", switch_int, &switch_int );

	/* If-Else If Build */
	switch(switch_int){

		case 0:
			fprintf( stdout, "Freshman\n" );
			break;

		case 1:
			fprintf( stdout, "Sophomore\n" );
			break;		

		case 2:
			fprintf( stdout, "Junior\n" );
			break;		

		case 3:
			fprintf( stdout, "Senior\n" );
			break;

		default:
			fprintf( stdout, "%d is an invalid number\n", switch_int);
			break;	

	}


	return 0;

}
