#include<stdio.h>
int main()
{
    long long int a,b,c,d;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    long long int res = a*b*c*d;
    long long int digt = res % 100;
    printf("%lld",digt);
    return 0;
}