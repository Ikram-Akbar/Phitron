#include <stdio.h>

void fun(int *new)
{
    printf(" new er value : %p\n", new);
    *new = 222222;
    printf(" new er value : %p\n", new);
}
int main()
{
    int x = 500;
    printf("x er address : %p\n", &x);
    fun(&x);
    printf("now x er value : %d",x);
    return 0;
}