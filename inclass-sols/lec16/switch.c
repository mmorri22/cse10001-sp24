#include <stdio.h>

int main( void ){

	/* Create variables for comparison */
	int switch_int = 3;

	/* If-Else If Build */
	switch(switch_int){
		case 0:
			fprintf( stdout, "Freshman\n");
			break;
		case 1:
			fprintf( stdout, "Sophomore\n");
			break;
		case 2:
			fprintf( stdout, "Junior\n");
			break;
		case 3:
			fprintf( stdout, "Senior\n");
			break;
		default:
			fprintf( stdout, "%d is invalid\n", switch_int );
			break;
	}

	return 0;

}
