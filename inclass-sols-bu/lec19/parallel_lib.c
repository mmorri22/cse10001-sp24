#include "parallel_lib.h"

double add_resis( double R1, double R2, double R3 ){
	
	return invert(R1) + invert(R2) + invert(R3);
	
}

double invert( double R_sum ){
	
	return 1/R_sum;
}

void print( double R1, double R2, double R3, double R_sum ){
	
	fprintf( stdout, "Resistance in parallel of %lf, %lf, and %lf is %lf\n",
		R1, R2, R3, R_sum );

}