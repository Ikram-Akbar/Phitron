#include <stdio.h>

int add(int a, int b)
{
    int res = a + b;
    return res;
}
int main()
{
    int sum = add(10, 20);
    printf("sum = %d\n", sum);
    return 0;
}