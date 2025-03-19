#include <stdio.h>

int main( void ){

	/* Create Variable */
	int dowhile_int = -1;

	/* While Loop Statement */
	do{
		fprintf(stdout, "%d %p\n", dowhile_int, &dowhile_int);
		dowhile_int--;
	}while(dowhile_int >= 0);

	return 0;
}
