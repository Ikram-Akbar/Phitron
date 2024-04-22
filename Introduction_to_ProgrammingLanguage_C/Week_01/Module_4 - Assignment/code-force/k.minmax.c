#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d ",&a,&b,&c);
    int max = a;

    if((b>max))
    {
       b = max;
    }
    else if( c> max )
    {
        c = max;
    }

    int min = a;

    if(b<min)
    {
        b = min;
    }
    else if (c<min) 
    {
        c = min;
    }
    printf("%d %d", min , max);
    return 0;
}