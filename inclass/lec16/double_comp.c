#include <stdio.h>

int main( void ){

	double the_double = 0.3;
	double comp_double = 0.1;

	the_double -= 0.2;

	if( the_double == comp_double ){
		fprintf( stdout, "They match!\n" );
	}

	else{
		fprintf( stdout, "They do not match!\n" );
	}
		
	return 0;

}
