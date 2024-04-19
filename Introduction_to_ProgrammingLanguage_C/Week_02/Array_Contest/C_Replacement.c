#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int numbers[n];

    // for getting the array element by loop : 
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&numbers[i]);
    }

    // print the array elements : 
    for (int i = 0; i < n; i++)
    {
        if(numbers[i] > 0)
        {
            numbers[i] = 1;
        }
        else if( numbers[i] < 0)
        {
            numbers[i] = 2;
        }
      printf("%d ",numbers[i]);
    }
    
     
    return 0;
}