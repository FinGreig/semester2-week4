
/*
 * Dot product of 2 vectors
 */

 #include <stdio.h>

 int main( void ) {
    float a[]={ 1.0,1.0,1.0,1.0,1.0 };
    float b[]={ 2.0,3.0,4.0,5.0,6.0 };
    float d;

    /*
    Code to compute the dot product
    Store your answer in d
    print your final answer
    */

   d = a[0] * b[0];
   for (int i=1;i<(sizeof(a)/sizeof(*a));i++) {
      d = d + (a[i] * b[i]);
   }

   printf("d = %f\n", d);

    return 0;
 }