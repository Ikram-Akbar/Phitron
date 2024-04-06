#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int digit = num/1000;
    if(digit % 2 != 0)
    {
        printf("ODD\n");
    }
    else
    {
        printf("EVEN\n");
    }
    return 0;
}