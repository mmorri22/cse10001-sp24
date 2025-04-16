#include <stdio.h>
#include <stdlib.h>

/* function prototypes */

/* Step 1a - Allocate the memory function declaration */
void alloc_mem(int** int_dyn_array, long unsigned int num_elements);

/* Step 2a - Print the memory function declaration */
void print_mem(int* int_dyn_arr, long unsigned int num_elements);

/* Step 3a - Free the Memory function declaration */
void free_mem(int** int_dyn_arr);

int main()
{

  /* Variables */
   int* int_dyn_arr;
   long unsigned int num_elements ;
   long unsigned int iterator;
   int factorial;

   fprintf( stdout, "Enter number of elements in integer values (greater than 0): ") ;
   if(fscanf( stdin, "%lu", &num_elements)){}

   /* Check for memory leak */
   if (num_elements == 0){
      fprintf(stderr, "Must be greater than 0\n") ;
      exit(-1);
   }

   fprintf(stdout, "&int_dyn_arr = %p, int_dyn_arr = %p, *int_dyn_arr = %d, &num_elements = %p, num_elements = %lu, &iterator=%p &factorial = %p\n",
      &int_dyn_arr, int_dyn_arr, *int_dyn_arr, &num_elements, num_elements, &iterator, &factorial);


   /* 1c - Call the memory allocation function in main */
   alloc_mem(&int_dyn_arr, num_elements);

   fprintf(stdout, "*int_dyn_arr = %p, int_dyn_arr = %p, &num_elements = %p, num_elements = %lu\n",
      &int_dyn_arr, int_dyn_arr, &num_elements, num_elements);

   /* Lets use the memory as an arrray */
   int_dyn_arr[0] = 1;
   factorial = 2;
   for (iterator = 1; iterator < num_elements; ++iterator){

      int_dyn_arr[iterator] = factorial * int_dyn_arr[iterator-1] ;
      ++factorial;

   }

   /* 2c - Print the memory addresses and data */
   print_mem(int_dyn_arr, num_elements);

   /* 3c - Free the memory */
   free_mem( &int_dyn_arr );

   return 0;
}


/* Step 1b - Allocate the memory function definition */
void alloc_mem(int** int_dyn_array, long unsigned int num_elements){

   fprintf( stdout, "alloc_mem - %p %p %p %p %lu\n", 
         &int_dyn_array, int_dyn_array, *int_dyn_array, &num_elements, num_elements);

   *int_dyn_array = (int *)malloc( num_elements *sizeof(int) );

   if(*int_dyn_array == NULL){
      fprintf(stderr, "Opps, we're out of memory!\n");
      exit(-1);
   }

   fprintf( stdout, "alloc_mem - %p %p %p %p %lu\n", 
      &int_dyn_array, int_dyn_array, *int_dyn_array, &num_elements, num_elements);

}

/* Step 2b - Print the memory function definition */
void print_mem(int* int_dyn_arr, long unsigned int num_elements){

   fprintf( stdout, "print_mem - %p %p %p %lu\n", 
      &int_dyn_arr, int_dyn_arr, &num_elements, num_elements);

   long unsigned iter;
   for( iter = 0; iter < num_elements; ++iter){
      fprintf(stdout, "int_dyn_arr[%lu] = %d at %p\n", iter, int_dyn_arr[iter], &int_dyn_arr[iter]);
   }
}

/* Step 3b - Free the Memory function definition */
void free_mem(int** int_dyn_arr){

   fprintf( stdout, "free_mem - %p %p %p\n", 
      &int_dyn_arr, int_dyn_arr, *int_dyn_arr);

   free(*int_dyn_arr);

   fprintf( stdout, "free_mem - %p %p %p\n", 
      &int_dyn_arr, int_dyn_arr, *int_dyn_arr);
}