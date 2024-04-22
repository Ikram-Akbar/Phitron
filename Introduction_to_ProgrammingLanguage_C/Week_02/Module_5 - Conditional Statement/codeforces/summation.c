#include<stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    int d1 = a%10;
    int d2 = b%10;
    int sum = d1 + d2;

    printf("%d",sum); 
    return 0;
}