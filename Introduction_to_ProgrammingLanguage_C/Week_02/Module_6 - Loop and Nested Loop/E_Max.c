#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int val;
    int maxx = 0;
    for (int i = 1; i <=x ; i++)
    {
        scanf("%d",&val);
        if(val > maxx)
        {
            maxx = val;
        }
    }
    printf("%d",maxx);
     
    return 0;
}