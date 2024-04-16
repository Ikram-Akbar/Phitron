#include<stdio.h>
int main()
{
    int n;
    int sum= 0;
    scanf("%d",&n);
    int numbers[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&numbers[i]);
    }

    // to see the value of Array : - 
    for (int i = 0; i < n; i++)
    {
    //    printf("%d\n",numbers[i] );
       sum += numbers[i];
    }
    printf("%d",sum);
    return 0;
}