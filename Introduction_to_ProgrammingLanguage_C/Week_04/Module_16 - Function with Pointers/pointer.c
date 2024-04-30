#include <stdio.h>
int main()
{
    int n = 500;
    int * ptr = &n;
    printf("n er address : %p\n",&n);
    printf("ptr er value : %p\n",ptr);
    printf("ptr er address : %p\n",&ptr);

    return 0;
}