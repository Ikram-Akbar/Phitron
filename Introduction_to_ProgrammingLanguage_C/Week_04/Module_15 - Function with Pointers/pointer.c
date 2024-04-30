#include <stdio.h>
int main()
{
    int n = 500;
    int * ptr = &n;
    n = 600;
    *ptr = 55547;
    printf("n er address : %p\n",&n);
    printf("ptr er value : %p\n",ptr);
    printf("ptr er address : %p\n",&ptr);
    printf("n er value : %d",n);

    return 0;
}