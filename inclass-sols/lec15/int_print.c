#include <stdio.h>

int main(void){	// Do Something
	
	int int_value = -22;

	unsigned int ui_value = 25;

	fprintf( stdout, "Hello, World\n"  );

	fprintf( stdout, "int_value = %d (%x) at %p\n", int_value, int_value, &int_value );

	fprintf( stdout, "ui_value = %u (%x) at %p\n", ui_value, ui_value, &ui_value );

	return 0;
}
