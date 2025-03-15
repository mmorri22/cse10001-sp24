#include "parallel_lib.h"

int main(){

	double R_sum = add_resis( 15, 19.24, 8 );
	
	double final = invert( R_sum );
	
	print( 15, 19.24, 8, final );

    return 0;
}