#include<stdio.h>
void myfunc (int x)
{
    x = 44444;
    printf(" myFunc er vitor : %d\n",x);
}
int main()
{
    int x = 40;
    printf("main function er vitor : %d\n",x);
    myfunc(x);
    x = 14;
    printf(" main func er vitor after change the value of x- %d",x);
    return 0;
}