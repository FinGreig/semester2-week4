
/*
 * Factorial
 */

 #include <stdio.h>

 int main( void ) {
    int f[20];

    /*
    Code to compute the factorial of each array index
    Print your final answer
    */
   f[0] = 1;
   printf("0! = %d\n", f[0]);
   for (int i=1;i<20;i++) {
      f[i] = f[i-1] * i;
      printf("%d! = %d\n", i, f[i]);
   }
    return 0;
 }
