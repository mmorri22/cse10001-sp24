#include <stdio.h>

/* function prototype */
void function (int a, int * b);

int main()
{
   int m = 3;
   int n = 5;

   fprintf( stdout, "main - int m = %d at %p\n", m, &m);
   fprintf( stdout, "main - int n = %d at %p\n", n, &n);

   function(m, &n) ;

   fprintf( stdout, "main - int m = %d at %p\n", m, &m);
   fprintf( stdout, "main - int n = %d at %p\n", n, &n);

   return 0;
}

void function (int a, int * b){

   fprintf( stdout, "function - a: %p %d\n", &a , a);
   fprintf( stdout, "function - b: %p %p %d\n", &b, b, *b);

  /* Step 1 - How would we print the address and value of what a and b is pointing at? */

   a = 7 ;
   *b = a ;
   b = &a ;
   *b = 4 ;

   /* Step 1b - How would we print the address and value of what b is pointing at? */
   fprintf( stdout, "function - a: %p %d\n", &a , a);
   fprintf( stdout, "function - b: %p %p %d\n", &b, b, *b);

}
