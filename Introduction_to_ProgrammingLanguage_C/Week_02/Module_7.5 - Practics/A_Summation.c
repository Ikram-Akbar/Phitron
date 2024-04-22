#include<stdio.h>
int main()
{
    int n , x;
    long long int sum = 0;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
       scanf("%d",&x);
       sum +=x;
    }
     if(sum < 0)
    {
        sum = sum *(-1);
        printf("%lld",sum);
    }
    else
    {
        printf("%lld",sum);
    }
     
    return 0;
}