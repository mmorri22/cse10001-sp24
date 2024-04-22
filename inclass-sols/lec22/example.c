#include <stdio.h>
#include <stdlib.h>

void alloc_mem( int** int_dyn_arr, long unsigned int array_len ){

    fprintf( stdout, "%d %p %p\n", **int_dyn_arr, int_dyn_arr, &int_dyn_arr);

    *int_dyn_arr = (int *)malloc( array_len*sizeof(int) );

}

void free_mem( int** int_dyn_arr ){

    free( *int_dyn_arr );
}

int main(){

    long unsigned int array_len = 5;
    fprintf( stdout, "%lu %p\n", array_len, &array_len);

    int* int_dyn_arr;
    fprintf( stdout, "%d %p %p\n", *int_dyn_arr, int_dyn_arr, &int_dyn_arr);

    alloc_mem( &int_dyn_arr, array_len );

    long unsigned int iter;
    for( iter = 0; iter < array_len; ++iter ){
        fprintf( stdout, "%p\n", &int_dyn_arr[iter] );
    }

    free_mem( &int_dyn_arr );

    return 0;
}