#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&numbers[i]);
    }

    //print the array : 
      for (int i = 0; i < n; i++)
    {
        if(numbers[i] <= 10 )
        {
            printf("A[%d] = %d\n",i,numbers[i]);
        }
    }
    return 0;
}