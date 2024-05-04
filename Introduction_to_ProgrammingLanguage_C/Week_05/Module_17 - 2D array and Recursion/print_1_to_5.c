#include <stdio.h>

void num(int n)
{
    if (n == 6) return;
    printf("%d \n", n);
    num(n + 1);
}
int main()
{
    num(1);
    return 0;
}