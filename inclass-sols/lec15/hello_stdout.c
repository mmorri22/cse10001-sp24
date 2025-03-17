#include <stdio.h>

int main(void){

	int the_int = -5;
	unsigned int the_uint = 100;

	fprintf(stdout, "Integer: %d %p\n", the_int, &the_int);

	fprintf(stdout, "Unsigned Integer %u %p\n", the_uint, &the_uint);

	fprintf(stdout, "stdout at %p\n", &stdout);

	return 0;
}
