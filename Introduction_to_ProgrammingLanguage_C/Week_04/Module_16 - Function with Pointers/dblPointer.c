#include<stdio.h>
int main()
{
    double x = 500.2558;
    printf("%0.2lf",x);
    // pointer : 
    double *fptr = &x;
    printf(" x er allocated address : %p\n",fptr);

    double *myPtr = &fptr;
    printf(" *fptr er address : %p\n",myPtr); 

  
    return 0;
}